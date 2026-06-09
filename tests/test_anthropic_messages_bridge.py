from __future__ import annotations

import json

from aiohttp import web
from aiohttp.test_utils import TestClient, TestServer

from codex_shim.server import ShimServer


def _named_sse_events(text: str) -> list[tuple[str | None, dict]]:
    events = []
    for block in text.split("\n\n"):
        event_name = None
        data = None
        for line in block.splitlines():
            if line.startswith("event:"):
                event_name = line.removeprefix("event:").strip()
            elif line.startswith("data:"):
                data = line.removeprefix("data:").strip()
        if data and data != "[DONE]":
            events.append((event_name, json.loads(data)))
    return events


async def test_anthropic_messages_routes_to_openai_chat(tmp_path):
    captured = {}

    async def chat(request):
        captured["headers"] = dict(request.headers)
        captured["body"] = await request.json()
        return web.json_response(
            {
                "id": "chatcmpl_fake",
                "choices": [{"finish_reason": "stop", "message": {"role": "assistant", "content": "openai hello"}}],
                "usage": {"prompt_tokens": 2, "completion_tokens": 1, "total_tokens": 3},
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "generic-chat-completion-api",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/messages",
        json={
            "model": "real-openai",
            "system": "System",
            "messages": [{"role": "user", "content": [{"type": "text", "text": "hi"}]}],
            "max_tokens": 42,
        },
    )
    assert resp.status == 200
    payload = await resp.json()
    assert payload["type"] == "message"
    assert payload["model"] == "real-openai"
    assert payload["content"] == [{"type": "text", "text": "openai hello"}]
    assert payload["usage"] == {"input_tokens": 2, "output_tokens": 1}
    assert captured["headers"]["Authorization"] == "Bearer secret"
    assert captured["body"]["model"] == "real-openai"
    assert captured["body"]["max_tokens"] == 42
    assert captured["body"]["messages"] == [{"role": "system", "content": "System"}, {"role": "user", "content": "hi"}]

    await shim_client.close()
    await upstream_client.close()


async def test_anthropic_messages_passes_through_anthropic_upstream(tmp_path):
    captured = {}

    async def messages(request):
        captured["headers"] = dict(request.headers)
        captured["body"] = await request.json()
        return web.json_response(
            {
                "id": "msg_fake",
                "type": "message",
                "role": "assistant",
                "model": "claude-upstream",
                "content": [{"type": "text", "text": "anthropic hello"}],
                "stop_reason": "end_turn",
                "usage": {"input_tokens": 2, "output_tokens": 1},
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/messages", messages)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "claude-upstream",
                        "displayName": "Claude Upstream",
                        "provider": "anthropic",
                        "baseUrl": str(upstream_client.make_url("")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/messages",
        json={"model": "claude-upstream", "messages": [{"role": "user", "content": "hi"}], "max_tokens": 42},
    )
    assert resp.status == 200
    payload = await resp.json()
    assert payload["model"] == "claude-upstream"
    assert payload["content"][0]["text"] == "anthropic hello"
    assert captured["body"]["model"] == "claude-upstream"
    assert captured["headers"]["x-api-key"] == "secret"
    assert "Authorization" not in captured["headers"]

    await shim_client.close()
    await upstream_client.close()


async def test_anthropic_messages_streams_openai_chat_as_anthropic_sse(tmp_path):
    captured = {}

    async def chat(request):
        captured["body"] = await request.json()
        response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await response.prepare(request)
        await response.write(b'data: {"choices":[{"delta":{"content":"hello"}}]}\n\n')
        await response.write(
            b'data: {"choices":[{"delta":{},"finish_reason":"stop"}],"usage":{"prompt_tokens":4,"completion_tokens":2,"total_tokens":6}}\n\n'
        )
        await response.write(b"data: [DONE]\n\n")
        await response.write_eof()
        return response

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "generic-chat-completion-api",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/messages",
        json={"model": "real-openai", "messages": [{"role": "user", "content": "hi"}], "max_tokens": 42, "stream": True},
    )
    assert resp.status == 200
    text = await resp.text()
    assert "[DONE]" not in text
    events = _named_sse_events(text)
    assert [event for event, _ in events] == [
        "message_start",
        "content_block_start",
        "content_block_delta",
        "content_block_stop",
        "message_delta",
        "message_stop",
    ]
    assert events[2][1]["delta"] == {"type": "text_delta", "text": "hello"}
    assert events[4][1]["delta"]["stop_reason"] == "end_turn"
    assert events[4][1]["usage"] == {"input_tokens": 4, "output_tokens": 2}
    assert captured["body"]["stream_options"] == {"include_usage": True}

    await shim_client.close()
    await upstream_client.close()


async def test_anthropic_messages_streams_tool_calls_as_anthropic_sse(tmp_path):
    async def chat(request):
        response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await response.prepare(request)
        await response.write(
            b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"id":"call_1","function":{"name":"lookup","arguments":""}}]}}]}\n\n'
        )
        await response.write(
            b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"function":{"arguments":"{\\"q\\":\\"repo\\"}"}}]}}]}\n\n'
        )
        await response.write(
            b'data: {"choices":[{"delta":{},"finish_reason":"tool_calls"}],"usage":{"prompt_tokens":5,"completion_tokens":3,"total_tokens":8}}\n\n'
        )
        await response.write(b"data: [DONE]\n\n")
        await response.write_eof()
        return response

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "generic-chat-completion-api",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/messages",
        json={"model": "real-openai", "messages": [{"role": "user", "content": "hi"}], "max_tokens": 42, "stream": True},
    )
    assert resp.status == 200
    text = await resp.text()
    events = _named_sse_events(text)
    event_names = [event for event, _ in events]
    assert "message_start" in event_names
    assert "content_block_start" in event_names
    tool_start = next(
        payload
        for name, payload in events
        if name == "content_block_start" and payload.get("content_block", {}).get("type") == "tool_use"
    )
    assert tool_start["content_block"]["id"] == "call_1"
    assert tool_start["content_block"]["name"] == "lookup"
    tool_deltas = [
        payload
        for name, payload in events
        if name == "content_block_delta" and payload.get("delta", {}).get("type") == "input_json_delta"
    ]
    assert len(tool_deltas) >= 1
    message_delta = next(payload for name, payload in events if name == "message_delta")
    assert message_delta["delta"]["stop_reason"] == "tool_use"
    assert "message_stop" in event_names

    await shim_client.close()
    await upstream_client.close()


