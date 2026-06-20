from __future__ import annotations

from codex_shim.providers.cursor.parity import CursorThreadSessionStore


def test_cursor_session_store_list_and_clear(tmp_path):
    store = CursorThreadSessionStore(tmp_path / "sessions.db")
    try:
        store.put("thread-1", "sess-1")
        store.put("thread-2", "sess-2")
        rows = store.list_all()
        assert {r[0] for r in rows} == {"thread-1", "thread-2"}
        assert all(r[1] and r[2] > 0 for r in rows)
        # newest-first ordering: list_all returns DESC by updated_at.
        assert rows == sorted(rows, key=lambda r: -r[2])

        count = store.clear()
        assert count == 2
        assert store.list_all() == []
    finally:
        store.close()
