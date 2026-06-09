from __future__ import annotations

import json
import os
from pathlib import Path

from . import router as router_module
from .capabilities import route_capabilities
from .cursor_passthrough import cursor_catalog_entry, cursor_passthrough_available
from .settings import (
    CHATGPT_MODEL_SLUG,
    PROVIDER_NAME,
    ShimModel,
    available_model_slugs,
    default_model_slug,
    usable_byok_models,
)
from .subscription_catalog import SubscriptionCatalogSnapshot, refresh_subscription_catalog

PROJECT_ROOT = Path(__file__).resolve().parents[1]
CATALOG_PATH = PROJECT_ROOT / ".codex-shim" / "custom_model_catalog.json"


PLAN_TIERS = ["free", "plus", "pro", "team", "business", "enterprise"]
REASONING_PROVIDERS = {"deepseek", "anthropic", "minimax", "dashscope", "volcengine"}


def websockets_enabled() -> bool:
    raw = os.environ.get("CODEX_SHIM_ENABLE_WEBSOCKETS", "1").strip().lower()
    return raw not in {"0", "false", "no", "off"}


def catalog_entry(model: ShimModel) -> dict:
    subscription_entry = (model.raw or {}).get("subscription_catalog_entry")
    if isinstance(subscription_entry, dict) and subscription_entry.get("slug"):
        return dict(subscription_entry)
    if model.is_chatgpt:
        return chatgpt_passthrough_entry()
    context = model.max_context_limit or _default_context(model)
    compact = max(8_000, int(context * 0.8))
    truncation = min(64_000, max(8_000, int(context * 0.32)))
    reasoning = _reasoning_effort(model)
    supports_reasoning = _supports_reasoning_summaries(model)
    capabilities = getattr(model, "capabilities", None)
    supports_images = not model.no_image_support and (capabilities.supports_images if capabilities is not None else True)
    supports_parallel = capabilities.supports_parallel_tool_calls if capabilities is not None else True
    route_caps = route_capabilities(model)
    experimental_tools: list[str] = []
    if route_caps.image_generation == "unsupported":
        experimental_tools.append("image_generation_unsupported")
    if route_caps.web_search == "unsupported":
        experimental_tools.append("web_search_unsupported")
    supports_search = route_caps.web_search in {"native", "mapped"}
    return {
        "slug": model.slug,
        "display_name": model.display_name,
        "description": f"{model.display_name} via local Codex shim.",
        "context_window": context,
        "max_context_window": context,
        "auto_compact_token_limit": compact,
        "truncation_policy": {"mode": "tokens", "limit": truncation},
        "default_reasoning_level": reasoning,
        "supported_reasoning_levels": [
            {"effort": "low", "description": "Faster, lighter reasoning"},
            {"effort": "medium", "description": "Balanced speed and reasoning"},
            {"effort": "high", "description": "Deeper reasoning"},
            {"effort": "xhigh", "description": "Maximum reasoning where supported"},
        ],
        "default_reasoning_summary": "auto" if supports_reasoning else "none",
        "reasoning_summary_format": "experimental" if supports_reasoning else "none",
        "supports_reasoning_summaries": supports_reasoning,
        "default_verbosity": "low",
        "support_verbosity": False,
        "apply_patch_tool_type": "freeform",
        "web_search_tool_type": "text_and_image",
        "supports_search_tool": supports_search,
        "supports_parallel_tool_calls": supports_parallel,
        "experimental_supported_tools": experimental_tools,
        "input_modalities": ["text", "image"] if supports_images else ["text"],
        "supports_image_detail_original": supports_images,
        "shell_type": "shell_command",
        "visibility": "list",
        "minimal_client_version": "0.0.1",
        "supported_in_api": True,
        "availability_nux": None,
        "upgrade": None,
        "priority": max(1, 1000 - model.index),
        "prefer_websockets": websockets_enabled(),
        "available_in_plans": PLAN_TIERS,
        "service_tiers": [],
        "additional_speed_tiers": [],
        "default_service_tier": None,
        "effective_context_window_percent": 100,
        "base_instructions": "You are a coding agent running in Codex through a local BYOK shim.",
        "model_messages": {
            "instructions_template": (
                "You are Codex running on {model_name} through a local all-model shim. "
                "Be a helpful, direct coding collaborator."
            ),
            "instructions_variables": {"model_name": model.display_name},
        },
    }


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


