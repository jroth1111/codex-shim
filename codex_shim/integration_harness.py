from __future__ import annotations

import asyncio
import json
import os
from dataclasses import dataclass
from pathlib import Path
from typing import Any
from urllib.error import HTTPError, URLError
from urllib.request import Request, urlopen

from .settings import CHATGPT_MODEL_SLUG, DEFAULT_SETTINGS, ModelSettings, ShimModel, chatgpt_passthrough_available


class IntegrationHarnessError(RuntimeError):
    pass


# Backwards-compatible name used by probe.py and tests.
CompactProbeError = IntegrationHarnessError


TIER_A_PROBE_INSTRUCTIONS = "You are Codex, a coding agent powered by GPT-5.5."
PROBE_OUTPUT_TEXT_KEY = "__probe_output_text"

LIVE_BYOK_FAMILIES = ("openai_chat", "anthropic", "cursor")
LIVE_SLUG_ENV = {
    "openai_chat": "CODEX_SHIM_LIVE_SLUG_OPENAI",
    "anthropic": "CODEX_SHIM_LIVE_SLUG_ANTHROPIC",
    "cursor": "CODEX_SHIM_LIVE_SLUG_CURSOR",
}

DESKTOP_FIXTURE_DIR = Path(__file__).resolve().parents[1] / "tests" / "fixtures" / "desktop"
DESKTOP_INPUT_FIXTURES = (
    "tool_heavy_turn.json",
    "compaction_turn.json",
    "reasoning_turn.json",
    "mcp_tool_turn.json",
    "web_search_turn.json",
    "image_gen_turn.json",
    "tool_search_turn.json",
)


def default_port() -> int:
    raw = os.environ.get("CODEX_SHIM_PORT", "").strip()
    if raw.isdigit():
        return int(raw)
    from .settings import DEFAULT_PORT

    return DEFAULT_PORT


def shim_base_url(port: int | None = None) -> str:
    return f"http://127.0.0.1:{port or default_port()}"


def shim_reachable(port: int | None = None) -> bool:
    try:
        health = fetch_shim_health(port)
        return bool(health.get("ok"))
    except (HTTPError, URLError, TimeoutError, IntegrationHarnessError):
        return False


def fetch_shim_health(port: int | None = None) -> dict[str, Any]:
    url = f"{shim_base_url(port)}/health"
    try:
        with urlopen(url, timeout=5) as resp:
            payload = json.loads(resp.read().decode("utf-8"))
    except HTTPError as exc:
        detail = exc.read().decode("utf-8", errors="replace")
        raise IntegrationHarnessError(f"Shim health check failed: HTTP {exc.code}: {detail[:500]}") from exc
    except URLError as exc:
        raise IntegrationHarnessError(f"Shim is not reachable at {url}: {exc}") from exc
    if not isinstance(payload, dict):
        raise IntegrationHarnessError(f"Shim health returned unexpected payload: {type(payload)!r}")
    return payload


def require_shim(port: int | None = None, *, require_chatgpt_passthrough: bool = False) -> dict[str, Any]:
    health = fetch_shim_health(port)
    if not health.get("ok"):
        raise IntegrationHarnessError(f"Shim health not ok: {health!r}")
    if require_chatgpt_passthrough and not health.get("chatgpt_passthrough"):
        raise IntegrationHarnessError("Shim health reports chatgpt_passthrough=false")
    return health


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


def _tier_a_probe_input(user_text: str) -> list[dict[str, Any]]:
    return [{"role": "user", "content": [{"type": "input_text", "text": user_text}]}]


def tier_a_passthrough_body(*, user_text: str) -> dict[str, Any]:
    return {
        "model": CHATGPT_MODEL_SLUG,
        "input": _tier_a_probe_input(user_text),
    }


def tier_a_compact_body(*, user_text: str) -> dict[str, Any]:
    return {
        "model": CHATGPT_MODEL_SLUG,
        "input": _tier_a_probe_input(user_text),
    }


