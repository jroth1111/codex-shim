"""Error envelopes for cursor transports."""
from __future__ import annotations

import time
from typing import Any

from aiohttp import web

from .acp import CursorAcpError


def cursor_acp_error_response(exc: CursorAcpError) -> web.Response:
    return cursor_agent_error_response(exc, "cursor_acp_error")


def cursor_agent_error_response(exc: Exception, error_type: str) -> web.Response:
    return web.json_response({"error": {"type": error_type, "message": str(exc)}}, status=502)


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
