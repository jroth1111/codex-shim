from __future__ import annotations

import asyncio
import json
import os
import shlex
import time
from collections.abc import Awaitable, Callable
from dataclasses import dataclass, field
from pathlib import Path
from typing import Any

from .capabilities import is_delegate_route
from .settings import ShimModel
from .translate import responses_to_chat

TextCallback = Callable[[str], Awaitable[None]]

DEFAULT_CURSOR_TIMEOUT = float(os.environ.get("CODEX_SHIM_CURSOR_TIMEOUT", "3600"))

_DELEGATE_TOOL_ITEM_TYPES = frozenset(
    {
        "function_call",
        "function_call_output",
        "local_shell_call",
        "web_search_call",
        "image_generation_call",
        "tool_search_call",
        "mcp_tool_call",
        "mcp_tool_call_output",
        "custom_tool_call",
        "custom_tool_call_output",
        "tool_search_output",
        "tool_result",
        "computer_call",
        "computer_call_output",
    }
)


def filter_delegate_history_items(items: list[dict[str, Any]]) -> list[dict[str, Any]]:
    """Keep user/assistant messages and reasoning for cursor delegate history."""
    kept: list[dict[str, Any]] = []
    suppressed_tools = 0
    for item in items:
        if not isinstance(item, dict):
            continue
        item_type = str(item.get("type") or "")
        if item_type in _DELEGATE_TOOL_ITEM_TYPES or item_type.endswith("_call") or item_type.endswith("_output"):
            suppressed_tools += 1
            continue
        if item_type in {"message", "reasoning", "compaction", "context_compaction", "compaction_trigger"}:
            kept.append(item)
            continue
        role = item.get("role")
        if role in {"user", "assistant", "developer"}:
            kept.append(item)
    if suppressed_tools:
        kept.append(
            {
                "type": "message",
                "role": "developer",
                "content": [
                    {
                        "type": "input_text",
                        "text": f"Prior turn: Cursor completed {suppressed_tools} tool action(s) autonomously.",
                    }
                ],
            }
        )
    return kept


class CursorAcpError(RuntimeError):
    """Raised when the cursor-agent ACP subprocess cannot complete a turn."""


@dataclass(frozen=True)
class CursorAcpConfig:
    command: str = "cursor-agent"
    args: list[str] = field(default_factory=lambda: ["acp"])
    cwd: str | None = None
    env: dict[str, str] = field(default_factory=dict)
    mode: str = "agent"
    model: str = "default[]"
    handshake_timeout: float = 30.0
    prompt_timeout: float = 600.0


@dataclass(frozen=True)
class CursorAcpResult:
    text: str
    usage: dict[str, Any] | None = None
    raw_result: dict[str, Any] | None = None
    session_id: str | None = None


async def run_cursor_acp(
    route: ShimModel,
    body: dict[str, Any],
    *,
    on_text: TextCallback | None = None,
    chained_from_previous: bool = False,
    workspace: Path | None = None,
) -> CursorAcpResult:
    config = cursor_acp_config(route, workspace=workspace)
    prompt = cursor_prompt_for_body(
        body,
        route,
        chained_from_previous=chained_from_previous,
        workspace=workspace,
    )
    collected: list[str] = []

    async def collect(text: str) -> None:
        if not text:
            return
        collected.append(text)
        if on_text is not None:
            await on_text(text)

    client = _AcpJsonRpcProcess(config)
    await client.start()
    try:
        await client.request(
            "initialize",
            {
                "protocolVersion": 1,
                "clientInfo": {"name": "codex-shim", "version": "0.1.0"},
                "capabilities": {},
            },
            timeout=config.handshake_timeout,
        )
        session_result = await client.request(
            "session/new",
            {
                "cwd": config.cwd or os.getcwd(),
                "mcpServers": [],
            },
            timeout=config.handshake_timeout,
        )
        session_id = _session_id(session_result)
        if not session_id:
            raise CursorAcpError(f"ACP session/new did not return a session id: {session_result!r}")

        # Cursor Agent exposes mode/model as ACP config. Require mode
        # acknowledgement before prompting so the configured runtime is real,
        # not just best-effort metadata.
        if config.mode:
            await client.request(
                "session/set_mode",
                {"sessionId": session_id, "modeId": config.mode},
                timeout=min(config.handshake_timeout, 10.0),
            )
            await client.notify(
                "session/set_config_option",
                {"sessionId": session_id, "configId": "mode", "value": config.mode},
            )
        if config.model:
            await client.notify(
                "session/set_config_option",
                {"sessionId": session_id, "configId": "model", "value": config.model},
            )

        prompt_result = await client.request(
            "session/prompt",
            {
                "sessionId": session_id,
                "prompt": [{"type": "text", "text": prompt}],
            },
            timeout=config.prompt_timeout,
            on_notification=collect,
        )
        if not collected:
            fallback = _text_from_result(prompt_result)
            if fallback:
                await collect(fallback)
        return CursorAcpResult(
            text="".join(collected),
            usage=_normalize_usage(prompt_result.get("usage") if isinstance(prompt_result, dict) else None),
            raw_result=prompt_result if isinstance(prompt_result, dict) else None,
        )
    finally:
        await client.close()


