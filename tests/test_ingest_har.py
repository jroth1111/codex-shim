from __future__ import annotations

import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def test_ingest_har_filters_loopback_responses(tmp_path: Path) -> None:
    har = {
        "log": {
            "entries": [
                {
                    "startedDateTime": "2026-06-01T00:00:00Z",
                    "request": {
                        "method": "POST",
                        "url": "http://127.0.0.1:8765/v1/responses",
                        "headers": [{"name": "Content-Type", "value": "application/json"}],
                        "postData": {
                            "mimeType": "application/json",
                            "text": json.dumps({"model": "gpt-5.5", "input": [{"type": "message"}]}),
                        },
                    },
                    "response": {"status": 200, "content": {"mimeType": "application/json", "text": "{}"}},
                },
                {
                    "request": {"method": "GET", "url": "https://example.com/"},
                    "response": {"status": 200},
                },
            ]
        }
    }
    har_path = tmp_path / "sample.har"
    har_path.write_text(json.dumps(har), encoding="utf-8")
    out = tmp_path / "out.jsonl"
    script = ROOT / "scripts" / "ingest_har.py"
    result = subprocess.run(
        [sys.executable, str(script), str(har_path), "--scenario", "S1", "--out", str(out)],
        cwd=ROOT,
        capture_output=True,
        text=True,
    )
    assert result.returncode == 0, result.stderr
    lines = [json.loads(line) for line in out.read_text(encoding="utf-8").splitlines() if line.strip()]
    assert len(lines) == 1
    assert lines[0]["path"] == "/v1/responses"
    assert lines[0]["request_body"]["model"] == "gpt-5.5"
