"""Live tests for the cursor-agent (headless Cursor CLI) inference route.

Exercises the full BYOK surface area through cursor-auto: /v1/responses (sync,
SSE, WebSocket), /v1/responses/compact, /v1/chat/completions, desktop input
fixtures, and previous_response_id history.
"""

from __future__ import annotations

import json
import shutil

import pytest

from codex_shim import integration_harness as harness
from codex_shim.desktop_validate import (
    assert_image_generation_action,
    assert_local_shell_action,
    assert_web_search_action,
)
from codex_shim.settings import ModelSettings
from codex_shim.translate import validate_responses_input

pytestmark = pytest.mark.live

CURSOR_TIMEOUT = 600


@pytest.fixture(scope="session")
def cursor_route(byok_matrix: dict):
    route = byok_matrix.get("cursor")
    if route is None:
        pytest.skip("No visible cursor BYOK model (set CODEX_SHIM_LIVE_SLUG_CURSOR or run: codex-shim configure cursor)")
    if not route.is_cursor_cli:
        pytest.skip(f"CODEX_SHIM_LIVE_SLUG_CURSOR={route.slug!r} is not a cursor-agent CLI route")
    return route


@pytest.fixture(scope="session")
def require_cursor_cli():
    if shutil.which("cursor") is None:
        pytest.skip("cursor CLI not on PATH")


@pytest.fixture(autouse=True)
def ensure_shim_before_cursor_network_test(shim_port: int, request):
    """Cursor CLI turns are slow; skip network tests when the daemon is down."""
    if "shim_port" not in request.fixturenames or "cursor_route" not in request.fixturenames:
        return
    if request.node.name in {
        "test_cursor_auto_configured_in_settings",
        "test_cursor_agent_visible_in_model_settings",
    }:
        return
    if not harness.shim_reachable(shim_port):
        pytest.skip(
            f"Shim not reachable at {harness.shim_base_url(shim_port)}/health "
            "(start with: codex-shim start)"
        )


def _validate_fixture_input_actions(fixture_name: str) -> None:
    fixture = harness.load_desktop_fixture(fixture_name)
    for item in fixture.get("input") or []:
        if not isinstance(item, dict):
            continue
        action = item.get("action")
        if not isinstance(action, dict):
            continue
        item_type = item.get("type")
        if item_type == "web_search_call":
            assert_web_search_action(action)
        elif item_type == "local_shell_call":
            assert_local_shell_action(action)
        elif item_type == "image_generation_call":
            assert_image_generation_action(action)


def _assert_cursor_fixture_live(shim_port: int, slug: str, fixture_name: str) -> None:
    _validate_fixture_input_actions(fixture_name)
    fixture = harness.load_desktop_fixture(fixture_name)
    body = {
        "model": slug,
        "input": list(fixture.get("input") or [])
        + [{"role": "user", "content": [{"type": "input_text", "text": "continue"}]}],
        "stream": False,
        "max_output_tokens": 128,
    }
    validate_responses_input(body)
    payload = harness.post_json(
        harness.responses_url(shim_port),
        body,
        headers={"session_id": f"live-cursor-fixture-{fixture_name}"},
        label=f"Cursor fixture {fixture_name}",
        timeout=CURSOR_TIMEOUT,
    )
    harness.validate_accepted_response(payload)


def test_cursor_auto_configured_in_settings(settings_path, cursor_route):
    data = json.loads(settings_path.read_text())
    rows = [row for row in data.get("models", []) if isinstance(row, dict) and row.get("id") == "cursor-auto"]
    assert rows, "expected cursor-auto row in ~/.codex-shim/models.json"
    row = rows[0]
    assert row.get("model") == "auto"
    assert row.get("provider") == "cursor-agent"
    assert cursor_route.slug == "cursor-auto"
    assert cursor_route.model == "auto"
    assert cursor_route.display_name == "Cursor Auto"


def test_cursor_agent_simple_turn(shim_port: int, cursor_route, require_cursor_cli):
    payload = harness.run_byok_simple_turn(shim_port, cursor_route, timeout=CURSOR_TIMEOUT)
    assert payload.get("status") == "completed"
    assert payload.get("model") == "cursor-auto"


def test_cursor_agent_streaming_turn(shim_port: int, cursor_route, require_cursor_cli):
    completed = harness.post_json_streaming(
        harness.responses_url(shim_port),
        {
            "model": cursor_route.slug,
            "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: OK"}]}],
            "stream": True,
            "max_output_tokens": 32,
        },
        headers={"session_id": f"live-cursor-stream-{cursor_route.slug}"},
        label=f"Cursor streaming ({cursor_route.slug})",
        collect_output_text=True,
        timeout=CURSOR_TIMEOUT,
    )
    harness.validate_completed_response(completed)


