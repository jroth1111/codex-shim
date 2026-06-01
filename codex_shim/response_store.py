from __future__ import annotations

import json
import os
import sqlite3
import time
from copy import deepcopy
from pathlib import Path
from typing import Any


DEFAULT_MAX_ITEMS = 256


def default_store_path() -> Path:
    env = os.environ.get("CODEX_SHIM_RESPONSE_STORE", "").strip()
    if env:
        return Path(env).expanduser()
    return Path(__file__).resolve().parents[1] / ".codex-shim" / "response_store.sqlite"


def default_max_items() -> int:
    raw = os.environ.get("CODEX_SHIM_RESPONSE_STORE_MAX", "").strip()
    if not raw:
        return DEFAULT_MAX_ITEMS
    try:
        return max(1, int(raw))
    except ValueError:
        return DEFAULT_MAX_ITEMS


def store_scope() -> str:
    raw = os.environ.get("CODEX_SHIM_RESPONSE_STORE_SCOPE", "session").strip().lower()
    return "global" if raw == "global" else "session"


class ResponseStore:
    def __init__(self, path: Path | None = None, max_items: int | None = None):
        self.max_items = max_items if max_items is not None else default_max_items()
        self.scope = store_scope()
        self.path = path or default_store_path()
        self.path.parent.mkdir(parents=True, exist_ok=True)
        self._conn = sqlite3.connect(str(self.path))
        self._conn.execute("PRAGMA journal_mode=WAL")
        self._conn.execute(
            """
            CREATE TABLE IF NOT EXISTS responses (
                id TEXT PRIMARY KEY,
                items_json TEXT NOT NULL,
                created_at REAL NOT NULL
            )
            """
        )
        self._ensure_v2_schema()
        self._conn.commit()

    def _ensure_v2_schema(self) -> None:
        columns = {
            row[1]
            for row in self._conn.execute("PRAGMA table_info(responses)").fetchall()
        }
        if "session_id" not in columns:
            self._conn.execute("ALTER TABLE responses ADD COLUMN session_id TEXT NOT NULL DEFAULT ''")
        if "model" not in columns:
            self._conn.execute("ALTER TABLE responses ADD COLUMN model TEXT NOT NULL DEFAULT ''")
        self._conn.execute(
            "CREATE INDEX IF NOT EXISTS idx_responses_session_created ON responses(session_id, created_at)"
        )

    def _storage_id(self, response_id: str, session_id: str = "") -> str:
        if self.scope == "session":
            return f"{session_id}::{response_id}"
        return response_id

    def get(self, response_id: str, session_id: str = "") -> list[dict[str, Any]] | None:
        storage_id = self._storage_id(response_id, session_id)
        row = self._conn.execute(
            "SELECT items_json, id FROM responses WHERE id = ?",
            (storage_id,),
        ).fetchone()
        if row is None:
            return None
        self._conn.execute(
            "UPDATE responses SET created_at = ? WHERE id = ?",
            (time.time(), row[1]),
        )
        self._conn.commit()
        items = json.loads(row[0])
        return deepcopy(items)

    def put(
        self,
        response_id: str,
        items: list[dict[str, Any]],
        *,
        session_id: str = "",
        model: str = "",
    ) -> None:
        now = time.time()
        storage_id = self._storage_id(response_id, session_id)
        scoped_session = session_id if self.scope == "session" and session_id else ""
        payload = json.dumps(items, separators=(",", ":"))
        self._conn.execute(
            """
            INSERT INTO responses (id, items_json, created_at, session_id, model)
            VALUES (?, ?, ?, ?, ?)
            ON CONFLICT(id) DO UPDATE SET
                items_json = excluded.items_json,
                created_at = excluded.created_at,
                session_id = excluded.session_id,
                model = excluded.model
            """,
            (storage_id, payload, now, scoped_session, model or ""),
        )
        self._conn.commit()
        self._prune(scoped_session)

    def _prune(self, session_id: str) -> None:
        if self.scope == "session":
            count = self._conn.execute(
                "SELECT COUNT(*) FROM responses WHERE session_id = ?",
                (session_id,),
            ).fetchone()[0]
        else:
            count = self._conn.execute("SELECT COUNT(*) FROM responses").fetchone()[0]
        excess = count - self.max_items
        if excess <= 0:
            return
        if self.scope == "session":
            self._conn.execute(
                """
                DELETE FROM responses
                WHERE rowid IN (
                    SELECT rowid FROM responses
                    WHERE session_id = ?
                    ORDER BY created_at ASC
                    LIMIT ?
                )
                """,
                (session_id, excess),
            )
        else:
            self._conn.execute(
                """
                DELETE FROM responses
                WHERE rowid IN (
                    SELECT rowid FROM responses
                    ORDER BY created_at ASC
                    LIMIT ?
                )
                """,
                (excess,),
            )
        self._conn.commit()

    def close(self) -> None:
        self._conn.close()
