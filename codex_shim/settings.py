from __future__ import annotations

import json
import os
import re
import shutil
from collections.abc import MutableMapping
from dataclasses import dataclass, field, replace
from pathlib import Path
from typing import Any
from urllib.parse import urlparse
from urllib.request import urlopen

# Repo root and the gitignored runtime dir. Single home: every module that
# anchors paths at the repo root must use these, not its own parents[] math
# (which silently breaks when files move between package levels).
PROJECT_ROOT = Path(__file__).resolve().parents[1]
RUNTIME_DIR = PROJECT_ROOT / ".codex-shim"

DEFAULT_SETTINGS = Path.home() / ".codex-shim" / "models.json"
DEFAULT_CODEX_AUTH = Path.home() / ".codex" / "auth.json"
DEFAULT_HOST = "127.0.0.1"
DEFAULT_PORT = 8765
PROVIDER_NAME = "codex_shim"
CHATGPT_MODEL_SLUG = "gpt-5.5"
PLAN_TIERS = ["free", "plus", "pro", "team", "business", "enterprise"]


def with_loopback_no_proxy(env: MutableMapping[str, str]) -> MutableMapping[str, str]:
    """Ensure loopback hosts bypass any configured HTTP proxy (mutates env)."""
    loopback = ["127.0.0.1", "localhost", "::1"]
    for key in ("NO_PROXY", "no_proxy"):
        values = [part.strip() for part in env.get(key, "").split(",") if part.strip()]
        lower_values = {value.lower() for value in values}
        for host in loopback:
            if host.lower() not in lower_values:
                values.append(host)
        env[key] = ",".join(values)
    return env


def websockets_enabled() -> bool:
    raw = os.environ.get("CODEX_SHIM_ENABLE_WEBSOCKETS", "1").strip().lower()
    return raw not in {"0", "false", "no", "off"}

CURSOR_CLI_PROVIDERS = {"cursor-agent", "cursor-agent-cli", "cursor-cli"}
CURSOR_ACP_PROVIDERS = {"cursor-acp", "cursor-agent-acp"}
CURSOR_LOCAL_PROVIDERS = CURSOR_CLI_PROVIDERS | CURSOR_ACP_PROVIDERS
TRANSPORT_OPENAI_CHAT = "openai_chat"
TRANSPORT_ANTHROPIC = "anthropic"
TRANSPORT_CURSOR_ACP = "cursor_acp"
TRANSPORT_CURSOR_CLI = "cursor_cli"
TRANSPORT_CURSOR_AGENT = "cursor-agent-grpc"
TRANSPORT_CHATGPT = "chatgpt"
CURSOR_AGENT_PROVIDERS = {"cursor-agent-grpc", "cursor-agent-native"}
THINKING_PASS = "pass"
THINKING_DROP = "drop"
THINKING_FORCE_ENABLED = "force_enabled"
THINKING_FORCE_DISABLED = "force_disabled"
THINKING_KEEP_ALL = "keep_all"
REASONING_REPLAY_EMPTY_STRING = "empty_string"
REASONING_REPLAY_OMIT = "omit"
REASONING_REPLAY_NULL = "null"
ROLE_DEVELOPER_TO_SYSTEM = "developer_to_system"
BASE_URL_CHAT_COMPLETIONS = "chat_completions"
COMPACT_EMULATED = "emulated"
COMPACT_PASSTHROUGH = "passthrough"
COMPACT_UNSUPPORTED = "unsupported"
ZAI_PROVIDERS = {"zai", "z.ai", "z-ai", "zai-open-platform"}
ZAI_CODING_PROVIDERS = {"zai-coding-plan", "z.ai-coding-plan", "z-ai-coding-plan", "zai-coding"}
NVIDIA_NIM_PROVIDERS = {"nvidia-nim", "nvidia_nim", "nim"}
_ACRONYMS = {
    "ai",
    "api",
    "cli",
    "css",
    "dns",
    "gpt",
    "gpu",
    "html",
    "http",
    "https",
    "id",
    "json",
    "llm",
    "mcp",
    "pdf",
    "rag",
    "sql",
    "ssh",
    "svg",
    "tpu",
    "url",
    "xml",
}


