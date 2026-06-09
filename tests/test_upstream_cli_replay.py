from __future__ import annotations

import json
import sys
from copy import deepcopy
from pathlib import Path

import pytest
from aiohttp.test_utils import make_mocked_request

from codex_shim.passthrough import _prepare_upstream_request
from codex_shim.passthrough_upstream import DEFAULT_EXEC_ORIGINATOR, X_CODEX_TURN_METADATA

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
from diff_upstream_capture import compare_captures  # noqa: E402

from tests.fixtures.upstream.build_cli_synthetic import build_cli_synthetic_capture  # noqa: E402


def _request(headers: dict[str, str]):
    return make_mocked_request("POST", "/v1/responses", headers=headers)


@pytest.fixture
def auth_env(tmp_path, monkeypatch):
    codex_home = tmp_path / ".codex"
    codex_home.mkdir()
    auth_path = codex_home / "auth.json"
    auth_path.write_text(
        json.dumps({"tokens": {"access_token": "token", "account_id": "acct-harness-cli"}}),
        encoding="utf-8",
    )
    monkeypatch.setattr("codex_shim.passthrough.settings.DEFAULT_CODEX_AUTH", auth_path)
    monkeypatch.setenv("CODEX_HOME", str(codex_home))
    (codex_home / "installation_id").write_text("22222222-2222-4222-8222-222222222222\n", encoding="utf-8")


def test_replay_cli_inbound_preserves_workspaces(auth_env, monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_PASSTHROUGH_REFERENCE_CAPTURE", raising=False)
    golden = build_cli_synthetic_capture()
    inbound_body = deepcopy(golden["body"])

    request = _request(
        {
            "originator": DEFAULT_EXEC_ORIGINATOR,
            "session-id": golden["headers"]["session-id"],
            "thread-id": golden["headers"]["thread-id"],
            "x-codex-turn-metadata": golden["headers"]["x-codex-turn-metadata"],
            "x-codex-window-id": golden["headers"]["x-codex-window-id"],
        }
    )
    forwarded, headers = _prepare_upstream_request(request, inbound_body, compact=False)

    turn_metadata = json.loads(headers[X_CODEX_TURN_METADATA])
    assert "workspaces" in turn_metadata
    assert "workspace_kind" not in turn_metadata
    assert forwarded["client_metadata"][X_CODEX_TURN_METADATA] == headers[X_CODEX_TURN_METADATA]


def test_replay_matches_cli_synthetic_golden_shape(auth_env, monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_PASSTHROUGH_REFERENCE_CAPTURE", raising=False)
    golden = build_cli_synthetic_capture()
    inbound_body = deepcopy(golden["body"])

    request = _request(
        {
            "originator": DEFAULT_EXEC_ORIGINATOR,
            "session-id": golden["headers"]["session-id"],
            "thread-id": golden["headers"]["thread-id"],
            "x-codex-turn-metadata": golden["headers"]["x-codex-turn-metadata"],
            "x-codex-window-id": golden["headers"]["x-codex-window-id"],
        }
    )
    forwarded, upstream_headers = _prepare_upstream_request(request, inbound_body, compact=False)

    candidate = {
        "url": golden["url"],
        "headers": upstream_headers,
        "body": forwarded,
        "upstream_response": golden.get("upstream_response"),
    }
    report = compare_captures(golden, candidate)
    assert report["ok"] is True, report.get("issues")
