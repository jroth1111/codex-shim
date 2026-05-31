from __future__ import annotations

import json
import hashlib
import plistlib
import struct
import sys

import pytest

from codex_shim import cli
from codex_shim.catalog import catalog_entry, write_catalog, codex_config_overrides, write_config
from codex_shim.settings import (
    THINKING_DROP,
    THINKING_FORCE_DISABLED,
    THINKING_KEEP_ALL,
    THINKING_PASS,
    ModelSettings,
    ShimModel,
    chatgpt_passthrough_available,
    vibeproxy_model_rows,
)


@pytest.fixture
def auth_present(monkeypatch, tmp_path):
    """Point chatgpt_passthrough_available() at a valid stub auth.json."""
    auth = tmp_path / "auth.json"
    auth.write_text(json.dumps({"tokens": {"access_token": "stub", "account_id": "acct"}}))
    monkeypatch.setattr("codex_shim.settings.DEFAULT_CODEX_AUTH", auth)
    return auth


@pytest.fixture
def auth_missing(monkeypatch, tmp_path):
    """Point chatgpt_passthrough_available() at a path that does not exist."""
    monkeypatch.setattr("codex_shim.settings.DEFAULT_CODEX_AUTH", tmp_path / "missing-auth.json")


def test_duplicate_models_get_unique_display_slugs(tmp_path):
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {"model": "gpt-5.5", "display_name": "Fast High", "provider": "openai", "base_url": "http://x/v1", "index": 1},
                    {"model": "gpt-5.5", "display_name": "Fast Low", "provider": "openai", "base_url": "http://x/v1", "index": 2},
                ]
            }
        )
    )
    models = ModelSettings(settings).load()
    assert [m.slug for m in models] == ["fast-high", "fast-low"]


def test_legacy_custom_models_schema_still_loads(tmp_path):
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {"model": "legacy-model", "displayName": "Legacy Model", "provider": "openai", "baseUrl": "http://x/v1"}
                ]
            }
        )
    )
    [model] = ModelSettings(settings).load()
    assert model.slug == "legacy-model"
    assert model.display_name == "Legacy Model"
    assert model.base_url == "http://x/v1"


def test_ollama_launch_models_schema_loads(tmp_path):
    settings = tmp_path / "ollama-launch-models.json"
    settings.write_text(
        json.dumps(
            {
                "launchModels": [
                    "llama3.2",
                    {"model": "qwen2.5-coder:14b", "name": "Qwen Coder", "provider": "ollama"},
                    {"model": "deepseek-r1", "baseURL": "http://localhost:11434/v1"},
                ]
            }
        )
    )

    models = ModelSettings(settings).load()

    assert [model.slug for model in models] == ["llama3-2", "qwen2-5-coder-14b", "deepseek-r1"]
    assert [model.provider for model in models] == ["generic-chat-completion-api"] * 3
    assert [model.base_url for model in models] == [
        "http://127.0.0.1:11434/v1",
        "http://127.0.0.1:11434/v1",
        "http://localhost:11434/v1",
    ]


def test_catalog_preserves_context_and_visibility():
    model = ModelSettingsFixture.one()
    entry = catalog_entry(model)
    assert entry["slug"] == "claude-opus"
    assert entry["visibility"] == "list"
    assert entry["context_window"] == 200000
    assert "free" in entry["available_in_plans"]


def test_kimi_gets_context():
    model = ShimModel("kimi", "kimi-k2", "Kimi K2", "moonshot", "https://api.moonshot.cn/v1")
    entry = catalog_entry(model)
    assert entry["context_window"] == 256000


def test_first_class_openai_compatible_providers_route_as_chat():
    settings = ModelSettingsFixture.with_providers(["mimo", "minimax", "moonshot", "dashscope", "volcengine"])
    assert [model.provider for model in settings] == ["mimo", "minimax", "moonshot", "dashscope", "volcengine"]
    assert all(model.is_openai_chat for model in settings)


def test_custom_provider_routes_as_openai_compatible_chat():
    settings = ModelSettingsFixture.with_providers(["new-api", "my-openai-proxy"])
    assert [model.provider for model in settings] == ["new-api", "my-openai-proxy"]
    assert all(model.is_openai_chat for model in settings)