@dataclass(frozen=True)
class ProviderCapabilities:
    supports_reasoning_summaries: bool = False
    supports_parallel_tool_calls: bool = True
    supports_images: bool = True
    supports_image_generation: bool = False
    accepts_thinking: bool = False
    thinking_keep_all: bool = False
    thinking_behavior: str = THINKING_DROP
    role_behavior: str = ROLE_DEVELOPER_TO_SYSTEM
    base_url_behavior: str = BASE_URL_CHAT_COMPLETIONS
    compact_behavior: str = COMPACT_EMULATED
    reasoning_replay_mode: str = REASONING_REPLAY_EMPTY_STRING


@dataclass(frozen=True)
class ProviderPreset:
    transport: str
    base_url: str = ""
    endpoint_url: str = ""
    requires_api_key: bool = False
    requires_command: bool = False
    default_command: str = ""
    append_v1_for_base_url: bool = True
    capabilities: ProviderCapabilities = field(default_factory=ProviderCapabilities)


PROVIDER_PRESETS: dict[str, ProviderPreset] = {
    "generic-chat-completion-api": ProviderPreset(
        transport=TRANSPORT_OPENAI_CHAT,
        capabilities=ProviderCapabilities(
            accepts_thinking=True,
            thinking_behavior=THINKING_PASS,
            reasoning_replay_mode=REASONING_REPLAY_EMPTY_STRING,
        ),
    ),
    "deepseek": ProviderPreset(
        transport=TRANSPORT_OPENAI_CHAT,
        capabilities=ProviderCapabilities(
            supports_reasoning_summaries=True,
            accepts_thinking=True,
            thinking_behavior=THINKING_PASS,
            reasoning_replay_mode=REASONING_REPLAY_EMPTY_STRING,
        ),
    ),
    "openrouter": ProviderPreset(
        transport=TRANSPORT_OPENAI_CHAT,
        capabilities=ProviderCapabilities(
            accepts_thinking=True,
            thinking_behavior=THINKING_PASS,
            reasoning_replay_mode=REASONING_REPLAY_EMPTY_STRING,
        ),
    ),
    "anthropic": ProviderPreset(transport=TRANSPORT_ANTHROPIC),
    "chatgpt": ProviderPreset(
        transport=TRANSPORT_CHATGPT,
        capabilities=ProviderCapabilities(
            supports_reasoning_summaries=True,
            supports_images=True,
            supports_image_generation=True,
            accepts_thinking=True,
            thinking_behavior=THINKING_PASS,
            compact_behavior=COMPACT_PASSTHROUGH,
        ),
    ),
    "cursor-acp": ProviderPreset(
        transport=TRANSPORT_CURSOR_ACP,
        requires_command=True,
        default_command="cursor-agent",
        capabilities=ProviderCapabilities(supports_images=False),
    ),
    "cursor-agent-acp": ProviderPreset(
        transport=TRANSPORT_CURSOR_ACP,
        requires_command=True,
        default_command="cursor-agent",
        capabilities=ProviderCapabilities(supports_images=False),
    ),
    "cursor-agent": ProviderPreset(
        transport=TRANSPORT_CURSOR_CLI,
        requires_command=True,
        default_command="cursor",
        capabilities=ProviderCapabilities(supports_images=False),
    ),
    "cursor-agent-cli": ProviderPreset(
        transport=TRANSPORT_CURSOR_CLI,
        requires_command=True,
        default_command="cursor",
        capabilities=ProviderCapabilities(supports_images=False),
    ),
    "cursor-cli": ProviderPreset(
        transport=TRANSPORT_CURSOR_CLI,
        requires_command=True,
        default_command="cursor",
        capabilities=ProviderCapabilities(supports_images=False),
    ),
    "cursor-agent-grpc": ProviderPreset(
        transport=TRANSPORT_CURSOR_AGENT,
        requires_command=False,
        capabilities=ProviderCapabilities(supports_images=False),
    ),
    "cursor-agent-native": ProviderPreset(
        transport=TRANSPORT_CURSOR_AGENT,
        requires_command=False,
        capabilities=ProviderCapabilities(supports_images=False),
    ),
}

for _provider in ZAI_PROVIDERS:
    PROVIDER_PRESETS[_provider] = ProviderPreset(
        transport=TRANSPORT_OPENAI_CHAT,
        endpoint_url="https://api.z.ai/api/paas/v4/chat/completions",
        requires_api_key=True,
        append_v1_for_base_url=False,
        capabilities=ProviderCapabilities(
            supports_reasoning_summaries=True,
            accepts_thinking=True,
            thinking_behavior=THINKING_PASS,
        ),
    )

