from __future__ import annotations

from dataclasses import dataclass
from typing import Literal

from .settings import ShimModel, TRANSPORT_CHATGPT, TRANSPORT_CURSOR_CLI, TRANSPORT_ANTHROPIC, TRANSPORT_OPENAI_CHAT


ToolSupport = Literal["native", "mapped", "unsupported"]


@dataclass(frozen=True)
class RouteCapabilities:
    local_shell: ToolSupport
    web_search: ToolSupport
    tool_search: ToolSupport
    image_generation: ToolSupport
    mcp_tools: ToolSupport
    reasoning: ToolSupport


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
    # Cursor CLI: model tool-loop runs in Cursor; Codex tools are still provided by Desktop.
    if t == TRANSPORT_CURSOR_CLI:
        return RouteCapabilities(
            local_shell="mapped",
            web_search="mapped",
            tool_search="mapped",
            image_generation="unsupported",
            mcp_tools="mapped",
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

