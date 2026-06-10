from __future__ import annotations

import asyncio
import json
import os
import shlex
from collections.abc import Awaitable, Callable
from dataclasses import dataclass, field
from pathlib import Path
from typing import Any

from aiohttp import web

from ...settings import ShimModel, with_loopback_no_proxy
from .acp import (
    DEFAULT_CURSOR_TIMEOUT,
    CursorAcpResult,
    _normalize_usage,
    cursor_prompt_for_body,
)
from .parity import CursorCliTurnOptions, build_cursor_cli_turn_options, sanitize_cursor_upstream_body

_CAPTURE_PROXY_ENV = "CODEX_SHIM_CURSOR_UPSTREAM_CAPTURE_PROXY"


TextCallback = Callable[[str], Awaitable[None]]
EventCallback = Callable[[dict[str, Any]], Awaitable[None]]


class CursorCliError(RuntimeError):
    """Raised when the headless Cursor Agent CLI cannot complete a turn."""


def _capture_proxy_env() -> dict[str, str]:
    proxy = os.environ.get(_CAPTURE_PROXY_ENV, "").strip()
    if not proxy:
        return {}
    cert = Path.home() / ".mitmproxy" / "mitmproxy-ca-cert.pem"
    merged: dict[str, str] = {
        "HTTP_PROXY": proxy,
        "HTTPS_PROXY": proxy,
        "http_proxy": proxy,
        "https_proxy": proxy,
    }
    if cert.is_file():
        merged["SSL_CERT_FILE"] = str(cert)
        merged["NODE_EXTRA_CA_CERTS"] = str(cert)
    with_loopback_no_proxy(merged)
    return merged


def _base_subprocess_env(overrides: dict[str, str]) -> dict[str, str]:
    env = os.environ.copy()
    env.update(_capture_proxy_env())
    env.update(overrides)
    # Some wrapper installs run with `set -u` and assume HOME is always present.
    env.setdefault("HOME", str(Path.home()))
    return env


@dataclass(frozen=True)
class CursorCliConfig:
    command: str = "cursor"
    args: list[str] = field(default_factory=lambda: ["agent", "--print", "--trust", "--yolo", "--model", "auto"])
    cwd: str | None = None
    env: dict[str, str] = field(default_factory=dict)
    timeout: float = 600.0
    workspace_path: str | None = None
    resume_chat_id: str | None = None
    cli_mode: str | None = None


KeepaliveCallback = Callable[[], Awaitable[None]]


async def run_cursor_cli(
    route: ShimModel,
    body: dict[str, Any],
    *,
    on_text: TextCallback | None = None,
    on_event: EventCallback | None = None,
    on_keepalive: KeepaliveCallback | None = None,
    chained_from_previous: bool = False,
    workspace: Path | None = None,
    request: web.Request | None = None,
    turn_options: CursorCliTurnOptions | None = None,
    inference_cli_mode: str | None = None,
) -> CursorAcpResult:
    body = sanitize_cursor_upstream_body(body)
    options = turn_options or build_cursor_cli_turn_options(
        route,
        body,
        request=request,
        chained_from_previous=chained_from_previous,
        workspace=workspace,
        inference_cli_mode=inference_cli_mode,
    )
    config = cursor_cli_config(route, workspace=workspace, turn_options=options)
    prompt = cursor_prompt_for_body(
        body,
        route,
        chained_from_previous=chained_from_previous,
        workspace=workspace,
        upstream_parity=options.upstream_parity,
        resume_chat_id=options.resume_chat_id,
    )
    if on_text is not None:
        return await _run_stream_json(config, prompt, on_text, on_event=on_event, on_keepalive=on_keepalive)
    return await _run_json(config, prompt)


