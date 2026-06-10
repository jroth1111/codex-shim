from __future__ import annotations

import json
import os
import uuid
from copy import deepcopy
from enum import StrEnum
from pathlib import Path
from typing import Any

from aiohttp import web

from .catalog import chatgpt_passthrough_entry
from .debug_dump import DEBUG_DIR, _redacted, _truthy
from .sessions import header_value as _header_value
from .sessions import parse_turn_metadata, resolve_thread_and_session_ids
from .sessions import truthy_id as _truthy_id
from .settings import DEFAULT_CODEX_AUTH
from .upstream_capture import capture_flag, capture_value

DEFAULT_DESKTOP_ORIGINATOR = "Codex Desktop"
DEFAULT_CLI_ORIGINATOR = "codex_cli_rs"
DEFAULT_EXEC_ORIGINATOR = "codex_exec"
KNOWN_DESKTOP_ORIGINATORS = frozenset(
    {
        DEFAULT_DESKTOP_ORIGINATOR.lower(),
        "codex_chatgpt_desktop",
    }
)
INSTALLATION_ID_FILENAME = "installation_id"
X_CODEX_INSTALLATION_ID = "x-codex-installation-id"
X_CODEX_PARENT_THREAD_ID = "x-codex-parent-thread-id"
X_CODEX_TURN_METADATA = "x-codex-turn-metadata"
X_CODEX_WINDOW_ID = "x-codex-window-id"
X_OPENAI_SUBAGENT = "x-openai-subagent"
WINDOW_ID_KEY = "window_id"
NATIVE_CLIENT_METADATA_KEYS = frozenset(
    {
        X_CODEX_WINDOW_ID,
        X_CODEX_INSTALLATION_ID,
        X_CODEX_PARENT_THREAD_ID,
    }
)


class UpstreamProfile(StrEnum):
    DESKTOP = "desktop"
    CLI = "cli"
    MINIMAL = "minimal"


def _codex_home() -> Path:
    return Path(os.environ.get("CODEX_HOME", DEFAULT_CODEX_AUTH.parent)).expanduser()


def _turn_metadata_raw(request: web.Request, body: dict[str, Any]) -> Any:
    header_value = request.headers.get(X_CODEX_TURN_METADATA)
    if header_value:
        return header_value
    client_metadata = body.get("client_metadata")
    if isinstance(client_metadata, dict):
        return client_metadata.get(X_CODEX_TURN_METADATA)
    return None


def _client_metadata_dict(body: dict[str, Any]) -> dict[str, Any] | None:
    client_metadata = body.get("client_metadata")
    return client_metadata if isinstance(client_metadata, dict) else None


def _turn_metadata_from_request(request: web.Request, body: dict[str, Any]) -> dict[str, Any] | None:
    return parse_turn_metadata(_turn_metadata_raw(request, body))


def _is_upstream_turn(body: dict[str, Any], request: web.Request) -> bool:
    turn_metadata = _turn_metadata_from_request(request, body)
    if isinstance(turn_metadata, dict) and turn_metadata.get("request_kind") == "turn":
        return True
    input_items = body.get("input")
    return isinstance(input_items, list) and len(input_items) > 0


def detect_desktop_upstream_shape(request: web.Request, body: dict[str, Any]) -> bool:
    if _is_desktop_client(request):
        return True

    if request.headers.get(X_CODEX_TURN_METADATA):
        return _is_upstream_turn(body, request)

    session_id_header = _header_value(request, "session-id")
    thread_id_header = _header_value(request, "thread-id")
    if session_id_header and thread_id_header:
        return _is_upstream_turn(body, request)

    client_metadata = _client_metadata_dict(body)
    if client_metadata is None:
        return False

    turn_raw = client_metadata.get(X_CODEX_TURN_METADATA)
    turn_metadata = parse_turn_metadata(turn_raw)
    if turn_metadata and (
        _truthy_id(turn_metadata.get("thread_id")) or _truthy_id(turn_metadata.get("session_id"))
    ):
        return _is_upstream_turn(body, request)

    if any(key in client_metadata for key in NATIVE_CLIENT_METADATA_KEYS):
        return _is_upstream_turn(body, request)

    return False


def _originator_hint(request: web.Request) -> str:
    return (_header_value(request, "originator") or "").strip().lower()


