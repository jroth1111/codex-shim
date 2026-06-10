from __future__ import annotations

from typing import Any


def encode_varint(value: int) -> bytes:
    if value < 0:
        raise ValueError("negative varint")
    out = bytearray()
    n = value
    while True:
        byte = n & 0x7F
        n >>= 7
        if n:
            byte |= 0x80
        out.append(byte)
        if not n:
            break
    return bytes(out)


def _field_key(field_no: int, wire_type: int) -> bytes:
    return encode_varint((field_no << 3) | wire_type)


def field_string(field_no: int, value: str) -> bytes:
    body = value.encode("utf-8")
    return _field_key(field_no, 2) + encode_varint(len(body)) + body


def field_bytes(field_no: int, value: bytes) -> bytes:
    return _field_key(field_no, 2) + encode_varint(len(value)) + value


def field_bool(field_no: int, value: bool) -> bytes:
    return _field_key(field_no, 0) + encode_varint(1 if value else 0)


def field_varint(field_no: int, value: int) -> bytes:
    return _field_key(field_no, 0) + encode_varint(value)


def field_message(field_no: int, body: bytes) -> bytes:
    return _field_key(field_no, 2) + encode_varint(len(body)) + body


def encode_bidi_request_id(request_id: str) -> bytes:
    return field_string(1, request_id)


def encode_bidi_append_request(*, request_id: str, append_seqno: int, data: bytes) -> bytes:
    """data is hex(ClientEnvelope bytes) on field 1 per aiserver.v1.BidiAppendRequest."""
    rid = encode_bidi_request_id(request_id)
    return b"".join(
        [
            field_string(1, data.hex()),
            field_message(2, rid),
            field_varint(3, append_seqno),
        ]
    )


def encode_user_message(user: dict[str, Any]) -> bytes:
    parts: list[bytes] = []
    text = user.get("text")
    if text:
        parts.append(field_string(1, str(text)))
    message_id = user.get("messageId") or user.get("message_id")
    if message_id:
        parts.append(field_string(2, str(message_id)))
    mode_value = user.get("modeProtoValue")
    if mode_value is not None:
        parts.append(field_varint(4, int(mode_value)))
    return b"".join(parts)


def encode_user_message_action(user_message: dict[str, Any]) -> bytes:
    return field_message(1, encode_user_message(user_message))


def encode_conversation_action_user_message(user_message: dict[str, Any]) -> bytes:
    return field_message(1, encode_user_message_action(user_message))


def encode_requested_model(model: dict[str, Any]) -> bytes:
    parts: list[bytes] = []
    model_id = model.get("modelId") or model.get("model_id")
    if model_id:
        parts.append(field_string(1, str(model_id)))
    if "maxMode" in model or "max_mode" in model:
        parts.append(field_bool(2, bool(model.get("maxMode", model.get("max_mode")))))
    return b"".join(parts)


def encode_mcp_tools(mcp_tools: dict[str, Any]) -> bytes:
    tools = mcp_tools.get("mcp_tools") or mcp_tools.get("mcpTools") or []
    if not isinstance(tools, list) or not tools:
        return b""
  # Empty McpTools message (no tools).
    return b""


def encode_agent_run_request(run_request: dict[str, Any]) -> bytes:
    parts: list[bytes] = []
    action = run_request.get("action") or {}
    raw_inner = action.get("action") if isinstance(action, dict) else None
    inner = raw_inner if isinstance(raw_inner, dict) else action
    if isinstance(inner, dict):
        case = inner.get("case")
        raw_value = inner.get("value")
        value = raw_value if isinstance(raw_value, dict) else {}
        if case in {"userMessageAction", "user_message_action"}:
            user_message = value.get("userMessage") or value.get("user_message") or {}
            if user_message:
                parts.append(field_message(2, encode_conversation_action_user_message(user_message)))
    requested = run_request.get("requestedModel") or run_request.get("requested_model")
    if isinstance(requested, dict):
        encoded = encode_requested_model(requested)
        if encoded:
            parts.append(field_message(9, encoded))
    mcp = run_request.get("mcpTools") or run_request.get("mcp_tools")
    if isinstance(mcp, dict):
        encoded = encode_mcp_tools(mcp)
        if encoded:
            parts.append(field_message(4, encoded))
    conv_id = run_request.get("conversationId") or run_request.get("conversation_id")
    if conv_id:
        parts.append(field_string(5, str(conv_id)))
    group_id = run_request.get("conversationGroupId") or run_request.get("conversation_group_id")
    if group_id:
        parts.append(field_string(16, str(group_id)))
    if "excludeWorkspaceContext" in run_request or "exclude_workspace_context" in run_request:
        parts.append(
            field_bool(
                12,
                bool(
                    run_request.get("excludeWorkspaceContext", run_request.get("exclude_workspace_context"))
                ),
            )
        )
    return b"".join(parts)


def encode_agent_client_message_run_request(run_request: dict[str, Any]) -> bytes:
    body = encode_agent_run_request(run_request)
    return field_message(1, body)


def encode_client_envelope_bytes(skeleton: dict[str, Any]) -> bytes:
    """Encode JSON skeleton from build_run_request_skeleton to AgentClientMessage bytes."""
    raw_envelope = skeleton.get("clientEnvelope")
    envelope = raw_envelope if isinstance(raw_envelope, dict) else skeleton
    raw_message = envelope.get("message")
    message = raw_message if isinstance(raw_message, dict) else {}
    case = message.get("case")
    raw_value = message.get("value")
    value = raw_value if isinstance(raw_value, dict) else {}
    if case not in {"runRequest", "run_request"}:
        raise ValueError(f"unsupported client envelope case: {case!r}")
    return encode_agent_client_message_run_request(value)


def extract_utf8_strings(buf: bytes, *, min_len: int = 8) -> list[str]:
    """Best-effort pull printable UTF-8 substrings from protobuf payloads (stream decode)."""
    found: list[str] = []
    i = 0
    while i < len(buf):
        if buf[i] == 0:
            i += 1
            continue
        j = i
        while j < len(buf) and 32 <= buf[j] < 127:
            j += 1
        if j - i >= min_len:
            found.append(buf[i:j].decode("ascii"))
        i = max(j, i + 1)
    return found
