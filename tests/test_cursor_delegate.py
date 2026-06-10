from __future__ import annotations

import json

from aiohttp import web
from aiohttp.test_utils import make_mocked_request

from codex_shim.cursor_acp import filter_delegate_history_items, responses_to_delegate_prompt
from codex_shim.routing.workspace import resolve_workspace
from codex_shim.settings import ShimModel


def _route(**overrides) -> ShimModel:
    raw = {"cwd": "/static/from/models"}
    raw.update(overrides.pop("raw", {}))
    return ShimModel(
        slug="cursor-auto",
        model="auto",
        display_name="Cursor",
        provider="cursor-agent",
        base_url="",
        transport="cursor_cli",
        raw=raw,
        **overrides,
    )


def _request(headers: dict[str, str] | None = None) -> web.Request:
    return make_mocked_request("POST", "/v1/responses", headers=headers or {})


def test_resolve_workspace_prefers_metadata_over_static_cwd(tmp_path):
    project = tmp_path / "project"
    project.mkdir()
    route = _route()
    body = {"metadata": {"cwd": str(project)}}
    resolved = resolve_workspace(None, body, route)
    assert resolved == project.resolve()


def test_resolve_workspace_uses_shim_internal_keys(tmp_path):
    project = tmp_path / "repo"
    project.mkdir()
    route = _route()
    body = {"_shim_cwd": str(project)}
    resolved = resolve_workspace(None, body, route)
    assert resolved == project.resolve()


def test_resolve_workspace_falls_back_to_header_then_models_json(tmp_path):
    static = tmp_path / "static"
    static.mkdir()
    header_dir = tmp_path / "header"
    header_dir.mkdir()
    route = _route(raw={"cwd": str(static)})
    request = _request({"x-codex-cwd": str(header_dir)})
    resolved = resolve_workspace(request, {}, route)
    assert resolved == header_dir.resolve()


def test_resolve_workspace_uses_desktop_rollout_thread_id(tmp_path, monkeypatch):
    thread_id = "019ea0f1-test-thread-id"
    codex_home = tmp_path / ".codex"
    sessions = codex_home / "sessions" / "2026" / "06" / "07"
    sessions.mkdir(parents=True)
    project = tmp_path / "fork-and-flag"
    project.mkdir()
    rollout = sessions / f"rollout-2026-06-07T17-16-59-{thread_id}.jsonl"
    rollout.write_text(
        json.dumps({"type": "session_meta", "payload": {"id": thread_id, "cwd": str(project)}}) + "\n",
        encoding="utf-8",
    )
    monkeypatch.setenv("CODEX_HOME", str(codex_home))
    body = {
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps(
                {
                    "thread_id": thread_id,
                    "workspace_kind": "project",
                    "request_kind": "turn",
                }
            )
        }
    }
    route = _route(raw={"cwd": str(tmp_path / "static-fallback")})
    (tmp_path / "static-fallback").mkdir()
    resolved = resolve_workspace(None, body, route)
    assert resolved == project.resolve()


def test_resolve_workspace_prefers_header_over_desktop_rollout(tmp_path, monkeypatch):
    thread_id = "019ea0f1-test-thread-id"
    codex_home = tmp_path / ".codex"
    sessions = codex_home / "sessions" / "2026" / "06" / "07"
    sessions.mkdir(parents=True)
    rollout_project = tmp_path / "rollout-project"
    rollout_project.mkdir()
    header_project = tmp_path / "header-project"
    header_project.mkdir()
    rollout = sessions / f"rollout-2026-06-07T17-16-59-{thread_id}.jsonl"
    rollout.write_text(
        json.dumps({"type": "session_meta", "payload": {"id": thread_id, "cwd": str(rollout_project)}}) + "\n",
        encoding="utf-8",
    )
    monkeypatch.setenv("CODEX_HOME", str(codex_home))
    body = {
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps({"thread_id": thread_id, "workspace_kind": "project"})
        }
    }
    request = _request({"x-codex-cwd": str(header_project)})
    route = _route(raw={})
    resolved = resolve_workspace(request, body, route)
    assert resolved == header_project.resolve()


def test_resolve_workspace_ignores_missing_paths():
    route = _route(raw={"cwd": "/does/not/exist"})
    assert resolve_workspace(None, {"metadata": {"cwd": "/also/missing"}}, route) is None


def test_filter_delegate_history_items_keeps_messages_and_summarizes_tools():
    items = [
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "hi"}]},
        {"type": "function_call", "call_id": "c1", "name": "shell"},
        {"type": "function_call_output", "call_id": "c1", "output": "ok"},
        {"type": "message", "role": "assistant", "content": [{"type": "output_text", "text": "done"}]},
    ]
    filtered = filter_delegate_history_items(items)
    assert filtered[0]["role"] == "user"
    assert filtered[1]["role"] == "assistant"
    assert any("Cursor completed 2 tool action(s)" in str(item) for item in filtered)


def test_filter_delegate_history_items_keeps_compaction_trigger():
    items = [
        {"type": "compaction_trigger"},
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "compact me"}]},
    ]
    filtered = filter_delegate_history_items(items)
    assert filtered[0]["type"] == "compaction_trigger"
    assert filtered[1]["role"] == "user"


def test_responses_to_delegate_prompt_includes_workspace_and_text_only(tmp_path):
    workspace = tmp_path / "fork-and-flag"
    workspace.mkdir()
    body = {
        "input": [
            {"role": "user", "content": [{"type": "input_text", "text": "audit the repo"}]},
            {"type": "function_call_output", "call_id": "c1", "output": "ignored"},
        ]
    }
    prompt = responses_to_delegate_prompt(
        body,
        upstream_model="auto",
        workspace=workspace,
        chained_from_previous=False,
    )
    assert f"WORKSPACE:\n{workspace}" in prompt
    assert "audit the repo" in prompt
    assert "function_call_output" not in prompt
