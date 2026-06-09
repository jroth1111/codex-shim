from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from capture_upstream_parity import _payload_matches_dump, _prompt_markers  # noqa: E402


def test_prompt_markers_include_full_prompt_and_short_marker():
    markers = _prompt_markers("Reply with exactly: PARITY_OK")
    assert "Reply with exactly: PARITY_OK" in markers
    assert "PARITY_OK" in markers


def test_payload_matches_dump_requires_marker_in_last_user_message():
    overview_turn = {
        "body": {
            "input": [
                {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "hello"}]},
                {
                    "type": "message",
                    "role": "user",
                    "content": [{"type": "input_text", "text": "Recent threads include Reply with exactly: PARITY_OK"}],
                },
            ],
            "client_metadata": {"x-codex-turn-metadata": '{"request_kind":"turn"}'},
        }
    }
    parity_turn = {
        "body": {
            "input": [
                {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "hello"}]},
                {
                    "type": "message",
                    "role": "user",
                    "content": [{"type": "input_text", "text": "Reply with exactly: PARITY_OK"}],
                },
            ],
            "client_metadata": {"x-codex-turn-metadata": '{"request_kind":"turn"}'},
        }
    }
    prompt = "Reply with exactly: PARITY_OK"
    assert _payload_matches_dump(overview_turn, required_text=prompt) is False
    assert _payload_matches_dump(parity_turn, required_text=prompt) is True
