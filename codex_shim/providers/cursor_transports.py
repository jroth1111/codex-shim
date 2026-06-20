"""Cursor transport entry points: ACP subprocess, CLI delegate, native gRPC agent."""
from __future__ import annotations

import asyncio
import os
import time
from contextlib import asynccontextmanager
from pathlib import Path
from typing import Any

from aiohttp import web

from ..observability import elapsed_ms, log_access
from ..routing import InferenceContext, resolve_model_route, resolve_workspace
from ..sessions import PreparedResponsesRequest
from ..settings import ShimModel
from ..wire import (
    ClientDisconnected,
    StreamSink,
    WsStreamResponse,
    open_stream_sink,
    safe_write,
    write_sse,
)
from .common import (
    ProviderRuntime,
    attach_response_metadata,
    await_cursor_inference,
    executed_tool_count_from_response_payload,
    responses_stream_state,
    shim_response_metadata,
    workspace_log_value,
)
from .cursor import (
    CursorAcpError,
    CursorAcpResult,
    CursorCliError,
    build_cursor_cli_turn_options,
    cursor_acp_chat_payload,
    cursor_acp_error_response,
    cursor_acp_response_payload,
    cursor_acp_stream_error,
    cursor_agent_error_response,
    cursor_agent_stream_error,
    cursor_prompt_for_body,
    run_cursor_acp,
    run_cursor_cli,
)
from .cursor_agent import CursorAgentTransportError


_CURSOR_SEMAPHORE: asyncio.Semaphore | None = None


def _cursor_concurrency_semaphore() -> asyncio.Semaphore:
    """Lazily-built shared semaphore bounding concurrent Cursor turns."""
    global _CURSOR_SEMAPHORE
    if _CURSOR_SEMAPHORE is None:
        raw = os.environ.get("CODEX_SHIM_CURSOR_MAX_CONCURRENT", "4").strip()
        try:
            limit = max(1, int(raw))
        except ValueError:
            limit = 4
        _CURSOR_SEMAPHORE = asyncio.Semaphore(limit)
    return _CURSOR_SEMAPHORE


@asynccontextmanager
async def cursor_concurrency():
    """Bound concurrent Cursor turns (subprocess + native) so a parallel or
    batch driver cannot fork-bomb the workspace. Desktop is mostly serial, so the
    default is generous; tune via ``CODEX_SHIM_CURSOR_MAX_CONCURRENT``. Acquired
    at the dispatcher entry (the true outermost boundary) so handler-internal
    delegation does not re-acquire (asyncio.Semaphore is not reentrant)."""
    async with _cursor_concurrency_semaphore():
        yield


def is_cursor_start_failure(exc: Exception) -> bool:
    """A start failure (command missing / immediate launch error) ran no
    subprocess and had no side effects, so it is safe to retry or fail over to
    another provider. Mid-turn failures (timeout, non-zero exit AFTER output)
    are NOT safe to replay. CursorCliError marks launch failures with the
    ``Failed to start Cursor Agent command`` prefix (see cursor/cli.py)."""
    return str(exc).lstrip().startswith("Failed to start Cursor Agent command")


def cursor_workspace(
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
) -> Path | None:
    return resolve_workspace(request, body, route)

def cursor_cli_turn_options(
    runtime: ProviderRuntime,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
    *,
    chained_from_previous: bool,
    workspace: Path | None,
):
    inference = getattr(request, "_codex_shim_inference", None)
    cli_mode = inference.cli_mode if inference is not None and inference.cli_mode in {"plan", "ask"} else None
    return build_cursor_cli_turn_options(
        route,
        body,
        request=request,
        chained_from_previous=chained_from_previous,
        workspace=workspace,
        inference_cli_mode=cli_mode,
        session_store=runtime.cursor_thread_sessions,
    )

def persist_cursor_thread_session(runtime: ProviderRuntime, turn_options, result) -> None:
    thread_id = getattr(turn_options, "thread_id", None)
    session_id = getattr(result, "session_id", None)
    if thread_id and session_id:
        runtime.cursor_thread_sessions.put(thread_id, session_id)

