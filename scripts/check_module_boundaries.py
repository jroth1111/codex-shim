#!/usr/bin/env python3
from __future__ import annotations

from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parents[1]
PKG_ROOT = REPO_ROOT / "codex_shim"

MODULES = {
    "gateway",
    "routing",
    "providers",
    "tools",
    "sessions",
    "governance",
    "observability",
    "persistence",
}


def _iter_python_files() -> list[Path]:
    files: list[Path] = []
    for module in MODULES:
        module_dir = PKG_ROOT / module
        if not module_dir.exists():
            continue
        files.extend(sorted(module_dir.rglob("*.py")))
    return files


def _module_name(path: Path) -> str:
    return path.relative_to(PKG_ROOT).parts[0]


def _check_imports(path: Path) -> list[str]:
    current = _module_name(path)
    errors: list[str] = []
    for line_no, line in enumerate(path.read_text(encoding="utf-8").splitlines(), start=1):
        stripped = line.strip()
        # Relative imports: forbid deep imports into other module internals.
        if stripped.startswith("from .."):
            target = stripped[len("from ..") :].split()[0]
            target_module = target.split(".")[0]
            is_deep_import = "." in target
            if target_module in MODULES and target_module != current and is_deep_import:
                errors.append(
                    f"{path.relative_to(REPO_ROOT)}:{line_no} cross-module deep import to '{target}' is disallowed; import via '..{target_module}'"
                )
            continue

        # Absolute imports: forbid deep imports across codex_shim.<module>.*
        if stripped.startswith("from codex_shim.") or stripped.startswith("import codex_shim."):
            # Examples:
            #   from codex_shim.routing.service import X   (forbidden)
            #   from codex_shim.routing import X           (allowed)
            #   import codex_shim.routing.service          (forbidden)
            parts = stripped.split()
            if stripped.startswith("from codex_shim."):
                target = parts[1].removeprefix("codex_shim.")
            else:
                target = parts[1].removeprefix("codex_shim.")
            target_module = target.split(".")[0]
            is_deep_import = "." in target
            if target_module in MODULES and target_module != current and is_deep_import:
                errors.append(
                    f"{path.relative_to(REPO_ROOT)}:{line_no} cross-module deep import to 'codex_shim.{target}' is disallowed; import via 'codex_shim.{target_module}'"
                )
    return errors


def main() -> int:
    violations: list[str] = []
    for file_path in _iter_python_files():
        violations.extend(_check_imports(file_path))
    if violations:
        for row in violations:
            print(row)
        return 1
    print("module boundary checks passed")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