def cursor_acp_config(route: ShimModel, *, workspace: Path | None = None) -> CursorAcpConfig:
    raw = route.raw or {}
    command = str(_field(raw, "command", "cursor_command", "cursorCommand", default="cursor-agent") or "cursor-agent")
    args = _args(raw)
    static_cwd = _optional_str(_field(raw, "cwd", "workspace", "working_directory", "workingDirectory"))
    resolved_cwd = str(workspace) if workspace is not None else static_cwd
    env = {
        str(k): str(v)
        for k, v in (_field(raw, "env", "environment", default={}) or {}).items()
        if v is not None
    }
    mode = str(_field(raw, "mode", "acp_mode", "acpMode", default="agent") or "agent")
    model = str(_field(raw, "cursor_model", "cursorModel", "acp_model", "acpModel", default="default[]") or "default[]")
    return CursorAcpConfig(
        command=command,
        args=args,
        cwd=str(Path(resolved_cwd).expanduser()) if resolved_cwd else None,
        env=env,
        mode=mode,
        model=model,
        handshake_timeout=_float_field(raw, "handshake_timeout", "handshakeTimeout", default=30.0),
        prompt_timeout=_float_field(
            raw,
            "timeout_seconds",
            "timeoutSeconds",
            "prompt_timeout",
            "promptTimeout",
            default=DEFAULT_CURSOR_TIMEOUT,
        ),
    )


def responses_to_acp_prompt(
    body: dict[str, Any],
    upstream_model: str,
    provider: str = "generic-chat-completion-api",
    thinking_behavior: str | None = None,
    *,
    chained_from_previous: bool = False,
) -> str:
    chat = responses_to_chat(
        body,
        upstream_model,
        provider,
        thinking_behavior=thinking_behavior,
        chained_from_previous=chained_from_previous,
    )
    parts: list[str] = []
    for message in chat.get("messages") or []:
        if not isinstance(message, dict):
            continue
        role = str(message.get("role") or "user").upper()
        content = _content_to_text(message.get("content"))
        if content:
            parts.append(f"{role}:\n{content}")
        tool_calls = message.get("tool_calls") or []
        if tool_calls:
            parts.append(f"{role} TOOL CALLS:\n{json.dumps(tool_calls, ensure_ascii=False, separators=(',', ':'))}")

    tools = chat.get("tools") or []
    if tools:
        tool_names = []
        for tool in tools:
            if not isinstance(tool, dict):
                continue
            fn = tool.get("function") or {}
            name = fn.get("name") if isinstance(fn, dict) else None
            if name:
                tool_names.append(str(name))
        if tool_names:
            parts.append("CODEX TOOL NAMES PRESENT:\n" + ", ".join(tool_names))

    return "\n\n".join(parts).strip() or ""