def test_cursor_local_providers_do_not_route_as_openai_chat():
    settings = ModelSettingsFixture.with_providers(["cursor-agent", "cursor-acp"], base_url="")
    assert [model.provider for model in settings] == ["cursor-agent", "cursor-acp"]
    assert settings[0].is_cursor_cli is True
    assert settings[1].is_cursor_acp is True
    assert all(not model.is_openai_chat for model in settings)


def test_normalized_visibility_hides_unconfigured_provider_rows(monkeypatch, tmp_path):
    monkeypatch.delenv("ZAI_API_KEY", raising=False)
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {"id": "zai", "model": "glm-5.1", "display_name": "Z.AI", "provider": "zai", "api_key_env": "ZAI_API_KEY"},
                    {"id": "nim", "model": "qwen", "display_name": "NIM", "provider": "nvidia-nim", "api_key_env": "NVIDIA_API_KEY", "enabled": False},
                    {
                        "id": "cursor",
                        "model": "default[]",
                        "display_name": "Cursor",
                        "provider": "cursor-acp",
                        "command": str(tmp_path / "missing-cursor-agent"),
                    },
                ]
            }
        )
    )

    models = ModelSettings(settings).load()

    assert [model.slug for model in models] == ["zai", "nim", "cursor"]
    assert ModelSettings(settings).visible_models() == []
    assert [model.unavailable_reason for model in models] == [
        "missing API key from ZAI_API_KEY",
        "disabled",
        f"command not found: {tmp_path / 'missing-cursor-agent'}",
    ]


def test_normalized_provider_presets_make_configured_models_visible(monkeypatch, tmp_path):
    monkeypatch.setenv("ZAI_API_KEY", "zai-secret")
    monkeypatch.setenv("NVIDIA_API_KEY", "nim-secret")
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {"id": "zai", "model": "glm-5.1", "display_name": "Z.AI", "provider": "zai", "api_key_env": "ZAI_API_KEY"},
                    {
                        "id": "zai-coding",
                        "model": "glm-5.1",
                        "display_name": "Z.AI Coding",
                        "provider": "zai-coding-plan",
                        "api_key_env": "ZAI_API_KEY",
                    },
                    {
                        "id": "nim",
                        "model": "qwen/qwen3-coder",
                        "display_name": "NIM",
                        "provider": "nvidia-nim",
                        "api_key_env": "NVIDIA_API_KEY",
                    },
                    {
                        "id": "cursor",
                        "model": "default[]",
                        "display_name": "Cursor",
                        "provider": "cursor-acp",
                        "command": sys.executable,
                    },
                ]
            }
        )
    )

    visible = ModelSettings(settings).visible_models()

    assert [model.slug for model in visible] == ["zai", "zai-coding", "nim", "cursor"]
    assert visible[0].endpoint_url == "https://api.z.ai/api/paas/v4/chat/completions"
    assert visible[1].endpoint_url == "https://api.z.ai/api/coding/paas/v4/chat/completions"
    assert visible[2].endpoint_url == "https://integrate.api.nvidia.com/v1/chat/completions"
    assert visible[3].transport == "cursor_acp"
    assert visible[0].api_key == "zai-secret"
    assert visible[2].api_key == "nim-secret"


def test_zai_base_url_does_not_inject_v1(monkeypatch, tmp_path):
    monkeypatch.setenv("ZAI_API_KEY", "secret")
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "id": "zai",
                        "model": "glm-5.1",
                        "display_name": "Z.AI",
                        "provider": "zai",
                        "base_url": "https://api.z.ai/api/paas/v4",
                        "api_key_env": "ZAI_API_KEY",
                    }
                ]
            }
        )
    )

    [model] = ModelSettings(settings).visible_models()

    assert model.endpoint_url == "https://api.z.ai/api/paas/v4/chat/completions"


