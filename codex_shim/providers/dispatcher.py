from __future__ import annotations

from typing import Any, Awaitable, Callable

from aiohttp import web

from ..routing import RoutingPolicy
from ..sessions import PreparedResponsesRequest
from ..settings import ShimModel
from ..wire import StreamSink, WsStreamResponse

ProviderHandler = Callable[
    [web.Request, ShimModel, dict[str, Any], bool, PreparedResponsesRequest | None, WsStreamResponse | None],
    Awaitable[StreamSink],
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
        cursor_agent_handler: ProviderHandler | None = None,
    ) -> None:
        self._openai_handler = openai_handler
        self._anthropic_handler = anthropic_handler
        self._cursor_acp_handler = cursor_acp_handler
        self._cursor_cli_handler = cursor_cli_handler
        self._cursor_agent_handler = cursor_agent_handler

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
    ) -> StreamSink:
        active_policy = policy or RoutingPolicy()

        async def _one_call() -> StreamSink:
            if route.is_openai_chat:
                return await self._openai_handler(request, route, body, as_responses, prepared, stream_response)
            if route.is_anthropic:
                return await self._anthropic_handler(request, route, body, as_responses, prepared, stream_response)
            if getattr(route, "is_cursor_agent", False) and self._cursor_agent_handler is not None:
                return await self._cursor_agent_handler(request, route, body, as_responses, prepared, stream_response)
            if route.is_cursor_acp:
                return await self._cursor_acp_handler(request, route, body, as_responses, prepared, stream_response)
            if route.is_cursor_cli:
                return await self._cursor_cli_handler(request, route, body, as_responses, prepared, stream_response)
            raise web.HTTPBadGateway(text=f"Unsupported model provider: {route.provider}")

        is_stream = bool(body.get("stream"))
        if is_stream and not active_policy.retry_on_stream:
            attempts = 1
        else:
            attempts = max(1, active_policy.max_retries + 1)

        last_result: StreamSink | None = None
        last_status: int | None = None
        for attempt in range(attempts):
            result = await _one_call()
            last_result = result
            status = getattr(result, "status", 200)
            last_status = status
            if stats is not None:
                stats["attempts"] = int(stats.get("attempts", 0)) + 1
                stats["last_status"] = status
                retry_reasons: list[dict[str, Any]] = stats.setdefault("retry_reasons", [])
                if attempt > 0:
                    retry_reasons.append(
                        {
                            "attempt": attempt + 1,
                            "status": status,
                            "retryable": status in active_policy.retryable_statuses,
                        }
                    )
            if status not in active_policy.retryable_statuses:
                if stats is not None:
                    stats["final_outcome"] = "success" if status < 400 else "upstream_error"
                return result
            if attempt + 1 < attempts and stats is not None:
                stats.setdefault("retry_reasons", []).append(
                    {"attempt": attempt + 1, "status": status, "action": "retry"}
                )

        if stats is not None:
            stats["final_outcome"] = "exhausted_retries"
            stats["last_status"] = last_status
        return last_result if last_result is not None else await _one_call()
