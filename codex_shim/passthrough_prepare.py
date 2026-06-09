from __future__ import annotations

import json
import os
from copy import deepcopy
from typing import Any

from .catalog import chatgpt_passthrough_entry

_STRIP_TOP_LEVEL = frozenset({"metadata", "max_output_tokens", "trace_id", "request_id"})
_CALL_ID_PREFIX = {
    "web_search_call": "ws",
    "tool_search_call": "tsc",
    "tool_search_output": "tso",
    "function_call": "fc",
}
_FUNCTION_CALL_SOURCES = {
    "local_shell_call": "local_shell",
    "image_generation_call": "image_generation",
    "web_search_call": "web_search",
    "tool_search_call": "tool_search",
}


def _default_instructions() -> str:
    entry = chatgpt_passthrough_entry()
    return str(entry.get("base_instructions") or "You are Codex, a coding agent powered by GPT-5.5.")


def _keep_previous_response_id() -> bool:
    return os.environ.get("CODEX_SHIM_PASSTHROUGH_KEEP_PREVIOUS_RESPONSE_ID", "").strip().lower() in {
        "1",
        "true",
        "yes",
    }


def _parse_json_object(value: Any) -> Any:
    if not isinstance(value, str):
        return value
    text = value.strip()
    if not text:
        return value
    try:
        parsed = json.loads(text)
    except json.JSONDecodeError:
        return value
    return parsed


def _json_string(value: Any) -> str:
    if isinstance(value, str):
        return value
    if value is None:
        return "{}"
    return json.dumps(value, separators=(",", ":"))


