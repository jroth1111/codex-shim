from __future__ import annotations

import os
import shutil
import subprocess
import uuid
from typing import Any

from ...routing import InferenceContext

_FALLBACK_CLIENT_VERSION = "2026.05.28-418efe5"
_cached_client_version: str | None = None


def resolve_cursor_client_version() -> str:
    """Match cursor-agent --version for api2.cursor.sh request signing."""
    override = os.environ.get("CODEX_SHIM_CURSOR_CLIENT_VERSION", "").strip()
    if override:
        return override
    global _cached_client_version
    if _cached_client_version is not None:
        return _cached_client_version
    for command in ("cursor-agent", "cursor"):
        path = shutil.which(command)
        if not path:
            continue
        try:
            proc = subprocess.run(
                [path, "--version"],
                capture_output=True,
                text=True,
                timeout=2,
                check=False,
            )
        except (OSError, subprocess.TimeoutExpired):
            continue
        version = (proc.stdout or proc.stderr or "").strip()
        if proc.returncode == 0 and version:
            _cached_client_version = version
            return version
    _cached_client_version = _FALLBACK_CLIENT_VERSION
    return _FALLBACK_CLIENT_VERSION


DEFAULT_CLIENT_VERSION = resolve_cursor_client_version()
DEFAULT_ENDPOINT = os.environ.get("CURSOR_API_ENDPOINT", "https://api2.cursor.sh").rstrip("/")


def build_cursor_agent_headers(
    *,
    inference: InferenceContext,
    auth_token: str | None = None,
    request_id: str | None = None,
    transport: str = "http2",
    channel: str | None = None,
) -> dict[str, str]:
    rid = request_id or str(uuid.uuid4())
    channel_suffix = ""
    if channel and channel not in {"prod", "prod-stable-internal"}:
        channel_suffix = f"-{channel}"
    client_version = f"cli-{DEFAULT_CLIENT_VERSION}{channel_suffix}"
    headers: dict[str, str] = {
        "Authorization": f"Bearer {auth_token or '<redacted>'}",
        "Content-Type": "application/json",
        "x-request-id": rid,
        "x-original-request-id": rid,
        "x-ghost-mode": "true",
        "x-cursor-client-version": client_version,
        "x-cursor-client-type": inference.surface,
    }
    if transport == "http1":
        headers["x-cursor-streaming"] = "true"
    return headers


def endpoint_urls(base: str | None = None) -> dict[str, str]:
    root = (base or DEFAULT_ENDPOINT).rstrip("/")
    return {
        "base": root,
        "run": f"{root}/agent.v1.AgentService/Run",
        "run_sse": f"{root}/agent.v1.AgentService/RunSSE",
        "bidi_append": f"{root}/aiserver.v1.BidiService/BidiAppend",
        "get_server_config": f"{root}/aiserver.v1.ServerConfigService/GetServerConfig",
        "get_usable_models": f"{root}/agent.v1.AgentService/GetUsableModels",
    }


def header_shape_for_parity() -> dict[str, Any]:
    """Keys expected by reproduce-inference.mjs structural checks."""
    return {
        "authorization": "Bearer <redacted Cursor auth token>",
        "x-request-id": "<uuid>",
        "x-original-request-id": "<uuid>",
        "x-ghost-mode": "<bool string>",
        "x-cursor-client-version": "cli-<version>",
        "x-cursor-client-type": "cli|acp",
        "x-cursor-streaming": "true (http1 only)",
    }
