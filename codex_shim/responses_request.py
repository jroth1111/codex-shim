from __future__ import annotations

from copy import deepcopy
from dataclasses import dataclass
from typing import Any

from aiohttp import web

from .response_store import ResponseStore

SHIM_INTERNAL_KEY_PREFIX = "_shim_"


@dataclass(frozen=True)
class PreparedResponsesRequest:
    """BYOK /v1/responses request after session binding and optional history expansion."""

    body: dict[str, Any]
    session_id: str
    chained_from_previous: bool


def session_id_from_request(request: web.Request) -> str:
    return request.headers.get("session_id", "") or ""


def responses_items_from_input(value: Any) -> list[dict[str, Any]]:
    if value is None:
        return []
    if isinstance(value, str):
        return [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": value}]}]
    if isinstance(value, dict):
        return [deepcopy(value)]
    if isinstance(value, list):
        items: list[dict[str, Any]] = []
        for item in value:
            if isinstance(item, str):
                items.append({"type": "message", "role": "user", "content": [{"type": "input_text", "text": item}]})
            elif isinstance(item, dict):
                items.append(deepcopy(item))
        return items
    return [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": str(value)}]}]


def strip_shim_internal_keys(body: dict[str, Any]) -> dict[str, Any]:
    return {key: value for key, value in body.items() if not str(key).startswith(SHIM_INTERNAL_KEY_PREFIX)}


def should_persist_instructions(prepared: PreparedResponsesRequest) -> bool:
    return bool(prepared.body.get("instructions")) and not prepared.chained_from_previous


def prepare_byok_responses_request(
    store: ResponseStore,
    request: web.Request,
    body: dict[str, Any],
) -> PreparedResponsesRequest:
    session_id = session_id_from_request(request)
    chained = False
    working = strip_shim_internal_keys(dict(body))
    previous_response_id = working.get("previous_response_id")
    if previous_response_id:
        previous_items = store.get(str(previous_response_id), session_id)
        if previous_items is None:
            raise KeyError(str(previous_response_id))
        working.pop("previous_response_id", None)
        working["input"] = previous_items + responses_items_from_input(working.get("input"))
        chained = True
    return PreparedResponsesRequest(body=working, session_id=session_id, chained_from_previous=chained)


def prepare_passthrough_store_request(request: web.Request, body: dict[str, Any]) -> PreparedResponsesRequest:
    """Attach session for ChatGPT passthrough history without expanding previous_response_id."""
    return PreparedResponsesRequest(
        body=strip_shim_internal_keys(dict(body)),
        session_id=session_id_from_request(request),
        chained_from_previous=False,
    )
