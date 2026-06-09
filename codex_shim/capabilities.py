from __future__ import annotations

from dataclasses import dataclass
from typing import Literal

from .settings import (
    ShimModel,
    TRANSPORT_CHATGPT,
    TRANSPORT_CURSOR_ACP,
    TRANSPORT_CURSOR_AGENT,
    TRANSPORT_CURSOR_CLI,
    TRANSPORT_ANTHROPIC,
    TRANSPORT_OPENAI_CHAT,
)


ToolSupport = Literal["native", "mapped", "delegated", "unsupported"]
ExecutionMode = Literal["delegate", "mapped"]


@dataclass(frozen=True)
class RouteCapabilities:
    local_shell: ToolSupport
    web_search: ToolSupport
    tool_search: ToolSupport
    image_generation: ToolSupport
    mcp_tools: ToolSupport
    reasoning: ToolSupport


def is_delegate_route(route: ShimModel) -> bool:
    return route.is_cursor_cli or route.is_cursor_agent or route.is_cursor_acp


def execution_mode(route: ShimModel) -> ExecutionMode:
    if is_delegate_route(route):
        return "delegate"
    return "mapped"


def route_capabilities(route: ShimModel) -> RouteCapabilities:
    t = route.transport
    # ChatGPT passthrough: highest-fidelity path for Codex Desktop tools.
    if t == TRANSPORT_CHATGPT:
        return RouteCapabilities(
            local_shell="native",
            web_search="native",
            tool_search="native",
            image_generation="native",
            mcp_tools="native",
            reasoning="native",
        )
    # OpenAI-compatible chat providers: function-tool fallbacks, mapped to Responses tools.
    if t == TRANSPORT_OPENAI_CHAT:
        return RouteCapabilities(
            local_shell="mapped",
            web_search="mapped",
            tool_search="mapped",
            image_generation="mapped",
            mcp_tools="mapped",
            reasoning="mapped",
        )
    # Anthropic Messages: mapped via shim translation, no native Responses parity.
    if t == TRANSPORT_ANTHROPIC:
        return RouteCapabilities(
            local_shell="mapped",
            web_search="mapped",
            tool_search="mapped",
            image_generation="unsupported",
            mcp_tools="mapped",
            reasoning="mapped",
        )
    # Cursor routes: Cursor executes tools; Codex receives text/thinking only.
    if t in {TRANSPORT_CURSOR_CLI, TRANSPORT_CURSOR_AGENT, TRANSPORT_CURSOR_ACP}:
        return RouteCapabilities(
            local_shell="delegated",
            web_search="delegated",
            tool_search="delegated",
            image_generation="unsupported",
            mcp_tools="delegated",
            reasoning="mapped",
        )
    # Default conservative: best-effort mapping, no image_generation.
    return RouteCapabilities(
        local_shell="mapped",
        web_search="mapped",
        tool_search="mapped",
        image_generation="unsupported",
        mcp_tools="mapped",
        reasoning="mapped",
    )