def responses_to_upstream_parity_prompt(
    body: dict[str, Any],
    *,
    chained_from_previous: bool = False,
    resume_chat_id: str | None = None,
    max_turns: int = 4,
) -> str:
    """
    Plain cursor-agent CLI prompt: latest user line when resuming, otherwise recent text turns only.
    Workspace is passed via ``--workspace``; no WORKSPACE: prefix.
    """
    from .cursor_parity import latest_user_text

    plain = latest_user_text(body)
    if resume_chat_id or chained_from_previous:
        return plain
    if plain:
        return plain
    chat = responses_to_chat(
        body,
        "auto",
        "cursor-agent",
        chained_from_previous=chained_from_previous,
    )
    messages = [message for message in (chat.get("messages") or []) if isinstance(message, dict)]
    text_messages: list[str] = []
    suppressed_tool_outputs = 0
    from .cursor_parity import _is_shim_catalog_instructions

    for message in messages:
        role = str(message.get("role") or "user").lower()
        if role == "system":
            continue
        content = _content_to_text(message.get("content"))
        if not content or _is_shim_catalog_instructions(content):
            continue
        text_messages.append(f"{role.upper()}:\n{content}")
        if message.get("tool_calls"):
            suppressed_tool_outputs += 1
    parts: list[str] = []
    if suppressed_tool_outputs:
        parts.append(
            f"NOTE:\nPrior turn: Cursor completed {suppressed_tool_outputs} tool action(s) autonomously."
        )
    if text_messages:
        parts.extend(text_messages[-max_turns:])
    joined = "\n\n".join(parts).strip()
    if joined:
        return joined
    return latest_user_text(body)


def responses_to_delegate_prompt(
    body: dict[str, Any],
    upstream_model: str,
    provider: str = "generic-chat-completion-api",
    thinking_behavior: str | None = None,
    *,
    chained_from_previous: bool = False,
    workspace: Path | None = None,
    max_turns: int = 4,
) -> str:
    chat = responses_to_chat(
        body,
        upstream_model,
        provider,
        thinking_behavior=thinking_behavior,
        chained_from_previous=chained_from_previous,
    )
    parts: list[str] = []
    if workspace is not None:
        parts.append(f"WORKSPACE:\n{workspace}")
    messages = [message for message in (chat.get("messages") or []) if isinstance(message, dict)]
    text_messages = []
    suppressed_tool_outputs = 0
    for message in messages:
        role = str(message.get("role") or "user").upper()
        content = _content_to_text(message.get("content"))
        if content:
            text_messages.append(f"{role}:\n{content}")
            continue
        if message.get("tool_calls"):
            suppressed_tool_outputs += 1
    if suppressed_tool_outputs:
        parts.append(
            f"NOTE:\nPrior turn: Cursor completed {suppressed_tool_outputs} tool action(s) autonomously."
        )
    if text_messages:
        parts.extend(text_messages[-max_turns:])
    return "\n\n".join(parts).strip() or ""


def cursor_prompt_for_body(
    body: dict[str, Any],
    route: ShimModel,
    *,
    chained_from_previous: bool = False,
    workspace: Path | None = None,
    upstream_parity: bool = False,
    resume_chat_id: str | None = None,
) -> str:
    common = {
        "body": body,
        "upstream_model": route.model,
        "provider": route.provider,
        "thinking_behavior": route.thinking_behavior,
        "chained_from_previous": chained_from_previous,
        "workspace": workspace,
    }
    if is_delegate_route(route):
        if upstream_parity:
            return responses_to_upstream_parity_prompt(
                body,
                chained_from_previous=chained_from_previous,
                resume_chat_id=resume_chat_id,
            )
        return responses_to_delegate_prompt(**common)
    return responses_to_acp_prompt(**common)


def cursor_acp_response_payload(result: CursorAcpResult, model: str) -> dict[str, Any]:
    now = int(time.time())
    payload: dict[str, Any] = {
        "id": f"resp_cursor_acp_{now}",
        "object": "response",
        "created_at": now,
        "status": "completed",
        "model": model,
        "output": [
            {
                "id": f"msg_cursor_acp_{now}",
                "type": "message",
                "status": "completed",
                "role": "assistant",
                "content": [{"type": "output_text", "text": result.text, "annotations": []}],
            }
        ],
    }
    if result.usage is not None:
        payload["usage"] = result.usage
    return payload


