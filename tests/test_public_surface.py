"""Public-surface tripwires for the modular-monolith migration.

Behavior tests get edited as code moves between modules; these snapshots pin
the exact HTTP route table and the CLI command surface (commands, flags,
positionals, nested subcommands) so a refactor that accidentally changes
either fails loudly.

Regenerate the CLI surface fixture after a deliberate surface change:

    CODEX_SHIM_UPDATE_SURFACE_FIXTURES=1 python3 -m pytest tests/test_public_surface.py -q
"""
from __future__ import annotations

import argparse
import json
import os
from pathlib import Path
from typing import Any

import pytest

from codex_shim import cli
from codex_shim.server import ShimServer

EXPECTED_ROUTES = {
    ("GET", "/health"),
    ("GET", "/v1/models"),
    ("POST", "/v1/chat/completions"),
    ("POST", "/v1/messages"),
    ("POST", "/v1/responses"),
    ("GET", "/v1/responses"),
    ("POST", "/v1/responses/compact"),
    ("GET", "/picker"),
    ("GET", "/api/models"),
    ("POST", "/api/switch"),
}

CLI_SURFACE_FIXTURE = Path(__file__).parent / "fixtures" / "cli_surface.json"


def test_route_table_is_pinned(monkeypatch, tmp_path):
    monkeypatch.setattr("codex_shim.settings.DEFAULT_CODEX_AUTH", tmp_path / "missing-auth.json")
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    app = ShimServer(settings).app()
    actual = {(route.method, route.resource.canonical) for route in app.router.routes() if route.method != "HEAD"}
    assert actual == EXPECTED_ROUTES


class _ParserCaptured(Exception):
    def __init__(self, parser: argparse.ArgumentParser):
        self.parser = parser


def _capture_cli_parser() -> argparse.ArgumentParser:
    """Build the real CLI parser by intercepting main()'s parse_args call."""

    def trap(self: argparse.ArgumentParser, *args: Any, **kwargs: Any) -> Any:
        raise _ParserCaptured(self)

    original = argparse.ArgumentParser.parse_args
    argparse.ArgumentParser.parse_args = trap  # type: ignore[method-assign]
    try:
        cli.main([])
    except _ParserCaptured as captured:
        return captured.parser
    finally:
        argparse.ArgumentParser.parse_args = original  # type: ignore[method-assign]
    raise AssertionError("cli.main never called parse_args")


def _parser_surface(parser: argparse.ArgumentParser) -> dict[str, Any]:
    """Project a parser onto a stable, version-independent surface description."""
    options: list[str] = []
    positionals: list[str] = []
    subcommands: dict[str, Any] = {}
    for action in parser._actions:  # noqa: SLF001 - introspection is the point
        if isinstance(action, argparse._SubParsersAction):
            for name, subparser in action.choices.items():
                subcommands[name] = _parser_surface(subparser)
        elif action.option_strings:
            options.append("/".join(action.option_strings))
        else:
            positionals.append(action.dest)
    surface: dict[str, Any] = {"options": sorted(options)}
    if positionals:
        surface["positionals"] = positionals
    if subcommands:
        surface["subcommands"] = {name: subcommands[name] for name in sorted(subcommands)}
    return surface


def test_cli_surface_is_pinned():
    surface = {"prog": "codex-shim", **_parser_surface(_capture_cli_parser())}
    rendered = json.dumps(surface, indent=2, sort_keys=False) + "\n"
    if os.environ.get("CODEX_SHIM_UPDATE_SURFACE_FIXTURES") == "1":
        CLI_SURFACE_FIXTURE.parent.mkdir(parents=True, exist_ok=True)
        CLI_SURFACE_FIXTURE.write_text(rendered)
        pytest.skip("CLI surface fixture regenerated")
    assert CLI_SURFACE_FIXTURE.exists(), (
        "missing CLI surface fixture; run with CODEX_SHIM_UPDATE_SURFACE_FIXTURES=1 to create it"
    )
    assert rendered == CLI_SURFACE_FIXTURE.read_text(), (
        "CLI surface changed. If deliberate, regenerate the fixture with "
        "CODEX_SHIM_UPDATE_SURFACE_FIXTURES=1; if not, the refactor broke the CLI."
    )
