from __future__ import annotations

import json
import uuid
from copy import deepcopy

from aiohttp import web
from aiohttp.test_utils import make_mocked_request

from codex_shim.passthrough import _prepare_upstream_request
from codex_shim.passthrough_upstream import (
    DEFAULT_CLI_ORIGINATOR,
    DEFAULT_DESKTOP_ORIGINATOR,
    DEFAULT_EXEC_ORIGINATOR,
    X_CODEX_TURN_METADATA,
    UpstreamProfile,
    apply_parity_mode,
    apply_upstream_shape,
    detect_desktop_upstream_shape,
    enrich_upstream_body,
    ensure_installation_id,
    normalize_desktop_originator,
    prepare_cli_upstream_headers,
    prepare_legacy_upstream_headers,
    prepare_minimal_upstream_headers,
    prepare_native_upstream_headers,
    preserve_inbound_turn_metadata,
    promote_desktop_direct_upstream_body,
    resolve_upstream_profile,
    should_promote_desktop_parity,
)


def _request(headers: dict[str, str] | None = None) -> web.Request:
    return make_mocked_request("POST", "/v1/responses", headers=headers or {})


def _desktop_body(thread_id: str, **turn_extra: object) -> dict:
    turn = {
        "thread_id": thread_id,
        "session_id": thread_id,
        "request_kind": "turn",
        **turn_extra,
    }
    return {
        "model": "gpt-5.5",
        "input": "hello",
        "client_metadata": {"x-codex-turn-metadata": json.dumps(turn)},
    }


def test_detects_desktop_ws_turn_metadata():
    thread_id = "019ea0f1-aaaa-bbbb-cccc-dddddddddddd"
    assert detect_desktop_upstream_shape(_request(), _desktop_body(thread_id)) is True
    assert should_promote_desktop_parity(_request(), _desktop_body(thread_id)) is True


def test_minimal_probe_not_desktop(monkeypatch):
    monkeypatch.delenv("CODEX_SHIM_PASSTHROUGH_DESKTOP_HEADERS", raising=False)
    body = {"model": "gpt-5.5", "input": "hello", "stream": True}
    request = _request({"session_id": "probe-session"})
    assert detect_desktop_upstream_shape(request, body) is False
    assert should_promote_desktop_parity(request, body) is False

    prepared = {"model": "gpt-5.5", "input": [], "stream": True}
    enriched, headers, profile = apply_upstream_shape(request, body, prepared, forwarded={})
    assert profile == UpstreamProfile.MINIMAL
    assert enriched is prepared
    assert headers["originator"] == DEFAULT_CLI_ORIGINATOR
    assert headers["session_id"] == "probe-session"
    assert "client_metadata" not in enriched


def test_prepare_native_headers_from_turn_metadata():
    thread_id = "019ea0f1-aaaa-bbbb-cccc-dddddddddddd"
    body = _desktop_body(thread_id, request_id="req-123")
    headers = prepare_native_upstream_headers(_request(), body, forwarded={})
    assert headers["originator"] == DEFAULT_DESKTOP_ORIGINATOR
    assert headers["session-id"] == thread_id
    assert headers["thread-id"] == thread_id
    assert headers["x-codex-window-id"] == f"{thread_id}:0"
    assert headers["x-client-request-id"] == "req-123"
    assert X_CODEX_TURN_METADATA in headers


def test_promotes_turn_metadata_to_upstream_header():
    thread_id = "019ea0f1-bbbb-cccc-dddd-eeeeeeeeeeee"
    body = _desktop_body(thread_id)
    headers = prepare_native_upstream_headers(_request(), body, forwarded={})
    assert headers[X_CODEX_TURN_METADATA]
    assert json.loads(headers[X_CODEX_TURN_METADATA])["thread_id"] == thread_id


def test_turn_metadata_includes_window_id():
    thread_id = "019ea0f1-cccc-dddd-eeee-ffffffffffff"
    body = _desktop_body(thread_id)
    headers = prepare_native_upstream_headers(_request(), body, forwarded={})
    window_id = headers["x-codex-window-id"]
    turn_metadata = json.loads(headers[X_CODEX_TURN_METADATA])
    assert turn_metadata["window_id"] == window_id


