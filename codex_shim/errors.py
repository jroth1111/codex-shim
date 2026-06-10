from __future__ import annotations

import json
from typing import TYPE_CHECKING, Any

from aiohttp import web

from .settings import ShimModel

if TYPE_CHECKING:
    from .translate import ResponsesInputError

_ERROR_PASSTHROUGH_KEYS = frozenset(("code", "param", "doc_url", "help_url"))


async def error_response(upstream, *, slug: str | None = None) -> web.Response:
    text = await upstream.text()
    status = upstream.status
    message = text.strip() or f"Upstream request failed with status {status}"
    error_type = "upstream_error"
    extras: dict[str, str] = {}
    if slug:
        print(
            f"[err] upstream {slug} returned {status}: {text[:500]}",
            flush=True,
        )
    try:
        payload = json.loads(text)
    except json.JSONDecodeError:
        payload = None
    if isinstance(payload, dict):
        nested = payload.get("error")
        if isinstance(nested, dict):
            message = str(nested.get("message") or message)
            error_type = str(nested.get("type") or error_type)
            extras = {k: str(v) for k, v in nested.items() if k in _ERROR_PASSTHROUGH_KEYS and v is not None}
        elif payload.get("message"):
            message = str(payload.get("message") or message)
            error_type = str(payload.get("type") or error_type)
    envelope: dict[str, Any] = {"type": error_type, "message": message}
    envelope.update(extras)
    return web.json_response({"error": envelope}, status=status)


def invalid_request_error_response(exc: ResponsesInputError | Exception) -> web.Response:
    return web.json_response({"error": {"type": "invalid_request_error", "message": str(exc)}}, status=400)


def unsupported_capability_response(message: str) -> web.Response:
    return web.json_response({"error": {"type": "unsupported_capability", "message": message}}, status=400)


def unsupported_compact_response(route: ShimModel) -> web.Response:
    return web.json_response(
        {
            "error": {
                "type": "unsupported_route",
                "message": f"{route.slug} ({route.provider}) does not support /v1/responses/compact.",
            }
        },
        status=501,
    )