def prepare_cursor_agent_native(
    runtime: ProviderRuntime,
    body: dict[str, Any],
    *,
    inference: InferenceContext,
    route: ShimModel,
    chained_from_previous: bool,
    workspace: Path | None = None,
):
    turn_options = build_cursor_cli_turn_options(
        route,
        body,
        chained_from_previous=chained_from_previous,
        workspace=workspace,
        inference_cli_mode=inference.cli_mode if inference is not None and inference.cli_mode in {"plan", "ask"} else None,
    )
    prompt_text = cursor_prompt_for_body(
        body,
        route,
        chained_from_previous=chained_from_previous,
        workspace=workspace,
        upstream_parity=turn_options.upstream_parity,
        resume_chat_id=turn_options.resume_chat_id,
    )
    return runtime.cursor_agent_transport.prepare(
        body,
        inference=inference,
        chained_from_previous=chained_from_previous,
        model_row=route.raw if isinstance(route.raw, dict) else None,
        workspace=workspace,
        prompt_text=prompt_text,
    )

async def post_cursor_agent(
    runtime: ProviderRuntime,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
    as_responses: bool,
    prepared: PreparedResponsesRequest | None = None,
    stream_response: WsStreamResponse | None = None,
    *,
    inference: InferenceContext | None = None,
) -> StreamSink:
    if inference is None:
        inference = resolve_model_route(
            runtime.settings, body, request=request, store=runtime.operational_store
        ).inference
    chained = prepared.chained_from_previous if prepared is not None else False
    workspace = cursor_workspace(request, route, body)
    native_envelope: dict[str, Any] | None = None
    try:
        prepared_native = prepare_cursor_agent_native(runtime,
            body,
            inference=inference,
            route=route,
            chained_from_previous=chained,
            workspace=workspace,
        )
        native_envelope = prepared_native.envelope
        if runtime.cursor_agent_transport.mock_url:
            await runtime.cursor_agent_transport.validate_with_mock(prepared_native)
    except CursorAgentTransportError as exc:
        return web.json_response(
            {"error": {"type": "upstream_error", "message": str(exc)}},
            status=502,
        )
    if body.get("stream"):
        if runtime.cursor_agent_transport.live_enabled:
            return await stream_cursor_agent_native(runtime,
                request,
                route,
                body,
                as_responses=as_responses,
                prepared=prepared,
                inference=inference,
                native_envelope=native_envelope,
                stream_response=stream_response,
            )
        return await stream_cursor_cli(runtime,
            request,
            route,
            body,
            as_responses,
            prepared=prepared,
            started_at=time.monotonic(),
            stream_response=stream_response,
            native_envelope=native_envelope,
        )
    if runtime.cursor_agent_transport.live_enabled:
        return await post_cursor_agent_native(runtime,
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            inference=inference,
            native_envelope=native_envelope,
        )
    return await post_cursor_cli(runtime,
        request,
        route,
        body,
        as_responses=as_responses,
        prepared=prepared,
        stream_response=stream_response,
        native_envelope=native_envelope,
    )

async def post_cursor_agent_native(
    runtime: ProviderRuntime,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
    *,
    as_responses: bool,
    prepared: PreparedResponsesRequest | None,
    inference: InferenceContext,
    native_envelope: dict[str, Any] | None,
) -> StreamSink:
    started_at = time.monotonic()
    provider_started_at = time.monotonic()
    chained = prepared.chained_from_previous if prepared is not None else False
    workspace = cursor_workspace(request, route, body if prepared is None else prepared.body)
    try:
        prepared_native = prepare_cursor_agent_native(runtime,
            body,
            inference=inference,
            route=route,
            chained_from_previous=chained,
            workspace=workspace,
        )
        if runtime.cursor_agent_transport.mock_url:
            await runtime.cursor_agent_transport.validate_with_mock(prepared_native)
        if prepared_native.transport_mode == "http2":
            from .cursor_agent.live_run import collect_run_live_turn

            raw_result = await collect_run_live_turn(prepared_native)
        else:
            from .cursor_agent.live_http1 import collect_http1_live_turn

            raw_result = await collect_http1_live_turn(prepared_native)
        # The live collectors return CLI-shaped dicts; the payload builders
        # take attribute access, so wrap into the result dataclass.
        result = CursorAcpResult(
            text=str(raw_result.get("text") or ""),
            usage=raw_result.get("usage"),
            raw_result=raw_result,
        )
    except CursorAgentTransportError as exc:
        log_access(
            request,
            route,
            502,
            started_at,
            stream=False,
            error="cursor_agent_live_error",
            request_body=prepared.body if prepared is not None else body,
            provider_ms=elapsed_ms(provider_started_at),
        )
        return web.json_response(
            {"error": {"type": "upstream_error", "message": str(exc)}},
            status=502,
        )
    provider_ms = elapsed_ms(provider_started_at)
    if as_responses:
        response_payload = attach_response_metadata(
            cursor_acp_response_payload(result, route.slug),
            route,
            prepared,
            native_envelope=native_envelope,
        )
        if prepared is not None:
            runtime.store_history(prepared, response_payload, route=route)
        resp = web.json_response(response_payload)
        executed_tool_count = executed_tool_count_from_response_payload(response_payload)
        if executed_tool_count > 0:
            setattr(resp, "_codex_shim_executed_tool_count", executed_tool_count)
        log_access(
            request,
            route,
            200,
            started_at,
            payload=response_payload,
            stream=False,
            request_body=prepared.body if prepared is not None else body,
            provider_ms=provider_ms,
        )
        return resp
    chat_payload = cursor_acp_chat_payload(result, route.slug)
    log_access(
        request,
        route,
        200,
        started_at,
        payload=chat_payload,
        stream=False,
        request_body=body,
        provider_ms=provider_ms,
    )
    return web.json_response(chat_payload)

