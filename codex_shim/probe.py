from __future__ import annotations

import json
import os
import sys
from pathlib import Path
from typing import Any
from urllib.error import HTTPError, URLError
from urllib.request import Request, urlopen

from .settings import CHATGPT_MODEL_SLUG, ModelSettings, ShimModel, chatgpt_passthrough_available


class CompactProbeError(RuntimeError):
    pass


def resolve_compact_probe_slug(settings_path: Path, slug: str | None) -> ShimModel:
    models = ModelSettings(settings_path).load()
    desktop: list[ShimModel] = []
    for model in models:
        if model.visible and not model.is_chatgpt:
            desktop.append(model)
    if not desktop:
        raise CompactProbeError("No visible BYOK models configured for compact probe.")
    if slug:
        for model in desktop:
            if model.slug == slug:
                return model
        raise CompactProbeError(f"Unknown or hidden BYOK slug: {slug}")
    return desktop[0]


def validate_compact_response(payload: dict[str, Any]) -> tuple[str, str]:
    if payload.get("status") != "completed":
        raise CompactProbeError(f"Expected status=completed, got {payload.get('status')!r}")
    output = payload.get("output")
    if not isinstance(output, list) or not output:
        raise CompactProbeError(f"Expected compaction output items, got {type(output)!r}")
    compaction_items = [
        item for item in output if isinstance(item, dict) and item.get("type") in {"context_compaction", "compaction"}
    ]
    if len(compaction_items) != 1:
        raise CompactProbeError(
            f"Expected exactly one context_compaction/compaction item, got {len(compaction_items)}"
        )
    item = compaction_items[0]
    summary_text = _summary_text(item)
    if not summary_text.strip():
        raise CompactProbeError("Compaction summary text is empty.")
    return str(item.get("type") or ""), summary_text


def _summary_text(item: dict[str, Any]) -> str:
    summary = item.get("summary")
    if isinstance(summary, list):
        parts = [str(part.get("text") or "") for part in summary if isinstance(part, dict)]
        text = "\n".join(part for part in parts if part).strip()
        if text:
            return text
    content = item.get("content")
    if isinstance(content, list):
        parts = [str(part.get("text") or "") for part in content if isinstance(part, dict)]
        return "\n".join(part for part in parts if part).strip()
    return str(item.get("text") or "").strip()


def probe_compact(settings_path: Path, port: int, slug: str | None = None) -> int:
    route = resolve_compact_probe_slug(settings_path, slug)
    if route.capabilities.compact_behavior == "unsupported":
        raise CompactProbeError(f"{route.slug} ({route.provider}) does not support /v1/responses/compact.")

    health_url = f"http://127.0.0.1:{port}/health"
    try:
        with urlopen(health_url, timeout=5) as resp:
            if resp.status != 200:
                raise CompactProbeError(f"Shim health check failed: HTTP {resp.status}")
    except (HTTPError, URLError, TimeoutError) as exc:
        raise CompactProbeError(f"Shim is not reachable at {health_url}: {exc}") from exc

    body = {
        "model": route.slug,
        "input": [
            {"role": "user", "content": "Summarize this thread for the next turn."},
            {"type": "function_call_output", "call_id": "call_probe", "output": "probe fixture"},
        ],
        "stream": False,
    }
    url = f"http://127.0.0.1:{port}/v1/responses/compact"
    request = Request(
        url,
        data=json.dumps(body).encode("utf-8"),
        headers={"Content-Type": "application/json", "Accept": "application/json"},
        method="POST",
    )
    try:
        with urlopen(request, timeout=120) as resp:
            payload = json.loads(resp.read().decode("utf-8"))
    except HTTPError as exc:
        detail = exc.read().decode("utf-8", errors="replace")
        raise CompactProbeError(f"Compact probe failed: HTTP {exc.code}: {detail[:500]}") from exc
    except URLError as exc:
        raise CompactProbeError(f"Compact probe request failed: {exc}") from exc

    item_type, summary = validate_compact_response(payload)
    print(f"Compact probe passed for {route.slug} ({route.provider}).")
    print(f"  item_type: {item_type}")
    print(f"  summary: {summary[:160]}{'…' if len(summary) > 160 else ''}")
    return 0


def resolve_history_probe_slug(settings_path: Path, slug: str | None) -> ShimModel:
    return resolve_compact_probe_slug(settings_path, slug)


def validate_history_response(first: dict[str, Any], second: dict[str, Any]) -> None:
    first_id = str(first.get("id") or "")
    if not first_id:
        raise CompactProbeError("First response missing id for previous_response_id probe.")
    if second.get("status") != "completed":
        raise CompactProbeError(f"Follow-up response status={second.get('status')!r}")
    output = second.get("output")
    if not isinstance(output, list) or not output:
        raise CompactProbeError("Follow-up response has no output items.")


