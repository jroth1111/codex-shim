#!/usr/bin/env python3
"""Redact secrets from upstream capture JSON for committed fixtures."""
from __future__ import annotations

import argparse
import json
from pathlib import Path
from typing import Any

REDACT_HEADERS = frozenset(
    {
        "authorization",
        "cookie",
        "x-oai-attestation",
        "x-client-request-id",
    }
)


def sanitize_capture(data: dict[str, Any]) -> dict[str, Any]:
    headers = data.get("headers")
    if isinstance(headers, dict):
        sanitized_headers: dict[str, str] = {}
        for key, value in headers.items():
            if str(key).lower() in REDACT_HEADERS:
                sanitized_headers[key] = "[REDACTED]"
            else:
                sanitized_headers[key] = str(value)
        data = {**data, "headers": sanitized_headers}
    return data


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("input", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args(argv)

    payload = json.loads(args.input.read_text(encoding="utf-8"))
    if not isinstance(payload, dict):
        raise SystemExit(f"{args.input} must contain a JSON object")
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(
        json.dumps(sanitize_capture(payload), indent=2, sort_keys=True) + "\n",
        encoding="utf-8",
    )
    print(f"Wrote {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