def build_merged_catalog(
    models: list[ShimModel],
    subscription_entries: list[dict] | None = None,
    *,
    router_config=None,
) -> dict[str, list[dict]]:
    byok_models = [model for model in models if getattr(model, "visible", True) and not model.is_chatgpt]
    byok_slugs = {model.slug for model in byok_models}
    entries: list[dict] = []
    if router_config is not None and router_module.router_is_active(
        router_config, available_model_slugs(byok_models)
    ):
        entries.append(router_module.router_catalog_entry(router_config))
    if cursor_passthrough_available():
        cursor_entry = cursor_catalog_entry()
        cursor_entry["isDefault"] = not bool(subscription_entries)
        entries.append(cursor_entry)
    if subscription_entries:
        sorted_subscription = sorted(
            subscription_entries,
            key=lambda entry: int(entry.get("priority") or 0),
            reverse=True,
        )
        for entry in sorted_subscription:
            slug = str(entry.get("slug") or "").strip()
            if slug and slug not in byok_slugs:
                entries.append(dict(entry))
    entries.extend(catalog_entry(model) for model in byok_models)
    return {"models": entries}


def write_catalog(
    models: list[ShimModel],
    path: Path,
    *,
    snapshot: SubscriptionCatalogSnapshot | None = None,
    router_config=None,
) -> Path:
    path.parent.mkdir(parents=True, exist_ok=True)
    if snapshot is None:
        snapshot = refresh_subscription_catalog()
    byok_models = [model for model in models if not model.is_chatgpt]
    subscription_entries = [dict(model) for model in snapshot.models] if snapshot.models else None
    if not subscription_entries and snapshot.status != "unavailable":
        from .settings import chatgpt_passthrough_available

        if chatgpt_passthrough_available():
            subscription_entries = [chatgpt_passthrough_entry()]
    payload = build_merged_catalog(byok_models, subscription_entries, router_config=router_config)
    path.write_text(json.dumps(payload, indent=2, sort_keys=False) + "\n")
    return path


def _stream_idle_timeout_ms(models: list[ShimModel]) -> int:
    default_ms = 600_000
    max_timeout_s = 0
    for model in models:
        raw = model.raw or {}
        timeout = raw.get("prompt_timeout")
        if isinstance(timeout, (int, float)) and timeout > 0:
            max_timeout_s = max(max_timeout_s, int(timeout))
    if max_timeout_s > 0:
        return max(default_ms, max_timeout_s * 1000)
    return default_ms


def _provider_override_lines(provider_name: str) -> str:
    overrides_path = Path.home() / ".codex-shim" / "provider_overrides.toml"
    if not overrides_path.exists():
        return ""
    import tomllib

    try:
        data = tomllib.loads(overrides_path.read_text())
    except Exception:
        return ""
    block = data.get(provider_name) or data.get("model_providers", {}).get(provider_name) or {}
    if not isinstance(block, dict):
        return ""
    lines: list[str] = []
    query_params = block.get("query_params")
    if isinstance(query_params, dict) and query_params:
        pairs = ", ".join(f'"{_toml_escape(str(k))}" = "{_toml_escape(str(v))}"' for k, v in query_params.items())
        lines.append(f"query_params = {{ {pairs} }}")
    http_headers = block.get("http_headers")
    if isinstance(http_headers, dict) and http_headers:
        pairs = ", ".join(f'"{_toml_escape(str(k))}" = "{_toml_escape(str(v))}"' for k, v in http_headers.items())
        lines.append(f"http_headers = {{ {pairs} }}")
    if lines:
        return "\n".join(lines) + "\n"
    return ""


