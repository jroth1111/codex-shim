from __future__ import annotations

import asyncio
from typing import Any

import pytest
from aiohttp import web
from aiohttp.test_utils import TestClient, TestServer

from codex_shim.providers.cursor_agent.envelope import build_run_request_skeleton, structural_self_check
from codex_shim.providers.cursor_agent.headers import endpoint_urls
from codex_shim.providers.cursor_agent.connect_framing import encode_connect_frame
from codex_shim.providers.cursor_agent.live_http1 import stream_http1_live_events
from codex_shim.providers.cursor_agent.live_run import stream_run_live_events
from codex_shim.providers.cursor_agent.proto_decode import (
    decode_interaction_update,
    iter_proto_strings,
    proto_payload_to_events,
)
from codex_shim.providers.cursor_agent.proto_wire import (
    encode_bidi_append_request,
    encode_bidi_request_id,
    encode_client_envelope_bytes,
)
from codex_shim.providers.cursor_agent.live_http1 import collect_http1_live_turn
from codex_shim.providers.cursor_agent.transport import (
    CursorAgentTransport,
    resolve_cursor_agent_transport_mode,
)
from codex_shim.providers.cursor_agent.types import CursorAgentPreparedRequest
from codex_shim.routing import parse_inference_context
from codex_shim.providers.cursor_agent.decode import write_cursor_agent_event
from codex_shim.streaming import ResponsesStreamState


def test_encode_client_envelope_roundtrip_fields():
    inference = parse_inference_context({"metadata": {"mode": "plan"}}, resolved_model_id="auto")
    skeleton = build_run_request_skeleton({"input": "hello"}, inference=inference)
    payload = encode_client_envelope_bytes(skeleton)
    assert len(payload) > 16
    append = encode_bidi_append_request(request_id="req-1", append_seqno=0, data=payload)
    assert b"req-1" in append
    assert payload.hex() in append.decode("latin-1")


def test_encode_bidi_request_id():
    body = encode_bidi_request_id("abc-123")
    assert b"abc-123" in body


def test_iter_proto_strings_finds_nested_text():
    from codex_shim.providers.cursor_agent.proto_wire import field_string, field_message

    inner = field_string(1, "Hello from agent")
    wrapped = field_message(1, inner)
    found = list(iter_proto_strings(wrapped))
    assert "Hello from agent" in found


def test_decode_interaction_update_text_delta():
    from codex_shim.providers.cursor_agent.proto_wire import field_message, field_string

    text_delta = field_string(1, "schema hello")
    interaction = field_message(1, text_delta)
    events = decode_interaction_update(interaction)
    assert events == [{"type": "text", "text": "schema hello"}]


def test_decode_interaction_update_tool_call_started():
    from codex_shim.providers.cursor_agent.proto_decode import decode_tool_call
    from codex_shim.providers.cursor_agent.proto_wire import field_message, field_string

    read_args = field_string(1, "/etc/hosts")
    tool_call = field_message(8, field_message(1, read_args))
    assert decode_tool_call(tool_call)["tool"]["case"] == "readToolCall"
    started = b"".join(
        [
            field_string(1, "call-abc"),
            field_message(2, tool_call),
            field_string(3, "model-1"),
        ]
    )
    interaction = field_message(2, started)
    events = decode_interaction_update(interaction)
    assert len(events) == 1
    assert events[0]["type"] == "tool_call"
    assert events[0]["subtype"] == "started"
    assert events[0]["call_id"] == "call-abc"
    assert events[0]["tool_call"]["tool"]["case"] == "readToolCall"


def test_proto_payload_to_events_prefers_schema_over_heuristic():
    from codex_shim.providers.cursor_agent.proto_wire import field_message, field_string

    text_delta = field_string(1, "only-schema")
    payload = field_message(1, text_delta)
    events = proto_payload_to_events(payload)
    assert events == [{"type": "text", "text": "only-schema"}]


def test_decode_tool_call_shell_args():
    from codex_shim.providers.cursor_agent.proto_decode import decode_tool_call
    from codex_shim.providers.cursor_agent.proto_wire import field_message, field_string

    shell_args = b"".join([field_string(1, "echo hi"), field_string(2, "/tmp")])
    shell_call = field_message(1, field_message(1, shell_args))
    decoded = decode_tool_call(shell_call)
    assert decoded["tool"]["case"] == "shellToolCall"
    assert decoded["tool"]["value"]["args"]["command"] == "echo hi"
    assert decoded["tool"]["value"]["args"]["workingDirectory"] == "/tmp"


