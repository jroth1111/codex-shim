from __future__ import annotations

import json

import pytest
from aiohttp import web

from codex_shim.governance import GovernanceAuditSink
from codex_shim.image_gate import needs_image_generation
from codex_shim.observability import ObservabilitySink
from codex_shim.persistence import JsonOperationalStore
from codex_shim.providers import ProviderDispatcher
from codex_shim.providers.cursor_agent import build_run_request_skeleton
from codex_shim.providers.cursor_agent.envelope import structural_self_check
from codex_shim.providers.cursor_agent.transport import CursorAgentTransport
from codex_shim.routing import (
    AGENT_MODE_ASK,
    AGENT_MODE_DEBUG,
    AGENT_MODE_PLAN,
    agent_mode_for_cli_mode,
    metadata_mode_for_cli_mode,
    parse_inference_context,
    resolve_model_route,
)
from codex_shim.routing.model_catalog import prefetch_model_catalog
from codex_shim.routing.model_resolution import resolve_auto_model, resolve_model_with_prefetch
from codex_shim.server import _executed_tool_count_from_response_payload
from codex_shim.settings import TRANSPORT_CURSOR_AGENT, ModelSettings
from codex_shim.tools import ToolPolicy
from codex_shim.workers import enqueue_job, run_worker_once


def test_resolve_model_route_returns_selected_slug(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "demo-model",
                        "model": "gpt-4o-mini",
                        "displayName": "Demo",
                        "provider": "generic-chat-completion-api",
                        "baseURL": "https://example.test/v1",
                    }
                ]
            }
        )
    )
    settings = ModelSettings(settings_path)
    resolution = resolve_model_route(settings, {"model": "demo-model"})
    assert resolution.selected_route.slug == "demo-model"
    assert resolution.requested_model == "demo-model"
    assert resolution.selected_by == "slug"


@pytest.mark.asyncio
async def test_provider_dispatcher_uses_openai_handler(monkeypatch):
    async def _handler(request, route, body, as_responses, prepared, stream_response):
        assert as_responses is True
        return web.json_response({"ok": True, "model": route.slug, "stream": bool(body.get("stream"))})

    dispatcher = ProviderDispatcher(
        openai_handler=_handler,
        anthropic_handler=_handler,
        cursor_acp_handler=_handler,
        cursor_cli_handler=_handler,
    )
    class _Route:
        slug = "m1"
        provider = "generic"
        is_openai_chat = True
        is_anthropic = False
        is_cursor_acp = False
        is_cursor_cli = False

    resp = await dispatcher.dispatch(None, _Route(), {"stream": False}, as_responses=True)
    assert resp.status == 200


@pytest.mark.asyncio
async def test_provider_dispatcher_retries_retryable_status():
    calls = {"count": 0}

    async def _handler(request, route, body, as_responses, prepared, stream_response):
        calls["count"] += 1
        status = 503 if calls["count"] == 1 else 200
        return web.json_response({"ok": status == 200}, status=status)

    dispatcher = ProviderDispatcher(
        openai_handler=_handler,
        anthropic_handler=_handler,
        cursor_acp_handler=_handler,
        cursor_cli_handler=_handler,
    )

    class _Route:
        slug = "m1"
        provider = "generic"
        is_openai_chat = True
        is_anthropic = False
        is_cursor_acp = False
        is_cursor_cli = False

    resp = await dispatcher.dispatch(None, _Route(), {"stream": False}, as_responses=True)
    assert resp.status == 200
    assert calls["count"] == 2


@pytest.mark.asyncio
async def test_provider_dispatcher_stats_capture_attempts():
    async def _handler(request, route, body, as_responses, prepared, stream_response):
        return web.json_response({"ok": True}, status=200)

    dispatcher = ProviderDispatcher(
        openai_handler=_handler,
        anthropic_handler=_handler,
        cursor_acp_handler=_handler,
        cursor_cli_handler=_handler,
    )

    class _Route:
        slug = "m1"
        provider = "generic"
        is_openai_chat = True
        is_anthropic = False
        is_cursor_acp = False
        is_cursor_cli = False

    stats = {}
    resp = await dispatcher.dispatch(None, _Route(), {"stream": False}, as_responses=True, stats=stats)
    assert resp.status == 200
    assert stats["attempts"] == 1


