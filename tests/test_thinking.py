from __future__ import annotations

from codex_shim.thinking import decode_thinking_payload, encode_thinking_payload


def test_thinking_payload_roundtrips_shared_codec():
    payload = {"type": "thinking", "thinking": "plan", "signature": "sig"}
    encoded = encode_thinking_payload(payload)
    assert encoded.startswith("anthropic-thinking-v1:")
    assert decode_thinking_payload(encoded) == payload


def test_thinking_payload_decode_rejects_unknown_blob():
    assert decode_thinking_payload("not-a-shim-blob") is None
