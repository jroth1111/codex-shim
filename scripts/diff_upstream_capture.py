#!/usr/bin/env python3
"""Compare two upstream capture JSON files (native vs shim) for ChatGPT parity."""
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path
from typing import Any

UUID_RE = re.compile(
    r"^[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}$",
    re.IGNORECASE,
)
WINDOW_ID_SUFFIX_RE = re.compile(r"^[0-9a-f-]{36}:\d+$", re.IGNORECASE)

VOLATILE_HEADERS = frozenset(
    {
        "authorization",
        "cookie",
        "host",
        "content-length",
        "accept-encoding",
        "connection",
        "x-oai-attestation",
        "x-client-request-id",
        "user-agent",
    }
)

BETA_EQUIVALENTS = {
    "responses=2026-02-06",
    "responses_websockets=2026-02-06",
}

CRITICAL_HEADERS = frozenset(
    {
        "accept",
        "chatgpt-account-id",
        "content-type",
        "openai-beta",
        "originator",
        "session-id",
        "thread-id",
        "x-codex-beta-features",
        "x-codex-installation-id",
        "x-codex-turn-metadata",
        "x-codex-window-id",
        "x-codex-parent-thread-id",
        "x-openai-subagent",
    }
)

VOLATILE_BODY_KEYS = frozenset({"prompt_cache_key", "type", "generate"})
DESKTOP_PARITY_STRIP_BODY_KEYS = frozenset({"instructions"})
DESKTOP_DIRECT_OPTIONAL_TOOL_NAMES = frozenset(
    {
        "list_available_plugins_to_install",
        "request_plugin_install",
    }
)
VOLATILE_CLIENT_METADATA_KEYS = frozenset({"x-codex-ws-stream-request-start-ms"})
VOLATILE_TURN_METADATA_KEYS = frozenset({"turn_started_at_unix_ms"})
CLI_VOLATILE_WORKSPACE_ENTRY_KEYS = frozenset(
    {
        "associated_remote_urls",
        "latest_git_commit_hash",
    }
)
VOLATILE_RESPONSE_HEADER_KEYS = frozenset(
    {
        "date",
        "server",
        "set-cookie",
        "transfer-encoding",
        "connection",
        "cf-ray",
        "x-envoy-upstream-service-time",
        "content-length",
        "content-type",
        "report-to",
        "nel",
    }
)
TURN_METADATA_HEADER = "x-codex-turn-metadata"


def _load_capture(path: Path) -> dict[str, Any]:
    data = json.loads(path.read_text(encoding="utf-8"))
    if not isinstance(data, dict):
        raise ValueError(f"{path} must contain a JSON object")
    return data


def _normalize_scalar(value: Any) -> Any:
    if isinstance(value, int) and value > 1_000_000_000_000:
        return "<timestamp_ms>"
    if isinstance(value, str):
        text = value.strip()
        if text in BETA_EQUIVALENTS:
            return "responses=2026-02-06"
        if text.isdigit() and len(text) >= 10:
            return "<timestamp_ms>"
        if UUID_RE.match(text):
            return "<uuid>"
        if WINDOW_ID_SUFFIX_RE.match(text):
            return "<uuid>:0"
        if text.startswith("v1.") and len(text) > 40:
            return "<attestation>"
        return text
    return value


def _normalize_workspaces(value: Any) -> Any:
    if not isinstance(value, dict):
        return _normalize(value)
    normalized: dict[str, Any] = {}
    for path in sorted(value):
        entry = value[path]
        if isinstance(entry, dict):
            normalized[str(path)] = {
                str(key): _normalize(entry[key])
                for key in sorted(entry)
                if str(key) not in CLI_VOLATILE_WORKSPACE_ENTRY_KEYS
            }
        else:
            normalized[str(path)] = _normalize(entry)
    return normalized


