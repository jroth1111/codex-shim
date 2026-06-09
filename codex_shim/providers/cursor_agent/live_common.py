from __future__ import annotations

from typing import Any, AsyncIterator, Callable

from aiohttp import ClientTimeout

from .types import CursorAgentPreparedRequest, CursorAgentTransportError

StreamFn = Callable[[CursorAgentPreparedRequest], AsyncIterator[dict[str, Any]]]


def safe_timeout_seconds(prepared: Any, default: int = 3600) -> int:
    raw = getattr(prepared, "timeout_seconds", default)
    try:
        return int(raw) if raw else default
    except (ValueError, TypeError):
        return default


def resolve_active_timeout(timeout: ClientTimeout | None, prepared: Any) -> ClientTimeout:
    return timeout or ClientTimeout(total=safe_timeout_seconds(prepared), sock_connect=30)


async def collect_live_turn(
    stream_fn: StreamFn,
    prepared: CursorAgentPreparedRequest,
) -> dict[str, Any]:
    """Drain a live native event stream into a single CLI-shaped result dict."""
    text_parts: list[str] = []
    output_tokens = 0
    async for event in stream_fn(prepared):
        event_type = str(event.get("type") or "")
        if event_type == "text":
            text_parts.append(str(event.get("text") or ""))
        elif event_type == "usage_delta":
            output_tokens += int(event.get("tokens") or 0)
        elif event_type == "transport_error":
            raise CursorAgentTransportError(str(event.get("message") or "live transport error"))
    text = "".join(text_parts).strip()
    return {
        "text": text or "(empty live native response)",
        "usage": {
            "input_tokens": 0,
            "output_tokens": output_tokens,
            "total_tokens": output_tokens,
        },
    }