def test_governance_and_observability_sinks_write_expected_fields(tmp_path):
    governance_path = tmp_path / "governance.jsonl"
    observability_path = tmp_path / "observability.jsonl"
    governance = GovernanceAuditSink(governance_path)
    observability = ObservabilitySink(observability_path)

    governance.emit(
        path="/v1/responses",
        provider="generic-chat-completion-api",
        model_slug="demo-model",
        outcome="ok",
        body={"tools": [{"type": "function"}]},
        selected_by="slug",
        retry_attempts=2,
        fallback_used=True,
        tool_count_override=2,
    )
    observability.emit(
        stage="route_selected",
        path="/v1/responses",
        provider="generic-chat-completion-api",
        model_slug="demo-model",
        attributes={"stream": False},
    )

    gov_event = json.loads(governance_path.read_text().strip())
    obs_event = json.loads(observability_path.read_text().strip())

    assert gov_event["provider"] == "generic-chat-completion-api"
    assert gov_event["requested_tool_count"] == 1
    assert gov_event["executed_tool_count"] == 2
    assert gov_event["model_slug"] == "demo-model"
    assert gov_event["selected_by"] == "slug"
    assert gov_event["retry_attempts"] == 2
    assert gov_event["fallback_used"] is True
    assert obs_event["stage"] == "route_selected"
    assert obs_event["provider"] == "generic-chat-completion-api"


def test_worker_queue_processes_jobs(tmp_path, monkeypatch):
    queue_path = tmp_path / "jobs.jsonl"
    results_path = tmp_path / "results.jsonl"
    monkeypatch.setattr("codex_shim.workers.DEFAULT_QUEUE_PATH", queue_path)
    monkeypatch.setattr("codex_shim.workers.DEFAULT_RESULTS_PATH", results_path)
    enqueue_job("capture_ingest", {"fixture": "S1"}, queue_path=queue_path)
    assert run_worker_once(queue_path=queue_path, results_path=results_path) == 0
    lines = [line for line in results_path.read_text().splitlines() if line.strip()]
    assert len(lines) == 1
    payload = json.loads(lines[0])
    assert payload["type"] == "capture_ingest"


def test_executed_tool_count_from_response_payload_counts_tool_calls():
    payload = {
        "output": [
            {"type": "reasoning"},
            {"type": "function_call"},
            {"type": "message"},
            {"type": "web_search_call"},
            {"type": "output_text"},
        ]
    }
    assert _executed_tool_count_from_response_payload(payload) == 2


@pytest.mark.parametrize(
    ("cli_mode", "agent_value", "metadata_mode"),
    [
        ("default", 1, "default"),
        ("plan", AGENT_MODE_PLAN, "plan"),
        ("ask", AGENT_MODE_ASK, "search"),
        ("debug", AGENT_MODE_DEBUG, "debug"),
    ],
)
def test_agent_mode_mapping(cli_mode, agent_value, metadata_mode):
    mapped = agent_mode_for_cli_mode(cli_mode)
    assert mapped.value == agent_value
    assert metadata_mode_for_cli_mode(cli_mode) == metadata_mode


def test_parse_inference_context_force_and_surface():
    ctx = parse_inference_context(
        {"metadata": {"mode": "plan", "yolo": True, "surface": "acp"}},
        route_transport="cursor_acp",
    )
    assert ctx.cli_mode == "plan"
    assert ctx.force_run_everything is True
    assert ctx.surface == "acp"
    assert ctx.metadata_mode == "plan"


def test_tool_policy_run_everything(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "cursor-local",
                        "model": "auto",
                        "displayName": "Cursor",
                        "provider": "cursor-agent-cli",
                        "baseURL": "",
                    }
                ]
            }
        )
    )
    route = ModelSettings(settings_path).by_slug_or_model("cursor-local")
    assert route is not None
    inference = parse_inference_context({"metadata": {"yolo": True}}, route_transport=route.transport)
    policy = ToolPolicy()
    result = policy.evaluate(body={"tools": [{"type": "function", "name": "run"}]}, route=route, inference=inference)
    assert result["force_run_everything"] is True
    assert result["tool_count"] == 1


