#!/usr/bin/env python3
"""Diff parsed capture JSONL files (top-level request keys and item types)."""

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path
from typing import Any


def _load_jsonl(path: Path) -> list[dict[str, Any]]:
    rows: list[dict[str, Any]] = []
    for line in path.read_text(encoding="utf-8").splitlines():
        line = line.strip()
        if line:
            rows.append(json.loads(line))
    return rows


def _body_keys(rows: list[dict[str, Any]]) -> set[str]:
    keys: set[str] = set()
    for row in rows:
        body = row.get("request_body")
        if isinstance(body, dict):
            keys.update(body.keys())
    return keys


def _input_item_types(rows: list[dict[str, Any]]) -> set[str]:
    types: set[str] = set()
    for row in rows:
        body = row.get("request_body")
        if not isinstance(body, dict):
            continue
        input_items = body.get("input")
        if not isinstance(input_items, list):
            continue
        for item in input_items:
            if isinstance(item, dict) and "type" in item:
                types.add(str(item["type"]))
    return types


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("left", type=Path, help="First parsed .jsonl")
    parser.add_argument("right", type=Path, help="Second parsed .jsonl")
    args = parser.parse_args(argv)

    left_rows = _load_jsonl(args.left)
    right_rows = _load_jsonl(args.right)
    left_keys = _body_keys(left_rows)
    right_keys = _body_keys(right_rows)
    left_types = _input_item_types(left_rows)
    right_types = _input_item_types(right_rows)

    print(f"left:  {args.left} ({len(left_rows)} entries)")
    print(f"right: {args.right} ({len(right_rows)} entries)")
    print()
    print("request body keys only in left:", sorted(left_keys - right_keys))
    print("request body keys only in right:", sorted(right_keys - left_keys))
    print()
    print("input item types only in left:", sorted(left_types - right_types))
    print("input item types only in right:", sorted(right_types - left_types))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
