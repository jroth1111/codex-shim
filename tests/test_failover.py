from __future__ import annotations

import json
import sys

from codex_shim.observability.health import ProviderHealthStore
from codex_shim.providers.cursor_transports import is_cursor_start_failure
from codex_shim.routing import build_failover_plan, failover_enabled
from codex_shim.routing.discovery import by_slug_or_model
from codex_shim.routing.service import resolve_model_route
from codex_shim.settings import ModelSettings


def _settings(tmp_path, models, *, failover=None):
    data = {"models": models}
    if failover is not None:
        data["failover"] = failover
    path = tmp_path / "models.json"
    path.write_text(json.dumps(data))
    return path


def _openai(slug, provider="openai", **extra):
    row = {"id": slug, "model": slug, "display_name": slug, "provider": provider,
           "base_url": "http://x/v1", "api_key": "secret"}
    row.update(extra)
    return row


def test_failover_disabled_by_default(tmp_path, monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_ENABLED", raising=False)
    path = _settings(tmp_path, [_openai("a"), _openai("b")])
    assert failover_enabled({}, path) is False


def test_failover_enabled_via_env_or_body(tmp_path, monkeypatch):
    path = _settings(tmp_path, [_openai("a"), _openai("b")])
    monkeypatch.setenv("CODEX_SHIM_FAILOVER_ENABLED", "1")
    assert failover_enabled({}, path) is True
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_ENABLED")
    assert failover_enabled({"allow_fallback": "true"}, path) is True
    assert failover_enabled({"allow_fallback": "false"}, path) is False


def test_explicit_chain_is_respected(tmp_path, monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_ENABLED", raising=False)
    path = _settings(
        tmp_path,
        [_openai("a"), _openai("b"), _openai("c")],
        failover={"enabled": True, "chains": {"a": ["c", "b"]}},
    )
    settings = ModelSettings(path)
    route = by_slug_or_model(settings, "a")
    plan = build_failover_plan(settings, route, {}, health=None)
    assert plan.enabled is True
    assert [h.route.slug for h in plan.hops] == ["c", "b"]
    assert all(h.reason == "configured_chain" for h in plan.hops)


def test_discovery_walk_same_provider_preferred(tmp_path, monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_ENABLED", raising=False)
    monkeypatch.setenv("CODEX_SHIM_DISABLE_CHATGPT", "1")  # isolate to BYOK models
    path = _settings(tmp_path, [_openai("a"), _openai("b"), _openai("c", provider="anthropic", base_url="http://y")])
    settings = ModelSettings(path)
    route = by_slug_or_model(settings, "a")
    plan = build_failover_plan(settings, route, {}, health=None)
    slugs = [h.route.slug for h in plan.hops]
    # Same-provider (openai) candidates come before the anthropic one.
    assert slugs.index("b") < slugs.index("c")
    assert all(h.reason == "discovery" for h in plan.hops)


def test_plan_skips_breaker_open_providers(tmp_path, monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_ENABLED", raising=False)
    monkeypatch.setenv("CODEX_SHIM_DISABLE_CHATGPT", "1")  # isolate to BYOK models
    path = _settings(
        tmp_path,
        [_openai("a"), _openai("b"), _openai("c", provider="anthropic", base_url="http://y")],
    )
    settings = ModelSettings(path)
    route = by_slug_or_model(settings, "a")

    # Trip the breaker for the openai provider so candidate b is skipped.
    store = ProviderHealthStore(min_samples=2, failure_threshold=0.5, cooldown_s=3600.0)
    store.record(provider="openai", status=500, outcome="error")
    store.record(provider="openai", status=500, outcome="error")
    assert store.should_skip("openai") is True

    plan = build_failover_plan(settings, route, {}, health=store)
    slugs = [h.route.slug for h in plan.hops]
    assert "b" not in slugs  # openai, breaker open
    assert "c" in slugs  # anthropic, healthy


def test_failover_chain_does_not_mix_delegate_and_mapped(tmp_path, monkeypatch):
    # A delegate (cursor) primary must not fail over to a mapped (openai) route:
    # different execution contract (delegate owns its agent loop). Only another
    # delegate route is an eligible hop.
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_ENABLED", raising=False)
    monkeypatch.setenv("CODEX_SHIM_DISABLE_CHATGPT", "1")
    cursor_row = {
        "id": "cursor-a", "model": "default[]", "display_name": "Cursor A",
        "provider": "cursor-agent", "command": sys.executable,
    }
    openai_row = _openai("openai-b")
    path = _settings(tmp_path, [cursor_row, openai_row])
    settings = ModelSettings(path)
    route = by_slug_or_model(settings, "cursor-a")
    plan = build_failover_plan(settings, route, {}, health=None)
    slugs = [h.route.slug for h in plan.hops]
    assert "openai-b" not in slugs  # mapped excluded from a delegate primary


def test_router_ranked_feeds_failover_order(tmp_path, monkeypatch):
    # When the Auto Router ranked candidates for this turn, failover must reuse
    # that order instead of the arbitrary discovery walk.
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_ENABLED", raising=False)
    monkeypatch.setenv("CODEX_SHIM_DISABLE_CHATGPT", "1")
    path = _settings(tmp_path, [_openai("a"), _openai("b"), _openai("c")])
    settings = ModelSettings(path)
    route = by_slug_or_model(settings, "a")
    ranked = [by_slug_or_model(settings, "c"), by_slug_or_model(settings, "b")]
    plan = build_failover_plan(settings, route, {}, health=None, router_ranked=ranked)
    assert [h.route.slug for h in plan.hops] == ["c", "b"]
    assert all(h.reason == "router_ranked" for h in plan.hops)


def test_failover_hop_policy_fails_fast_but_keeps_pre_first_byte():
    from codex_shim.gateway.responses import _failover_hop_policy
    from codex_shim.routing.service import RoutingPolicy

    base = RoutingPolicy(max_retries=3, pre_first_byte_stream_failover=True)
    hop = _failover_hop_policy(base)
    assert hop is not None
    assert hop.max_retries == 0  # no per-hop retry/backoff stacking
    assert hop.pre_first_byte_stream_failover is True  # streaming hops still roll forward
    assert _failover_hop_policy(None) is None


def test_route_policy_enables_stream_failover_when_failover_on(tmp_path, monkeypatch):
    # The critical wiring: failover enabled -> the policy turns on pre-first-byte
    # stream failover, so streaming Desktop turns can actually fail over (the
    # gateway requires this flag for stream:true).
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_ENABLED", raising=False)
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_STREAM", raising=False)
    monkeypatch.setenv("CODEX_SHIM_DISABLE_CHATGPT", "1")
    path = _settings(tmp_path, [_openai("a"), _openai("b")], failover={"enabled": True})
    settings = ModelSettings(path)
    res = resolve_model_route(settings, {"model": "a", "stream": True})
    assert res.policy.fallback_enabled is True
    assert res.policy.pre_first_byte_stream_failover is True


def test_route_policy_stream_failover_opt_out(tmp_path, monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_ENABLED", raising=False)
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_STREAM", raising=False)
    monkeypatch.setenv("CODEX_SHIM_DISABLE_CHATGPT", "1")
    path = _settings(tmp_path, [_openai("a"), _openai("b")], failover={"enabled": True, "stream": False})
    settings = ModelSettings(path)
    res = resolve_model_route(settings, {"model": "a", "stream": True})
    assert res.policy.fallback_enabled is True
    assert res.policy.pre_first_byte_stream_failover is False  # explicit opt-out honored


def test_route_policy_no_failover_no_stream_failover(tmp_path, monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_FAILOVER_ENABLED", raising=False)
    monkeypatch.setenv("CODEX_SHIM_DISABLE_CHATGPT", "1")
    path = _settings(tmp_path, [_openai("a"), _openai("b")])  # no failover block
    settings = ModelSettings(path)
    res = resolve_model_route(settings, {"model": "a", "stream": True})
    assert res.policy.fallback_enabled is False
    assert res.policy.pre_first_byte_stream_failover is False


def test_is_cursor_start_failure_classifies_launch_errors():
    assert is_cursor_start_failure(
        Exception("Failed to start Cursor Agent command 'cursor': [Errno 2] No such file or directory")
    ) is True
    # Mid-turn failures (subprocess ran) are NOT start failures.
    assert is_cursor_start_failure(Exception("Cursor Agent command exited 1")) is False
    assert is_cursor_start_failure(Exception("Timed out waiting for Cursor Agent output")) is False

