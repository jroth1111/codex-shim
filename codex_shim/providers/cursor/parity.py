from __future__ import annotations

import os
import sqlite3
import time
from copy import deepcopy
from dataclasses import dataclass
from pathlib import Path
from typing import Any

from aiohttp import web

from ...sessions import parse_turn_metadata, resolve_thread_and_session_ids, responses_items_from_input
from ...settings import RUNTIME_DIR, ShimModel


def _truthy(value: Any) -> bool:
    if isinstance(value, bool):
        return value
    if value is None:
        return False
    return str(value).strip().lower() in {"1", "true", "yes", "on"}


def legacy_delegate_prompt_enabled(route: ShimModel) -> bool:
    if _truthy(os.environ.get("CODEX_SHIM_CURSOR_LEGACY_DELEGATE_PROMPT")):
        return True
    raw = route.raw if isinstance(route.raw, dict) else {}
    return _truthy(raw.get("legacyDelegatePrompt") or raw.get("legacy_delegate_prompt"))


def upstream_parity_enabled(route: ShimModel) -> bool:
    """When true, invoke cursor-agent like a direct CLI turn (plain prompt, --workspace, --resume)."""
    if legacy_delegate_prompt_enabled(route):
        return False
    if _truthy(os.environ.get("CODEX_SHIM_CURSOR_UPSTREAM_PARITY")):
        return True
    raw = route.raw if isinstance(route.raw, dict) else {}
    if "upstreamParity" in raw or "upstream_parity" in raw:
        return _truthy(raw.get("upstreamParity") or raw.get("upstream_parity"))
    # Default on for Cursor delegate routes — upstream observability is the north star.
    return route.is_cursor_cli or route.is_cursor_agent or route.is_cursor_acp


def default_session_store_path() -> Path:
    env = os.environ.get("CODEX_SHIM_CURSOR_SESSION_STORE", "").strip()
    if env:
        return Path(env).expanduser()
    return RUNTIME_DIR / "cursor_thread_sessions.sqlite"


def extract_desktop_thread_id(request: web.Request | None, body: dict[str, Any]) -> str | None:
    turn_raw = None
    if request is not None:
        turn_raw = request.headers.get("x-codex-turn-metadata")
    client_metadata = body.get("client_metadata")
    if turn_raw is None and isinstance(client_metadata, dict):
        turn_raw = client_metadata.get("x-codex-turn-metadata")
    turn_metadata = parse_turn_metadata(turn_raw)
    if request is None:
        if not isinstance(turn_metadata, dict):
            return None
        thread_id = str(turn_metadata.get("thread_id") or turn_metadata.get("session_id") or "").strip()
        return thread_id or None
    thread_id, _session_id = resolve_thread_and_session_ids(request, body, turn_metadata)
    return thread_id


def _is_shim_catalog_instructions(text: str) -> bool:
    stripped = text.strip()
    if not stripped:
        return True
    if "{model_name}" in stripped:
        return True
    return "through a local all-model shim" in stripped or "through a local BYOK shim" in stripped


def sanitize_cursor_upstream_body(body: dict[str, Any]) -> dict[str, Any]:
    """Drop shim catalog instructions Desktop injects so cursor-agent gets the user line."""
    cleaned = deepcopy(body)
    instructions = cleaned.get("instructions")
    if isinstance(instructions, str) and _is_shim_catalog_instructions(instructions):
        cleaned.pop("instructions", None)
    return cleaned


def latest_user_text(body: dict[str, Any]) -> str:
    body = sanitize_cursor_upstream_body(body)
    items = responses_items_from_input(body.get("input"))
    for item in reversed(items):
        if not isinstance(item, dict):
            continue
        role = str(item.get("role") or "").lower()
        item_type = str(item.get("type") or "").lower()
        is_user = role == "user" or (item_type == "message" and role == "user")
        if not is_user:
            continue
        content = item.get("content")
        if isinstance(content, str) and content.strip():
            return content.strip()
        if isinstance(content, list):
            parts: list[str] = []
            for block in content:
                if not isinstance(block, dict):
                    continue
                if block.get("type") in {"input_text", "text", "output_text"}:
                    text = str(block.get("text") or "").strip()
                    if text:
                        parts.append(text)
            if parts:
                return "\n".join(parts)
    instructions = body.get("instructions")
    if isinstance(instructions, str) and instructions.strip():
        if not _is_shim_catalog_instructions(instructions):
            return instructions.strip()
    return ""


class CursorThreadSessionStore:
    """Maps Desktop thread_id → cursor-agent stream-json session_id for --resume."""

    def __init__(self, path: Path | None = None) -> None:
        self.path = path or default_session_store_path()
        self.path.parent.mkdir(parents=True, exist_ok=True)
        self._conn = sqlite3.connect(str(self.path))
        self._conn.execute("PRAGMA journal_mode=WAL")
        self._conn.execute(
            """
            CREATE TABLE IF NOT EXISTS cursor_thread_sessions (
                thread_id TEXT PRIMARY KEY,
                cursor_session_id TEXT NOT NULL,
                updated_at REAL NOT NULL
            )
            """
        )
        self._conn.commit()

    def get(self, thread_id: str) -> str | None:
        row = self._conn.execute(
            "SELECT cursor_session_id FROM cursor_thread_sessions WHERE thread_id = ?",
            (thread_id,),
        ).fetchone()
        if not row:
            return None
        value = str(row[0] or "").strip()
        return value or None

    def put(self, thread_id: str, cursor_session_id: str) -> None:
        thread_id = thread_id.strip()
        cursor_session_id = cursor_session_id.strip()
        if not thread_id or not cursor_session_id:
            return
        now = time.time()
        self._conn.execute(
            """
            INSERT INTO cursor_thread_sessions(thread_id, cursor_session_id, updated_at)
            VALUES (?, ?, ?)
            ON CONFLICT(thread_id) DO UPDATE SET
                cursor_session_id = excluded.cursor_session_id,
                updated_at = excluded.updated_at
            """,
            (thread_id, cursor_session_id, now),
        )
        self._conn.commit()

    def close(self) -> None:
        self._conn.close()


@dataclass(frozen=True)
class CursorCliTurnOptions:
    upstream_parity: bool
    workspace_path: str | None
    resume_chat_id: str | None
    cli_mode: str | None
    thread_id: str | None


def build_cursor_cli_turn_options(
    route: ShimModel,
    body: dict[str, Any],
    *,
    request: web.Request | None = None,
    chained_from_previous: bool = False,
    workspace: Path | None = None,
    inference_cli_mode: str | None = None,
    session_store: CursorThreadSessionStore | None = None,
) -> CursorCliTurnOptions:
    parity = upstream_parity_enabled(route)
    thread_id = extract_desktop_thread_id(request, body) if parity else None
    workspace_path = str(workspace) if workspace is not None else None
    resume_chat_id = None
    if parity and thread_id:
        store = session_store or CursorThreadSessionStore()
        mapped = store.get(thread_id)
        if session_store is None:
            store.close()
        has_user_turn = bool(latest_user_text(body).strip())
        should_resume = bool(
            mapped
            and (
                chained_from_previous
                or body.get("previous_response_id")
                or has_user_turn
            )
        )
        if should_resume:
            resume_chat_id = mapped
    cli_mode = inference_cli_mode if inference_cli_mode in {"plan", "ask"} else None
    return CursorCliTurnOptions(
        upstream_parity=parity,
        workspace_path=workspace_path,
        resume_chat_id=resume_chat_id,
        cli_mode=cli_mode,
        thread_id=thread_id,
    )
