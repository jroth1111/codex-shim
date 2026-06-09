#!/usr/bin/env python3
"""Capture golden cursor-agent upstream vs shim path for api2.cursor.sh parity."""
from __future__ import annotations

import argparse
import asyncio
import json
import os
import shutil
import subprocess
import threading
import sys
import time
from pathlib import Path
from typing import Any, Literal

import aiohttp

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT))

from codex_desktop_control import relaunch_desktop, select_desktop_model, submit_prompt  # noqa: E402

from codex_shim.cli import _with_loopback_no_proxy  # noqa: E402

DEBUG_DIR = ROOT / "codex-desktop-decompiled" / "captures" / "debug"
DEFAULT_GOLDEN = DEBUG_DIR / "cursor_agent_upstream_golden.json"
DEFAULT_SHIM = DEBUG_DIR / "cursor_shim_upstream_candidate.json"
DEFAULT_REPORT = DEBUG_DIR / "cursor_upstream_parity_report.json"
MITM_ADDON = ROOT / "scripts" / "capture_cursor_upstream_mitm.py"
CODEX_CONFIG = Path.home() / ".codex" / "config.toml"
DEFAULT_SETTINGS = Path.home() / ".codex-shim" / "models.json"
SHIM_LOG = ROOT / ".codex-shim" / "shim.log"
DEFAULT_DESKTOP_MODEL_LABEL = "Cursor Agent Auto"
PYTHON = sys.executable


def _default_workspace() -> Path:
    raw = os.environ.get("CODEX_SHIM_WORKSPACE", "").strip()
    if raw:
        return Path(raw).expanduser()
    return ROOT


def _default_cursor_command() -> str:
    for key in ("CURSOR_COMMAND", "CODEX_SHIM_CURSOR_COMMAND"):
        raw = os.environ.get(key, "").strip()
        if raw:
            return raw
    for name in ("cursor-agent", "cursor"):
        found = shutil.which(name)
        if found:
            return found
    return "cursor-agent"
ShimVia = Literal["desktop", "ws"]


def _run(cmd: list[str], *, env: dict[str, str] | None = None, timeout: float = 180.0) -> subprocess.CompletedProcess[str]:
    merged = os.environ.copy()
    if env:
        merged.update(env)
    return subprocess.run(
        cmd,
        cwd=str(ROOT),
        env=merged,
        text=True,
        capture_output=True,
        timeout=timeout,
        check=False,
    )


def _kill_port(port: int) -> None:
    proc = _run(["lsof", "-ti", f":{port}"], timeout=10)
    for pid in proc.stdout.split():
        if pid.strip().isdigit():
            _run(["kill", pid.strip()], timeout=5)


def _backup_config() -> Path:
    backup = DEBUG_DIR / "config.toml.cursor-parity-backup"
    backup.parent.mkdir(parents=True, exist_ok=True)
    if CODEX_CONFIG.exists():
        backup.write_text(CODEX_CONFIG.read_text(encoding="utf-8"), encoding="utf-8")
    else:
        backup.write_text("", encoding="utf-8")
    return backup


def _restore_config(backup: Path) -> None:
    if backup.exists() and backup.read_text(encoding="utf-8"):
        CODEX_CONFIG.write_text(backup.read_text(encoding="utf-8"), encoding="utf-8")
    _run([PYTHON, "-m", "codex_shim.cli", "disable"], env={"PYTHONPATH": str(ROOT)})


def _proxy_env(port: int) -> dict[str, str]:
    proxy = f"http://127.0.0.1:{port}"
    cert = Path.home() / ".mitmproxy" / "mitmproxy-ca-cert.pem"
    env = {
        "HTTP_PROXY": proxy,
        "HTTPS_PROXY": proxy,
        "http_proxy": proxy,
        "https_proxy": proxy,
    }
    if cert.is_file():
        env["SSL_CERT_FILE"] = str(cert)
        env["NODE_EXTRA_CA_CERTS"] = str(cert)
    return env


def _capture_proxy_url(proxy_port: int | None) -> str | None:
    explicit = os.environ.get("CODEX_SHIM_CURSOR_UPSTREAM_CAPTURE_PROXY", "").strip()
    if explicit:
        return explicit
    if proxy_port:
        return f"http://127.0.0.1:{proxy_port}"
    return None


