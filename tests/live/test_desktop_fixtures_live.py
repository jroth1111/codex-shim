"""Live desktop fixture acceptance through real shim + upstream."""

from __future__ import annotations

import pytest

from codex_shim import integration_harness as harness
from codex_shim.desktop_validate import (
    assert_image_generation_action,
    assert_local_shell_action,
    assert_web_search_action,
)
from codex_shim.settings import CHATGPT_MODEL_SLUG
from codex_shim.translate import validate_responses_input

pytestmark = pytest.mark.live


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


def _assert_fixture_live(shim_port: int, slug: str, fixture_name: str, *, stream: bool) -> None:
    _validate_fixture_input_actions(fixture_name)
    fixture = harness.load_desktop_fixture(fixture_name)
    body = {
        "model": slug,
        "input": list(fixture.get("input") or [])
        + [{"role": "user", "content": [{"type": "input_text", "text": "continue"}]}],
        "stream": stream,
    }
    validate_responses_input(body)
    if stream:
        completed = harness.post_json_streaming(
            harness.responses_url(shim_port),
            body,
            headers={"session_id": f"live-fixture-{fixture_name}"},
            label=f"Fixture {fixture_name}",
        )
        harness.validate_accepted_response(completed)
    else:
        payload = harness.post_json(
            harness.responses_url(shim_port),
            body,
            headers={"session_id": f"live-fixture-{fixture_name}"},
            label=f"Fixture {fixture_name}",
        )
        harness.validate_accepted_response(payload)


@pytest.fixture(params=harness.DESKTOP_INPUT_FIXTURES)
def desktop_fixture_name(request) -> str:
    return request.param


def test_tier_a_desktop_fixture(require_tier_a, shim_port: int, desktop_fixture_name: str):
    _assert_fixture_live(shim_port, CHATGPT_MODEL_SLUG, desktop_fixture_name, stream=True)


def test_byok_desktop_fixture(shim_port: int, openai_byok_slug: str, desktop_fixture_name: str):
    _assert_fixture_live(shim_port, openai_byok_slug, desktop_fixture_name, stream=False)