def _user_agent_hint(request: web.Request) -> str:
    return (_header_value(request, "User-Agent", "user-agent") or "").strip().lower()


def _is_desktop_client(request: web.Request) -> bool:
    originator = _originator_hint(request)
    user_agent = _user_agent_hint(request)
    return "codex desktop" in originator or "codex desktop" in user_agent


def _is_exec_client(request: web.Request) -> bool:
    originator = _originator_hint(request)
    user_agent = _user_agent_hint(request)
    return originator == DEFAULT_EXEC_ORIGINATOR or "codex_exec" in user_agent


def _is_cli_client(request: web.Request, body: dict[str, Any]) -> bool:
    if _is_exec_client(request):
        return True
    originator = _originator_hint(request)
    user_agent = _user_agent_hint(request)
    if originator == DEFAULT_CLI_ORIGINATOR or "codex_cli_rs" in user_agent:
        return True
    client_metadata = _client_metadata_dict(body)
    if not client_metadata:
        return False
    turn_metadata = parse_turn_metadata(client_metadata.get(X_CODEX_TURN_METADATA))
    if isinstance(turn_metadata, dict) and turn_metadata.get("workspaces"):
        return True
    return False


def _profile_override() -> UpstreamProfile | None:
    raw = os.environ.get("CODEX_SHIM_PASSTHROUGH_UPSTREAM_PROFILE", "").strip().lower()
    if raw in {UpstreamProfile.DESKTOP, UpstreamProfile.CLI, UpstreamProfile.MINIMAL}:
        return UpstreamProfile(raw)
    return None


def _desktop_headers_mode() -> str:
    raw = os.environ.get("CODEX_SHIM_PASSTHROUGH_DESKTOP_HEADERS")
    if raw is None:
        return "auto"
    lowered = str(raw).strip().lower()
    if lowered in {"0", "false", "no", "off"}:
        return "off"
    if lowered in {"1", "true", "yes", "on", "force"}:
        return "force"
    return "auto"


def resolve_upstream_profile(request: web.Request, body: dict[str, Any]) -> UpstreamProfile:
    override = _profile_override()
    if override is not None:
        return override

    mode = _desktop_headers_mode()
    if mode == "off":
        return UpstreamProfile.MINIMAL
    if mode == "force":
        return UpstreamProfile.DESKTOP

    if _is_desktop_client(request):
        return UpstreamProfile.DESKTOP
    if _is_cli_client(request, body):
        return UpstreamProfile.CLI
    if detect_desktop_upstream_shape(request, body):
        return UpstreamProfile.DESKTOP
    return UpstreamProfile.MINIMAL


def should_promote_desktop_parity(request: web.Request, body: dict[str, Any]) -> bool:
    return resolve_upstream_profile(request, body) == UpstreamProfile.DESKTOP


def uses_websockets_upstream_beta(profile: UpstreamProfile) -> bool:
    return profile in {UpstreamProfile.DESKTOP, UpstreamProfile.CLI}


def _parse_window_id(value: str | None) -> tuple[str | None, int | None]:
    if not value:
        return None, None
    if ":" not in value:
        return value, None
    thread_id, generation_raw = value.rsplit(":", 1)
    thread_id = thread_id.strip() or None
    try:
        generation = int(generation_raw)
    except ValueError:
        return thread_id, None
    return thread_id, max(generation, 0)


def _window_generation(turn_metadata: dict[str, Any] | None, existing_window_id: str | None) -> int:
    _thread, parsed_generation = _parse_window_id(existing_window_id)
    if parsed_generation is not None:
        return parsed_generation
    if not turn_metadata:
        return 0
    raw = turn_metadata.get("window_generation")
    if raw in (None, ""):
        return 0
    try:
        generation = int(raw)
    except (TypeError, ValueError):
        return 0
    return max(generation, 0)


def synthesize_window_id(
    request: web.Request,
    body: dict[str, Any],
    *,
    turn_metadata: dict[str, Any] | None,
    thread_id: str | None,
) -> str | None:
    existing = _header_value(request, X_CODEX_WINDOW_ID)
    if existing:
        return existing
    client_metadata = _client_metadata_dict(body)
    if client_metadata:
        existing = _truthy_id(client_metadata.get(X_CODEX_WINDOW_ID))
        if existing:
            return existing
    if not thread_id:
        return None
    generation = _window_generation(turn_metadata, existing)
    return f"{thread_id}:{generation}"


