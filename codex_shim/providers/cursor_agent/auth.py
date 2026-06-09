from __future__ import annotations

import json
import os
from pathlib import Path

from ...settings import DEFAULT_CODEX_AUTH


def load_cursor_access_token(auth_path: Path | None = None) -> str | None:
    """Read Cursor/Codex bearer token from auth.json (same source as ChatGPT passthrough)."""
    if os.environ.get("CODEX_SHIM_CURSOR_AUTH_TOKEN", "").strip():
        return os.environ["CODEX_SHIM_CURSOR_AUTH_TOKEN"].strip()
    path = Path(auth_path or DEFAULT_CODEX_AUTH).expanduser()
    if not path.is_file():
        return None
    try:
        data = json.loads(path.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError):
        return None
    tokens = data.get("tokens") if isinstance(data, dict) else None
    if not isinstance(tokens, dict):
        return None
    token = tokens.get("access_token")
    return str(token).strip() if token else None
