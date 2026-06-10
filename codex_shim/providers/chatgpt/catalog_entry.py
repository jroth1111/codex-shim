"""Static catalog entry for the ChatGPT subscription passthrough model."""
from __future__ import annotations

from ...settings import CHATGPT_MODEL_SLUG, PLAN_TIERS, websockets_enabled


def chatgpt_passthrough_entry() -> dict:
    """Catalog entry for the original GPT-5.5 routed through ChatGPT passthrough."""
    return {
        "slug": CHATGPT_MODEL_SLUG,
        "display_name": "GPT-5.5",
        "description": "OpenAI GPT-5.5 — the default Codex model, routed through ChatGPT passthrough.",
        "context_window": 400000,
        "max_context_window": 400000,
        "auto_compact_token_limit": 320000,
        "truncation_policy": {"mode": "tokens", "limit": 64000},
        "default_reasoning_level": "medium",
        "supported_reasoning_levels": [
            {"effort": "minimal", "description": "Minimal reasoning"},
            {"effort": "low", "description": "Faster, lighter reasoning"},
            {"effort": "medium", "description": "Balanced"},
            {"effort": "high", "description": "Deeper reasoning"},
            {"effort": "xhigh", "description": "Maximum reasoning"},
        ],
        "default_reasoning_summary": "auto",
        "reasoning_summary_format": "experimental",
        "supports_reasoning_summaries": True,
        "default_verbosity": "medium",
        "support_verbosity": True,
        "apply_patch_tool_type": "freeform",
        "web_search_tool_type": "text_and_image",
        "supports_search_tool": True,
        "supports_parallel_tool_calls": True,
        "experimental_supported_tools": [],
        "input_modalities": ["text", "image"],
        "supports_image_detail_original": True,
        "shell_type": "shell_command",
        "visibility": "list",
        "minimal_client_version": "0.0.1",
        "supported_in_api": True,
        "availability_nux": None,
        "upgrade": None,
        "isDefault": True,
        "priority": 10000,
        "prefer_websockets": websockets_enabled(),
        "available_in_plans": PLAN_TIERS,
        "service_tiers": [
            {
                "id": "priority",
                "name": "Fast",
                "description": "1.5x speed, increased usage",
            }
        ],
        "additional_speed_tiers": ["fast"],
        "default_service_tier": None,
        "effective_context_window_percent": 100,
        "base_instructions": "You are Codex, a coding agent powered by GPT-5.5.",
        "model_messages": {
            "instructions_template": "You are Codex, a coding agent powered by GPT-5.5.",
            "instructions_variables": {"model_name": "GPT-5.5"},
        },
    }
