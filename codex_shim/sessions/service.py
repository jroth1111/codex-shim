from __future__ import annotations

from typing import Any, Callable

from aiohttp import web

from ..compact import compact_request_body
from ..response_store import ResponseStore
from ..responses_request import (
    PreparedResponsesRequest,
    prepare_byok_responses_request,
    responses_items_from_input,
    should_persist_instructions,
)


class SessionService:
    """Session/history logic extracted from HTTP handler orchestration."""

    def __init__(
        self,
        response_store: ResponseStore,
        content_to_debug_text: Callable[[Any], str],
    ) -> None:
        self._response_store = response_store
        self._content_to_debug_text = content_to_debug_text

    def prepare(self, request: web.Request, body: dict[str, Any]) -> PreparedResponsesRequest:
        return prepare_byok_responses_request(self._response_store, request, body)

    def compact_body(self, prepared: PreparedResponsesRequest, model: str) -> dict[str, Any]:
        return compact_request_body(prepared.body, model)

    def compact_prepared(self, prepared: PreparedResponsesRequest, model: str) -> PreparedResponsesRequest:
        body = self.compact_body(prepared, model)
        return PreparedResponsesRequest(
            body=body,
            session_id=prepared.session_id,
            chained_from_previous=prepared.chained_from_previous,
        )

    def store_response_history(self, prepared: PreparedResponsesRequest, response_payload: dict[str, Any]) -> None:
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
        self._response_store.put(
            response_id,
            items,
            session_id=prepared.session_id,
            model=str(prepared.body.get("model") or response_payload.get("model") or ""),
        )
