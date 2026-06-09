from __future__ import annotations

import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from diff_upstream_capture import compare_captures  # noqa: E402


def _capture(*, instructions: str = "sys", user_text: str = "hello") -> dict:
    turn_metadata = {
        "thread_id": "019ea0f1-aaaa-bbbb-cccc-dddddddddddd",
        "session_id": "019ea0f1-aaaa-bbbb-cccc-dddddddddddd",
        "request_kind": "turn",
        "sandbox": "seatbelt",
        "workspace_kind": "project",
    }
    body = {
        "model": "gpt-5.5",
        "store": False,
        "stream": True,
        "instructions": instructions,
        "input": [
            {
                "type": "message",
                "role": "user",
                "content": [{"type": "input_text", "text": user_text}],
            }
        ],
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps(turn_metadata, separators=(",", ":")),
        },
    }
    headers = {
        "originator": "Codex Desktop",
        "openai-beta": "responses_websockets=2026-02-06",
        "x-codex-turn-metadata": json.dumps(turn_metadata, separators=(",", ":")),
    }
    return {
        "url": "https://chatgpt.com/backend-api/codex/responses",
        "headers": headers,
        "body": body,
        "upstream_response": {"status": 200, "headers": {"content-type": "text/event-stream"}},
    }


def test_compare_identical_normalized_bodies_pass() -> None:
    left = _capture()
    right = _capture()
    report = compare_captures(left, right)
    assert report["ok"] is True
    assert report["headers_ok"] is True
    assert report["body_ok"] is True
    assert report["response_ok"] is True
    assert report["issue_categories"] == {}


def test_compare_instructions_delta_ignored_for_desktop_parity() -> None:
    left = _capture(instructions="left-only")
    right = _capture(instructions="right-only")
    report = compare_captures(left, right)
    assert report["body_ok"] is True


def test_compare_plugin_install_tools_optional_on_native_direct() -> None:
    left = _capture()
    right = _capture()
    left["body"]["tools"] = [
        {"type": "function", "name": "exec_command"},
        {"type": "function", "name": "list_available_plugins_to_install"},
        {"type": "function", "name": "request_plugin_install"},
    ]
    right["body"]["tools"] = [{"type": "function", "name": "exec_command"}]
    report = compare_captures(left, right)
    assert report["body_ok"] is True


def test_compare_text_verbosity_delta_ignored_when_only_verbosity() -> None:
    left = _capture()
    right = _capture()
    left["body"]["text"] = {"verbosity": "low"}
    right["body"]["text"] = {"verbosity": "medium"}
    report = compare_captures(left, right)
    assert report["body_ok"] is True


def test_compare_sandbox_delta_fails() -> None:
    left = _capture()
    right = _capture()
    right_tm = json.loads(right["headers"]["x-codex-turn-metadata"])
    right_tm["sandbox"] = "none"
    encoded = json.dumps(right_tm, separators=(",", ":"))
    right["headers"]["x-codex-turn-metadata"] = encoded
    right["body"]["client_metadata"]["x-codex-turn-metadata"] = encoded
    report = compare_captures(left, right)
    assert report["ok"] is False
    assert any("x-codex-turn-metadata" in issue for issue in report["issues"])


def test_compare_cli_workspace_volatile_fields_ignored() -> None:
    left = _capture()
    right = _capture()
    for capture, commit, fork in (
        (left, "abc123", "https://github.com/a/a.git"),
        (right, "def456", "https://github.com/b/b.git"),
    ):
        turn = json.loads(capture["headers"]["x-codex-turn-metadata"])
        turn["workspaces"] = {
            "/tmp/project": {
                "has_changes": True,
                "latest_git_commit_hash": commit,
                "associated_remote_urls": {"origin": fork},
            }
        }
        encoded = json.dumps(turn, separators=(",", ":"))
        capture["headers"]["x-codex-turn-metadata"] = encoded
        capture["body"]["client_metadata"]["x-codex-turn-metadata"] = encoded
    report = compare_captures(left, right)
    assert report["body_ok"] is True