def _normalize_turn_metadata(value: dict[str, Any]) -> dict[str, Any]:
    normalized: dict[str, Any] = {}
    for key in sorted(value):
        if str(key) in VOLATILE_TURN_METADATA_KEYS:
            continue
        raw = value[key]
        if str(key) == "workspaces":
            normalized[str(key)] = _normalize_workspaces(raw)
        else:
            normalized[str(key)] = _normalize(raw)
    return normalized


def _normalize_header_value(key: str, value: str) -> Any:
    if key == TURN_METADATA_HEADER:
        try:
            parsed = json.loads(value)
        except json.JSONDecodeError:
            pass
        else:
            if isinstance(parsed, dict):
                return _normalize_turn_metadata(parsed)
    return _normalize_scalar(value)


def _normalize(value: Any) -> Any:
    value = _normalize_scalar(value)
    if isinstance(value, dict):
        return {str(key): _normalize(value[key]) for key in sorted(value)}
    if isinstance(value, list):
        return [_normalize(item) for item in value]
    return value


def _normalize_client_metadata(client_metadata: dict[str, Any]) -> dict[str, Any]:
    normalized: dict[str, Any] = {}
    for key in sorted(client_metadata):
        if str(key) in VOLATILE_CLIENT_METADATA_KEYS:
            continue
        raw = client_metadata[key]
        if str(key) == TURN_METADATA_HEADER and isinstance(raw, str):
            try:
                parsed = json.loads(raw)
            except json.JSONDecodeError:
                normalized[str(key)] = _normalize_scalar(raw)
            else:
                if isinstance(parsed, dict):
                    normalized[str(key)] = _normalize_turn_metadata(parsed)
                else:
                    normalized[str(key)] = _normalize(parsed)
            continue
        normalized[str(key)] = _normalize(raw)
    return normalized


def _normalize_tools(tools: Any) -> list[Any]:
    if not isinstance(tools, list):
        return []
    normalized: list[Any] = []
    for tool in tools:
        if not isinstance(tool, dict):
            normalized.append(_normalize(tool))
            continue
        name = tool.get("name")
        if isinstance(name, str) and name in DESKTOP_DIRECT_OPTIONAL_TOOL_NAMES:
            continue
        normalized.append(_normalize(tool))
    return sorted(normalized, key=lambda item: json.dumps(item, sort_keys=True))


def _normalize_body(body: dict[str, Any]) -> dict[str, Any]:
    normalized: dict[str, Any] = {}
    for key in sorted(body):
        if str(key) in VOLATILE_BODY_KEYS:
            continue
        value = body[key]
        if str(key) == "client_metadata" and isinstance(value, dict):
            normalized[str(key)] = _normalize_client_metadata(value)
        elif str(key) == "tools":
            normalized[str(key)] = _normalize_tools(value)
        else:
            normalized[str(key)] = _normalize(value)
    for key in DESKTOP_PARITY_STRIP_BODY_KEYS:
        normalized.pop(key, None)
    text = normalized.get("text")
    if isinstance(text, dict) and set(text.keys()) == {"verbosity"}:
        normalized.pop("text", None)
    return normalized


def _normalize_response_headers(headers: dict[str, Any]) -> dict[str, str]:
    normalized: dict[str, str] = {}
    for key, value in headers.items():
        lowered = str(key).lower()
        if lowered in VOLATILE_RESPONSE_HEADER_KEYS:
            continue
        normalized[lowered] = str(_normalize_scalar(value))
    return dict(sorted(normalized.items()))


def _normalize_upstream_response(payload: dict[str, Any]) -> dict[str, Any]:
    normalized: dict[str, Any] = {"status": payload.get("status")}
    headers = payload.get("headers")
    if isinstance(headers, dict):
        normalized["headers"] = _normalize_response_headers(headers)
    return normalized


