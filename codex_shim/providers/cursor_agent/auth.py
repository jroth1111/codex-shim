from __future__ import annotations

import base64
import json
import os
import time
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


def cursor_access_token_expiry(token: str | None) -> float | None:
    """Best-effort ``exp`` (epoch seconds) from a JWT access token.

    Returns ``None`` for opaque tokens or JWTs without an ``exp`` claim, so
    callers can treat "unknown expiry" as "assume still valid" rather than
    refusing a usable token.
    """
    if not token:
        return None
    parts = token.split(".")
    if len(parts) < 2:
        return None
    payload_segment = parts[1]
    padded = payload_segment + "=" * (-len(payload_segment) % 4)
    try:
        payload = json.loads(base64.urlsafe_b64decode(padded).decode("utf-8"))
    except (ValueError, json.JSONDecodeError, UnicodeDecodeError):
        return None
    exp = payload.get("exp") if isinstance(payload, dict) else None
    if isinstance(exp, bool) or not isinstance(exp, (int, float)):
        return None
    return float(exp) if exp > 0 else None


def cursor_access_token_expired(
    token: str | None,
    *,
    leeway_s: float = 60.0,
    now: float | None = None,
) -> bool:
    """True when a JWT token's ``exp`` has passed (with ``leeway_s`` slack).

    A missing token is expired; an opaque token or one without ``exp`` is not
    (unknown expiry -> assume valid). ``leeway_s`` avoids refusing a token that
    expires in the next few seconds while the request is in flight.
    """
    if not token:
        return True
    exp = cursor_access_token_expiry(token)
    if exp is None:
        return False
    current = now if now is not None else time.time()
    return current + leeway_s >= exp
