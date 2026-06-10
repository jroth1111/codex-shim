from __future__ import annotations

import resource

import pytest


def pytest_configure(config):
    """Keep local aiohttp-heavy suites from exhausting macOS' low fd default.

    The server tests open many short-lived TestServer sockets in one process.
    Developer shells on macOS commonly start with RLIMIT_NOFILE=256, which can
    fail the suite before product assertions run. CI and typical Linux shells
    already have a higher limit; this is a no-op when the hard limit is lower.
    """
    try:
        soft, hard = resource.getrlimit(resource.RLIMIT_NOFILE)
    except (OSError, ValueError, AttributeError):
        return
    target = min(max(soft, 4096), hard)
    if target > soft:
        try:
            resource.setrlimit(resource.RLIMIT_NOFILE, (target, hard))
        except (OSError, ValueError):
            pass


@pytest.fixture(autouse=True)
def isolated_response_store(monkeypatch, tmp_path):
    store_path = tmp_path / "response_store.sqlite"
    monkeypatch.setenv("CODEX_SHIM_RESPONSE_STORE", str(store_path))
    return store_path


@pytest.fixture(autouse=True)
def disable_cursor_passthrough_by_default(monkeypatch):
    """Keep cursor subscription discovery deterministic unless a test opts in."""
    monkeypatch.setattr("codex_shim.providers.cursor.passthrough.cursor_passthrough_available", lambda **_: False)
    monkeypatch.setattr("codex_shim.providers.cursor_passthrough_available", lambda **_: False)
    monkeypatch.setattr("codex_shim.clientconfig.catalog.cursor_passthrough_available", lambda **_: False)
    monkeypatch.setattr("codex_shim.cli.cursor_passthrough_available", lambda **_: False)