def _first_diff_path(left: Any, right: Any, *, prefix: str = "") -> str | None:
    if left == right:
        return None
    if isinstance(left, dict) and isinstance(right, dict):
        keys = sorted(set(left) | set(right))
        for key in keys:
            path = f"{prefix}.{key}" if prefix else str(key)
            if key not in left:
                return f"{path} missing left"
            if key not in right:
                return f"{path} missing right"
            nested = _first_diff_path(left[key], right[key], prefix=path)
            if nested:
                return nested
        return None
    if isinstance(left, list) and isinstance(right, list):
        if len(left) != len(right):
            return f"{prefix} length differs left={len(left)} right={len(right)}"
        for index, (left_item, right_item) in enumerate(zip(left, right)):
            nested = _first_diff_path(left_item, right_item, prefix=f"{prefix}[{index}]")
            if nested:
                return nested
        return None
    return f"{prefix or 'value'} differs: left={left!r} right={right!r}"


def _headers_map(capture: dict[str, Any]) -> dict[str, str]:
    headers = capture.get("headers") or {}
    if not isinstance(headers, dict):
        return {}
    return {str(key).lower(): str(value) for key, value in headers.items()}


def _body(capture: dict[str, Any]) -> dict[str, Any]:
    body = capture.get("body") or {}
    return body if isinstance(body, dict) else {}


def _compare_headers(left: dict[str, str], right: dict[str, str]) -> list[str]:
    issues: list[str] = []
    left_keys = set(left)
    right_keys = set(right)

    for key in sorted((left_keys | right_keys) - VOLATILE_HEADERS):
        in_left = key in left_keys
        in_right = key in right_keys
        if in_left != in_right:
            marker = "CRITICAL" if key in CRITICAL_HEADERS else "header"
            issues.append(f"{marker} `{key}` present left={in_left} right={in_right}")
            continue
        if _normalize_header_value(key, left[key]) != _normalize_header_value(key, right[key]):
            marker = "CRITICAL" if key in CRITICAL_HEADERS else "header"
            issues.append(
                f"{marker} `{key}` differs: left={left[key]!r} right={right[key]!r}"
            )
    return issues


def _collect_field_diffs(left: Any, right: Any, *, prefix: str = "", limit: int = 10) -> list[str]:
    diffs: list[str] = []
    if left == right:
        return diffs
    if isinstance(left, dict) and isinstance(right, dict):
        keys = sorted(set(left) | set(right))
        for key in keys:
            if len(diffs) >= limit:
                break
            path = f"{prefix}.{key}" if prefix else str(key)
            if key not in left:
                diffs.append(f"{path} missing left")
                continue
            if key not in right:
                diffs.append(f"{path} missing right")
                continue
            diffs.extend(_collect_field_diffs(left[key], right[key], prefix=path, limit=limit - len(diffs)))
        return diffs[:limit]
    if isinstance(left, list) and isinstance(right, list):
        if len(left) != len(right):
            return [f"{prefix or 'value'} length differs left={len(left)} right={len(right)}"]
        for index, (left_item, right_item) in enumerate(zip(left, right)):
            if len(diffs) >= limit:
                break
            nested = _collect_field_diffs(left_item, right_item, prefix=f"{prefix}[{index}]", limit=limit - len(diffs))
            diffs.extend(nested)
        return diffs[:limit]
    return [f"{prefix or 'value'} differs: left={left!r} right={right!r}"]


def _categorize_issue(issue: str) -> str:
    lowered = issue.lower()
    if "upstream_response" in lowered:
        return "response"
    if "originator" in lowered or "`" in issue and "header" in lowered or "critical" in lowered:
        return "headers"
    if "sandbox" in lowered:
        return "sandbox"
    if "model" in lowered:
        return "model"
    if "permissions" in lowered:
        return "permissions"
    if "input" in lowered:
        return "input"
    if "turn-metadata" in lowered or "turn_metadata" in lowered:
        return "turn_metadata"
    if "body differs" in lowered:
        return "body"
    if "timestamp" in lowered or "<uuid>" in lowered:
        return "volatile"
    return "body"


def _compare_bodies(left: dict[str, Any], right: dict[str, Any]) -> list[str]:
    left_norm = _normalize_body(left)
    right_norm = _normalize_body(right)
    if left_norm == right_norm:
        return []
    detail = _first_diff_path(left_norm, right_norm) or "unknown body delta"
    return [f"body differs after normalization: {detail}"]


