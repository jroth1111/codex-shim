from __future__ import annotations

from pathlib import Path
from typing import Any, Callable

from aiohttp import web

from ..compact import compact_request_body
from ..compact_frontier import extract_compact_frontier, git_status_short
from ..capabilities import is_delegate_route
from ..cursor_acp import filter_delegate_history_items
from ..response_store import ResponseStore
from ..responses_request import (
    PreparedResponsesRequest,
    prepare_byok_responses_request,
    responses_items_from_input,
    should_persist_instructions,
)
from ..settings import ShimModel


class SessionService:
    """Session/history logic extracted from HTTP handler orchestration."""

    def __init__(
        self,
        response_store: ResponseStore,
        content_to_debug_text: Callable[[Any], str],
    ) -> None:
        self._response_store = response_store
        self._content_to_debug_text = content_to_debug_text

    def prepare(
        self,
        request: web.Request,
        body: dict[str, Any],
        *,
        route: ShimModel | None = None,
    ) -> PreparedResponsesRequest:
        prepared = prepare_byok_responses_request(self._response_store, request, body)
        if route is None or not is_delegate_route(route):
            return prepared
        filtered_input = filter_delegate_history_items(responses_items_from_input(prepared.body.get("input")))
        filtered_body = dict(prepared.body)
        filtered_body["input"] = filtered_input
        return PreparedResponsesRequest(
            body=filtered_body,
            session_id=prepared.session_id,
            chained_from_previous=prepared.chained_from_previous,
        )

    def compact_body(
        self,
        prepared: PreparedResponsesRequest,
        model: str,
        *,
        route: ShimModel | None = None,
        workspace: Path | None = None,
    ) -> dict[str, Any]:
        input_items = responses_items_from_input(prepared.body.get("input"))
        if route is not None and is_delegate_route(route):
            input_items = filter_delegate_history_items(input_items)
        frontier = extract_compact_frontier(input_items)
        git_status = git_status_short(workspace) if workspace is not None else None
        body = compact_request_body(
            prepared.body,
            model,
            frontier=frontier,
            git_status=git_status or None,
        )
        if route is not None and is_delegate_route(route):
            body["input"] = input_items
        return body

    def compact_prepared(self, prepared: PreparedResponsesRequest, model: str, *, route: ShimModel | None = None) -> PreparedResponsesRequest:
        body = self.compact_body(prepared, model, route=route)
        return PreparedResponsesRequest(
            body=body,
            session_id=prepared.session_id,
            chained_from_previous=prepared.chained_from_previous,
        )

    def store_response_history(
        self,
        prepared: PreparedResponsesRequest,
        response_payload: dict[str, Any],
        *,
        route: ShimModel | None = None,
    ) -> None:
        response_id = str(response_payload.get("id") or "")
        if not response_id:
            return
        items: list[dict[str, Any]] = []
        if should_persist_instructions(prepared):
            instructions = prepared.body.get("instructions")
            items.append(
                {
                    "type": "message",
                    "role": "developer",
                    "content": [{"type": "input_text", "text": self._content_to_debug_text(instructions)}],
                }
            )
        items.extend(responses_items_from_input(prepared.body.get("input")))
        output = response_payload.get("output")
        if isinstance(output, list):
            items.extend(item for item in output if isinstance(item, dict))
        if route is not None and is_delegate_route(route):
            items = filter_delegate_history_items(items)
        self._response_store.put(
            response_id,
            items,
            session_id=prepared.session_id,
            model=str(prepared.body.get("model") or response_payload.get("model") or ""),
        )