def test_resolve_auto_model_prefers_cursor_route(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "openai-mini",
                        "model": "gpt-4o-mini",
                        "displayName": "Mini",
                        "provider": "generic-chat-completion-api",
                        "baseURL": "https://example.test/v1",
                    },
                    {
                        "slug": "cursor-auto",
                        "model": "auto",
                        "displayName": "Cursor Auto",
                        "provider": "cursor-agent-cli",
                        "baseURL": "",
                    },
                ]
            }
        )
    )
    settings = ModelSettings(settings_path)
    auto = resolve_auto_model(settings, "auto")
    assert auto is not None
    assert auto.selected_by == "auto"
    assert auto.route.slug == "cursor-auto"


def test_resolve_model_route_auto(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "cursor-auto",
                        "model": "default",
                        "displayName": "Cursor",
                        "provider": "cursor-cli",
                        "baseURL": "",
                    }
                ]
            }
        )
    )
    settings = ModelSettings(settings_path)
    resolution = resolve_model_route(settings, {"model": "auto"})
    assert resolution.selected_by == "auto"
    assert resolution.prefetch_status == "loaded"
    assert resolution.inference.resolved_model_id


def test_native_transport_mode_per_model_row(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "native-run",
                        "model": "auto",
                        "provider": "cursor-agent-cli",
                        "useNativeTransport": True,
                        "nativeTransportMode": "http2",
                    }
                ]
            }
        )
    )
    route = ModelSettings(settings_path).by_slug_or_model("native-run")
    assert route is not None
    assert route.native_transport_mode == "http2"

    transport = CursorAgentTransport()
    prepared = transport.prepare(
        {"input": "hi"},
        inference=parse_inference_context({}, resolved_model_id="default"),
        model_row=route.raw,
    )
    assert prepared.transport_mode == "http2"


def test_use_native_transport_sets_cursor_agent_transport(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "native",
                        "model": "auto",
                        "displayName": "Native",
                        "provider": "cursor-agent-cli",
                        "useNativeTransport": True,
                        "baseURL": "",
                    }
                ]
            }
        )
    )
    route = ModelSettings(settings_path).by_slug_or_model("native")
    assert route is not None
    assert route.transport == TRANSPORT_CURSOR_AGENT
    assert route.use_native_transport is True


def test_build_run_request_skeleton_matches_mode():
    inference = parse_inference_context({"metadata": {"mode": "ask"}}, resolved_model_id="default")
    skeleton = build_run_request_skeleton({"input": "hello"}, inference=inference)
    checks = structural_self_check(skeleton, inference)
    assert all(row["match"] for row in checks)
    value = skeleton["clientEnvelope"]["message"]["value"]
    assert value["_sideChannelMetadata"]["mode"] == "search"


def test_governance_emits_inference_fields(tmp_path):
    governance_path = tmp_path / "governance.jsonl"
    governance = GovernanceAuditSink(governance_path)
    governance.emit(
        path="/v1/responses",
        provider="cursor-agent-cli",
        model_slug="demo",
        outcome="ok",
        body={},
        inference_mode="plan",
        metadata_mode="plan",
        surface="cli",
        model_prefetch_status="loaded",
        force_run_everything=True,
        transport_selected="cursor-agent-grpc",
        fallback_reason="upstream_status_503",
    )
    event = json.loads(governance_path.read_text().strip())
    assert event["inference_mode"] == "plan"
    assert event["force_run_everything"] is True
    assert event["fallback_reason"] == "upstream_status_503"


@pytest.mark.asyncio
async def test_provider_dispatcher_skips_retry_on_stream():
    calls = {"count": 0}

    async def _handler(request, route, body, as_responses, prepared, stream_response):
        calls["count"] += 1
        return web.json_response({"ok": False}, status=503)

    dispatcher = ProviderDispatcher(
        openai_handler=_handler,
        anthropic_handler=_handler,
        cursor_acp_handler=_handler,
        cursor_cli_handler=_handler,
    )

    class _Route:
        slug = "m1"
        provider = "generic"
        is_openai_chat = True
        is_anthropic = False
        is_cursor_acp = False
        is_cursor_cli = False
        is_cursor_agent = False

    from codex_shim.routing import RoutingPolicy

    policy = RoutingPolicy(max_retries=2, retry_on_stream=False)
    stats: dict = {}
    resp = await dispatcher.dispatch(None, _Route(), {"stream": True}, as_responses=True, policy=policy, stats=stats)
    assert resp.status == 503
    assert calls["count"] == 1
    assert stats["attempts"] == 1


