"""Heuristic input-token estimation for routing fit-checks.

Approximate by design: only used to avoid routing an oversized context to a
model whose ``max_context_limit`` cannot fit it. Never displayed to users or
billed — a precise tokenizer is not worth the dependency for a routing guard.
"""
from __future__ import annotations

from typing import Any

_DEFAULT_PER_IMAGE_TOKENS = 768


def _walk_text(obj: Any) -> tuple[int, int]:
    """Return (char_count, image_count) accumulated from a nested structure."""
    chars = 0
    images = 0
    if isinstance(obj, str):
        chars += len(obj)
    elif isinstance(obj, dict):
        if str(obj.get("type") or "") in {"input_image", "image_url"} or "image_url" in obj:
            images += 1
        for value in obj.values():
            c, i = _walk_text(value)
            chars += c
            images += i
    elif isinstance(obj, list):
        for value in obj:
            c, i = _walk_text(value)
            chars += c
            images += i
    return chars, images


def estimate_input_tokens(body: Any, *, per_image_tokens: int = _DEFAULT_PER_IMAGE_TOKENS) -> int:
    """Rough input-token estimate: ~chars/4 over all input/messages text plus a
    flat per-image token cost. Returns 0 for non-dict bodies."""
    if not isinstance(body, dict):
        return 0
    chars = 0
    images = 0
    for key in ("input", "messages"):
        c, i = _walk_text(body.get(key))
        chars += c
        images += i
    return chars // 4 + images * per_image_tokens
