"""Turn metadata parsing and thread/session identity resolution."""
from __future__ import annotations

import json
from copy import deepcopy
from typing import Any

from aiohttp import web


def parse_turn_metadata(raw: Any) -> dict[str, Any] | None:
    if isinstance(raw, dict):
        return deepcopy(raw)
    if not isinstance(raw, str):
        return None
    text = raw.strip()
    if not text:
        return None
    try:
        parsed = json.loads(text)
    except json.JSONDecodeError:
        return None
    return parsed if isinstance(parsed, dict) else None


def header_value(request: web.Request, *names: str) -> str | None:
    for name in names:
        value = request.headers.get(name)
        if value:
            text = str(value).strip()
            if text:
                return text
    return None


def truthy_id(value: Any) -> str | None:
    if value in (None, ""):
        return None
    text = str(value).strip()
    return text or None


def resolve_thread_and_session_ids(
    request: web.Request,
    body: dict[str, Any],
    turn_metadata: dict[str, Any] | None,
) -> tuple[str | None, str | None]:
    thread_id = header_value(request, "thread-id", "thread_id")
    session_id = header_value(request, "session-id", "session_id")
    if turn_metadata:
        thread_id = thread_id or truthy_id(turn_metadata.get("thread_id"))
        session_id = session_id or truthy_id(turn_metadata.get("session_id"))
    if thread_id and not session_id:
        session_id = thread_id
    if session_id and not thread_id:
        thread_id = session_id
    return thread_id, session_id