def probe_history(settings_path: Path, port: int, slug: str | None = None) -> int:
    route = resolve_history_probe_slug(settings_path, slug)
    health_url = f"http://127.0.0.1:{port}/health"
    try:
        with urlopen(health_url, timeout=5) as resp:
            if resp.status != 200:
                raise CompactProbeError(f"Shim health check failed: HTTP {resp.status}")
    except (HTTPError, URLError, TimeoutError) as exc:
        raise CompactProbeError(f"Shim is not reachable at {health_url}: {exc}") from exc

    first_body = {
        "model": route.slug,
        "input": [
            {"type": "local_shell_call", "call_id": "call_shell", "action": {"command": "echo probe"}},
            {"type": "function_call_output", "call_id": "call_shell", "output": "probe"},
            {"role": "user", "content": [{"type": "input_text", "text": "continue"}]},
        ],
        "stream": False,
    }
    first = _post_json(f"http://127.0.0.1:{port}/v1/responses", first_body)
    validate_history_response({}, first)
    second_body = {
        "model": route.slug,
        "previous_response_id": first.get("id"),
        "input": [{"role": "user", "content": [{"type": "input_text", "text": "ack"}]}],
        "stream": False,
    }
    session_headers = {"session_id": "probe-history"}
    second = _post_json(f"http://127.0.0.1:{port}/v1/responses", second_body, headers=session_headers)
    validate_history_response(first, second)
    compact_body = {
        "model": route.slug,
        "previous_response_id": first.get("id"),
        "input": [{"type": "compaction_trigger"}],
        "stream": False,
    }
    compact = _post_json(
        f"http://127.0.0.1:{port}/v1/responses/compact",
        compact_body,
        headers=session_headers,
    )
    item_type, summary = validate_compact_response(compact)
    output = compact.get("output") or []
    if output and isinstance(output[0], dict) and output[0].get("type") == "compaction_trigger":
        print("  compact: compaction_trigger + context_compaction")
    print(f"History probe passed for {route.slug} ({route.provider}).")
    print(f"  previous_response_id: {first.get('id')}")
    print(f"  follow_up_items: {len(second.get('output') or [])}")
    print(f"  compact_item_type: {item_type}")
    print(f"  compact_summary: {summary[:120]}{'…' if len(summary) > 120 else ''}")
    return 0


def probe_streaming_history(settings_path: Path, port: int, slug: str | None = None) -> int:
    """BYOK streaming turn stored, then follow-up via previous_response_id."""
    route = resolve_history_probe_slug(settings_path, slug)
    health_url = f"http://127.0.0.1:{port}/health"
    try:
        with urlopen(health_url, timeout=5) as resp:
            if resp.status != 200:
                raise CompactProbeError(f"Shim health check failed: HTTP {resp.status}")
    except (HTTPError, URLError, TimeoutError) as exc:
        raise CompactProbeError(f"Shim is not reachable at {health_url}: {exc}") from exc

    first_body = {
        "model": route.slug,
        "input": [{"role": "user", "content": [{"type": "input_text", "text": "stream probe"}]}],
        "stream": True,
    }
    first = _post_json_streaming(f"http://127.0.0.1:{port}/v1/responses", first_body, headers={"session_id": "probe-stream"})
    validate_history_response({}, first)
    second_body = {
        "model": route.slug,
        "previous_response_id": first.get("id"),
        "input": [{"role": "user", "content": [{"type": "input_text", "text": "ack"}]}],
        "stream": False,
    }
    second = _post_json(
        f"http://127.0.0.1:{port}/v1/responses",
        second_body,
        headers={"session_id": "probe-stream"},
    )
    validate_history_response(first, second)
    print(f"Streaming history probe passed for {route.slug} ({route.provider}).")
    print(f"  previous_response_id: {first.get('id')}")
    return 0


def _post_json_streaming(url: str, body: dict[str, Any], headers: dict[str, str] | None = None) -> dict[str, Any]:
    merged = {"Content-Type": "application/json", "Accept": "text/event-stream"}
    if headers:
        merged.update(headers)
    request = Request(url, data=json.dumps(body).encode("utf-8"), headers=merged, method="POST")
    try:
        with urlopen(request, timeout=120) as resp:
            raw = resp.read().decode("utf-8", errors="replace")
    except HTTPError as exc:
        detail = exc.read().decode("utf-8", errors="replace")
        raise CompactProbeError(f"Streaming probe failed: HTTP {exc.code}: {detail[:500]}") from exc
    except URLError as exc:
        raise CompactProbeError(f"Streaming probe request failed: {exc}") from exc
    completed: dict[str, Any] | None = None
    for block in raw.split("\n\n"):
        for line in block.split("\n"):
            text = line.strip()
            if not text.startswith("data:"):
                continue
            payload_text = text[5:].strip()
            if payload_text == "[DONE]":
                break
            try:
                event = json.loads(payload_text)
            except json.JSONDecodeError:
                continue
            if event.get("type") == "response.completed":
                completed = event.get("response")
    if not isinstance(completed, dict):
        raise CompactProbeError("Streaming probe did not receive response.completed event.")
    return completed


