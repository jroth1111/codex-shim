from __future__ import annotations

import pytest

from codex_shim.desktop_contract import (
    DESKTOP_IMAGE_GENERATION_ACTION_FIELDS,
    DESKTOP_LOCAL_SHELL_ACTION_FIELDS,
    DESKTOP_RESPONSE_ITEM_TYPES,
    DESKTOP_THREAD_SETTINGS_FIELDS,
    DESKTOP_THREAD_START_PARAM_FIELDS,
    DESKTOP_WEB_SEARCH_ACTION_FIELDS,
    DESKTOP_WEB_SEARCH_ACTION_TYPES,
    SHIM_EXTRA_RESPONSE_INPUT_TYPES,
)
from codex_shim.desktop_validate import (
    DesktopContractError,
    assert_image_generation_action,
    assert_local_shell_action,
    assert_web_search_action,
)
from codex_shim.translate import tool_call_to_response_item


def test_generated_desktop_contract_covers_known_response_items():
    assert "web_search_call" in DESKTOP_RESPONSE_ITEM_TYPES
    assert "local_shell_call" in DESKTOP_RESPONSE_ITEM_TYPES
    assert "image_generation_call" in DESKTOP_RESPONSE_ITEM_TYPES
    assert "mcp_tool_call" in SHIM_EXTRA_RESPONSE_INPUT_TYPES


def test_generated_desktop_contract_covers_thread_metadata_fields():
    assert "sandboxPolicy" in DESKTOP_THREAD_SETTINGS_FIELDS
    assert DESKTOP_THREAD_START_PARAM_FIELDS


def test_generated_desktop_contract_covers_hosted_tool_action_shapes():
    assert DESKTOP_WEB_SEARCH_ACTION_TYPES == frozenset({"search", "open_page", "find_in_page"})
    assert DESKTOP_WEB_SEARCH_ACTION_FIELDS["search"] == frozenset({"query", "queries"})
    assert "command" in DESKTOP_LOCAL_SHELL_ACTION_FIELDS
    assert DESKTOP_IMAGE_GENERATION_ACTION_FIELDS == frozenset({"prompt", "revised_prompt"})


def test_tool_call_to_response_item_web_search_matches_contract():
    item = tool_call_to_response_item(
        {"id": "call_search", "function": {"name": "web_search", "arguments": '{"query":"docs"}'}}
    )
    assert item["type"] == "web_search_call"
    assert_web_search_action(item["action"])


def test_tool_call_to_response_item_local_shell_matches_contract():
    item = tool_call_to_response_item(
        {"id": "call_shell", "function": {"name": "local_shell", "arguments": '{"command":"pwd"}'}}
    )
    assert item["type"] == "local_shell_call"
    assert_local_shell_action(item["action"])
    assert item["action"]["command"] == "pwd"


def test_tool_call_to_response_item_image_generation_shape():
    item = tool_call_to_response_item(
        {"id": "call_img", "function": {"name": "image_generation", "arguments": '{"prompt":"fox"}'}}
    )
    assert item["type"] == "image_generation_call"
    assert item["revised_prompt"] == "fox"
    assert item["action"]["prompt"] == "fox"
    assert_image_generation_action(item["action"])


def test_assert_image_generation_action_rejects_unknown_fields():
    with pytest.raises(DesktopContractError, match="unexpected fields"):
        assert_image_generation_action({"prompt": "fox", "extra": "nope"})


def test_assert_web_search_action_rejects_missing_type():
    with pytest.raises(DesktopContractError, match="action.type"):
        assert_web_search_action({"query": "docs"})