for _provider in ZAI_CODING_PROVIDERS:
    PROVIDER_PRESETS[_provider] = ProviderPreset(
        transport=TRANSPORT_OPENAI_CHAT,
        endpoint_url="https://api.z.ai/api/coding/paas/v4/chat/completions",
        requires_api_key=True,
        append_v1_for_base_url=False,
        capabilities=ProviderCapabilities(
            supports_reasoning_summaries=True,
            accepts_thinking=True,
            thinking_behavior=THINKING_PASS,
        ),
    )

for _provider in NVIDIA_NIM_PROVIDERS:
    PROVIDER_PRESETS[_provider] = ProviderPreset(
        transport=TRANSPORT_OPENAI_CHAT,
        base_url="https://integrate.api.nvidia.com/v1",
        requires_api_key=True,
    )


def chatgpt_passthrough_available(auth_path: Path | None = None) -> bool:
    """Return True if ~/.codex/auth.json holds a usable Codex access token."""
    if os.environ.get("CODEX_SHIM_DISABLE_CHATGPT", "").lower() in {"1", "true", "yes", "on"}:
        return False
    if auth_path is None:
        import sys as _sys

        # Module-attribute lookup so test monkeypatches of DEFAULT_CODEX_AUTH apply.
        auth_path = Path(getattr(_sys.modules[__name__], "DEFAULT_CODEX_AUTH"))
    expanded = Path(auth_path).expanduser()
    if not expanded.exists():
        return False
    try:
        data = json.loads(expanded.read_text())
    except (OSError, json.JSONDecodeError):
        return False
    tokens = data.get("tokens") if isinstance(data, dict) else None
    if not isinstance(tokens, dict):
        return False
    return bool(tokens.get("access_token"))


def chatgpt_passthrough_model(auth_path: Path | None = None) -> NormalizedModel | None:
    from .routing import subscription_passthrough_models

    models = subscription_passthrough_models(auth_path)
    if not models:
        return None
    for model in models:
        if model.slug == CHATGPT_MODEL_SLUG:
            return model
    return models[0]


def slugify(value: str) -> str:
    slug = re.sub(r"[^a-zA-Z0-9]+", "-", value.strip().lower()).strip("-")
    return slug or "model"


@dataclass(frozen=True)
class NormalizedModel:
    slug: str
    model: str
    display_name: str
    provider: str
    base_url: str
    api_key: str = ""
    index: int = 0
    max_context_limit: int | None = None
    max_output_tokens: int | None = None
    no_image_support: bool = False
    extra_headers: dict[str, str] = field(default_factory=dict)
    extra_body_params: dict[str, Any] = field(default_factory=dict)
    raw: dict[str, Any] = field(default_factory=dict)
    transport: str = TRANSPORT_OPENAI_CHAT
    endpoint_url: str = ""
    enabled: bool = True
    visible: bool = True
    unavailable_reason: str | None = None
    capabilities: ProviderCapabilities = field(default_factory=ProviderCapabilities)

    @property
    def thinking_behavior(self) -> str:
        return self.capabilities.thinking_behavior

    @property
    def is_anthropic(self) -> bool:
        return self.transport == TRANSPORT_ANTHROPIC

    @property
    def is_openai_chat(self) -> bool:
        return self.transport == TRANSPORT_OPENAI_CHAT

    @property
    def is_cursor_acp(self) -> bool:
        return self.transport == TRANSPORT_CURSOR_ACP

    @property
    def is_cursor_cli(self) -> bool:
        return self.transport == TRANSPORT_CURSOR_CLI

    @property
    def is_cursor_agent(self) -> bool:
        return self.transport == TRANSPORT_CURSOR_AGENT

    @property
    def use_native_transport(self) -> bool:
        raw = self.raw
        return bool(_field(raw, "use_native_transport", "useNativeTransport", default=False))

    @property
    def native_transport_mode(self) -> str | None:
        """Per-model override: ``http1`` (RunSSE+BidiAppend) or ``http2`` (AgentService/Run)."""
        raw = self.raw if isinstance(self.raw, dict) else {}
        value = _field(raw, "native_transport_mode", "nativeTransportMode", default=None)
        if value is None:
            return None
        text = str(value).strip().lower()
        return text or None

    @property
    def is_chatgpt(self) -> bool:
        return self.transport == TRANSPORT_CHATGPT


