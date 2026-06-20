from __future__ import annotations

import json
import os
import shutil
import subprocess
import sys
import time
from pathlib import Path

import pytest

from codex_shim.settings import DEFAULT_SETTINGS, chatgpt_passthrough_available
from codex_shim.verification import harness

pytestmark = pytest.mark.live


def _live_enabled() -> bool:
    return os.environ.get("CODEX_SHIM_LIVE", "").strip().lower() in {"1", "true", "yes"}


def _configure_zai_coding_plan(settings_path: Path) -> bool:
    key_path = settings_path.parent / "secrets" / "zai.key"
    api_key = os.environ.get("ZAI_API_KEY", "").strip()
    if api_key:
        auth_field = {"api_key_env": "ZAI_API_KEY"}
    elif key_path.exists():
        try:
            if not key_path.read_text().strip():
                return False
        except OSError:
            return False
        auth_field = {"api_key_file": str(key_path.expanduser())}
    else:
        return False
    os.environ.setdefault("CODEX_SHIM_LIVE_SLUG_OPENAI", "zai-glm-5-2-coding-plan")
    row = {
        "id": "zai-glm-5-2-coding-plan",
        "model": "glm-5.2",
        "display_name": "Z.AI GLM-5.2 Coding Plan",
        "provider": "zai-coding-plan",
        "enabled": True,
        **auth_field,
    }
    settings_path.parent.mkdir(parents=True, exist_ok=True)
    if settings_path.exists():
        data = json.loads(settings_path.read_text())
        if not isinstance(data, dict):
            data = {"models": []}
    else:
        data = {"models": []}
    rows = data.setdefault("models", [])
    if not isinstance(rows, list):
        rows = []
        data["models"] = rows
    replaced = False
    for index, existing in enumerate(rows):
        if not isinstance(existing, dict):
            continue
        if str(existing.get("id") or "") == row["id"]:
            rows[index] = row
            replaced = True
            break
    if not replaced:
        rows.append(row)
    settings_path.write_text(json.dumps(data, indent=2) + "\n")
    return True


def _configure_cursor_agent_cli(settings_path: Path) -> bool:
    if shutil.which("cursor") is None:
        return False
    os.environ.setdefault("CODEX_SHIM_LIVE_SLUG_CURSOR", "cursor-auto")
    row = {
        "id": "cursor-auto",
        "model": "auto",
        "display_name": "Cursor Auto",
        "provider": "cursor-agent",
        "command": "cursor",
        "args": ["agent", "--print", "--trust", "--yolo", "--model", "auto"],
        "enabled": True,
    }
    settings_path.parent.mkdir(parents=True, exist_ok=True)
    if settings_path.exists():
        data = json.loads(settings_path.read_text())
        if not isinstance(data, dict):
            data = {"models": []}
    else:
        data = {"models": []}
    rows = data.setdefault("models", [])
    if not isinstance(rows, list):
        rows = []
        data["models"] = rows
    replaced = False
    for index, existing in enumerate(rows):
        if not isinstance(existing, dict):
            continue
        if str(existing.get("id") or "") == row["id"]:
            rows[index] = row
            replaced = True
            break
    if not replaced:
        rows.append(row)
    settings_path.write_text(json.dumps(data, indent=2) + "\n")
    return True


@pytest.fixture(scope="session", autouse=True)
def live_enabled():
    if not _live_enabled():
        pytest.skip("Live integration tests require CODEX_SHIM_LIVE=1")


@pytest.fixture(scope="session")
def shim_port() -> int:
    return harness.default_port()


@pytest.fixture(scope="session")
def settings_path() -> Path:
    return DEFAULT_SETTINGS.expanduser()


def _codex_shim_cmd(*args: str) -> list[str]:
    cli = shutil.which("codex-shim")
    if cli:
        return [cli, *args]
    return [sys.executable, "-m", "codex_shim.cli", *args]


@pytest.fixture(scope="session", autouse=True)
def configure_live_byok(settings_path: Path, shim_port: int):
    if not _live_enabled():
        return
    configured_zai = _configure_zai_coding_plan(settings_path)
    configured_cursor = _configure_cursor_agent_cli(settings_path)
    configured = configured_zai or configured_cursor
    if configured:
        subprocess.run(
            [*_codex_shim_cmd("--port", str(shim_port), "restart")],
            check=False,
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
        )
        for _ in range(30):
            if harness.shim_reachable(shim_port):
                break
            time.sleep(0.5)


@pytest.fixture(scope="session")
def tier_a_available() -> bool:
    return chatgpt_passthrough_available()


@pytest.fixture(scope="session")
def byok_matrix(settings_path: Path) -> dict[str, object]:
    return harness.resolve_live_byok_matrix(settings_path)


def _restart_shim_if_needed(shim_port: int) -> None:
    if harness.shim_reachable(shim_port):
        return
    subprocess.run(
        [*_codex_shim_cmd("--port", str(shim_port), "restart")],
        check=False,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.DEVNULL,
    )
    for _ in range(60):
        if harness.shim_reachable(shim_port):
            return
        time.sleep(0.5)


@pytest.fixture(autouse=True)
def recover_shim_between_cursor_tests(shim_port: int, request):
    """Restart the shim only when a prior cursor live test left the daemon down."""
    if request.node.get_closest_marker("live") is None:
        return
    module = getattr(request.node, "module", None)
    module_name = getattr(module, "__name__", "") if module is not None else ""
    if not module_name.endswith("test_cursor_agent"):
        return
    if request.node.name in {
        "test_cursor_auto_configured_in_settings",
        "test_cursor_agent_visible_in_model_settings",
    }:
        return
    _restart_shim_if_needed(shim_port)


@pytest.fixture(scope="session", autouse=True)
def session_shim(shim_port: int, configure_live_byok):
    started = False
    proc = None
    if os.environ.get("CODEX_SHIM_LIVE_START", "").strip().lower() in {"1", "true", "yes"}:
        proc = subprocess.Popen(
            [*_codex_shim_cmd("--port", str(shim_port), "start")],
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
        )
        started = True
        for _ in range(30):
            if harness.shim_reachable(shim_port):
                break
            time.sleep(0.5)
    if not harness.shim_reachable(shim_port):
        pytest.skip(
            f"Shim not reachable at {harness.shim_base_url(shim_port)}/health "
            "(start with: codex-shim start)"
        )
    yield
    if started and proc is not None:
        proc.terminate()
        try:
            proc.wait(timeout=5)
        except subprocess.TimeoutExpired:
            proc.kill()


@pytest.fixture(scope="session")
def require_tier_a(tier_a_available: bool, shim_port: int):
    if not tier_a_available:
        pytest.skip("Tier A tests require ~/.codex/auth.json with tokens.access_token")
    harness.require_shim(shim_port, require_chatgpt_passthrough=True)


@pytest.fixture
def openai_byok_slug(byok_matrix: dict) -> str:
    route = byok_matrix.get("openai_chat")
    if route is None:
        pytest.skip("No visible openai_chat BYOK model configured")
    return route.slug  # type: ignore[union-attr]