def _shim_subprocess_env(*, proxy_port: int | None = None) -> dict[str, str]:
    env = os.environ.copy()
    env["PYTHONPATH"] = str(ROOT)
    proxy_url = _capture_proxy_url(proxy_port)
    if proxy_url:
        # Only cursor-agent subprocess reads this (see cursor_cli._capture_proxy_env).
        # Never set HTTP_PROXY on the shim daemon or Codex Desktop.
        env["CODEX_SHIM_CURSOR_UPSTREAM_CAPTURE_PROXY"] = proxy_url
    return _with_loopback_no_proxy(env)


def _desktop_spawn_env() -> dict[str, str]:
    """Codex Desktop must not inherit mitm proxy/TLS env (breaks chatgpt.com websockets)."""
    env = os.environ.copy()
    for key in (
        "HTTP_PROXY",
        "HTTPS_PROXY",
        "http_proxy",
        "https_proxy",
        "ALL_PROXY",
        "all_proxy",
        "SSL_CERT_FILE",
        "NODE_EXTRA_CA_CERTS",
        "CODEX_SHIM_CURSOR_UPSTREAM_CAPTURE_PROXY",
    ):
        env.pop(key, None)
    return env


def _wait_mitm_port(port: int, *, timeout_s: float = 8.0) -> None:
    deadline = time.time() + timeout_s
    while time.time() < deadline:
        proc = _run(["lsof", "-ti", f":{port}"], timeout=5)
        if proc.stdout.strip():
            return
        time.sleep(0.25)
    raise RuntimeError(f"mitmproxy did not bind :{port}")


def _start_mitm(port: int, out_path: Path) -> subprocess.Popen[Any]:
    _kill_port(port)
    env = os.environ.copy()
    env["CURSOR_UPSTREAM_CAPTURE_OUT"] = str(out_path)
    env["CURSOR_UPSTREAM_CAPTURE_ALL"] = "1"
    proc = subprocess.Popen(
        [
            "mitmdump",
            "--listen-port",
            str(port),
            "-s",
            str(MITM_ADDON),
            "--set",
            "block_global=false",
        ],
        cwd=str(ROOT),
        env=env,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.PIPE,
        text=True,
    )
    _wait_mitm_port(port)
    return proc


def _stop_mitm(mitm: subprocess.Popen[Any]) -> None:
    mitm.terminate()
    try:
        mitm.wait(timeout=3)
    except subprocess.TimeoutExpired:
        mitm.kill()


def _capture_body_text(payload: dict[str, Any]) -> str:
    preview = str(payload.get("body_text_preview") or "")
    body_hex = str(payload.get("body_hex") or "")
    if body_hex:
        try:
            decoded = bytes.fromhex(body_hex).decode("utf-8", errors="replace")
            return decoded if len(decoded) >= len(preview) else preview
        except ValueError:
            pass
    return preview


def _agent_wire_matches(payload: dict[str, Any], *, prompt_contains: str | None = None) -> bool:
    path = str(payload.get("path") or "")
    if "AgentService" not in path and "BidiService" not in path:
        return False
    if prompt_contains and prompt_contains not in _capture_body_text(payload):
        return False
    return True


def _wait_agent_wire(
    jsonl_path: Path,
    *,
    timeout_s: float = 180.0,
    prompt_contains: str | None = None,
) -> None:
    """Wait until agent wire appears in jsonl capture (optionally matching prompt text)."""
    deadline = time.time() + timeout_s
    while time.time() < deadline:
        if jsonl_path.is_file():
            for line in jsonl_path.read_text(encoding="utf-8").splitlines():
                if not line.strip():
                    continue
                try:
                    payload = json.loads(line)
                except json.JSONDecodeError:
                    continue
                if _agent_wire_matches(payload, prompt_contains=prompt_contains):
                    return
        time.sleep(1)
    detail = f" prompt={prompt_contains!r}" if prompt_contains else ""
    raise RuntimeError(f"agent wire capture missing in {jsonl_path}{detail}")


