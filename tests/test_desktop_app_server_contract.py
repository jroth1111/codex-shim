from __future__ import annotations

from codex_shim.desktop_app_server_contract import (
    APP_SERVER_RPC_METHODS,
    DESKTOP_HTTP_ENDPOINTS,
    MODEL_PROVIDER_WIRE_FIELDS,
    THREAD_SETTINGS_FIELDS,
    THREAD_START_PARAM_FIELDS,
)


def test_app_server_rpc_methods_include_core_thread_ops():
    assert "thread/start" in APP_SERVER_RPC_METHODS
    assert "thread/resume" in APP_SERVER_RPC_METHODS
    assert "config/read" in APP_SERVER_RPC_METHODS


def test_thread_settings_fields_present():
    assert "sandboxPolicy" in THREAD_SETTINGS_FIELDS
    assert "serviceTier" in THREAD_SETTINGS_FIELDS


def test_model_provider_wire_fields_present():
    assert "wire_api" in MODEL_PROVIDER_WIRE_FIELDS
    assert "base_url" in MODEL_PROVIDER_WIRE_FIELDS


def test_desktop_http_endpoints_include_chatgpt_codex():
    assert any("chatgpt.com/backend-api" in endpoint for endpoint in DESKTOP_HTTP_ENDPOINTS)


def test_thread_start_param_fields_non_empty():
    assert THREAD_START_PARAM_FIELDS
