#!/usr/bin/env python3
"""Enforce modular-monolith boundaries across the whole codex_shim package.

This script is the registry of the architecture during the migration:

- MODULES: sealed-or-sealing domain packages. Files inside one may import
  their own module (any depth), other modules' top-level surface, PLATFORM,
  and stdlib/third-party. Anything else is debt.
- PLATFORM: leaf modules importable by everyone, allowed to import only
  PLATFORM.
- ENTRYPOINTS: composition roots (cli, server, workers, package __init__).
  Exempt from edge rules except the deep-import rule.
- Everything else flat under codex_shim/ is LEGACY: its existence is debt
  (an UNASSIGNED entry), and edge rules don't apply to it beyond the
  deep-import rule.

Rules (each violation must appear in LEGACY_DEBT or the check fails):
  R1 deep-import: no file may import the internals of a module dir it does
     not belong to (codex_shim.routing.service); import the module surface
     (codex_shim.routing) instead.
  R2 module-edges: module files may not import LEGACY or ENTRYPOINT targets.
  R3 platform-edges: PLATFORM files may not import non-PLATFORM codex_shim
     targets.
  R4 legacy-files: every LEGACY file is one ("path", "UNASSIGNED") entry.

LEGACY_DEBT is a ratchet: the check fails if a real violation is missing
from the list (regression) OR if a listed entry no longer matches reality
(stale entry masking future violations). Migration phases shrink the list;
nothing may add to it silently. Run with --emit-debt to print the current
violation set as a Python literal when updating the list in a phase commit.
"""
from __future__ import annotations

import ast
import sys
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parents[1]
PKG_ROOT = REPO_ROOT / "codex_shim"
PKG_NAME = "codex_shim"

MODULES = frozenset(
    {
        "gateway",
        "routing",
        "providers",
        "tools",
        "sessions",
        "governance",
        "observability",
        "persistence",
        "translate",
        "clientconfig",
        "verification",
    }
)

PLATFORM = frozenset(
    {
        "settings",
        "wire",
        "errors",
        "capabilities",
        "desktop_contract",
        "desktop_app_server_contract",
        "desktop_validate",
        "desktop_decompiled",
    }
)

ENTRYPOINTS = frozenset({"cli", "server", "workers", "__init__"})

# The migration debt ratchet is fully paid down: this set must stay empty.
# Any new violation is a hard CI failure — fix the import, don't list it.
LEGACY_DEBT: frozenset[tuple[str, str]] = frozenset()


def _classify(path: Path) -> tuple[str, str]:
    """Return (kind, name) where kind is module|platform|entrypoint|legacy."""
    rel = path.relative_to(PKG_ROOT)
    top = rel.parts[0]
    if len(rel.parts) > 1:
        if top in MODULES:
            return ("module", top)
        if top in ENTRYPOINTS:
            return ("entrypoint", top)
        return ("legacy", top)
    stem = path.stem
    if stem in MODULES:
        return ("module", stem)
    if stem in PLATFORM:
        return ("platform", stem)
    if stem in ENTRYPOINTS:
        return ("entrypoint", stem)
    return ("legacy", stem)


def _type_checking_spans(tree: ast.AST) -> list[tuple[int, int]]:
    """Line spans of `if TYPE_CHECKING:` bodies — type-only imports are not
    runtime coupling and are exempt from boundary rules."""
    spans: list[tuple[int, int]] = []
    for node in ast.walk(tree):
        if isinstance(node, ast.If):
            test = node.test
            name = getattr(test, "id", None) or getattr(test, "attr", None)
            if name == "TYPE_CHECKING":
                spans.append((node.lineno, node.end_lineno or node.lineno))
    return spans


