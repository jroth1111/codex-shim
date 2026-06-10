from __future__ import annotations

import json
from typing import Any, Awaitable, Callable

from aiohttp import WSMsgType, web

from ..wire import WsStreamResponse

ResponsesBodyHandler = Callable[..., Awaitable[web.StreamResponse | web.Response]]


async def handle_responses_websocket(
    request: web.Request,
    *,
    dispatch: ResponsesBodyHandler,
) -> web.WebSocketResponse:
    ws = web.WebSocketResponse()
    await ws.prepare(request)
    try:
        msg = await ws.receive(timeout=120)
        if msg.type != WSMsgType.TEXT:
            await ws.send_json({"type": "error", "error": {"message": "Expected JSON text frame"}})
            await ws.close()
            return ws
        try:
            body = json.loads(msg.data)
        except json.JSONDecodeError:
            await ws.send_json({"type": "error", "error": {"message": "Invalid JSON request"}})
            await ws.close()
            return ws
        if not isinstance(body, dict):
            await ws.send_json({"type": "error", "error": {"message": "Request body must be a JSON object"}})
            await ws.close()
            return ws

        if body.get("stream"):
            result = await dispatch(request, body, ws_stream=WsStreamResponse(ws))
            if isinstance(result, web.Response) and result.status >= 400:
                await ws.send_json(_response_error_payload(result, fallback="Streaming request failed"))
        else:
            result = await dispatch(request, body)
            if isinstance(result, web.Response):
                if result.status >= 400:
                    await ws.send_json(_response_error_payload(result, fallback="Request failed"))
                else:
                    payload = _response_json_payload(result)
                    await ws.send_json({"type": "response.completed", "response": payload})
            else:
                await ws.send_json({"type": "error", "error": {"message": "Unexpected handler response"}})
    except Exception as exc:
        if not ws.closed:
            print(f"[err] websocket error: {exc}", flush=True)
            await ws.send_json({"type": "error", "error": {"message": "Internal server error"}})
            await ws.close()
    if not ws.closed:
        await ws.close()
    return ws


def _response_json_payload(result: web.Response) -> dict[str, Any]:
    raw = result.body if isinstance(result.body, (bytes, bytearray)) else b"{}"
    try:
        payload = json.loads(raw.decode())
    except json.JSONDecodeError:
        payload = {}
    return payload if isinstance(payload, dict) else {}


def _response_error_payload(result: web.Response, *, fallback: str) -> dict[str, Any]:
    payload = _response_json_payload(result)
    if "error" in payload:
        return payload
    return {"type": "error", "error": {"message": fallback}}
