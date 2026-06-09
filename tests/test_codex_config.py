from __future__ import annotations

import tomllib

from codex_shim import cli
from codex_shim.codex_config import (
    dedupe_toml_sections,
    remove_toml_section,
    repair_codex_config,
    repair_codex_config_text,
    write_codex_config,
)


def test_remove_toml_section_removes_all_occurrences():
    text = """
model = "gpt-5.5"

[model_providers.upstream_dump]
name = "old"

[model_providers.upstream_dump]
name = "new"

[model_providers.codex_shim]
name = "shim"
"""
    cleaned = remove_toml_section(text.strip() + "\n", "model_providers.upstream_dump")
    assert "[model_providers.upstream_dump]" not in cleaned
    assert '[model_providers.codex_shim]\nname = "shim"' in cleaned
    tomllib.loads(cleaned)


def test_dedupe_toml_sections_keeps_last_block():
    text = """
[model_providers.upstream_dump]
name = "old"
base_url = "http://127.0.0.1:1/v1"

[model_providers.upstream_dump]
name = "new"
base_url = "http://127.0.0.1:2/v1"
"""
    repaired, removed = dedupe_toml_sections(text.strip() + "\n", keep="last")
    assert removed == ["model_providers.upstream_dump"]
    assert repaired.count("[model_providers.upstream_dump]") == 1
    assert 'name = "new"' in repaired
    assert 'name = "old"' not in repaired
    tomllib.loads(repaired)


def test_repair_codex_config_text_validates_output():
    text = """
[model_providers.upstream_dump]
name = "a"

[model_providers.upstream_dump]
name = "b"
"""
    repaired, removed = repair_codex_config_text(text.strip() + "\n")
    assert removed == ["model_providers.upstream_dump"]
    tomllib.loads(repaired)


def test_write_codex_config_repairs_before_write(tmp_path):
    path = tmp_path / "config.toml"
    text = """
[model_providers.upstream_dump]
name = "a"

[model_providers.upstream_dump]
name = "b"
"""
    removed = write_codex_config(text.strip() + "\n", path)
    assert removed == ["model_providers.upstream_dump"]
    saved = path.read_text(encoding="utf-8")
    assert saved.count("[model_providers.upstream_dump]") == 1
    assert 'name = "b"' in saved
    tomllib.loads(saved)


def test_repair_codex_config_writes_only_when_changed(tmp_path):
    path = tmp_path / "config.toml"
    path.write_text('model = "gpt-5.5"\n', encoding="utf-8")
    assert repair_codex_config(path) == []
    assert path.read_text(encoding="utf-8") == 'model = "gpt-5.5"\n'


def test_install_codex_config_is_idempotent_with_duplicate_provider(monkeypatch, tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(
        '{"models":[{"model":"llama3.2","display_name":"Llama","provider":"generic-chat-completion-api","base_url":"http://127.0.0.1:11434/v1"}]}'
    )
    config_path = tmp_path / ".codex" / "config.toml"
    config_path.parent.mkdir()
    config_path.write_text(
        """
[model_providers.codex_shim]
name = "old"

[model_providers.codex_shim]
name = "stale"
""".strip()
        + "\n",
        encoding="utf-8",
    )
    monkeypatch.setattr(cli, "RUNTIME_DIR", tmp_path / ".codex-shim")
    monkeypatch.setattr(cli, "CODEX_CONFIG_PATH", config_path)
    monkeypatch.setattr(cli, "CODEX_CONFIG_BACKUP_PATH", tmp_path / ".codex-shim" / "config.toml.before-codex-shim")

    cli.install_codex_config(settings, 8765, "llama3.2")
    text = config_path.read_text(encoding="utf-8")
    assert text.count("[model_providers.codex_shim]") == 1
    tomllib.loads(text)
