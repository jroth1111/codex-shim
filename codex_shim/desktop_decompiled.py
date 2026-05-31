"""Optional local Codex Desktop reverse-engineering artifacts (gitignored)."""

from __future__ import annotations

import os
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent
DEFAULT_DIRNAME = "codex-desktop-decompiled"
ENV_ROOT = "CODEX_DESKTOP_DECOMPILED_DIR"
ENV_REQUIRE = "CODEX_SHIM_REQUIRE_DESKTOP_DECOMPILED"


def desktop_decompiled_root() -> Path:
    override = os.environ.get(ENV_ROOT, "").strip()
    if override:
        return Path(override).expanduser().resolve()
    return REPO_ROOT / DEFAULT_DIRNAME


def app_asar_extracted_dir() -> Path:
    return desktop_decompiled_root() / "app-asar-extracted"


def codex_strings_path() -> Path:
    return desktop_decompiled_root() / "native-binaries" / "codex.strings.txt"


def architecture_doc() -> Path:
    return desktop_decompiled_root() / "CODEX_SHIM_ARCHITECTURE.md"


def provenance_readme() -> Path:
    return desktop_decompiled_root() / "README.md"


def is_available() -> bool:
    return desktop_decompiled_root().is_dir()


def require_available() -> bool:
    return os.environ.get(ENV_REQUIRE, "").strip().lower() in {"1", "true", "yes", "on"}


def missing_message() -> str:
    return (
        f"Local Desktop RE tree not found at {desktop_decompiled_root()} "
        f"(gitignored; set {ENV_ROOT} or extract per {DEFAULT_DIRNAME}/README.md)"
    )
