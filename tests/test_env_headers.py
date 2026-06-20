from __future__ import annotations

from codex_shim.providers.http import anthropic_headers, env_http_headers, openai_headers
from codex_shim.settings import ShimModel


def _route(raw, provider="openai"):
    return ShimModel(slug="x", model="m", display_name="d", provider=provider, base_url="http://x/v1", raw=raw)


def test_env_http_headers_resolve_from_env(monkeypatch):
    monkeypatch.setenv("MY_HDR_TOKEN", "secret-value")
    route = _route({"env_http_headers": {"X-Custom-Header": "MY_HDR_TOKEN"}})
    assert env_http_headers(route) == {"X-Custom-Header": "secret-value"}
    assert openai_headers(route)["X-Custom-Header"] == "secret-value"


def test_env_http_headers_unset_omitted(monkeypatch):
    monkeypatch.delenv("UNSET_VAR", raising=False)
    assert env_http_headers(_route({"env_http_headers": {"X-Missing": "UNSET_VAR"}})) == {}


def test_env_http_headers_camelcase_alias(monkeypatch):
    monkeypatch.setenv("CAMEL", "cv")
    assert env_http_headers(_route({"envHttpHeaders": {"X-C": "CAMEL"}})) == {"X-C": "cv"}


def test_env_http_headers_merged_into_anthropic(monkeypatch):
    monkeypatch.setenv("ANTHROPIC_HDR", "av")
    route = _route({"env_http_headers": {"X-A": "ANTHROPIC_HDR"}}, provider="anthropic")
    assert anthropic_headers(route)["X-A"] == "av"
