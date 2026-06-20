"""CLI wrappers over the verification probe surface.

Reads of patched constants/helpers and cross-command calls go through the
cli package namespace (cli_ns) at call time so test monkeypatches on
codex_shim.cli attributes keep working.
"""
from __future__ import annotations

import asyncio
import json
import os
import shutil
import sys
from pathlib import Path


def probe_fidelity_route() -> int:
    from ..verification import CompactProbeError, probe_fidelity

    try:
        return probe_fidelity()
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_history_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_history

    try:
        return probe_history(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1


def probe_streaming_history_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_streaming_history

    try:
        return probe_streaming_history(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1


def probe_ws_streaming_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_ws_streaming

    try:
        return probe_ws_streaming(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1


def probe_tools_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_tools

    try:
        return probe_tools(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_delegate_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_delegate

    try:
        return probe_delegate(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1


def probe_cursor_native_route() -> int:
    """Readiness check for the experimental Cursor Agent native transport.

    Reports the gating conditions (env opt-in, auth token presence/expiry,
    cursor-agent binary) WITHOUT making a live network call. Native stays
    opt-in; this confirms whether it is safe to enable as a default route."""
    from ..providers.cursor_agent.auth import cursor_access_token_expired, load_cursor_access_token

    live_env = os.environ.get("CODEX_SHIM_CURSOR_AGENT_LIVE", "").strip().lower() in {"1", "true", "yes", "on"}
    token = load_cursor_access_token()
    cursor_bin = shutil.which("cursor-agent") or os.environ.get("CURSOR_AGENT_BIN", "")

    findings = [
        ("CODEX_SHIM_CURSOR_AGENT_LIVE", "set" if live_env else "unset (native OFF; CLI delegate is the default)"),
    ]
    if not token:
        findings.append(("access token", "MISSING (run `codex login` or set CODEX_SHIM_CURSOR_AUTH_TOKEN)"))
    elif cursor_access_token_expired(token):
        findings.append(("access token", "EXPIRED (run `codex login` to refresh)"))
    else:
        findings.append(("access token", "present"))
    findings.append(("cursor-agent binary", cursor_bin or "NOT FOUND on PATH"))

    print("Cursor Agent native transport readiness:")
    for label, value in findings:
        print(f"  {label}: {value}")
    ready = live_env and bool(token) and not cursor_access_token_expired(token)
    print("  => " + ("READY" if ready else "NOT READY (native stays opt-in; CLI delegate path is unchanged)"))
    return 0


def probe_all_route(settings_path: Path, port: int, slug: str | None, *, live: bool) -> int:
    from ..verification import CompactProbeError, probe_all

    try:
        return probe_all(Path(settings_path).expanduser(), port, slug, live=live)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1


def probe_passthrough_route(port: int, *, live: bool) -> int:
    from ..verification import CompactProbeError, probe_passthrough

    try:
        return probe_passthrough(port, live=live)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_passthrough_compact_route(port: int, *, live: bool) -> int:
    from ..verification import CompactProbeError, probe_passthrough_compact

    try:
        return probe_passthrough_compact(port, live=live)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_live_matrix_route(settings_path: Path, port: int) -> int:
    from ..verification import CompactProbeError, probe_live_matrix

    try:
        return probe_live_matrix(Path(settings_path).expanduser(), port)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_matrix_route(
    settings_path: Path,
    port: int,
    slug: str | None,
    *,
    live: bool,
    as_json: bool,
) -> int:
    from ..verification import CompactProbeError, probe_matrix

    try:
        return probe_matrix(Path(settings_path).expanduser(), port, slug, live=live, as_json=as_json)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def test_provider_route(settings_path: Path, target: str) -> int:
    from ..verification import CompactProbeError, probe_fidelity, resolve_smoke_target, run_provider_smoke

    try:
        probe_fidelity()
    except CompactProbeError as exc:
        print(f"Fidelity check failed: {exc}", file=sys.stderr)
        return 1

    try:
        resolution = resolve_smoke_target(Path(settings_path).expanduser(), target)
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1
    if resolution.error:
        print(resolution.error, file=sys.stderr)
        if resolution.matches:
            for model in resolution.matches:
                state = "visible" if model.visible else f"hidden ({model.unavailable_reason})"
                print(f"  {model.slug}: {state} -> {model.model} ({model.provider})", file=sys.stderr)
        return 1
    route = resolution.route
    if route is None:
        print(f"unknown target: {target}", file=sys.stderr)
        return 1
    state = "visible" if route.visible else f"hidden ({route.unavailable_reason})"
    print(f"{route.slug}: {state} -> {route.model} ({route.provider}, {route.transport})")
    result = asyncio.run(run_provider_smoke(route))
    stream_note = "non-streaming"
    if result.ok:
        print(f"Smoke test passed ({stream_note}): {result.message}")
        return 0
    print(f"Smoke test failed ({result.status}, {stream_note}): {result.message}", file=sys.stderr)
    return 1


def probe_compact_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_compact

    try:
        return probe_compact(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1
