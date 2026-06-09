from __future__ import annotations

import json
import subprocess
import sys
from pathlib import Path

import pytest

ROOT = Path(__file__).resolve().parents[1]
FIXTURE_DIR = ROOT / "tests" / "fixtures" / "upstream"
LIVE_MARKER = FIXTURE_DIR / ".live-cli-refreshed"


@pytest.mark.skipif(
    not LIVE_MARKER.exists(),
    reason="live CLI fixtures not refreshed; run capture_cli_upstream_parity.py --tier-b --refresh-fixtures",
)
def test_upstream_cli_live_fixtures_match() -> None:
    native = FIXTURE_DIR / "cli_native_to_chatgpt.json"
    shim = FIXTURE_DIR / "cli_shim_to_chatgpt.json"
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
