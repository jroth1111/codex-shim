"""Live Tier A (ChatGPT passthrough) integration tests.

These tests hit a real codex-shim daemon and ChatGPT upstream. They do not prove
absolute fidelity (sanitization, WS re-parse vs raw relay, header allowlist); see
AUDIT_CONTRACTS.md for documented limitations.
"""

from __future__ import annotations

import pytest

from codex_shim.verification import harness

pytestmark = [pytest.mark.live, pytest.mark.tier_a]


def test_passthrough_streaming_ok(require_tier_a, shim_port: int):
    response_id, output_text = harness.run_tier_a_passthrough_streaming(shim_port)
    assert response_id.startswith("resp_")
    assert output_text == "OK"


def test_passthrough_compact_native_blob(require_tier_a, shim_port: int):
    response_id, item_type, summary = harness.run_tier_a_passthrough_compact(shim_port)
    assert response_id.startswith("resp_")
    assert item_type == "compaction_summary"
    assert summary.startswith("encrypted (")


def test_passthrough_fixture_tool_heavy_accepts(require_tier_a, shim_port: int):
    completed = harness.post_json_streaming(
        harness.responses_url(shim_port),
        harness.tier_a_tool_heavy_body(),
        headers={"session_id": "live-tier-a-tool-heavy"},
        label="Tier A tool_heavy",
    )
    harness.validate_completed_response(completed)


def test_passthrough_previous_response_id_stripped(require_tier_a, shim_port: int):
    first_id = harness.run_tier_a_previous_response_id_stripped(shim_port)
    assert first_id.startswith("resp_")


def test_passthrough_ws_streaming_deltas(require_tier_a, shim_port: int):
    harness.run_ws_streaming(shim_port, harness.tier_a_route(), require_deltas=False)
