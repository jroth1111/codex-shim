from __future__ import annotations

import json
from pathlib import Path

from codex_shim.providers.cursor_agent.run_decode import decode_upstream_run_capture


def test_decode_upstream_run_capture_extracts_prompt_text() -> None:
    capture_path = (
        Path(__file__).resolve().parents[1]
        / "codex-desktop-decompiled"
        / "captures"
        / "debug"
        / "cursor_agent_upstream_golden.json"
    )
    if not capture_path.is_file():
        return
    payload = json.loads(capture_path.read_text(encoding="utf-8"))
    decoded = decode_upstream_run_capture(payload)
    assert decoded.get("conversationId")
    assert decoded.get("payloadBytes", 0) > 0