def test_catalog_uses_provider_capabilities_for_cursor_images(tmp_path):
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "id": "cursor",
                        "model": "default[]",
                        "display_name": "Cursor",
                        "provider": "cursor-acp",
                        "command": sys.executable,
                    }
                ]
            }
        )
    )

    [model] = ModelSettings(settings).visible_models()
    entry = catalog_entry(model)

    assert entry["input_modalities"] == ["text"]
    assert entry["supports_image_detail_original"] is False


def test_catalog_omits_hidden_models(monkeypatch, tmp_path, auth_missing):
    monkeypatch.delenv("ZAI_API_KEY", raising=False)
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {"id": "hidden-zai", "model": "glm-5.1", "display_name": "Hidden Z.AI", "provider": "zai", "api_key_env": "ZAI_API_KEY"},
                    {"id": "visible", "model": "visible-model", "display_name": "Visible", "provider": "openai", "base_url": "http://x/v1"},
                ]
            }
        )
    )
    catalog_path = tmp_path / "catalog.json"

    write_catalog(ModelSettings(settings).load(), catalog_path)

    payload = json.loads(catalog_path.read_text())
    assert [model["slug"] for model in payload["models"]] == ["visible"]


def test_catalog_reasoning_flags_are_provider_specific():
    minimax = ShimModel("minimax-m2", "MiniMax-M2", "MiniMax M2", "minimax", "https://api.minimax.io/v1")
    kimi = ShimModel("kimi", "kimi-k2.6", "Kimi K2.6", "moonshot", "https://api.moonshot.cn/v1")
    moonshot = ShimModel("moonshot", "moonshot-v1-32k", "Moonshot v1 32K", "moonshot", "https://api.moonshot.cn/v1")
    dashscope = ShimModel("qwen-plus", "qwen-plus", "Qwen Plus", "dashscope", "https://dashscope.aliyuncs.com/v1")
    cursor = ShimModel("cursor-auto", "auto", "Cursor Auto", "cursor-agent", "")

    assert catalog_entry(minimax)["supports_reasoning_summaries"] is True
    assert catalog_entry(dashscope)["supports_reasoning_summaries"] is True
    assert catalog_entry(kimi)["supports_reasoning_summaries"] is True
    assert catalog_entry(moonshot)["supports_reasoning_summaries"] is False
    assert catalog_entry(cursor)["supports_reasoning_summaries"] is False


def test_vibeproxy_model_rows_filter_and_infer_metadata():
    rows = vibeproxy_model_rows(
        {
            "data": [
                {"id": "gpt-4.1-128k", "owned_by": "openai"},
                {"id": "kimi-k2", "owned_by": "moonshot"},
                {"id": "text-embedding-3-small", "owned_by": "openai"},
                {"id": "dall-e-3", "owned_by": "openai"},
            ]
        },
        provider_base_url="http://127.0.0.1:8318/v1",
    )

    assert [row["model"] for row in rows] == ["gpt-4.1-128k", "kimi-k2"]
    assert rows[0]["display_name"] == "GPT 4.1 128k"
    assert rows[0]["max_context_limit"] == 128000
    assert rows[1]["display_name"] == "Kimi K2 (moonshot)"
    assert rows[1]["max_context_limit"] == 256000
    assert all(row["base_url"] == "http://127.0.0.1:8318/v1" for row in rows)


def test_provider_policy_normalizes_thinking_behavior(tmp_path):
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {"id": "deepseek", "model": "deepseek-v4", "provider": "deepseek", "base_url": "http://x/v1"},
                    {
                        "id": "deepseek-safe",
                        "model": "deepseek-v4",
                        "provider": "deepseek",
                        "base_url": "http://x/v1",
                        "thinking_behavior": "force_disabled",
                    },
                    {"id": "zai", "model": "glm-5.1", "provider": "zai", "api_key": "key"},
                    {"id": "moonshot", "model": "moonshot-v1-32k", "provider": "moonshot", "base_url": "http://x/v1"},
                    {"id": "kimi", "model": "kimi-k2", "provider": "moonshot", "base_url": "http://x/v1"},
                ]
            }
        )
    )

    models = {model.slug: model for model in ModelSettings(settings).load()}

    assert models["deepseek"].thinking_behavior == THINKING_PASS
    assert models["deepseek-safe"].thinking_behavior == THINKING_FORCE_DISABLED
    assert models["zai"].thinking_behavior == THINKING_PASS
    assert models["moonshot"].thinking_behavior == THINKING_DROP
    assert models["kimi"].thinking_behavior == THINKING_KEEP_ALL


