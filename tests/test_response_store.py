from __future__ import annotations

from codex_shim.response_store import ResponseStore


def test_response_store_persists_across_instances(tmp_path):
    db = tmp_path / "store.sqlite"
    items = [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": "hi"}]}]
    store1 = ResponseStore(path=db)
    store1.put("resp_1", items)
    store1.close()

    store2 = ResponseStore(path=db)
    assert store2.get("resp_1") == items
    store2.close()


def test_response_store_lru_eviction(tmp_path):
    db = tmp_path / "store.sqlite"
    store = ResponseStore(path=db, max_items=3)
    store.put("a", [{"id": "a"}])
    store.put("b", [{"id": "b"}])
    store.put("c", [{"id": "c"}])
    store.get("a")
    store.put("d", [{"id": "d"}])
    assert store.get("a") is not None
    assert store.get("b") is None
    assert store.get("c") is not None
    assert store.get("d") is not None
    store.close()


def test_response_store_session_scope_isolates_entries(tmp_path, monkeypatch):
    monkeypatch.setenv("CODEX_SHIM_RESPONSE_STORE_SCOPE", "session")
    db = tmp_path / "store.sqlite"
    store = ResponseStore(path=db)
    store.put("resp_1", [{"id": "a"}], session_id="sess-a")
    store.put("resp_1", [{"id": "b"}], session_id="sess-b")
    assert store.get("resp_1", "sess-a") == [{"id": "a"}]
    assert store.get("resp_1", "sess-b") == [{"id": "b"}]
    store.close()


def test_response_store_respects_env_max_items(tmp_path, monkeypatch):
    monkeypatch.setenv("CODEX_SHIM_RESPONSE_STORE_MAX", "2")
    db = tmp_path / "store.sqlite"
    store = ResponseStore(path=db)
    store.put("a", [{"id": "a"}])
    store.put("b", [{"id": "b"}])
    store.put("c", [{"id": "c"}])
    assert store.get("a") is None
    assert store.get("b") is not None
    assert store.get("c") is not None
    store.close()
