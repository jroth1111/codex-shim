from __future__ import annotations

from typing import Any, Awaitable, Callable

from aiohttp import web

from ..responses_request import PreparedResponsesRequest
from ..responses_ws import WsStreamResponse
from ..routing import RoutingPolicy
from ..settings import ShimModel

ProviderHandler = Callable[
    [web.Request, ShimModel, dict[str, Any], bool, PreparedResponsesRequest | None, WsStreamResponse | None],
    Awaitable[web.StreamResponse],
]


class ProviderDispatcher:
    """Provider transport dispatch with a stable internal contract."""

    def __init__(
        self,
        *,
        openai_handler: ProviderHandler,
        anthropic_handler: ProviderHandler,
        cursor_acp_handler: ProviderHandler,
        cursor_cli_handler: ProviderHandler,
    ) -> None:
        self._openai_handler = openai_handler
        self._anthropic_handler = anthropic_handler
        self._cursor_acp_handler = cursor_acp_handler
        self._cursor_cli_handler = cursor_cli_handler

    async def dispatch(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        *,
        as_responses: bool,
        policy: RoutingPolicy | None = None,
        stats: dict[str, Any] | None = None,
        prepared: PreparedResponsesRequest | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        active_policy = policy or RoutingPolicy()

        async def _one_call() -> web.StreamResponse:
            if route.is_openai_chat:
                return await self._openai_handler(request, route, body, as_responses, prepared, stream_response)
            if route.is_anthropic:
                return await self._anthropic_handler(request, route, body, as_responses, prepared, stream_response)
            if route.is_cursor_acp:
                return await self._cursor_acp_handler(request, route, body, as_responses, prepared, stream_response)
            if route.is_cursor_cli:
                return await self._cursor_cli_handler(request, route, body, as_responses, prepared, stream_response)
            raise web.HTTPBadGateway(text=f"Unsupported model provider: {route.provider}")

        is_stream = bool(body.get("stream"))
        attempts = 1 if is_stream else max(1, active_policy.max_retries + 1)
        last_result: web.StreamResponse | None = None
        for _ in range(attempts):
            result = await _one_call()
            last_result = result
            status = getattr(result, "status", 200)
            if stats is not None:
                stats["attempts"] = int(stats.get("attempts", 0)) + 1
                stats["last_status"] = status
            if status not in active_policy.retryable_statuses:
                return result
        return last_result if last_result is not None else await _one_call()