def ensure_installation_id() -> str | None:
    override = os.environ.get("CODEX_SHIM_PASSTHROUGH_INSTALLATION_ID", "").strip()
    if override:
        return override

    codex_home = _codex_home()
    path = codex_home / INSTALLATION_ID_FILENAME
    try:
        text = path.read_text(encoding="utf-8").strip()
    except OSError:
        text = ""
    if text:
        try:
            uuid.UUID(text)
        except ValueError:
            text = ""
    if not text:
        try:
            codex_home.mkdir(parents=True, exist_ok=True)
            text = str(uuid.uuid4())
            path.write_text(text, encoding="utf-8")
            path.chmod(0o644)
        except OSError:
            return None
    return text


def resolve_installation_id() -> str | None:
    return ensure_installation_id()


def passthrough_originator(*, desktop_context: bool = False, profile: UpstreamProfile | None = None) -> str:
    configured = os.environ.get("CODEX_SHIM_PASSTHROUGH_ORIGINATOR", "").strip()
    if configured:
        return configured
    if profile == UpstreamProfile.CLI:
        return DEFAULT_CLI_ORIGINATOR
    if desktop_context or profile == UpstreamProfile.DESKTOP:
        return DEFAULT_DESKTOP_ORIGINATOR
    return DEFAULT_CLI_ORIGINATOR


def resolve_cli_originator(request: web.Request) -> str:
    configured = os.environ.get("CODEX_SHIM_PASSTHROUGH_ORIGINATOR", "").strip()
    if configured:
        return configured
    inbound = _header_value(request, "originator")
    if inbound:
        lowered = inbound.strip().lower()
        if lowered in {DEFAULT_EXEC_ORIGINATOR, DEFAULT_CLI_ORIGINATOR}:
            return inbound.strip()
        if lowered in KNOWN_DESKTOP_ORIGINATORS:
            return DEFAULT_DESKTOP_ORIGINATOR
    if _is_exec_client(request):
        return DEFAULT_EXEC_ORIGINATOR
    return DEFAULT_CLI_ORIGINATOR


def normalize_desktop_originator(request: web.Request) -> str:
    configured = os.environ.get("CODEX_SHIM_PASSTHROUGH_ORIGINATOR", "").strip()
    if configured:
        return configured
    inbound = _header_value(request, "originator")
    if inbound and inbound.strip().lower() in KNOWN_DESKTOP_ORIGINATORS:
        return DEFAULT_DESKTOP_ORIGINATOR
    return DEFAULT_DESKTOP_ORIGINATOR


def _serialize_turn_metadata(metadata: dict[str, Any]) -> str:
    return json.dumps(metadata, separators=(",", ":"))


def normalize_desktop_turn_metadata(metadata: dict[str, Any]) -> dict[str, Any]:
    normalized = deepcopy(metadata)
    had_workspaces = "workspaces" in normalized
    if had_workspaces and "workspace_kind" not in normalized:
        normalized["workspace_kind"] = "project"
    normalized.pop("workspaces", None)
    return normalized


def preserve_inbound_turn_metadata(
    request: web.Request,
    body: dict[str, Any],
    *,
    profile: UpstreamProfile | None = None,
) -> str | None:
    if profile != UpstreamProfile.DESKTOP:
        return None
    raw = _turn_metadata_raw(request, body)
    metadata = parse_turn_metadata(raw)
    if metadata is None:
        if isinstance(raw, str) and raw.strip():
            return raw.strip()
        return None
    return _serialize_turn_metadata(normalize_desktop_turn_metadata(metadata))


def preserve_cli_turn_metadata(request: web.Request, body: dict[str, Any]) -> str | None:
    raw = _turn_metadata_raw(request, body)
    metadata = parse_turn_metadata(raw)
    if metadata is None:
        if isinstance(raw, str) and raw.strip():
            return raw.strip()
        return None
    return _serialize_turn_metadata(deepcopy(metadata))