def test_provider_policy_normalizes_compact_behavior(tmp_path):
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "id": "no-compact",
                        "model": "no-compact",
                        "provider": "openai",
                        "base_url": "http://x/v1",
                        "supports_compact": False,
                    }
                ]
            }
        )
    )

    [model] = ModelSettings(settings).load()

    assert model.capabilities.compact_behavior == "unsupported"


def test_import_vibeproxy_models_writes_settings_file(monkeypatch, tmp_path):
    def fake_fetch(base_url, *, provider_base_url=None, provider="generic-chat-completion-api"):
        assert base_url == "http://vibeproxy.local"
        assert provider_base_url == "http://provider.local/v1"
        assert provider == "openai"
        return [{"model": "vp-model", "display_name": "VP Model", "provider": provider, "base_url": provider_base_url}]

    monkeypatch.setattr(cli, "fetch_vibeproxy_model_rows", fake_fetch)
    output = tmp_path / "models.json"

    assert cli.import_vibeproxy_models(
        tmp_path / "unused.json",
        "http://vibeproxy.local",
        provider_base_url="http://provider.local/v1",
        provider="openai",
        output_path=output,
    ) == 0

    assert json.loads(output.read_text()) == {
        "models": [{"model": "vp-model", "display_name": "VP Model", "provider": "openai", "base_url": "http://provider.local/v1"}]
    }


def test_import_vibeproxy_direct_writes_catalog_and_config(monkeypatch, tmp_path):
    def fake_fetch(base_url, *, provider_base_url=None, provider="generic-chat-completion-api"):
        assert base_url == "http://vibeproxy.local"
        assert provider_base_url == "http://vibeproxy.local/v1"
        return [
            {
                "model": "provider/model-a",
                "display_name": "Provider Model A",
                "provider": provider,
                "base_url": provider_base_url,
            }
        ]

    monkeypatch.setattr(cli, "fetch_vibeproxy_model_rows", fake_fetch)
    catalog_path = tmp_path / "catalog.json"
    config_path = tmp_path / "config.toml"

    assert cli.import_vibeproxy_models(
        tmp_path / "unused.json",
        "http://vibeproxy.local",
        provider_base_url="http://vibeproxy.local/v1",
        direct=True,
        direct_catalog_path=catalog_path,
        direct_config_path=config_path,
    ) == 0

    catalog = json.loads(catalog_path.read_text())
    assert catalog["models"][0]["slug"] == "provider/model-a"
    config = config_path.read_text()
    assert 'model = "provider/model-a"' in config
    assert 'model_provider = "vibeproxy_direct"' in config
    assert 'base_url = "http://vibeproxy.local/v1"' in config
    assert 'wire_api = "responses"' in config


def test_configure_zai_writes_normalized_friendly_row(tmp_path):
    settings = tmp_path / "models.json"

    assert cli.main(["--settings", str(settings), "configure", "zai", "--coding-plan"]) == 0

    data = json.loads(settings.read_text())
    assert data["models"] == [
        {
            "id": "zai-glm-5-1-coding-plan",
            "model": "glm-5.1",
            "display_name": "Z.AI GLM-5.1 Coding Plan",
            "provider": "zai-coding-plan",
            "enabled": True,
            "api_key_env": "ZAI_API_KEY",
        }
    ]


def test_configure_nim_writes_base_url_and_env(tmp_path):
    settings = tmp_path / "models.json"

    assert cli.main(["--settings", str(settings), "configure", "nim", "--model", "z-ai/glm-5.1"]) == 0

    [row] = json.loads(settings.read_text())["models"]
    assert row["id"] == "nim-z-ai-glm-5-1"
    assert row["provider"] == "nvidia-nim"
    assert row["base_url"] == "https://integrate.api.nvidia.com/v1"
    assert row["api_key_env"] == "NVIDIA_API_KEY"


