from __future__ import annotations

import pytest

from codex_shim.providers.http import join_url


@pytest.mark.parametrize(
    "base, endpoint, expected",
    [
        # Already-versioned bases append the endpoint as-is (no extra /v1/).
        ("https://api.openai.com/v1", "/chat/completions", "https://api.openai.com/v1/chat/completions"),
        ("https://api.openai.com/v1/", "/chat/completions", "https://api.openai.com/v1/chat/completions"),
        # Regression: a /v<N> other than /v1 must not get a redundant /v1/ injected
        # (Volces Ark coding endpoint previously became /api/coding/v3/v1/... -> 404).
        ("https://ark.cn-beijing.volces.com/api/coding/v3", "/chat/completions", "https://ark.cn-beijing.volces.com/api/coding/v3/chat/completions"),
        ("https://example.com/v4", "/chat/completions", "https://example.com/v4/chat/completions"),
        # Bare (unversioned) host gets /v1 injected for chat completions...
        ("https://api.example.com", "/chat/completions", "https://api.example.com/v1/chat/completions"),
        # ...and the /messages fallback still versions bare Anthropic-style hosts.
        ("https://api.anthropic.com", "/messages", "https://api.anthropic.com/v1/messages"),
        # An already-versioned Anthropic base keeps its own version (no /v1/ override).
        ("https://api.anthropic.com/v1", "/messages", "https://api.anthropic.com/v1/messages"),
    ],
)
def test_join_url_handles_versioned_bases(base, endpoint, expected):
    assert join_url(base, endpoint) == expected
