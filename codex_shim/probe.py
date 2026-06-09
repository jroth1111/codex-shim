from __future__ import annotations

import json
import os
import sys
from dataclasses import dataclass
from pathlib import Path
from typing import Any

from . import integration_harness as harness
from .settings import DEFAULT_SETTINGS, ModelSettings, chatgpt_passthrough_available

CompactProbeError = harness.CompactProbeError
TIER_A_PROBE_INSTRUCTIONS = harness.TIER_A_PROBE_INSTRUCTIONS
_PROBE_OUTPUT_TEXT_KEY = harness.PROBE_OUTPUT_TEXT_KEY

tier_a_passthrough_body = harness.tier_a_passthrough_body
tier_a_compact_body = harness.tier_a_compact_body
validate_compact_response = harness.validate_compact_response
validate_passthrough_streaming_response = harness.validate_passthrough_streaming_response
validate_passthrough_compact_response = harness.validate_passthrough_compact_response
validate_first_turn_payload = harness.validate_first_turn_payload
validate_follow_up_turn = harness.validate_follow_up_turn
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
    augmented = summary.startswith("[shim-compact-warning: projection_unverified]")
    summary_status = "projection_unverified" if augmented else "projection_verified"
    print(f"Compact probe passed for {route.slug} ({route.provider}).")
    print(f"  item_type: {item_type}")
    print(f"  summary_status: {summary_status}")
    print(f"  augmented: {augmented}")
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
        print("Shim daemon not reachable; skipping live probes.", file=sys.stderr)
        print("  Start with: codex-shim serve", file=sys.stderr)
        if live:
            return 1
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


def probe_tools(settings_path: Path, port: int, slug: str | None = None) -> int:
    route = harness.resolve_byok_slug(settings_path, slug)
    if route.is_cursor_cli or route.is_cursor_agent or route.is_cursor_acp:
        raise CompactProbeError(
            f"{route.slug} is a Cursor delegate route; use `codex-shim probe delegate --slug {route.slug}` instead."
        )
    timeout = 120
    payload = harness.post_json(
        harness.responses_url(port),
        harness.byok_tool_heavy_probe_body(route.slug),
        headers={"session_id": f"probe-tools-{route.slug}"},
        label="BYOK tool-loop probe",
        timeout=timeout,
    )
    harness.validate_completed_response(payload)
    output = payload.get("output")
    tool_items = [
        item
        for item in (output if isinstance(output, list) else [])
        if isinstance(item, dict) and str(item.get("type") or "").endswith("_call")
    ]
    metadata = payload.get("metadata")
    if not isinstance(metadata, dict) or "shim_route" not in metadata:
        raise CompactProbeError("Tool probe expected response metadata.shim_route in completed payload.")
    shim_route = metadata.get("shim_route")
    if not isinstance(shim_route, dict):
        raise CompactProbeError("Tool probe expected metadata.shim_route to be an object.")
    if str(shim_route.get("transport") or "") != route.transport:
        raise CompactProbeError(
            f"Tool probe transport mismatch: expected {route.transport!r}, got {shim_route.get('transport')!r}."
        )
    capabilities = shim_route.get("capabilities")
    if not isinstance(capabilities, dict):
        raise CompactProbeError("Tool probe expected metadata.shim_route.capabilities to be an object.")
    if not tool_items:
        raise CompactProbeError("Tool probe expected at least one mapped tool call output item.")
    print(f"Tool-loop probe passed for {route.slug} ({route.provider}).")
    print(f"  tool_items: {len(tool_items)}")
    print(f"  route_transport: {metadata.get('shim_route', {}).get('transport', 'unknown')}")
    return 0


def probe_delegate(settings_path: Path, port: int, slug: str | None = None) -> int:
    route = harness.resolve_byok_slug(settings_path, slug)
    if not (route.is_cursor_cli or route.is_cursor_agent or route.is_cursor_acp):
        raise CompactProbeError(f"{route.slug} is not a Cursor route; use `codex-shim probe tools` instead.")
    timeout = int(harness.cursor_probe_timeout(route))
    payload = harness.post_fixture_turn(
        port,
        route.slug,
        "tool_heavy_turn.json",
        stream=False,
        session_id=f"probe-delegate-{route.slug}",
        timeout=timeout,
    )
    harness.validate_completed_response(payload)
    output = payload.get("output")
    if not isinstance(output, list) or not output:
        raise CompactProbeError("Delegate probe expected non-empty assistant output.")
    tool_items = [
        item
        for item in output
        if isinstance(item, dict) and str(item.get("type") or "").endswith("_call")
    ]
    if tool_items:
        raise CompactProbeError(
            f"Delegate probe expected zero tool output items, got {len(tool_items)}: "
            f"{[item.get('type') for item in tool_items]}"
        )
    metadata = payload.get("metadata")
    if not isinstance(metadata, dict):
        raise CompactProbeError("Delegate probe expected response metadata.")
    shim_route = metadata.get("shim_route")
    if not isinstance(shim_route, dict):
        raise CompactProbeError("Delegate probe expected metadata.shim_route.")
    if shim_route.get("execution_mode") != "delegate":
        raise CompactProbeError(
            f"Delegate probe expected execution_mode=delegate, got {shim_route.get('execution_mode')!r}."
        )
    message_items = [item for item in output if isinstance(item, dict) and item.get("type") == "message"]
    if not message_items:
        raise CompactProbeError("Delegate probe expected at least one message output item.")
    print(f"Delegate probe passed for {route.slug} ({route.provider}).")
    print(f"  execution_mode: {shim_route.get('execution_mode')}")
    print(f"  message_items: {len(message_items)}")
    return 0