def cursor_acp_chat_payload(result: CursorAcpResult, model: str) -> dict[str, Any]:
    now = int(time.time())
    payload: dict[str, Any] = {
        "id": f"chatcmpl_cursor_acp_{now}",
        "object": "chat.completion",
        "created": now,
        "model": model,
        "choices": [{"index": 0, "message": {"role": "assistant", "content": result.text}, "finish_reason": "stop"}],
    }
    if result.usage is not None:
        payload["usage"] = result.usage
    return payload


class _AcpJsonRpcProcess:
    def __init__(self, config: CursorAcpConfig):
        self.config = config
        self.proc: asyncio.subprocess.Process | None = None
        self._next_id = 1
        self._stderr_chunks: list[str] = []
        self._stderr_task: asyncio.Task[None] | None = None

    async def start(self) -> None:
        env = os.environ.copy()
        env.update(self.config.env)
        try:
            self.proc = await asyncio.create_subprocess_exec(
                self.config.command,
                *self.config.args,
                stdin=asyncio.subprocess.PIPE,
                stdout=asyncio.subprocess.PIPE,
                stderr=asyncio.subprocess.PIPE,
                cwd=self.config.cwd,
                env=env,
            )
        except OSError as exc:
            raise CursorAcpError(f"Failed to start ACP command {self.command_display()}: {exc}") from exc
        if self.proc.stderr is not None:
            self._stderr_task = asyncio.create_task(self._read_stderr())

    async def close(self) -> None:
        proc = self.proc
        if proc is None:
            return
        if proc.returncode is None:
            proc.terminate()
            try:
                await asyncio.wait_for(proc.wait(), timeout=2)
            except asyncio.TimeoutError:
                proc.kill()
                await proc.wait()
        if self._stderr_task is not None:
            self._stderr_task.cancel()
            try:
                await self._stderr_task
            except asyncio.CancelledError:
                pass

    async def request(
        self,
        method: str,
        params: dict[str, Any],
        *,
        timeout: float,
        on_notification: TextCallback | None = None,
    ) -> dict[str, Any]:
        request_id = self._next_id
        self._next_id += 1
        await self._send({"jsonrpc": "2.0", "id": request_id, "method": method, "params": params})

        loop = asyncio.get_running_loop()
        deadline = loop.time() + timeout
        while True:
            remaining = deadline - loop.time()
            if remaining <= 0:
                await self.close()
                raise CursorAcpError(f"Timed out waiting for ACP {method} response from {self.command_display()}")
            try:
                message = await self._read_message(remaining)
            except asyncio.TimeoutError as exc:
                await self.close()
                raise CursorAcpError(f"Timed out waiting for ACP {method} response from {self.command_display()}") from exc
            if message.get("id") == request_id:
                if "error" in message:
                    raise CursorAcpError(f"ACP {method} failed: {message['error']!r}")
                result = message.get("result")
                return result if isinstance(result, dict) else {}
            await self._handle_side_message(message, on_notification)

    async def notify(self, method: str, params: dict[str, Any]) -> None:
        await self._send({"jsonrpc": "2.0", "method": method, "params": params})

    async def _send(self, message: dict[str, Any]) -> None:
        proc = self._require_proc()
        if proc.stdin is None:
            raise CursorAcpError("ACP subprocess stdin is unavailable")
        payload = json.dumps(message, separators=(",", ":")).encode() + b"\n"
        proc.stdin.write(payload)
        await proc.stdin.drain()

    async def _read_message(self, timeout: float) -> dict[str, Any]:
        proc = self._require_proc()
        if proc.stdout is None:
            raise CursorAcpError("ACP subprocess stdout is unavailable")
        while True:
            line = await asyncio.wait_for(proc.stdout.readline(), timeout=timeout)
            if not line:
                raise CursorAcpError(
                    f"ACP subprocess exited before responding"
                    f"{' with stderr: ' + self.stderr_excerpt() if self.stderr_excerpt() else ''}"
                )
            try:
                message = json.loads(line.decode("utf-8"))
            except json.JSONDecodeError:
                continue
            if isinstance(message, dict):
                return message

    async def _handle_side_message(self, message: dict[str, Any], on_notification: TextCallback | None) -> None:
        if "method" in message and "id" in message:
            await self._send(
                {
                    "jsonrpc": "2.0",
                    "id": message["id"],
                    "error": {
                        "code": -32601,
                        "message": f"codex-shim does not implement ACP client method {message.get('method')}",
                    },
                }
            )
            return
        if message.get("method") != "session/update" or on_notification is None:
            return
        text = _text_from_session_update(message.get("params"))
        if text:
            await on_notification(text)

    async def _read_stderr(self) -> None:
        proc = self._require_proc()
        if proc.stderr is None:
            return
        while True:
            chunk = await proc.stderr.read(4096)
            if not chunk:
                return
            if sum(len(item) for item in self._stderr_chunks) < 20000:
                self._stderr_chunks.append(chunk.decode("utf-8", errors="replace"))

    def _require_proc(self) -> asyncio.subprocess.Process:
        if self.proc is None:
            raise CursorAcpError("ACP subprocess has not been started")
        return self.proc

    def stderr_excerpt(self) -> str:
        return "".join(self._stderr_chunks).strip()[:2000]

    def command_display(self) -> str:
        return " ".join(shlex.quote(part) for part in [self.config.command, *self.config.args])


