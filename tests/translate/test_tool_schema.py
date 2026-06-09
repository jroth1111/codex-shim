from __future__ import annotations

from codex_shim.translate import responses_to_anthropic, responses_to_chat
from codex_shim.translate.tool_schema import (
    flatten_mcp_namespace_tool,
    responses_tool_choice_to_chat,
    responses_tools_to_anthropic_tools,
    responses_tools_to_chat_tools,
    sanitize_tool_name,
)


def test_sanitize_tool_name_normalizes_invalid_characters():
    assert sanitize_tool_name("my tool!") == "my_tool"
    assert sanitize_tool_name("___") == "tool"


def test_responses_tools_to_chat_tools_converts_function_tools():
    tools = [{"type": "function", "name": "do_work", "description": "Do work", "parameters": {"type": "object"}}]

    converted = responses_tools_to_chat_tools(tools)

    assert converted == [
        {
            "type": "function",
            "function": {"name": "do_work", "description": "Do work", "parameters": {"type": "object"}},
        }
    ]


def test_responses_function_tools_convert_to_chat_shape():
    body = {
        "model": "slug",
        "input": "Hi",
        "tools": [{"type": "function", "name": "do_work", "description": "Do work", "parameters": {"type": "object"}}],
    }
    out = responses_to_chat(body, "real-model")
    assert out["tools"] == [
        {
            "type": "function",
            "function": {"name": "do_work", "description": "Do work", "parameters": {"type": "object"}},
        }
    ]


def test_native_responses_tools_get_function_fallbacks_for_byok_chat():
    body = {
        "model": "slug",
        "input": "Use the browser",
        "tool_choice": {"type": "computer_use_preview"},
        "tools": [
            {"type": "computer_use_preview"},
            {"type": "web_search_preview"},
            {"type": "apply_patch"},
            {"type": "function", "name": "list_mcp_resources", "parameters": {"type": "object"}},
        ],
    }

    out = responses_to_chat(body, "real-model")

    functions = [tool["function"] for tool in out["tools"]]
    assert [fn["name"] for fn in functions] == ["computer_use", "web_search", "apply_patch", "list_mcp_resources"]
    assert functions[0]["parameters"]["required"] == ["action"]
    assert functions[1]["parameters"]["required"] == ["query"]
    assert functions[2]["parameters"]["required"] == ["patch"]
    assert out["tool_choice"] == {"type": "function", "function": {"name": "computer_use"}}


def test_tool_search_and_custom_tool_call_get_function_fallbacks():
    body = {
        "model": "slug",
        "input": "Find tools",
        "tools": [
            {"type": "tool_search"},
            {"type": "custom_tool_call", "name": "deploy_app"},
        ],
    }

    out = responses_to_chat(body, "real-model")

    assert [tool["function"]["name"] for tool in out["tools"]] == ["tool_search", "deploy_app"]
    assert out["tools"][0]["function"]["parameters"]["required"] == ["query"]


def test_native_responses_tools_get_anthropic_fallbacks():
    body = {
        "model": "slug",
        "input": "Search",
        "tools": [{"type": "web_search_preview"}, {"type": "computer_use_preview"}],
    }

    out = responses_to_anthropic(body, "claude-real", 123)

    assert [tool["name"] for tool in out["tools"]] == ["web_search", "computer_use"]
    assert out["tools"][0]["input_schema"]["required"] == ["query"]
    assert out["tools"][1]["input_schema"]["required"] == ["action"]


def test_responses_tool_choice_to_chat_maps_hosted_tool_names():
    tools = [{"type": "web_search_preview"}]
    choice = responses_tool_choice_to_chat({"type": "web_search_preview"}, tools)
    assert choice == {"type": "function", "function": {"name": "web_search"}}


def test_flatten_mcp_namespace_tool_emits_composite_names():
    tool = {
        "type": "mcp",
        "namespace": "filesystem",
        "name": "list_files",
        "description": "List files",
        "parameters": {"type": "object", "properties": {"path": {"type": "string"}}, "required": ["path"]},
    }
    flat = flatten_mcp_namespace_tool(tool)
    assert flat is not None
    assert flat["function"]["name"] == "filesystem__list_files"
    assert flat["function"]["parameters"]["required"] == ["path"]


def test_responses_tools_to_chat_tools_flattens_namespace_mcp_tools():
    tools = [
        {
            "type": "mcp",
            "namespace": "git",
            "name": "diff",
            "description": "Show diff",
            "parameters": {"type": "object", "properties": {"path": {"type": "string"}}},
        }
    ]
    converted = responses_tools_to_chat_tools(tools)
    assert converted[0]["function"]["name"] == "git__diff"


def test_mcp_namespace_tools_fixture_round_trips_to_chat():
    import json
    from pathlib import Path

    fixture = json.loads(
        (Path(__file__).resolve().parents[1] / "fixtures" / "desktop" / "mcp_namespace_tools_turn.json").read_text()
    )
    body = {"model": "slug", "input": fixture["input"], "tools": fixture["tools"]}
    out = responses_to_chat(body, "real-model")
    names = [t["function"]["name"] for t in out["tools"]]
    assert names == ["filesystem__list_files", "git__status"]


def test_responses_tools_to_anthropic_tools_derives_from_chat_shape():
    tools = [{"type": "apply_patch"}]

    converted = responses_tools_to_anthropic_tools(tools)

    assert converted == [
        {
            "name": "apply_patch",
            "description": "Apply a unified diff patch to the working tree.",
            "input_schema": {
                "type": "object",
                "properties": {"patch": {"type": "string", "description": "Unified diff patch"}},
                "required": ["patch"],
                "additionalProperties": True,
            },
        }
    ]