# Backwards-compatible public name used by existing tests and configs.
ShimModel = NormalizedModel


class ModelSettings:
    def __init__(self, path: Path | None = None):
        self.path = Path(path or DEFAULT_SETTINGS).expanduser()

    def load(self) -> list[NormalizedModel]:
        if not self.path.exists():
            if self.path == DEFAULT_SETTINGS:
                return []
            raise FileNotFoundError(self.path)
        data = json.loads(self.path.read_text())
        rows = _model_rows(data)
        model_counts: dict[str, int] = {}
        for row in rows:
            model = str(row.get("model") or "").strip()
            if model:
                model_counts[model] = model_counts.get(model, 0) + 1

        used: set[str] = set()
        models: list[NormalizedModel] = []
        for fallback_index, row in enumerate(rows):
            model = str(row.get("model") or "").strip()
            provider = str(row.get("provider") or "").strip()
            provider_key = provider.lower()
            preset = provider_preset(provider_key)
            base_url = str(_field(row, "base_url", "baseUrl", default=preset.base_url) or "").strip().rstrip("/")
            if not model or not provider:
                continue

            index = int(row.get("index", fallback_index))
            display_name = str(_field(row, "display_name", "displayName", default=model)).strip()
            slug_base = str(_field(row, "slug", "id", default=(display_name if model_counts.get(model, 0) > 1 else model)))
            slug = slugify(slug_base)
            if slug in used:
                slug = f"{slug}-{index}"
            while slug in used:
                slug = f"{slug}-{len(used)}"
            used.add(slug)

            api_key = _api_key(row)
            extra_headers = {
                str(k): str(v)
                for k, v in (_field(row, "extra_headers", "extraHeaders", default={}) or {}).items()
                if v is not None
            }
            extra_body_raw = _field(row, "extra_body_params", "extraBodyParams", default={}) or {}
            extra_body_params = extra_body_raw if isinstance(extra_body_raw, dict) else {}
            endpoint_url = _endpoint_url(row, preset, base_url)
            enabled = _bool_field(row, "enabled", default=True)
            visible, unavailable_reason = _visibility(row, preset, base_url, endpoint_url, api_key, enabled)
            capabilities = _provider_capabilities(row, preset, provider_key, model)
            transport = preset.transport
            if _bool_field(row, "use_native_transport", "useNativeTransport", default=False):
                if provider_key in CURSOR_LOCAL_PROVIDERS or provider_key in CURSOR_AGENT_PROVIDERS:
                    transport = TRANSPORT_CURSOR_AGENT
            models.append(
                NormalizedModel(
                    slug=slug,
                    model=model,
                    display_name=display_name,
                    provider=provider,
                    base_url=base_url,
                    api_key=api_key,
                    index=index,
                    max_context_limit=_int_or_none(_field(row, "max_context_limit", "maxContextLimit")),
                    max_output_tokens=_int_or_none(_field(row, "max_output_tokens", "maxOutputTokens")),
                    no_image_support=bool(_field(row, "no_image_support", "noImageSupport", default=False)),
                    extra_headers=extra_headers,
                    extra_body_params=dict(extra_body_params),
                    raw=row,
                    transport=transport,
                    endpoint_url=endpoint_url,
                    enabled=enabled,
                    visible=visible,
                    unavailable_reason=unavailable_reason,
                    capabilities=capabilities,
                )
            )
        return models

    def visible_models(self) -> list[NormalizedModel]:
        return [model for model in self.load() if model.visible]

    def unavailable_models(self) -> list[NormalizedModel]:
        return [model for model in self.load() if not model.visible]

    def desktop_models(self) -> list[NormalizedModel]:
        from .routing import merge_desktop_models

        return merge_desktop_models(self.visible_models())

    def by_slug_or_model(self, requested: str, *, include_unavailable: bool = False) -> NormalizedModel | None:
        models = self.load() if include_unavailable else self.desktop_models()
        requested = normalize_chatgpt_model_request(requested, models)
        by_slug = {m.slug: m for m in models}
        if requested in by_slug:
            return by_slug[requested]
        matches = [m for m in models if m.model == requested]
        if len(matches) == 1:
            return matches[0]
        return None

    def load_router(self):
        """Parse the optional top-level ``router`` block from the settings file."""
        from .routing import load_router_config

        return load_router_config(self.path)