def parity_mode_enabled() -> bool:
    try:
        from .upstream_capture import parity_mode_enabled as _capture_parity_mode_enabled

        return _capture_parity_mode_enabled()
    except ImportError:
        return _truthy(os.environ.get("CODEX_SHIM_PARITY_MODE"))


def apply_parity_mode(body: dict[str, Any]) -> dict[str, Any]:
    if not parity_mode_enabled():
        return body
    adjusted = deepcopy(body)
    adjusted["tools"] = []
    adjusted["tool_choice"] = "none"
    return adjusted


def _catalog_instruction_stubs() -> set[str]:
    entry = chatgpt_passthrough_entry()
    stubs = {
        str(entry.get("base_instructions") or "").strip(),
        str((entry.get("model_messages") or {}).get("instructions_template") or "").strip(),
        "You are Codex, a coding agent powered by GPT-5.5.",
    }
    stubs.discard("")
    return stubs


def is_catalog_stub_instructions(value: Any) -> bool:
    if not isinstance(value, str):
        return False
    text = value.strip()
    if not text:
        return True
    return text in _catalog_instruction_stubs()


def is_catalog_default_text(value: Any) -> bool:
    if not isinstance(value, dict):
        return False
    if set(value.keys()) != {"verbosity"}:
        return False
    return value.get("verbosity") == chatgpt_passthrough_entry().get("default_verbosity")


def promote_desktop_direct_upstream_body(body: dict[str, Any]) -> dict[str, Any]:
    """Drop shim/catalog placeholders so Desktop inbound matches native upstream shape."""
    promoted = deepcopy(body)
    if is_catalog_stub_instructions(promoted.get("instructions")):
        promoted.pop("instructions", None)
    if is_catalog_default_text(promoted.get("text")):
        promoted.pop("text", None)
    return promoted


def _turn_metadata_dict(capture: dict[str, Any]) -> dict[str, Any] | None:
    headers = capture.get("headers") if isinstance(capture.get("headers"), dict) else {}
    body = capture.get("body") if isinstance(capture.get("body"), dict) else {}
    client_metadata = body.get("client_metadata") if isinstance(body.get("client_metadata"), dict) else {}
    raw = headers.get(X_CODEX_TURN_METADATA) or client_metadata.get(X_CODEX_TURN_METADATA)
    if not isinstance(raw, str):
        return None
    try:
        parsed = json.loads(raw)
    except json.JSONDecodeError:
        return None
    return parsed if isinstance(parsed, dict) else None


def _permissions_text(body: dict[str, Any]) -> str | None:
    items = body.get("input")
    if not isinstance(items, list):
        return None
    for item in items:
        if not isinstance(item, dict):
            continue
        content = item.get("content")
        if not isinstance(content, list):
            continue
        for block in content:
            if not isinstance(block, dict):
                continue
            text = block.get("text")
            if isinstance(text, str) and text.startswith("<permissions instructions>"):
                return text
    return None


def align_upstream_to_reference(
    forwarded: dict[str, Any],
    upstream_headers: dict[str, str],
    reference: dict[str, Any],
) -> tuple[dict[str, Any], dict[str, str]]:
    aligned_body = deepcopy(forwarded)
    aligned_headers = dict(upstream_headers)
    reference_body = reference.get("body") if isinstance(reference.get("body"), dict) else {}
    reference_tm = _turn_metadata_dict(reference)
    if reference_tm:
        encoded = _serialize_turn_metadata(normalize_desktop_turn_metadata(deepcopy(reference_tm)))
        aligned_headers[X_CODEX_TURN_METADATA] = encoded
        client_metadata = aligned_body.get("client_metadata")
        if not isinstance(client_metadata, dict):
            client_metadata = {}
        client_metadata = deepcopy(client_metadata)
        client_metadata[X_CODEX_TURN_METADATA] = encoded
        aligned_body["client_metadata"] = client_metadata

    reference_permissions = _permissions_text(reference_body)
    if reference_permissions:
        items = aligned_body.get("input")
        if isinstance(items, list):
            items = deepcopy(items)
            for item in items:
                if not isinstance(item, dict):
                    continue
                content = item.get("content")
                if not isinstance(content, list):
                    continue
                for block in content:
                    if not isinstance(block, dict):
                        continue
                    text = block.get("text")
                    if isinstance(text, str) and text.startswith("<permissions instructions>"):
                        block["text"] = reference_permissions
            aligned_body["input"] = items

    reference_input = reference_body.get("input")
    if isinstance(reference_input, list):
        aligned_body["input"] = deepcopy(reference_input)

    for key in ("model", "instructions", "tools", "include", "reasoning", "text", "tool_choice", "parallel_tool_calls"):
        if key in reference_body:
            aligned_body[key] = deepcopy(reference_body[key])

    return aligned_body, aligned_headers


