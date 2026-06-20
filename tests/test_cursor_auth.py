from __future__ import annotations

import base64
import json

from codex_shim.providers.cursor_agent.auth import (
    cursor_access_token_expired,
    cursor_access_token_expiry,
)


def _jwt(payload: dict) -> str:
    body = base64.urlsafe_b64encode(json.dumps(payload).encode("utf-8")).decode("ascii").rstrip("=")
    return f"header.{body}.signature"


def test_expiry_reads_jwt_exp_claim():
    now = 1_700_000_000
    fresh = _jwt({"exp": now + 3600})
    assert cursor_access_token_expiry(fresh) == now + 3600
    assert cursor_access_token_expired(fresh, now=now) is False


def test_expired_when_exp_in_past_or_within_leeway():
    now = 1_700_000_000
    stale = _jwt({"exp": now - 10})
    soon = _jwt({"exp": now + 30})  # within the 60s default leeway
    assert cursor_access_token_expired(stale, now=now) is True
    assert cursor_access_token_expired(soon, now=now) is True
    # leeway is configurable
    assert cursor_access_token_expired(soon, leeway_s=0.0, now=now) is False


def test_opaque_token_without_exp_treated_as_unknown_valid():
    now = 1_700_000_000
    assert cursor_access_token_expiry("opaque-not-a-jwt") is None
    assert cursor_access_token_expired("opaque-not-a-jwt", now=now) is False
    # a JWT-shaped string whose payload is not valid JSON also yields no exp
    assert cursor_access_token_expiry("a.b.c") is None


def test_missing_token_is_expired():
    assert cursor_access_token_expired(None) is True
    assert cursor_access_token_expired("") is True
