from __future__ import annotations

import json
from pathlib import Path

from aiohttp.test_utils import make_mocked_request

from codex_shim.cursor_acp import responses_to_delegate_prompt, responses_to_upstream_parity_prompt
from codex_shim.cursor_cli import _base_subprocess_env, cursor_cli_config
from codex_shim.cursor_parity import (
    CursorThreadSessionStore,
    build_cursor_cli_turn_options,
    latest_user_text,
    upstream_parity_enabled,
)
from codex_shim.settings import ShimModel


def _route(**raw) -> ShimModel:
    return ShimModel(
        slug="cursor-auto",
        model="auto",
        display_name="Cursor",
        provider="cursor-agent",
        base_url="",
        transport="cursor_cli",
        raw=raw,
    )


def test_upstream_parity_default_on_for_cursor_cli():
    assert upstream_parity_enabled(_route()) is True


def test_legacy_delegate_prompt_opt_out(monkeypatch):
    monkeypatch.setenv("CODEX_SHIM_CURSOR_LEGACY_DELEGATE_PROMPT", "1")
    assert upstream_parity_enabled(_route()) is False


def test_latest_user_text_from_responses_input():
    body = {"input": [{"role": "user", "content": [{"type": "input_text", "text": "audit the repo"}]}]}
    assert latest_user_text(body) == "audit the repo"


def test_latest_user_text_ignores_shim_catalog_instructions():
    body = {
        "instructions": "You are Codex running on {model_name} through a local all-model shim.",
        "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply OK"}]}],
    }
    assert latest_user_text(body) == "Reply OK"


def test_upstream_parity_prompt_is_plain_user_text():
    body = {"input": [{"role": "user", "content": [{"type": "input_text", "text": "audit the repo"}]}]}
    prompt = responses_to_upstream_parity_prompt(body)
    assert prompt == "audit the repo"
    assert "WORKSPACE:" not in prompt


def test_delegate_prompt_still_has_workspace_prefix(tmp_path):
    workspace = tmp_path / "project"
    workspace.mkdir()
    body = {"input": [{"role": "user", "content": [{"type": "input_text", "text": "audit"}]}]}
    prompt = responses_to_delegate_prompt(body, "auto", workspace=workspace)
    assert f"WORKSPACE:\n{workspace}" in prompt


def test_cursor_cli_config_adds_workspace_flag(tmp_path):
    workspace = tmp_path / "repo"
    workspace.mkdir()
    route = _route()
    options = build_cursor_cli_turn_options(route, {}, workspace=workspace)
    config = cursor_cli_config(route, workspace=workspace, turn_options=options)
    assert "--workspace" in config.args
    assert str(workspace) in config.args


def test_cursor_thread_session_store_roundtrip(tmp_path):
    store = CursorThreadSessionStore(path=tmp_path / "sessions.sqlite")
    store.put("thread-1", "cursor-session-abc")
    assert store.get("thread-1") == "cursor-session-abc"
    store.close()


def test_resume_chat_id_when_thread_mapped(tmp_path):
    store = CursorThreadSessionStore(path=tmp_path / "sessions.sqlite")
    store.put("thread-1", "cursor-session-abc")
    thread_id = "thread-1"
    body = {
        "previous_response_id": "resp_old",
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps({"thread_id": thread_id, "request_kind": "turn"}),
        },
        "input": [{"role": "user", "content": [{"type": "input_text", "text": "follow up"}]}],
    }
    request = make_mocked_request("POST", "/v1/responses")
    options = build_cursor_cli_turn_options(
        _route(),
        body,
        request=request,
        chained_from_previous=True,
        workspace=tmp_path,
        session_store=store,
    )
    assert options.resume_chat_id == "cursor-session-abc"
    assert responses_to_upstream_parity_prompt(body, resume_chat_id=options.resume_chat_id) == "follow up"
    store.close()


def test_resume_chat_id_without_previous_response_id_when_thread_mapped(tmp_path):
    store = CursorThreadSessionStore(path=tmp_path / "sessions.sqlite")
    store.put("thread-1", "cursor-session-abc")
    body = {
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps({"thread_id": "thread-1", "request_kind": "turn"}),
        },
        "input": [{"role": "user", "content": [{"type": "input_text", "text": "follow up"}]}],
    }
    request = make_mocked_request("POST", "/v1/responses")
    options = build_cursor_cli_turn_options(
        _route(),
        body,
        request=request,
        workspace=tmp_path,
        session_store=store,
    )
    assert options.resume_chat_id == "cursor-session-abc"
    store.close()


def test_capture_proxy_env_merged_into_subprocess_env(monkeypatch):
    monkeypatch.setenv("CODEX_SHIM_CURSOR_UPSTREAM_CAPTURE_PROXY", "http://127.0.0.1:8081")
    env = _base_subprocess_env({})
    assert env.get("HTTPS_PROXY") == "http://127.0.0.1:8081"


def test_no_resume_on_first_turn_without_mapping(tmp_path):
    store = CursorThreadSessionStore(path=tmp_path / "sessions.sqlite")
    body = {
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps({"thread_id": "thread-new", "request_kind": "turn"}),
        },
        "input": [{"role": "user", "content": [{"type": "input_text", "text": "hello"}]}],
    }
    request = make_mocked_request("POST", "/v1/responses")
    options = build_cursor_cli_turn_options(
        _route(),
        body,
        request=request,
        workspace=tmp_path,
        session_store=store,
    )
    assert options.resume_chat_id is None
    store.close()