def canonical_turn_metadata_value(
    request: web.Request,
    body: dict[str, Any],
    *,
    window_id: str | None,
    turn_metadata: dict[str, Any] | None,
    thread_id: str | None,
    session_id: str | None,
    profile: UpstreamProfile | None = None,
) -> str | None:
    if profile == UpstreamProfile.DESKTOP:
        preserved = preserve_inbound_turn_metadata(request, body, profile=profile)
        if preserved:
            metadata = parse_turn_metadata(preserved)
            if metadata is not None and window_id and not metadata.get(WINDOW_ID_KEY):
                metadata[WINDOW_ID_KEY] = window_id
                return _serialize_turn_metadata(normalize_desktop_turn_metadata(metadata))
            return preserved

    if profile == UpstreamProfile.CLI:
        preserved = preserve_cli_turn_metadata(request, body)
        if preserved:
            metadata = parse_turn_metadata(preserved)
            if metadata is not None and window_id and not metadata.get(WINDOW_ID_KEY):
                metadata[WINDOW_ID_KEY] = window_id
                return _serialize_turn_metadata(metadata)
            return preserved

    inbound_header = request.headers.get(X_CODEX_TURN_METADATA)
    if inbound_header:
        metadata = parse_turn_metadata(inbound_header)
        if metadata is None:
            return inbound_header.strip() or None
    else:
        raw = _turn_metadata_raw(request, body)
        metadata = parse_turn_metadata(raw) if raw is not None else None

    if metadata is None:
        if not thread_id and not session_id:
            return None
        metadata = {}
        if thread_id:
            metadata["thread_id"] = thread_id
        if session_id:
            metadata["session_id"] = session_id

    if thread_id and not metadata.get("thread_id"):
        metadata["thread_id"] = thread_id
    if session_id and not metadata.get("session_id"):
        metadata["session_id"] = session_id
    if window_id:
        metadata[WINDOW_ID_KEY] = window_id
    if profile == UpstreamProfile.DESKTOP:
        metadata = normalize_desktop_turn_metadata(metadata)
    return _serialize_turn_metadata(metadata)


def _identity_fields(
    request: web.Request,
    body: dict[str, Any],
    *,
    forwarded: dict[str, str],
    turn_metadata: dict[str, Any] | None,
    thread_id: str | None,
    session_id: str | None,
    window_id: str | None,
    installation_id: str | None,
    turn_metadata_header: str | None,
) -> dict[str, str]:
    fields: dict[str, str] = {}
    if session_id:
        fields["session-id"] = session_id
    if thread_id:
        fields["thread-id"] = thread_id
    if window_id:
        fields[X_CODEX_WINDOW_ID] = window_id
    if turn_metadata_header:
        fields[X_CODEX_TURN_METADATA] = turn_metadata_header

    parent_thread_id = _truthy_id((turn_metadata or {}).get("parent_thread_id"))
    if not parent_thread_id:
        parent_thread_id = _header_value(request, X_CODEX_PARENT_THREAD_ID)
    if not parent_thread_id:
        client_metadata = _client_metadata_dict(body)
        if client_metadata:
            parent_thread_id = _truthy_id(client_metadata.get(X_CODEX_PARENT_THREAD_ID))
    if parent_thread_id:
        fields.setdefault(X_CODEX_PARENT_THREAD_ID, parent_thread_id)

    subagent = forwarded.get(X_OPENAI_SUBAGENT) or _header_value(request, X_OPENAI_SUBAGENT)
    if not subagent:
        subagent = _truthy_id((turn_metadata or {}).get("subagent_kind"))
    if subagent:
        fields.setdefault(X_OPENAI_SUBAGENT, subagent)

    if turn_metadata:
        request_id = _truthy_id(turn_metadata.get("request_id"))
        if request_id:
            fields.setdefault("x-client-request-id", request_id)

    return fields