def test_doctor_reports_hidden_reason(monkeypatch, tmp_path, capsys, auth_missing):
    monkeypatch.delenv("ZAI_API_KEY", raising=False)
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps({"models": [{"id": "zai", "model": "glm-5.1", "provider": "zai", "api_key_env": "ZAI_API_KEY"}]})
    )

    assert cli.doctor(settings) == 1

    output = capsys.readouterr().out
    assert "WebSockets (client):" in output
    assert "Response store:" in output
    assert "Hidden model entries:" in output
    assert "missing API key from ZAI_API_KEY" in output


def test_export_config_redacts_secrets_by_default(tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "model": "secret-model",
                        "display_name": "Secret Model",
                        "provider": "openai",
                        "base_url": "http://x/v1",
                        "apiKey": "sk-live",
                        "extra_headers": {"Authorization": "Bearer hidden", "x-api-key": "hidden-too"},
                    }
                ]
            }
        )
    )
    output = tmp_path / "export.json"

    assert cli.export_config(settings, output) == 0

    exported = json.loads(output.read_text())
    row = exported["models"][0]
    assert row["apiKey"] == cli.REDACTED_VALUE
    assert row["extra_headers"]["Authorization"] == cli.REDACTED_VALUE
    assert row["extra_headers"]["x-api-key"] == cli.REDACTED_VALUE
    assert row["model"] == "secret-model"


