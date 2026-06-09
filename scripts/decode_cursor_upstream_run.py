#!/usr/bin/env python3
"""Decode AgentService/Run capture JSON into protobuf fields."""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from codex_shim.providers.cursor_agent.run_decode import decode_upstream_run_capture  # noqa: E402


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("capture", type=Path, help="cursor upstream capture JSON")
    args = parser.parse_args()
    payload = json.loads(args.capture.read_text(encoding="utf-8"))
    print(json.dumps(decode_upstream_run_capture(payload), indent=2, ensure_ascii=False))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
