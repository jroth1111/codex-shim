from __future__ import annotations

from codex_shim.thinking import decode_thinking_payload, encode_thinking_payload


def test_thinking_payload_roundtrips_shared_codec():
    payload = {"type": "thinking", "thinking": "plan", "signature": "sig"}
    encoded = encode_thinking_payload(payload)
    assert encoded.startswith("anthropic-thinking-v1:")
    assert decode_thinking_payload(encoded) == payload


def test_thinking_payload_decode_rejects_unknown_blob():
    assert decode_thinking_payload("not-a-shim-blob") is None


def test_is_signed_thinking_block_requires_non_empty_signature():
    from codex_shim.thinking import is_signed_thinking_block, reasoning_encrypted_content

    assert is_signed_thinking_block({"type": "thinking", "thinking": "plan", "signature": "sig"}) is True
    assert is_signed_thinking_block({"type": "thinking", "thinking": "plan", "signature": ""}) is False
    assert is_signed_thinking_block({"type": "thinking", "thinking": "plan", "signature": "   "}) is False
    assert is_signed_thinking_block({"type": "redacted_thinking", "data": "opaque"}) is True
    assert reasoning_encrypted_content({"type": "thinking", "thinking": "plan", "signature": ""}) is None
    assert reasoning_encrypted_content({"type": "thinking", "thinking": "plan", "signature": "sig"}) is not None
