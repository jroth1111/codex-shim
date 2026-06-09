from __future__ import annotations

import json

import pytest
from aiohttp.test_utils import make_mocked_request

from codex_shim.passthrough import chatgpt_openai_beta_header
from codex_shim.passthrough_upstream import (
    DEFAULT_CLI_ORIGINATOR,
    DEFAULT_DESKTOP_ORIGINATOR,
    DEFAULT_EXEC_ORIGINATOR,
    UpstreamProfile,
    apply_upstream_shape,
    prepare_cli_upstream_headers,
    prepare_minimal_upstream_headers,
    prepare_native_upstream_headers,
    resolve_upstream_profile,
)


def _request(headers: dict[str, str] | None = None):
    return make_mocked_request("POST", "/v1/responses", headers=headers or {})


def _desktop_body(**turn_extra: object) -> dict:
    thread_id = "019ea0f1-aaaa-bbbb-cccc-dddddddddddd"
    turn = {
        "thread_id": thread_id,
        "session_id": thread_id,
        "request_kind": "turn",
        "sandbox": "seatbelt",
        "workspace_kind": "project",
        **turn_extra,
    }
    return {
        "model": "gpt-5.5",
        "input": [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": "hi"}]}],
        "client_metadata": {"x-codex-turn-metadata": json.dumps(turn)},
    }


@pytest.mark.parametrize(
    ("profile", "body", "headers", "expected_originator", "expected_beta_ws"),
    [
        (
            "desktop",
            _desktop_body(),
            {"originator": DEFAULT_DESKTOP_ORIGINATOR},
            DEFAULT_DESKTOP_ORIGINATOR,
            True,
        ),
        (
            "cli",
            {
                "model": "gpt-5.5",
                "input": "hello",
                "client_metadata": {
                    "x-codex-turn-metadata": json.dumps(
                        {
                            "thread_id": "019ea149-4be7-7901-9628-006ed9dae56e",
                            "request_kind": "turn",
                            "workspaces": {"/tmp/project": {"has_changes": True}},
                        }
                    )
                },
            },
            {},
            DEFAULT_CLI_ORIGINATOR,
            True,
        ),
        (
            "minimal",
            {"model": "gpt-5.5", "input": "hello", "stream": True},
            {"session_id": "probe-session"},
            DEFAULT_CLI_ORIGINATOR,
            False,
        ),
    ],
    ids=["parity_desktop_rich", "parity_cli_workspace", "parity_minimal"],
)
def test_upstream_profile_matrix(
    profile: str,
    body: dict,
    headers: dict[str, str],
    expected_originator: str,
    expected_beta_ws: bool,
) -> None:
    request = _request(headers)
    resolved = resolve_upstream_profile(request, body)
    assert resolved == UpstreamProfile(profile)

    prepared = {"model": "gpt-5.5", "input": body.get("input", []), "stream": True}
    enriched, upstream_headers, applied = apply_upstream_shape(
        request,
        body,
        prepared,
        forwarded={},
    )
    assert applied == UpstreamProfile(profile)

    if profile == "desktop":
        native_headers = prepare_native_upstream_headers(request, body, forwarded={})
        assert native_headers["originator"] == DEFAULT_DESKTOP_ORIGINATOR
        assert "workspaces" not in json.loads(native_headers["x-codex-turn-metadata"])
    elif profile == "cli":
        cli_headers = prepare_cli_upstream_headers(request, body, forwarded={})
        assert cli_headers["originator"] in {DEFAULT_CLI_ORIGINATOR, DEFAULT_EXEC_ORIGINATOR}
    else:
        minimal_headers = prepare_minimal_upstream_headers(request, forwarded={})
        assert minimal_headers["originator"] == DEFAULT_CLI_ORIGINATOR
        assert enriched is prepared

    assert upstream_headers["originator"] == expected_originator
    beta = chatgpt_openai_beta_header(profile=applied)
    if expected_beta_ws:
        assert beta == "responses_websockets=2026-02-06"
    else:
        assert beta == "responses=2026-02-06"