def tier_a_tool_heavy_body() -> dict[str, Any]:
    fixture = json.loads((DESKTOP_FIXTURE_DIR / "tool_heavy_turn.json").read_text())
    input_items = list(fixture.get("input") or [])
    input_items.append(
        {"role": "user", "content": [{"type": "input_text", "text": "continue"}]},
    )
    return {
        "model": CHATGPT_MODEL_SLUG,
        "input": input_items,
    }


def validate_compact_response(payload: dict[str, Any], *, expect_trigger: bool = False) -> tuple[str, str]:
    if payload.get("status") != "completed":
        raise IntegrationHarnessError(f"Expected status=completed, got {payload.get('status')!r}")
    output = payload.get("output")
    if not isinstance(output, list) or not output:
        raise IntegrationHarnessError(f"Expected compaction output items, got {type(output)!r}")
    if expect_trigger:
        if not isinstance(output[0], dict) or output[0].get("type") != "compaction_trigger":
            raise IntegrationHarnessError("Expected compaction_trigger as first output item.")
    compaction_items = [
        item for item in output if isinstance(item, dict) and item.get("type") in {"context_compaction", "compaction"}
    ]
    if len(compaction_items) != 1:
        raise IntegrationHarnessError(
            f"Expected exactly one context_compaction/compaction item, got {len(compaction_items)}"
        )
    item = compaction_items[0]
    summary_text = _summary_text(item)
    if not summary_text.strip():
        raise IntegrationHarnessError("Compaction summary text is empty.")
    return str(item.get("type") or ""), summary_text


def validate_passthrough_streaming_response(
    completed: dict[str, Any], *, expect_text: str | None = None
) -> str:
    if completed.get("status") != "completed":
        raise IntegrationHarnessError(f"Expected status=completed, got {completed.get('status')!r}")
    response_id = str(completed.get("id") or "")
    if not response_id:
        raise IntegrationHarnessError("Passthrough probe missing response id.")
    if expect_text is not None:
        streamed = str(completed.get(PROBE_OUTPUT_TEXT_KEY) or "").strip()
        if streamed != expect_text:
            raise IntegrationHarnessError(
                f"Passthrough probe expected output text {expect_text!r}, got {streamed!r}"
            )
    return response_id


def validate_passthrough_compact_response(payload: dict[str, Any]) -> tuple[str, str]:
    output = payload.get("output")
    if not isinstance(output, list) or not output:
        raise IntegrationHarnessError(f"Expected compaction output items, got {type(output)!r}")
    compaction_items = [
        item
        for item in output
        if isinstance(item, dict)
        and item.get("type") in {"context_compaction", "compaction", "compaction_summary"}
    ]
    if len(compaction_items) != 1:
        raise IntegrationHarnessError(
            "Expected exactly one context_compaction/compaction/compaction_summary item, "
            f"got {len(compaction_items)}"
        )
    item = compaction_items[0]
    item_type = str(item.get("type") or "")
    if item_type == "compaction_summary":
        encrypted = item.get("encrypted_content")
        if not isinstance(encrypted, str) or not encrypted.strip():
            raise IntegrationHarnessError("compaction_summary missing encrypted_content.")
        return item_type, f"encrypted ({len(encrypted)} bytes)"
    summary_text = _summary_text(item)
    if not summary_text.strip():
        raise IntegrationHarnessError("Compaction summary text is empty.")
    return item_type, summary_text


def validate_history_response(first: dict[str, Any], second: dict[str, Any]) -> None:
    first_id = str(first.get("id") or "")
    if not first_id:
        response_id = str(second.get("id") or "")
        if not response_id:
            raise IntegrationHarnessError("First response missing id for previous_response_id probe.")
        if second.get("status") != "completed":
            raise IntegrationHarnessError(f"First response status={second.get('status')!r}")
        output = second.get("output")
        if not isinstance(output, list) or not output:
            raise IntegrationHarnessError("First response has no output items.")
        return
    if second.get("status") != "completed":
        raise IntegrationHarnessError(f"Follow-up response status={second.get('status')!r}")
    output = second.get("output")
    if not isinstance(output, list) or not output:
        raise IntegrationHarnessError("Follow-up response has no output items.")