def _compare_upstream_responses(left: dict[str, Any], right: dict[str, Any]) -> list[str]:
    left_resp = left.get("upstream_response")
    right_resp = right.get("upstream_response")
    if left_resp is None and right_resp is None:
        return []
    if left_resp is None or right_resp is None:
        return [
            "upstream_response present "
            f"left={left_resp is not None} right={right_resp is not None}"
        ]
    if not isinstance(left_resp, dict) or not isinstance(right_resp, dict):
        return ["upstream_response must be objects when present"]
    left_norm = _normalize_upstream_response(left_resp)
    right_norm = _normalize_upstream_response(right_resp)
    if left_norm == right_norm:
        return []
    detail = _first_diff_path(left_norm, right_norm) or "unknown response delta"
    return [f"upstream_response differs after normalization: {detail}"]


def compare_captures(left: dict[str, Any], right: dict[str, Any], *, verbose: bool = False) -> dict[str, Any]:
    left_headers = _headers_map(left)
    right_headers = _headers_map(right)
    left_body = _body(left)
    right_body = _body(right)

    header_issues = _compare_headers(left_headers, right_headers)
    body_issues = _compare_bodies(left_body, right_body)
    response_issues = _compare_upstream_responses(left, right)
    issues = [*header_issues, *body_issues, *response_issues]

    left_originator = left_headers.get("originator")
    right_originator = right_headers.get("originator")
    if left_originator != right_originator:
        issues.append(
            f"originator differs: left={left_originator!r} right={right_originator!r}"
        )

    left_norm = _normalize_body(left_body)
    right_norm = _normalize_body(right_body)
    issue_categories: dict[str, list[str]] = {}
    for issue in issues:
        category = _categorize_issue(issue)
        issue_categories.setdefault(category, []).append(issue)

    report: dict[str, Any] = {
        "ok": not issues,
        "issues": issues,
        "headers_ok": not header_issues and left_originator == right_originator,
        "body_ok": not body_issues,
        "response_ok": not response_issues,
        "issue_categories": issue_categories,
        "field_diffs": _collect_field_diffs(left_norm, right_norm),
        "left_url": left.get("url"),
        "right_url": right.get("url"),
        "left_originator": left_originator,
        "right_originator": right_originator,
        "left_body_keys": sorted(left_norm),
        "right_body_keys": sorted(right_norm),
    }
    if verbose:
        report["body_hash_left"] = json.dumps(left_norm, sort_keys=True)
        report["body_hash_right"] = json.dumps(right_norm, sort_keys=True)
    else:
        for key in ("body_hash_left", "body_hash_right"):
            full = json.dumps(left_norm if key.endswith("left") else right_norm, sort_keys=True)
            report[key] = full[:200] + ("..." if len(full) > 200 else "")
    return report


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("left", type=Path, help="Reference capture (native Desktop golden)")
    parser.add_argument("right", type=Path, help="Candidate capture (shim upstream)")
    parser.add_argument("--json", action="store_true", help="Emit JSON report")
    parser.add_argument("--verbose", action="store_true", help="Include full normalized body hashes")
    args = parser.parse_args(argv)

    left = _load_capture(args.left)
    right = _load_capture(args.right)
    report = compare_captures(left, right, verbose=args.verbose)

    if args.json:
        print(json.dumps(report, indent=2))
    else:
        print(f"left:  {args.left}")
        print(f"right: {args.right}")
        print(f"left url:  {report.get('left_url')}")
        print(f"right url: {report.get('right_url')}")
        print(f"originator: left={report.get('left_originator')!r} right={report.get('right_originator')!r}")
        print()
        if report["ok"]:
            print("PARITY OK — headers, full normalized body, and upstream response match")
        else:
            print("PARITY GAPS:")
            for issue in report["issues"]:
                print(f"  - {issue}")

    return 0 if report["ok"] else 1


if __name__ == "__main__":
    raise SystemExit(main())