def test_export_config_can_include_secrets(tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(json.dumps({"models": [{"model": "m", "provider": "openai", "base_url": "http://x/v1", "api_key": "sk"}]}))
    output = tmp_path / "export.json"

    assert cli.export_config(settings, output, redact=False) == 0

    assert json.loads(output.read_text())["models"][0]["api_key"] == "sk"


def test_import_config_validates_and_backs_up_existing_settings(tmp_path):
    destination = tmp_path / "models.json"
    destination.write_text(json.dumps({"models": [{"model": "old", "provider": "openai", "base_url": "http://old/v1"}]}))
    source = tmp_path / "import.json"
    source.write_text(json.dumps({"models": [{"model": "new", "provider": "openai", "base_url": "http://new/v1"}]}))

    assert cli.import_config(destination, source) == 0

    assert json.loads(destination.read_text())["models"][0]["model"] == "new"
    backup = destination.with_name(destination.name + ".before-import")
    assert json.loads(backup.read_text())["models"][0]["model"] == "old"


def test_default_missing_settings_allows_chatgpt_only(monkeypatch, tmp_path):
    missing = tmp_path / "missing-default.json"
    monkeypatch.setattr("codex_shim.settings.DEFAULT_SETTINGS", missing)
    assert ModelSettings().load() == []


def test_cli_load_models_missing_custom_settings_has_actionable_error(tmp_path):
    missing = tmp_path / "missing.json"
    with pytest.raises(SystemExit) as exc:
        cli._load_models(missing)
    assert "Settings file not found" in str(exc.value)
    assert "--settings /path/to/models.json" in str(exc.value)


def test_cli_resolves_chatgpt_passthrough_slug_when_auth_present(auth_present):
    assert cli._resolve_model_slug([], "gpt-5.5") == "gpt-5.5"
    assert cli._resolve_model_slug([], "openai-gpt-5-5") == "gpt-5.5"


def test_cli_rejects_chatgpt_passthrough_slug_when_auth_missing(auth_missing):
    with pytest.raises(SystemExit) as exc:
        cli._resolve_model_slug([], "gpt-5.5")
    assert "codex login" in str(exc.value)


def test_list_models_includes_chatgpt_passthrough_when_auth_present(monkeypatch, capsys, auth_present):
    settings = auth_present.parent / "models.json"
    settings.write_text(json.dumps({"models": []}))
    assert cli.list_models(settings) == 0
    assert "gpt-5.5" in capsys.readouterr().out


def test_list_models_hides_chatgpt_passthrough_when_auth_missing(monkeypatch, tmp_path, capsys, auth_missing):
    settings = tmp_path / "models.json"
    settings.write_text(json.dumps({"models": []}))
    assert cli.list_models(settings) == 1
    out = capsys.readouterr()
    assert "gpt-5.5" not in out.out
    assert "codex login" in out.err


def test_cli_load_models_invalid_json_has_actionable_error(tmp_path):
    settings = tmp_path / "settings.json"
    settings.write_text("{")
    with pytest.raises(SystemExit) as exc:
        cli._load_models(settings)
    assert "Settings file is not valid JSON" in str(exc.value)


def test_chatgpt_passthrough_available_requires_access_token(tmp_path):
    missing = tmp_path / "missing.json"
    assert chatgpt_passthrough_available(missing) is False
    no_tokens = tmp_path / "no-tokens.json"
    no_tokens.write_text(json.dumps({}))
    assert chatgpt_passthrough_available(no_tokens) is False
    empty_token = tmp_path / "empty.json"
    empty_token.write_text(json.dumps({"tokens": {"access_token": ""}}))
    assert chatgpt_passthrough_available(empty_token) is False
    valid = tmp_path / "valid.json"
    valid.write_text(json.dumps({"tokens": {"access_token": "x"}}))
    assert chatgpt_passthrough_available(valid) is True


def test_desktop_models_include_chatgpt_synthetic_model_when_auth_present(tmp_path, auth_present):
    settings = tmp_path / "models.json"
    settings.write_text(json.dumps({"models": []}))

    [model] = ModelSettings(settings).desktop_models()

    assert model.slug == "gpt-5.5"
    assert model.provider == "chatgpt"
    assert model.is_chatgpt is True
    assert model.capabilities.supports_image_generation is True


def test_write_catalog_omits_gpt55_when_auth_missing(tmp_path, auth_missing):
    catalog_path = tmp_path / "catalog.json"
    write_catalog([], catalog_path)
    data = json.loads(catalog_path.read_text())
    assert data == {"models": []}


def test_write_catalog_includes_gpt55_when_auth_present(tmp_path, auth_present):
    settings = tmp_path / "models.json"
    settings.write_text(json.dumps({"models": []}))
    catalog_path = tmp_path / "catalog.json"
    write_catalog(ModelSettings(settings).desktop_models(), catalog_path)
    data = json.loads(catalog_path.read_text())
    assert [model["slug"] for model in data["models"]] == ["gpt-5.5"]


def test_managed_config_escapes_windows_catalog_path(monkeypatch):
    monkeypatch.setattr(cli, "CATALOG_PATH", r"C:\Users\User\codex-shim\.codex-shim\custom_model_catalog.json")
    top_block, provider_block = cli._managed_config_blocks("vendor\\model", 8765)
    assert 'model = "vendor\\\\model"' in top_block
    assert 'model_catalog_json = "C:\\\\Users\\\\User\\\\codex-shim\\\\.codex-shim\\\\custom_model_catalog.json"' in top_block
    assert "supports_websockets = true" in provider_block


def test_generated_provider_config_websockets_can_be_disabled(monkeypatch, tmp_path):
    monkeypatch.setenv("CODEX_SHIM_ENABLE_WEBSOCKETS", "0")
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "model": "gpt-4o",
                        "display_name": "GPT-4o",
                        "provider": "openai",
                        "base_url": "http://127.0.0.1:9999/v1",
                    }
                ]
            }
        )
    )
    catalog_path = tmp_path / "catalog.json"
    config_path = tmp_path / "config.toml"
    models = ModelSettings(settings).load()
    write_catalog(models, catalog_path)
    write_config(models, config_path, catalog_path, 8765)
    text = config_path.read_text()
    assert "supports_websockets = false" in text
    overrides = codex_config_overrides(catalog_path, models[0].slug, 8765)
    assert any("supports_websockets=false" in line for line in overrides)


def test_generated_provider_config_enables_websockets_by_default(tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "model": "gpt-4o",
                        "display_name": "GPT-4o",
                        "provider": "openai",
                        "base_url": "http://127.0.0.1:9999/v1",
                    }
                ]
            }
        )
    )
    catalog_path = tmp_path / "catalog.json"
    config_path = tmp_path / "config.toml"
    models = ModelSettings(settings).load()
    write_catalog(models, catalog_path)
    write_config(models, config_path, catalog_path, 8765)
    text = config_path.read_text()
    assert "supports_websockets = true" in text
    entry = catalog_entry(models[0])
    assert "service_tiers" in entry
    assert "additional_speed_tiers" in entry
    assert "default_service_tier" in entry


