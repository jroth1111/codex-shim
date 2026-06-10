from __future__ import annotations

import base64
import json
from typing import Any

SHIM_ENCRYPTED_CONTENT_PREFIX = "anthropic-thinking-v1:"


def encode_thinking_payload(payload: dict[str, Any]) -> str:
    raw = json.dumps(payload, separators=(",", ":")).encode("utf-8")
    return SHIM_ENCRYPTED_CONTENT_PREFIX + base64.urlsafe_b64encode(raw).decode("ascii")


def decode_thinking_payload(encoded: Any) -> dict[str, Any] | None:
    if not isinstance(encoded, str) or not encoded.startswith(SHIM_ENCRYPTED_CONTENT_PREFIX):
        return None
    blob = encoded[len(SHIM_ENCRYPTED_CONTENT_PREFIX) :]
    try:
        raw = base64.urlsafe_b64decode(blob.encode("ascii"))
        data = json.loads(raw.decode("utf-8"))
    except Exception:
        return None
    return data if isinstance(data, dict) else None


def is_signed_thinking_block(block: dict[str, Any]) -> bool:
    """Return true when a decoded thinking block is safe to replay to Anthropic."""
    if block.get("type") == "redacted_thinking":
        return bool(str(block.get("data") or ""))
    if block.get("type") != "thinking":
        return False
    return bool(str(block.get("signature") or "").strip())


def reasoning_encrypted_content(block: dict[str, Any]) -> str | None:
    """Encode reasoning for Desktop only when the block carries a valid signature."""
    if block.get("type") == "redacted_thinking":
        return encode_thinking_payload(block)
    if block.get("type") == "thinking" and is_signed_thinking_block(block):
        return encode_thinking_payload(block)
    return None
