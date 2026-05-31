from __future__ import annotations

import json

import pytest

from codex_shim.probe import (
    CompactProbeError,
    validate_compact_response,
    validate_passthrough_compact_response,
    validate_passthrough_streaming_response,
)


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
        },
        expect_trigger=True,
    )
    assert item_type == "context_compaction"
    assert summary == "Task state preserved."


def test_validate_compact_response_rejects_missing_trigger_when_expected():
    with pytest.raises(CompactProbeError, match="compaction_trigger"):
        validate_compact_response(
            {
                "status": "completed",
                "output": [
                    {
                        "type": "context_compaction",
                        "summary": [{"type": "summary_text", "text": "Task state preserved."}],
                    }
                ],
            },
            expect_trigger=True,
        )


def test_probe_fidelity_offline():
    from codex_shim.probe import probe_fidelity

    assert probe_fidelity() == 0


def test_probe_all_offline_without_daemon(tmp_path):
    from codex_shim.probe import probe_all

    settings = tmp_path / "models.json"
    settings.write_text(json.dumps({"models": []}))
    assert probe_all(settings, port=59999, live=False) == 0


def test_probe_passthrough_skips_without_auth(monkeypatch):
    from codex_shim.probe import probe_passthrough

    monkeypatch.setattr("codex_shim.probe.chatgpt_passthrough_available", lambda: False)
    assert probe_passthrough(8765, live=True) == 0


def test_probe_passthrough_skips_without_live_flag(monkeypatch):
    from codex_shim.probe import probe_passthrough

    monkeypatch.setattr("codex_shim.probe.chatgpt_passthrough_available", lambda: True)
    monkeypatch.delenv("CODEX_SHIM_PROBE_PASSTHROUGH", raising=False)
    assert probe_passthrough(8765, live=False) == 0


def test_probe_passthrough_compact_skips_without_auth(monkeypatch):
    from codex_shim.probe import probe_passthrough_compact

    monkeypatch.setattr("codex_shim.probe.chatgpt_passthrough_available", lambda: False)
    assert probe_passthrough_compact(8765, live=True) == 0


def test_probe_ws_streaming_skips_when_daemon_unreachable(tmp_path):
    from codex_shim.probe import CompactProbeError, probe_ws_streaming

    settings = tmp_path / "models.json"
    settings.write_text(
        '{"customModels":[{"model":"m","displayName":"M","provider":"openai","baseUrl":"http://127.0.0.1:9/v1"}]}'
    )
    with pytest.raises(CompactProbeError, match="not reachable"):
        probe_ws_streaming(settings, port=59999)


def test_validate_passthrough_compact_response_accepts_compaction_summary():
    item_type, summary = validate_passthrough_compact_response(
        {
            "id": "resp_compact",
            "output": [
                {"type": "message", "role": "user"},
                {"type": "compaction_summary", "encrypted_content": "gAAAAABprobe"},
            ],
        }
    )
    assert item_type == "compaction_summary"
    assert summary.startswith("encrypted (")


def test_validate_passthrough_streaming_response_checks_output_text():
    response_id = validate_passthrough_streaming_response(
        {
            "id": "resp_stream",
            "status": "completed",
            "__probe_output_text": "OK",
        },
        expect_text="OK",
    )
    assert response_id == "resp_stream"


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
