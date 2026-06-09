from __future__ import annotations

import re
import subprocess
from dataclasses import dataclass
from pathlib import Path
from typing import Any

MAX_EXCERPT = 1200
MAX_COMMANDS = 8
MAX_FILES = 12
MAX_OPEN_ITEMS = 8

MUTATION_TOOL_NAMES = frozenset(
    {
        "Write",
        "Edit",
        "MultiEdit",
        "NotebookEdit",
        "apply_patch",
        "write",
        "edit",
    }
)
COMMAND_TOOL_NAMES = frozenset(
    {
        "local_shell",
        "exec_command",
        "shell",
        "bash",
        "Bash",
        "run_terminal_cmd",
    }
)


@dataclass(frozen=True)
class CompactFrontier:
    last_user_intent: str = ""
    prior_compaction_excerpt: str = ""
    modified_files: tuple[str, ...] = ()
    recent_commands: tuple[str, ...] = ()
    open_items: tuple[str, ...] = ()
    input_item_count: int = 0


def _clip(text: str, limit: int = MAX_EXCERPT) -> str:
    normalized = " ".join((text or "").split())
    if len(normalized) <= limit:
        return normalized
    return normalized[: limit - 3] + "..."


def _text_from_content(content: Any) -> str:
    if isinstance(content, str):
        return content
    if not isinstance(content, list):
        return ""
    parts: list[str] = []
    for item in content:
        if not isinstance(item, dict):
            continue
        if item.get("type") in {"input_text", "output_text", "text"} or "text" in item:
            text = str(item.get("text") or "").strip()
            if text:
                parts.append(text)
    return "\n".join(parts)


def _summary_text(item: dict[str, Any]) -> str:
    summary = item.get("summary")
    if not isinstance(summary, list):
        return ""
    parts: list[str] = []
    for part in summary:
        if isinstance(part, dict) and part.get("text"):
            parts.append(str(part["text"]))
    return "\n".join(parts).strip()


def _message_text(item: dict[str, Any]) -> str:
    if item.get("type") == "message":
        return _text_from_content(item.get("content"))
    role = item.get("role")
    if role in {"user", "assistant", "developer"}:
        return _text_from_content(item.get("content"))
    return ""


def _tool_name(item: dict[str, Any]) -> str:
    for key in ("name", "tool_name"):
        value = item.get(key)
        if value:
            return str(value)
    if item.get("type") == "function_call":
        return str(item.get("name") or "")
    return ""


def _tool_arguments(item: dict[str, Any]) -> dict[str, Any]:
    for key in ("arguments", "input", "args"):
        value = item.get(key)
        if isinstance(value, dict):
            return value
        if isinstance(value, str) and value.strip():
            try:
                import json

                parsed = json.loads(value)
                if isinstance(parsed, dict):
                    return parsed
            except json.JSONDecodeError:
                return {}
    return {}


def _file_path_from_args(args: dict[str, Any]) -> str | None:
    for key in ("file_path", "notebook_path", "path", "target_file"):
        value = args.get(key)
        if value:
            return str(value).strip()
    return None


def _command_from_args(args: dict[str, Any]) -> str | None:
    for key in ("command", "cmd", "script"):
        value = args.get(key)
        if value:
            return _clip(str(value), 240)
    return None


def extract_compact_frontier(input_items: Any) -> CompactFrontier:
    if not isinstance(input_items, list):
        return CompactFrontier()

    last_user_intent = ""
    prior_compaction_excerpt = ""
    modified_files: list[str] = []
    recent_commands: list[str] = []
    open_calls: dict[str, str] = {}
    resolved_calls: set[str] = set()
    open_items: list[str] = []

    for item in input_items:
        if not isinstance(item, dict):
            continue
        item_type = str(item.get("type") or "")

        if item_type in {"context_compaction", "compaction"}:
            text = _summary_text(item)
            if text:
                prior_compaction_excerpt = _clip(text)
            continue

        message_text = _message_text(item)
        if message_text and (item_type == "message" and item.get("role") == "user" or item.get("role") == "user"):
            last_user_intent = _clip(message_text)

        tool_name = _tool_name(item)
        args = _tool_arguments(item)

        if item_type in {"function_call", "tool_use", "hosted_tool_call"} or tool_name:
            call_id = str(item.get("call_id") or item.get("id") or "")
            if tool_name in MUTATION_TOOL_NAMES:
                file_path = _file_path_from_args(args)
                if file_path and file_path not in modified_files:
                    modified_files.append(file_path)
            if tool_name in COMMAND_TOOL_NAMES:
                command = _command_from_args(args)
                if command and command not in recent_commands:
                    recent_commands.append(command)
            if call_id:
                open_calls[call_id] = tool_name or item_type

        if item_type in {"function_call_output", "tool_result", "hosted_tool_result"}:
            call_id = str(item.get("call_id") or "")
            if call_id:
                resolved_calls.add(call_id)

    for call_id, tool_name in open_calls.items():
        if call_id not in resolved_calls:
            label = f"{tool_name or 'tool'}:{call_id[:24]}"
            if label not in open_items:
                open_items.append(label)

    return CompactFrontier(
        last_user_intent=last_user_intent,
        prior_compaction_excerpt=prior_compaction_excerpt,
        modified_files=tuple(modified_files[:MAX_FILES]),
        recent_commands=tuple(recent_commands[:MAX_COMMANDS]),
        open_items=tuple(open_items[:MAX_OPEN_ITEMS]),
        input_item_count=len(input_items),
    )


def git_status_short(workspace: Path) -> str:
    if not workspace:
        return ""
    try:
        proc = subprocess.run(
            ["git", "status", "--short"],
            cwd=workspace,
            text=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.DEVNULL,
            timeout=3,
            check=False,
        )
    except (OSError, subprocess.TimeoutExpired):
        return ""
    return _clip(proc.stdout or "", MAX_EXCERPT)


def _normalized_tokens(text: str) -> set[str]:
    return {token for token in re.findall(r"[a-z0-9_./-]{3,}", text.lower()) if token}


def preserves_last_user_intent(summary: str, frontier: CompactFrontier) -> bool:
    intent = (frontier.last_user_intent or "").strip()
    if not intent:
        return True
    summary_lower = summary.lower()
    intent_lower = intent.lower()
    if intent_lower in summary_lower:
        return True
    intent_tokens = _normalized_tokens(intent)
    if not intent_tokens:
        return True
    summary_tokens = _normalized_tokens(summary)
    overlap = intent_tokens & summary_tokens
    return len(overlap) >= max(1, min(3, len(intent_tokens) // 4))


def mentions_modified_files(summary: str, frontier: CompactFrontier) -> bool:
    if not frontier.modified_files:
        return True
    summary_lower = summary.lower()
    for file_path in frontier.modified_files:
        basename = Path(file_path).name.lower()
        if basename and basename in summary_lower:
            return True
        if file_path.lower() in summary_lower:
            return True
    return False
