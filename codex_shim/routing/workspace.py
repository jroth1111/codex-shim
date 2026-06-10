from __future__ import annotations

import json
import os
from pathlib import Path
from typing import Any

from aiohttp import web

from ..passthrough_upstream import parse_turn_metadata
from ..responses_request import SHIM_INTERNAL_KEY_PREFIX
from ..settings import ShimModel

_WORKSPACE_METADATA_KEYS = (
    # Confirmed via Desktop RE (startThread cwd) + S11 capture runbook scenario.
    "cwd",
    "workspace",
    "working_directory",
    "workingDirectory",
    "project_path",
    "projectPath",
    "repo_root",
    "repoRoot",
)

WORKSPACE_METADATA_KEYS = _WORKSPACE_METADATA_KEYS

WORKSPACE_HEADER_KEYS = (
    "x-codex-cwd",
    "x-codex-workspace",
    "x-workspace",
    "x-project-path",
    "cwd",
    "workspace",
)

CLIENT_METADATA_WORKSPACE_KEYS = (
    "cwd",
    "workspace",
    "working_directory",
    "workingDirectory",
    "project_path",
    "projectPath",
)

DESKTOP_WORKSPACE_REQUEST_KEYS = frozenset(WORKSPACE_METADATA_KEYS) | frozenset(WORKSPACE_HEADER_KEYS) | frozenset(
    CLIENT_METADATA_WORKSPACE_KEYS
)


def _truthy_path(value: Any) -> str | None:
    if value in (None, ""):
        return None
    text = str(value).strip()
    return text or None


def _metadata_workspace(body: dict[str, Any]) -> str | None:
    metadata = body.get("metadata")
    if isinstance(metadata, dict):
        for key in _WORKSPACE_METADATA_KEYS:
            candidate = _truthy_path(metadata.get(key))
            if candidate:
                return candidate
    for key, value in body.items():
        if not str(key).startswith(SHIM_INTERNAL_KEY_PREFIX):
            continue
        suffix = str(key)[len(SHIM_INTERNAL_KEY_PREFIX) :]
        if suffix in _WORKSPACE_METADATA_KEYS:
            candidate = _truthy_path(value)
            if candidate:
                return candidate
    for key in _WORKSPACE_METADATA_KEYS:
        candidate = _truthy_path(body.get(key))
        if candidate:
            return candidate
    return None


def _header_workspace(request: web.Request | None) -> str | None:
    if request is None:
        return None
    for header in (
        "x-codex-cwd",
        "x-codex-workspace",
        "x-workspace",
        "x-project-path",
        "cwd",
        "workspace",
    ):
        candidate = _truthy_path(request.headers.get(header))
        if candidate:
            return candidate
    return None


def _static_workspace(route: ShimModel) -> str | None:
    raw = route.raw or {}
    for key in ("cwd", "workspace", "working_directory", "workingDirectory"):
        candidate = _truthy_path(raw.get(key))
        if candidate:
            return candidate
    return None


def _client_metadata_workspace(body: dict[str, Any]) -> str | None:
    client_metadata = body.get("client_metadata")
    if not isinstance(client_metadata, dict):
        return None
    for key in CLIENT_METADATA_WORKSPACE_KEYS:
        candidate = _truthy_path(client_metadata.get(key))
        if candidate:
            return candidate
    turn_metadata = parse_turn_metadata(client_metadata.get("x-codex-turn-metadata"))
    if turn_metadata is None:
        return None
    for key in _WORKSPACE_METADATA_KEYS:
        candidate = _truthy_path(turn_metadata.get(key))
        if candidate:
            return candidate
    roots = turn_metadata.get("workspace_roots")
    if isinstance(roots, list):
        for root in roots:
            candidate = _truthy_path(root)
            if candidate:
                return candidate
    thread_id = _truthy_path(turn_metadata.get("thread_id")) or _truthy_path(turn_metadata.get("session_id"))
    if thread_id:
        return _desktop_rollout_workspace(thread_id)
    return None


def _codex_home() -> Path:
    return Path(os.environ.get("CODEX_HOME", Path.home() / ".codex")).expanduser()


def _desktop_rollout_workspace(thread_id: str) -> str | None:
    sessions = _codex_home() / "sessions"
    if not sessions.is_dir():
        return None
    try:
        matches = list(sessions.glob(f"**/rollout-*-{thread_id}.jsonl"))
        if not matches:
            return None
        rollout = max(matches, key=lambda path: path.stat().st_mtime)
        first_line = rollout.read_text(encoding="utf-8").splitlines()[0]
        record = json.loads(first_line)
    except (OSError, json.JSONDecodeError, IndexError):
        return None
    if not isinstance(record, dict):
        return None
    payload = record.get("payload")
    if isinstance(payload, dict):
        candidate = _truthy_path(payload.get("cwd"))
        if candidate:
            return candidate
    return None


def resolve_workspace(
    request: web.Request | None,
    body: dict[str, Any],
    route: ShimModel,
) -> Path | None:
    """Resolve Cursor subprocess cwd: request metadata/headers, Desktop thread rollout, static cwd."""
    candidates = (
        _metadata_workspace(body),
        _header_workspace(request),
        _client_metadata_workspace(body),
        _static_workspace(route),
    )
    for candidate in candidates:
        if not candidate:
            continue
        path = Path(candidate).expanduser()
        try:
            if path.is_dir():
                return path.resolve()
        except OSError:
            continue
    return None