def _text_from_session_update(params: Any) -> str:
    if not isinstance(params, dict):
        return ""
    update = params.get("update")
    if not isinstance(update, dict):
        return ""
    kind = str(update.get("sessionUpdate") or update.get("type") or "")
    if kind not in {"agent_message_chunk", "message_chunk", "text_delta", "agent_message"}:
        return ""
    return _content_to_text(update.get("content") if "content" in update else update)


def _text_from_result(result: Any) -> str:
    if not isinstance(result, dict):
        return ""
    for key in ("text", "message", "content", "response", "output"):
        text = _content_to_text(result.get(key))
        if text:
            return text
    return ""


def _content_to_text(content: Any) -> str:
    if content is None:
        return ""
    if isinstance(content, str):
        return content
    if isinstance(content, list):
        return "\n".join(part for part in (_content_to_text(item) for item in content) if part)
    if isinstance(content, dict):
        if content.get("type") in {"text", "input_text", "output_text"} and "text" in content:
            return str(content.get("text") or "")
        if "text" in content and isinstance(content.get("text"), str):
            return str(content["text"])
        if "content" in content:
            return _content_to_text(content["content"])
        if "output" in content:
            return _content_to_text(content["output"])
        if content.get("type") in {"input_image", "image_url"} or "image_url" in content:
            return "[image]"
    return ""


def _session_id(result: Any) -> str:
    if not isinstance(result, dict):
        return ""
    return str(result.get("sessionId") or result.get("session_id") or result.get("id") or "")


def _normalize_usage(usage: Any) -> dict[str, Any] | None:
    if not isinstance(usage, dict):
        return None
    normalized: dict[str, Any] = {}
    for src, dst in [
        ("inputTokens", "input_tokens"),
        ("outputTokens", "output_tokens"),
        ("totalTokens", "total_tokens"),
        ("input_tokens", "input_tokens"),
        ("output_tokens", "output_tokens"),
        ("total_tokens", "total_tokens"),
        ("prompt_tokens", "input_tokens"),
        ("completion_tokens", "output_tokens"),
    ]:
        if src in usage:
            normalized[dst] = usage[src]
    if "total_tokens" not in normalized and "input_tokens" in normalized and "output_tokens" in normalized:
        normalized["total_tokens"] = normalized["input_tokens"] + normalized["output_tokens"]
    return normalized or dict(usage)


def _args(raw: dict[str, Any]) -> list[str]:
    value = _field(raw, "args", "acp_args", "acpArgs", "cursor_args", "cursorArgs", default=None)
    if value is None:
        return ["acp"]
    if isinstance(value, str):
        parsed = shlex.split(value)
        return parsed or ["acp"]
    if isinstance(value, list):
        return [str(item) for item in value]
    return ["acp"]


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
