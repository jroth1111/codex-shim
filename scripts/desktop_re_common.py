#!/usr/bin/env python3
"""Shared helpers for Codex Desktop reverse-engineering scripts."""

from __future__ import annotations

import hashlib
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]

import sys

sys.path.insert(0, str(ROOT))

from codex_shim.desktop_decompiled import (  # noqa: E402
    codex_strings_path,
    desktop_decompiled_root,
    provenance_readme,
)

RPC_GLUE_MARKERS = (
    "initializethread/start",
    "thread/startthread/resume",
)
RPC_NAMESPACES = sorted(
    (
        "thread/",
        "turn/",
        "config/",
        "configRequirements/",
        "fs/",
        "skills/",
        "hooks/",
        "marketplace/",
        "plugin/",
        "memory/",
        "review/",
        "command/",
        "model/",
        "modelProvider/",
        "experimentalFeature/",
        "permissionProfile/",
        "remoteControl/",
        "collaborationMode/",
        "mock/",
        "environment/",
        "mcpServer/",
        "windowsSandbox/",
        "account/",
        "feedback/",
        "process/",
        "externalAgentConfig/",
        "fuzzyFileSearch/",
        "item/",
        "agent/",
        "plan/",
        "reasoning/",
        "error/",
        "warning/",
    ),
    key=len,
    reverse=True,
)
STANDALONE_METHODS = (
    "initialize",
    "getConversationSummary",
    "gitDiffToRemote",
    "getAuthStatus",
)


def source_version() -> str:
    text = provenance_readme().read_text()
    match = re.search(r"\| Bundle version \| ([^|]+) \|", text)
    return match.group(1).strip() if match else "unknown"


def strings_text() -> str:
    return codex_strings_path().read_text(errors="replace")


def strings_sha256() -> str:
    return hashlib.sha256(codex_strings_path().read_bytes()).hexdigest()


def extracted_dir() -> Path:
    return desktop_decompiled_root() / "extracted"


def schemas_dir() -> Path:
    return extracted_dir() / "schemas"


def codex_binary_path() -> Path:
    return desktop_decompiled_root() / "native-binaries" / "codex"


def _split_glued_rpc_segment(segment: str) -> list[str]:
    methods: list[str] = []
    index = 0
    if segment.startswith("initialize"):
        methods.append("initialize")
        index = len("initialize")
    while index < len(segment):
        matched_ns = None
        for namespace in RPC_NAMESPACES:
            if segment.startswith(namespace, index):
                matched_ns = namespace
                break
        if matched_ns is None:
            for standalone in STANDALONE_METHODS:
                if segment.startswith(standalone, index):
                    methods.append(standalone)
                    index += len(standalone)
                    matched_ns = ""
                    break
            if matched_ns is None:
                break
            continue
        end = index + len(matched_ns)
        while end < len(segment):
            next_ns = None
            for namespace in RPC_NAMESPACES:
                if segment.startswith(namespace, end):
                    next_ns = namespace
                    break
            if next_ns is None:
                for standalone in STANDALONE_METHODS:
                    if segment.startswith(standalone, end):
                        next_ns = standalone
                        break
            if next_ns is not None:
                break
            end += 1
        methods.append(segment[index:end])
        index = end
    return methods


def parse_rpc_methods(text: str) -> tuple[str, ...]:
    """Extract app-server JSON-RPC method names from Desktop strings."""
    methods: list[str] = []
    seen: set[str] = set()
    for marker in RPC_GLUE_MARKERS:
        start = text.find(marker)
        if start < 0:
            continue
        for name in _split_glued_rpc_segment(text[start : start + 4000]):
            if "/" not in name and name not in STANDALONE_METHODS:
                continue
            if name.endswith("/"):
                continue
            if any(char in name for char in "\n\r\t"):
                continue
            if len(name) > 80:
                continue
            if name in seen:
                continue
            seen.add(name)
            methods.append(name)
    if not methods:
        raise ValueError("Could not locate glued RPC method list in Desktop strings.")
    return tuple(sorted(methods))


def _parse_typescript_field_block(text: str, *, file_marker: str, type_marker: str) -> tuple[str, ...]:
    start = text.find(file_marker)
    end = text.find(type_marker, start)
    if start < 0 or end < 0:
        return ()
    fields: list[str] = []
    for line in text[start:end].splitlines():
        value = line.strip()
        if not value or value.endswith(".ts") or value.startswith("type "):
            continue
        if re.fullmatch(r"[a-zA-Z][a-zA-Z0-9_]*", value):
            fields.append(value)
    return tuple(dict.fromkeys(fields))


def parse_thread_settings_fields(text: str) -> tuple[str, ...]:
    fields = _parse_typescript_field_block(
        text,
        file_marker="ThreadSettings.ts",
        type_marker="type ThreadSettings",
    )
    if not fields:
        raise ValueError("Could not locate ThreadSettings.ts field block in Desktop strings.")
    return fields


def parse_thread_start_param_fields(text: str) -> tuple[str, ...]:
    return _parse_typescript_field_block(
        text,
        file_marker="ThreadStartParams.ts",
        type_marker="type ThreadStartParams",
    )


def parse_model_provider_wire_fields(text: str) -> tuple[str, ...]:
    candidates = (
        "wire_api",
        "base_url",
        "supports_websockets",
        "requires_openai_auth",
        "env_key",
        "experimental_bearer_token",
        "name",
        "http_headers",
    )
    missing = [field for field in candidates if field not in text]
    if missing:
        raise ValueError(f"Desktop strings missing ModelProvider fields: {sorted(missing)}")
    return candidates


def parse_desktop_http_endpoints(text: str) -> tuple[str, ...]:
    patterns = (
        r"https://chatgpt\.com/backend-api/codex/responses",
        r"https://chatgpt\.com/backend-api/codex",
        r"https://chatgpt\.com/backend-api",
        r"https://api\.openai\.com/v1",
        r"/v1/models",
        r"/v1/responses",
    )
    found: list[str] = []
    for pattern in patterns:
        match = re.search(pattern, text)
        if match:
            found.append(match.group(0))
    if not found:
        raise ValueError("Could not locate Desktop HTTP endpoint strings.")
    return tuple(dict.fromkeys(found))


def try_extract_json_blob(data: bytes, anchor: int, *, max_back: int = 2_000_000, max_size: int = 8_000_000) -> bytes | None:
    """Find a UTF-8 JSON object near a byte anchor."""
    for i in range(anchor, max(0, anchor - max_back), -1):
        if data[i : i + 1] != b"{":
            continue
        depth = 0
        end = None
        for j in range(i, min(i + max_size, len(data))):
            byte = data[j]
            if byte == ord("{"):
                depth += 1
            elif byte == ord("}"):
                depth -= 1
                if depth == 0:
                    end = j + 1
                    break
        if end is None:
            continue
        blob = data[i:end]
        try:
            blob.decode("utf-8")
        except UnicodeDecodeError:
            continue
        try:
            json.loads(blob)
        except json.JSONDecodeError:
            continue
        return blob
    return None


def write_json(path: Path, payload: object) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(payload, indent=2, sort_keys=True) + "\n", encoding="utf-8")
