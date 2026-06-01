from __future__ import annotations

import json
from unittest.mock import MagicMock

import pytest

from codex_shim.response_store import ResponseStore
from codex_shim.responses_request import (
    prepare_byok_responses_request,
    prepare_passthrough_store_request,
    should_persist_instructions,
    strip_shim_internal_keys,
)


def _request(session_id: str = "") -> MagicMock:
    request = MagicMock()
    request.headers.get.return_value = session_id
    return request


def test_strip_shim_internal_keys():
    body = {"model": "x", "_shim_session_id": "s", "_shim_chained_from_previous": True, "input": "hi"}
    assert strip_shim_internal_keys(body) == {"model": "x", "input": "hi"}


def test_prepare_byok_sets_chained_when_previous_expanded(tmp_path):
    db = tmp_path / "store.sqlite"
    store = ResponseStore(path=db)
    store.put("resp_1", [{"type": "message", "role": "user", "content": []}], session_id="sess")
    store.close()

    store2 = ResponseStore(path=db)
    body = {"model": "m", "previous_response_id": "resp_1", "input": "next", "instructions": "stay"}
    prepared = prepare_byok_responses_request(store2, _request("sess"), body)
    assert prepared.session_id == "sess"
    assert prepared.chained_from_previous is True
    assert "_shim_chained_from_previous" not in prepared.body
    assert prepared.body.get("previous_response_id") is None
    assert should_persist_instructions(prepared) is False
    store2.close()


def test_prepare_byok_unknown_previous_raises(tmp_path):
    store = ResponseStore(path=tmp_path / "store.sqlite")
    with pytest.raises(KeyError):
        prepare_byok_responses_request(
            store,
            _request("sess"),
            {"model": "m", "previous_response_id": "missing"},
        )
    store.close()


def test_prepare_passthrough_store_request():
    prepared = prepare_passthrough_store_request(
        _request("passthrough-sess"),
        {"model": "gpt-5.5", "input": "hi"},
    )
    assert prepared.session_id == "passthrough-sess"
    assert prepared.chained_from_previous is False
    assert prepared.body["model"] == "gpt-5.5"
