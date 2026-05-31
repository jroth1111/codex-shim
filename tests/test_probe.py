from __future__ import annotations

import json

import pytest

from codex_shim.probe import CompactProbeError, validate_compact_response


def test_validate_compact_response_accepts_context_compaction():
    item_type, summary = validate_compact_response(
        {
            "status": "completed",
            "output": [
                {
                    "type": "context_compaction",
                    "summary": [{"type": "summary_text", "text": "Task state preserved."}],
                }
            ],
        }
    )
    assert item_type == "context_compaction"
    assert summary == "Task state preserved."


def test_validate_compact_response_accepts_compaction_trigger_plus_context_compaction():
    item_type, summary = validate_compact_response(
        {
            "status": "completed",
            "output": [
                {"type": "compaction_trigger"},
                {
                    "type": "context_compaction",
                    "summary": [{"type": "summary_text", "text": "Task state preserved."}],
                },
            ],
        }
    )
    assert item_type == "context_compaction"
    assert summary == "Task state preserved."


def test_probe_fidelity_offline():
    from codex_shim.probe import probe_fidelity

    assert probe_fidelity() == 0


def test_probe_all_offline_without_daemon(tmp_path):
    from codex_shim.probe import probe_all

    settings = tmp_path / "models.json"
    settings.write_text(json.dumps({"models": []}))
    assert probe_all(settings, port=59999, live=False) == 0


def test_validate_compact_response_rejects_message_shape():
    with pytest.raises(CompactProbeError, match="context_compaction"):
        validate_compact_response(
            {
                "status": "completed",
                "output": [
                    {
                        "type": "message",
                        "content": [{"type": "output_text", "text": "summary"}],
                    }
                ],
            }
        )