def test_cursor_agent_ws_streaming(shim_port: int, cursor_route, require_cursor_cli):
    harness.run_ws_streaming(shim_port, cursor_route, require_deltas=False, timeout=CURSOR_TIMEOUT)


def test_cursor_agent_compact_emulated(shim_port: int, cursor_route, require_cursor_cli):
    if cursor_route.capabilities.compact_behavior == "unsupported":
        pytest.skip(f"{cursor_route.slug} does not support compact")
    item_type, summary = harness.run_byok_compact(shim_port, cursor_route, timeout=CURSOR_TIMEOUT)
    assert item_type in {"context_compaction", "compaction"}
    assert summary.strip()


def test_cursor_agent_visible_in_model_settings(settings_path, require_cursor_cli):
    models = ModelSettings(settings_path).load()
    match = [model for model in models if model.slug == "cursor-auto"]
    assert match, "cursor-auto should be visible when configured"
    model = match[0]
    assert model.provider == "cursor-agent"
    assert model.is_cursor_cli
    assert model.unavailable_reason is None


def test_cursor_agent_chat_completions(shim_port: int, cursor_route, require_cursor_cli):
    payload = harness.post_json(
        f"{harness.shim_base_url(shim_port)}/v1/chat/completions",
        {
            "model": cursor_route.slug,
            "messages": [{"role": "user", "content": "Reply with exactly: OK"}],
            "stream": False,
            "max_tokens": 32,
        },
        headers={"session_id": f"live-cursor-chat-{cursor_route.slug}"},
        label=f"Cursor chat/completions ({cursor_route.slug})",
        timeout=CURSOR_TIMEOUT,
    )
    choices = payload.get("choices")
    assert isinstance(choices, list) and choices
    message = choices[0].get("message") or {}
    assert message.get("content")


def test_cursor_agent_simple_history(shim_port: int, cursor_route, require_cursor_cli):
    session_headers = {"session_id": f"live-cursor-history-{cursor_route.slug}"}
    first = harness.post_json(
        harness.responses_url(shim_port),
        {
            "model": cursor_route.slug,
            "input": [{"role": "user", "content": [{"type": "input_text", "text": "Say hello in one word"}]}],
            "stream": False,
            "max_output_tokens": 32,
        },
        headers=session_headers,
        label="Cursor simple history first",
        timeout=CURSOR_TIMEOUT,
    )
    harness.validate_completed_response(first)
    second = harness.post_json(
        harness.responses_url(shim_port),
        {
            "model": cursor_route.slug,
            "previous_response_id": first.get("id"),
            "input": [{"role": "user", "content": [{"type": "input_text", "text": "ack"}]}],
            "stream": False,
            "max_output_tokens": 32,
        },
        headers=session_headers,
        label="Cursor simple history second",
        timeout=CURSOR_TIMEOUT,
    )
    harness.validate_history_response(first, second)


@pytest.mark.skip(reason="Cursor Agent CLI hosted-tool history routinely exceeds 600s HTTP timeouts")
def test_cursor_agent_hosted_tool_history(shim_port: int, cursor_route, require_cursor_cli):
    info = harness.run_byok_history(shim_port, cursor_route, timeout=CURSOR_TIMEOUT)
    assert info["previous_response_id"]
    assert info["compact_item_type"] in {"context_compaction", "compaction"}


def test_cursor_agent_streaming_history(shim_port: int, cursor_route, require_cursor_cli):
    info = harness.run_byok_streaming_history(shim_port, cursor_route, timeout=CURSOR_TIMEOUT)
    assert info["previous_response_id"]
    assert info["compact_item_type"] in {"context_compaction", "compaction"}


def test_cursor_agent_reasoning_roundtrip(shim_port: int, cursor_route, require_cursor_cli):
    if cursor_route.thinking_behavior == "drop":
        pytest.skip(f"{cursor_route.slug} drops reasoning on the wire")
    _assert_cursor_fixture_live(shim_port, cursor_route.slug, "reasoning_turn.json")


@pytest.fixture(params=harness.DESKTOP_INPUT_FIXTURES)
def cursor_desktop_fixture_name(request) -> str:
    return request.param


_SLOW_CURSOR_FIXTURES = frozenset(
    {"tool_heavy_turn.json", "tool_search_turn.json", "compaction_turn.json"}
)


def test_cursor_agent_desktop_fixture(
    shim_port: int, cursor_route, require_cursor_cli, cursor_desktop_fixture_name: str
):
    if cursor_desktop_fixture_name == "image_gen_turn.json":
        if not cursor_route.capabilities.supports_image_generation:
            pytest.skip(f"{cursor_route.slug} does not support image generation")
    if cursor_desktop_fixture_name in _SLOW_CURSOR_FIXTURES:
        pytest.skip(f"{cursor_desktop_fixture_name} is too slow for cursor-agent live CI (>600s)")
    _assert_cursor_fixture_live(shim_port, cursor_route.slug, cursor_desktop_fixture_name)
