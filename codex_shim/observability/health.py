"""Per-provider circuit-breaker health store.

The gateway records every turn's outcome here (single writer); the dispatcher
and router read :meth:`should_skip` to stop sending traffic to a provider the
breaker has opened. This is deliberately a sibling of ``access_log``/``events``
fed from the same orchestration point — observability stays one-directional:
``access_log`` never imports routing, and this module is not fed from inside the
logging path.
"""
from __future__ import annotations

import time
from collections import deque
from dataclasses import dataclass


@dataclass(frozen=True)
class ProviderHealth:
    provider: str
    state: str  # "closed" | "open" | "half_open"
    failure_rate: float
    sample_count: int
    p95_latency_ms: int | None
    consecutive_failures: int
    opened_at: float | None


# Statuses that count as a provider failure for breaker purposes. 429 is
# included deliberately: a provider that is hard rate-limiting is a primary
# failover trigger, so it must also be able to trip the breaker — otherwise we
# keep selecting it as primary and failing over every turn.
_FAILURE_STATUSES = frozenset({429, 500, 502, 503, 504})


def _is_failure(status: int, outcome: str) -> bool:
    if outcome in {"error", "exhausted_retries", "upstream_error"}:
        return True
    return status in _FAILURE_STATUSES or status >= 500


class ProviderHealthStore:
    """In-process, time-windowed failure tracker. Single-writer safe (aiohttp
    runs one event loop per worker). No persistence."""

    def __init__(
        self,
        *,
        window_s: float = 60.0,
        failure_threshold: float = 0.5,
        min_samples: int = 8,
        cooldown_s: float = 30.0,
        consecutive_failure_threshold: int = 4,
    ) -> None:
        self._window_s = window_s
        self._failure_threshold = failure_threshold
        self._min_samples = min_samples
        self._cooldown_s = cooldown_s
        self._consecutive_failure_threshold = max(1, consecutive_failure_threshold)
        # Each sample is (timestamp, status, provider_ms, failed). The failed bit
        # is computed once via _is_failure so the windowed open-calc, the rate in
        # get(), and the consecutive counter all share one failure definition.
        self._samples: dict[str, deque[tuple[float, int, int, bool]]] = {}
        self._state: dict[str, str] = {}
        self._opened_at: dict[str, float] = {}
        self._consecutive_failures: dict[str, int] = {}

    def _refresh(self, provider: str, now: float) -> None:
        # An open breaker cools down to half-open after cooldown_s, allowing one
        # probe turn through to test recovery.
        if self._state.get(provider, "closed") == "open":
            opened = self._opened_at.get(provider)
            if opened is not None and now - opened >= self._cooldown_s:
                self._state[provider] = "half_open"

    def record(
        self,
        *,
        provider: str,
        status: int = 200,
        provider_ms: int = 0,
        outcome: str = "ok",
        now: float | None = None,
    ) -> None:
        current = now if now is not None else time.time()
        failed = _is_failure(status, outcome)
        samples = self._samples.setdefault(provider, deque())
        samples.append((current, int(status), int(provider_ms), failed))
        cutoff = current - self._window_s
        while samples and samples[0][0] < cutoff:
            samples.popleft()
        self._refresh(provider, current)

        self._consecutive_failures[provider] = (
            self._consecutive_failures.get(provider, 0) + 1 if failed else 0
        )

        state = self._state.get(provider, "closed")
        if state == "half_open":
            # A probe turn resolves the half-open state.
            self._state[provider] = "open" if failed else "closed"
            if failed:
                self._opened_at[provider] = current
            return
        # Consecutive-failure fast path: open immediately once a provider strings
        # together enough hard failures, regardless of window volume. Codex
        # Desktop is mostly serial, so the windowed rate below may never reach
        # min_samples within window_s — without this the breaker is inert for the
        # common case.
        if failed and self._consecutive_failures[provider] >= self._consecutive_failure_threshold:
            self._state[provider] = "open"
            self._opened_at[provider] = current
            return
        if state == "closed" and len(samples) >= self._min_samples:
            failures = sum(1 for sample in samples if sample[3])
            if failures / len(samples) >= self._failure_threshold:
                self._state[provider] = "open"
                self._opened_at[provider] = current

    def should_skip(self, provider: str, *, now: float | None = None) -> bool:
        current = now if now is not None else time.time()
        self._refresh(provider, current)
        return self._state.get(provider, "closed") == "open"

    def get(self, provider: str, *, now: float | None = None) -> ProviderHealth:
        current = now if now is not None else time.time()
        self._refresh(provider, current)
        samples = self._samples.get(provider, deque())
        total = len(samples)
        failures = sum(1 for sample in samples if sample[3])
        rate = failures / total if total else 0.0
        latencies = sorted(ms for _, _, ms, _ in samples if ms > 0)
        p95 = latencies[min(len(latencies) - 1, int(len(latencies) * 0.95))] if latencies else None
        return ProviderHealth(
            provider=provider,
            state=self._state.get(provider, "closed"),
            failure_rate=rate,
            sample_count=total,
            p95_latency_ms=p95,
            consecutive_failures=self._consecutive_failures.get(provider, 0),
            opened_at=self._opened_at.get(provider),
        )

    def reset(self, provider: str | None = None) -> None:
        if provider is None:
            self._samples.clear()
            self._state.clear()
            self._opened_at.clear()
            self._consecutive_failures.clear()
            return
        self._samples.pop(provider, None)
        self._state.pop(provider, None)
        self._opened_at.pop(provider, None)
        self._consecutive_failures.pop(provider, None)
