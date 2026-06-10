from __future__ import annotations


def test_tool_call_to_response_item_emits_native_web_search_call():
    from codex_shim.translate import tool_call_to_response_item

    item = tool_call_to_response_item(
        {
            "id": "call_search",
            "function": {"name": "web_search", "arguments": '{"query":"docs"}'},
        }
    )
    assert item["type"] == "web_search_call"
    assert item["action"]["query"] == "docs"
    assert item["action"]["type"] == "search"


def test_tool_call_to_response_item_emits_native_local_shell_call():
    from codex_shim.translate import tool_call_to_response_item

    item = tool_call_to_response_item(
        {
            "id": "call_shell",
            "function": {"name": "local_shell", "arguments": '{"command":"ls"}'},
        }
    )
    assert item["type"] == "local_shell_call"
    assert item["action"]["command"] == "ls"


def test_tool_call_to_response_item_emits_native_image_generation_call():
    from codex_shim.translate import tool_call_to_response_item

    item = tool_call_to_response_item(
        {
            "id": "call_img",
            "function": {"name": "image_generation", "arguments": '{"prompt":"neon fox"}'},
        }
    )
    assert item["type"] == "image_generation_call"
    assert item["action"]["prompt"] == "neon fox"
    assert item["revised_prompt"] == "neon fox"


def test_normalize_web_search_action_open_page_from_url():
    from codex_shim.translate import normalize_web_search_action

    action = normalize_web_search_action({"url": "https://example.com/page"}, "")
    assert action["type"] == "open_page"
    assert action["url"] == "https://example.com/page"


def test_normalize_web_search_action_find_in_page_from_pattern():
    from codex_shim.translate import normalize_web_search_action

    action = normalize_web_search_action({"pattern": "error"}, "")
    assert action["type"] == "find_in_page"
    assert action["pattern"] == "error"


def test_normalize_web_search_action_find_in_page_from_find_key():
    from codex_shim.translate import normalize_web_search_action

    action = normalize_web_search_action({"find": "TODO"}, "")
    assert action == {"type": "find_in_page", "pattern": "TODO"}


def test_normalize_web_search_action_defaults_to_search_for_unknown_dict():
    from codex_shim.translate import normalize_web_search_action

    action = normalize_web_search_action({"query": "weather"}, "")
    assert action["type"] == "search"
    assert action["query"] == "weather"


def test_normalize_web_search_action_strips_unknown_fields_for_known_type():
    from codex_shim.desktop_validate import assert_web_search_action
    from codex_shim.translate import normalize_web_search_action

    action = normalize_web_search_action(
        {"type": "search", "query": "docs", "metadata": {"source": "desktop"}},
        "",
    )
    assert action == {"type": "search", "query": "docs"}
    assert_web_search_action(action)


def test_normalize_web_search_action_falls_back_to_search_from_raw_args():
    from codex_shim.translate import normalize_web_search_action

    action = normalize_web_search_action(None, "raw query string")
    assert action == {"type": "search", "query": "raw query string"}


def test_normalize_web_search_action_preserves_explicit_search_type():
    from codex_shim.translate import normalize_web_search_action

    action = normalize_web_search_action({"type": "search", "query": "codex"}, "")
    assert action == {"type": "search", "query": "codex"}


def test_normalize_local_shell_action_defaults_command_from_arguments():
    from codex_shim.translate import normalize_local_shell_action

    assert normalize_local_shell_action(None, "pwd") == {"command": "pwd"}
    assert normalize_local_shell_action({"command": "ls"}, "") == {"command": "ls"}


def test_normalize_hosted_call_item_adds_web_search_action_type():
    from codex_shim.translate import normalize_hosted_call_item

    item = normalize_hosted_call_item(
        {"type": "web_search_call", "call_id": "call_1", "action": {"query": "docs"}}
    )
    assert item["action"] == {"type": "search", "query": "docs"}


def test_initial_native_tool_action_returns_search_for_web_search():
    from codex_shim.translate import initial_native_tool_action

    assert initial_native_tool_action("web_search_call") == {"type": "search"}
    assert initial_native_tool_action("local_shell_call") == {}
    assert initial_native_tool_action("image_generation_call") == {}
    assert initial_native_tool_action("tool_search_call") == {}
    assert initial_native_tool_action("function_call") == {}


def test_native_output_type_by_fallback_name_maps_all_hosted_tools():
    """All 4 hosted-tool fallback names map to their native output types."""
    from codex_shim.translate import NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME

    assert NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME == {
        "web_search": "web_search_call",
        "local_shell": "local_shell_call",
        "tool_search": "tool_search_call",
        "image_generation": "image_generation_call",
    }


def test_build_streaming_tool_output_types_maps_mcp_tools():
    from codex_shim.translate import build_streaming_tool_output_types

    tools = [{"type": "mcp", "name": "list_files"}]
    assert build_streaming_tool_output_types(tools) == {"list_files": "mcp_tool_call"}


def test_build_streaming_tool_output_types_maps_custom_tools():
    from codex_shim.translate import build_streaming_tool_output_types

    tools = [{"type": "custom_tool_call", "name": "deploy"}]
    assert build_streaming_tool_output_types(tools) == {"deploy": "custom_tool_call"}


def test_build_streaming_tool_output_types_maps_hosted_tools():
    from codex_shim.translate import build_streaming_tool_output_types

    tools = [
        {"type": "web_search_preview"},
        {"type": "function", "name": "local_shell"},
        {"type": "tool_search"},
        {"type": "function", "name": "image_generation"},
    ]
    result = build_streaming_tool_output_types(tools)
    assert result.get("web_search") == "web_search_call"
    assert result.get("local_shell") == "local_shell_call"
    assert result.get("tool_search") == "tool_search_call"
    assert result.get("image_generation") == "image_generation_call"


def test_build_streaming_tool_output_types_ignores_generic_functions():
    from codex_shim.translate import build_streaming_tool_output_types

    tools = [{"type": "function", "name": "my_custom_tool"}]
    assert build_streaming_tool_output_types(tools) == {}


def test_build_streaming_tool_output_types_handles_empty_and_none():
    from codex_shim.translate import build_streaming_tool_output_types

    assert build_streaming_tool_output_types([]) == {}
    assert build_streaming_tool_output_types(None) == {}
