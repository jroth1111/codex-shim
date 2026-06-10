from __future__ import annotations

from codex_shim.providers.auth_tokens import auth_command_for_route, resolve_bearer_token


def test_auth_command_for_route_parses_camel_case():
    spec = auth_command_for_route({"authCommand": "echo", "authArgs": ["token"]})
    assert spec == ("echo", ["token"])


def test_resolve_bearer_token_prefers_api_key():
    token = resolve_bearer_token("slug", {}, api_key="static-key")
    assert token == "static-key"


def test_resolve_bearer_token_runs_auth_command(tmp_path, monkeypatch):
    script = tmp_path / "mint.sh"
    script.write_text('#!/bin/sh\nprintf "minted-token"\n')
    script.chmod(0o755)
    token = resolve_bearer_token("slug", {"auth_command": str(script)})
    assert token == "minted-token"
    cached = resolve_bearer_token("slug", {"auth_command": str(script)})
    assert cached == "minted-token"