def validate_completed_response(payload: dict[str, Any]) -> None:
    if payload.get("status") != "completed":
        raise IntegrationHarnessError(f"Expected status=completed, got {payload.get('status')!r}")
    output = payload.get("output")
    if not isinstance(output, list) or not output:
        raise IntegrationHarnessError(f"Expected non-empty output, got {type(output)!r}")


def validate_accepted_response(payload: dict[str, Any]) -> None:
    if payload.get("status") != "completed":
        raise IntegrationHarnessError(f"Expected status=completed, got {payload.get('status')!r}")


def _default_http_timeout() -> int:
    raw = os.environ.get("CODEX_SHIM_HTTP_TIMEOUT", "").strip()
    if raw.isdigit():
        return max(30, int(raw))
    return 600


def post_json(
    url: str,
    body: dict[str, Any],
    headers: dict[str, str] | None = None,
    *,
    label: str = "Request",
    timeout: int | None = None,
) -> dict[str, Any]:
    if timeout is None:
        timeout = _default_http_timeout()
    merged = {"Content-Type": "application/json", "Accept": "application/json"}
    if headers:
        merged.update(headers)
    request = Request(url, data=json.dumps(body).encode("utf-8"), headers=merged, method="POST")
    try:
        with urlopen(request, timeout=timeout) as resp:
            payload = json.loads(resp.read().decode("utf-8"))
    except HTTPError as exc:
        detail = exc.read().decode("utf-8", errors="replace")
        raise IntegrationHarnessError(f"{label} failed: HTTP {exc.code}: {detail[:500]}") from exc
    except URLError as exc:
        raise IntegrationHarnessError(f"{label} request failed: {exc}") from exc
    if isinstance(payload, dict) and payload.get("error"):
        raise IntegrationHarnessError(f"{label} error: {payload['error']}")
    if not isinstance(payload, dict):
        raise IntegrationHarnessError(f"{label} returned unexpected payload type: {type(payload)!r}")
    return payload


def _parse_sse_response(raw: str, *, label: str, collect_output_text: bool) -> dict[str, Any]:
    completed: dict[str, Any] | None = None
    output_text = ""
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
            if collect_output_text and event.get("type") == "response.output_text.delta":
                delta = event.get("delta")
                if isinstance(delta, str):
                    output_text += delta
            if event.get("type") == "response.completed":
                completed = event.get("response")
    if not isinstance(completed, dict):
        raise IntegrationHarnessError(f"{label} did not receive response.completed event.")
    if collect_output_text:
        completed = {**completed, PROBE_OUTPUT_TEXT_KEY: output_text}
    return completed


async def _post_json_streaming_async(
    url: str,
    body: dict[str, Any],
    headers: dict[str, str] | None = None,
    *,
    label: str = "Streaming request",
    collect_output_text: bool = False,
    timeout: int = 120,
) -> dict[str, Any]:
    import aiohttp

    merged = {"Content-Type": "application/json", "Accept": "text/event-stream"}
    if headers:
        merged.update(headers)
    chunks: list[str] = []
    try:
        async with aiohttp.ClientSession() as session:
            async with session.post(
                url,
                json=body,
                headers=merged,
                timeout=aiohttp.ClientTimeout(total=timeout),
            ) as resp:
                if resp.status >= 400:
                    detail = await resp.text()
                    raise IntegrationHarnessError(
                        f"{label} failed: HTTP {resp.status}: {detail[:500]}"
                    )
                async for part in resp.content.iter_any():
                    chunks.append(part.decode("utf-8", errors="replace"))
    except aiohttp.ClientPayloadError as exc:
        raw = "".join(chunks)
        if raw.strip():
            try:
                return _parse_sse_response(raw, label=label, collect_output_text=collect_output_text)
            except IntegrationHarnessError:
                pass
        raise IntegrationHarnessError(f"{label} request failed: {exc}") from exc
    except aiohttp.ClientError as exc:
        raise IntegrationHarnessError(f"{label} request failed: {exc}") from exc
    return _parse_sse_response("".join(chunks), label=label, collect_output_text=collect_output_text)


