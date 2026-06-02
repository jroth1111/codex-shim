from __future__ import annotations

from typing import Any, Protocol

from aiohttp import web

from ..responses_ws import WsStreamResponse, handle_responses_websocket


class GatewayDispatch(Protocol):
    async def _dispatch_responses(
        self,
        request: web.Request,
        body: dict[str, Any],
        ws_stream: WsStreamResponse | None = None,
    ) -> web.StreamResponse | web.Response: ...

    async def chat_completions(self, request: web.Request) -> web.StreamResponse: ...

    async def responses_compact_from_body(self, request: web.Request, body: dict[str, Any]) -> web.StreamResponse: ...


class GatewayHandlers:
    """HTTP entrypoints for `/v1/*` routes."""

    def __init__(self, dispatcher: GatewayDispatch):
        self._dispatcher = dispatcher

    async def _read_json(self, request: web.Request) -> dict[str, Any] | web.Response:
        try:
            body = await request.json()
        except Exception:
            return web.json_response({"error": {"type": "invalid_request", "message": "invalid JSON body"}}, status=400)
        if not isinstance(body, dict):
            return web.json_response({"error": {"type": "invalid_request", "message": "JSON body must be an object"}}, status=400)
        return body

    async def chat_completions(self, request: web.Request) -> web.StreamResponse:
        return await self._dispatcher.chat_completions(request)

    async def responses(self, request: web.Request) -> web.StreamResponse:
        body_or_error = await self._read_json(request)
        if isinstance(body_or_error, web.Response):
            return body_or_error
        body = body_or_error
        return await self._dispatcher._dispatch_responses(request, body)

    async def responses_websocket(self, request: web.Request) -> web.WebSocketResponse:
        return await handle_responses_websocket(request, dispatch=self._dispatcher._dispatch_responses)

    async def responses_compact(self, request: web.Request) -> web.StreamResponse:
        body_or_error = await self._read_json(request)
        if isinstance(body_or_error, web.Response):
            return body_or_error
        return await self._dispatcher.responses_compact_from_body(request, body_or_error)
