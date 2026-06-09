"""Decode AgentService/Run Connect bodies captured from api2.cursor.sh."""
from __future__ import annotations

import re
import uuid
from typing import Any

from .connect_framing import parse_connect_frames
from .proto_decode import decode_fields, get_field_bytes, get_field_string, iter_proto_strings

_UUID_RE = re.compile(
    r"^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$",
    re.IGNORECASE,
)


def _connect_payload(body: bytes) -> bytes:
    buffer = bytearray()
    payloads = parse_connect_frames(body, buffer)
    if payloads:
        return payloads[0]
    if len(body) >= 5:
        length = int.from_bytes(body[1:5], "big")
        if 5 + length <= len(body):
            return body[5 : 5 + length]
    return body


def _extract_user_message_text(action_buf: bytes) -> str | None:
    fields = decode_fields(action_buf)
    nested = get_field_bytes(fields, 1)
    if not nested:
        return None
    fields = decode_fields(nested)
    nested = get_field_bytes(fields, 1)
    if not nested:
        return None
    fields = decode_fields(nested)
    nested = get_field_bytes(fields, 1)
    if not nested:
        return None
    fields = decode_fields(nested)
    return get_field_string(fields, 1)


def _uuid_strings(buf: bytes, *, max_depth: int = 8, depth: int = 0) -> list[str]:
    if depth > max_depth or not buf:
        return []
    found: list[str] = []
    try:
        fields = decode_fields(buf)
    except ValueError:
        return found
    for _field_no, wire, value in fields:
        if wire != 2 or not isinstance(value, (bytes, bytearray)):
            continue
        chunk = bytes(value)
        try:
            text = chunk.decode("utf-8").strip()
        except UnicodeDecodeError:
            text = ""
        if text and (_UUID_RE.match(text) or _is_uuid(text)):
            found.append(text)
        found.extend(_uuid_strings(chunk, max_depth=max_depth, depth=depth + 1))
    return found


def _is_uuid(value: str) -> bool:
    try:
        uuid.UUID(value)
    except ValueError:
        return False
    return True


def decode_upstream_run_body(body: bytes) -> dict[str, Any]:
    payload = _connect_payload(body)
    outer = decode_fields(payload)
    run_buf = get_field_bytes(outer, 1) or payload
    fields = decode_fields(run_buf)
    user_text = None
    action = get_field_bytes(fields, 2)
    if action:
        user_text = _extract_user_message_text(action)
    model_id = None
    model_buf = get_field_bytes(fields, 9)
    if model_buf:
        model_id = get_field_string(decode_fields(model_buf), 1)
    uuids = _uuid_strings(run_buf)
    conversation_id = get_field_string(fields, 5)
    group_id = get_field_string(fields, 16)
    latest_prompt = _extract_latest_user_prompt(run_buf)
    if latest_prompt:
        user_text = latest_prompt
    return {
        "userText": user_text,
        "latestUserPrompt": latest_prompt,
        "modelId": model_id,
        "conversationId": conversation_id,
        "conversationGroupId": group_id,
        "uuidFields": uuids,
        "payloadBytes": len(payload),
    }


def _extract_latest_user_prompt(buf: bytes) -> str | None:
    reply_markers = [
        snippet
        for snippet in iter_proto_strings(buf, max_depth=20)
        if "Reply with exactly:" in snippet
    ]
    if reply_markers:
        return reply_markers[-1]
    ignored = {"system_prompt", "default", "auto", "cli", "agent-cli"}
    candidates = [
        snippet
        for snippet in iter_proto_strings(buf, max_depth=20)
        if len(snippet) >= 8 and snippet.lower() not in ignored and not _UUID_RE.match(snippet)
    ]
    return candidates[-1] if candidates else None


def decode_upstream_run_capture(capture: dict[str, Any]) -> dict[str, Any]:
    body_hex = str(capture.get("body_hex") or "")
    body = bytes.fromhex(body_hex) if body_hex else b""
    decoded = decode_upstream_run_body(body)
    return {
        "path": capture.get("path"),
        "headers": {
            k.lower(): v
            for k, v in (capture.get("headers") or {}).items()
            if k.lower().startswith("x-cursor") or k.lower() in {"content-type", "connect-protocol-version"}
        },
        **decoded,
    }