def post_json_streaming(
    url: str,
    body: dict[str, Any],
    headers: dict[str, str] | None = None,
    *,
    label: str = "Streaming request",
    collect_output_text: bool = False,
    timeout: int | None = None,
) -> dict[str, Any]:
    if timeout is None:
        timeout = _default_http_timeout()
    return asyncio.run(
        _post_json_streaming_async(
            url,
            body,
            headers,
            label=label,
            collect_output_text=collect_output_text,
            timeout=timeout,
        )
    )


def responses_url(port: int | None = None) -> str:
    return f"{shim_base_url(port)}/v1/responses"


def compact_url(port: int | None = None) -> str:
    return f"{shim_base_url(port)}/v1/responses/compact"


def ws_responses_url(port: int | None = None) -> str:
    host_port = port or default_port()
    return f"ws://127.0.0.1:{host_port}/v1/responses"


def resolve_byok_slug(settings_path: Path, slug: str | None) -> ShimModel:
    models = ModelSettings(settings_path).load()
    desktop: list[ShimModel] = []
    for model in models:
        if model.visible and not model.is_chatgpt:
            desktop.append(model)
    if not desktop:
        raise IntegrationHarnessError("No visible BYOK models configured.")
    if slug:
        for model in desktop:
            if model.slug == slug:
                return model
        raise IntegrationHarnessError(f"Unknown or hidden BYOK slug: {slug}")
    return desktop[0]


def _family_for_model(model: ShimModel) -> str | None:
    if model.is_openai_chat:
        return "openai_chat"
    if model.is_anthropic:
        return "anthropic"
    if model.is_cursor_acp or model.is_cursor_cli:
        return "cursor"
    return None


def resolve_live_byok_matrix(settings_path: Path | None = None) -> dict[str, ShimModel]:
    path = Path(settings_path or DEFAULT_SETTINGS).expanduser()
    models = ModelSettings(path).load()
    visible = [model for model in models if model.visible and not model.is_chatgpt]
    matrix: dict[str, ShimModel] = {}

    for family in LIVE_BYOK_FAMILIES:
        env_slug = os.environ.get(LIVE_SLUG_ENV[family], "").strip()
        if env_slug:
            for model in visible:
                if model.slug == env_slug:
                    matrix[family] = model
                    break
            if family not in matrix:
                raise IntegrationHarnessError(
                    f"{LIVE_SLUG_ENV[family]}={env_slug!r} is not a visible BYOK slug"
                )
            continue
        for model in visible:
            if _family_for_model(model) == family and family not in matrix:
                matrix[family] = model
                break
    return matrix


def load_desktop_fixture(name: str) -> dict[str, Any]:
    path = DESKTOP_FIXTURE_DIR / name
    if not path.is_file():
        raise IntegrationHarnessError(f"Unknown desktop fixture: {name}")
    return json.loads(path.read_text())


def post_fixture_turn(
    port: int,
    slug: str,
    fixture_name: str,
    *,
    stream: bool = False,
    session_id: str = "live-fixture",
    extra_input: list[dict[str, Any]] | None = None,
    timeout: int = 120,
) -> dict[str, Any]:
    fixture = load_desktop_fixture(fixture_name)
    input_items = list(fixture.get("input") or [])
    if extra_input:
        input_items.extend(extra_input)
    body: dict[str, Any] = {
        "model": slug,
        "input": input_items,
        "stream": stream,
    }
    headers = {"session_id": session_id}
    if stream:
        return post_json_streaming(
            responses_url(port),
            body,
            headers=headers,
            label=f"Fixture {fixture_name}",
            timeout=timeout,
        )
    return post_json(
        responses_url(port),
        body,
        headers=headers,
        label=f"Fixture {fixture_name}",
        timeout=timeout,
    )