def _should_use_rich_upstream(
    request: web.Request,
    body: dict[str, Any],
    profile: UpstreamProfile,
) -> bool:
    if profile == UpstreamProfile.MINIMAL:
        return False
    if _profile_override() is not None or _desktop_headers_mode() == "force":
        return True
    if _is_upstream_turn(body, request):
        return True
    if profile == UpstreamProfile.DESKTOP and _is_desktop_client(request):
        return True
    if profile == UpstreamProfile.CLI and _is_cli_client(request, body):
        return True
    return False


def prepare_minimal_upstream_headers(
    request: web.Request,
    *,
    forwarded: dict[str, str],
) -> dict[str, str]:
    headers = dict(forwarded)
    legacy_session = _header_value(request, "session_id", "session-id")
    if legacy_session:
        headers.setdefault("session_id", legacy_session)
    headers["originator"] = passthrough_originator(profile=UpstreamProfile.MINIMAL)
    return headers


def prepare_legacy_upstream_headers(
    request: web.Request,
    *,
    forwarded: dict[str, str],
) -> dict[str, str]:
    return prepare_minimal_upstream_headers(request, forwarded=forwarded)


def _prepare_rich_upstream_headers(
    request: web.Request,
    body: dict[str, Any],
    *,
    forwarded: dict[str, str],
    originator: str,
    profile: UpstreamProfile,
) -> dict[str, str]:
    turn_metadata = parse_turn_metadata(_turn_metadata_raw(request, body))
    thread_id, session_id = resolve_thread_and_session_ids(request, body, turn_metadata)
    window_id = synthesize_window_id(request, body, turn_metadata=turn_metadata, thread_id=thread_id)
    installation_id = ensure_installation_id()
    turn_metadata_header = canonical_turn_metadata_value(
        request,
        body,
        window_id=window_id,
        turn_metadata=turn_metadata,
        thread_id=thread_id,
        session_id=session_id,
        profile=profile,
    )

    headers = dict(forwarded)
    headers.pop("session_id", None)
    headers.update(
        _identity_fields(
            request,
            body,
            forwarded=forwarded,
            turn_metadata=turn_metadata,
            thread_id=thread_id,
            session_id=session_id,
            window_id=window_id,
            installation_id=installation_id,
            turn_metadata_header=turn_metadata_header,
        )
    )
    headers["originator"] = originator
    return headers


def prepare_cli_upstream_headers(
    request: web.Request,
    body: dict[str, Any],
    *,
    forwarded: dict[str, str],
) -> dict[str, str]:
    return _prepare_rich_upstream_headers(
        request,
        body,
        forwarded=forwarded,
        originator=resolve_cli_originator(request),
        profile=UpstreamProfile.CLI,
    )


def prepare_native_upstream_headers(
    request: web.Request,
    body: dict[str, Any],
    *,
    forwarded: dict[str, str],
) -> dict[str, str]:
    originator = normalize_desktop_originator(request)
    return _prepare_rich_upstream_headers(
        request,
        body,
        forwarded=forwarded,
        originator=originator,
        profile=UpstreamProfile.DESKTOP,
    )


def enrich_upstream_body(
    original_body: dict[str, Any],
    prepared_body: dict[str, Any],
    request: web.Request,
) -> dict[str, Any]:
    profile = resolve_upstream_profile(request, original_body)
    turn_metadata = parse_turn_metadata(_turn_metadata_raw(request, original_body))
    thread_id, session_id = resolve_thread_and_session_ids(request, original_body, turn_metadata)
    window_id = synthesize_window_id(
        request,
        original_body,
        turn_metadata=turn_metadata,
        thread_id=thread_id,
    )
    installation_id = ensure_installation_id()
    turn_metadata_header = canonical_turn_metadata_value(
        request,
        original_body,
        window_id=window_id,
        turn_metadata=turn_metadata,
        thread_id=thread_id,
        session_id=session_id,
        profile=profile,
    )

    enriched = deepcopy(prepared_body)
    client_metadata = original_body.get("client_metadata")
    merged: dict[str, Any] = deepcopy(client_metadata) if isinstance(client_metadata, dict) else {}

    if turn_metadata_header:
        merged[X_CODEX_TURN_METADATA] = turn_metadata_header
    if installation_id:
        merged.setdefault(X_CODEX_INSTALLATION_ID, installation_id)
    if window_id:
        merged.setdefault(X_CODEX_WINDOW_ID, window_id)

    parent_thread_id = _truthy_id((turn_metadata or {}).get("parent_thread_id"))
    if parent_thread_id:
        merged.setdefault(X_CODEX_PARENT_THREAD_ID, parent_thread_id)

    subagent = _header_value(request, X_OPENAI_SUBAGENT)
    if not subagent:
        subagent = _truthy_id((turn_metadata or {}).get("subagent_kind"))
    if subagent:
        merged.setdefault(X_OPENAI_SUBAGENT, subagent)

    if merged:
        enriched["client_metadata"] = merged
    return enriched


