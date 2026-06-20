from __future__ import annotations

import asyncio
import random
from typing import Any, Awaitable, Callable

from aiohttp import web

from ..observability import ProviderHealthStore
from ..routing import RoutingPolicy
from ..sessions import PreparedResponsesRequest
from ..settings import ShimModel
from ..wire import StreamSink, WsStreamResponse
from .cursor_transports import cursor_concurrency

ProviderHandler = Callable[
    [web.Request, ShimModel, dict[str, Any], bool, PreparedResponsesRequest | None, WsStreamResponse | None],
    Awaitable[StreamSink],
]


def _backoff_delay_ms(policy: RoutingPolicy, attempt: int, detail: Any) -> float:
    """Exponential, capped, jittered backoff in ms, floored on Retry-After.

    ``detail`` is the optional ``UpstreamErrorDetail`` stashed on the prior
    error response; its ``retry_after_ms`` raises the floor so a 429/503 with a
    Retry-After is never re-hit within milliseconds.
    """
    base = max(0, int(getattr(policy, "backoff_base_ms", 500) or 0))
    cap = max(base, int(getattr(policy, "backoff_cap_ms", 30_000) or 0))
    expo = min(cap, base * (2 ** attempt)) if base > 0 else 0.0
    delay = random.uniform(expo / 2.0, expo) if expo > 0 else 0.0
    if getattr(policy, "respect_retry_after", True) and detail is not None:
        retry_after_ms = getattr(detail, "retry_after_ms", None)
        if retry_after_ms is not None:
            delay = max(delay, min(float(retry_after_ms), cap))
    return delay


async def _backoff_sleep(delay_ms: float) -> None:
    if delay_ms > 0:
        await asyncio.sleep(delay_ms / 1000.0)


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
        health: ProviderHealthStore | None = None,
    ) -> None:
        self._openai_handler = openai_handler
        self._anthropic_handler = anthropic_handler
        self._cursor_acp_handler = cursor_acp_handler
        self._cursor_cli_handler = cursor_cli_handler
        self._cursor_agent_handler = cursor_agent_handler
        self._health = health

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
        # Tell streaming handlers whether they may raise PreFirstByteFailure on
        # a pre-commit failure (so the gateway can fail over). Default off.
        try:
            request._codex_shim_pre_first_byte_failover = bool(
                getattr(active_policy, "pre_first_byte_stream_failover", False)
            )
        except (AttributeError, TypeError):
            pass

        async def _one_call() -> StreamSink:
            if route.is_openai_chat:
                return await self._openai_handler(request, route, body, as_responses, prepared, stream_response)
            if route.is_anthropic:
                return await self._anthropic_handler(request, route, body, as_responses, prepared, stream_response)
            if getattr(route, "is_cursor_agent", False) and self._cursor_agent_handler is not None:
                async with cursor_concurrency():
                    return await self._cursor_agent_handler(request, route, body, as_responses, prepared, stream_response)
            if route.is_cursor_acp:
                async with cursor_concurrency():
                    return await self._cursor_acp_handler(request, route, body, as_responses, prepared, stream_response)
            if route.is_cursor_cli:
                async with cursor_concurrency():
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
            if attempt + 1 < attempts:
                if self._health is not None and self._health.should_skip(route.provider):
                    # Breaker opened on this provider (from prior turns); stop
                    # hammering it so failover can take the turn instead.
                    if stats is not None:
                        stats.setdefault("retry_reasons", []).append(
                            {"attempt": attempt + 1, "status": status, "action": "circuit_open_stop"}
                        )
                    break
                detail = getattr(result, "_codex_shim_upstream_error", None)
                backoff_ms = _backoff_delay_ms(active_policy, attempt, detail)
                if stats is not None:
                    stats.setdefault("retry_reasons", []).append(
                        {"attempt": attempt + 1, "status": status, "action": "retry", "backoff_ms": backoff_ms}
                    )
                await _backoff_sleep(backoff_ms)

        if stats is not None:
            stats["final_outcome"] = "exhausted_retries"
            stats["last_status"] = last_status
        return last_result if last_result is not None else await _one_call()
