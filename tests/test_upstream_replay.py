from __future__ import annotations

import json
import sys
from copy import deepcopy
from pathlib import Path

import pytest
from aiohttp import web
from aiohttp.test_utils import make_mocked_request

from codex_shim.providers.chatgpt.handlers import _prepare_upstream_request
from codex_shim.providers.chatgpt.upstream import DEFAULT_DESKTOP_ORIGINATOR, X_CODEX_TURN_METADATA

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
from diff_upstream_capture import compare_captures  # noqa: E402

from tests.fixtures.upstream.build_synthetic import build_synthetic_capture  # noqa: E402


def _request(headers: dict[str, str] | None = None) -> web.Request:
    return make_mocked_request("POST", "/v1/responses", headers=headers or {})


@pytest.fixture
def auth_env(tmp_path, monkeypatch):
    codex_home = tmp_path / ".codex"
    codex_home.mkdir()
    auth_path = codex_home / "auth.json"
    auth_path.write_text(
        json.dumps({"tokens": {"access_token": "token", "account_id": "acct"}}),
        encoding="utf-8",
    )
    monkeypatch.setattr("codex_shim.providers.chatgpt.handlers.settings.DEFAULT_CODEX_AUTH", auth_path)
    monkeypatch.setenv("CODEX_HOME", str(codex_home))
    (codex_home / "installation_id").write_text("11111111-1111-4111-8111-111111111111\n", encoding="utf-8")


def test_replay_desktop_inbound_preserves_sandbox_and_model(auth_env, monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_PASSTHROUGH_REFERENCE_CAPTURE", raising=False)
    golden = build_synthetic_capture()
    inbound_body = deepcopy(golden["body"])
    inbound_body["tools"] = [{"type": "function", "name": "exec_command"}]

    request = _request({"originator": DEFAULT_DESKTOP_ORIGINATOR})
    forwarded, headers = _prepare_upstream_request(request, inbound_body, compact=False)

    assert forwarded["model"] == "gpt-5.5"
    turn_metadata = json.loads(headers[X_CODEX_TURN_METADATA])
    assert turn_metadata["sandbox"] == "seatbelt"
    assert forwarded["client_metadata"][X_CODEX_TURN_METADATA] == headers[X_CODEX_TURN_METADATA]
    permissions = inbound_body["input"][0]["content"][0]["text"]
    assert forwarded["input"][0]["content"][0]["text"] == permissions


def test_replay_matches_synthetic_golden_shape(auth_env, monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_PASSTHROUGH_REFERENCE_CAPTURE", raising=False)
    golden = build_synthetic_capture()
    inbound_body = deepcopy(golden["body"])

    request = _request({"originator": DEFAULT_DESKTOP_ORIGINATOR})
    forwarded, headers = _prepare_upstream_request(request, inbound_body, compact=False)

    candidate = {
        "url": golden["url"],
        "headers": golden["headers"],
        "body": forwarded,
        "upstream_response": golden.get("upstream_response"),
    }
    report = compare_captures(golden, candidate)
    assert report["body_ok"] is True, report.get("issues")
    turn_metadata = json.loads(headers[X_CODEX_TURN_METADATA])
    assert turn_metadata["sandbox"] == "seatbelt"
