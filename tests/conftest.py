from __future__ import annotations

import pytest


@pytest.fixture(autouse=True)
def isolated_response_store(monkeypatch, tmp_path):
    store_path = tmp_path / "response_store.sqlite"
    monkeypatch.setenv("CODEX_SHIM_RESPONSE_STORE", str(store_path))
    return store_path