async def stream_cursor_agent_native(
    runtime: ProviderRuntime,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
    *,
    as_responses: bool,
    prepared: PreparedResponsesRequest | None,
    inference: InferenceContext,
    native_envelope: dict[str, Any] | None,
    stream_response: WsStreamResponse | None,
) -> StreamSink:
    from .cursor_agent.decode import write_cursor_agent_event

    started_at = time.monotonic()
    response = await open_stream_sink(request, stream_response)
    workspace = cursor_workspace(request, route, body)
    state = responses_stream_state(route, body.get("tools")) if as_responses else None
    if state is not None:
        state.metadata = shim_response_metadata(route, prepared, native_envelope=native_envelope, workspace=workspace)
        await state.start(response)
    try:
        chained = prepared.chained_from_previous if prepared is not None else False
        native = prepare_cursor_agent_native(runtime,
            body,
            inference=inference,
            route=route,
            chained_from_previous=chained,
            workspace=workspace,
        )
        async for event in runtime.cursor_agent_transport.stream_events(native):
            if str(event.get("type") or "") in {"stream_end", "turn_ended"}:
                break
            if state is not None:
                await write_cursor_agent_event(state, response, event)
            else:
                text = event.get("text") or event.get("content")
                if text:
                    await write_sse(
                        response,
                        {"choices": [{"delta": {"content": str(text)}, "finish_reason": None}]},
                    )
        if state is not None:
            final_response = await state.finish(response)
            if prepared is not None:
                runtime.store_history(prepared, final_response, route=route)
            log_access(
                request,
                route,
                200,
                started_at,
                payload=final_response,
                stream=True,
                request_body=prepared.body if prepared is not None else None,
                workspace=workspace_log_value(workspace),
            )
    except ClientDisconnected:
        pass
    except CursorAgentTransportError as exc:
        failure = "cursor_turn_timeout" if "Timed out waiting" in str(exc) else "cursor_agent_live_error"
        await write_sse(response, cursor_agent_stream_error(route.slug, exc, failure))
        runtime.emit_governance_error(
            request,
            route,
            prepared.body if prepared is not None else body,
            failure,
            inference=inference,
        )
        log_access(
            request,
            route,
            502,
            started_at,
            stream=True,
            error=failure,
            request_body=body,
            workspace=workspace_log_value(workspace),
        )
    try:
        await response.write_eof()
    except Exception:
        pass
    return response