def cursor_cli_config(
    route: ShimModel,
    *,
    workspace: Path | None = None,
    turn_options: CursorCliTurnOptions | None = None,
) -> CursorCliConfig:
    raw = route.raw or {}
    command = str(_field(raw, "command", "cursor_command", "cursorCommand", default="cursor") or "cursor")
    static_cwd = _optional_str(_field(raw, "cwd", "workspace", "working_directory", "workingDirectory"))
    resolved_cwd = str(workspace) if workspace is not None else static_cwd
    env = {
        str(k): str(v)
        for k, v in (_field(raw, "env", "environment", default={}) or {}).items()
        if v is not None
    }
    workspace_path = None
    resume_chat_id = None
    cli_mode = None
    if turn_options is not None:
        workspace_path = turn_options.workspace_path
        resume_chat_id = turn_options.resume_chat_id
        cli_mode = turn_options.cli_mode
    elif workspace is not None:
        workspace_path = str(workspace)
    return CursorCliConfig(
        command=command,
        args=_args_with_cli_flags(
            _args(raw),
            workspace_path=workspace_path,
            resume_chat_id=resume_chat_id,
            cli_mode=cli_mode,
        ),
        cwd=str(Path(resolved_cwd).expanduser()) if resolved_cwd else None,
        env=env,
        timeout=_float_field(
            raw,
            "timeout_seconds",
            "timeoutSeconds",
            "prompt_timeout",
            "promptTimeout",
            default=DEFAULT_CURSOR_TIMEOUT,
        ),
        workspace_path=workspace_path,
        resume_chat_id=resume_chat_id,
        cli_mode=cli_mode,
    )


async def _run_json(config: CursorCliConfig, prompt: str) -> CursorAcpResult:
    args = _with_output_format(config.args, "json")
    stdout, stderr = await _run(config, prompt, args=args)
    result = _parse_result(stdout)
    if result is not None:
        return result
    text = stdout.strip()
    if not text and stderr.strip():
        text = stderr.strip()
    return CursorAcpResult(text=text)


async def _terminate_subprocess(proc: asyncio.subprocess.Process, *, grace_seconds: float = 2.0) -> None:
    if proc.returncode is not None:
        return
    try:
        proc.terminate()
    except ProcessLookupError:
        return
    try:
        await asyncio.wait_for(proc.wait(), timeout=grace_seconds)
    except asyncio.TimeoutError:
        try:
            proc.kill()
        except ProcessLookupError:
            return
        await proc.wait()


async def _finish_stderr_task(stderr_task: asyncio.Task[bytes] | None) -> None:
    if stderr_task is None:
        return
    if not stderr_task.done():
        stderr_task.cancel()
    try:
        await stderr_task
    except asyncio.CancelledError:
        pass


async def _run_stream_json(
    config: CursorCliConfig,
    prompt: str,
    on_text: TextCallback,
    *,
    on_event: EventCallback | None = None,
    on_keepalive: KeepaliveCallback | None = None,
) -> CursorAcpResult:
    args = _with_output_format(config.args, "stream-json", stream_partial=True)
    env = _base_subprocess_env(config.env)
    try:
        proc = await asyncio.create_subprocess_exec(
            config.command,
            *args,
            prompt,
            stdout=asyncio.subprocess.PIPE,
            stderr=asyncio.subprocess.PIPE,
            cwd=config.cwd,
            env=env,
        )
    except OSError as exc:
        raise CursorCliError(f"Failed to start Cursor Agent command {command_display(config, args)}: {exc}") from exc

    events: list[dict[str, Any]] = []
    deltas: list[str] = []
    stderr_task = asyncio.create_task(proc.stderr.read()) if proc.stderr is not None else None
    try:
        try:
            session_id = await asyncio.wait_for(
                _consume_stream(
                    proc,
                    events,
                    deltas,
                    on_text,
                    on_event=on_event,
                    on_keepalive=on_keepalive,
                ),
                timeout=config.timeout,
            )
        except asyncio.TimeoutError as exc:
            raise CursorCliError(
                f"Timed out waiting for Cursor Agent command {command_display(config, args)} "
                f"after {int(config.timeout)}s"
            ) from exc

        stderr_raw = b""
        if stderr_task is not None:
            stderr_raw = await stderr_task
        stderr = stderr_raw.decode("utf-8", errors="replace") if stderr_raw else ""
        if proc.returncode not in (None, 0):
            excerpt = stderr.strip()[:2000]
            suffix = f": {excerpt}" if excerpt else ""
            raise CursorCliError(f"Cursor Agent command exited {proc.returncode}{suffix}")

        result = _result_from_events(events, session_id=session_id)
        if result is not None:
            return result
        return CursorAcpResult(
            text="".join(deltas),
            raw_result={"events": events},
            session_id=session_id,
        )
    finally:
        await _terminate_subprocess(proc)
        await _finish_stderr_task(stderr_task)


