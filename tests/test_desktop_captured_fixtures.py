"""Offline checks for shim-wire capture fixtures (12-day RE plan, day 11)."""

from __future__ import annotations

import json
from pathlib import Path

import pytest

from codex_shim.translate import validate_responses_input

CAPTURED_DIR = Path(__file__).resolve().parent / "fixtures" / "desktop" / "captured"


def _fixture_paths() -> list[Path]:
    if not CAPTURED_DIR.is_dir():
        return []
    return sorted(CAPTURED_DIR.glob("*.json"))


def _requests_from_fixture(payload: dict) -> list[dict]:
    if "turns" in payload:
        return [turn["request"] for turn in payload["turns"]]
    return [payload["request"]]


@pytest.mark.parametrize("path", _fixture_paths(), ids=lambda p: p.name)
def test_captured_fixture_metadata_and_request_valid(path: Path) -> None:
    payload = json.loads(path.read_text(encoding="utf-8"))
    assert payload.get("evidence") == ["CAPTURE"]
    assert payload.get("source") == "shim-wire"
    assert payload.get("scenario")
    assert payload.get("capture_ref", "").endswith("_shim_wire.jsonl")

    for request in _requests_from_fixture(payload):
        assert isinstance(request, dict)
        assert request.get("model")
        validate_responses_input(request)


def test_s6_capture_has_previous_response_id_chain() -> None:
    path = CAPTURED_DIR / "S6_byok_previous_response_id.json"
    if not path.is_file():
        pytest.skip("captured fixtures not exported")
    payload = json.loads(path.read_text(encoding="utf-8"))
    turns = payload["turns"]
    assert len(turns) == 2
    first_id = turns[0]["response"]["id"]
    assert turns[1]["request"].get("previous_response_id") == first_id