def byok_model_has_credentials(model: NormalizedModel) -> bool:
    return bool((model.api_key or "").strip())


def usable_byok_models(models: list[NormalizedModel]) -> list[NormalizedModel]:
    return [model for model in models if byok_model_has_credentials(model) and not model.is_chatgpt]


def chatgpt_passthrough_slugs() -> set[str]:
    return {model.slug for model in subscription_passthrough_slugs_models()}


def subscription_passthrough_slugs_models() -> list[NormalizedModel]:
    from .routing import subscription_passthrough_models

    return subscription_passthrough_models()


def available_model_slugs(models: list[NormalizedModel]) -> set[str]:
    """Every routable slug: usable BYOK models plus available passthrough slugs."""
    from .providers import cursor_passthrough_available, cursor_passthrough_display_names

    slugs = {model.slug for model in usable_byok_models(models)}
    if chatgpt_passthrough_available():
        slugs |= chatgpt_passthrough_slugs()
    if cursor_passthrough_available():
        slugs |= set(cursor_passthrough_display_names())
    return slugs


def normalize_chatgpt_model_request(
    requested: str,
    models: list[NormalizedModel] | None = None,
) -> str:
    if requested.startswith("openai-gpt-5-5") or requested == "gpt-5p5":
        return CHATGPT_MODEL_SLUG
    if models:
        subscription_slugs = {model.slug for model in models if model.is_chatgpt}
        if requested in subscription_slugs:
            return requested
        for slug in subscription_slugs:
            if requested.startswith(f"openai-{slug.replace('.', '-')}"):
                return slug
    return requested


def _model_rows(data: Any) -> list[dict[str, Any]]:
    if isinstance(data, list):
        rows = data
    elif isinstance(data, dict):
        rows = data.get("models")
        if rows is None:
            rows = data.get("customModels")
        if rows is None:
            rows = data.get("launchModels", data.get("launch_models", []))
    else:
        return []
    if not isinstance(rows, list):
        return []
    return [row for row in (_coerce_model_row(row) for row in rows) if row is not None]


def _coerce_model_row(row: Any) -> dict[str, Any] | None:
    if isinstance(row, str):
        return {
            "model": row,
            "display_name": row,
            "provider": "generic-chat-completion-api",
            "base_url": "http://127.0.0.1:11434/v1",
        }
    if isinstance(row, dict):
        return _normalize_model_row(row)
    return None


def _normalize_model_row(row: dict[str, Any]) -> dict[str, Any]:
    normalized = dict(row)
    if "display_name" not in normalized and "name" in normalized:
        normalized["display_name"] = normalized["name"]
    if "base_url" not in normalized and "baseURL" in normalized:
        normalized["base_url"] = normalized["baseURL"]
    if "api_key" not in normalized and "apiKey" not in normalized and "bearerToken" in normalized:
        normalized["api_key"] = normalized["bearerToken"]
    if _looks_like_ollama_row(normalized):
        normalized["provider"] = "generic-chat-completion-api"
        if not _field(normalized, "base_url", "baseUrl", "baseURL"):
            normalized["base_url"] = "http://127.0.0.1:11434/v1"
    return normalized


def _looks_like_ollama_row(row: dict[str, Any]) -> bool:
    provider = str(row.get("provider") or "").lower()
    base_url = str(_field(row, "base_url", "baseUrl", "baseURL", default="")).lower()
    return provider == "ollama" or "11434" in base_url or "ollama" in base_url


def _field(row: dict[str, Any], *keys: str, default: Any = None) -> Any:
    for key in keys:
        if key in row:
            return row[key]
    return default


def provider_preset(provider: str) -> ProviderPreset:
    provider_key = provider.lower()
    if provider_key in PROVIDER_PRESETS:
        return PROVIDER_PRESETS[provider_key]
    return ProviderPreset(transport=TRANSPORT_OPENAI_CHAT)


