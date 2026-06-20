from __future__ import annotations

import asyncio
import random
from datetime import datetime, timedelta, timezone
from email.utils import format_datetime
from types import SimpleNamespace

import pytest

from codex_shim.providers.dispatcher import ProviderDispatcher, _backoff_delay_ms
from codex_shim.providers.outcome import (
    UpstreamErrorDetail,
    parse_retry_after,
    upstream_error_detail_from_response,
)
from codex_shim.routing.service import RoutingPolicy
from codex_shim.settings import ShimModel
from codex_shim.wire import PreFirstByteFailure


class _FakeUpstream:
    def __init__(self, status: int, headers: dict[str, str]) -> None:
        self.status = status
        self.headers = headers


class _FakeResult:
    def __init__(self, status: int, retry_after_ms: float | None = None) -> None:
        self.status = status
        if retry_after_ms is not None:
            self._codex_shim_upstream_error = UpstreamErrorDetail(
                status=status, retry_after_ms=retry_after_ms
            )


def test_parse_retry_after_delta_seconds_and_date():
    assert parse_retry_after({"Retry-After": "120"}) == 120_000.0
    assert parse_retry_after({"retry-after": "0"}) == 0.0

    future = datetime.now(timezone.utc) + timedelta(seconds=10)
    ra = parse_retry_after({"Retry-After": format_datetime(future, usegmt=True)})
    assert ra is not None and 0.0 < ra <= 11_000.0

    past = datetime.now(timezone.utc) - timedelta(seconds=60)
    assert parse_retry_after({"Retry-After": format_datetime(past, usegmt=True)}) == 0.0


def test_parse_retry_after_absent_or_garbage_returns_none():
    assert parse_retry_after({}) is None
    assert parse_retry_after({"Retry-After": "not-a-date-or-int"}) is None
    # case-insensitive lookup
    assert parse_retry_after({"RETRY-AFTER": "5"}) == 5_000.0


def test_upstream_error_detail_from_response_reads_headers():
    detail = upstream_error_detail_from_response(_FakeUpstream(429, {"Retry-After": "5"}))
    assert detail.status == 429
    assert detail.retry_after_ms == 5_000.0

    no_ra = upstream_error_detail_from_response(_FakeUpstream(500, {}))
    assert no_ra.status == 500
    assert no_ra.retry_after_ms is None


def test_backoff_delay_bounds_without_retry_after(monkeypatch):
    monkeypatch.setattr(random, "uniform", lambda lo, hi: lo)  # deterministic low end
    policy = RoutingPolicy(max_retries=1, backoff_base_ms=100, backoff_cap_ms=30_000)
    # attempt 0 -> expo=100, jitter low=50
    assert _backoff_delay_ms(policy, 0, None) == 50.0
    # attempt 4 -> expo=min(30000, 100*16=1600)=1600, jitter low=800
    assert _backoff_delay_ms(policy, 4, None) == 800.0


def test_backoff_delay_floors_on_retry_after(monkeypatch):
    monkeypatch.setattr(random, "uniform", lambda lo, hi: hi)  # high end of jitter
    policy = RoutingPolicy(max_retries=1, backoff_base_ms=100, backoff_cap_ms=30_000)
    detail = UpstreamErrorDetail(status=429, retry_after_ms=5_000.0)
    # expo=100 (attempt 0), jitter high=100, but Retry-After floors to 5000
    assert _backoff_delay_ms(policy, 0, detail) == 5_000.0
    # Retry-After above the cap is clamped to the cap
    big = UpstreamErrorDetail(status=429, retry_after_ms=60_000.0)
    assert _backoff_delay_ms(policy, 0, big) == 30_000.0


@pytest.mark.asyncio
async def test_dispatcher_backoff_sleeps_and_floors_on_retry_after(monkeypatch):
    sleeps: list[float] = []

    async def _fake_sleep(seconds: float) -> None:
        sleeps.append(seconds)

    monkeypatch.setattr(asyncio, "sleep", _fake_sleep)

    calls = {"n": 0}

    async def _stub_handler(request, route, body, as_responses, prepared, stream_response):
        calls["n"] += 1
        if calls["n"] == 1:
            return _FakeResult(429, retry_after_ms=2_000.0)
        return _FakeResult(200)

    dispatcher = ProviderDispatcher(
        openai_handler=_stub_handler,
        anthropic_handler=lambda *a, **k: None,
        cursor_acp_handler=lambda *a, **k: None,
        cursor_cli_handler=lambda *a, **k: None,
    )
    route = ShimModel(slug="x", model="m", display_name="d", provider="openai", base_url="http://x/v1")
    policy = RoutingPolicy(max_retries=1, backoff_base_ms=100, backoff_cap_ms=30_000)

    stats: dict = {}
    result = await dispatcher.dispatch(
        object(), route, {"stream": False}, as_responses=True, policy=policy, stats=stats
    )

    assert result.status == 200
    assert calls["n"] == 2  # initial + one retry
    assert len(sleeps) == 1
    assert sleeps[0] >= 2.0  # floored on the 2000ms Retry-After
    retry_entry = next(r for r in stats["retry_reasons"] if r.get("action") == "retry")
    assert retry_entry["backoff_ms"] >= 2_000.0


@pytest.mark.asyncio
async def test_dispatcher_sets_pre_first_byte_flag_from_policy():
    seen: dict = {}

    async def _stub_handler(request, route, body, as_responses, prepared, stream_response):
        seen["flag"] = getattr(request, "_codex_shim_pre_first_byte_failover", None)
        return _FakeResult(200)

    dispatcher = ProviderDispatcher(
        openai_handler=_stub_handler,
        anthropic_handler=lambda *a, **k: None,
        cursor_acp_handler=lambda *a, **k: None,
        cursor_cli_handler=lambda *a, **k: None,
    )
    route = ShimModel(slug="x", model="m", display_name="d", provider="openai", base_url="http://x/v1")
    # SimpleNamespace (like a real web.Request) supports arbitrary setattr;
    # a bare object() does not, which the dispatcher's try/except would swallow.
    await dispatcher.dispatch(
        SimpleNamespace(), route, {"stream": False}, as_responses=True, policy=RoutingPolicy(pre_first_byte_stream_failover=True)
    )
    assert seen["flag"] is True


@pytest.mark.asyncio
async def test_dispatcher_propagates_pre_first_byte_failure():
    async def _raising_handler(request, route, body, as_responses, prepared, stream_response):
        raise PreFirstByteFailure(status=503, reason="upstream_error")

    dispatcher = ProviderDispatcher(
        openai_handler=_raising_handler,
        anthropic_handler=lambda *a, **k: None,
        cursor_acp_handler=lambda *a, **k: None,
        cursor_cli_handler=lambda *a, **k: None,
    )
    route = ShimModel(slug="x", model="m", display_name="d", provider="openai", base_url="http://x/v1")
    # The dispatcher must NOT swallow a pre-first-byte failure -- the gateway
    # catches it to fail the streaming turn over to another provider.
    with pytest.raises(PreFirstByteFailure):
        await dispatcher.dispatch(object(), route, {"stream": True}, as_responses=True, policy=RoutingPolicy())
