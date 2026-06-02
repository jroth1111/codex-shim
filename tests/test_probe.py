from __future__ import annotations

import json

import pytest

from codex_shim.probe import (
    CompactProbeError,
    validate_compact_response,
    validate_passthrough_compact_response,
    validate_passthrough_streaming_response,
)


def _check(condition: bool, message: str = "") -> None:
    if not condition:
        raise AssertionError(message)


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
    _check(item_type == "context_compaction")
    _check(summary == "Task state preserved.")


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
    _check(item_type == "context_compaction")
    _check(summary == "Task state preserved.")


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

    _check(probe_fidelity() == 0)


def test_probe_all_offline_without_daemon(tmp_path):
    from codex_shim.probe import probe_all

    settings = tmp_path / "models.json"
    settings.write_text(json.dumps({"models": []}))
    _check(probe_all(settings, port=59999, live=False) == 0)


def test_probe_passthrough_skips_without_auth(monkeypatch):
    from codex_shim.probe import probe_passthrough

    monkeypatch.setattr("codex_shim.probe.chatgpt_passthrough_available", lambda: False)
    _check(probe_passthrough(8765, live=True) == 0)


def test_probe_passthrough_skips_without_live_flag(monkeypatch):
    from codex_shim.probe import probe_passthrough

    monkeypatch.setattr("codex_shim.probe.chatgpt_passthrough_available", lambda: True)
    monkeypatch.delenv("CODEX_SHIM_PROBE_PASSTHROUGH", raising=False)
    _check(probe_passthrough(8765, live=False) == 0)


def test_probe_passthrough_compact_skips_without_auth(monkeypatch):
    from codex_shim.probe import probe_passthrough_compact

    monkeypatch.setattr("codex_shim.probe.chatgpt_passthrough_available", lambda: False)
    _check(probe_passthrough_compact(8765, live=True) == 0)


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
    _check(item_type == "compaction_summary")
    _check(summary.startswith("encrypted ("))


def test_validate_passthrough_streaming_response_checks_output_text():
    response_id = validate_passthrough_streaming_response(
        {
            "id": "resp_stream",
            "status": "completed",
            "__probe_output_text": "OK",
        },
        expect_text="OK",
    )
    _check(response_id == "resp_stream")


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


def test_probe_tools_checks_metadata_and_tool_items(monkeypatch, tmp_path):
    from codex_shim.probe import probe_tools
    from codex_shim.settings import ShimModel

    route = ShimModel(
        slug="cursor-auto",
        model="auto",
        display_name="Cursor",
        provider="cursor-agent",
        base_url="",
        transport="cursor_cli",
    )
    monkeypatch.setattr("codex_shim.probe.harness.resolve_byok_slug", lambda _p, _s: route)
    captured: dict[str, int] = {}

    def _fake_post_fixture_turn(*_args, **kwargs):
        captured["timeout"] = int(kwargs.get("timeout", 0))
        return {
            "status": "completed",
            "output": [{"type": "local_shell_call", "call_id": "c1", "action": {"command": "pwd"}}],
            "metadata": {
                "shim_route": {
                    "transport": "cursor_cli",
                    "capabilities": {"local_shell": "mapped"},
                }
            },
        }

    monkeypatch.setattr(
        "codex_shim.probe.harness.post_fixture_turn",
        _fake_post_fixture_turn,
    )
    _check(probe_tools(tmp_path / "settings.json", 8765) == 0)
    _check(captured["timeout"] == 600)
