#!/usr/bin/env python3
"""Compare cursor-agent vs shim upstream captures (api2.cursor.sh)."""
from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path
from typing import Any

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from codex_shim.providers.cursor_agent.run_decode import decode_upstream_run_capture  # noqa: E402

UUID_RE = re.compile(
    r"^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$",
    re.IGNORECASE,
)

CRITICAL_HEADERS = frozenset(
    {
        "content-type",
        "connect-protocol-version",
        "x-cursor-client-version",
        "x-cursor-client-type",
        "x-ghost-mode",
        "x-cursor-streaming",
    }
)


def _load(path: Path) -> dict[str, Any]:
    data = json.loads(path.read_text(encoding="utf-8"))
    if not isinstance(data, dict):
        raise ValueError(f"{path} must be a JSON object")
    return data


def _normalize_scalar(value: Any) -> Any:
    if isinstance(value, str):
        text = value.strip()
        if UUID_RE.match(text):
            return "<uuid>"
        if text.startswith("cli-"):
            return "<cli-version>"
        return text
    return value


def _header_rows(left: dict[str, Any], right: dict[str, Any]) -> list[dict[str, Any]]:
    rows: list[dict[str, Any]] = []
    left_h = {k.lower(): v for k, v in (left.get("headers") or {}).items()}
    right_h = {k.lower(): v for k, v in (right.get("headers") or {}).items()}
    for key in sorted(CRITICAL_HEADERS):
        rows.append(
            {
                "key": f"header:{key}",
                "expected": _normalize_scalar(left_h.get(key)),
                "got": _normalize_scalar(right_h.get(key)),
                "match": _normalize_scalar(left_h.get(key)) == _normalize_scalar(right_h.get(key)),
            }
        )
    return rows


def _proto_rows(left: dict[str, Any], right: dict[str, Any]) -> list[dict[str, Any]]:
    left_decoded = decode_upstream_run_capture(left)
    right_decoded = decode_upstream_run_capture(right)
    rows: list[dict[str, Any]] = []
    for key in ("userText", "latestUserPrompt", "modelId", "conversationId", "conversationGroupId"):
        expected = _normalize_scalar(left_decoded.get(key))
        got = _normalize_scalar(right_decoded.get(key))
        rows.append(
            {
                "key": f"proto:{key}",
                "expected": expected,
                "got": got,
                "match": expected == got,
            }
        )
    rows.append(
        {
            "key": "proto:payloadBytes",
            "expected": left_decoded.get("payloadBytes"),
            "got": right_decoded.get("payloadBytes"),
            "match": left_decoded.get("payloadBytes") == right_decoded.get("payloadBytes"),
        }
    )
    left_uuids = sorted(set(left_decoded.get("uuidFields") or []))
    right_uuids = sorted(set(right_decoded.get("uuidFields") or []))
    rows.append(
        {
            "key": "proto:uuidFields",
            "expected": [_normalize_scalar(value) for value in left_uuids],
            "got": [_normalize_scalar(value) for value in right_uuids],
            "match": left_uuids == right_uuids,
        }
    )
    return rows


def _resume_proof_rows(
    left: dict[str, Any],
    right: dict[str, Any],
    *,
    golden_session_id: str | None,
    shim_session_id: str | None,
    shared_session: bool,
) -> list[dict[str, Any]]:
    left_decoded = decode_upstream_run_capture(left)
    right_decoded = decode_upstream_run_capture(right)
    rows: list[dict[str, Any]] = []
    if golden_session_id:
        rows.append(
            {
                "key": "resume:goldenConversationIdMatchesSeed",
                "expected": golden_session_id,
                "got": left_decoded.get("conversationId"),
                "match": left_decoded.get("conversationId") == golden_session_id,
            }
        )
    if shim_session_id:
        rows.append(
            {
                "key": "resume:shimConversationIdMatchesStore",
                "expected": shim_session_id,
                "got": right_decoded.get("conversationId"),
                "match": right_decoded.get("conversationId") == shim_session_id,
            }
        )
    if shared_session:
        rows.append(
            {
                "key": "resume:crossPathConversationIdMatch",
                "expected": left_decoded.get("conversationId"),
                "got": right_decoded.get("conversationId"),
                "match": left_decoded.get("conversationId") == right_decoded.get("conversationId"),
            }
        )
        rows.append(
            {
                "key": "resume:crossPathBodyHexMatch",
                "expected": f"{len(str(left.get('body_hex') or '')) // 2} bytes",
                "got": f"{len(str(right.get('body_hex') or '')) // 2} bytes",
                "match": str(left.get("body_hex") or "") == str(right.get("body_hex") or ""),
            }
        )
    return rows


def compare_captures(
    left: dict[str, Any],
    right: dict[str, Any],
    *,
    decode_proto: bool = False,
    resume_proof: bool = False,
    golden_session_id: str | None = None,
    shim_session_id: str | None = None,
    shared_session: bool = False,
) -> dict[str, Any]:
    rows: list[dict[str, Any]] = []
    rows.append(
        {
            "key": "path",
            "expected": left.get("path"),
            "got": right.get("path"),
            "match": left.get("path") == right.get("path"),
        }
    )
    rows.extend(_header_rows(left, right))
    left_hex = str(left.get("body_hex") or "")
    right_hex = str(right.get("body_hex") or "")
    rows.append(
        {
            "key": "body_bytes",
            "expected": left.get("body_bytes"),
            "got": right.get("body_bytes"),
            "match": left.get("body_bytes") == right.get("body_bytes"),
        }
    )
    rows.append(
        {
            "key": "body_hex",
            "expected": f"{len(left_hex)//2} bytes",
            "got": f"{len(right_hex)//2} bytes",
            "match": left_hex == right_hex,
        }
    )
    if decode_proto:
        rows.extend(_proto_rows(left, right))
    if resume_proof:
        rows.extend(
            _resume_proof_rows(
                left,
                right,
                golden_session_id=golden_session_id,
                shim_session_id=shim_session_id,
                shared_session=shared_session,
            )
        )
    mismatches = [row for row in rows if not row["match"]]
    return {"rows": rows, "ok": not mismatches, "mismatch_count": len(mismatches)}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("golden", type=Path, help="Direct cursor-agent capture")
    parser.add_argument("candidate", type=Path, help="Desktop/shim path capture")
    parser.add_argument("--json", action="store_true")
    parser.add_argument("--decode-proto", action="store_true")
    parser.add_argument("--resume-proof", action="store_true")
    parser.add_argument("--golden-session-id")
    parser.add_argument("--shim-session-id")
    parser.add_argument("--shared-session", action="store_true")
    args = parser.parse_args()
    report = compare_captures(
        _load(args.golden),
        _load(args.candidate),
        decode_proto=args.decode_proto,
        resume_proof=args.resume_proof,
        golden_session_id=args.golden_session_id,
        shim_session_id=args.shim_session_id,
        shared_session=args.shared_session,
    )
    if args.json:
        print(json.dumps(report, indent=2))
    else:
        for row in report["rows"]:
            tag = "OK" if row["match"] else "DIFF"
            print(f"[{tag}] {row['key']}: expected={row['expected']!r} got={row['got']!r}")
        print("PARITY OK" if report["ok"] else f"PARITY DIFF ({report['mismatch_count']} mismatches)")
    return 0 if report["ok"] else 1


if __name__ == "__main__":
    raise SystemExit(main())