def test_desktop_turn_metadata_preserves_sandbox_without_workspaces():
    thread_id = "019ea0f1-dddd-eeee-ffff-000000000002"
    turn = {
        "thread_id": thread_id,
        "session_id": thread_id,
        "request_kind": "turn",
        "sandbox": "seatbelt",
    }
    body = {
        "model": "gpt-5.5",
        "input": "hello",
        "client_metadata": {"x-codex-turn-metadata": json.dumps(turn)},
    }
    request = _request({"originator": DEFAULT_DESKTOP_ORIGINATOR})
    preserved = preserve_inbound_turn_metadata(request, body, profile=UpstreamProfile.DESKTOP)
    assert preserved is not None
    metadata = json.loads(preserved)
    assert metadata["sandbox"] == "seatbelt"
    assert "workspace_kind" not in metadata


def test_desktop_turn_metadata_strips_workspaces():
    thread_id = "019ea0f1-dddd-eeee-ffff-000000000001"
    turn = {
        "thread_id": thread_id,
        "session_id": thread_id,
        "request_kind": "turn",
        "workspaces": {"/tmp/project": {"has_changes": True}},
        "sandbox": "none",
    }
    body = {
        "model": "gpt-5.5",
        "input": "hello",
        "client_metadata": {"x-codex-turn-metadata": json.dumps(turn)},
    }
    request = _request({"originator": DEFAULT_DESKTOP_ORIGINATOR})
    headers = prepare_native_upstream_headers(request, body, forwarded={})
    metadata = json.loads(headers[X_CODEX_TURN_METADATA])
    assert metadata["workspace_kind"] == "project"
    assert metadata["sandbox"] == "none"
    assert "workspaces" not in metadata


