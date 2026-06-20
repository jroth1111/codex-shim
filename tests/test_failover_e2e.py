"""End-to-end failover + circuit-breaker recording against the real ShimServer.

Proves the behavioral fixes that unit tests cannot, offline against mock
upstreams:

* per-provider breaker recording -- when a turn's primary provider fails and the
  gateway fails over to a healthy provider, BOTH outcomes are recorded against
  their own provider (the primary's failure is not masked by the hop's success);
* streaming pre-first-byte failover -- a streaming turn whose primary errors
  before any byte is flushed rolls over to a streaming backup and the client
  still receives a complete, translated SSE response.
"""
from __future__ import annotations

import json

from aiohttp import web
from aiohttp.test_utils import TestClient, TestServer

from codex_shim.server import ShimServer


def _autouse_clean(monkeypatch, tmp_path):
    # Keep ChatGPT/Cursor passthrough out of discovery so routing is deterministic.
    missing = tmp_path / "missing-auth.json"
    monkeypatch.setattr("codex_shim.settings.DEFAULT_CODEX_AUTH", missing)
    monkeypatch.setattr("codex_shim.providers.cursor.passthrough.cursor_passthrough_available", lambda **_: False)
    monkeypatch.setattr("codex_shim.providers.cursor_passthrough_available", lambda **_: False)
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_ENABLED", raising=False)


async def _upstream(state):
    state.setdefault("chat_calls", 0)
    state.setdefault("messages_calls", 0)

    async def chat(request):
        state["chat_calls"] += 1
        return web.json_response({"error": {"message": "primary down"}}, status=500)

    async def messages(request):
        state["messages_calls"] += 1
        return web.json_response(
            {
                "content": [{"type": "text", "text": "handled by backup"}],
                "stop_reason": "end_turn",
                "usage": {"input_tokens": 2, "output_tokens": 1},
            }
        )

    app = web.Application()
    app.router.add_post("/v1/chat/completions", chat)
    app.router.add_post("/v1/messages", messages)
    client = TestClient(TestServer(app))
    await client.start_server()
    return client


def _settings_file(tmp_path, upstream_v1):
    path = tmp_path / "models.json"
    path.write_text(
        json.dumps(
            {
                "models": [
                    {"slug": "primary", "model": "primary-real", "display_name": "Primary",
                     "provider": "openai", "base_url": upstream_v1, "api_key": "pk"},
                    {"slug": "backup", "model": "backup-real", "display_name": "Backup",
                     "provider": "anthropic", "base_url": upstream_v1, "api_key": "bk"},
                ],
                "failover": {"enabled": True, "chains": {"primary": ["backup"]}},
            }
        )
    )
    return path


async def test_failover_records_primary_failure_and_hop_success(tmp_path, monkeypatch):
    _autouse_clean(monkeypatch, tmp_path)
    state = {}
    upstream = await _upstream(state)
    settings_path = _settings_file(tmp_path, str(upstream.make_url("/v1")))

    server = ShimServer(settings_path)
    shim = TestClient(TestServer(server.app()))
    await shim.start_server()
    try:
        resp = await shim.post(
            "/v1/responses",
            json={"model": "primary", "input": "hello", "stream": False},
        )
        # The turn succeeds because it failed over from the 500 primary to backup.
        assert resp.status == 200
        assert state["chat_calls"] >= 1  # primary was attempted
        assert state["messages_calls"] == 1  # failed over to backup exactly once

        # The headline fix: the PRIMARY provider's failure is recorded to the
        # breaker even though the turn ultimately succeeded via the hop. Under the
        # old single-record-at-end logic, openai would have zero samples here.
        primary_health = server.provider_health.get("openai")
        assert primary_health.sample_count >= 1
        assert primary_health.failure_rate > 0.0

        # The hop's success is recorded against ITS provider (anthropic), healthy.
        backup_health = server.provider_health.get("anthropic")
        assert backup_health.sample_count >= 1
        assert backup_health.failure_rate == 0.0
    finally:
        await shim.close()
        await upstream.close()


async def _streaming_upstream(state):
    """openai chat upstream: the primary model 503s before any byte; the backup
    model returns a real SSE stream the shim must translate to Responses SSE."""
    state.setdefault("models_called", [])

    async def chat(request):
        body = await request.json()
        model = body.get("model")
        state["models_called"].append(model)
        if model == "primary-real":
            # Fails BEFORE streaming a single byte -> pre-first-byte failover.
            return web.json_response({"error": {"message": "overloaded"}}, status=503)
        resp = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await resp.prepare(request)
        await resp.write(b"data: " + json.dumps({"choices": [{"delta": {"content": "from backup"}}]}).encode() + b"\n\n")
        await resp.write(
            b"data: " + json.dumps({"choices": [{"delta": {}}], "usage": {"prompt_tokens": 2, "completion_tokens": 1, "total_tokens": 3}}).encode() + b"\n\n"
        )
        await resp.write(b"data: [DONE]\n\n")
        await resp.write_eof()
        return resp

    app = web.Application()
    app.router.add_post("/v1/chat/completions", chat)
    client = TestClient(TestServer(app))
    await client.start_server()
    return client


def _sse_events(text: str) -> list[dict]:
    events = []
    for block in text.split("\n\n"):
        if not block.startswith("data:"):
            continue
        data = block.removeprefix("data:").strip()
        if data and data != "[DONE]":
            try:
                events.append(json.loads(data))
            except json.JSONDecodeError:
                pass
    return events


async def test_streaming_pre_first_byte_failover_delivers_backup_stream(tmp_path, monkeypatch):
    _autouse_clean(monkeypatch, tmp_path)
    state = {}
    upstream = await _streaming_upstream(state)
    upstream_v1 = str(upstream.make_url("/v1"))
    settings_path = tmp_path / "models.json"
    settings_path.write_text(
        json.dumps(
            {
                "models": [
                    {"slug": "primary", "model": "primary-real", "display_name": "Primary",
                     "provider": "openai", "base_url": upstream_v1, "api_key": "pk"},
                    {"slug": "backup", "model": "backup-real", "display_name": "Backup",
                     "provider": "openai", "base_url": upstream_v1, "api_key": "bk"},
                ],
                "failover": {"enabled": True, "chains": {"primary": ["backup"]}},
            }
        )
    )

    server = ShimServer(settings_path)
    shim = TestClient(TestServer(server.app()))
    await shim.start_server()
    try:
        resp = await shim.post(
            "/v1/responses",
            json={"model": "primary", "input": "hello", "stream": True},
        )
        # A streaming turn that 503'd on the primary BEFORE any byte still
        # completes: the gateway rolled over to the streaming backup.
        assert resp.status == 200
        body = await resp.text()
        events = _sse_events(body)
        assert any(e.get("type") == "response.completed" for e in events), "no response.completed in failed-over stream"
        assert "from backup" in body  # the backup's streamed content reached the client
        assert "primary-real" in state["models_called"]  # primary was tried
        assert "backup-real" in state["models_called"]  # and failover streamed from backup
    finally:
        await shim.close()
        await upstream.close()
