#!/usr/bin/env python3
"""Run upstream parity scenarios from capture_upstream_scenarios.yaml."""
from __future__ import annotations

import argparse
import json
import os
import subprocess
import sys
from pathlib import Path
from typing import Any

try:
    import yaml
except ImportError:
    yaml = None  # type: ignore[assignment]

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_SCENARIOS = Path(__file__).with_name("capture_upstream_scenarios.yaml")
SCENARIO_DIR = ROOT / "codex-desktop-decompiled" / "captures" / "debug" / "scenarios"
PYTHON = sys.executable


def _load_scenarios(path: Path) -> list[dict[str, Any]]:
    if yaml is None:
        raise RuntimeError("PyYAML is required: pip install pyyaml")
    payload = yaml.safe_load(path.read_text(encoding="utf-8"))
    scenarios = payload.get("scenarios") if isinstance(payload, dict) else None
    if not isinstance(scenarios, list):
        raise ValueError(f"invalid scenarios file: {path}")
    return [item for item in scenarios if isinstance(item, dict)]


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--scenarios", type=Path, default=DEFAULT_SCENARIOS)
    parser.add_argument("--scenario-id", default=None, help="Run one scenario id")
    args = parser.parse_args(argv)

    scenarios = _load_scenarios(args.scenarios)
    if args.scenario_id:
        scenarios = [item for item in scenarios if item.get("id") == args.scenario_id]
        if not scenarios:
            raise SystemExit(f"scenario not found: {args.scenario_id}")

    SCENARIO_DIR.mkdir(parents=True, exist_ok=True)
    exit_code = 0
    for scenario in scenarios:
        scenario_id = str(scenario.get("id") or "scenario")
        tier = str(scenario.get("tier") or "b").lower()
        tier_flag = "--tier-a" if tier == "a" else "--tier-b"
        report_path = SCENARIO_DIR / f"{scenario_id}_report.json"
        cmd = [
            PYTHON,
            str(ROOT / "scripts" / "capture_upstream_parity.py"),
            "--prompt",
            str(scenario.get("prompt") or "Reply with exactly: PARITY_OK"),
            tier_flag,
            "--report-path",
            str(report_path),
        ]
        print(f"running scenario {scenario_id}: {' '.join(cmd)}", flush=True)
        env = os.environ.copy()
        env["PYTHONPATH"] = str(ROOT)
        proc = subprocess.run(cmd, cwd=str(ROOT), env=env)
        if proc.returncode != 0:
            exit_code = 1
            continue
        if report_path.exists():
            report = json.loads(report_path.read_text(encoding="utf-8"))
            print(json.dumps({"scenario": scenario_id, "ok": report.get("ok")}, indent=2))
            if not report.get("ok"):
                exit_code = 1
    return exit_code


if __name__ == "__main__":
    raise SystemExit(main())