def test_promote_desktop_direct_upstream_body_preserves_input():
    body = {"input": [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": "hi"}]}]}
    promoted = promote_desktop_direct_upstream_body(body)
    assert promoted["input"][0]["content"][0]["text"] == "hi"


def test_promote_desktop_direct_upstream_body_strips_catalog_placeholders():
    body = {
        "instructions": "You are Codex, a coding agent powered by GPT-5.5.",
        "text": {"verbosity": "medium"},
        "tools": [{"type": "function", "name": "exec_command"}],
        "input": [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": "hi"}]}],
    }
    promoted = promote_desktop_direct_upstream_body(body)
    assert "instructions" not in promoted
    assert "text" not in promoted
    assert promoted["tools"]


def test_prepare_upstream_request_preserves_tools_without_parity_mode(tmp_path, monkeypatch):
    codex_home = tmp_path / ".codex"
    codex_home.mkdir()
    auth_path = codex_home / "auth.json"
    auth_path.write_text(
        json.dumps({"tokens": {"access_token": "token", "account_id": "acct"}}),
        encoding="utf-8",
    )
    monkeypatch.setattr("codex_shim.passthrough.settings.DEFAULT_CODEX_AUTH", auth_path)
    monkeypatch.setenv("CODEX_HOME", str(codex_home))
    monkeypatch.delenv("CODEX_SHIM_PARITY_MODE", raising=False)
    monkeypatch.setattr(
        "codex_shim.observability.upstream_capture.read_capture_config",
        lambda: {"tier": "b", "parity_mode": False},
    )

    thread_id = "019ea0f1-eeee-ffff-0000-111111111113"
    tools = [{"type": "function", "name": "exec_command"}]
    body = {
        "model": "gpt-5.5",
        "instructions": "You are Codex, a coding agent powered by GPT-5.5.",
        "tools": tools,
        "tool_choice": "auto",
        "input": [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": "PARITY_OK"}]}],
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps(
                {"thread_id": thread_id, "session_id": thread_id, "request_kind": "turn", "sandbox": "seatbelt"}
            )
        },
    }
    request = _request({"originator": DEFAULT_DESKTOP_ORIGINATOR})
    forwarded, _headers = _prepare_upstream_request(request, body, compact=False)
    assert forwarded["tools"] == tools
    assert forwarded["tool_choice"] == "auto"
    assert "instructions" not in forwarded


def test_prepare_native_headers_maps_legacy_session_id(monkeypatch):
    monkeypatch.setenv("CODEX_SHIM_PASSTHROUGH_DESKTOP_HEADERS", "force")
    headers = prepare_native_upstream_headers(
        _request({"session_id": "legacy-session"}),
        {"input": "hello"},
        forwarded={},
    )
    assert headers["session-id"] == "legacy-session"
    assert headers["thread-id"] == "legacy-session"
    assert "session_id" not in headers


def test_prepare_minimal_headers():
    headers = prepare_minimal_upstream_headers(
        _request({"session_id": "legacy-session"}),
        forwarded={"x-request-id": "trace-1"},
    )
    assert headers["originator"] == DEFAULT_CLI_ORIGINATOR
    assert headers["session_id"] == "legacy-session"
    assert "session-id" not in headers


def test_prepare_legacy_headers_alias():
    assert prepare_legacy_upstream_headers(
        _request({"session_id": "legacy-session"}),
        forwarded={},
    ) == prepare_minimal_upstream_headers(
        _request({"session_id": "legacy-session"}),
        forwarded={},
    )


def _cli_body(thread_id: str, *, cwd: str = "/tmp/project") -> dict:
    turn = {
        "thread_id": thread_id,
        "session_id": thread_id,
        "thread_source": "user",
        "request_kind": "turn",
        "workspaces": {cwd: {"has_changes": True}},
    }
    return {
        "model": "gpt-5.5",
        "input": "hello",
        "client_metadata": {"x-codex-turn-metadata": json.dumps(turn)},
    }


def test_resolve_cli_profile_from_workspaces():
    thread_id = "019ea149-4be7-7901-9628-006ed9dae56e"
    body = _cli_body(thread_id)
    request = _request()
    assert resolve_upstream_profile(request, body) == UpstreamProfile.CLI
    assert should_promote_desktop_parity(request, body) is False


def test_resolve_cli_profile_from_exec_originator():
    thread_id = "019ea149-4be7-7901-9628-006ed9dae56e"
    body = _desktop_body(thread_id)
    request = _request({"originator": DEFAULT_EXEC_ORIGINATOR})
    assert resolve_upstream_profile(request, body) == UpstreamProfile.CLI
    headers = prepare_cli_upstream_headers(request, body, forwarded={})
    assert headers["originator"] == DEFAULT_EXEC_ORIGINATOR


def test_cli_turn_metadata_preserves_workspaces():
    thread_id = "019ea149-4be7-7901-9628-006ed9dae56e"
    body = _cli_body(thread_id, cwd="/tmp/parity-project")
    request = _request({"originator": DEFAULT_EXEC_ORIGINATOR})
    headers = prepare_cli_upstream_headers(request, body, forwarded={})
    metadata = json.loads(headers[X_CODEX_TURN_METADATA])
    assert metadata["workspaces"] == {"/tmp/parity-project": {"has_changes": True}}
    assert "workspace_kind" not in metadata


def test_resolve_desktop_profile_from_originator():
    thread_id = "019ea0f1-aaaa-bbbb-cccc-dddddddddddd"
    request = _request({"originator": DEFAULT_DESKTOP_ORIGINATOR})
    assert resolve_upstream_profile(request, _desktop_body(thread_id)) == UpstreamProfile.DESKTOP


def test_prepare_legacy_headers():
    headers = prepare_legacy_upstream_headers(
        _request({"session_id": "legacy-session"}),
        forwarded={"x-request-id": "trace-1"},
    )
    assert headers["originator"] == DEFAULT_CLI_ORIGINATOR
    assert headers["session_id"] == "legacy-session"
    assert "session-id" not in headers


def test_desktop_headers_env_force_and_off(monkeypatch):
    body = {"model": "gpt-5.5", "input": "hello"}
    request = _request({"session_id": "legacy-session"})
    monkeypatch.setenv("CODEX_SHIM_PASSTHROUGH_DESKTOP_HEADERS", "force")
    assert resolve_upstream_profile(request, body) == UpstreamProfile.DESKTOP
    assert should_promote_desktop_parity(request, body) is True
    monkeypatch.setenv("CODEX_SHIM_PASSTHROUGH_DESKTOP_HEADERS", "off")
    assert resolve_upstream_profile(request, body) == UpstreamProfile.MINIMAL
    assert should_promote_desktop_parity(request, body) is False


def test_upstream_profile_env_override(monkeypatch):
    body = {"model": "gpt-5.5", "input": "hello"}
    request = _request({"session_id": "legacy-session"})
    monkeypatch.setenv("CODEX_SHIM_PASSTHROUGH_UPSTREAM_PROFILE", "cli")
    assert resolve_upstream_profile(request, body) == UpstreamProfile.CLI


def test_normalize_desktop_originator_rejects_codex_tui():
    request = _request({"originator": "codex-tui"})
    assert normalize_desktop_originator(request) == DEFAULT_DESKTOP_ORIGINATOR
    headers = prepare_native_upstream_headers(
        request,
        _desktop_body("019ea0f1-aaaa-bbbb-cccc-dddddddddddd"),
        forwarded={},
    )
    assert headers["originator"] == DEFAULT_DESKTOP_ORIGINATOR


def test_prewarm_without_desktop_client_uses_minimal_shape():
    body = {
        "model": "gpt-5.5",
        "input": [],
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps(
                {
                    "thread_id": "019ea0f1-aaaa-bbbb-cccc-dddddddddddd",
                    "session_id": "019ea0f1-aaaa-bbbb-cccc-dddddddddddd",
                    "request_kind": "prewarm",
                }
            )
        },
    }
    request = _request({"originator": "codex-tui"})
    prepared = {"model": "gpt-5.5", "input": [], "stream": True}
    enriched, headers, profile = apply_upstream_shape(request, body, prepared, forwarded={})
    assert profile == UpstreamProfile.MINIMAL
    assert enriched is prepared
    assert headers["originator"] == DEFAULT_CLI_ORIGINATOR
    assert "client_metadata" not in enriched


def test_prewarm_with_desktop_client_keeps_rich_shape():
    body = {
        "model": "gpt-5.5",
        "input": [],
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps(
                {
                    "thread_id": "019ea0f1-aaaa-bbbb-cccc-dddddddddddd",
                    "session_id": "019ea0f1-aaaa-bbbb-cccc-dddddddddddd",
                    "request_kind": "prewarm",
                }
            )
        },
    }
    request = _request({"originator": DEFAULT_DESKTOP_ORIGINATOR})
    prepared = {"model": "gpt-5.5", "input": [], "stream": True}
    enriched, headers, profile = apply_upstream_shape(request, body, prepared, forwarded={})
    assert profile == UpstreamProfile.DESKTOP
    assert headers["originator"] == DEFAULT_DESKTOP_ORIGINATOR
    assert "client_metadata" in enriched


def test_parse_turn_metadata_does_not_mutate_inbound_dict():
    body = {
        "client_metadata": {
            "x-codex-turn-metadata": {
                "thread_id": "019ea0f1-aaaa-bbbb-cccc-dddddddddddd",
                "request_kind": "turn",
            }
        }
    }
    original = deepcopy(body)
    request = _request()
    enrich_upstream_body(body, {"model": "gpt-5.5", "input": []}, request)
    assert body == original


def test_enrich_upstream_body_preserves_client_metadata(tmp_path, monkeypatch):
    installation_id = "11111111-1111-4111-8111-111111111111"
    codex_home = tmp_path / ".codex"
    codex_home.mkdir()
    (codex_home / "installation_id").write_text(installation_id + "\n", encoding="utf-8")
    monkeypatch.setenv("CODEX_HOME", str(codex_home))

    thread_id = "019ea0f1-bbbb-cccc-dddd-eeeeeeeeeeee"
    original = _desktop_body(thread_id)
    original["client_metadata"]["custom-flag"] = "keep-me"
    prepared = {"model": "gpt-5.5", "input": [{"role": "user", "content": []}]}
    enriched = enrich_upstream_body(original, prepared, _request())
    metadata = enriched["client_metadata"]
    assert metadata["custom-flag"] == "keep-me"
    assert metadata["x-codex-installation-id"] == installation_id
    assert metadata["x-codex-window-id"] == f"{thread_id}:0"
    assert X_CODEX_TURN_METADATA in metadata
    assert json.loads(metadata[X_CODEX_TURN_METADATA])["window_id"] == metadata["x-codex-window-id"]


def test_ensure_installation_id_creates_file(tmp_path, monkeypatch):
    codex_home = tmp_path / ".codex"
    monkeypatch.setenv("CODEX_HOME", str(codex_home))
    installation_id = ensure_installation_id()
    assert installation_id
    uuid.UUID(installation_id)
    assert (codex_home / "installation_id").read_text(encoding="utf-8").strip() == installation_id


def test_ensure_installation_id_honors_override(monkeypatch):
    monkeypatch.setenv("CODEX_SHIM_PASSTHROUGH_INSTALLATION_ID", "override-id")
    assert ensure_installation_id() == "override-id"


def test_parent_thread_id_promoted():
    thread_id = "019ea0f1-dddd-eeee-ffff-000000000001"
    parent_id = "019ea0f1-dddd-eeee-ffff-000000000000"
    body = _desktop_body(thread_id, parent_thread_id=parent_id)
    headers = prepare_native_upstream_headers(_request(), body, forwarded={})
    assert headers["x-codex-parent-thread-id"] == parent_id
    enriched = enrich_upstream_body(body, {"model": "gpt-5.5", "input": []}, _request())
    assert enriched["client_metadata"]["x-codex-parent-thread-id"] == parent_id


def test_prepare_native_headers_use_existing_window_id():
    thread_id = "019ea0f1-cccc-dddd-eeee-ffffffffffff"
    headers = prepare_native_upstream_headers(
        _request({"x-codex-window-id": f"{thread_id}:3"}),
        {},
        forwarded={},
    )
    assert headers["x-codex-window-id"] == f"{thread_id}:3"


def test_prepare_upstream_request_end_to_end(tmp_path, monkeypatch):
    codex_home = tmp_path / ".codex"
    codex_home.mkdir()
    auth_path = codex_home / "auth.json"
    auth_path.write_text(
        json.dumps({"tokens": {"access_token": "token", "account_id": "acct"}}),
        encoding="utf-8",
    )
    monkeypatch.setattr("codex_shim.passthrough.settings.DEFAULT_CODEX_AUTH", auth_path)
    monkeypatch.setenv("CODEX_HOME", str(codex_home))

    thread_id = "019ea0f1-eeee-ffff-0000-111111111111"
    body = _desktop_body(thread_id)
    request = _request()
    forwarded, headers = _prepare_upstream_request(request, body, compact=False)
    assert forwarded["model"] == "gpt-5.5"
    assert headers["Authorization"] == "Bearer token"
    assert headers["originator"] == DEFAULT_DESKTOP_ORIGINATOR
    assert headers[X_CODEX_TURN_METADATA]
    assert forwarded["client_metadata"][X_CODEX_TURN_METADATA] == headers[X_CODEX_TURN_METADATA]
    assert "x-codex-installation-id" not in headers
    assert forwarded["client_metadata"]["x-codex-installation-id"]


def test_prepare_upstream_request_preserves_permissions_block(tmp_path, monkeypatch):
    codex_home = tmp_path / ".codex"
    codex_home.mkdir()
    auth_path = codex_home / "auth.json"
    auth_path.write_text(
        json.dumps({"tokens": {"access_token": "token", "account_id": "acct"}}),
        encoding="utf-8",
    )
    monkeypatch.setattr("codex_shim.passthrough.settings.DEFAULT_CODEX_AUTH", auth_path)
    monkeypatch.setenv("CODEX_HOME", str(codex_home))

    permissions = "<permissions instructions>\nread-only sandbox\n</permissions instructions>"
    thread_id = "019ea0f1-eeee-ffff-0000-111111111112"
    body = {
        "model": "gpt-5.4",
        "input": [
            {
                "type": "message",
                "role": "user",
                "content": [{"type": "input_text", "text": permissions}],
            }
        ],
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps(
                {"thread_id": thread_id, "session_id": thread_id, "request_kind": "turn", "sandbox": "seatbelt"}
            )
        },
    }
    request = _request({"originator": DEFAULT_DESKTOP_ORIGINATOR})
    forwarded, _headers = _prepare_upstream_request(request, body, compact=False)
    assert forwarded["model"] == "gpt-5.4"
    assert forwarded["input"][0]["content"][0]["text"] == permissions


