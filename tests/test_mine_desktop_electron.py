from __future__ import annotations

import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def test_mine_desktop_electron_writes_json_when_asar_present():
    script = ROOT / "scripts" / "mine_desktop_electron.py"
    result = subprocess.run([sys.executable, str(script)], cwd=ROOT, capture_output=True, text=True)
    assert result.returncode == 0, result.stderr
    if "skip electron mining" in result.stderr:
        return
    payload = json.loads(
        (ROOT / "codex-desktop-decompiled" / "extracted" / "electron_mining.json").read_text(encoding="utf-8")
    )
    assert isinstance(payload["hits"], list)