def test_install_codex_config_is_idempotent(monkeypatch, tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {"model": "llama3.2", "display_name": "Llama", "provider": "generic-chat-completion-api", "base_url": "http://127.0.0.1:11434/v1"}
                ]
            }
        )
    )
    config_path = tmp_path / ".codex" / "config.toml"
    monkeypatch.setattr(cli, "RUNTIME_DIR", tmp_path / ".codex-shim")
    monkeypatch.setattr(cli, "CODEX_CONFIG_PATH", config_path)
    monkeypatch.setattr(cli, "CODEX_CONFIG_BACKUP_PATH", tmp_path / ".codex-shim" / "config.toml.before-codex-shim")

    cli.install_codex_config(settings, 8765, "llama3.2")
    cli.install_codex_config(settings, 8765, "llama3.2")

    text = config_path.read_text()
    assert text.count("[model_providers.codex_shim]") == 1
    assert text.count("model_provider = \"codex_shim\"") == 1
    assert text.count("model_catalog_json") == 1
    assert "supports_websockets = true" in text


def test_install_and_restore_preserve_displaced_top_level_config(monkeypatch, tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {"model": "llama3.2", "display_name": "Llama", "provider": "generic-chat-completion-api", "base_url": "http://127.0.0.1:11434/v1"}
                ]
            }
        )
    )
    config_path = tmp_path / ".codex" / "config.toml"
    config_path.parent.mkdir()
    config_path.write_text(
        'model = "gpt-5.5"\n'
        'model_provider = "openai"\n'
        'model_catalog_json = "/tmp/catalog.json"\n'
        '\n[profiles.dev]\nmodel = "profile-model"\n'
    )
    monkeypatch.setattr(cli, "RUNTIME_DIR", tmp_path / ".codex-shim")
    monkeypatch.setattr(cli, "CODEX_CONFIG_PATH", config_path)
    monkeypatch.setattr(cli, "CODEX_CONFIG_BACKUP_PATH", tmp_path / ".codex-shim" / "config.toml.before-codex-shim")

    cli.install_codex_config(settings, 8765, "llama3.2")
    installed = config_path.read_text()
    assert cli.PREVIOUS_TOP_LEVEL_PREFIX in installed
    assert '\nmodel = "llama3-2"\n' in installed
    assert '\nmodel_provider = "openai"\n' not in installed
    assert '[profiles.dev]\nmodel = "profile-model"' in installed

    cli.restore_codex_config()
    restored = config_path.read_text().rstrip() + "\n"
    assert restored == (
        'model = "gpt-5.5"\n'
        'model_provider = "openai"\n'
        'model_catalog_json = "/tmp/catalog.json"\n'
        '[profiles.dev]\nmodel = "profile-model"\n'
    )


def test_current_managed_model_ignores_user_top_level_and_stale_managed(monkeypatch, tmp_path, auth_missing):
    config_path = tmp_path / ".codex" / "config.toml"
    config_path.parent.mkdir()
    config_path.write_text(
        'model = "user-top"\n'
        f'{cli.MANAGED_BEGIN}\n'
        'model = "stale-managed"\n'
        f'{cli.MANAGED_END}\n'
    )
    monkeypatch.setattr(cli, "CODEX_CONFIG_PATH", config_path)

    model = ModelSettingsFixture.one()
    assert cli._current_managed_model() == "stale-managed"
    assert cli._resolve_model_slug([model], None) == "claude-opus"


def test_loopback_no_proxy_adds_upper_and_lowercase_entries():
    env = cli._with_loopback_no_proxy({"NO_PROXY": "example.com,localhost"})

    assert env["NO_PROXY"] == "example.com,localhost,127.0.0.1,::1"
    assert env["no_proxy"] == "127.0.0.1,localhost,::1"


def test_patch_app_fails_off_macos(monkeypatch, capsys):
    monkeypatch.setattr(cli.sys, "platform", "win32")

    assert cli.patch_codex_app() == 1
    assert "macOS-only" in capsys.readouterr().err


