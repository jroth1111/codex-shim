from __future__ import annotations

import json
import subprocess
import sys
from pathlib import Path

from codex_shim.providers.cursor_agent.proto_wire import field_message, field_string


def test_cursor_connect_decode_line_hex(tmp_path):
    text_delta = field_string(1, "decoded")
    interaction = field_message(1, text_delta)
    hex_path = tmp_path / "frame.hex"
    hex_path.write_text(interaction.hex() + "\n")

    repo = Path(__file__).resolve().parents[1]
    proc = subprocess.run(
        [sys.executable, str(repo / "scripts" / "cursor_connect_decode.py"), str(hex_path)],
        cwd=repo,
        env={**dict(__import__("os").environ), "PYTHONPATH": str(repo)},
        capture_output=True,
        text=True,
        check=True,
    )
    lines = [json.loads(ln) for ln in proc.stdout.splitlines() if ln.strip()]
    assert any(row.get("text") == "decoded" for row in lines)
