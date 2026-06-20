from __future__ import annotations

import pytest

from codex_shim.observability.health import ProviderHealthStore
from codex_shim.providers.dispatcher import ProviderDispatcher
from codex_shim.routing.service import RoutingPolicy
from codex_shim.settings import ShimModel


class _FakeResult:
    def __init__(self, status: int) -> None:
        self.status = status


def test_breaker_stays_closed_below_min_samples():
    store = ProviderHealthStore(min_samples=3, failure_threshold=0.5)
    # Two failures are not enough to trip (min_samples guard).
    store.record(provider="openai", status=500, outcome="error", now=1.0)
    store.record(provider="openai", status=500, outcome="error", now=2.0)
    assert store.should_skip("openai", now=3.0) is False
    assert store.get("openai", now=3.0).state == "closed"


def test_breaker_trips_on_sustained_failures():
    store = ProviderHealthStore(min_samples=3, failure_threshold=0.5, cooldown_s=30.0)
    for t in range(3):
        store.record(provider="openai", status=500, outcome="error", now=float(t))
    assert store.should_skip("openai", now=10.0) is True
    assert store.get("openai", now=10.0).state == "open"


def test_breaker_recovers_via_half_open_probe():
    store = ProviderHealthStore(min_samples=3, failure_threshold=0.5, cooldown_s=30.0)
    for t in range(3):
        store.record(provider="openai", status=500, outcome="error", now=float(t))
    assert store.get("openai", now=10.0).state == "open"
    # After cooldown the breaker is half-open: a probe success closes it.
    assert store.should_skip("openai", now=50.0) is False  # half_open is not "skip"
    assert store.get("openai", now=50.0).state == "half_open"
    store.record(provider="openai", status=200, outcome="ok", now=50.5)
    assert store.get("openai", now=51.0).state == "closed"
    assert store.should_skip("openai", now=51.0) is False


def test_half_open_probe_failure_reopens():
    store = ProviderHealthStore(min_samples=3, failure_threshold=0.5, cooldown_s=30.0)
    for t in range(3):
        store.record(provider="openai", status=500, outcome="error", now=float(t))
    # Probe fails while half-open -> reopened.
    store.record(provider="openai", status=500, outcome="error", now=50.0)
    assert store.get("openai", now=50.0).state == "open"


def test_window_prunes_old_samples():
    store = ProviderHealthStore(window_s=10.0, min_samples=2, failure_threshold=0.5)
    store.record(provider="openai", status=500, outcome="error", now=1.0)
    store.record(provider="openai", status=200, outcome="ok", now=100.0)
    store.record(provider="openai", status=200, outcome="ok", now=101.0)
    # The old failure was pruned; only recent successes remain -> closed.
    health = store.get("openai", now=102.0)
    assert health.state == "closed"
    assert health.sample_count == 2
    assert health.failure_rate == 0.0


@pytest.mark.asyncio
async def test_dispatcher_breaks_retry_loop_when_breaker_open():
    # Pre-trip the breaker using real time, since the dispatcher reads
    # should_skip() with real time.time() (no now override). With opened_at ~= now
    # and a long cooldown, the dispatcher must still see it as open.
    store = ProviderHealthStore(min_samples=2, failure_threshold=0.5, cooldown_s=3600.0)
    store.record(provider="openai", status=500, outcome="error")
    store.record(provider="openai", status=500, outcome="error")
    assert store.should_skip("openai") is True

    calls = {"n": 0}

    async def _stub_handler(request, route, body, as_responses, prepared, stream_response):
        calls["n"] += 1
        return _FakeResult(429)

    dispatcher = ProviderDispatcher(
        openai_handler=_stub_handler,
        anthropic_handler=lambda *a, **k: None,
        cursor_acp_handler=lambda *a, **k: None,
        cursor_cli_handler=lambda *a, **k: None,
        health=store,
    )
    route = ShimModel(slug="x", model="m", display_name="d", provider="openai", base_url="http://x/v1")
    policy = RoutingPolicy(max_retries=3, backoff_base_ms=0)  # would retry 4x without breaker

    stats: dict = {}
    result = await dispatcher.dispatch(object(), route, {"stream": False}, as_responses=True, policy=policy, stats=stats)

    # Breaker is open -> the loop breaks after the first attempt instead of
    # retrying up to 4 times.
    assert calls["n"] == 1
    assert result.status == 429
    assert any(r.get("action") == "circuit_open_stop" for r in stats["retry_reasons"])