def test_restore_app_fails_off_macos(monkeypatch, capsys):
    monkeypatch.setattr(cli.sys, "platform", "linux")

    assert cli.restore_codex_app_bundle() == 1
    assert "macOS-only" in capsys.readouterr().err


def test_desktop_bundle_patch_applies_model_picker_and_sidebar(tmp_path):
    assets = tmp_path / "webview" / "assets"
    assets.mkdir(parents=True)
    model_bundle = assets / "model-queries-test.js"
    sidebar_bundle = assets / "app-server-manager-signals-test.js"
    model_bundle.write_text(f"before {cli.MODEL_PICKER_NEEDLE} after")
    sidebar_bundle.write_text(f"before {cli.SIDEBAR_RECENT_THREADS_NEEDLE} after")

    assert cli._patch_codex_desktop_bundles(tmp_path) is True
    assert cli.MODEL_PICKER_REPLACEMENT in model_bundle.read_text()
    assert cli.SIDEBAR_RECENT_THREADS_REPLACEMENT in sidebar_bundle.read_text()
    assert cli._patch_codex_desktop_bundles(tmp_path) is False


def test_desktop_bundle_patch_fails_when_sidebar_needle_is_missing(tmp_path):
    assets = tmp_path / "webview" / "assets"
    assets.mkdir(parents=True)
    (assets / "model-queries-test.js").write_text(cli.MODEL_PICKER_NEEDLE)
    (assets / "app-server-manager-signals-test.js").write_text("different build")

    assert cli._patch_codex_desktop_bundles(tmp_path) is None


def test_desktop_bundle_patch_inspection_detects_patched_and_missing(tmp_path):
    assets = tmp_path / "webview" / "assets"
    assets.mkdir(parents=True)
    (assets / "model-queries-test.js").write_text(cli.MODEL_PICKER_REPLACEMENT)
    (assets / "app-server-manager-signals-test.js").write_text("different build")

    inspection = cli._inspect_codex_desktop_bundles(tmp_path)

    assert inspection[0]["status"] == "patched"
    assert inspection[1]["status"] == "missing"
    assert cli._inspection_has_applied_patch(inspection) is True
    assert cli._inspection_has_missing_patch(inspection) is True


def test_update_app_asar_integrity_uses_asar_json_header_hash(tmp_path):
    header_json = b'{"files":{"x":{"offset":"0","size":1}}}'
    app_asar = tmp_path / "app.asar"
    app_asar.write_bytes(struct.pack("<4I", 4, len(header_json), 0, len(header_json)) + header_json + b"x")
    info_plist = tmp_path / "Info.plist"
    info_plist.write_bytes(
        plistlib.dumps({"ElectronAsarIntegrity": {"Resources/app.asar": {"hash": "old"}}})
    )

    cli._update_app_asar_integrity(app_asar, info_plist)

    data = plistlib.loads(info_plist.read_bytes())
    assert data["ElectronAsarIntegrity"]["Resources/app.asar"]["hash"] == hashlib.sha256(header_json).hexdigest()


class ModelSettingsFixture:
    @staticmethod
    def one():
        import tempfile
        from pathlib import Path

        path = Path(tempfile.mkdtemp()) / "settings.json"
        path.write_text(
            json.dumps(
                {
                    "models": [
                        {
                            "model": "claude-opus",
                            "display_name": "Claude Opus",
                            "provider": "anthropic",
                            "base_url": "http://anthropic",
                            "max_context_limit": 200000,
                        }
                    ]
                }
            )
        )
        return ModelSettings(path).load()[0]

    @staticmethod
    def with_providers(providers: list[str], base_url: str = "http://upstream/v1"):
        import tempfile
        from pathlib import Path

        path = Path(tempfile.mkdtemp()) / "settings.json"
        path.write_text(
            json.dumps(
                {
                    "models": [
                        {
                            "model": f"{provider}-model",
                            "display_name": f"{provider} model",
                            "provider": provider,
                            "base_url": base_url,
                        }
                        for provider in providers
                    ]
                }
            )
        )
        return ModelSettings(path).load()
