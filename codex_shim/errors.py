from __future__ import annotations

import json
import time
from typing import Any

from aiohttp import web

from .cursor_acp import CursorAcpError
from .settings import ShimModel
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


def cursor_acp_error_response(exc: CursorAcpError) -> web.Response:
    return cursor_agent_error_response(exc, "cursor_acp_error")


def cursor_agent_error_response(exc: Exception, error_type: str) -> web.Response:
    return web.json_response({"error": {"type": error_type, "message": str(exc)}}, status=502)


def invalid_request_error_response(exc: ResponsesInputError) -> web.Response:
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


def cursor_acp_stream_error(model: str, exc: CursorAcpError) -> dict[str, Any]:
    return cursor_agent_stream_error(model, exc, "cursor_acp_error")


def cursor_agent_stream_error(model: str, exc: Exception, error_type: str) -> dict[str, Any]:
    return {
        "type": "response.failed",
        "response": {
            "id": f"resp_cursor_acp_failed_{int(time.time())}",
            "object": "response",
            "created_at": int(time.time()),
            "status": "failed",
            "model": model,
            "output": [],
            "error": {"type": error_type, "message": str(exc)},
        },
    }
