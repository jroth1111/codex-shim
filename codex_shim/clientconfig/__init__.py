"""Codex client configuration: catalog generation, config.toml management,
the picker actions, ASAR patch specs, and OpenCode Go model discovery."""
from . import picker
from .catalog import (
    CATALOG_PATH,
    _toml_escape,
    build_merged_catalog,
    catalog_entry,
    codex_config_overrides,
    write_catalog,
    write_config,
    write_direct_responses_config,
)
from .codex_config import (
    CODEX_CONFIG_PATH,
    remove_toml_section,
    repair_codex_config,
    repair_codex_config_text,
    validate_toml_text,
    write_codex_config,
)
from .config_redaction import REDACTED_VALUE, export_config_file
from .opencode_go import (
    OPENCODE_GO_API_KEY_ENV,
    OPENCODE_GO_BASE_URL,
    refresh_opencode_go_settings,
)
from .patch_specs import (
    INSPECTION_SPECS_BY_VERSION,
    MODEL_PICKER_NEEDLE,
    MODEL_PICKER_OPTIONAL,
    MODEL_PICKER_REPLACEMENT,
    SIDEBAR_RECENT_THREADS_NEEDLE,
    SIDEBAR_RECENT_THREADS_REPLACEMENT,
    inspection_specs_for_version,
    patch_specs_for_version,
)
from .picker import PICKER_TOKEN_HEADER

__all__ = [
    "CATALOG_PATH",
    "CODEX_CONFIG_PATH",
    "INSPECTION_SPECS_BY_VERSION",
    "MODEL_PICKER_NEEDLE",
    "MODEL_PICKER_OPTIONAL",
    "MODEL_PICKER_REPLACEMENT",
    "OPENCODE_GO_API_KEY_ENV",
    "OPENCODE_GO_BASE_URL",
    "PICKER_TOKEN_HEADER",
    "REDACTED_VALUE",
    "SIDEBAR_RECENT_THREADS_NEEDLE",
    "SIDEBAR_RECENT_THREADS_REPLACEMENT",
    "build_merged_catalog",
    "catalog_entry",
    "codex_config_overrides",
    "export_config_file",
    "inspection_specs_for_version",
    "patch_specs_for_version",
    "picker",
    "refresh_opencode_go_settings",
    "remove_toml_section",
    "repair_codex_config",
    "repair_codex_config_text",
    "validate_toml_text",
    "write_catalog",
    "write_codex_config",
    "write_config",
    "write_direct_responses_config",
]