def _pick_agent_wire_capture(
    jsonl_path: Path,
    out_path: Path,
    *,
    prefer_last: bool = False,
    prompt_contains: str | None = None,
    require_prompt: bool = False,
) -> None:
    if not jsonl_path.is_file():
        raise RuntimeError(f"missing jsonl capture: {jsonl_path}")
    prompt_matches: list[dict[str, Any]] = []
    bidi_fallback: dict[str, Any] | None = None
    run_fallback: dict[str, Any] | None = None
    for line in jsonl_path.read_text(encoding="utf-8").splitlines():
        if not line.strip():
            continue
        payload = json.loads(line)
        path = str(payload.get("path") or "")
        if "BidiAppend" in path:
            if prompt_contains:
                if prompt_contains in _capture_body_text(payload):
                    prompt_matches.append(payload)
            else:
                bidi_fallback = payload
        elif "AgentService/Run" in path:
            if prompt_contains:
                if prompt_contains in _capture_body_text(payload):
                    prompt_matches.append(payload)
            elif prefer_last or run_fallback is None:
                run_fallback = payload
    if prompt_matches:
        chosen = prompt_matches[-1]
    elif require_prompt and prompt_contains:
        raise RuntimeError(f"no agent wire with prompt {prompt_contains!r} in {jsonl_path}")
    else:
        chosen = bidi_fallback or run_fallback
    if chosen is None:
        raise RuntimeError(f"no agent wire request in {jsonl_path}")
    out_path.write_text(json.dumps(chosen, indent=2), encoding="utf-8")


def _cursor_cli_base_cmd(cursor_command: str, workspace: Path) -> list[str]:
    return [
        cursor_command,
        "agent",
        "--print",
        "--trust",
        "--yolo",
        "--model",
        "auto",
        "--output-format",
        "stream-json",
        "--stream-partial-output",
        "--workspace",
        str(workspace),
    ]


def seed_golden_cli_session(
    *,
    prompt: str,
    workspace: Path,
    cursor_command: str,
) -> str:
    cmd = _cursor_cli_base_cmd(cursor_command, workspace)
    cmd.append(prompt)
    proc = _run(cmd, timeout=300.0)
    if proc.returncode != 0:
        raise RuntimeError((proc.stderr or proc.stdout or f"exit {proc.returncode}")[:1500])
    session_id: str | None = None
    for line in (proc.stdout or "").splitlines():
        line = line.strip()
        if not line:
            continue
        try:
            event = json.loads(line)
        except json.JSONDecodeError:
            continue
        sid = str(event.get("session_id") or "").strip()
        if sid:
            session_id = sid
        if event.get("type") == "system" and event.get("subtype") == "init":
            sid = str(event.get("session_id") or "").strip()
            if sid:
                session_id = sid
    if not session_id:
        raise RuntimeError("cursor-agent turn 1 did not emit session_id")
    return session_id


def _clear_shim_session_store() -> None:
    store = ROOT / ".codex-shim" / "cursor_thread_sessions.sqlite"
    for suffix in ("", "-wal", "-shm"):
        path = Path(str(store) + suffix) if suffix else store
        path.unlink(missing_ok=True)


def capture_golden_cli(
    *,
    prompt: str,
    workspace: Path,
    cursor_command: str,
    proxy_port: int,
    out_path: Path,
    resume_session_id: str | None = None,
) -> None:
    out_path.unlink(missing_ok=True)
    jsonl_path = out_path.with_suffix(".jsonl")
    jsonl_path.unlink(missing_ok=True)
    mitm = _start_mitm(proxy_port, out_path)
    try:
        time.sleep(1)
        env = _proxy_env(proxy_port)
        cmd = _cursor_cli_base_cmd(cursor_command, workspace)
        if resume_session_id:
            cmd.extend(["--resume", resume_session_id])
        cmd.append(prompt)
        proc = subprocess.Popen(
            cmd,
            env={**os.environ, **env},
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
        )
        try:
            _wait_agent_wire(jsonl_path, timeout_s=240.0)
        finally:
            if proc.poll() is None:
                proc.terminate()
                try:
                    proc.wait(timeout=5)
                except subprocess.TimeoutExpired:
                    proc.kill()
                    proc.wait(timeout=2)
    finally:
        _safe_pick_agent_wire(jsonl_path, out_path, prefer_last=bool(resume_session_id))
        _stop_mitm(mitm)


def _wait_shim_healthy(shim_port: int, *, timeout_s: float = 30.0) -> None:
    deadline = time.time() + timeout_s
    while time.time() < deadline:
        proc = _run(["curl", "-sf", f"http://127.0.0.1:{shim_port}/health"], timeout=5.0)
        if proc.returncode == 0 and "ok" in proc.stdout:
            return
        time.sleep(0.5)
    raise RuntimeError(f"shim health check failed on :{shim_port}")


def _prepare_shim_cursor_model(
    *,
    settings_path: Path,
    shim_port: int,
    proxy_port: int | None = None,
) -> None:
    env = _shim_subprocess_env(proxy_port=proxy_port)
    _run([PYTHON, "-m", "codex_shim.cli", "stop"], env=env)
    _kill_port(shim_port)
    time.sleep(2)
    proc = _run(
        [
            PYTHON,
            "-m",
            "codex_shim.cli",
            "--settings",
            str(settings_path),
            "--port",
            str(shim_port),
            "model",
            "use",
            "cursor-auto",
        ],
        env=env,
        timeout=120.0,
    )
    if proc.returncode != 0:
        raise RuntimeError((proc.stdout + proc.stderr)[:1500])
    _wait_shim_healthy(shim_port)


