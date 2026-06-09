from __future__ import annotations

import re
import uuid
from typing import Any, Iterator

# agent.v1.InteractionUpdate oneof members (deobfuscated agent_pb field numbers).
_INTERACTION_ONEOF_FIELDS = frozenset(
    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21}
)

# agent.v1.ToolCall.tool oneof: field number -> proto name (camelCase for CLI parity).
_TOOL_CALL_ONEOF: dict[int, str] = {
    1: "shellToolCall",
    3: "deleteToolCall",
    4: "globToolCall",
    5: "grepToolCall",
    8: "readToolCall",
    9: "updateTodosToolCall",
    10: "readTodosToolCall",
    12: "editToolCall",
    13: "lsToolCall",
    14: "readLintsToolCall",
    15: "mcpToolCall",
    16: "semSearchToolCall",
    17: "createPlanToolCall",
    18: "webSearchToolCall",
    19: "taskToolCall",
    20: "listMcpResourcesToolCall",
    21: "readMcpResourceToolCall",
    22: "applyAgentDiffToolCall",
    23: "askQuestionToolCall",
    24: "fetchToolCall",
    25: "switchModeToolCall",
    28: "generateImageToolCall",
    29: "recordScreenToolCall",
    30: "computerUseToolCall",
    31: "writeShellStdinToolCall",
    32: "reflectToolCall",
    33: "setupVmEnvironmentToolCall",
    34: "truncatedToolCall",
}

_UUID_RE = re.compile(
    r"^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$",
    re.I,
)


def read_varint(buf: bytes, offset: int) -> tuple[int, int]:
    result = 0
    shift = 0
    i = offset
    while i < len(buf):
        byte = buf[i]
        i += 1
        result |= (byte & 0x7F) << shift
        if (byte & 0x80) == 0:
            return result, i
        shift += 7
        if shift > 63:
            break
    raise ValueError("truncated varint")


def get_field_string(fields: list[tuple[int, int, Any]], field_no: int) -> str | None:
    for no, wire, value in fields:
        if no == field_no and wire == 2 and isinstance(value, (bytes, bytearray)):
            try:
                return bytes(value).decode("utf-8")
            except UnicodeDecodeError:
                return None
    return None


def get_field_bytes(fields: list[tuple[int, int, Any]], field_no: int) -> bytes | None:
    for no, wire, value in fields:
        if no == field_no and wire == 2 and isinstance(value, (bytes, bytearray)):
            return bytes(value)
    return None


def get_field_varint(fields: list[tuple[int, int, Any]], field_no: int) -> int | None:
    for no, wire, value in fields:
        if no == field_no and wire == 0 and isinstance(value, int):
            return value
    return None


def _decode_tool_call_value(case: str, body: bytes) -> dict[str, Any]:
    fields = decode_fields(body)
    args_buf = get_field_bytes(fields, 1)
    if not args_buf:
        return {}
    args_fields = decode_fields(args_buf)
    if case == "shellToolCall":
        command = get_field_string(args_fields, 1)
        working_directory = get_field_string(args_fields, 2)
        args: dict[str, Any] = {}
        if command:
            args["command"] = command
        if working_directory:
            args["workingDirectory"] = working_directory
        return {"args": args} if args else {}
    if case == "readToolCall":
        path = get_field_string(args_fields, 1)
        return {"args": {"path": path}} if path else {}
    if case == "editToolCall":
        path = get_field_string(args_fields, 1)
        return {"args": {"path": path}} if path else {}
    if case == "grepToolCall":
        pattern = get_field_string(args_fields, 1)
        return {"args": {"pattern": pattern}} if pattern else {}
    if case == "mcpToolCall":
        name = get_field_string(args_fields, 1) or get_field_string(args_fields, 5)
        tool_name = get_field_string(args_fields, 5)
        args = {k: v for k, v in (("name", name), ("toolName", tool_name)) if v}
        return {"args": args} if args else {}
    return {}


def decode_tool_call(buf: bytes) -> dict[str, Any]:
    """Decode agent.v1.ToolCall (tool oneof case + common args)."""
    for field_no, wire, value in decode_fields(buf):
        if wire != 2:
            continue
        case = _TOOL_CALL_ONEOF.get(field_no)
        if case:
            value_dict = _decode_tool_call_value(case, bytes(value))
            return {"tool": {"case": case, "value": value_dict}}
    return {}


def decode_interaction_update(buf: bytes) -> list[dict[str, Any]]:
    """
    Decode agent.v1.InteractionUpdate from a Connect payload.

    Field numbers match Cursor agent_pb (text_delta=1, tool_call_started=2, …).
    """
    fields = decode_fields(buf)
    if not any(no in _INTERACTION_ONEOF_FIELDS for no, _, _ in fields):
        return []

    events: list[dict[str, Any]] = []
    for field_no, wire, value in fields:
        if wire != 2 or not isinstance(value, (bytes, bytearray)):
            continue
        chunk = bytes(value)
        inner = decode_fields(chunk)
        if field_no == 1:  # text_delta
            text = get_field_string(inner, 1)
            if text:
                events.append({"type": "text", "text": text})
        elif field_no == 2:  # tool_call_started
            events.append(_tool_call_event(subtype="started", inner=inner, model_call_field=3))
        elif field_no == 3:  # tool_call_completed
            events.append(_tool_call_event(subtype="completed", inner=inner, model_call_field=3))
        elif field_no == 7:  # partial_tool_call
            partial = _tool_call_event(subtype="partial", inner=inner, model_call_field=4)
            args_delta = get_field_string(inner, 3)
            if args_delta:
                partial["args_text_delta"] = args_delta
            events.append(partial)
        elif field_no == 15:  # tool_call_delta
            events.extend(_decode_tool_call_delta(inner))
        elif field_no == 4:  # thinking_delta
            text = get_field_string(inner, 1)
            if text:
                events.append({"type": "thinking", "subtype": "delta", "text": text})
        elif field_no == 5:  # thinking_completed
            events.append({"type": "thinking", "subtype": "completed"})
        elif field_no == 8:  # token_delta
            tokens = get_field_varint(inner, 1)
            if tokens is not None:
                events.append({"type": "usage_delta", "tokens": tokens})
        elif field_no == 14:  # turn_ended
            events.append({"type": "turn_ended"})
    return [e for e in events if e]


