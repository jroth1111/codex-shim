from __future__ import annotations

import json

from codex_shim.observability.debug_dump import dump_debug_request


def test_debug_dump_disabled_by_default(tmp_path, monkeypatch):
    dump_path = tmp_path / "last_request.json"
    monkeypatch.delenv("CODEX_SHIM_DEBUG_DUMP", raising=False)
    monkeypatch.setenv("CODEX_SHIM_DEBUG_DUMP_PATH", str(dump_path))

    dump_debug_request("slug", "https://example.test", {"messages": [{"content": "secret"}]})

    assert not dump_path.exists()


def test_debug_dump_redacts_body_by_default(tmp_path, monkeypatch):
    dump_path = tmp_path / "last_request.json"
    monkeypatch.setenv("CODEX_SHIM_DEBUG_DUMP", "1")
    monkeypatch.setenv("CODEX_SHIM_DEBUG_DUMP_PATH", str(dump_path))
    monkeypatch.delenv("CODEX_SHIM_DEBUG_DUMP_FULL", raising=False)

    dump_debug_request("slug", "https://example.test", {"messages": [{"content": "secret"}], "model": "m"})

    payload = json.loads(dump_path.read_text())
    assert payload["body"]["messages"] == {"_redacted": True, "type": "list", "items": 1}
    assert "secret" not in dump_path.read_text()


def test_debug_dump_full_mode_preserves_body(tmp_path, monkeypatch):
    dump_path = tmp_path / "last_request.json"
    monkeypatch.setenv("CODEX_SHIM_DEBUG_DUMP", "1")
    monkeypatch.setenv("CODEX_SHIM_DEBUG_DUMP_FULL", "1")
    monkeypatch.setenv("CODEX_SHIM_DEBUG_DUMP_PATH", str(dump_path))

    dump_debug_request("slug", "https://example.test", {"messages": [{"content": "secret"}], "model": "m"})

    payload = json.loads(dump_path.read_text())
    assert payload["body"]["messages"] == [{"content": "secret"}]