def _parse_access_json(line: str) -> dict[str, Any] | None:
    marker = "[access] "
    idx = line.find(marker)
    if idx < 0:
        return None
    try:
        payload = json.loads(line[idx + len(marker) :])
    except json.JSONDecodeError:
        return None
    return payload if isinstance(payload, dict) else None


def _wait_shim_access_model(
    *,
    expected_model: str = "cursor-auto",
    timeout_s: float = 300.0,
    log_offset: int = 0,
    after_monotonic: float | None = None,
    max_input_tokens: int | None = None,
) -> dict[str, Any]:
    """Wait for a shim access row for expected_model (optionally a small post-submit turn)."""
    deadline = time.time() + timeout_s
    seen_offset = log_offset
    while time.time() < deadline:
        if SHIM_LOG.is_file():
            text = SHIM_LOG.read_text(encoding="utf-8", errors="replace")
            new_text = text[seen_offset:]
            seen_offset = len(text)
            for line in new_text.splitlines():
                if "model='" not in line:
                    continue
                if "[access]" not in line:
                    continue
                if f"model='{expected_model}'" not in line and "provider='cursor-agent'" not in line:
                    if after_monotonic is not None and (
                        "model='gpt-" in line or "model='claude-" in line
                    ):
                        raise RuntimeError(f"Desktop routed to non-cursor model: {line[:400]}")
                    continue
                payload = _parse_access_json(line)
                if payload is None:
                    continue
                if after_monotonic is not None and time.monotonic() < after_monotonic:
                    continue
                if max_input_tokens is not None:
                    tokens = payload.get("token_stats") or {}
                    input_tokens = int(tokens.get("input_tokens") or 0)
                    if input_tokens > max_input_tokens:
                        continue
                if payload.get("model") == expected_model or payload.get("provider") == "cursor-agent":
                    return payload
        time.sleep(1)
    detail = ""
    if max_input_tokens is not None:
        detail = f" with input_tokens<={max_input_tokens}"
    raise RuntimeError(f"timeout waiting for shim access log model={expected_model}{detail}")


def _inject_shim_session(thread_id: str, cursor_session_id: str) -> None:
    from codex_shim.cursor_parity import CursorThreadSessionStore

    store = CursorThreadSessionStore()
    store.put(thread_id, cursor_session_id)
    store.close()


def _safe_pick_agent_wire(
    jsonl_path: Path,
    out_path: Path,
    *,
    prefer_last: bool = False,
    prompt_contains: str | None = None,
    require_prompt: bool = False,
) -> None:
    if not jsonl_path.is_file():
        return
    try:
        _pick_agent_wire_capture(
            jsonl_path,
            out_path,
            prefer_last=prefer_last,
            prompt_contains=prompt_contains,
            require_prompt=require_prompt,
        )
    except RuntimeError:
        if require_prompt:
            raise


def _assert_managed_config_model(expected: str = "cursor-auto") -> None:
    if not CODEX_CONFIG.is_file():
        raise RuntimeError(f"missing Codex config: {CODEX_CONFIG}")
    in_managed = False
    model_value: str | None = None
    for line in CODEX_CONFIG.read_text(encoding="utf-8").splitlines():
        stripped = line.strip()
        if stripped == "# >>> codex-shim managed >>>":
            in_managed = True
            continue
        if stripped == "# <<< codex-shim managed <<<":
            in_managed = False
            continue
        if in_managed and stripped.startswith("model = "):
            model_value = stripped.split("=", 1)[1].strip().strip('"')
    if model_value != expected:
        raise RuntimeError(
            f"Codex managed model is {model_value!r}, expected {expected!r}; run model use first"
        )


def _prepare_shim_for_cursor_capture(
    *,
    settings_path: Path,
    shim_port: int,
    proxy_port: int,
) -> None:
    _prepare_shim_cursor_model(
        settings_path=settings_path,
        shim_port=shim_port,
        proxy_port=proxy_port,
    )


