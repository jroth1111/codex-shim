"""Build synthetic upstream capture pairs for harness CI fixtures."""
from __future__ import annotations

import json
from copy import deepcopy
from pathlib import Path
from typing import Any

FIXTURE_DIR = Path(__file__).resolve().parent
HARNESS_NATIVE = FIXTURE_DIR / "harness_native_to_chatgpt.json"
HARNESS_SHIM = FIXTURE_DIR / "harness_shim_to_chatgpt.json"


def build_synthetic_capture(*, transport: str = "http_upstream") -> dict[str, Any]:
    thread_id = "019ea235-0000-7000-8000-000000000001"
    turn_metadata = {
        "session_id": thread_id,
        "thread_id": thread_id,
        "request_kind": "turn",
        "sandbox": "seatbelt",
        "workspace_kind": "project",
        "window_id": f"{thread_id}:0",
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
        "input": [
            {
                "type": "message",
                "role": "user",
                "content": [{"type": "input_text", "text": permissions}],
            },
            {
                "type": "message",
                "role": "user",
                "content": [{"type": "input_text", "text": "Reply with exactly: PARITY_OK"}],
            },
        ],
        "client_metadata": {
            "x-codex-turn-metadata": turn_json,
            "x-codex-window-id": f"{thread_id}:0",
            "x-codex-installation-id": "11111111-1111-4111-8111-111111111111",
        },
    }
    headers = {
        "Accept": "text/event-stream",
        "Authorization": "[REDACTED]",
        "Content-Type": "application/json",
        "openai-beta": "responses_websockets=2026-02-06",
        "originator": "Codex Desktop",
        "session-id": thread_id,
        "thread-id": thread_id,
        "x-codex-turn-metadata": turn_json,
        "x-codex-window-id": f"{thread_id}:0",
        "x-codex-installation-id": "11111111-1111-4111-8111-111111111111",
        "chatgpt-account-id": "acct-harness",
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


def build_synthetic_pair() -> tuple[dict[str, Any], dict[str, Any]]:
    native = build_synthetic_capture(transport="http_upstream")
    shim = deepcopy(native)
    shim["transport"] = "shim_passthrough"
    return native, shim


def write_harness_fixtures() -> tuple[Path, Path]:
    native, shim = build_synthetic_pair()
    HARNESS_NATIVE.write_text(json.dumps(native, indent=2), encoding="utf-8")
    HARNESS_SHIM.write_text(json.dumps(shim, indent=2), encoding="utf-8")
    return HARNESS_NATIVE, HARNESS_SHIM


if __name__ == "__main__":
    native_path, shim_path = write_harness_fixtures()
    print(f"wrote {native_path}")
    print(f"wrote {shim_path}")
