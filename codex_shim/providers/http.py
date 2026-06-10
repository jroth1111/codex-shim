"""Shared HTTP plumbing for BYOK provider transports: URLs and auth headers."""
from __future__ import annotations

import re
from typing import Any
from urllib.parse import urljoin

from ..settings import ShimModel
from .auth_tokens import resolve_bearer_token

_VERSIONED_BASE_RE = re.compile(r"(?:^|/)v\d+$")


def join_url(base_url: str, endpoint: str) -> str:
    base = base_url.rstrip("/")
    if _VERSIONED_BASE_RE.search(base):
        return base + endpoint
    if endpoint == "/messages":
        return base + "/v1/messages"
    return urljoin(base + "/", "v1" + endpoint)


def openai_headers(route: ShimModel) -> dict[str, str]:
    headers = {"Content-Type": "application/json", **route.extra_headers}
    token = route.api_key
    if not token:
        try:
            token = resolve_bearer_token(route.slug, route.raw if isinstance(route.raw, dict) else {})
        except RuntimeError:
            token = ""
    if token:
        headers.setdefault("Authorization", f"Bearer {token}")
    return headers


def anthropic_text(payload: Any) -> str:
    if not isinstance(payload, dict):
        return ""
    parts = [
        str(block.get("text") or "")
        for block in (payload.get("content") or [])
        if isinstance(block, dict) and block.get("type") == "text"
    ]
    return "".join(parts)


def anthropic_headers(route: ShimModel) -> dict[str, str]:
    headers = {
        "Content-Type": "application/json",
        "anthropic-version": "2023-06-01",
        **route.extra_headers,
    }
    token = route.api_key
    if not token:
        try:
            token = resolve_bearer_token(route.slug, route.raw if isinstance(route.raw, dict) else {})
        except RuntimeError:
            token = ""
    if token:
        headers.setdefault("x-api-key", token)
    return headers


def normalize_roles(messages: list[dict]) -> list[dict]:
    result = []
    for message in messages:
        if isinstance(message, dict):
            message = dict(message)
            if message.get("role") == "developer":
                message["role"] = "system"
        result.append(message)
    return result