def _post_json(url: str, body: dict[str, Any], headers: dict[str, str] | None = None) -> dict[str, Any]:
    merged = {"Content-Type": "application/json", "Accept": "application/json"}
    if headers:
        merged.update(headers)
    request = Request(url, data=json.dumps(body).encode("utf-8"), headers=merged, method="POST")
    try:
        with urlopen(request, timeout=120) as resp:
            payload = json.loads(resp.read().decode("utf-8"))
    except HTTPError as exc:
        detail = exc.read().decode("utf-8", errors="replace")
        raise CompactProbeError(f"History probe failed: HTTP {exc.code}: {detail[:500]}") from exc
    except URLError as exc:
        raise CompactProbeError(f"History probe request failed: {exc}") from exc
    if isinstance(payload, dict) and payload.get("error"):
        raise CompactProbeError(f"History probe error: {payload['error']}")
    if not isinstance(payload, dict):
        raise CompactProbeError(f"History probe returned unexpected payload type: {type(payload)!r}")
    return payload


def _fixture_dir() -> Path:
    return Path(__file__).resolve().parents[1] / "tests" / "fixtures" / "desktop"


def probe_fidelity() -> int:
    """Offline translation fidelity checks (no daemon required)."""
    from .translate import responses_to_chat, validate_responses_input

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
    print("Fidelity probe passed (hosted tools, compaction, reasoning, MCP, passthrough compact shape).")
    return 0


def _shim_reachable(port: int) -> bool:
    health_url = f"http://127.0.0.1:{port}/health"
    try:
        with urlopen(health_url, timeout=5) as resp:
            return resp.status == 200
    except (HTTPError, URLError, TimeoutError):
        return False


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
    if not _shim_reachable(port):
        raise CompactProbeError(f"Shim is not reachable at http://127.0.0.1:{port}/health")
    body = {
        "model": CHATGPT_MODEL_SLUG,
        "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: OK"}]}],
        "stream": False,
        "max_output_tokens": 32,
        "metadata": {"trace_id": "codex-shim-passthrough-probe"},
    }
    payload = _post_json(f"http://127.0.0.1:{port}/v1/responses", body)
    output = payload.get("output")
    if not isinstance(output, list) or not output:
        raise CompactProbeError("Passthrough probe returned no output items.")
    print("Passthrough probe passed (gpt-5.5 via shim daemon).")
    print(f"  response_id: {payload.get('id')}")
    print(f"  output_items: {len(output)}")
    return 0


def probe_passthrough_compact(port: int, *, live: bool = False) -> int:
    if not _passthrough_live_enabled(live):
        print("Skipping passthrough-compact probe (pass --live or set CODEX_SHIM_PROBE_PASSTHROUGH=1).")
        return 0
    if not chatgpt_passthrough_available():
        print("Skipping passthrough-compact probe: ~/.codex/auth.json missing tokens.access_token.")
        return 0
    if not _shim_reachable(port):
        raise CompactProbeError(f"Shim is not reachable at http://127.0.0.1:{port}/health")
    body = {
        "model": CHATGPT_MODEL_SLUG,
        "input": [{"role": "user", "content": [{"type": "input_text", "text": "Summarize briefly."}]}],
        "stream": False,
    }
    payload = _post_json(f"http://127.0.0.1:{port}/v1/responses/compact", body)
    item_type, summary = validate_compact_response(payload)
    print("Passthrough compact probe passed.")
    print(f"  item_type: {item_type}")
    print(f"  summary: {summary[:160]}{'…' if len(summary) > 160 else ''}")
    return 0


def probe_all(settings_path: Path, port: int, slug: str | None = None, *, live: bool = False) -> int:
    exit_code = probe_fidelity()
    if exit_code != 0:
        return exit_code
    if not _shim_reachable(port):
        print("Shim daemon not reachable; skipping live probes.")
        print("  Start with: codex-shim serve")
        return 0
    for label, runner in (
        ("history", lambda: probe_history(settings_path, port, slug)),
        ("streaming-history", lambda: probe_streaming_history(settings_path, port, slug)),
        ("compact", lambda: probe_compact(settings_path, port, slug)),
    ):
        try:
            code = runner()
        except CompactProbeError as exc:
            print(f"{label} probe failed: {exc}", file=sys.stderr)
            return 1
        exit_code = max(exit_code, code)
    try:
        exit_code = max(exit_code, probe_passthrough(port, live=live))
        exit_code = max(exit_code, probe_passthrough_compact(port, live=live))
    except CompactProbeError as exc:
        print(f"passthrough probe failed: {exc}", file=sys.stderr)
        return 1
    print("Probe all finished.")
    return exit_code