def _open_desktop_at_workspace(workspace: Path, *, relaunch: bool) -> None:
    if relaunch:
        relaunch_desktop(wait_s=14.0)
    codex = shutil_which("codex")
    subprocess.Popen(
        [
            codex,
            "app",
            "-c",
            'model="cursor-auto"',
            "-c",
            'model_provider="codex_shim"',
            str(workspace),
        ],
        stdout=subprocess.DEVNULL,
        stderr=subprocess.DEVNULL,
        env=_desktop_spawn_env(),
    )
    time.sleep(20.0)


def shutil_which(name: str) -> str:
    from shutil import which

    path = which(name)
    if not path:
        raise RuntimeError(f"{name} not found on PATH")
    return path


async def _shim_ws_turn(
    *,
    host: str,
    prompt: str,
    thread_id: str,
    timeout: float,
    workspace: Path | None = None,
    previous_response_id: str | None = None,
) -> str | None:
    url = f"http://{host}/v1/responses".replace("http://", "ws://")
    body: dict[str, Any] = {
        "model": "cursor-auto",
        "stream": True,
        "input": [{"role": "user", "content": [{"type": "input_text", "text": prompt}]}],
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps(
                {
                    "session_id": thread_id,
                    "thread_id": thread_id,
                    "thread_source": "user",
                    "workspace_kind": "project",
                    "request_kind": "turn",
                }
            ),
        },
    }
    if workspace is not None:
        body["metadata"] = {"cwd": str(workspace)}
    if previous_response_id:
        body["previous_response_id"] = previous_response_id
    response_id: str | None = None
    async with aiohttp.ClientSession() as session:
        async with session.ws_connect(url, timeout=aiohttp.ClientTimeout(total=timeout)) as ws:
            await ws.send_json(body)
            async for msg in ws:
                if msg.type != aiohttp.WSMsgType.TEXT:
                    continue
                payload = json.loads(msg.data)
                if payload.get("type") == "response.completed":
                    response = payload.get("response")
                    if isinstance(response, dict):
                        response_id = str(response.get("id") or "").strip() or None
                    return response_id
                if payload.get("type") == "error":
                    raise RuntimeError(json.dumps(payload)[:500])
    return response_id


def seed_shim_session(
    *,
    prompt: str,
    thread_id: str,
    shim_host: str,
    workspace: Path,
    settings_path: Path,
    shim_port: int,
) -> str:
    _clear_shim_session_store()
    _prepare_shim_cursor_model(
        settings_path=settings_path,
        shim_port=shim_port,
        proxy_port=None,
    )
    response_id = asyncio.run(
        _shim_ws_turn(
            host=shim_host,
            prompt=prompt,
            thread_id=thread_id,
            timeout=300.0,
            workspace=workspace,
        )
    )
    if not response_id:
        raise RuntimeError("shim turn 1 did not return response id")
    store = ROOT / ".codex-shim" / "cursor_thread_sessions.sqlite"
    if not store.is_file():
        raise RuntimeError(f"session store missing after turn 1: {store}")
    from codex_shim.cursor_parity import CursorThreadSessionStore

    mapped = CursorThreadSessionStore(store).get(thread_id)
    CursorThreadSessionStore(store).close()
    if not mapped:
        raise RuntimeError(f"thread_id {thread_id} not mapped to cursor session after turn 1")
    return response_id


