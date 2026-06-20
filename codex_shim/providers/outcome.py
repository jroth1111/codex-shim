"""Upstream error detail + Retry-After parsing for retry backoff.

Provider handlers stash an :class:`UpstreamErrorDetail` on the error response
they return (via ``setattr``, mirroring ``_codex_shim_executed_tool_count``) so
:class:`ProviderDispatcher` can read ``Retry-After`` to floor its backoff between
retries — without any change to the handler call signature.
"""
from __future__ import annotations

import time
from dataclasses import dataclass
from email.utils import parsedate_to_datetime
from typing import Any, Mapping


@dataclass(frozen=True)
class UpstreamErrorDetail:
    """Retry-relevant detail captured from an upstream ``>= 400`` response."""

    status: int
    retry_after_ms: float | None


def _header_get(headers: Mapping[str, str] | Any, name: str) -> str | None:
    name = name.lower()
    try:
        items = headers.items()
    except AttributeError:
        return None
    for key, value in items:
        if str(key).lower() == name:
            return str(value)
    return None


def parse_retry_after(headers: Mapping[str, str] | Any, *, now: float | None = None) -> float | None:
    """Parse a ``Retry-After`` header to milliseconds, or ``None`` if absent.

    Supports both RFC 7231 §7.1.3 forms: a non-negative integer of seconds, or
    an HTTP-date. HTTP-dates in the past clamp to 0. Garbage returns ``None``.
    """
    value = _header_get(headers, "retry-after")
    if not value:
        return None
    value = value.strip()
    try:
        seconds = int(value)
    except ValueError:
        seconds = None
    if seconds is not None:
        return max(0.0, float(seconds)) * 1000.0
    try:
        dt = parsedate_to_datetime(value)
    except (TypeError, ValueError):
        return None
    if dt is None:
        return None
    if dt.tzinfo is None:
        from datetime import timezone

        dt = dt.replace(tzinfo=timezone.utc)
    current = now if now is not None else time.time()
    return max(0.0, (dt.timestamp() - current) * 1000.0)


def upstream_error_detail_from_response(upstream: Any, *, now: float | None = None) -> UpstreamErrorDetail:
    """Build an :class:`UpstreamErrorDetail` from an aiohttp ``ClientResponse``.

    ``upstream.headers`` must still be readable — call this before
    ``upstream.release()`` in the handler's ``finally`` block.
    """
    try:
        status = int(upstream.status)
    except (TypeError, ValueError, AttributeError):
        status = 0
    retry_after_ms = parse_retry_after(getattr(upstream, "headers", {}), now=now)
    return UpstreamErrorDetail(status=status, retry_after_ms=retry_after_ms)