async def post_cursor_acp(
    runtime: ProviderRuntime,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
    as_responses: bool,
    prepared: PreparedResponsesRequest | None = None,
    stream_response: WsStreamResponse | None = None,
) -> StreamSink:
    started_at = time.monotonic()
    if body.get("stream"):
        return await stream_cursor_acp(runtime,
            request,
            route,
            body,
            as_responses,
            prepared=prepared,
            started_at=started_at,
            stream_response=stream_response,
        )
    provider_started_at = time.monotonic()
    workspace = cursor_workspace(request, route, body if prepared is None else prepared.body)
    try:
        chained = prepared.chained_from_previous if prepared is not None else False
        result = await await_cursor_inference(
            run_cursor_acp(route, body, chained_from_previous=chained, workspace=workspace)
        )
    except CursorAcpError as exc:
        runtime.emit_governance_error(
            request,
            route,
            prepared.body if prepared is not None else body,
            "cursor_acp_error",
            inference=getattr(request, "_codex_shim_inference", None),
        )
        log_access(
            request,
            route,
            502,
            started_at,
            stream=False,
            error="cursor_acp_error",
            request_body=prepared.body if prepared is not None else body,
            provider_ms=elapsed_ms(provider_started_at),
            workspace=workspace_log_value(workspace),
        )
        return cursor_acp_error_response(exc)
    provider_ms = elapsed_ms(provider_started_at)
    if as_responses:
        response_payload = attach_response_metadata(
            cursor_acp_response_payload(result, route.slug),
            route,
            prepared,
            workspace=workspace,
        )
        if prepared is not None:
            runtime.store_history(prepared, response_payload, route=route)
        resp = web.json_response(response_payload)
        executed_tool_count = executed_tool_count_from_response_payload(response_payload)
        if executed_tool_count > 0:
            setattr(resp, "_codex_shim_executed_tool_count", executed_tool_count)
        log_access(
            request,
            route,
            200,
            started_at,
            payload=response_payload,
            stream=False,
            request_body=prepared.body if prepared is not None else body,
            provider_ms=provider_ms,
            workspace=workspace_log_value(workspace),
        )
        return resp
    chat_payload = cursor_acp_chat_payload(result, route.slug)
    log_access(
        request,
        route,
        200,
        started_at,
        payload=chat_payload,
        stream=False,
        request_body=body,
        provider_ms=provider_ms,
        workspace=workspace_log_value(workspace),
    )
    return web.json_response(chat_payload)

async def post_cursor_cli(
    runtime: ProviderRuntime,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
    as_responses: bool,
    prepared: PreparedResponsesRequest | None = None,
    stream_response: WsStreamResponse | None = None,
    *,
    native_envelope: dict[str, Any] | None = None,
) -> StreamSink:
    started_at = time.monotonic()
    if body.get("stream"):
        return await stream_cursor_cli(runtime,
            request,
            route,
            body,
            as_responses,
            prepared=prepared,
            started_at=started_at,
            stream_response=stream_response,
            native_envelope=native_envelope,
        )
    provider_started_at = time.monotonic()
    workspace = cursor_workspace(request, route, body if prepared is None else prepared.body)
    try:
        chained = prepared.chained_from_previous if prepared is not None else False
        turn_options = cursor_cli_turn_options(runtime,
            request,
            route,
            body if prepared is None else prepared.body,
            chained_from_previous=chained,
            workspace=workspace,
        )
        inference = getattr(request, "_codex_shim_inference", None)
        result = await await_cursor_inference(
            run_cursor_cli(
                route,
                body,
                chained_from_previous=chained,
                workspace=workspace,
                request=request,
                turn_options=turn_options,
                inference_cli_mode=inference.cli_mode if inference is not None else None,
            )
        )
        persist_cursor_thread_session(runtime, turn_options, result)
    except CursorCliError as exc:
        failure = "cursor_turn_timeout" if "Timed out waiting" in str(exc) else "cursor_cli_error"
        runtime.emit_governance_error(
            request,
            route,
            prepared.body if prepared is not None else body,
            failure,
            inference=getattr(request, "_codex_shim_inference", None),
        )
        log_access(
            request,
            route,
            502,
            started_at,
            stream=False,
            error=failure,
            request_body=prepared.body if prepared is not None else body,
            provider_ms=elapsed_ms(provider_started_at),
            workspace=workspace_log_value(workspace),
        )
        err_resp = cursor_agent_error_response(exc, failure)
        if not is_cursor_start_failure(exc):
            # Mid-turn failure: the cursor agent already ran and may have had
            # side effects. Failover would replay the whole turn on another
            # provider unsafely, so tell the gateway not to retry. Start
            # failures (command missing) carry no marker and may fail over.
            setattr(err_resp, "_codex_shim_no_failover", True)
        return err_resp
    provider_ms = elapsed_ms(provider_started_at)
    if as_responses:
        response_payload = attach_response_metadata(
            cursor_acp_response_payload(result, route.slug),
            route,
            prepared,
            native_envelope=native_envelope,
            workspace=workspace,
        )
        if prepared is not None:
            runtime.store_history(prepared, response_payload, route=route)
        resp = web.json_response(response_payload)
        executed_tool_count = executed_tool_count_from_response_payload(response_payload)
        if executed_tool_count > 0:
            setattr(resp, "_codex_shim_executed_tool_count", executed_tool_count)
        log_access(
            request,
            route,
            200,
            started_at,
            payload=response_payload,
            stream=False,
            request_body=prepared.body if prepared is not None else body,
            provider_ms=provider_ms,
            workspace=workspace_log_value(workspace),
        )
        return resp
    chat_payload = cursor_acp_chat_payload(result, route.slug)
    log_access(
        request,
        route,
        200,
        started_at,
        payload=chat_payload,
        stream=False,
        request_body=body,
        provider_ms=provider_ms,
        workspace=workspace_log_value(workspace),
    )
    return web.json_response(chat_payload)