def capture_two_turn_resume_parity(
    *,
    prompt_turn1: str,
    prompt_turn2: str,
    workspace: Path,
    thread_id: str,
    cursor_command: str,
    settings_path: Path,
    shim_host: str,
    shim_port: int,
    proxy_port_golden: int,
    proxy_port_shim: int,
    golden_path: Path,
    shim_path: Path,
    shared_session: bool = False,
) -> dict[str, Any]:
    print("Seeding golden cursor-agent session (turn 1, no mitm)...", flush=True)
    golden_session = seed_golden_cli_session(
        prompt=prompt_turn1,
        workspace=workspace,
        cursor_command=cursor_command,
    )
    print(f"Golden session_id={golden_session}", flush=True)

    print("Capturing golden turn-2 upstream...", flush=True)
    capture_golden_cli(
        prompt=prompt_turn2,
        workspace=workspace,
        cursor_command=cursor_command,
        proxy_port=proxy_port_golden,
        out_path=golden_path,
        resume_session_id=golden_session,
    )

    previous_response_id: str | None = None
    shim_session_id: str | None = None
    if shared_session:
        print(f"Injecting golden session into shim store for {thread_id}...", flush=True)
        _clear_shim_session_store()
        _inject_shim_session(thread_id, golden_session)
        shim_session_id = golden_session
    else:
        print("Seeding shim session (turn 1, no mitm)...", flush=True)
        previous_response_id = seed_shim_session(
            prompt=prompt_turn1,
            thread_id=thread_id,
            shim_host=shim_host,
            workspace=workspace,
            settings_path=settings_path,
            shim_port=shim_port,
        )
        shim_session_id = _mapped_shim_session(thread_id)
        print(f"Shim previous_response_id={previous_response_id} mapped_session={shim_session_id}", flush=True)

    _run([PYTHON, "-m", "codex_shim.cli", "stop"], env={"PYTHONPATH": str(ROOT)})
    _kill_port(shim_port)
    time.sleep(2)

    shim_path.unlink(missing_ok=True)
    jsonl_path = shim_path.with_suffix(".jsonl")
    jsonl_path.unlink(missing_ok=True)
    _prepare_shim_for_cursor_capture(
        settings_path=settings_path,
        shim_port=shim_port,
        proxy_port=proxy_port_shim,
    )
    mitm = _start_mitm(proxy_port_shim, shim_path)
    try:
        time.sleep(1)
        ws_error: list[BaseException] = []

        def _run_ws_turn2() -> None:
            try:
                asyncio.run(
                    _shim_ws_turn(
                        host=shim_host,
                        prompt=prompt_turn2,
                        thread_id=thread_id,
                        timeout=300.0,
                        workspace=workspace,
                        previous_response_id=None if shared_session else previous_response_id,
                    )
                )
            except BaseException as exc:
                ws_error.append(exc)

        ws_thread = threading.Thread(target=_run_ws_turn2, daemon=True)
        ws_thread.start()
        _wait_agent_wire(jsonl_path, timeout_s=300.0)
        ws_thread.join(timeout=5.0)
        if ws_error and not jsonl_path.is_file():
            raise ws_error[0]
    finally:
        _safe_pick_agent_wire(jsonl_path, shim_path, prefer_last=True)
        _stop_mitm(mitm)

    diff_cmd = [
        PYTHON,
        str(ROOT / "scripts" / "diff_cursor_upstream_capture.py"),
        str(golden_path),
        str(shim_path),
        "--json",
        "--decode-proto",
        "--resume-proof",
        "--golden-session-id",
        golden_session,
    ]
    if shim_session_id:
        diff_cmd.extend(["--shim-session-id", shim_session_id])
    if shared_session:
        diff_cmd.append("--shared-session")
    diff = _run(diff_cmd)
    if diff.returncode not in {0, 1}:
        raise RuntimeError((diff.stdout + diff.stderr)[:1500])
    report = json.loads(diff.stdout or "{}")
    report["resume_proof"] = {
        "golden_session_id": golden_session,
        "shim_session_id": shim_session_id,
        "shared_session": shared_session,
        "used_previous_response_id": not shared_session,
    }
    return report


def _mapped_shim_session(thread_id: str) -> str | None:
    from codex_shim.cursor_parity import CursorThreadSessionStore

    store = CursorThreadSessionStore()
    mapped = store.get(thread_id)
    store.close()
    return mapped


