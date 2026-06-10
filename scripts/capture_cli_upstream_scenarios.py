#!/usr/bin/env python3
"""Run several live CLI upstream parity scenarios (native codex exec vs shim)."""
from __future__ import annotations

import argparse
import json
import os
import sys
import time
from pathlib import Path
from typing import Any

try:
    import yaml
except ImportError:
    yaml = None  # type: ignore[assignment]

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from capture_cli_upstream_parity import (  # noqa: E402
    PYTHON,
    _backup_config,
    _restore_config,
    _run,
    capture_paired_cli_session,
)

from codex_shim.upstream_capture import clear_capture_config  # noqa: E402

DEFAULT_SCENARIOS = Path(__file__).with_name("capture_cli_upstream_scenarios.json")
SCENARIO_DIR = ROOT / "codex-desktop-decompiled" / "captures" / "debug" / "cli_scenarios"
MATRIX_REPORT = SCENARIO_DIR / "matrix_report.json"


def _load_scenarios(path: Path) -> list[dict[str, Any]]:
    text = path.read_text(encoding="utf-8")
    if path.suffix.lower() in {".yaml", ".yml"}:
        if yaml is None:
            raise RuntimeError("PyYAML is required: pip install pyyaml")
        payload = yaml.safe_load(text)
    else:
        payload = json.loads(text)
    scenarios = payload.get("scenarios") if isinstance(payload, dict) else None
    if not isinstance(scenarios, list):
        raise ValueError(f"invalid scenarios file: {path}")
    return [item for item in scenarios if isinstance(item, dict)]


def _apply_codex_config_overrides(overrides: dict[str, Any] | None) -> None:
    if not overrides:
        return
    # Applied per-scenario via codex exec -c flags in capture_cli_upstream_parity.
    os.environ["CODEX_PARITY_SCENARIO_CONFIG"] = json.dumps(overrides)


def _clear_codex_config_overrides() -> None:
    os.environ.pop("CODEX_PARITY_SCENARIO_CONFIG", None)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--scenarios", type=Path, default=DEFAULT_SCENARIOS)
    parser.add_argument("--scenario-id", default=None, help="Run one scenario id")
    parser.add_argument("--base-port", type=int, default=60020, help="Dump proxy base port (incremented per scenario)")
    parser.add_argument("--tier-b", action="store_true", help="Production parity (default)")
    args = parser.parse_args(argv)
    tier = "b"

    scenarios = _load_scenarios(args.scenarios)
    if args.scenario_id:
        scenarios = [item for item in scenarios if item.get("id") == args.scenario_id]
        if not scenarios:
            raise SystemExit(f"scenario not found: {args.scenario_id}")

    SCENARIO_DIR.mkdir(parents=True, exist_ok=True)
    backup = _backup_config()
    results: list[dict[str, Any]] = []
    exit_code = 0

    try:
        for index, scenario in enumerate(scenarios):
            scenario_id = str(scenario.get("id") or f"scenario_{index}")
            prompt = str(scenario.get("prompt") or "Reply with exactly: PARITY_CLI_OK")
            port = args.base_port + index
            native_path = SCENARIO_DIR / f"{scenario_id}_native.json"
            shim_path = SCENARIO_DIR / f"{scenario_id}_shim.json"
            report_path = SCENARIO_DIR / f"{scenario_id}_report.json"

            codex_config = scenario.get("codex_config")
            if isinstance(codex_config, dict):
                _apply_codex_config_overrides(codex_config)
            else:
                _clear_codex_config_overrides()

            print(f"\n=== scenario {scenario_id} (port {port}) ===", flush=True)
            print(f"prompt: {prompt!r}", flush=True)
            started = time.time()
            try:
                capture_paired_cli_session(
                    native_path=native_path,
                    shim_path=shim_path,
                    port=port,
                    prompt=prompt,
                    tier=tier,
                )
                diff = _run(
                    [
                        PYTHON,
                        str(ROOT / "scripts" / "diff_upstream_capture.py"),
                        str(native_path),
                        str(shim_path),
                        "--json",
                    ]
                )
                report = json.loads(diff.stdout or "{}")
                report_path.write_text(json.dumps(report, indent=2), encoding="utf-8")
                ok = bool(report.get("ok"))
                row = {
                    "scenario": scenario_id,
                    "ok": ok,
                    "prompt": prompt,
                    "native_path": str(native_path),
                    "shim_path": str(shim_path),
                    "report_path": str(report_path),
                    "headers_ok": report.get("headers_ok"),
                    "body_ok": report.get("body_ok"),
                    "issue_categories": report.get("issue_categories"),
                    "elapsed_s": round(time.time() - started, 1),
                }
                if not ok:
                    row["issues"] = report.get("issues", [])[:5]
                    exit_code = 1
            except Exception as exc:
                row = {
                    "scenario": scenario_id,
                    "ok": False,
                    "prompt": prompt,
                    "error": str(exc),
                    "elapsed_s": round(time.time() - started, 1),
                }
                exit_code = 1
            results.append(row)
            print(json.dumps(row, indent=2), flush=True)
            _clear_codex_config_overrides()
    finally:
        clear_capture_config()
        _clear_codex_config_overrides()
        _restore_config(backup)

    summary = {
        "ran_at": int(time.time()),
        "total": len(results),
        "passed": sum(1 for row in results if row.get("ok")),
        "failed": sum(1 for row in results if not row.get("ok")),
        "results": results,
    }
    MATRIX_REPORT.write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8")
    print(f"\nMatrix report: {MATRIX_REPORT}", flush=True)
    print(
        f"Summary: {summary['passed']}/{summary['total']} scenarios passed",
        flush=True,
    )
    return exit_code


if __name__ == "__main__":
    raise SystemExit(main())
