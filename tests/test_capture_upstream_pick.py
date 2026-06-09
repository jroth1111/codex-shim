from __future__ import annotations

import importlib.util
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def _load_capture_module():
    spec = importlib.util.spec_from_file_location(
        "capture_cursor_upstream_parity",
        ROOT / "scripts" / "capture_cursor_upstream_parity.py",
    )
    module = importlib.util.module_from_spec(spec)
    assert spec.loader is not None
    spec.loader.exec_module(module)
    return module


def test_pick_agent_wire_prefers_prompt_match(tmp_path):
    cap = _load_capture_module()
    jsonl = tmp_path / "capture.jsonl"
    noise = {
        "path": "/agent.v1.AgentService/Run",
        "body_hex": "deadbeef",
        "body_text_preview": "You are Codex running on shim",
    }
    match = {
        "path": "/agent.v1.AgentService/Run",
        "body_hex": "5245504c59",
        "body_text_preview": "Reply with exactly: CURSOR_DESKTOP_OK",
    }
    jsonl.write_text(
        "\n".join(json.dumps(row) for row in (noise, match)),
        encoding="utf-8",
    )
    out = tmp_path / "picked.json"
    cap._pick_agent_wire_capture(
        jsonl,
        out,
        prefer_last=True,
        prompt_contains="CURSOR_DESKTOP_OK",
        require_prompt=True,
    )
    picked = json.loads(out.read_text(encoding="utf-8"))
    assert "CURSOR_DESKTOP_OK" in picked["body_text_preview"]


def test_pick_agent_wire_require_prompt_raises(tmp_path):
    cap = _load_capture_module()
    jsonl = tmp_path / "capture.jsonl"
    jsonl.write_text(
        json.dumps(
            {
                "path": "/agent.v1.AgentService/Run",
                "body_text_preview": "unrelated",
            }
        ),
        encoding="utf-8",
    )
    out = tmp_path / "picked.json"
    try:
        cap._pick_agent_wire_capture(
            jsonl,
            out,
            prompt_contains="CURSOR_DESKTOP_OK",
            require_prompt=True,
        )
    except RuntimeError as exc:
        assert "CURSOR_DESKTOP_OK" in str(exc)
    else:
        raise AssertionError("expected RuntimeError")