async def _consume_stream(
    proc: asyncio.subprocess.Process,
    events: list[dict[str, Any]],
    deltas: list[str],
    on_text: TextCallback,
    *,
    on_event: EventCallback | None = None,
    on_keepalive: KeepaliveCallback | None = None,
    read_timeout: float = 15.0,
) -> str | None:
    if proc.stdout is None:
        raise CursorCliError("Cursor Agent subprocess stdout is unavailable")
    session_id: str | None = None
    pending = b""
    while True:
        try:
            chunk = await asyncio.wait_for(proc.stdout.read(262144), timeout=read_timeout)
        except asyncio.TimeoutError:
            if on_keepalive is not None:
                await on_keepalive()
            if proc.returncode is not None:
                break
            continue
        if not chunk:
            break
        pending += chunk
        while b"\n" in pending:
            line, pending = pending.split(b"\n", 1)
            if not line.strip():
                continue
            event = _json_event(line + b"\n")
            if event is None:
                if on_event is not None:
                    await on_event({"type": "shim_diagnostic", "subtype": "malformed_jsonl_line"})
                continue
            events.append(event)
            if event.get("type") == "system" and event.get("subtype") == "init":
                sid = str(event.get("session_id") or "").strip()
                if sid:
                    session_id = sid
            if on_event is not None:
                await on_event(event)
            await _emit_assistant_text(event, deltas, on_text)
    if pending.strip():
        event = _json_event(pending)
        if event is not None:
            events.append(event)
            if event.get("type") == "system" and event.get("subtype") == "init":
                sid = str(event.get("session_id") or "").strip()
                if sid:
                    session_id = sid
            if on_event is not None:
                await on_event(event)
            await _emit_assistant_text(event, deltas, on_text)
        elif on_event is not None:
            await on_event({"type": "shim_diagnostic", "subtype": "malformed_jsonl_trailer"})
    await proc.wait()
    return session_id


async def _emit_assistant_text(
    event: dict[str, Any],
    deltas: list[str],
    on_text: TextCallback,
) -> None:
    if event.get("type") != "assistant":
        return
    text = _assistant_event_text(event)
    if not text:
        return
    assembled = "".join(deltas)
    if "timestamp_ms" not in event and assembled:
        return
    delta = _cursor_assistant_delta(assembled, text)
    if event.get("model_call_id") and delta and _snapshot_text_already_present(assembled, text):
        delta = ""
    if not delta:
        return
    deltas.append(delta)
    await on_text(delta)


def _snapshot_text_already_present(assembled: str, snapshot: str) -> bool:
    """True when a model_call_id snapshot replays text partials already emitted."""
    snap = snapshot.strip()
    if not snap:
        return True
    asm = assembled.rstrip()
    if asm.endswith(snap):
        return True
    snap_lines = [line for line in snapshot.splitlines() if line.strip()]
    if not snap_lines:
        return True
    asm_lines = assembled.splitlines()
    return all(any(line == existing for existing in asm_lines) for line in snap_lines)


def _cursor_assistant_delta(assembled: str, incoming: str) -> str:
    if not incoming:
        return ""
    if incoming == assembled:
        return ""
    if assembled and incoming.startswith(assembled):
        return incoming[len(assembled) :]
    return incoming


def _dedupe_consecutive_lines(text: str) -> str:
    lines = text.split("\n")
    deduped: list[str] = []
    for line in lines:
        if deduped and line == deduped[-1]:
            continue
        deduped.append(line)
    return "\n".join(deduped)


async def _run(config: CursorCliConfig, prompt: str, *, args: list[str] | None = None) -> tuple[str, str]:
    argv = args or config.args
    env = _base_subprocess_env(config.env)
    try:
        proc = await asyncio.create_subprocess_exec(
            config.command,
            *argv,
            prompt,
            stdout=asyncio.subprocess.PIPE,
            stderr=asyncio.subprocess.PIPE,
            cwd=config.cwd,
            env=env,
        )
    except OSError as exc:
        raise CursorCliError(f"Failed to start Cursor Agent command {command_display(config, argv)}: {exc}") from exc

    try:
        try:
            stdout_raw, stderr_raw = await asyncio.wait_for(proc.communicate(), timeout=config.timeout)
        except asyncio.TimeoutError as exc:
            raise CursorCliError(
                f"Timed out waiting for Cursor Agent command {command_display(config, argv)} "
                f"after {int(config.timeout)}s"
            ) from exc

        stdout = stdout_raw.decode("utf-8", errors="replace") if stdout_raw else ""
        stderr = stderr_raw.decode("utf-8", errors="replace") if stderr_raw else ""
        if proc.returncode not in (None, 0):
            excerpt = (stderr or stdout).strip()[:2000]
            suffix = f": {excerpt}" if excerpt else ""
            raise CursorCliError(f"Cursor Agent command exited {proc.returncode}{suffix}")
        return stdout, stderr
    finally:
        await _terminate_subprocess(proc)