def run_tier_a_passthrough_streaming(port: int) -> tuple[str, str]:
    require_shim(port, require_chatgpt_passthrough=True)
    if not chatgpt_passthrough_available():
        raise IntegrationHarnessError("~/.codex/auth.json missing tokens.access_token")
    body = tier_a_passthrough_body(user_text="Reply with exactly: OK")
    completed = post_json_streaming(
        responses_url(port),
        body,
        headers={"session_id": "codex-shim-passthrough-probe"},
        label="Passthrough probe",
        collect_output_text=True,
    )
    response_id = validate_passthrough_streaming_response(completed, expect_text="OK")
    return response_id, str(completed.get(PROBE_OUTPUT_TEXT_KEY) or "")


def run_tier_a_passthrough_compact(port: int) -> tuple[str, str, str]:
    require_shim(port, require_chatgpt_passthrough=True)
    if not chatgpt_passthrough_available():
        raise IntegrationHarnessError("~/.codex/auth.json missing tokens.access_token")
    body = tier_a_compact_body(
        user_text="Thread: user asked for a one-word reply. Summarize for the next turn."
    )
    payload = post_json(
        compact_url(port),
        body,
        headers={"session_id": "codex-shim-passthrough-compact-probe"},
        label="Passthrough compact probe",
    )
    item_type, summary = validate_passthrough_compact_response(payload)
    return str(payload.get("id") or ""), item_type, summary


def run_tier_a_previous_response_id_stripped(port: int) -> str:
    """Client may send previous_response_id; shim strips it before ChatGPT upstream."""
    require_shim(port, require_chatgpt_passthrough=True)
    if not chatgpt_passthrough_available():
        raise IntegrationHarnessError("~/.codex/auth.json missing tokens.access_token")
    headers = {"session_id": "codex-shim-tier-a-prev-id"}
    first_id, _ = run_tier_a_passthrough_streaming(port)
    second_body = {
        **tier_a_passthrough_body(user_text="Reply with exactly: OK"),
        "previous_response_id": first_id,
    }
    completed = post_json_streaming(
        responses_url(port),
        second_body,
        headers=headers,
        label="Tier A previous_response_id stripped",
        collect_output_text=True,
    )
    validate_passthrough_streaming_response(completed, expect_text="OK")
    return first_id


def run_byok_simple_turn(port: int, route: ShimModel, *, timeout: int | None = None) -> dict[str, Any]:
    timeout = _byok_timeout(route, timeout)
    require_shim(port)
    body = {
        "model": route.slug,
        "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: OK"}]}],
        "stream": False,
        "max_output_tokens": 32,
    }
    payload = post_json(
        responses_url(port),
        body,
        headers={"session_id": f"live-byok-{route.slug}"},
        label=f"BYOK simple turn ({route.slug})",
        timeout=timeout,
    )
    validate_completed_response(payload)
    return payload


def run_byok_history(port: int, route: ShimModel, *, timeout: int | None = None) -> dict[str, str]:
    timeout = _byok_timeout(route, timeout)
    require_shim(port)
    session_headers = {"session_id": f"live-history-{route.slug}"}
    first_body = {
        "model": route.slug,
        "input": [
            {"type": "local_shell_call", "call_id": "call_shell", "action": {"command": "echo probe"}},
            {"type": "function_call_output", "call_id": "call_shell", "output": "probe"},
            {"role": "user", "content": [{"type": "input_text", "text": "continue"}]},
        ],
        "stream": False,
    }
    first = post_json(
        responses_url(port),
        first_body,
        headers=session_headers,
        label="BYOK history first",
        timeout=timeout,
    )
    validate_history_response({}, first)
    second = post_json(
        responses_url(port),
        {
            "model": route.slug,
            "previous_response_id": first.get("id"),
            "input": [{"role": "user", "content": [{"type": "input_text", "text": "ack"}]}],
            "stream": False,
        },
        headers=session_headers,
        label="BYOK history second",
        timeout=timeout,
    )
    validate_history_response(first, second)
    compact = post_json(
        compact_url(port),
        {
            "model": route.slug,
            "previous_response_id": first.get("id"),
            "input": [{"type": "compaction_trigger"}],
            "stream": False,
        },
        headers=session_headers,
        label="BYOK history compact",
        timeout=timeout,
    )
    item_type, summary = validate_compact_response(compact, expect_trigger=True)
    return {
        "previous_response_id": str(first.get("id") or ""),
        "compact_item_type": item_type,
        "compact_summary": summary,
    }


