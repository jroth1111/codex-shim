"""Live Tier B BYOK integration tests (one slug per provider family)."""

from __future__ import annotations

import pytest

from codex_shim import integration_harness as harness

pytestmark = pytest.mark.live


@pytest.fixture(params=harness.LIVE_BYOK_FAMILIES)
def byok_family(request, byok_matrix: dict):
    family = request.param
    route = byok_matrix.get(family)
    if route is None:
        pytest.skip(f"No visible BYOK model for family {family!r}")
    return family, route


def test_byok_simple_turn(shim_port: int, byok_family):
    _family, route = byok_family
    payload = harness.run_byok_simple_turn(shim_port, route)
    assert payload.get("status") == "completed"


def test_byok_history_hosted_tools(shim_port: int, byok_family):
    family, route = byok_family
    if family == "cursor":
        pytest.skip("Cursor Agent CLI hosted-tool history routinely exceeds 600s HTTP timeouts")
    info = harness.run_byok_history(shim_port, route)
    assert info["previous_response_id"]
    assert info["compact_item_type"] in {"context_compaction", "compaction"}


def test_byok_streaming_history(shim_port: int, byok_family):
    _family, route = byok_family
    info = harness.run_byok_streaming_history(shim_port, route)
    assert info["previous_response_id"]
    assert info["compact_item_type"] in {"context_compaction", "compaction"}


def test_byok_compact_emulated(shim_port: int, byok_family):
    _family, route = byok_family
    if route.capabilities.compact_behavior == "unsupported":
        pytest.skip(f"{route.slug} does not support compact")
    item_type, summary = harness.run_byok_compact(shim_port, route)
    assert item_type in {"context_compaction", "compaction"}
    assert summary.strip()


def test_byok_ws_streaming(shim_port: int, byok_family):
    _family, route = byok_family
    harness.run_ws_streaming(shim_port, route)


def test_byok_fixture_reasoning_roundtrip(shim_port: int, byok_family):
    _family, route = byok_family
    if route.thinking_behavior == "drop":
        pytest.skip(f"{route.slug} drops reasoning on the wire")
    completed = harness.post_fixture_turn(
        shim_port,
        route.slug,
        "reasoning_turn.json",
        stream=False,
        session_id=f"live-reasoning-{route.slug}",
        extra_input=[{"role": "user", "content": [{"type": "input_text", "text": "continue"}]}],
    )
    harness.validate_completed_response(completed)