def _import_targets(path: Path, tree: ast.AST) -> list[tuple[int, str]]:
    """Yield (lineno, dotted codex_shim-relative target) for package imports."""
    rel_parts = path.relative_to(PKG_ROOT).parts
    type_only = _type_checking_spans(tree)
    targets: list[tuple[int, str]] = []
    for node in ast.walk(tree):
        lineno = getattr(node, "lineno", None)
        if lineno is not None and any(s <= lineno <= e for s, e in type_only):
            continue
        if isinstance(node, ast.Import):
            for alias in node.names:
                if alias.name == PKG_NAME or alias.name.startswith(PKG_NAME + "."):
                    targets.append((node.lineno, alias.name.removeprefix(PKG_NAME).lstrip(".")))
        elif isinstance(node, ast.ImportFrom):
            if node.level == 0:
                if node.module and (node.module == PKG_NAME or node.module.startswith(PKG_NAME + ".")):
                    targets.append((node.lineno, node.module.removeprefix(PKG_NAME).lstrip(".")))
                continue
            # Relative import: resolve against this file's package.
            package_parts = list(rel_parts[:-1])
            up = node.level - 1
            if up > len(package_parts):
                continue  # escapes the package; not ours to police
            base = package_parts[: len(package_parts) - up]
            module_parts = node.module.split(".") if node.module else []
            targets.append((node.lineno, ".".join(base + module_parts)))
    return targets


def _violations() -> tuple[list[str], set[tuple[str, str]]]:
    errors: list[str] = []
    found_debt: set[tuple[str, str]] = set()

    for path in sorted(PKG_ROOT.rglob("*.py")):
        if "__pycache__" in path.parts:
            continue
        rel_str = str(path.relative_to(REPO_ROOT))
        kind, own = _classify(path)

        if kind == "legacy":
            found_debt.add((rel_str, "UNASSIGNED"))

        try:
            tree = ast.parse(path.read_text(encoding="utf-8"))
        except SyntaxError as exc:
            errors.append(f"{rel_str}: unparseable ({exc})")
            continue

        for lineno, target in _import_targets(path, tree):
            if not target:
                continue  # plain "import codex_shim" / "from . import x"
            head, _, rest = target.partition(".")

            if kind == "module" and head == own:
                continue  # own module, any depth

            # R1: deep import into someone else's module dir.
            if head in MODULES and rest:
                edge = (rel_str, f"deep:{target}")
                found_debt.add(edge)
                if edge not in LEGACY_DEBT:
                    errors.append(
                        f"{rel_str}:{lineno} deep import into codex_shim.{target}; "
                        f"import via the codex_shim.{head} surface"
                    )
                continue

            if kind == "module":
                if head in MODULES or head in PLATFORM:
                    continue
                edge = (rel_str, head)
                found_debt.add(edge)
                if edge not in LEGACY_DEBT:
                    errors.append(
                        f"{rel_str}:{lineno} module '{own}' imports non-platform flat "
                        f"'codex_shim.{head}' (not in LEGACY_DEBT)"
                    )
            elif kind == "platform":
                if head in PLATFORM:
                    continue
                edge = (rel_str, head)
                found_debt.add(edge)
                if edge not in LEGACY_DEBT:
                    errors.append(
                        f"{rel_str}:{lineno} platform module imports non-platform "
                        f"'codex_shim.{head}' (not in LEGACY_DEBT)"
                    )
            # entrypoint/legacy: only R1 applies.

    # Ratchet integrity: every listed entry must still match reality, and every
    # legacy file must be listed.
    for rel_str, target in sorted(LEGACY_DEBT - found_debt):
        errors.append(f"stale LEGACY_DEBT entry ({rel_str!r}, {target!r}); remove it in this commit")
    for rel_str, target in sorted(found_debt - LEGACY_DEBT):
        if target == "UNASSIGNED":
            errors.append(f"{rel_str}: new flat module without a LEGACY_DEBT entry")

    return errors, found_debt


def main() -> int:
    errors, found_debt = _violations()
    if "--emit-debt" in sys.argv:
        print("LEGACY_DEBT: frozenset[tuple[str, str]] = frozenset(")
        print("    {")
        for rel_str, target in sorted(found_debt):
            print(f"        ({rel_str!r}, {target!r}),")
        print("    }")
        print(")")
        return 0
    if errors:
        for row in errors:
            print(row)
        return 1
    print(f"module boundary checks passed ({len(found_debt)} debt entries remaining)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
