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
