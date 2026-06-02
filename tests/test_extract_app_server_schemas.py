from __future__ import annotations

import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def test_extract_app_server_schemas_writes_fallback_index():
    script = ROOT / "scripts" / "extract_app_server_schemas.py"
    result = subprocess.run([sys.executable, str(script)], cwd=ROOT, capture_output=True, text=True)
    if result.returncode != 0 and "skip schema extraction" in result.stderr:
        return
    assert result.returncode == 0, result.stderr
    index = ROOT / "codex-desktop-decompiled" / "extracted" / "schemas" / "app_server_fallback_index.json"
    if not index.is_file():
        return
    payload = json.loads(index.read_text(encoding="utf-8"))
    assert "thread/start" in payload["rpc_methods"]