def _coerce_input_items(body: dict[str, Any]) -> list[dict[str, Any]]:
    raw = body.get("input")
    if isinstance(raw, list):
        return [deepcopy(item) for item in raw if isinstance(item, dict)]
    if raw is None:
        return []
    if isinstance(raw, str):
        return [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": raw}]}]
    if isinstance(raw, dict):
        return [deepcopy(raw)]
    return [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": str(raw)}]}]


def _summary_text(item: dict[str, Any]) -> str:
    chunks: list[str] = []
    for summary in item.get("summary") or []:
        if isinstance(summary, dict) and summary.get("text"):
            chunks.append(str(summary["text"]))
    return "\n".join(chunks).strip()


def _normalize_call_id(item: dict[str, Any], *, prefix: str) -> str:
    raw = str(item.get("id") or item.get("call_id") or "").strip()
    if raw.startswith(f"{prefix}_"):
        call_id = raw
    elif raw.startswith("call_"):
        rest = raw[5:]
        if rest.startswith(f"{prefix}_"):
            call_id = rest
        elif prefix == "tsc" and rest.startswith("ts_"):
            call_id = f"tsc_{rest[3:]}"
        elif prefix == "ws" and rest.startswith("ws_"):
            call_id = rest
        elif prefix == "ws" and rest == "ws":
            call_id = "ws_1"
        else:
            call_id = f"{prefix}_{rest}"
    elif raw:
        call_id = f"{prefix}_{raw}"
    else:
        call_id = f"{prefix}_1"
    item["id"] = call_id
    item.pop("call_id", None)
    return call_id


def _function_call_from_hosted(item: dict[str, Any], *, name: str) -> dict[str, Any]:
    action = item.get("action")
    if isinstance(action, dict) and action:
        arguments = action
    else:
        arguments = _parse_json_object(item.get("arguments"))
        if not isinstance(arguments, dict):
            arguments = {}
    call_id = _normalize_call_id(item, prefix="fc")
    return {
        "type": "function_call",
        "id": call_id,
        "call_id": call_id,
        "name": name,
        "arguments": _json_string(arguments),
    }


def _normalize_mcp_tool_call(item: dict[str, Any]) -> dict[str, Any]:
    tool_name = str(item.get("tool_name") or item.get("name") or "mcp_tool")
    arguments = _parse_json_object(item.get("arguments"))
    if not isinstance(arguments, dict):
        arguments = {}
    call_id = _normalize_call_id(item, prefix="fc")
    return {
        "type": "function_call",
        "id": call_id,
        "call_id": call_id,
        "name": tool_name,
        "namespace": item.get("namespace") or "mcp",
        "arguments": _json_string(arguments),
    }


def _normalize_mcp_tool_call_output(item: dict[str, Any]) -> dict[str, Any]:
    call_id = str(item.get("call_id") or item.get("id") or "fc_1")
    if not call_id.startswith("fc_"):
        call_id = f"fc_{call_id.removeprefix('call_')}" if call_id else "fc_1"
    return {
        "type": "function_call_output",
        "call_id": call_id,
        "output": item.get("output"),
    }


def _normalize_tool_search_output(item: dict[str, Any]) -> dict[str, Any]:
    call_id = str(item.get("call_id") or item.get("id") or "tsc_1")
    if not call_id.startswith("fc_"):
        if call_id.startswith("tsc_"):
            call_id = f"fc_{call_id[4:]}"
        elif call_id.startswith("call_"):
            call_id = f"fc_{call_id[5:]}"
        else:
            call_id = f"fc_{call_id}"
    output = item.get("output")
    if output is None and isinstance(item.get("tools"), list):
        output = f"found {len(item['tools'])} tools"
    return {
        "type": "function_call_output",
        "call_id": call_id,
        "output": output or "",
    }


def _compaction_to_message(item: dict[str, Any]) -> dict[str, Any]:
    summary = _summary_text(item)
    content = f"[Compacted conversation context]\n{summary}" if summary else "[Compacted conversation context]"
    return {"type": "message", "role": "user", "content": [{"type": "input_text", "text": content}]}


def _normalize_input_item(item: dict[str, Any], *, prev_call_type: str | None) -> tuple[dict[str, Any] | None, str | None]:
    item = deepcopy(item)
    item_type = str(item.get("type") or "")

    if item_type == "mcp_tool_call":
        return _normalize_mcp_tool_call(item), "function_call"

    if item_type == "mcp_tool_call_output":
        return _normalize_mcp_tool_call_output(item), prev_call_type

    if item_type in {"context_compaction", "compaction"}:
        encrypted = item.get("encrypted_content")
        if not isinstance(encrypted, str) or not encrypted.strip():
            return _compaction_to_message(item), None
        item["type"] = "compaction"
        item.pop("status", None)
        return item, prev_call_type

    if item_type in _FUNCTION_CALL_SOURCES:
        return _function_call_from_hosted(item, name=_FUNCTION_CALL_SOURCES[item_type]), "function_call"

    if item_type == "tool_search_output":
        return _normalize_tool_search_output(item), prev_call_type

    if item_type == "function_call":
        call_id = _normalize_call_id(item, prefix="fc")
        item["call_id"] = call_id
        item["arguments"] = _json_string(_parse_json_object(item.get("arguments")))
        item.pop("status", None)
        return item, "function_call"

    if item_type == "function_call_output":
        if prev_call_type == "web_search_call":
            prefix = "ws"
        elif prev_call_type == "tool_search_call":
            prefix = "tsc"
        else:
            prefix = "fc"
        call_id = str(item.get("call_id") or item.get("id") or "").strip()
        item["call_id"] = _normalize_call_id({"call_id": call_id}, prefix=prefix)
        item.pop("id", None)
        return item, prev_call_type

    if item_type.endswith("_call"):
        prefix = _CALL_ID_PREFIX.get(item_type)
        if prefix:
            _normalize_call_id(item, prefix=prefix)
        else:
            _normalize_call_id(item, prefix="fc")
        item.pop("status", None)
        return item, item_type

    return item, prev_call_type


def normalize_chatgpt_passthrough_input(items: list[dict[str, Any]]) -> list[dict[str, Any]]:
    normalized: list[dict[str, Any]] = []
    prev_call_type: str | None = None
    for item in items:
        prepared, prev_call_type = _normalize_input_item(item, prev_call_type=prev_call_type)
        if prepared is not None:
            normalized.append(prepared)
    return normalized


def prepare_chatgpt_passthrough_body(
    body: dict[str, Any],
    *,
    compact: bool = False,
    inject_default_instructions: bool = True,
) -> dict[str, Any]:
    prepared = deepcopy(body)
    for key in _STRIP_TOP_LEVEL:
        prepared.pop(key, None)
    if not _keep_previous_response_id():
        prepared.pop("previous_response_id", None)

    if inject_default_instructions and not prepared.get("instructions"):
        prepared["instructions"] = _default_instructions()

    if compact:
        prepared.pop("stream", None)
        prepared.pop("store", None)
    else:
        if "store" not in prepared:
            prepared["store"] = False
        if "stream" not in prepared:
            prepared["stream"] = True

    prepared["input"] = normalize_chatgpt_passthrough_input(_coerce_input_items(prepared))
    return prepared