@pytest.mark.asyncio
async def test_fetch_usable_models_mock_server(monkeypatch):
    from codex_shim.providers.cursor_agent.catalog_rpc import fetch_usable_model_ids
    from codex_shim.providers.cursor_agent.proto_wire import field_message, field_string

    details = field_string(1, "gpt-5")
    body = field_message(1, details)

    async def handler(request: web.Request) -> web.Response:
        assert request.path.endswith("GetUsableModels")
        return web.Response(body=body, headers={"content-type": "application/proto"})

    app = web.Application()
    app.router.add_post("/agent.v1.AgentService/GetUsableModels", handler)

    monkeypatch.setenv("CODEX_SHIM_CURSOR_AUTH_TOKEN", "tok")
    client = TestClient(TestServer(app))
    await client.start_server()
    base = str(client.make_url("")).rstrip("/")

    ids = await fetch_usable_model_ids(endpoint=base, timeout_seconds=5.0)
    await client.close()
    assert ids == ["gpt-5"]


def test_decode_get_usable_models_response():
    from codex_shim.providers.cursor_agent.catalog_rpc import decode_get_usable_models_response
    from codex_shim.providers.cursor_agent.proto_wire import field_message, field_string

    details = field_string(1, "claude-4-sonnet")
    response = field_message(1, details)
    assert decode_get_usable_models_response(response) == ["claude-4-sonnet"]


def test_decode_interaction_update_token_delta():
    from codex_shim.providers.cursor_agent.proto_wire import field_message, field_varint

    token_delta = field_varint(1, 42)
    interaction = field_message(8, token_delta)
    events = decode_interaction_update(interaction)
    assert events == [{"type": "usage_delta", "tokens": 42}]


@pytest.mark.asyncio
async def test_collect_http1_live_turn(monkeypatch):
    inference = parse_inference_context({}, resolved_model_id="default")
    skeleton = build_run_request_skeleton({"input": "x"}, inference=inference)
    prepared = CursorAgentPreparedRequest(
        headers={},
        endpoints=endpoint_urls("http://127.0.0.1:9"),
        envelope=skeleton,
        transport_mode="http1",
    )

    async def fake_stream(_prepared):
        yield {"type": "text", "text": "Hello"}
        yield {"type": "stream_end"}

    monkeypatch.setattr(
        "codex_shim.providers.cursor_agent.live_http1.stream_http1_live_events",
        fake_stream,
    )
    result = await collect_http1_live_turn(prepared)
    assert "Hello" in result["text"]


@pytest.mark.asyncio
async def test_live_http1_mock_server_stream(monkeypatch):
    captured: dict[str, Any] = {}
    run_sse_responses: set[web.StreamResponse] = set()
    run_sse_ready = asyncio.Event()

    async def run_sse(request: web.Request) -> web.StreamResponse:
        captured["run_sse_body"] = await request.read()
        resp = web.StreamResponse(
            status=200,
            headers={
                "content-type": "application/connect+proto",
                "connect-protocol-version": "1",
            },
        )
        await resp.prepare(request)
        run_sse_responses.add(resp)
        run_sse_ready.set()
        return resp

    async def bidi_append(request: web.Request) -> web.Response:
        captured["bidi_body"] = await request.read()
        await run_sse_ready.wait()
        for stream in list(run_sse_responses):
            if not stream.prepared:
                continue
            await stream.write_eof()
        return web.Response(body=b"", headers={"content-type": "application/proto"})

    app = web.Application()
    app.router.add_post("/agent.v1.AgentService/RunSSE", run_sse)
    app.router.add_post("/aiserver.v1.BidiService/BidiAppend", bidi_append)

    monkeypatch.setenv("CODEX_SHIM_CURSOR_AUTH_TOKEN", "test-token")
    client = TestClient(TestServer(app))
    await client.start_server()
    base = str(client.make_url("")).rstrip("/")

    inference = parse_inference_context({}, resolved_model_id="default")
    skeleton = build_run_request_skeleton({"input": "ping"}, inference=inference)
    prepared = CursorAgentPreparedRequest(
        headers={"x-request-id": "rid"},
        endpoints=endpoint_urls(base),
        envelope=skeleton,
        transport_mode="http1",
    )

    events = []
    try:
        async with asyncio.timeout(5):
            async for event in stream_http1_live_events(prepared):
                events.append(event)
                if event.get("type") == "stream_end":
                    break
    except TimeoutError:
        pass

    await client.close()
    assert captured.get("run_sse_body")
    assert captured.get("bidi_body")
    assert b"ping" in captured["run_sse_body"] or len(captured["run_sse_body"]) > 0


