"""Build synthetic CLI upstream capture pairs for harness CI fixtures."""
from __future__ import annotations

import json
import sys
from copy import deepcopy
from pathlib import Path
from typing import Any

ROOT = Path(__file__).resolve().parents[3]
sys.path.insert(0, str(ROOT))

from aiohttp.test_utils import make_mocked_request

from codex_shim.passthrough import _prepare_upstream_request
from codex_shim.passthrough_upstream import DEFAULT_EXEC_ORIGINATOR

FIXTURE_DIR = Path(__file__).resolve().parent
HARNESS_CLI_NATIVE = FIXTURE_DIR / "harness_cli_native_to_chatgpt.json"
HARNESS_CLI_SHIM = FIXTURE_DIR / "harness_cli_shim_to_chatgpt.json"

THREAD_ID = "019ea236-0000-7000-8000-000000000002"
WORKSPACE = "/tmp/parity-cli-project"


def build_cli_synthetic_capture(*, transport: str = "http_upstream") -> dict[str, Any]:
    turn_metadata = {
        "session_id": THREAD_ID,
        "thread_id": THREAD_ID,
        "thread_source": "user",
        "request_kind": "turn",
        "sandbox": "read-only",
        "workspaces": {WORKSPACE: {"has_changes": True}},
        "window_id": f"{THREAD_ID}:0",
    }
    turn_json = json.dumps(turn_metadata, separators=(",", ":"))
    permissions = (
        "<permissions instructions>\n"
        "Filesystem sandboxing defines which files can be read or written. "
        "`sandbox_mode` is `read-only`: The sandbox only permits reading files. "
        "Network access is restricted.\n"
        "Approval policy is currently never.\n"
        "</permissions instructions>"
    )
    body: dict[str, Any] = {
        "model": "gpt-5.5",
        "stream": True,
        "store": False,
        "include": ["reasoning.encrypted_content"],
        "parallel_tool_calls": True,
        "tool_choice": "auto",
        "instructions": "You are Codex, a coding agent powered by GPT-5.5.",
        "input": [
            {
                "type": "message",
                "role": "user",
                "content": [{"type": "input_text", "text": permissions}],
            },
            {
                "type": "message",
                "role": "user",
                "content": [{"type": "input_text", "text": "Reply with exactly: PARITY_CLI_OK"}],
            },
        ],
        "client_metadata": {
            "x-codex-turn-metadata": turn_json,
            "x-codex-installation-id": "22222222-2222-4222-8222-222222222222",
            "x-codex-window-id": f"{THREAD_ID}:0",
        },
    }
    headers = {
        "Accept": "text/event-stream",
        "Authorization": "[REDACTED]",
        "Content-Type": "application/json",
        "openai-beta": "responses_websockets=2026-02-06",
        "originator": DEFAULT_EXEC_ORIGINATOR,
        "session-id": THREAD_ID,
        "thread-id": THREAD_ID,
        "x-codex-turn-metadata": turn_json,
        "x-codex-window-id": f"{THREAD_ID}:0",
        "chatgpt-account-id": "acct-harness-cli",
    }
    return {
        "url": "https://chatgpt.com/backend-api/codex/responses",
        "transport": transport,
        "headers": headers,
        "body": body,
        "upstream_response": {
            "status": 200,
            "headers": {"content-type": "text/event-stream; charset=utf-8"},
        },
    }


def build_cli_shim_capture(native: dict[str, Any], *, codex_home: Path) -> dict[str, Any]:
    inbound_body = deepcopy(native["body"])
    request = make_mocked_request(
        "POST",
        "/v1/responses",
        headers={
            "originator": native["headers"]["originator"],
            "session-id": native["headers"]["session-id"],
            "thread-id": native["headers"]["thread-id"],
            "x-codex-turn-metadata": native["headers"]["x-codex-turn-metadata"],
            "x-codex-window-id": native["headers"]["x-codex-window-id"],
        },
    )
    auth_path = codex_home / "auth.json"
    auth_path.write_text(
        json.dumps({"tokens": {"access_token": "token", "account_id": "acct-harness-cli"}}),
        encoding="utf-8",
    )
    (codex_home / "installation_id").write_text("22222222-2222-4222-8222-222222222222\n", encoding="utf-8")

    import codex_shim.passthrough as passthrough_mod

    original_auth = passthrough_mod.settings.DEFAULT_CODEX_AUTH
    passthrough_mod.settings.DEFAULT_CODEX_AUTH = auth_path
    try:
        forwarded, upstream_headers = _prepare_upstream_request(request, inbound_body, compact=False)
    finally:
        passthrough_mod.settings.DEFAULT_CODEX_AUTH = original_auth

    return {
        "url": native["url"],
        "transport": "shim_passthrough",
        "headers": upstream_headers,
        "body": forwarded,
        "upstream_response": native.get("upstream_response"),
    }


def write_harness_fixtures(*, codex_home: Path | None = None) -> tuple[Path, Path]:
    native = build_cli_synthetic_capture(transport="http_upstream")
    home = codex_home or (FIXTURE_DIR / ".codex-home-build")
    home.mkdir(parents=True, exist_ok=True)
    shim = build_cli_shim_capture(native, codex_home=home)
    HARNESS_CLI_NATIVE.write_text(json.dumps(native, indent=2), encoding="utf-8")
    HARNESS_CLI_SHIM.write_text(json.dumps(shim, indent=2), encoding="utf-8")
    return HARNESS_CLI_NATIVE, HARNESS_CLI_SHIM


if __name__ == "__main__":
    native_path, shim_path = write_harness_fixtures()
    print(f"wrote {native_path}")
    print(f"wrote {shim_path}")