def _byok_timeout(route: ShimModel, timeout: int | None) -> int:
    if timeout is not None:
        return timeout
    return 600 if route.is_cursor_cli else 120


def run_byok_streaming_history(port: int, route: ShimModel, *, timeout: int | None = None) -> dict[str, str]:
    timeout = _byok_timeout(route, timeout)
    require_shim(port)
    session_headers = {"session_id": f"live-stream-history-{route.slug}"}
    first = post_json_streaming(
        responses_url(port),
        {
            "model": route.slug,
            "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: OK"}]}],
            "stream": True,
            "max_output_tokens": 32,
        },
        headers=session_headers,
        label="BYOK streaming history first",
        timeout=timeout,
    )
    validate_history_response({}, first)
    second = post_json(
        responses_url(port),
        {
            "model": route.slug,
            "previous_response_id": first.get("id"),
            "input": [{"role": "user", "content": [{"type": "input_text", "text": "ack"}]}],
            "stream": False,
        },
        headers=session_headers,
        label="BYOK streaming history second",
        timeout=timeout,
    )
    validate_history_response(first, second)
    compact = post_json(
        compact_url(port),
        {
            "model": route.slug,
            "previous_response_id": first.get("id"),
            "input": [{"type": "compaction_trigger"}],
            "stream": False,
        },
        headers=session_headers,
        label="BYOK streaming history compact",
        timeout=timeout,
    )
    item_type, summary = validate_compact_response(compact, expect_trigger=True)
    return {
        "previous_response_id": str(first.get("id") or ""),
        "compact_item_type": item_type,
        "compact_summary": summary,
    }


def run_byok_compact(port: int, route: ShimModel, *, timeout: int | None = None) -> tuple[str, str]:
    timeout = _byok_timeout(route, timeout)
    require_shim(port)
    if route.capabilities.compact_behavior == "unsupported":
        raise IntegrationHarnessError(f"{route.slug} does not support /v1/responses/compact")
    payload = post_json(
        compact_url(port),
        {
            "model": route.slug,
            "input": [
                {"type": "compaction_trigger"},
                {"role": "user", "content": "Summarize this thread for the next turn."},
                {"type": "function_call_output", "call_id": "call_probe", "output": "probe fixture"},
            ],
            "stream": False,
        },
        headers={"session_id": f"live-compact-{route.slug}"},
        label="BYOK compact",
        timeout=timeout,
    )
    return validate_compact_response(payload, expect_trigger=True)


async def run_ws_streaming_async(
    port: int, route: ShimModel, *, require_deltas: bool = True, timeout: int = 120
) -> None:
    import aiohttp

    require_shim(port)
    url = ws_responses_url(port)
    if route.is_chatgpt:
        payload = {
            "model": route.slug,
            "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: OK"}]}],
            "stream": True,
        }
    else:
        payload = {
            "model": route.slug,
            "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: OK"}]}],
            "stream": True,
        }
    async with aiohttp.ClientSession() as session:
        async with session.ws_connect(url, timeout=aiohttp.ClientWSTimeout(ws_receive=timeout)) as ws:
            await ws.send_json(payload)
            completed = None
            saw_delta = False
            async for msg in ws:
                if msg.type != aiohttp.WSMsgType.TEXT:
                    continue
                frame = json.loads(msg.data)
                frame_type = frame.get("type")
                if frame_type and "delta" in str(frame_type):
                    saw_delta = True
                if frame_type == "response.completed":
                    completed = frame.get("response")
                    break
            if require_deltas and not saw_delta:
                raise IntegrationHarnessError("WS streaming probe did not receive any delta frames.")
            if not isinstance(completed, dict):
                raise IntegrationHarnessError("WS streaming probe did not receive response.completed.")