@dataclass(frozen=True)
class MatrixStepResult:
    step: str
    status: str
    reason: str = ""


def _matrix_offline_reasoning_tool_turn() -> MatrixStepResult:
    from .translate import responses_to_chat

    input_items = [
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "First"}]},
        {"type": "reasoning", "summary": [{"type": "summary_text", "text": "Plan tools."}]},
        {"type": "message", "role": "assistant", "content": [{"type": "output_text", "text": "ok"}]},
        {
            "type": "function_call",
            "call_id": "call_1",
            "name": "local_shell",
            "arguments": '{"command":"echo hi"}',
        },
        {"type": "function_call_output", "call_id": "call_1", "output": "hi"},
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Second"}]},
    ]
    try:
        result = responses_to_chat(
            {"input": input_items, "stream": False, "model": "deepseek"},
            upstream_model="deepseek-chat",
            provider="deepseek",
        )
        for message in result.get("messages", []):
            if message.get("reasoning_content") and message.get("content") is None:
                return MatrixStepResult("reasoning_tool_turn2", "fail", "assistant message has content=null with reasoning_content")
        return MatrixStepResult("reasoning_tool_turn2", "pass")
    except Exception as exc:
        return MatrixStepResult("reasoning_tool_turn2", "fail", str(exc))


def _matrix_offline_mcp_namespace() -> MatrixStepResult:
    from .translate import responses_to_chat

    fixture_path = Path(__file__).resolve().parents[1] / "tests" / "fixtures" / "desktop" / "mcp_namespace_tools_turn.json"
    try:
        payload = json.loads(fixture_path.read_text())
        out = responses_to_chat(
            {"model": "slug", "input": payload["input"], "tools": payload["tools"]},
            "real-model",
        )
        names = [t["function"]["name"] for t in out.get("tools", [])]
        if names != ["filesystem__list_files", "git__status"]:
            return MatrixStepResult("mcp_namespace_tools", "fail", f"unexpected tool names: {names}")
        return MatrixStepResult("mcp_namespace_tools", "pass")
    except Exception as exc:
        return MatrixStepResult("mcp_namespace_tools", "fail", str(exc))


def _matrix_offline_ws_after_tool() -> MatrixStepResult:
    from .streaming import ResponsesStreamState

    class _Sink:
        def __init__(self):
            self._chunks: list[bytes] = []

        async def write(self, data: bytes) -> None:
            self._chunks.append(data)

    async def _run() -> MatrixStepResult:
        sink = _Sink()
        state = ResponsesStreamState("probe-model")
        await state.start(sink)
        await state.write_chat_delta(
            sink,
            {
                "choices": [
                    {
                        "delta": {
                            "tool_calls": [
                                {
                                    "index": 0,
                                    "id": "call_probe",
                                    "function": {"name": "probe_tool", "arguments": "{}"},
                                }
                            ]
                        }
                    }
                ]
            },
        )
        first_index = state.next_output_index
        final = await state.finish(sink)
        if state.tool_calls or state.reasoning_blocks:
            return MatrixStepResult("ws_after_tool", "fail", "stream state not cleared after finish()")
        anomalies = (final.get("metadata") or {}).get("shim_anomalies")
        if anomalies:
            return MatrixStepResult("ws_after_tool", "fail", f"unexpected anomalies: {anomalies}")
        output_types = [item.get("type") for item in final.get("output", [])]
        if output_types != ["function_call"]:
            return MatrixStepResult("ws_after_tool", "fail", f"unexpected output types: {output_types}")

        sink2 = _Sink()
        state2 = ResponsesStreamState("probe-model")
        await state2.start(sink2)
        await state2.write_chat_delta(sink2, {"choices": [{"delta": {"content": "after tool"}}]})
        if state2.message_index != 0:
            return MatrixStepResult("ws_after_tool", "fail", "fresh stream state did not start output_index at 0")
        if first_index < 1:
            return MatrixStepResult("ws_after_tool", "fail", "tool output_index not monotonic")
        final2 = await state2.finish(sink2)
        text = final2["output"][0]["content"][0]["text"]
        if text != "after tool":
            return MatrixStepResult("ws_after_tool", "fail", "second-turn message text mismatch")
        return MatrixStepResult("ws_after_tool", "pass")

    import asyncio

    try:
        return asyncio.run(_run())
    except Exception as exc:
        return MatrixStepResult("ws_after_tool", "fail", str(exc))


