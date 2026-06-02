#!/usr/bin/env python3
"""Export shim-wire parsed captures into committed test fixtures."""

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path
from typing import Any

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from codex_shim.desktop_decompiled import desktop_decompiled_root  # noqa: E402

FIXTURE_DIR = ROOT / "tests" / "fixtures" / "desktop" / "captured"

SCENARIO_NAMES: dict[str, str] = {
    "S1": "S1_tier_a_passthrough.json",
    "S2": "S2_tier_a_history_turn.json",
    "S3": "S3_tier_a_web_search.json",
    "S4": "S4_tier_a_compact.json",
    "S5": "S5_byok_turn1.json",
    "S6": "S6_byok_previous_response_id.json",
    "S8": "S8_byok_websocket.json",
    "S9": "S9_image_generation.json",
    "S10": "S10_local_shell.json",
}


def _trim_response(body: dict[str, Any] | None) -> dict[str, Any] | None:
    if not isinstance(body, dict):
        return body
    output = body.get("output")
    output_summary: list[dict[str, str]] = []
    if isinstance(output, list):
        for item in output:
            if isinstance(item, dict):
                output_summary.append(
                    {"type": str(item.get("type", "")), "status": str(item.get("status", ""))}
                )
    return {
        "id": body.get("id"),
        "object": body.get("object"),
        "status": body.get("status"),
        "model": body.get("model"),
        "output_summary": output_summary,
    }


def _record_to_fixture(record: dict[str, Any], *, rel_capture: str) -> dict[str, Any]:
    return {
        "scenario": record.get("scenario"),
        "source": record.get("source", "shim-wire"),
        "evidence": ["CAPTURE"],
        "capture_ref": rel_capture,
        "method": record.get("method"),
        "path": record.get("path"),
        "request": record.get("request_body") or {},
        "response_status": record.get("status"),
        "response": _trim_response(record.get("response_body")),
    }


def export_fixtures(*, write: bool) -> list[Path]:
    parsed_dir = desktop_decompiled_root() / "captures" / "parsed"
    written: list[Path] = []
    for scenario, filename in SCENARIO_NAMES.items():
        jsonl_path = parsed_dir / f"{scenario}_shim_wire.jsonl"
        if not jsonl_path.is_file():
            raise SystemExit(f"missing parsed capture: {jsonl_path}")
        rel_capture = str(jsonl_path.relative_to(ROOT))
        records = [
            json.loads(line)
            for line in jsonl_path.read_text(encoding="utf-8").splitlines()
            if line.strip()
        ]
        if not records:
            raise SystemExit(f"empty capture: {jsonl_path}")
        if scenario == "S6" and len(records) >= 2:
            payload = {
                "scenario": "S6",
                "source": "shim-wire",
                "evidence": ["CAPTURE"],
                "capture_ref": rel_capture,
                "turns": [_record_to_fixture(r, rel_capture=rel_capture) for r in records[:2]],
            }
        else:
            payload = _record_to_fixture(records[0], rel_capture=rel_capture)
        out_path = FIXTURE_DIR / filename
        text = json.dumps(payload, indent=2, sort_keys=True) + "\n"
        if write:
            FIXTURE_DIR.mkdir(parents=True, exist_ok=True)
            out_path.write_text(text, encoding="utf-8")
        written.append(out_path)
    return written


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--write",
        action="store_true",
        help="Write fixtures (default: print paths only)",
    )
    args = parser.parse_args()
    paths = export_fixtures(write=args.write)
    for path in paths:
        print(path.relative_to(ROOT))


if __name__ == "__main__":
    main()