def test_parse_shim_internal_metadata_keys():
    ctx = parse_inference_context({"_shim_mode": "plan", "metadata": {}})
    assert ctx.cli_mode == "plan"


def test_prefetch_model_catalog_live_rpc(monkeypatch, tmp_path):
    from codex_shim.routing.model_catalog import prefetch_model_catalog

    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "model": "default",
                        "provider": "cursor-cli",
                        "slug": "cursor",
                        "enabled": True,
                    }
                ]
            }
        )
    )
    monkeypatch.setenv("CODEX_SHIM_CURSOR_CATALOG_LIVE", "1")
    monkeypatch.setattr(
        "codex_shim.providers.fetch_usable_model_ids_sync",
        lambda **_: ["live-model-a", "live-model-b"],
    )
    snap = prefetch_model_catalog(ModelSettings(settings_path), store=None, force_refresh=True)
    assert snap.status == "loaded"
    assert snap.usable_model_ids == ("live-model-a", "live-model-b")
    assert snap.default_model_id == "live-model-a"


def test_prefetch_model_catalog_uses_store(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "m1",
                        "model": "gpt-4o-mini",
                        "displayName": "M1",
                        "provider": "generic-chat-completion-api",
                        "baseURL": "https://example.test/v1",
                    }
                ]
            }
        )
    )
    store = JsonOperationalStore(tmp_path / "ops")
    settings = ModelSettings(settings_path)
    snap = prefetch_model_catalog(settings, store)
    assert snap.status == "loaded"
    assert "gpt-4o-mini" in snap.usable_model_ids
    cached = store.get("model_catalog", "desktop")
    assert cached is not None


def test_tool_policy_blocks_image_generation_when_unsupported(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "no-img",
                        "model": "m",
                        "displayName": "M",
                        "provider": "cursor-agent-cli",
                        "baseURL": "",
                    }
                ]
            }
        )
    )
    route = ModelSettings(settings_path).by_slug_or_model("no-img")
    assert route is not None
    body = {"tools": [{"type": "image_generation", "name": "image_generation"}]}
    assert needs_image_generation(body)
    block = ToolPolicy().image_generation_block(body, route)
    assert block is not None
    assert block.status == 400


def test_observability_emit_with_inference(tmp_path):
    path = tmp_path / "obs.jsonl"
    sink = ObservabilitySink(path)
    sink.emit_with_inference(
        stage="provider_dispatched",
        path="/v1/responses",
        provider="cursor-agent-cli",
        model_slug="x",
        inference_attributes={"inference_mode": "plan", "surface": "cli"},
        attributes={"status": 200},
    )
    row = json.loads(path.read_text().strip())
    assert row["attributes"]["inference_mode"] == "plan"
    assert row["attributes"]["status"] == 200


def test_envelope_honors_chained_from_previous():
    inference = parse_inference_context({}, resolved_model_id="default")
    sk = build_run_request_skeleton(
        {"input": "hi"},
        inference=inference,
        chained_from_previous=True,
    )
    value = sk["clientEnvelope"]["message"]["value"]
    assert value["conversationState"]["chained"] is True


def test_unavailable_exact_model_returns_error_not_auto_fallback(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "hidden-cursor",
                        "model": "default",
                        "displayName": "Hidden",
                        "provider": "cursor-acp",
                        "command": "/no/such/binary",
                        "baseURL": "",
                        "enabled": True,
                    }
                ]
            }
        )
    )
    settings = ModelSettings(settings_path)
    route, selected_by, status, _, _ = resolve_model_with_prefetch(settings, "default")
    assert route is None
    assert selected_by == "unavailable"
    assert status == "error"


