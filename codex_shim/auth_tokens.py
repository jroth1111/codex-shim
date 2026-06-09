from __future__ import annotations

import subprocess
import time
from typing import Any

_TOKEN_CACHE: dict[str, tuple[str, float]] = {}
_DEFAULT_TTL_SECONDS = 300


def _field(row: dict[str, Any], *keys: str, default: Any = None) -> Any:
    for key in keys:
        if key in row and row[key] is not None:
            return row[key]
    return default


def auth_command_for_route(raw: dict[str, Any]) -> tuple[str, list[str]] | None:
    command = str(_field(raw, "auth_command", "authCommand", default="") or "").strip()
    if not command:
        return None
    args_raw = _field(raw, "auth_args", "authArgs", default=[]) or []
    args = [str(arg) for arg in args_raw] if isinstance(args_raw, list) else []
    return command, args


def resolve_bearer_token(slug: str, raw: dict[str, Any], *, api_key: str = "", ttl_seconds: int = _DEFAULT_TTL_SECONDS) -> str:
    if api_key:
        return api_key
    spec = auth_command_for_route(raw)
    if spec is None:
        return ""
    command, args = spec
    cache_key = f"{slug}:{command}:{' '.join(args)}"
    now = time.time()
    cached = _TOKEN_CACHE.get(cache_key)
    if cached and now - cached[1] < ttl_seconds:
        return cached[0]
    result = subprocess.run(
        [command, *args],
        capture_output=True,
        text=True,
        timeout=30,
        check=False,
    )
    if result.returncode != 0:
        raise RuntimeError(
            f"auth_command failed for {slug!r} (exit {result.returncode}): {result.stderr.strip() or result.stdout.strip()}"
        )
    token = (result.stdout or "").strip()
    if not token:
        raise RuntimeError(f"auth_command for {slug!r} returned empty token")
    _TOKEN_CACHE[cache_key] = (token, now)
    return token
