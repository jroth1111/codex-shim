from __future__ import annotations

import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
FIXTURE_DIR = ROOT / "tests" / "fixtures" / "upstream"


def test_upstream_harness_fixtures_match() -> None:
    native = FIXTURE_DIR / "harness_native_to_chatgpt.json"
    shim = FIXTURE_DIR / "harness_shim_to_chatgpt.json"
    assert native.exists(), f"missing fixture: {native}"
    assert shim.exists(), f"missing fixture: {shim}"

    proc = subprocess.run(
        [
            sys.executable,
            str(ROOT / "scripts" / "diff_upstream_capture.py"),
            str(native),
            str(shim),
            "--json",
        ],
        cwd=str(ROOT),
        capture_output=True,
        text=True,
        check=False,
    )
    assert proc.returncode == 0, proc.stdout + proc.stderr
    report = json.loads(proc.stdout)
    assert report["ok"] is True, report.get("issues")