async def test_anthropic_messages_streams_reasoning_as_anthropic_sse(tmp_path):
    async def chat(request):
        response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await response.prepare(request)
        await response.write(
            b'data: {"choices":[{"delta":{"reasoning_content":"let me think"}}]}\n\n'
        )
        await response.write(
            b'data: {"choices":[{"delta":{"content":"the answer"}}]}\n\n'
        )
        await response.write(
            b'data: {"choices":[{"delta":{},"finish_reason":"stop"}],"usage":{"prompt_tokens":2,"completion_tokens":1,"total_tokens":3}}\n\n'
        )
        await response.write(b"data: [DONE]\n\n")
        await response.write_eof()
        return response

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "generic-chat-completion-api",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/messages",
        json={"model": "real-openai", "messages": [{"role": "user", "content": "hi"}], "max_tokens": 42, "stream": True},
    )
    assert resp.status == 200
    events = _named_sse_events(await resp.text())
    thinking_starts = [
        p for n, p in events if n == "content_block_start" and p.get("content_block", {}).get("type") == "thinking"
    ]
    assert len(thinking_starts) == 1
    thinking_deltas = [
        p for n, p in events if n == "content_block_delta" and p.get("delta", {}).get("type") == "thinking_delta"
    ]
    assert len(thinking_deltas) == 1
    assert thinking_deltas[0]["delta"]["thinking"] == "let me think"
    text_deltas = [
        p for n, p in events if n == "content_block_delta" and p.get("delta", {}).get("type") == "text_delta"
    ]
    assert len(text_deltas) == 1
    assert text_deltas[0]["delta"]["text"] == "the answer"

    await shim_client.close()
    await upstream_client.close()


async def test_anthropic_messages_returns_anthropic_error_for_upstream_failure(tmp_path):
    async def chat(request):
        return web.json_response(
            {"error": {"message": "invalid api key", "type": "invalid_request_error"}},
            status=401,
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "generic-chat-completion-api",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "bad-key",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/messages",
        json={"model": "real-openai", "messages": [{"role": "user", "content": "hi"}], "max_tokens": 42},
    )
    assert resp.status == 401
    payload = await resp.json()
    assert payload["type"] == "error"
    assert payload["error"]["type"] == "authentication_error"
    assert "invalid api key" in payload["error"]["message"]

    await shim_client.close()
    await upstream_client.close()


async def test_anthropic_messages_streams_anthropic_passthrough(tmp_path):
    async def messages(request):
        response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await response.prepare(request)
        await response.write(
            b'event: message_start\ndata: {"type":"message_start","message":{"id":"msg_1","type":"message","role":"assistant","model":"claude-upstream","content":[],"stop_reason":null,"stop_sequence":null,"usage":{"input_tokens":1,"output_tokens":0}}}\n\n'
        )
        await response.write(
            b'event: content_block_start\ndata: {"type":"content_block_start","index":0,"content_block":{"type":"text","text":""}}\n\n'
        )
        await response.write(
            b'event: content_block_delta\ndata: {"type":"content_block_delta","index":0,"delta":{"type":"text_delta","text":"hello"}}\n\n'
        )
        await response.write(
            b'event: content_block_stop\ndata: {"type":"content_block_stop","index":0}\n\n'
        )
        await response.write(
            b'event: message_delta\ndata: {"type":"message_delta","delta":{"stop_reason":"end_turn","stop_sequence":null},"usage":{"output_tokens":1}}\n\n'
        )
        await response.write(b'event: message_stop\ndata: {"type":"message_stop"}\n\n')
        await response.write_eof()
        return response

    upstream = web.Application()
    upstream.router.add_post("/v1/messages", messages)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "claude-upstream",
                        "displayName": "Claude Upstream",
                        "provider": "anthropic",
                        "baseUrl": str(upstream_client.make_url("")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/messages",
        json={"model": "claude-upstream", "messages": [{"role": "user", "content": "hi"}], "max_tokens": 42, "stream": True},
    )
    assert resp.status == 200
    text = await resp.text()
    events = _named_sse_events(text)
    event_names = [event for event, _ in events]
    assert event_names == [
        "message_start",
        "content_block_start",
        "content_block_delta",
        "content_block_stop",
        "message_delta",
        "message_stop",
    ]
    text_delta = next(payload for name, payload in events if name == "content_block_delta")
    assert text_delta["delta"]["text"] == "hello"

    await shim_client.close()
    await upstream_client.close()
