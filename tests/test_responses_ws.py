from __future__ import annotations

import json

import pytest
from aiohttp import web
from aiohttp.test_utils import TestClient, TestServer

from codex_shim.server import ShimServer


@pytest.mark.asyncio
async def test_responses_websocket_returns_completed_payload(tmp_path):
    captured: dict = {}

    async def chat(request):
        captured["body"] = await request.json()
        return web.json_response(
            {
                "id": "chatcmpl_ws",
                "choices": [{"message": {"role": "assistant", "content": "ws ok"}}],
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
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        ws = await shim_client.ws_connect("/v1/responses")
        await ws.send_json({"model": "real-openai", "input": "hello", "stream": False})
        msg = await ws.receive_json()
        assert msg.get("type") == "response.completed", msg
        assert msg["response"]["output"][0]["content"][0]["text"] == "ws ok"
        assert captured["body"]["model"] == "real-openai"
    finally:
        await shim_client.close()
        await upstream_client.close()


@pytest.mark.asyncio
async def test_responses_websocket_byok_streaming_emits_deltas(tmp_path):
    async def chat(request):
        await request.json()
        response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await response.prepare(request)
        await response.write(b'data: {"choices":[{"delta":{"content":"stream "}}]}\n\n')
        await response.write(b'data: {"choices":[{"delta":{"content":"ok"}}]}\n\n')
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
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        ws = await shim_client.ws_connect("/v1/responses")
        await ws.send_json({"model": "real-openai", "input": "hello", "stream": True})
        frames = []
        while True:
            msg = await ws.receive()
            if msg.type.name == "CLOSE":
                break
            frames.append(json.loads(msg.data))
        types = [frame.get("type") for frame in frames]
        assert "response.output_text.delta" in types or any("delta" in t for t in types if t)
        completed = [frame for frame in frames if frame.get("type") == "response.completed"]
        assert completed
        text = completed[-1]["response"]["output"][0]["content"][0]["text"]
        assert text == "stream ok"
    finally:
        await shim_client.close()
        await upstream_client.close()


@pytest.mark.asyncio
async def test_responses_websocket_nonstream_error_returns_error_payload(tmp_path):
    async def chat(_request):
        return web.json_response({"error": {"type": "upstream_error", "message": "boom"}}, status=502)

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
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        ws = await shim_client.ws_connect("/v1/responses")
        await ws.send_json({"model": "real-openai", "input": "hello", "stream": False})
        msg = await ws.receive_json()
        assert msg["error"]["type"] == "upstream_error"
        assert msg["error"]["message"] == "boom"
    finally:
        await shim_client.close()
        await upstream_client.close()


@pytest.mark.asyncio
async def test_responses_websocket_second_turn_after_tool_output_has_no_anomalies(tmp_path):
    call_count = {"n": 0}

    async def chat(request):
        call_count["n"] += 1
        body = await request.json()
        if call_count["n"] == 1:
            response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
            await response.prepare(request)
            chunk = {
                "choices": [
                    {
                        "delta": {
                            "tool_calls": [
                                {
                                    "index": 0,
                                    "id": "call_ws_tool",
                                    "function": {"name": "probe_tool", "arguments": "{}"},
                                }
                            ]
                        }
                    }
                ]
            }
            await response.write(f"data: {json.dumps(chunk)}\n\n".encode())
            await response.write(b"data: [DONE]\n\n")
            await response.write_eof()
            return response
        tool_messages = [
            item for item in body.get("messages", []) if isinstance(item, dict) and item.get("role") == "tool"
        ]
        assert tool_messages and tool_messages[0].get("tool_call_id") == "call_ws_tool"
        return web.json_response(
            {
                "id": "chatcmpl_after_tool",
                "choices": [{"message": {"role": "assistant", "content": "tool loop ok"}}],
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
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        ws = await shim_client.ws_connect("/v1/responses")
        await ws.send_json(
            {
                "model": "real-openai",
                "input": [{"role": "user", "content": [{"type": "input_text", "text": "run tool"}]}],
                "stream": True,
            }
        )
        first_completed = None
        while True:
            msg = await ws.receive()
            if msg.type.name == "CLOSE":
                break
            frame = json.loads(msg.data)
            if frame.get("type") == "response.completed":
                first_completed = frame.get("response")
                break
        assert first_completed is not None
        assert [item.get("type") for item in first_completed.get("output", [])] == ["function_call"]
        assert "shim_anomalies" not in (first_completed.get("metadata") or {})

        ws2 = await shim_client.ws_connect("/v1/responses")
        await ws2.send_json(
            {
                "model": "real-openai",
                "input": [
                    {"type": "function_call", "call_id": "call_ws_tool", "name": "probe_tool", "arguments": "{}"},
                    {"type": "function_call_output", "call_id": "call_ws_tool", "output": "done"},
                    {"role": "user", "content": [{"type": "input_text", "text": "continue"}]},
                ],
                "stream": False,
            }
        )
        second = await ws2.receive_json()
        assert second.get("type") == "response.completed"
        response = second["response"]
        assert response["output"][0]["content"][0]["text"] == "tool loop ok"
        assert "shim_anomalies" not in (response.get("metadata") or {})
        assert call_count["n"] == 2
    finally:
        await shim_client.close()
        await upstream_client.close()
