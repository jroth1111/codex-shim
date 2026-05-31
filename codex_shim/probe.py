from __future__ import annotations

import json
import os
import sys
from pathlib import Path
from typing import Any

from . import integration_harness as harness
from .settings import ModelSettings, chatgpt_passthrough_available

CompactProbeError = harness.CompactProbeError
TIER_A_PROBE_INSTRUCTIONS = harness.TIER_A_PROBE_INSTRUCTIONS
_PROBE_OUTPUT_TEXT_KEY = harness.PROBE_OUTPUT_TEXT_KEY

tier_a_passthrough_body = harness.tier_a_passthrough_body
tier_a_compact_body = harness.tier_a_compact_body
validate_compact_response = harness.validate_compact_response
validate_passthrough_streaming_response = harness.validate_passthrough_streaming_response
validate_passthrough_compact_response = harness.validate_passthrough_compact_response
validate_history_response = harness.validate_history_response

_post_json = harness.post_json
_post_json_streaming = harness.post_json_streaming


def resolve_compact_probe_slug(settings_path: Path, slug: str | None):
    return harness.resolve_byok_slug(settings_path, slug)


def resolve_history_probe_slug(settings_path: Path, slug: str | None):
    return harness.resolve_byok_slug(settings_path, slug)


def probe_compact(settings_path: Path, port: int, slug: str | None = None) -> int:
    route = harness.resolve_byok_slug(settings_path, slug)
    if route.capabilities.compact_behavior == "unsupported":
        raise CompactProbeError(f"{route.slug} ({route.provider}) does not support /v1/responses/compact.")
    item_type, summary = harness.run_byok_compact(port, route)
    print(f"Compact probe passed for {route.slug} ({route.provider}).")
    print(f"  item_type: {item_type}")
    print(f"  summary: {summary[:160]}{'…' if len(summary) > 160 else ''}")
    return 0


def probe_history(settings_path: Path, port: int, slug: str | None = None) -> int:
    route = harness.resolve_byok_slug(settings_path, slug)
    info = harness.run_byok_history(port, route)
    print("  compact: compaction_trigger + context_compaction")
    print(f"History probe passed for {route.slug} ({route.provider}).")
    print(f"  previous_response_id: {info['previous_response_id']}")
    print(f"  compact_item_type: {info['compact_item_type']}")
    print(f"  compact_summary: {info['compact_summary'][:120]}{'…' if len(info['compact_summary']) > 120 else ''}")
    return 0


def probe_streaming_history(settings_path: Path, port: int, slug: str | None = None) -> int:
    route = harness.resolve_byok_slug(settings_path, slug)
    info = harness.run_byok_streaming_history(port, route)
    print(f"Streaming history probe passed for {route.slug} ({route.provider}).")
    print(f"  previous_response_id: {info['previous_response_id']}")
    print(f"  compact_item_type: {info['compact_item_type']}")
    print(f"  compact_summary: {info['compact_summary'][:120]}{'…' if len(info['compact_summary']) > 120 else ''}")
    return 0


def _fixture_dir() -> Path:
    return harness.DESKTOP_FIXTURE_DIR


def probe_fidelity() -> int:
    """Offline translation fidelity checks (no daemon required)."""
    from .translate import responses_to_chat, tool_call_to_response_item, validate_responses_input

    fixture_dir = _fixture_dir()
    tool_payload = json.loads((fixture_dir / "tool_heavy_turn.json").read_text())
    compact_payload = json.loads((fixture_dir / "compaction_turn.json").read_text())
    reasoning_payload = json.loads((fixture_dir / "reasoning_turn.json").read_text())
    mcp_payload = json.loads((fixture_dir / "mcp_tool_turn.json").read_text())
    for label, items in (
        ("tool_heavy", tool_payload["input"]),
        ("compaction", compact_payload["input"]),
        ("reasoning", reasoning_payload["input"]),
        ("mcp", mcp_payload["input"]),
    ):
        body = {"model": "probe", "input": items}
        validate_responses_input(body)
        out = responses_to_chat(body, "probe-model")
        if not out.get("messages"):
            raise CompactProbeError(f"Fidelity probe {label}: no chat messages produced.")
    passthrough_compact = json.loads((fixture_dir / "passthrough_compact.json").read_text())
    validate_compact_response(passthrough_compact)
    image_body = {
        "model": "probe",
        "input": [{"type": "image_generation_call", "call_id": "call_img", "action": {"prompt": "probe fox"}}],
    }
    validate_responses_input(image_body)
    responses_to_chat(image_body, "probe-model")
    web_item = tool_call_to_response_item(
        {
            "id": "call_search_probe",
            "function": {"name": "web_search", "arguments": '{"query":"codex shim"}'},
        }
    )
    if web_item.get("type") != "web_search_call":
        raise CompactProbeError("Fidelity probe web_search: expected web_search_call output item.")
    action = web_item.get("action")
    if not isinstance(action, dict) or action.get("type") != "search":
        raise CompactProbeError("Fidelity probe web_search: action.type must be 'search'.")
    from .desktop_validate import assert_image_generation_action, assert_local_shell_action, assert_web_search_action

    assert_web_search_action(action)
    shell_item = tool_call_to_response_item(
        {"id": "call_shell_probe", "function": {"name": "local_shell", "arguments": '{"command":"echo probe"}'}}
    )
    if shell_item.get("type") != "local_shell_call":
        raise CompactProbeError("Fidelity probe local_shell: expected local_shell_call output item.")
    shell_action = shell_item.get("action")
    if not isinstance(shell_action, dict) or shell_action.get("command") != "echo probe":
        raise CompactProbeError("Fidelity probe local_shell: action.command must be 'echo probe'.")
    assert_local_shell_action(shell_action)
    img_item = tool_call_to_response_item(
        {"id": "call_img_probe", "function": {"name": "image_generation", "arguments": '{"prompt":"probe fox"}'}}
    )
    if img_item.get("type") != "image_generation_call":
        raise CompactProbeError("Fidelity probe image_generation: expected image_generation_call output item.")
    if img_item.get("revised_prompt") != "probe fox":
        raise CompactProbeError("Fidelity probe image_generation: revised_prompt must be 'probe fox'.")
    img_action = img_item.get("action")
    if not isinstance(img_action, dict):
        raise CompactProbeError("Fidelity probe image_generation: action must be a dict.")
    assert_image_generation_action(img_action)
    ts_item = tool_call_to_response_item(
        {"id": "call_ts_probe", "function": {"name": "tool_search", "arguments": '{"query":"grep"}'}}
    )
    if ts_item.get("type") != "tool_search_call":
        raise CompactProbeError("Fidelity probe tool_search: expected tool_search_call output item.")
    print("Fidelity probe passed (hosted tools, compaction, reasoning, MCP, image generation, passthrough compact shape).")
    return 0


