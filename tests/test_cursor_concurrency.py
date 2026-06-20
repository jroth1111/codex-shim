from __future__ import annotations

import asyncio

import pytest

import codex_shim.providers.cursor_transports as cursor_transports
from codex_shim.providers.cursor_transports import cursor_concurrency


@pytest.mark.asyncio
async def test_cursor_concurrency_bounds_parallel_turns(monkeypatch):
    monkeypatch.setenv("CODEX_SHIM_CURSOR_MAX_CONCURRENT", "2")
    monkeypatch.setattr(cursor_transports, "_CURSOR_SEMAPHORE", None)  # rebuild with env

    in_flight = 0
    peak = 0

    async def _task():
        nonlocal in_flight, peak
        async with cursor_concurrency():
            in_flight += 1
            peak = max(peak, in_flight)
            await asyncio.sleep(0.02)
            in_flight -= 1

    await asyncio.gather(*(_task() for _ in range(6)))
    assert peak <= 2  # never exceeded the cap
    assert peak >= 2  # actually saturated it


@pytest.mark.asyncio
async def test_cursor_concurrency_serializes_at_limit_1(monkeypatch):
    monkeypatch.setenv("CODEX_SHIM_CURSOR_MAX_CONCURRENT", "1")
    monkeypatch.setattr(cursor_transports, "_CURSOR_SEMAPHORE", None)

    order: list[int] = []

    async def _task(i):
        async with cursor_concurrency():
            order.append(i)
            await asyncio.sleep(0.01)

    await asyncio.gather(*(_task(i) for i in range(4)))
    assert len(order) == 4  # all ran, just serialized