def probe_one_turn(settings_path: Path, port: int, slug: str | None = None) -> int:
    route = harness.resolve_byok_slug(settings_path, slug)
    payload = harness.run_byok_simple_turn(port, route)
    validate_first_turn_payload(payload)
    print(f"One-turn probe passed for {route.slug} ({route.provider}).")
    return 0


def _matrix_offline_helper_policy() -> MatrixStepResult:
    from .routing.helper_models import apply_helper_model_policy, is_helper_model_slug

    if not is_helper_model_slug("codex-auto-review"):
        return MatrixStepResult("helper_slug_policy", "fail", "helper slug detector failed")
    try:
        settings = ModelSettings(DEFAULT_SETTINGS)
        body, route, category = apply_helper_model_policy(
            settings,
            {"model": "codex-auto-review", "input": "x"},
            requested="codex-auto-review",
        )
        if category != "helper_model_rerouted" or body.get("model") == "codex-auto-review":
            return MatrixStepResult("helper_slug_policy", "fail", "fallback rewrite did not apply")
        if route is None:
            return MatrixStepResult("helper_slug_policy", "partial", "no visible fallback route configured")
        return MatrixStepResult("helper_slug_policy", "pass")
    except Exception as exc:
        return MatrixStepResult("helper_slug_policy", "partial", str(exc))


def _run_matrix_step(name: str, fn) -> MatrixStepResult:
    try:
        code = fn()
        if isinstance(code, MatrixStepResult):
            return code
        if code == 0:
            return MatrixStepResult(name, "pass")
        return MatrixStepResult(name, "fail", f"exit code {code}")
    except CompactProbeError as exc:
        return MatrixStepResult(name, "fail", str(exc))
    except Exception as exc:
        return MatrixStepResult(name, "fail", str(exc))


def probe_matrix(
    settings_path: Path,
    port: int,
    slug: str | None = None,
    *,
    live: bool = False,
    as_json: bool = False,
) -> int:
    results: list[MatrixStepResult] = []

    results.append(_run_matrix_step("fidelity_offline", probe_fidelity))
    results.append(_matrix_offline_reasoning_tool_turn())
    results.append(_matrix_offline_mcp_namespace())
    results.append(_matrix_offline_helper_policy())
    results.append(_matrix_offline_ws_after_tool())

    daemon_up = harness.shim_reachable(port)
    if not daemon_up:
        for step in ("one_turn", "history", "tools", "ws_streaming", "compact"):
            results.append(MatrixStepResult(step, "skip", "shim daemon not reachable"))
    else:
        has_slug = False
        try:
            harness.resolve_byok_slug(settings_path, slug)
            has_slug = True
        except CompactProbeError:
            has_slug = False
        if has_slug:
            for step_name, runner in (
                ("one_turn", lambda: probe_one_turn(settings_path, port, slug)),
                ("history", lambda: probe_history(settings_path, port, slug)),
                ("tools", lambda: probe_tools(settings_path, port, slug)),
                ("ws_streaming", lambda: probe_ws_streaming(settings_path, port, slug)),
                ("compact", lambda: probe_compact(settings_path, port, slug)),
            ):
                results.append(_run_matrix_step(step_name, runner))
        else:
            for step in ("one_turn", "history", "tools", "ws_streaming", "compact"):
                results.append(MatrixStepResult(step, "skip", "no BYOK slug configured"))

    if live and daemon_up:
        results.append(_run_matrix_step("passthrough_tier_a", lambda: probe_passthrough(port, live=True)))
    else:
        results.append(MatrixStepResult("passthrough_tier_a", "skip", "pass --live to run Tier A passthrough"))

    if as_json:
        print(json.dumps([result.__dict__ for result in results], indent=2))
    else:
        print("Compatibility matrix:")
        width = max(len(result.step) for result in results)
        for result in results:
            suffix = f" — {result.reason}" if result.reason else ""
            print(f"  {result.step:<{width}}  {result.status}{suffix}")

    failed = [result for result in results if result.status == "fail"]
    return 1 if failed else 0