def provider_accepts_thinking(provider: str, upstream_model: str) -> bool:
    behavior = provider_thinking_behavior(provider, upstream_model)
    return behavior in {THINKING_PASS, THINKING_FORCE_ENABLED, THINKING_KEEP_ALL}


def provider_thinking_behavior(provider: str, upstream_model: str) -> str:
    provider_key = provider.lower()
    if provider_key == "moonshot":
        return THINKING_KEEP_ALL if upstream_model.startswith("kimi-") else THINKING_DROP
    capabilities = provider_preset(provider_key).capabilities
    return _normalize_thinking_behavior(capabilities.thinking_behavior)


def provider_thinking_options(provider: str, upstream_model: str) -> dict[str, Any]:
    behavior = provider_thinking_behavior(provider, upstream_model)
    if behavior == THINKING_FORCE_DISABLED:
        return {"type": "disabled"}
    if behavior == THINKING_KEEP_ALL:
        return {"type": "enabled", "keep": "all"}
    return {"type": "enabled"}


def provider_reasoning_replay_mode(provider: str) -> str:
    return provider_preset(provider.lower()).capabilities.reasoning_replay_mode


def _provider_capabilities(
    row: dict[str, Any],
    preset: ProviderPreset,
    provider_key: str,
    upstream_model: str,
) -> ProviderCapabilities:
    behavior = _row_thinking_behavior(row, provider_key, upstream_model, preset.capabilities)
    compact_behavior = _row_compact_behavior(row, preset.capabilities)
    return replace(
        preset.capabilities,
        thinking_behavior=behavior,
        accepts_thinking=behavior in {THINKING_PASS, THINKING_FORCE_ENABLED, THINKING_KEEP_ALL},
        thinking_keep_all=behavior == THINKING_KEEP_ALL,
        compact_behavior=compact_behavior,
    )


def _row_thinking_behavior(
    row: dict[str, Any],
    provider_key: str,
    upstream_model: str,
    capabilities: ProviderCapabilities,
) -> str:
    explicit = _field(
        row,
        "thinking_behavior",
        "thinkingBehavior",
        "thinking",
        "thinkingMode",
        "thinking_mode",
        default=None,
    )
    if explicit is not None:
        return _normalize_thinking_behavior(str(explicit))
    if provider_key == "moonshot":
        return THINKING_KEEP_ALL if upstream_model.startswith("kimi-") else THINKING_DROP
    return _normalize_thinking_behavior(capabilities.thinking_behavior)


def _normalize_thinking_behavior(value: str | None) -> str:
    normalized = str(value or "").strip().lower().replace("-", "_").replace(" ", "_")
    aliases = {
        "": THINKING_DROP,
        "false": THINKING_DROP,
        "off": THINKING_DROP,
        "disabled": THINKING_FORCE_DISABLED,
        "disable": THINKING_FORCE_DISABLED,
        "force_disabled": THINKING_FORCE_DISABLED,
        "force_disable": THINKING_FORCE_DISABLED,
        "no_thinking": THINKING_FORCE_DISABLED,
        "safe": THINKING_FORCE_DISABLED,
        "true": THINKING_PASS,
        "on": THINKING_PASS,
        "enabled": THINKING_PASS,
        "enable": THINKING_PASS,
        "pass": THINKING_PASS,
        "drop": THINKING_DROP,
        "force_enabled": THINKING_FORCE_ENABLED,
        "force_enable": THINKING_FORCE_ENABLED,
        "keep_all": THINKING_KEEP_ALL,
        "keepall": THINKING_KEEP_ALL,
    }
    return aliases.get(normalized, normalized if normalized in {
        THINKING_PASS,
        THINKING_DROP,
        THINKING_FORCE_ENABLED,
        THINKING_FORCE_DISABLED,
        THINKING_KEEP_ALL,
    } else THINKING_DROP)


def _row_compact_behavior(row: dict[str, Any], capabilities: ProviderCapabilities) -> str:
    explicit = _field(row, "compact_behavior", "compactBehavior", "compact", "supports_compact", "supportsCompact")
    if explicit is None:
        return capabilities.compact_behavior
    if isinstance(explicit, bool):
        return COMPACT_EMULATED if explicit else COMPACT_UNSUPPORTED
    normalized = str(explicit).strip().lower().replace("-", "_").replace(" ", "_")
    aliases = {
        "true": COMPACT_EMULATED,
        "enabled": COMPACT_EMULATED,
        "emulated": COMPACT_EMULATED,
        "passthrough": COMPACT_PASSTHROUGH,
        "native": COMPACT_PASSTHROUGH,
        "false": COMPACT_UNSUPPORTED,
        "disabled": COMPACT_UNSUPPORTED,
        "unsupported": COMPACT_UNSUPPORTED,
        "none": COMPACT_UNSUPPORTED,
    }
    return aliases.get(normalized, capabilities.compact_behavior)


