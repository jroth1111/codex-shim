from __future__ import annotations

from typing import Any

from aiohttp import web

from ..capabilities import RouteCapabilities, execution_mode, is_delegate_route, route_capabilities
from ..image_gate import needs_image_generation
from ..routing import InferenceContext
from ..settings import ShimModel


class ToolPolicy:
    """Centralized tool-dispatch metadata and approval hooks."""

    def summarize(self, body: dict[str, Any]) -> dict[str, Any]:
        tools = body.get("tools")
        if not isinstance(tools, list):
            return {"tool_count": 0}
        tool_types: list[str] = []
        for tool in tools:
            if isinstance(tool, dict):
                tool_types.append(str(tool.get("type") or "unknown"))
        return {"tool_count": len(tools), "tool_types": tool_types}

    def evaluate(
        self,
        *,
        body: dict[str, Any],
        route: ShimModel,
        inference: InferenceContext | None = None,
    ) -> dict[str, Any]:
        summary = self.summarize(body)
        caps: RouteCapabilities = route_capabilities(route)
        mode = execution_mode(route)
        ctx = inference
        force_run = bool(ctx.force_run_everything) if ctx is not None else False
        auto_approve_tools = force_run and caps.local_shell == "mapped" and mode != "delegate"
        image_block = self.image_generation_block(body, route)
        return {
            **summary,
            "execution_mode": mode,
            "tool_authority": "cursor" if mode == "delegate" else "codex",
            "force_run_everything": force_run,
            "auto_approve_tools": auto_approve_tools,
            "requires_explicit_approval": summary["tool_count"] > 0 and not auto_approve_tools and mode != "delegate",
            "image_generation_requested": image_block is not None,
            "image_generation_allowed": image_block is None,
        }

    def image_generation_block(self, body: dict[str, Any], route: ShimModel) -> web.Response | None:
        """Return an error response when image generation is requested but unsupported."""
        if not needs_image_generation(body):
            return None
        # Match server.py gate: only models with explicit image-generation support pass through.
        if route.capabilities.supports_image_generation:
            return None
        return web.json_response(
            {
                "error": {
                    "type": "unsupported_capability",
                    "message": (
                        "Image generation requires a model that supports image generation. "
                        "Select gpt-5.5 ChatGPT passthrough or remove image-generation tools."
                    ),
                }
            },
            status=400,
        )