def _decode_tool_call_delta(inner: list[tuple[int, int, Any]]) -> list[dict[str, Any]]:
    call_id = get_field_string(inner, 1) or ""
    delta_buf = get_field_bytes(inner, 2)
    if not delta_buf:
        return []
    nested = find_interaction_update_payload(delta_buf)
    if nested:
        events = decode_interaction_update(nested)
        for event in events:
            if call_id and event.get("type") == "tool_call":
                event.setdefault("call_id", call_id)
        return events
    stdout_buf = get_field_bytes(decode_fields(delta_buf), 1)
    if stdout_buf:
        content = get_field_string(decode_fields(stdout_buf), 1)
        if content:
            return [
                {
                    "type": "tool_output_delta",
                    "call_id": call_id,
                    "stream": "stdout",
                    "content": content,
                }
            ]
    return []


def _tool_call_event(
    *,
    subtype: str,
    inner: list[tuple[int, int, Any]],
    model_call_field: int,
) -> dict[str, Any]:
    call_id = get_field_string(inner, 1) or ""
    tool_buf = get_field_bytes(inner, 2)
    model_call_id = get_field_string(inner, model_call_field) or ""
    tool_call = decode_tool_call(tool_buf) if tool_buf else {}
    return {
        "type": "tool_call",
        "subtype": subtype,
        "call_id": call_id,
        "tool_call": tool_call,
        "model_call_id": model_call_id,
    }


def find_interaction_update_payload(buf: bytes, *, depth: int = 0, max_depth: int = 6) -> bytes | None:
    """Return bytes that decode as InteractionUpdate, including one level of wrapping."""
    if depth > max_depth or not buf:
        return None
    direct = decode_interaction_update(buf)
    if direct:
        return buf
    try:
        fields = decode_fields(buf)
    except ValueError:
        return None
    for _no, wire, value in fields:
        if wire != 2 or not isinstance(value, (bytes, bytearray)):
            continue
        nested = bytes(value)
        if decode_interaction_update(nested):
            return nested
        found = find_interaction_update_payload(nested, depth=depth + 1, max_depth=max_depth)
        if found is not None:
            return found
    return None


def decode_fields(buf: bytes) -> list[tuple[int, int, Any]]:
    fields: list[tuple[int, int, Any]] = []
    offset = 0
    while offset < len(buf):
        key, offset = read_varint(buf, offset)
        field_no = key >> 3
        wire = key & 7
        if wire == 0:
            value, offset = read_varint(buf, offset)
            fields.append((field_no, wire, value))
        elif wire == 2:
            length, offset = read_varint(buf, offset)
            end = offset + length
            fields.append((field_no, wire, buf[offset:end]))
            offset = end
        else:
            break
    return fields


def _looks_like_noise(text: str) -> bool:
    stripped = text.strip()
    if not stripped or len(stripped) < 2:
        return True
    if _UUID_RE.match(stripped):
        return True
    try:
        uuid.UUID(stripped)
        return True
    except ValueError:
        pass
    if stripped.startswith("agent.v1.") or stripped.startswith("aiserver.v1."):
        return True
    if len(stripped) > 48 and all(c in "0123456789abcdef" for c in stripped.lower()):
        return True
    printable = sum(1 for c in stripped if c.isprintable() and c not in "\x00\x01")
    return printable / max(len(stripped), 1) < 0.85


def iter_proto_strings(buf: bytes, *, depth: int = 0, max_depth: int = 12) -> Iterator[str]:
    if depth > max_depth or not buf:
        return
    try:
        fields = decode_fields(buf)
    except ValueError:
        return
    if not fields:
        return
    for _field_no, wire, value in fields:
        if wire != 2 or not isinstance(value, (bytes, bytearray)):
            continue
        chunk = bytes(value)
        nested = list(iter_proto_strings(chunk, depth=depth + 1, max_depth=max_depth))
        if nested:
            yield from nested
            continue
        try:
            text = chunk.decode("utf-8").strip()
        except UnicodeDecodeError:
            continue
        if text and not _looks_like_noise(text):
            yield text


def proto_payload_to_events(payload: bytes) -> list[dict[str, Any]]:
    """Turn one Connect payload into shim transport events (schema-first, heuristic fallback)."""
    target = find_interaction_update_payload(payload) or payload
    schema_events = decode_interaction_update(target)
    if schema_events:
        return schema_events

    events: list[dict[str, Any]] = []
    for snippet in iter_proto_strings(payload):
        if snippet:
            events.append({"type": "text", "text": snippet})
    return events


def proto_payload_to_text_events(
    payload: bytes,
    seen: set[str],
    *,
    cumulative: list[str],
) -> list[dict[str, Any]]:
    """Backward-compatible text-only projection of proto_payload_to_events."""
    events: list[dict[str, Any]] = []
    for event in proto_payload_to_events(payload):
        event_type = str(event.get("type") or "")
        if event_type == "text":
            snippet = str(event.get("text") or "")
            if not snippet or snippet in seen:
                continue
            seen.add(snippet)
            cumulative.append(snippet)
            events.append({"type": "text", "text": snippet})
        else:
            events.append(event)
    return events