async def stream_cursor_acp(
    runtime: ProviderRuntime,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
    as_responses: bool,
    prepared: PreparedResponsesRequest | None = None,
    started_at: float | None = None,
    stream_response: WsStreamResponse | None = None,
) -> StreamSink:
    started_at = started_at or time.monotonic()
    response = await open_stream_sink(request, stream_response)
    workspace = cursor_workspace(request, route, body if prepared is None else prepared.body)
    state = responses_stream_state(route, (prepared.body if prepared is not None else {}).get("tools")) if as_responses else None
    if state is not None:
        state.metadata = shim_response_metadata(route, prepared, workspace=workspace)
    chained = prepared.chained_from_previous if prepared is not None else False
    try:
        if state is not None:
            await state.start(response)

            async def write_responses_delta(text: str) -> None:
                await state.write_chat_delta(response, {"choices": [{"delta": {"content": text}}]})

            result = await await_cursor_inference(
                run_cursor_acp(
                    route,
                    body,
                    on_text=write_responses_delta,
                    chained_from_previous=chained,
                    workspace=workspace,
                )
            )
            if result.usage is not None:
                state.usage = result.usage
            final_response = await state.finish(response)
            if prepared is not None:
                runtime.store_history(prepared, final_response, route=route)
            log_access(
                request,
                route,
                200,
                started_at,
                payload=final_response,
                stream=True,
                request_body=prepared.body if prepared is not None else None,
                workspace=workspace_log_value(workspace),
            )
        else:
            created = int(time.time())

            async def write_chat_delta(text: str) -> None:
                await write_sse(
                    response,
                    {
                        "id": f"chatcmpl_cursor_acp_{created}",
                        "object": "chat.completion.chunk",
                        "created": created,
                        "model": route.slug,
                        "choices": [{"index": 0, "delta": {"content": text}, "finish_reason": None}],
                    },
                )

            await await_cursor_inference(
                run_cursor_acp(
                    route,
                    body,
                    on_text=write_chat_delta,
                    chained_from_previous=chained,
                    workspace=workspace,
                )
            )
            await write_sse(
                response,
                {
                    "id": f"chatcmpl_cursor_acp_{created}",
                    "object": "chat.completion.chunk",
                    "created": created,
                    "model": route.slug,
                    "choices": [{"index": 0, "delta": {}, "finish_reason": "stop"}],
                },
            )
            await safe_write(response, b"data: [DONE]\n\n")
            log_access(
                request,
                route,
                200,
                started_at,
                stream=True,
                request_body=prepared.body if prepared is not None else None,
                workspace=workspace_log_value(workspace),
            )
    except ClientDisconnected:
        pass
    except CursorAcpError as exc:
        runtime.emit_governance_error(
            request,
            route,
            prepared.body if prepared is not None else body,
            "cursor_acp_error",
            inference=getattr(request, "_codex_shim_inference", None),
        )
        log_access(
            request,
            route,
            502,
            started_at,
            stream=bool(body.get("stream")),
            error="cursor_acp_error",
            workspace=workspace_log_value(workspace),
        )
        await write_sse(response, cursor_acp_stream_error(route.slug, exc))
        if not as_responses:
            await safe_write(response, b"data: [DONE]\n\n")
    try:
        await response.write_eof()
    except Exception:
        pass
    return response

