"""File-backed upstream capture settings for long-lived shim daemons."""
from __future__ import annotations

import json
import os
from typing import Any

from ..settings import RUNTIME_DIR

CAPTURE_CONFIG_PATH = RUNTIME_DIR / "upstream_capture.json"


def _truthy(value: Any) -> bool:
    if isinstance(value, bool):
        return value
    if value is None:
        return False
    return str(value).strip().lower() in {"1", "true", "yes", "on"}


def read_capture_config() -> dict[str, Any]:
    try:
        payload = json.loads(CAPTURE_CONFIG_PATH.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError):
        return {}
    return payload if isinstance(payload, dict) else {}


def write_capture_config(config: dict[str, Any]) -> None:
    CAPTURE_CONFIG_PATH.parent.mkdir(parents=True, exist_ok=True)
    CAPTURE_CONFIG_PATH.write_text(json.dumps(config, indent=2), encoding="utf-8")


def clear_capture_config() -> None:
    CAPTURE_CONFIG_PATH.unlink(missing_ok=True)


def capture_flag(*, env_name: str, config_key: str) -> bool:
    if _truthy(os.environ.get(env_name)):
        return True
    return _truthy(read_capture_config().get(config_key))


def capture_tier() -> str | None:
    tier = capture_value(env_name="CODEX_SHIM_UPSTREAM_CAPTURE_TIER", config_key="tier")
    if tier in {"a", "b"}:
        return tier
    return None


def parity_mode_enabled() -> bool:
    if _truthy(os.environ.get("CODEX_SHIM_PARITY_MODE")):
        return True
    tier = capture_tier()
    if tier == "b":
        return False
    return _truthy(read_capture_config().get("parity_mode"))


def capture_value(*, env_name: str, config_key: str, default: str | None = None) -> str | None:
    env = os.environ.get(env_name, "").strip()
    if env:
        return env
    cfg = read_capture_config()
    value = cfg.get(config_key)
    if value is None:
        return default
    text = str(value).strip()
    return text or default