def test_parity_mode_strips_tools(monkeypatch):
    monkeypatch.setenv("CODEX_SHIM_PARITY_MODE", "1")
    body = {
        "model": "gpt-5.5",
        "tools": [{"type": "function", "name": "exec_command"}],
        "tool_choice": "auto",
    }
    adjusted = apply_parity_mode(body)
    assert adjusted["tools"] == []
    assert adjusted["tool_choice"] == "none"


def test_prepare_upstream_request_preserves_reference_model(tmp_path, monkeypatch):
    codex_home = tmp_path / ".codex"
    codex_home.mkdir()
    auth_path = codex_home / "auth.json"
    auth_path.write_text(
        json.dumps({"tokens": {"access_token": "token", "account_id": "acct"}}),
        encoding="utf-8",
    )
    reference_path = tmp_path / "reference.json"
    reference_path.write_text(
        json.dumps(
            {
                "body": {
                    "model": "gpt-5.4",
                    "input": [{"role": "user", "content": [{"type": "input_text", "text": "PARITY_OK"}]}],
                }
            }
        ),
        encoding="utf-8",
    )
    monkeypatch.setattr("codex_shim.passthrough.settings.DEFAULT_CODEX_AUTH", auth_path)
    monkeypatch.setenv("CODEX_HOME", str(codex_home))
    monkeypatch.setenv("CODEX_SHIM_PASSTHROUGH_REFERENCE_CAPTURE", str(reference_path))

    body = _desktop_body("019ea0f1-eeee-ffff-0000-111111111111")
    forwarded, _headers = _prepare_upstream_request(_request(), body, compact=False)
    assert forwarded["model"] == "gpt-5.4"