async def stream_cursor_cli(
    runtime: ProviderRuntime,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
    as_responses: bool,
    prepared: PreparedResponsesRequest | None = None,
    started_at: float | None = None,
    stream_response: WsStreamResponse | None = None,
    *,
    native_envelope: dict[str, Any] | None = None,
) -> StreamSink:
    started_at = started_at or time.monotonic()
    response = await open_stream_sink(request, stream_response)
    workspace = cursor_workspace(request, route, body if prepared is None else prepared.body)
    state = responses_stream_state(route, (prepared.body if prepared is not None else body).get("tools")) if as_responses else None
    if state is not None:
        state.metadata = shim_response_metadata(route, prepared, native_envelope=native_envelope, workspace=workspace)
    chained = prepared.chained_from_previous if prepared is not None else False
    turn_options = cursor_cli_turn_options(runtime,
        request,
        route,
        body if prepared is not None else body,
        chained_from_previous=chained,
        workspace=workspace,
    )
    inference = getattr(request, "_codex_shim_inference", None)
    try:
        if state is not None:
            await state.start(response)

            async def write_responses_delta(text: str) -> None:
                await state.write_chat_delta(response, {"choices": [{"delta": {"content": text}}]})

            async def write_responses_event(event: dict[str, Any]) -> None:
                await state.write_cursor_cli_event(response, event)

            async def write_keepalive() -> None:
                await safe_write(response, b": keepalive\n\n")

            result = await await_cursor_inference(
                run_cursor_cli(
                    route,
                    body,
                    on_text=write_responses_delta,
                    on_event=write_responses_event,
                    on_keepalive=write_keepalive,
                    chained_from_previous=chained,
                    workspace=workspace,
                    request=request,
                    turn_options=turn_options,
                    inference_cli_mode=inference.cli_mode if inference is not None else None,
                )
            )
            persist_cursor_thread_session(runtime, turn_options, result)
            if result.usage is not None:
                state.usage = result.usage
            final_response = await state.finish(response)
            if prepared is not None:
                runtime.store_history(prepared, final_response, route=route)
            log_access(
                request,
                route,
                200,
                started_at,
                payload=final_response,
                stream=True,
                request_body=prepared.body if prepared is not None else None,
                workspace=workspace_log_value(workspace),
            )
        else:
            created = int(time.time())

            async def write_chat_delta(text: str) -> None:
                await write_sse(
                    response,
                    {
                        "id": f"chatcmpl_cursor_cli_{created}",
                        "object": "chat.completion.chunk",
                        "created": created,
                        "model": route.slug,
                        "choices": [{"index": 0, "delta": {"content": text}, "finish_reason": None}],
                    },
                )

            result = await await_cursor_inference(
                run_cursor_cli(
                    route,
                    body,
                    on_text=write_chat_delta,
                    chained_from_previous=chained,
                    workspace=workspace,
                    request=request,
                    turn_options=turn_options,
                    inference_cli_mode=inference.cli_mode if inference is not None else None,
                )
            )
            persist_cursor_thread_session(runtime, turn_options, result)
            await write_sse(
                response,
                {
                    "id": f"chatcmpl_cursor_cli_{created}",
                    "object": "chat.completion.chunk",
                    "created": created,
                    "model": route.slug,
                    "choices": [{"index": 0, "delta": {}, "finish_reason": "stop"}],
                },
            )
            await safe_write(response, b"data: [DONE]\n\n")
            log_access(
                request,
                route,
                200,
                started_at,
                stream=True,
                request_body=prepared.body if prepared is not None else None,
                workspace=workspace_log_value(workspace),
            )
    except ClientDisconnected:
        pass
    except CursorCliError as exc:
        failure = "cursor_turn_timeout" if "Timed out waiting" in str(exc) else "cursor_cli_error"
        runtime.emit_governance_error(
            request,
            route,
            prepared.body if prepared is not None else body,
            failure,
            inference=getattr(request, "_codex_shim_inference", None),
        )
        log_access(
            request,
            route,
            502,
            started_at,
            stream=bool(body.get("stream")),
            error=failure,
            workspace=workspace_log_value(workspace),
        )
        await write_sse(response, cursor_agent_stream_error(route.slug, exc, failure))
        if not as_responses:
            await safe_write(response, b"data: [DONE]\n\n")
    try:
        await response.write_eof()
    except Exception:
        pass
    return response
