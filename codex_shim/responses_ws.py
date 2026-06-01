from __future__ import annotations

import json
from typing import Any, Awaitable, Callable

from aiohttp import WSMsgType, web


ResponsesBodyHandler = Callable[..., Awaitable[web.StreamResponse | web.Response]]


class WsStreamResponse:
    """Minimal StreamResponse stand-in that forwards SSE payloads over WebSocket."""

    def __init__(self, ws: web.WebSocketResponse):
        self.ws = ws
        self._buffer = b""

    async def prepare(self, _request: web.Request) -> None:
        return None

    async def write(self, data: bytes) -> None:
        self._buffer += data
        await self._flush_events()

    async def write_eof(self) -> None:
        await self._flush_events()

    async def _flush_events(self) -> None:
        while b"\n\n" in self._buffer:
            block, self._buffer = self._buffer.split(b"\n\n", 1)
            for line in block.split(b"\n"):
                text = line.decode("utf-8", errors="replace").strip()
                if not text.startswith("data:"):
                    continue
                payload_text = text[5:].strip()
                if payload_text == "[DONE]":
                    return
                try:
                    payload = json.loads(payload_text)
                except json.JSONDecodeError:
                    continue
                await self.ws.send_json(payload)


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
                raw = result.body if isinstance(result.body, (bytes, bytearray)) else b"{}"
                try:
                    payload = json.loads(raw.decode())
                except json.JSONDecodeError:
                    payload = {"type": "error", "error": {"message": "Request failed"}}
                await ws.send_json(payload)
        else:
            result = await dispatch(request, body)
            if isinstance(result, web.StreamResponse) and getattr(result, "text", None) is not None:
                payload = json.loads(result.text or "{}")
                if "error" in payload:
                    await ws.send_json(payload)
                else:
                    await ws.send_json({"type": "response.completed", "response": payload})
            elif isinstance(result, web.StreamResponse):
                await _relay_sse_stream_to_websocket(ws, result)
            else:
                await ws.send_json({"type": "error", "error": {"message": "Unexpected handler response"}})
    except Exception as exc:
        if not ws.closed:
            await ws.send_json({"type": "error", "error": {"message": str(exc)}})
            await ws.close()
    if not ws.closed:
        await ws.close()
    return ws


async def _relay_sse_stream_to_websocket(ws: web.WebSocketResponse, stream: web.StreamResponse) -> None:
    relay = WsStreamResponse(ws)
    async for chunk in stream.body_iterator:
        await relay.write(chunk)
    await relay.write_eof()