def command_display(config: CursorCliConfig, args: list[str] | None = None) -> str:
    return " ".join(shlex.quote(part) for part in [config.command, *(args or config.args), "<prompt>"])


def _with_output_format(args: list[str], output_format: str, *, stream_partial: bool = False) -> list[str]:
    result: list[str] = []
    skip_next = False
    for index, item in enumerate(args):
        if skip_next:
            skip_next = False
            continue
        if item == "--output-format":
            # Replace any user-provided output format with the shim-required mode
            # so non-stream and stream paths always parse deterministically.
            if index + 1 < len(args):
                skip_next = True
            continue
        if item.startswith("--output-format="):
            continue
        result.append(item)
    result.extend(["--output-format", output_format])
    if stream_partial and "--stream-partial-output" not in result:
        result.append("--stream-partial-output")
    return result


def _parse_result(stdout: str) -> CursorAcpResult | None:
    events: list[dict[str, Any]] = []
    for line in stdout.splitlines():
        event = _json_event(line.encode())
        if event is not None:
            events.append(event)
    return _result_from_events(events, session_id=_session_id_from_events(events))


def _session_id_from_events(events: list[dict[str, Any]]) -> str | None:
    for event in events:
        if event.get("type") == "system" and event.get("subtype") == "init":
            sid = str(event.get("session_id") or "").strip()
            if sid:
                return sid
    return None


def _result_from_events(events: list[dict[str, Any]], *, session_id: str | None = None) -> CursorAcpResult | None:
    sid = session_id or _session_id_from_events(events)
    for event in reversed(events):
        if event.get("type") == "result":
            text = str(event.get("result") or "")
            usage = _normalize_usage(event.get("usage"))
            return CursorAcpResult(text=text, usage=usage, raw_result=event, session_id=sid)
    return None


def _args_with_cli_flags(
    args: list[str],
    *,
    workspace_path: str | None,
    resume_chat_id: str | None,
    cli_mode: str | None,
) -> list[str]:
    result = list(args)

    def _drop_flag(name: str) -> None:
        nonlocal result
        cleaned: list[str] = []
        skip = False
        for item in result:
            if skip:
                skip = False
                continue
            if item == name:
                skip = True
                continue
            if item.startswith(f"{name}="):
                continue
            cleaned.append(item)
        result = cleaned

    for flag in ("--workspace", "--resume", "--mode", "--continue"):
        _drop_flag(flag)
    if workspace_path:
        result.extend(["--workspace", workspace_path])
    if resume_chat_id:
        result.extend(["--resume", resume_chat_id])
    if cli_mode in {"plan", "ask"}:
        result.extend(["--mode", cli_mode])
    return result


def _json_event(line: bytes) -> dict[str, Any] | None:
    text = line.decode("utf-8", errors="replace").strip()
    if not text:
        return None
    try:
        event = json.loads(text)
    except json.JSONDecodeError:
        return None
    return event if isinstance(event, dict) else None


def _assistant_event_text(event: dict[str, Any]) -> str:
    message = event.get("message")
    if not isinstance(message, dict):
        return ""
    content = message.get("content")
    if not isinstance(content, list):
        return ""
    parts: list[str] = []
    for item in content:
        if isinstance(item, dict) and item.get("type") == "text":
            text = str(item.get("text") or "")
            if parts and text == parts[-1]:
                continue
            parts.append(text)
    return _dedupe_consecutive_lines("".join(parts))


def _args(raw: dict[str, Any]) -> list[str]:
    model = str(_field(raw, "cursor_model", "cursorModel", "agent_model", "agentModel", default="auto") or "auto")
    default = ["agent", "--print", "--trust", "--yolo", "--model", model]
    value = _field(raw, "args", "cursor_args", "cursorArgs", "agent_args", "agentArgs", default=None)
    if value is None:
        return default
    if isinstance(value, str):
        parsed = shlex.split(value)
        return parsed or default
    if isinstance(value, list):
        return [str(item) for item in value]
    return default


def _field(row: dict[str, Any], *keys: str, default: Any = None) -> Any:
    for key in keys:
        if key in row:
            return row[key]
    return default


def _optional_str(value: Any) -> str | None:
    if value in (None, ""):
        return None
    return str(value)


def _float_field(row: dict[str, Any], *keys: str, default: float) -> float:
    value = _field(row, *keys, default=default)
    try:
        return float(value)
    except (TypeError, ValueError):
        return default
