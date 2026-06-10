from __future__ import annotations

import json
import re
from pathlib import Path
from typing import Any

SENSITIVE_CONFIG_KEYS = {
    "api_key",
    "apikey",
    "api-key",
    "bearertoken",
    "bearer_token",
    "authorization",
    "x-api-key",
    "secret",
    "token",
}
REDACTED_VALUE = "***REDACTED***"
_CREDENTIAL_TOKEN_KEY = re.compile(r"(access|refresh|bearer|id)token$")


def is_sensitive_config_key(normalized: str) -> bool:
    if normalized in SENSITIVE_CONFIG_KEYS:
        return True
    if "apikey" in normalized or "secret" in normalized:
        return True
    return _CREDENTIAL_TOKEN_KEY.search(normalized) is not None


def redact_config(value: Any) -> Any:
    if isinstance(value, list):
        return [redact_config(item) for item in value]
    if isinstance(value, dict):
        redacted = {}
        for key, item in value.items():
            normalized = re.sub(r"[^a-z0-9]+", "", str(key).lower())
            if is_sensitive_config_key(normalized):
                redacted[key] = REDACTED_VALUE if item else item
            else:
                redacted[key] = redact_config(item)
        return redacted
    return value


def export_config_file(settings_path: Path, output_path: Path, *, redact: bool = True) -> int:
    source = Path(settings_path).expanduser()
    if not source.exists():
        raise SystemExit(f"Settings file not found: {source}")
    data = json.loads(source.read_text())
    if redact:
        data = redact_config(data)
    output = Path(output_path).expanduser()
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(data, indent=2) + "\n")
    mode = "redacted" if redact else "unredacted"
    print(f"Exported {mode} config to {output}.")
    return 0
