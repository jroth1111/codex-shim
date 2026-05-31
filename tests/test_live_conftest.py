from __future__ import annotations

import importlib.util
from pathlib import Path
from types import ModuleType


def _load_live_conftest() -> ModuleType:
    path = Path(__file__).parent / "live" / "conftest.py"
    spec = importlib.util.spec_from_file_location("live_conftest_under_test", path)
    assert spec is not None and spec.loader is not None
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def test_live_byok_configure_attempts_all_available_auto_configurers(monkeypatch, tmp_path):
    live_conftest = _load_live_conftest()
    calls: list[str] = []

    monkeypatch.setenv("CODEX_SHIM_LIVE", "1")
    monkeypatch.setattr(
        live_conftest,
        "_configure_zai_coding_plan",
        lambda _settings_path: calls.append("zai") or True,
    )
    monkeypatch.setattr(
        live_conftest,
        "_configure_cursor_agent_cli",
        lambda _settings_path: calls.append("cursor") or True,
    )
    monkeypatch.setattr(live_conftest.subprocess, "run", lambda *args, **kwargs: None)
    monkeypatch.setattr(live_conftest.harness, "shim_reachable", lambda _port: True)

    live_conftest.configure_live_byok.__wrapped__(tmp_path / "models.json", 8765)

    assert calls == ["zai", "cursor"]
