from __future__ import annotations

import json
from pathlib import Path

from codex_shim.sessions import (
    CompactFrontier,
    CompactQuality,
    append_postcompact_capture,
    build_emulated_compact_instructions,
    compact_audit_record,
    evaluate_compact_summary,
    extract_compact_frontier,
    finalize_compact_summary,
    git_status_short,
)

FIXTURE = Path(__file__).resolve().parent / "fixtures" / "desktop" / "compaction_turn.json"


def test_extract_compact_frontier_from_fixture():
    payload = json.loads(FIXTURE.read_text())
    frontier = extract_compact_frontier(payload["input"])
    assert frontier.last_user_intent == "Continue the refactor."
    assert "refactor translate.py" in frontier.prior_compaction_excerpt
    assert frontier.input_item_count == 2


def test_extract_compact_frontier_captures_tools_and_open_items():
    input_items = [
        {"role": "user", "content": [{"type": "input_text", "text": "edit server.py"}]},
        {"type": "function_call", "name": "Write", "call_id": "call_1", "arguments": {"file_path": "server.py"}},
        {"type": "function_call", "name": "local_shell", "call_id": "call_2", "arguments": {"command": "pytest -q"}},
    ]
    frontier = extract_compact_frontier(input_items)
    assert frontier.last_user_intent == "edit server.py"
    assert "server.py" in frontier.modified_files
    assert "pytest -q" in frontier.recent_commands[0]
    assert frontier.open_items == ("Write:call_1", "local_shell:call_2")


def test_build_emulated_compact_instructions_embeds_frontier():
    frontier = CompactFrontier(
        last_user_intent="ship compaction hardening",
        modified_files=("codex_shim/compact.py",),
        recent_commands=("pytest tests/test_compact_frontier.py",),
        open_items=("Write:call_1",),
        input_item_count=4,
    )
    instructions = build_emulated_compact_instructions(frontier, git_status=" M compact.py")
    assert "LAST_USER_INTENT: ship compaction hardening" in instructions
    assert "codex_shim/compact.py" in instructions
    assert "pytest tests/test_compact_frontier.py" in instructions
    assert "GIT_STATUS:  M compact.py" in instructions
    assert "projection" in instructions


def test_evaluate_and_augment_summary_on_missing_intent():
    frontier = CompactFrontier(last_user_intent="write poem to md file", modified_files=("poem.md",))
    quality = evaluate_compact_summary("Generic task summary with no user words.", frontier)
    assert quality.summary_status == "projection_unverified"
    final, final_quality = finalize_compact_summary("Generic task summary with no user words.", frontier)
    assert final_quality.augmented is True
    assert "[shim-compact-warning: projection_unverified]" in final
    assert "write poem to md file" in final
    assert "--- original summary ---" in final


def test_evaluate_passes_when_intent_and_files_present():
    frontier = CompactFrontier(last_user_intent="implement compact", modified_files=("compact.py",))
    summary = "LAST_USER_INTENT: implement compact\nMODIFIED_FILES: compact.py"
    quality = evaluate_compact_summary(summary, frontier)
    assert quality.summary_status == "projection_verified"
    final, final_quality = finalize_compact_summary(summary, frontier)
    assert final == summary
    assert final_quality.augmented is False


def test_git_status_short_runs_in_repo(tmp_path):
    (tmp_path / ".git").mkdir()
    status = git_status_short(tmp_path)
    assert isinstance(status, str)


def test_compact_audit_record_shape():
    frontier = CompactFrontier(last_user_intent="ship compaction", modified_files=("compact.py",), input_item_count=3)
    quality = CompactQuality(
        summary_status="projection_verified",
        preserves_last_user_intent=True,
        mentions_modified_files=True,
    )
    record = compact_audit_record(
        model="byok-slug",
        summary="LAST_USER_INTENT: ship compaction",
        quality=quality,
        frontier=frontier,
        workspace="/tmp/ws",
        git_status=" M compact.py",
    )
    assert record["model"] == "byok-slug"
    assert record["summary_status"] == "projection_verified"
    assert record["last_user_intent"] == "ship compaction"
    assert record["modified_files_count"] == 1
    assert record["git_status_present"] is True
    assert record["workspace"] == "/tmp/ws"
    assert record["augmented"] is False
    assert len(record["summary_hash"]) == 64


def test_append_postcompact_capture_writes_jsonl(tmp_path, monkeypatch):
    capture_path = tmp_path / "postcompact-captures.jsonl"
    monkeypatch.setattr("codex_shim.sessions.compact.POSTCOMPACT_CAPTURE_PATH", capture_path)
    append_postcompact_capture({"model": "probe-slug", "summary_status": "projection_verified"})
    append_postcompact_capture({"model": "probe-slug", "summary_status": "projection_unverified", "augmented": True})
    lines = capture_path.read_text(encoding="utf-8").splitlines()
    assert len(lines) == 2
    first = json.loads(lines[0])
    second = json.loads(lines[1])
    assert first["model"] == "probe-slug"
    assert second["augmented"] is True