def _shim_reachable(port: int) -> bool:
    return harness.shim_reachable(port)


def _passthrough_live_enabled(live: bool) -> bool:
    if live:
        return True
    return os.environ.get("CODEX_SHIM_PROBE_PASSTHROUGH", "").strip().lower() in {"1", "true", "yes"}


def probe_passthrough(port: int, *, live: bool = False) -> int:
    if not _passthrough_live_enabled(live):
        print("Skipping passthrough probe (pass --live or set CODEX_SHIM_PROBE_PASSTHROUGH=1).")
        return 0
    if not chatgpt_passthrough_available():
        print("Skipping passthrough probe: ~/.codex/auth.json missing tokens.access_token.")
        return 0
    response_id, output_text = harness.run_tier_a_passthrough_streaming(port)
    print("Passthrough probe passed (gpt-5.5 via shim daemon).")
    print(f"  response_id: {response_id}")
    print(f"  output_text: {output_text!r}")
    return 0


def probe_passthrough_compact(port: int, *, live: bool = False) -> int:
    if not _passthrough_live_enabled(live):
        print("Skipping passthrough-compact probe (pass --live or set CODEX_SHIM_PROBE_PASSTHROUGH=1).")
        return 0
    if not chatgpt_passthrough_available():
        print("Skipping passthrough-compact probe: ~/.codex/auth.json missing tokens.access_token.")
        return 0
    response_id, item_type, summary = harness.run_tier_a_passthrough_compact(port)
    print("Passthrough compact probe passed.")
    print(f"  response_id: {response_id}")
    print(f"  item_type: {item_type}")
    print(f"  summary: {summary[:160]}{'…' if len(summary) > 160 else ''}")
    return 0


def probe_live_matrix(settings_path: Path, port: int) -> int:
    if not harness.shim_reachable(port):
        raise CompactProbeError(f"Shim is not reachable at {harness.shim_base_url(port)}/health")
    results = harness.run_live_matrix(settings_path, port)
    exit_code = 0
    for result in results:
        status = "PASS" if result.ok else "FAIL"
        if result.detail.startswith("skipped:"):
            status = "SKIP"
        print(f"  [{status}] {result.label}: {result.detail}")
        if not result.ok and not result.detail.startswith("skipped:"):
            exit_code = 1
    if exit_code == 0:
        print("Live matrix probe passed.")
    else:
        print("Live matrix probe finished with failures.", file=sys.stderr)
    return exit_code


def probe_all(settings_path: Path, port: int, slug: str | None = None, *, live: bool = False) -> int:
    exit_code = probe_fidelity()
    if exit_code != 0:
        return exit_code
    if not harness.shim_reachable(port):
        print("Shim daemon not reachable; skipping live probes.")
        print("  Start with: codex-shim serve")
        return 0
    for label, runner in (
        ("history", lambda: probe_history(settings_path, port, slug)),
        ("streaming-history", lambda: probe_streaming_history(settings_path, port, slug)),
        ("ws-streaming", lambda: probe_ws_streaming(settings_path, port, slug)),
        ("compact", lambda: probe_compact(settings_path, port, slug)),
    ):
        try:
            code = runner()
        except CompactProbeError as exc:
            print(f"{label} probe failed: {exc}", file=sys.stderr)
            return 1
        exit_code = max(exit_code, code)
    if live:
        try:
            exit_code = max(exit_code, probe_live_matrix(settings_path, port))
        except CompactProbeError as exc:
            print(f"live-matrix probe failed: {exc}", file=sys.stderr)
            return 1
    else:
        try:
            exit_code = max(exit_code, probe_passthrough(port, live=False))
            exit_code = max(exit_code, probe_passthrough_compact(port, live=False))
        except CompactProbeError as exc:
            print(f"passthrough probe failed: {exc}", file=sys.stderr)
            return 1
    print("Probe all finished.")
    return exit_code


def probe_ws_streaming(settings_path: Path, port: int, slug: str | None = None) -> int:
    route = harness.resolve_byok_slug(settings_path, slug)
    harness.run_ws_streaming(port, route)
    print(f"WS streaming probe passed for {route.slug} ({route.provider}).")
    return 0