def capture_shim_path(
    *,
    prompt: str,
    thread_id: str,
    shim_host: str,
    proxy_port: int,
    out_path: Path,
    via: ShimVia = "ws",
    workspace: Path | None = None,
    settings_path: Path = DEFAULT_SETTINGS,
    shim_port: int = 8765,
    relaunch_desktop_app: bool = False,
    desktop_model_label: str = DEFAULT_DESKTOP_MODEL_LABEL,
    desktop_manual: bool = False,
) -> None:
    out_path.unlink(missing_ok=True)
    jsonl_path = out_path.with_suffix(".jsonl")
    jsonl_path.unlink(missing_ok=True)
    _prepare_shim_for_cursor_capture(
        settings_path=settings_path,
        shim_port=shim_port,
        proxy_port=proxy_port,
    )
    log_offset = SHIM_LOG.stat().st_size if SHIM_LOG.is_file() else 0
    mitm = _start_mitm(proxy_port, out_path)
    try:
        time.sleep(1)
        if via == "desktop":
            if workspace is None:
                raise ValueError("workspace is required for --via desktop")
            _assert_managed_config_model("cursor-auto")
            _open_desktop_at_workspace(workspace, relaunch=relaunch_desktop_app)
            submit_started = time.monotonic()
            if desktop_manual:
                print(
                    f"Manual Desktop capture: submit this prompt in Codex Desktop with cursor-auto:\n  {prompt}\n",
                    flush=True,
                )
            else:
                for label in dict.fromkeys((desktop_model_label, "cursor-auto", "Cursor Agent")):
                    try:
                        select_desktop_model(label, new_thread=True)
                        break
                    except RuntimeError:
                        continue
                else:
                    raise RuntimeError(f"Desktop model picker failed for labels: {desktop_model_label!r}")
                time.sleep(3.0)
                submit_started = time.monotonic()
                submit_prompt(
                    prompt,
                    new_thread=False,
                    settle_s=2.0,
                    model_label=None,
                    use_paste=True,
                )
            if not desktop_manual:
                _wait_shim_access_model(
                    log_offset=log_offset,
                    timeout_s=420.0,
                    after_monotonic=submit_started,
                    max_input_tokens=500,
                )
            prompt_markers = [prompt]
            if "Reply with exactly:" in prompt:
                prompt_markers.append(prompt.split("Reply with exactly:", 1)[1].strip())
            wire_deadline = time.time() + 420.0
            wire_error: RuntimeError | None = None
            while time.time() < wire_deadline:
                for marker in prompt_markers:
                    try:
                        _wait_agent_wire(
                            jsonl_path,
                            timeout_s=2.0,
                            prompt_contains=marker,
                        )
                        wire_error = None
                        break
                    except RuntimeError as exc:
                        wire_error = exc
                else:
                    time.sleep(1)
                    continue
                break
            if wire_error is not None:
                raise wire_error
        else:
            ws_error: list[BaseException] = []

            def _run_ws_turn() -> None:
                try:
                    asyncio.run(
                        _shim_ws_turn(
                            host=shim_host,
                            prompt=prompt,
                            thread_id=thread_id,
                            timeout=240.0,
                        )
                    )
                except BaseException as exc:
                    ws_error.append(exc)

            ws_thread = threading.Thread(target=_run_ws_turn, daemon=True)
            ws_thread.start()
            _wait_agent_wire(jsonl_path, timeout_s=240.0)
            ws_thread.join(timeout=5.0)
            if ws_error and not jsonl_path.is_file():
                raise ws_error[0]
    finally:
        if via == "desktop":
            desktop_markers = [prompt]
            if "Reply with exactly:" in prompt:
                desktop_markers.append(prompt.split("Reply with exactly:", 1)[1].strip())
            picked = False
            for marker in desktop_markers:
                try:
                    _pick_agent_wire_capture(
                        jsonl_path,
                        out_path,
                        prefer_last=True,
                        prompt_contains=marker,
                        require_prompt=True,
                    )
                    picked = True
                    break
                except RuntimeError:
                    continue
            if not picked:
                raise RuntimeError(f"no agent wire matching desktop prompt markers: {desktop_markers!r}")
        else:
            _safe_pick_agent_wire(jsonl_path, out_path, prefer_last=True)
        _stop_mitm(mitm)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--prompt", default="Reply with exactly: CURSOR_UPSTREAM_OK")
    parser.add_argument(
        "--workspace",
        type=Path,
        default=None,
        help="Workspace root (default: $CODEX_SHIM_WORKSPACE or repo root).",
    )
    parser.add_argument("--thread-id", default="019ea0f5-parity-thread-001")
    parser.add_argument(
        "--cursor-command",
        default=None,
        help="cursor-agent binary (default: $CURSOR_COMMAND or PATH lookup).",
    )
    parser.add_argument("--settings", type=Path, default=DEFAULT_SETTINGS)
    parser.add_argument("--shim-host", default="127.0.0.1:8765")
    parser.add_argument("--shim-port", type=int, default=8765)
    parser.add_argument("--proxy-port-golden", type=int, default=8080)
    parser.add_argument("--proxy-port-shim", type=int, default=8081)
    parser.add_argument("--golden-path", type=Path, default=DEFAULT_GOLDEN)
    parser.add_argument("--shim-path", type=Path, default=DEFAULT_SHIM)
    parser.add_argument("--report-path", type=Path, default=DEFAULT_REPORT)
    parser.add_argument(
        "--via",
        choices=["desktop", "ws"],
        default="ws",
        help="Shim capture transport (default: ws). Use desktop for full Desktop UI chain.",
    )
    parser.add_argument(
        "--desktop-model",
        default=DEFAULT_DESKTOP_MODEL_LABEL,
        help="Codex Desktop model picker label for --via desktop.",
    )
    parser.add_argument(
        "--relaunch-desktop",
        action="store_true",
        help="Relaunch Codex Desktop after installing shim config (--via desktop only).",
    )
    parser.add_argument(
        "--desktop-manual",
        action="store_true",
        help="Open Desktop and wait for you to submit the prompt manually (--via desktop).",
    )
    parser.add_argument("--skip-golden", action="store_true", help="Reuse existing golden capture file.")
    parser.add_argument("--golden-only", action="store_true")
    parser.add_argument("--shim-only", action="store_true")
    parser.add_argument("--diff-only", action="store_true")
    parser.add_argument(
        "--two-turn",
        action="store_true",
        help="Turn-1 seed + turn-2 resume upstream capture (WS shim path only).",
    )
    parser.add_argument(
        "--shared-session",
        action="store_true",
        help="Inject golden turn-1 session into shim store; turn-2 without previous_response_id.",
    )
    parser.add_argument("--prompt-turn1", default="Reply with exactly: CURSOR_TURN_ONE")
    parser.add_argument("--prompt-turn2", default="Reply with exactly: CURSOR_TURN_TWO")
    parser.add_argument(
        "--report-path-turn2",
        type=Path,
        default=DEBUG_DIR / "cursor_upstream_resume_parity_report.json",
    )
    args = parser.parse_args()
    if args.workspace is None:
        args.workspace = _default_workspace()
    if args.cursor_command is None:
        args.cursor_command = _default_cursor_command()
    if args.two_turn and args.via == "desktop":
        parser.error("--two-turn uses the WS shim client only; omit --via desktop or use --via ws")
    DEBUG_DIR.mkdir(parents=True, exist_ok=True)

    backup = _backup_config()
    exit_code = 0
    try:
        if args.two_turn and not args.diff_only:
            report = capture_two_turn_resume_parity(
                prompt_turn1=args.prompt_turn1,
                prompt_turn2=args.prompt_turn2,
                workspace=args.workspace,
                thread_id=args.thread_id,
                cursor_command=args.cursor_command,
                settings_path=args.settings,
                shim_host=args.shim_host,
                shim_port=args.shim_port,
                proxy_port_golden=args.proxy_port_golden,
                proxy_port_shim=args.proxy_port_shim,
                golden_path=args.golden_path,
                shim_path=args.shim_path,
                shared_session=args.shared_session,
            )
            args.report_path_turn2.write_text(json.dumps(report, indent=2), encoding="utf-8")
            print(json.dumps(report, indent=2))
            exit_code = 0 if report.get("ok") else 1
        elif not args.diff_only:
            if not args.shim_only and not (args.skip_golden and args.golden_path.is_file()):
                print("Capturing golden cursor-agent upstream...", flush=True)
                capture_golden_cli(
                    prompt=args.prompt,
                    workspace=args.workspace,
                    cursor_command=args.cursor_command,
                    proxy_port=args.proxy_port_golden,
                    out_path=args.golden_path,
                )
                print(f"Wrote {args.golden_path}", flush=True)
            elif args.skip_golden and args.golden_path.is_file():
                print(f"Reusing golden capture {args.golden_path}", flush=True)
            if not args.golden_only:
                print(f"Capturing shim path upstream via {args.via}...", flush=True)
                capture_shim_path(
                    prompt=args.prompt,
                    thread_id=args.thread_id,
                    shim_host=args.shim_host,
                    proxy_port=args.proxy_port_shim,
                    out_path=args.shim_path,
                    via=args.via,
                    workspace=args.workspace,
                    settings_path=args.settings,
                    shim_port=args.shim_port,
                    relaunch_desktop_app=args.relaunch_desktop,
                    desktop_model_label=args.desktop_model,
                    desktop_manual=args.desktop_manual,
                )
                print(f"Wrote {args.shim_path}", flush=True)

        if args.golden_only or args.two_turn:
            return exit_code

        if args.shim_only and not args.golden_path.is_file():
            print("shim-only capture complete (no diff without golden file)")
            return 0

        diff = _run(
            [
                PYTHON,
                str(ROOT / "scripts" / "diff_cursor_upstream_capture.py"),
                str(args.golden_path),
                str(args.shim_path),
                "--json",
                "--decode-proto",
            ]
        )
        if diff.returncode not in {0, 1}:
            raise RuntimeError((diff.stdout + diff.stderr)[:1500])
        report = json.loads(diff.stdout or "{}")
        args.report_path.write_text(json.dumps(report, indent=2), encoding="utf-8")
        print(json.dumps(report, indent=2))
        exit_code = 0 if report.get("ok") else 1
    finally:
        if not args.diff_only:
            _restore_config(backup)
    return exit_code


if __name__ == "__main__":
    raise SystemExit(main())