@pytest.mark.asyncio
async def test_compact_emits_inference_observability_stages(tmp_path, monkeypatch):
    from aiohttp.test_utils import TestClient, TestServer

    from codex_shim.server import ShimServer

    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "compact-model",
                        "model": "m1",
                        "displayName": "Compact",
                        "provider": "generic-chat-completion-api",
                        "baseURL": "https://example.test/v1",
                    }
                ]
            }
        )
    )
    obs_path = tmp_path / "obs.jsonl"

    async def fake_dispatch(self, request, route, body, *, as_responses, policy=None, stats=None, prepared=None, stream_response=None):
        return web.json_response(
            {
                "id": "resp_compact",
                "object": "response",
                "status": "completed",
                "model": route.slug,
                "output": [
                    {
                        "type": "context_compaction",
                        "summary": [{"type": "summary_text", "text": "summary"}],
                    }
                ],
            },
            status=200,
        )

    monkeypatch.setattr(ProviderDispatcher, "dispatch", fake_dispatch)
    server = ShimServer(settings_path)
    server.observability = ObservabilitySink(obs_path)
    shim_client = TestClient(TestServer(server.app()))
    await shim_client.start_server()
    resp = await shim_client.post(
        "/v1/responses/compact",
        json={"model": "compact-model", "input": [{"type": "compaction_trigger"}]},
    )
    await shim_client.close()
    assert resp.status == 200
    events = [json.loads(line) for line in obs_path.read_text().splitlines() if line.strip()]
    stages = [event["stage"] for event in events]
    assert "model_resolved" in stages
    assert "policy_applied" in stages
    assert "emulated_compact" in stages
    assert stages.index("model_resolved") < stages.index("policy_applied")
    emulated = next(event for event in events if event["stage"] == "emulated_compact")
    assert emulated["attributes"]["summary_status"] in {"projection_verified", "projection_unverified"}
    assert "summary_hash" in emulated["attributes"]


@pytest.mark.asyncio
async def test_allow_fallback_dispatches_secondary_route(tmp_path, monkeypatch):
    from aiohttp.test_utils import TestClient, TestServer

    from codex_shim.server import ShimServer

    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "primary",
                        "model": "m-primary",
                        "displayName": "Primary",
                        "provider": "generic-chat-completion-api",
                        "baseURL": "https://example.test/v1",
                    },
                    {
                        "slug": "secondary",
                        "model": "m-secondary",
                        "displayName": "Secondary",
                        "provider": "generic-chat-completion-api",
                        "baseURL": "https://example.test/v1",
                    },
                ]
            }
        )
    )
    slugs_called: list[str] = []

    async def fake_dispatch(
        self,
        request,
        route,
        body,
        *,
        as_responses,
        policy=None,
        stats=None,
        prepared=None,
        stream_response=None,
    ):
        slugs_called.append(route.slug)
        if route.slug == "primary":
            return web.json_response({"error": {"type": "upstream_error"}}, status=503)
        return web.json_response(
            {
                "id": "resp_test",
                "object": "response",
                "status": "completed",
                "model": route.slug,
                "output": [
                    {
                        "type": "message",
                        "role": "assistant",
                        "content": [{"type": "output_text", "text": "ok"}],
                    }
                ],
            },
            status=200,
        )

    monkeypatch.setattr(ProviderDispatcher, "dispatch", fake_dispatch)
    shim_client = TestClient(TestServer(ShimServer(settings_path).app()))
    await shim_client.start_server()
    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "primary",
            "input": [{"role": "user", "content": "hi"}],
            "allow_fallback": True,
        },
    )
    await shim_client.close()
    assert resp.status == 200
    assert slugs_called == ["primary", "secondary"]


def test_resolve_model_route_sets_fallback_candidate(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "a",
                        "model": "m-a",
                        "displayName": "A",
                        "provider": "generic-chat-completion-api",
                        "baseURL": "https://example.test/v1",
                    },
                    {
                        "slug": "b",
                        "model": "m-b",
                        "displayName": "B",
                        "provider": "generic-chat-completion-api",
                        "baseURL": "https://example.test/v1",
                    },
                ]
            }
        )
    )
    settings = ModelSettings(settings_path)
    resolution = resolve_model_route(settings, {"model": "a"})
    assert resolution.fallback_route is not None
    assert resolution.fallback_route.slug != resolution.selected_route.slug
