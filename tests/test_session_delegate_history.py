from __future__ import annotations

from unittest.mock import MagicMock

from codex_shim.sessions import (
    PreparedResponsesRequest,
    ResponseStore,
    SessionService,
    responses_items_from_input,
)
from codex_shim.settings import ShimModel


def _request(session_id: str = "sess") -> MagicMock:
    request = MagicMock()
    request.headers.get.return_value = session_id
    return request


def _cursor_route() -> ShimModel:
    return ShimModel(
        slug="cursor-auto",
        model="auto",
        display_name="Cursor",
        provider="cursor-agent",
        base_url="",
        transport="cursor_cli",
    )


def _openai_route() -> ShimModel:
    return ShimModel(
        slug="openai-test",
        model="gpt-test",
        display_name="OpenAI",
        provider="openai",
        base_url="http://127.0.0.1:9/v1",
        transport="openai_chat",
    )


def _service(tmp_path) -> SessionService:
    store = ResponseStore(path=tmp_path / "store.sqlite")
    return SessionService(store, content_to_debug_text=lambda value: str(value))


def _poisoned_items() -> list[dict]:
    return [
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "hi"}]},
        {"type": "function_call", "call_id": "c1", "name": "shell"},
        {"type": "function_call_output", "call_id": "c1", "output": "ok"},
        {"type": "message", "role": "assistant", "content": [{"type": "output_text", "text": "done"}]},
    ]


def test_prepare_filters_legacy_poisoned_history_for_cursor_route(tmp_path):
    db = tmp_path / "store.sqlite"
    store = ResponseStore(path=db)
    store.put("resp_1", _poisoned_items(), session_id="sess")
    store.close()

    service = _service(tmp_path)
    prepared = service.prepare(
        _request("sess"),
        {"model": "auto", "previous_response_id": "resp_1", "input": "next"},
        route=_cursor_route(),
    )
    items = responses_items_from_input(prepared.body.get("input"))
    item_types = {str(item.get("type") or "") for item in items}
    assert "function_call" not in item_types
    assert "function_call_output" not in item_types
    assert any("Cursor completed 2 tool action(s)" in str(item) for item in items)


def test_prepare_leaves_poisoned_history_for_non_cursor_route(tmp_path):
    db = tmp_path / "store.sqlite"
    store = ResponseStore(path=db)
    store.put("resp_1", _poisoned_items(), session_id="sess")
    store.close()

    service = _service(tmp_path)
    prepared = service.prepare(
        _request("sess"),
        {"model": "gpt-test", "previous_response_id": "resp_1", "input": "next"},
        route=_openai_route(),
    )
    items = responses_items_from_input(prepared.body.get("input"))
    item_types = {str(item.get("type") or "") for item in items}
    assert "function_call" in item_types
    assert "function_call_output" in item_types


def test_store_and_prepare_round_trip_excludes_tool_items(tmp_path):
    service = _service(tmp_path)
    route = _cursor_route()
    prepared = PreparedResponsesRequest(
        body={"model": "auto", "input": "audit"},
        session_id="sess",
        chained_from_previous=False,
    )
    response_payload = {
        "id": "resp_cursor_1",
        "model": "auto",
        "output": [
            {
                "type": "message",
                "role": "assistant",
                "content": [{"type": "output_text", "text": "done"}],
            }
        ],
    }
    service.store_response_history(prepared, response_payload, route=route)

    store = ResponseStore(path=tmp_path / "store.sqlite")
    stored = store.get("resp_cursor_1", "sess")
    store.close()
    assert stored is not None
    stored_types = {str(item.get("type") or "") for item in stored}
    assert not any(t.endswith("_call") or t.endswith("_output") for t in stored_types)

    service2 = _service(tmp_path)
    second = service2.prepare(
        _request("sess"),
        {"model": "auto", "previous_response_id": "resp_cursor_1", "input": "ack"},
        route=route,
    )
    expanded = responses_items_from_input(second.body.get("input"))
    expanded_types = {str(item.get("type") or "") for item in expanded}
    assert "function_call" not in expanded_types
    assert "function_call_output" not in expanded_types