def _api_key(row: dict[str, Any]) -> str:
    explicit = str(_field(row, "api_key", "apiKey", "bearerToken", "bearer_token", default="") or "").strip()
    if explicit:
        return explicit
    env_name = str(_field(row, "api_key_env", "apiKeyEnv", "apiKeyEnvironment", default="") or "").strip()
    if env_name:
        return os.environ.get(env_name, "").strip()
    file_name = str(_field(row, "api_key_file", "apiKeyFile", default="") or "").strip()
    if not file_name:
        return ""
    try:
        return Path(file_name).expanduser().read_text().strip()
    except OSError:
        return ""


def _endpoint_url(row: dict[str, Any], preset: ProviderPreset, base_url: str) -> str:
    override = str(
        _field(row, "endpoint_url", "endpointUrl", "chat_completions_url", "chatCompletionsUrl", default="") or ""
    ).strip()
    if override:
        return override
    if base_url:
        append_v1 = _bool_field(row, "base_url_append_v1", "baseUrlAppendV1", default=preset.append_v1_for_base_url)
        return _chat_completions_url_from_base(base_url, append_v1=append_v1)
    return preset.endpoint_url


_VERSIONED_BASE_RE = re.compile(r"(?:^|/)v\d+$")


def _chat_completions_url_from_base(base_url: str, *, append_v1: bool = True) -> str:
    base = base_url.rstrip("/")
    if base.endswith("/chat/completions"):
        return base
    if append_v1:
        if _VERSIONED_BASE_RE.search(base):
            return base + "/chat/completions"
        return base + "/v1/chat/completions"
    return base + "/chat/completions"


def _visibility(
    row: dict[str, Any],
    preset: ProviderPreset,
    base_url: str,
    endpoint_url: str,
    api_key: str,
    enabled: bool,
) -> tuple[bool, str | None]:
    if not enabled:
        return False, "disabled"
    if preset.transport == TRANSPORT_OPENAI_CHAT and not endpoint_url:
        return False, "missing base_url or chat_completions_url"
    if preset.transport == TRANSPORT_OPENAI_CHAT and not _valid_url(endpoint_url):
        return False, f"invalid endpoint URL: {endpoint_url}"
    if preset.transport == TRANSPORT_ANTHROPIC and not base_url:
        return False, "missing base_url"
    if preset.transport == TRANSPORT_ANTHROPIC and not _valid_url(base_url):
        return False, f"invalid base URL: {base_url}"
    if preset.requires_api_key and not api_key:
        source = str(_field(row, "api_key_env", "apiKeyEnv", "api_key_file", "apiKeyFile", default="") or "").strip()
        suffix = f" from {source}" if source else ""
        return False, f"missing API key{suffix}"
    if preset.requires_command:
        command = str(_field(row, "command", "cursor_command", "cursorCommand", default=preset.default_command) or "").strip()
        if not command:
            return False, "missing command"
        if not _command_available(command):
            return False, f"command not found: {command}"
    return True, None


def _command_available(command: str) -> bool:
    expanded = Path(command).expanduser()
    if expanded.is_absolute() or "/" in command or "\\" in command:
        return expanded.exists() and os.access(expanded, os.X_OK)
    return shutil.which(command) is not None


def _valid_url(value: str) -> bool:
    parsed = urlparse(value)
    return parsed.scheme in {"http", "https"} and bool(parsed.netloc)


def _bool_field(row: dict[str, Any], *keys: str, default: bool = False) -> bool:
    value = _field(row, *keys, default=default)
    if isinstance(value, bool):
        return value
    if isinstance(value, str):
        return value.strip().lower() not in {"0", "false", "no", "off", "disabled"}
    return bool(value)


def _int_or_none(value: Any) -> int | None:
    if value in (None, ""):
        return None
    try:
        return int(value)
    except (TypeError, ValueError):
        return None