def test_resolve_cursor_agent_transport_mode(monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_CURSOR_AGENT_TRANSPORT", raising=False)
    assert resolve_cursor_agent_transport_mode() == "http1"
    monkeypatch.setenv("CODEX_SHIM_CURSOR_AGENT_TRANSPORT", "http2")
    assert resolve_cursor_agent_transport_mode() == "http2"
    assert resolve_cursor_agent_transport_mode("run") == "http2"


@pytest.mark.asyncio
async def test_live_run_mock_server_stream(monkeypatch):
    from codex_shim.providers.cursor_agent.proto_wire import field_message, field_string

    text_delta = field_string(1, "run ok")
    interaction = field_message(1, text_delta)
    response_frames = encode_connect_frame(interaction) + encode_connect_frame(b"", end=True)

    async def run_handler(request: web.Request) -> web.StreamResponse:
        body = await request.read()
        assert len(body) > 10
        resp = web.StreamResponse(
            status=200,
            headers={
                "content-type": "application/connect+proto",
                "connect-protocol-version": "1",
            },
        )
        await resp.prepare(request)
        await resp.write(response_frames)
        await resp.write_eof()
        return resp

    app = web.Application()
    app.router.add_post("/agent.v1.AgentService/Run", run_handler)

    monkeypatch.setenv("CODEX_SHIM_CURSOR_AUTH_TOKEN", "test-token")
    client = TestClient(TestServer(app))
    await client.start_server()
    base = str(client.make_url("")).rstrip("/")

    inference = parse_inference_context({}, resolved_model_id="default")
    skeleton = build_run_request_skeleton({"input": "ping"}, inference=inference)
    prepared = CursorAgentPreparedRequest(
        headers={"x-request-id": "rid"},
        endpoints=endpoint_urls(base),
        envelope=skeleton,
        transport_mode="http2",
    )

    events = []
    try:
        async with asyncio.timeout(5):
            async for event in stream_run_live_events(prepared):
                events.append(event)
                if event.get("type") == "stream_end":
                    break
    except TimeoutError:
        pass

    await client.close()
    texts = [e.get("text") for e in events if e.get("type") == "text"]
    assert "run ok" in texts


@pytest.mark.asyncio
async def test_transport_live_http2_uses_run_stream(monkeypatch):
    inference = parse_inference_context({}, resolved_model_id="default")
    skeleton = build_run_request_skeleton({"input": "x"}, inference=inference)
    prepared = CursorAgentPreparedRequest(
        headers={},
        endpoints=endpoint_urls("http://127.0.0.1:9"),
        envelope=skeleton,
        transport_mode="http2",
    )

    async def fake_stream(_prepared):
        yield {"type": "text", "text": "via-run"}
        yield {"type": "stream_end"}

    monkeypatch.setenv("CODEX_SHIM_CURSOR_AGENT_LIVE", "1")
    monkeypatch.setattr(
        "codex_shim.providers.cursor_agent.transport.stream_run_live_events",
        fake_stream,
    )
    transport = CursorAgentTransport(transport_mode="http2")
    out = [e async for e in transport.stream_events(prepared)]
    assert out[0]["text"] == "via-run"


@pytest.mark.asyncio
async def test_transport_live_http1_uses_stream(monkeypatch):
    inference = parse_inference_context({}, resolved_model_id="default")
    skeleton = build_run_request_skeleton({"input": "x"}, inference=inference)
    prepared = CursorAgentPreparedRequest(
        headers={},
        endpoints=endpoint_urls("http://127.0.0.1:9"),
        envelope=skeleton,
        transport_mode="http1",
    )

    async def fake_stream(_prepared):
        yield {"type": "text", "text": "hi"}
        yield {"type": "stream_end"}

    monkeypatch.setenv("CODEX_SHIM_CURSOR_AGENT_LIVE", "1")
    monkeypatch.setattr(
        "codex_shim.providers.cursor_agent.transport.stream_http1_live_events",
        fake_stream,
    )
    transport = CursorAgentTransport(transport_mode="http1")
    out = [e async for e in transport.stream_events(prepared)]
    assert out[0]["text"] == "hi"


@pytest.mark.asyncio
async def test_write_cursor_agent_event_suppresses_tool_call_in_delegate_mode():
    state = ResponsesStreamState("cursor-auto", delegate_mode=True)
    response = object()
    event = {
        "type": "tool_call",
        "subtype": "started",
        "call_id": "call_1",
        "tool_call": {"name": "shell"},
    }
    handled = await write_cursor_agent_event(state, response, event)
    assert handled is True
    assert state.anomalies.get("delegated_tool_events_suppressed", 0) >= 1
    assert not state.tool_calls


@pytest.mark.asyncio
async def test_write_cursor_agent_event_forwards_text_in_delegate_mode():
    state = ResponsesStreamState("cursor-auto", delegate_mode=True)
    captured: list[str] = []

    async def fake_write_chat_delta(_response, delta):
        captured.append(delta["choices"][0]["delta"]["content"])

    state.write_chat_delta = fake_write_chat_delta
    handled = await write_cursor_agent_event(state, object(), {"type": "text", "text": "hello"})
    assert handled is True
    assert captured == ["hello"]


def test_envelope_includes_workspace_root(tmp_path):
    workspace = tmp_path / "repo"
    workspace.mkdir()
    inference = parse_inference_context({}, resolved_model_id="auto")
    skeleton = build_run_request_skeleton({"input": "hello"}, inference=inference, workspace=workspace)
    checks = structural_self_check(skeleton, inference, workspace=workspace)
    assert all(row["match"] for row in checks if row["key"] == "userMessage.selectedContext.workspaceRoot")