def run_ws_streaming(
    port: int, route: ShimModel, *, require_deltas: bool = True, timeout: int | None = None
) -> None:
    timeout = _byok_timeout(route, timeout)
    asyncio.run(run_ws_streaming_async(port, route, require_deltas=require_deltas, timeout=timeout))


@dataclass(frozen=True)
class LiveMatrixResult:
    label: str
    ok: bool
    detail: str


def run_live_matrix(settings_path: Path, port: int) -> list[LiveMatrixResult]:
    results: list[LiveMatrixResult] = []

    if chatgpt_passthrough_available() and shim_reachable(port):
        for label, runner in (
            ("tier_a_streaming", lambda: run_tier_a_passthrough_streaming(port)),
            ("tier_a_compact", lambda: run_tier_a_passthrough_compact(port)),
            (
                "tier_a_tool_heavy",
                lambda: _run_tier_a_tool_heavy_or_skip(port),
            ),
            ("tier_a_previous_response_id", lambda: run_tier_a_previous_response_id_stripped(port)),
            (
                "tier_a_ws",
                lambda: run_ws_streaming(port, tier_a_route(), require_deltas=False),
            ),
        ):
            try:
                runner()
                results.append(LiveMatrixResult(label, True, "passed"))
            except IntegrationHarnessError as exc:
                detail = str(exc)
                skipped = detail.startswith("skipped:")
                results.append(LiveMatrixResult(label, skipped, detail))
    else:
        skip_reason = "auth missing" if not chatgpt_passthrough_available() else "shim unreachable"
        for label in (
            "tier_a_streaming",
            "tier_a_compact",
            "tier_a_tool_heavy",
            "tier_a_previous_response_id",
            "tier_a_ws",
        ):
            results.append(LiveMatrixResult(label, False, f"skipped: {skip_reason}"))

    try:
        matrix = resolve_live_byok_matrix(settings_path)
    except IntegrationHarnessError as exc:
        for family in LIVE_BYOK_FAMILIES:
            results.append(LiveMatrixResult(f"byok_{family}", False, str(exc)))
        return results

    byok_runners = {
        "simple": run_byok_simple_turn,
        "history": run_byok_history,
        "streaming_history": run_byok_streaming_history,
        "compact": run_byok_compact,
        "ws": run_ws_streaming,
    }
    for family in LIVE_BYOK_FAMILIES:
        route = matrix.get(family)
        if route is None:
            results.append(LiveMatrixResult(f"byok_{family}", False, "no visible slug configured"))
            continue
        for probe_name, runner in byok_runners.items():
            label = f"byok_{family}_{probe_name}"
            try:
                runner(port, route)
                results.append(LiveMatrixResult(label, True, f"{route.slug} passed"))
            except IntegrationHarnessError as exc:
                detail = str(exc)
                skipped = detail.startswith("skipped:")
                results.append(LiveMatrixResult(label, skipped, f"{route.slug}: {detail}"))
    return results


def tier_a_route() -> ShimModel:
    from .settings import chatgpt_passthrough_model

    route = chatgpt_passthrough_model()
    if route is None:
        raise IntegrationHarnessError("ChatGPT passthrough model unavailable")
    return route


def _run_tier_a_tool_heavy_or_skip(port: int) -> None:
    validate_accepted_response(
        post_json_streaming(
            responses_url(port),
            tier_a_tool_heavy_body(),
            headers={"session_id": "live-tier-a-tool-heavy"},
            label="Tier A tool_heavy",
        )
    )


def _synthetic_chatgpt_route() -> ShimModel:
    return tier_a_route()