def default_model_slug(models: list[ShimModel], include_chatgpt: bool | None = None) -> str:
    """Pick the default catalog slug for install/generate flows.

    When ``include_chatgpt`` is omitted, prefer a visible BYOK model (favoring
    Cursor CLI routes) and fall back to ChatGPT passthrough only when no BYOK
    model is visible.
    When ``include_chatgpt=False`` (BYOK-first flows), pick the first visible BYOK slug and
    only fall back to ChatGPT when no visible BYOK models remain.
    """
    if include_chatgpt is None:
        include_chatgpt = False
    if include_chatgpt and chatgpt_passthrough_available():
        return CHATGPT_MODEL_SLUG
    byok_visible = [
        model
        for model in models
        if getattr(model, "visible", True) and model.slug != CHATGPT_MODEL_SLUG
    ]
    cursor_visible = [model for model in byok_visible if getattr(model, "is_cursor_cli", False)]
    if cursor_visible:
        return cursor_visible[0].slug
    if byok_visible:
        return byok_visible[0].slug
    if include_chatgpt or chatgpt_passthrough_available():
        return CHATGPT_MODEL_SLUG
    raise ValueError(
        "No usable codex-shim models: add models to ~/.codex-shim/models.json, run `codex login`, "
        "or unset CODEX_SHIM_DISABLE_CHATGPT if ChatGPT passthrough should be used."
    )


def fetch_vibeproxy_model_rows(
    base_url: str,
    *,
    provider_base_url: str | None = None,
    provider: str = "generic-chat-completion-api",
    timeout: float = 5.0,
) -> list[dict[str, Any]]:
    base = base_url.rstrip("/")
    with urlopen(f"{base}/v1/models", timeout=timeout) as response:
        data = json.loads(response.read())
    return vibeproxy_model_rows(data, provider_base_url=provider_base_url or f"{base}/v1", provider=provider)


def vibeproxy_model_rows(
    data: dict[str, Any],
    *,
    provider_base_url: str,
    provider: str = "generic-chat-completion-api",
) -> list[dict[str, Any]]:
    rows = data.get("data", [])
    if not isinstance(rows, list):
        return []
    models: list[dict[str, Any]] = []
    for index, row in enumerate(rows):
        if not isinstance(row, dict):
            continue
        model_id = str(row.get("id") or "").strip()
        if not model_id or _is_non_chat_vibeproxy_model(model_id):
            continue
        owned_by = str(row.get("owned_by") or "unknown").strip()
        display_name = _title_case_model(model_id.replace("/", " ").replace("-", " "))
        if owned_by and owned_by.lower() not in {"openai", "unknown"}:
            display_name = f"{display_name} ({owned_by})"
        model_row: dict[str, Any] = {
            "model": model_id,
            "display_name": display_name,
            "provider": provider,
            "base_url": provider_base_url.rstrip("/"),
            "index": index,
        }
        context_limit = _infer_context_limit(model_id)
        if context_limit is not None:
            model_row["max_context_limit"] = context_limit
        models.append(model_row)
    return models


def _is_non_chat_vibeproxy_model(model_id: str) -> bool:
    lower = model_id.lower()
    return any(marker in lower for marker in ("image", "embedding", "tts", "whisper", "dall"))


def _title_case_model(value: str) -> str:
    small = {"a", "an", "and", "at", "but", "for", "from", "in", "nor", "of", "on", "or", "the", "to", "via"}
    words = value.split()
    result = []
    for index, word in enumerate(words):
        lower = word.lower()
        if lower in _ACRONYMS:
            result.append(lower.upper())
        elif lower in small and 0 < index < len(words) - 1:
            result.append(lower)
        else:
            result.append(word[:1].upper() + word[1:])
    return " ".join(result)


def _infer_context_limit(model_id: str) -> int | None:
    lower = model_id.lower()
    match = re.search(r"(?<!\d)(\d+)\s*k(?![a-z])", lower)
    if match:
        return int(match.group(1)) * 1000
    match = re.search(r"(?<!\d)(\d+)\s*m(?![a-z])", lower)
    if match:
        return int(match.group(1)) * 1000 * 1000
    if "kimi" in lower:
        return 256000
    if "claude" in lower:
        return 200000
    if "deepseek" in lower:
        return 200000
    return None