def write_config(models: list[ShimModel], path: Path, catalog_path: Path, port: int) -> Path:
    path.parent.mkdir(parents=True, exist_ok=True)
    try:
        default_slug = default_model_slug(models)
    except ValueError:
        raise
    stream_idle_timeout_ms = _stream_idle_timeout_ms(models)
    override_lines = _provider_override_lines(PROVIDER_NAME)
    text = f'''# Generated by codex-shim. This file is opt-in and is not ~/.codex/config.toml.
model = "{_toml_escape(default_slug)}"
model_provider = "{PROVIDER_NAME}"
model_catalog_json = "{_toml_escape(str(catalog_path))}"

[model_providers.{PROVIDER_NAME}]
name = "Codex Shim"
base_url = "http://127.0.0.1:{port}/v1"
wire_api = "responses"
requires_openai_auth = false
experimental_bearer_token = "dummy"
request_max_retries = 3
stream_max_retries = 3
stream_idle_timeout_ms = {stream_idle_timeout_ms}
supports_websockets = {str(websockets_enabled()).lower()}
{override_lines}'''
    path.write_text(text)
    return path


def write_direct_responses_config(
    models: list[ShimModel],
    path: Path,
    catalog_path: Path,
    base_url: str,
    *,
    provider_name: str = "vibeproxy_direct",
    provider_display_name: str = "VibeProxy Direct",
) -> Path:
    path.parent.mkdir(parents=True, exist_ok=True)
    try:
        default_slug = default_model_slug(models, include_chatgpt=False)
    except ValueError:
        raise
    text = f'''# This mode points Codex directly at the upstream. No shim daemon is required.
model = "{_toml_escape(default_slug)}"
model_provider = "{_toml_escape(provider_name)}"
model_catalog_json = "{_toml_escape(str(catalog_path))}"

[model_providers.{_toml_escape(provider_name)}]
name = "{_toml_escape(provider_display_name)}"
base_url = "{_toml_escape(base_url.rstrip('/'))}"
wire_api = "responses"
requires_openai_auth = false
experimental_bearer_token = "dummy"
request_max_retries = 3
stream_max_retries = 3
stream_idle_timeout_ms = 600000
supports_websockets = {str(websockets_enabled()).lower()}
'''
    path.write_text(text)
    return path


def codex_config_overrides(catalog_path: Path, default_slug: str, port: int) -> list[str]:
    return [
        f'model="{_toml_escape(default_slug)}"',
        f'model_provider="{PROVIDER_NAME}"',
        f'model_catalog_json="{_toml_escape(str(catalog_path))}"',
        f'model_providers.{PROVIDER_NAME}.name="Codex Shim"',
        f'model_providers.{PROVIDER_NAME}.base_url="http://127.0.0.1:{port}/v1"',
        f'model_providers.{PROVIDER_NAME}.wire_api="responses"',
        f'model_providers.{PROVIDER_NAME}.requires_openai_auth=false',
        f'model_providers.{PROVIDER_NAME}.experimental_bearer_token="dummy"',
        f'model_providers.{PROVIDER_NAME}.request_max_retries=3',
        f'model_providers.{PROVIDER_NAME}.stream_max_retries=3',
        f'model_providers.{PROVIDER_NAME}.stream_idle_timeout_ms=600000',
        f'model_providers.{PROVIDER_NAME}.supports_websockets={str(websockets_enabled()).lower()}',
    ]


def _default_context(model: ShimModel) -> int:
    lower = f"{model.model} {model.display_name}".lower()
    if "claude" in lower:
        return 200_000
    if "gpt-5" in lower:
        return 400_000
    if "gemini" in lower:
        return 1_000_000
    if "kimi" in lower:
        return 256_000
    if "deepseek" in lower:
        return 200_000
    return 128_000


def _supports_reasoning_summaries(model: ShimModel) -> bool:
    capabilities = getattr(model, "capabilities", None)
    if capabilities is not None and capabilities.supports_reasoning_summaries:
        return True
    provider = model.provider.lower()
    if provider in REASONING_PROVIDERS:
        return True
    if provider == "moonshot":
        return model.model.startswith("kimi-")
    return False


def _reasoning_effort(model: ShimModel) -> str:
    lower = model.display_name.lower()
    if "xhigh" in lower or "x-high" in lower:
        return "xhigh"
    if "high" in lower:
        return "high"
    if "medium" in lower:
        return "medium"
    if "low" in lower:
        return "low"
    return "medium"


def _toml_escape(value: str) -> str:
    return value.replace("\\", "\\\\").replace('"', '\\"')
