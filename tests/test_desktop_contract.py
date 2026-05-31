from __future__ import annotations

from codex_shim.desktop_contract import (
    DESKTOP_LOCAL_SHELL_ACTION_FIELDS,
    DESKTOP_RESPONSE_ITEM_TYPES,
    DESKTOP_WEB_SEARCH_ACTION_FIELDS,
    DESKTOP_WEB_SEARCH_ACTION_TYPES,
    SHIM_EXTRA_RESPONSE_INPUT_TYPES,
)


def test_generated_desktop_contract_covers_known_response_items():
    assert "web_search_call" in DESKTOP_RESPONSE_ITEM_TYPES
    assert "local_shell_call" in DESKTOP_RESPONSE_ITEM_TYPES
    assert "image_generation_call" in DESKTOP_RESPONSE_ITEM_TYPES
    assert "mcp_tool_call" in SHIM_EXTRA_RESPONSE_INPUT_TYPES


def test_generated_desktop_contract_covers_hosted_tool_action_shapes():
    assert DESKTOP_WEB_SEARCH_ACTION_TYPES == frozenset({"search", "open_page", "find_in_page"})
    assert DESKTOP_WEB_SEARCH_ACTION_FIELDS["search"] == frozenset({"query", "queries"})
    assert "command" in DESKTOP_LOCAL_SHELL_ACTION_FIELDS