def apply_upstream_shape(
    request: web.Request,
    body: dict[str, Any],
    prepared_body: dict[str, Any],
    *,
    forwarded: dict[str, str],
) -> tuple[dict[str, Any], dict[str, str], UpstreamProfile]:
    profile = resolve_upstream_profile(request, body)
    if not _should_use_rich_upstream(request, body, profile):
        return (
            prepared_body,
            prepare_minimal_upstream_headers(request, forwarded=forwarded),
            UpstreamProfile.MINIMAL,
        )
    enriched = enrich_upstream_body(body, prepared_body, request)
    if profile == UpstreamProfile.CLI:
        headers = prepare_cli_upstream_headers(request, body, forwarded=forwarded)
    else:
        headers = prepare_native_upstream_headers(request, body, forwarded=forwarded)
    return enriched, headers, profile


def prepare_desktop_upstream_headers(
    request: web.Request,
    body: dict[str, Any],
    *,
    forwarded: dict[str, str],
) -> dict[str, str]:
    profile = resolve_upstream_profile(request, body)
    if profile == UpstreamProfile.MINIMAL:
        return prepare_minimal_upstream_headers(request, forwarded=forwarded)
    if profile == UpstreamProfile.CLI:
        return prepare_cli_upstream_headers(request, body, forwarded=forwarded)
    return prepare_native_upstream_headers(request, body, forwarded=forwarded)


def snapshot_upstream_response(status: int, headers: Any) -> dict[str, Any]:
    captured: dict[str, str] = {}
    items = headers.items() if hasattr(headers, "items") else []
    for key, value in items:
        captured[str(key)] = str(value)
    return {"status": int(status), "headers": captured}


def dump_passthrough_upstream(
    url: str,
    headers: dict[str, str],
    body: dict[str, Any],
    *,
    request: web.Request | None = None,
    upstream_response: dict[str, Any] | None = None,
) -> None:
    if not capture_flag(env_name="CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP", config_key="dump"):
        return
    if request is not None and not _is_upstream_turn(body, request):
        return
    try:
        default_path = DEBUG_DIR / "passthrough_upstream.json"
        configured_path = capture_value(
            env_name="CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_PATH",
            config_key="path",
        )
        dump_path = Path(configured_path or default_path).expanduser()
        dump_path.parent.mkdir(parents=True, exist_ok=True)
        if capture_flag(env_name="CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_ONCE", config_key="once") and dump_path.exists() and dump_path.stat().st_size > 100:
            return
        redact_auth = not capture_flag(
            env_name="CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_FULL",
            config_key="full",
        )
        dumped_headers: dict[str, str] = {}
        for key, value in headers.items():
            lowered = key.lower()
            if redact_auth and lowered in {"authorization", "cookie"}:
                dumped_headers[key] = "[REDACTED]"
            else:
                dumped_headers[key] = value
        request_body = body if capture_flag(
            env_name="CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_FULL",
            config_key="full",
        ) else _redacted(body)
        payload: dict[str, Any] = {"url": url, "headers": dumped_headers, "body": request_body}
        if upstream_response is not None:
            payload["upstream_response"] = upstream_response
        dump_path.write_text(json.dumps(payload, indent=2, default=str), encoding="utf-8")
    except OSError as exc:
        print(f"[debug] passthrough upstream dump failed: {exc}", flush=True)
