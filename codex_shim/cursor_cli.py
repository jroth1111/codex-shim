from __future__ import annotations

import asyncio
from collections.abc import Awaitable, Callable
from dataclasses import dataclass, field
import json
import os
from pathlib import Path
import shlex
from typing import Any

from .cursor_acp import CursorAcpResult, _normalize_usage, responses_to_acp_prompt
from .settings import ShimModel


TextCallback = Callable[[str], Awaitable[None]]


class CursorCliError(RuntimeError):
    """Raised when the headless Cursor Agent CLI cannot complete a turn."""


@dataclass(frozen=True)
class CursorCliConfig:
    command: str = "cursor"
    args: list[str] = field(default_factory=lambda: ["agent", "--print", "--trust", "--yolo", "--model", "auto"])
    cwd: str | None = None
    env: dict[str, str] = field(default_factory=dict)
    timeout: float = 600.0


async def run_cursor_cli(
    route: ShimModel,
    body: dict[str, Any],
    *,
    on_text: TextCallback | None = None,
    chained_from_previous: bool = False,
) -> CursorAcpResult:
    config = cursor_cli_config(route)
    prompt = responses_to_acp_prompt(
        body,
        route.model,
        provider=route.provider,
        thinking_behavior=route.thinking_behavior,
        chained_from_previous=chained_from_previous,
    )
    if on_text is not None:
        return await _run_stream_json(config, prompt, on_text)
    return await _run_json(config, prompt)


def cursor_cli_config(route: ShimModel) -> CursorCliConfig:
    raw = route.raw or {}
    command = str(_field(raw, "command", "cursor_command", "cursorCommand", default="cursor") or "cursor")
    args = _args(raw)
    cwd = _optional_str(_field(raw, "cwd", "workspace", "working_directory", "workingDirectory"))
    env = {
        str(k): str(v)
        for k, v in (_field(raw, "env", "environment", default={}) or {}).items()
        if v is not None
    }
    return CursorCliConfig(
        command=command,
        args=args,
        cwd=str(Path(cwd).expanduser()) if cwd else None,
        env=env,
        timeout=_float_field(raw, "timeout_seconds", "timeoutSeconds", "prompt_timeout", "promptTimeout", default=600.0),
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


async def _run_stream_json(config: CursorCliConfig, prompt: str, on_text: TextCallback) -> CursorAcpResult:
    args = _with_output_format(config.args, "stream-json", stream_partial=True)
    env = os.environ.copy()
    env.update(config.env)
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
            await asyncio.wait_for(_consume_stream(proc, events, deltas, on_text), timeout=config.timeout)
        except asyncio.TimeoutError as exc:
            raise CursorCliError(
                f"Timed out waiting for Cursor Agent command {command_display(config, args)}"
            ) from exc

        stderr_raw = b""
        if stderr_task is not None:
            stderr_raw = await stderr_task
        stderr = stderr_raw.decode("utf-8", errors="replace") if stderr_raw else ""
        if proc.returncode not in (None, 0):
            excerpt = stderr.strip()[:2000]
            suffix = f": {excerpt}" if excerpt else ""
            raise CursorCliError(f"Cursor Agent command exited {proc.returncode}{suffix}")

        result = _result_from_events(events)
        if result is not None:
            return result
        return CursorAcpResult(text="".join(deltas), raw_result={"events": events})
    finally:
        await _terminate_subprocess(proc)
        await _finish_stderr_task(stderr_task)


async def _consume_stream(
    proc: asyncio.subprocess.Process,
    events: list[dict[str, Any]],
    deltas: list[str],
    on_text: TextCallback,
) -> None:
    if proc.stdout is None:
        raise CursorCliError("Cursor Agent subprocess stdout is unavailable")
    pending = b""
    while True:
        chunk = await proc.stdout.read(262144)
        if not chunk:
            break
        pending += chunk
        while b"\n" in pending:
            line, pending = pending.split(b"\n", 1)
            if not line.strip():
                continue
            event = _json_event(line + b"\n")
            if event is None:
                continue
            events.append(event)
            if event.get("type") != "assistant":
                continue
            text = _assistant_event_text(event)
            if not text:
                continue
            if "timestamp_ms" in event:
                deltas.append(text)
                await on_text(text)
            elif not deltas:
                deltas.append(text)
                await on_text(text)
    if pending.strip():
        event = _json_event(pending)
        if event is not None:
            events.append(event)
            if event.get("type") == "assistant":
                text = _assistant_event_text(event)
                if text and (("timestamp_ms" in event) or not deltas):
                    deltas.append(text)
                    await on_text(text)
    await proc.wait()


async def _run(config: CursorCliConfig, prompt: str, *, args: list[str] | None = None) -> tuple[str, str]:
    argv = args or config.args
    env = os.environ.copy()
    env.update(config.env)
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
                f"Timed out waiting for Cursor Agent command {command_display(config, argv)}"
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
    result = list(args)
    if "--output-format" not in result and not any(item.startswith("--output-format=") for item in result):
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
    return _result_from_events(events)


def _result_from_events(events: list[dict[str, Any]]) -> CursorAcpResult | None:
    for event in reversed(events):
        if event.get("type") == "result":
            text = str(event.get("result") or "")
            usage = _normalize_usage(event.get("usage"))
            return CursorAcpResult(text=text, usage=usage, raw_result=event)
    return None


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
            parts.append(str(item.get("text") or ""))
    return "".join(parts)


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
