from __future__ import annotations

import json
import time
import uuid
from collections.abc import AsyncIterator
from typing import Any

from aiohttp import web

from .responses_ws import WsStreamResponse
from .translate import (
    build_streaming_tool_output_types,
    chat_finish_to_anthropic_stop,
    normalize_responses_usage,
    responses_usage_to_anthropic_usage,
    streaming_tool_completed_item,
    streaming_tool_open_item,
    streaming_tool_output_type,
)
from .translate.thinking import reasoning_encrypted_content


class ClientDisconnected(Exception):
    """Raised when the downstream Codex client closes the SSE connection."""


class ResponsesStreamState:
    """Translate upstream deltas into the Codex Desktop Responses stream shape."""

    def __init__(self, model: str, tools: Any = None, *, delegate_mode: bool = False):
        self.response_id = f"resp_{int(time.time() * 1000)}"
        self.message_item_id = f"msg_{int(time.time() * 1000)}"
        self.model = model
        self.delegate_mode = delegate_mode
        self.tool_output_types = build_streaming_tool_output_types(tools)
        self.message_index: int | None = None
        self.message_text = ""
        self.message_opened = False
        self.message_closed = False
        self.usage: dict[str, Any] | None = None
        self.tool_calls: dict[Any, dict[str, Any]] = {}
        self.reasoning_blocks: dict[Any, dict[str, Any]] = {}
        self.next_output_index = 0
        self.metadata: dict[str, Any] = {}
        self.anomalies: dict[str, Any] = {
            "malformed_cursor_events": 0,
            "duplicate_tool_starts": 0,
            "late_tool_completions": 0,
            "duplicate_reasoning_completed": 0,
            "delegated_tool_events_suppressed": 0,
            "unknown_cursor_event_types": [],
        }

    async def start(self, response: web.StreamResponse) -> None:
        await write_sse(response, {"type": "response.created", "response": self._response("in_progress")})

    async def finish(self, response: web.StreamResponse) -> dict[str, Any]:
        for state in sorted(self.reasoning_blocks.values(), key=lambda s: s["output_index"]):
            if not state.get("closed"):
                await self._close_reasoning(response, state)
        if self.message_opened and not self.message_closed:
            await self._close_message(response)
        if not self.delegate_mode:
            for state in sorted(self.tool_calls.values(), key=lambda s: s["output_index"]):
                if not state.get("closed"):
                    await self._close_tool(response, state)
        final_response = self._response("completed", final=True)
        await write_sse(response, {"type": "response.completed", "response": final_response})
        self.tool_calls.clear()
        self.reasoning_blocks.clear()
        return final_response

    async def write_chat_delta(self, response: web.StreamResponse, chunk: dict[str, Any]) -> None:
        usage = chunk.get("usage")
        if isinstance(usage, dict):
            self.usage = normalize_responses_usage(usage)
        choice = (chunk.get("choices") or [{}])[0]
        delta = choice.get("delta") or {}
        reasoning = delta.get("reasoning_content") or delta.get("reasoning")
        if reasoning:
            await self._chat_reasoning_delta(response, reasoning)
        content = delta.get("content")
        if content:
            for state in list(self.reasoning_blocks.values()):
                if not state.get("closed"):
                    await self._close_reasoning(response, state)
            await self._text_delta(response, content)
        for call in delta.get("tool_calls") or []:
            await self._chat_tool_delta(response, call)

    async def _chat_reasoning_delta(self, response: web.StreamResponse, text: str) -> None:
        state = self.reasoning_blocks.get(("chat",))
        if state is None:
            state = await self._open_reasoning(response, key=("chat",))
        state["text"] += text
        await write_sse(
            response,
            {
                "type": "response.reasoning_summary_text.delta",
                "item_id": state["id"],
                "output_index": state["output_index"],
                "summary_index": 0,
                "delta": text,
            },
        )

    async def _chat_tool_delta(self, response: web.StreamResponse, call: dict[str, Any]) -> None:
        index = int(call.get("index", 0))
        fn = call.get("function") or {}
        state = self.tool_calls.get(index)
        if state is None:
            call_id = call.get("id") or f"call_{index}"
            state = await self._open_tool(response, key=index, call_id=call_id, name=fn.get("name") or "")
        elif fn.get("name"):
            state["name"] += fn["name"]
        arg_delta = fn.get("arguments") or ""
        if arg_delta:
            state["arguments"] += arg_delta
            await write_sse(
                response,
                {
                    "type": "response.function_call_arguments.delta",
                    "item_id": state["id"],
                    "output_index": state["output_index"],
                    "delta": arg_delta,
                },
            )

    async def write_anthropic_delta(self, response: web.StreamResponse, event: dict[str, Any]) -> None:
        event_type = event.get("type")
        if event_type == "message_start":
            message = event.get("message") or {}
            usage = message.get("usage")
            if isinstance(usage, dict):
                self.usage = normalize_responses_usage(usage)
        if event_type == "content_block_start":
            block = event.get("content_block") or {}
            idx = int(event.get("index", 0))
            btype = block.get("type")
            if btype == "text":
                seed = block.get("text") or ""
                if seed:
                    await self._text_delta(response, seed)
            elif btype == "tool_use":
                await self._open_tool(
                    response,
                    key=("anthropic", idx),
                    call_id=block.get("id") or f"call_{idx}",
                    name=block.get("name") or "",
                )
            elif btype in {"thinking", "redacted_thinking"}:
                await self._open_reasoning(
                    response,
                    key=("anthropic_thinking", idx),
                    initial_text=block.get("thinking") or "",
                    initial_signature=block.get("signature") or "",
                    redacted=(btype == "redacted_thinking"),
                    redacted_data=block.get("data") or "",
                )
        elif event_type == "content_block_delta":
            idx = int(event.get("index", 0))
            delta = event.get("delta") or {}
            dtype = delta.get("type")
            if dtype == "text_delta":
                await self._text_delta(response, delta.get("text", ""))
            elif dtype == "input_json_delta":
                state = self.tool_calls.get(("anthropic", idx))
                if state is not None:
                    arg_delta = delta.get("partial_json") or ""
                    if arg_delta:
                        state["arguments"] += arg_delta
                        await write_sse(
                            response,
                            {
                                "type": "response.function_call_arguments.delta",
                                "item_id": state["id"],
                                "output_index": state["output_index"],
                                "delta": arg_delta,
                            },
                        )
            elif dtype == "thinking_delta":
                state = self.reasoning_blocks.get(("anthropic_thinking", idx))
                if state is None:
                    state = await self._open_reasoning(response, key=("anthropic_thinking", idx))
                txt = delta.get("thinking") or ""
                if txt:
                    state["text"] += txt
                    await write_sse(
                        response,
                        {
                            "type": "response.reasoning_summary_text.delta",
                            "item_id": state["id"],
                            "output_index": state["output_index"],
                            "summary_index": 0,
                            "delta": txt,
                        },
                    )
            elif dtype == "signature_delta":
                state = self.reasoning_blocks.get(("anthropic_thinking", idx))
                if state is None:
                    state = await self._open_reasoning(response, key=("anthropic_thinking", idx))
                state["signature"] += delta.get("signature") or ""
        elif event_type == "message_delta":
            usage = event.get("usage")
            if isinstance(usage, dict):
                if self.usage is None or any(
                    key in usage
                    for key in ("input_tokens", "prompt_tokens", "cache_read_input_tokens", "cache_creation_input_tokens")
                ):
                    normalized = normalize_responses_usage(usage)
                    if normalized is not None:
                        self.usage = normalized if self.usage is None else {**self.usage, **normalized}
                output_tokens = usage.get("output_tokens")
                if isinstance(output_tokens, int) and not isinstance(output_tokens, bool):
                    if self.usage is None:
                        self.usage = normalize_responses_usage(usage)
                    else:
                        self.usage["output_tokens"] = output_tokens
                        self.usage["total_tokens"] = int(self.usage.get("input_tokens") or 0) + output_tokens
        elif event_type == "content_block_stop":
            idx = int(event.get("index", 0))
            tool_state = self.tool_calls.get(("anthropic", idx))
            if tool_state is not None and not tool_state.get("closed"):
                await self._close_tool(response, tool_state)
            r_state = self.reasoning_blocks.get(("anthropic_thinking", idx))
            if r_state is not None and not r_state.get("closed"):
                await self._close_reasoning(response, r_state)

    async def write_cursor_cli_event(self, response: web.StreamResponse, event: dict[str, Any]) -> None:
        event_type = str(event.get("type") or "")
        if event_type == "shim_diagnostic":
            subtype = str(event.get("subtype") or "")
            if subtype.startswith("malformed_jsonl"):
                self.anomalies["malformed_cursor_events"] = int(self.anomalies.get("malformed_cursor_events") or 0) + 1
            return
        if event_type == "tool_call":
            if self.delegate_mode:
                self.anomalies["delegated_tool_events_suppressed"] = int(
                    self.anomalies.get("delegated_tool_events_suppressed") or 0
                ) + 1
                return
            subtype = str(event.get("subtype") or "")
            call_id = str(event.get("call_id") or "")
            if not call_id:
                return
            key = ("cursor_cli", call_id)
            if subtype == "started":
                tool_name, arguments = _cursor_cli_tool_name_and_args(event.get("tool_call"))
                state = self.tool_calls.get(key)
                if state is None:
                    state = await self._open_tool(response, key=key, call_id=call_id, name=tool_name)
                elif state.get("closed"):
                    self.anomalies["late_tool_completions"] = int(self.anomalies.get("late_tool_completions") or 0) + 1
                    return
                else:
                    self.anomalies["duplicate_tool_starts"] = int(self.anomalies.get("duplicate_tool_starts") or 0) + 1
                if arguments:
                    state["arguments"] = arguments
                    await write_sse(
                        response,
                        {
                            "type": "response.function_call_arguments.delta",
                            "item_id": state["id"],
                            "output_index": state["output_index"],
                            "delta": arguments,
                        },
                    )
                return
            if subtype == "completed":
                state = self.tool_calls.get(key)
                if state is not None and not state.get("closed"):
                    await self._close_tool(response, state)
                else:
                    self.anomalies["late_tool_completions"] = int(self.anomalies.get("late_tool_completions") or 0) + 1
                return
        if event_type == "thinking":
            subtype = str(event.get("subtype") or "")
            if subtype == "delta":
                await self._chat_reasoning_delta(response, str(event.get("text") or ""))
            elif subtype == "completed":
                state = self.reasoning_blocks.get(("chat",))
                if state is not None and not state.get("closed"):
                    await self._close_reasoning(response, state)
                else:
                    self.anomalies["duplicate_reasoning_completed"] = int(
                        self.anomalies.get("duplicate_reasoning_completed") or 0
                    ) + 1
            return
        known_ignored = {"system", "assistant", "result", "user"}
        if event_type and event_type not in known_ignored:
            seen = self.anomalies.get("unknown_cursor_event_types")
            if isinstance(seen, list) and event_type not in seen and len(seen) < 16:
                seen.append(event_type)

    async def _open_message(self, response: web.StreamResponse) -> None:
        self.message_index = self.next_output_index
        self.next_output_index += 1
        self.message_opened = True
        await write_sse(
            response,
            {
                "type": "response.output_item.added",
                "output_index": self.message_index,
                "item": {
                    "id": self.message_item_id,
                    "type": "message",
                    "status": "in_progress",
                    "role": "assistant",
                    "content": [],
                },
            },
        )
        await write_sse(
            response,
            {
                "type": "response.content_part.added",
                "item_id": self.message_item_id,
                "output_index": self.message_index,
                "content_index": 0,
                "part": {"type": "output_text", "text": "", "annotations": []},
            },
        )

    async def _close_message(self, response: web.StreamResponse) -> None:
        if not self.message_opened or self.message_closed:
            return
        self.message_closed = True
        await write_sse(
            response,
            {
                "type": "response.output_text.done",
                "item_id": self.message_item_id,
                "output_index": self.message_index,
                "content_index": 0,
                "text": self.message_text,
            },
        )
        await write_sse(
            response,
            {
                "type": "response.content_part.done",
                "item_id": self.message_item_id,
                "output_index": self.message_index,
                "content_index": 0,
                "part": {"type": "output_text", "text": self.message_text, "annotations": []},
            },
        )
        await write_sse(
            response,
            {
                "type": "response.output_item.done",
                "output_index": self.message_index,
                "item": self._message_item("completed"),
            },
        )

    async def _text_delta(self, response: web.StreamResponse, text: str) -> None:
        if not text:
            return
        if not self.message_opened:
            await self._open_message(response)
        self.message_text += text
        await write_sse(
            response,
            {
                "type": "response.output_text.delta",
                "item_id": self.message_item_id,
                "output_index": self.message_index,
                "content_index": 0,
                "delta": text,
            },
        )

    async def _open_tool(self, response: web.StreamResponse, *, key: Any, call_id: str, name: str) -> dict[str, Any]:
        if self.message_opened and not self.message_closed:
            await self._close_message(response)
        output_index = self.next_output_index
        self.next_output_index += 1
        item_type = streaming_tool_output_type(name, self.tool_output_types)
        state: dict[str, Any] = {
            "id": call_id,
            "call_id": call_id,
            "name": name,
            "arguments": "",
            "output_index": output_index,
            "closed": False,
            "native_type": item_type,
        }
        self.tool_calls[key] = state
        item = streaming_tool_open_item(item_type, call_id=call_id, name=name)
        await write_sse(
            response,
            {
                "type": "response.output_item.added",
                "output_index": output_index,
                "item": item,
            },
        )
        return state

    async def _close_tool(self, response: web.StreamResponse, state: dict[str, Any]) -> None:
        state["closed"] = True
        await write_sse(
            response,
            {
                "type": "response.function_call_arguments.done",
                "item_id": state["id"],
                "output_index": state["output_index"],
                "arguments": state["arguments"],
            },
        )
        await write_sse(
            response,
            {
                "type": "response.output_item.done",
                "output_index": state["output_index"],
                "item": self._tool_item(state, "completed"),
            },
        )

    async def _open_reasoning(
        self,
        response: web.StreamResponse,
        *,
        key: Any,
        initial_text: str = "",
        initial_signature: str = "",
        redacted: bool = False,
        redacted_data: str = "",
    ) -> dict[str, Any]:
        output_index = self.next_output_index
        self.next_output_index += 1
        item_id = f"rs_{int(time.time() * 1000)}_{output_index}"
        state: dict[str, Any] = {
            "id": item_id,
            "output_index": output_index,
            "text": initial_text,
            "signature": initial_signature,
            "redacted": redacted,
            "redacted_data": redacted_data,
            "closed": False,
        }
        self.reasoning_blocks[key] = state
        await write_sse(
            response,
            {
                "type": "response.output_item.added",
                "output_index": output_index,
                "item": {
                    "id": item_id,
                    "type": "reasoning",
                    "status": "in_progress",
                    "summary": [],
                    "encrypted_content": None,
                },
            },
        )
        if initial_text:
            await write_sse(
                response,
                {
                    "type": "response.reasoning_summary_text.delta",
                    "item_id": item_id,
                    "output_index": output_index,
                    "summary_index": 0,
                    "delta": initial_text,
                },
            )
        return state

    async def _close_reasoning(self, response: web.StreamResponse, state: dict[str, Any]) -> None:
        state["closed"] = True
        await write_sse(
            response,
            {
                "type": "response.reasoning_summary_text.done",
                "item_id": state["id"],
                "output_index": state["output_index"],
                "summary_index": 0,
                "text": state["text"],
            },
        )
        await write_sse(
            response,
            {
                "type": "response.output_item.done",
                "output_index": state["output_index"],
                "item": self._reasoning_item(state, "completed"),
            },
        )

    def _reasoning_item(self, state: dict[str, Any], status: str) -> dict[str, Any]:
        if state.get("redacted"):
            payload = {"type": "redacted_thinking", "data": state.get("redacted_data", "")}
            encrypted = reasoning_encrypted_content(payload)
        else:
            payload = {
                "type": "thinking",
                "thinking": state.get("text", ""),
                "signature": state.get("signature", ""),
            }
            encrypted = reasoning_encrypted_content(payload)
        return {
            "id": state["id"],
            "type": "reasoning",
            "status": status,
            "summary": (
                [{"type": "summary_text", "text": state.get("text", "")}]
                if state.get("text") and not state.get("redacted")
                else []
            ),
            "encrypted_content": encrypted,
        }

    def _message_item(self, status: str) -> dict[str, Any]:
        return {
            "id": self.message_item_id,
            "type": "message",
            "status": status,
            "role": "assistant",
            "content": [
                {"type": "output_text", "text": self.message_text, "annotations": []}
            ] if self.message_text else [],
        }

    def _tool_item(self, state: dict[str, Any], status: str) -> dict[str, Any]:
        item_type = state.get("native_type") or "function_call"
        return streaming_tool_completed_item(
            item_type,
            call_id=state["call_id"],
            name=state.get("name") or "",
            arguments=state.get("arguments") or "",
            status=status,
        )

    def _response(self, status: str, *, final: bool = False) -> dict[str, Any]:
        output: list[dict[str, Any]] = []
        if final:
            collected: list[tuple[int, dict[str, Any]]] = []
            for state in self.reasoning_blocks.values():
                collected.append((state["output_index"], self._reasoning_item(state, "completed")))
            if self.message_opened and self.message_text and self.message_index is not None:
                collected.append((self.message_index, self._message_item("completed")))
            if not self.delegate_mode:
                for state in self.tool_calls.values():
                    collected.append((state["output_index"], self._tool_item(state, "completed")))
            collected.sort(key=lambda pair: pair[0])
            output = [item for _, item in collected]
        payload = {
            "id": self.response_id,
            "object": "response",
            "created_at": int(time.time()),
            "status": status,
            "model": self.model,
            "output": output,
        }
        if self.usage is not None:
            payload["usage"] = self.usage
        elif final:
            payload["usage"] = {"input_tokens": 0, "output_tokens": 0, "total_tokens": 0}
        if final:
            metadata = dict(self.metadata)
            anomalies = {
                key: value
                for key, value in self.anomalies.items()
                if (isinstance(value, list) and value) or (isinstance(value, int) and value > 0)
            }
            if anomalies:
                metadata["shim_anomalies"] = anomalies
            if metadata:
                payload["metadata"] = metadata
        return payload


async def open_stream_sink(
    request: web.Request,
    stream_response: WsStreamResponse | None,
) -> web.StreamResponse | WsStreamResponse:
    if stream_response is not None:
        await stream_response.prepare(request)
        return stream_response
    response = sse_response()
    await response.prepare(request)
    return response


def sse_response() -> web.StreamResponse:
    return web.StreamResponse(
        status=200,
        headers={
            "Content-Type": "text/event-stream",
            "Cache-Control": "no-cache",
            "Connection": "keep-alive",
        },
    )


async def safe_write(response: web.StreamResponse, data: bytes) -> None:
    try:
        await response.write(data)
    except (ConnectionResetError, ConnectionError) as exc:
        raise ClientDisconnected() from exc
    except Exception as exc:
        if exc.__class__.__name__ in {
            "ClientConnectionResetError",
            "ClientConnectionError",
            "ClientPayloadError",
        }:
            raise ClientDisconnected() from exc
        raise


async def write_sse(response: web.StreamResponse, payload: dict[str, Any]) -> None:
    try:
        await response.write(f"data: {json.dumps(payload, separators=(',', ':'))}\n\n".encode())
    except (ConnectionResetError, ConnectionError) as exc:
        raise ClientDisconnected() from exc
    except Exception as exc:
        if exc.__class__.__name__ in {
            "ClientConnectionResetError",
            "ClientConnectionError",
            "ClientPayloadError",
        }:
            raise ClientDisconnected() from exc
        raise


_MAX_SSE_BUFFER = 10 * 1024 * 1024  # 10 MB


async def sse_lines(upstream) -> AsyncIterator[str]:
    buffer = b""
    async for chunk in upstream.content.iter_chunked(4096):
        buffer += chunk
        if len(buffer) > _MAX_SSE_BUFFER:
            buffer = b""
            break
        while b"\n" in buffer:
            raw, buffer = buffer.split(b"\n", 1)
            line = raw.decode("utf-8", errors="replace").strip()
            if line.startswith("data:"):
                yield line[5:].strip()
    tail = buffer.decode("utf-8", errors="replace").strip()
    if tail.startswith("data:"):
        yield tail[5:].strip()


def anthropic_stream_to_chat_chunk(event: dict[str, Any], model: str) -> dict[str, Any]:
    content = ""
    if event.get("type") == "content_block_delta":
        delta = event.get("delta") or {}
        if delta.get("type") == "text_delta":
            content = delta.get("text", "")
    return {
        "object": "chat.completion.chunk",
        "model": model,
        "choices": [{"index": 0, "delta": {"content": content}, "finish_reason": None}],
    }


def _cursor_cli_tool_name_and_args(tool_call: Any) -> tuple[str, str]:
    if not isinstance(tool_call, dict):
        return "", ""
    if "name" in tool_call:
        return str(tool_call.get("name") or ""), _json_or_empty(tool_call.get("arguments"))
    # Cursor ACP/CLI payloads frequently nest under tool.case/tool.value.
    tool = tool_call.get("tool")
    if isinstance(tool, dict):
        tool_case = str(tool.get("case") or "")
        if tool_case:
            normalized = tool_case[:-8] if tool_case.endswith("ToolCall") else tool_case
            normalized = {
                "shell": "local_shell",
                "webSearch": "web_search",
                "imageGeneration": "image_generation",
                "toolSearch": "tool_search",
            }.get(normalized, normalized)
            tool_value = tool.get("value")
            if isinstance(tool_value, dict) and isinstance(tool_value.get("args"), dict):
                return normalized, _json_or_empty(tool_value.get("args"))
            return normalized, _json_or_empty(tool_value)
    return str(tool_call.get("title") or ""), _json_or_empty(tool_call.get("rawInput"))


def _json_or_empty(value: Any) -> str:
    if value in (None, "", {}):
        return ""
    if isinstance(value, str):
        return value
    try:
        return json.dumps(value, separators=(",", ":"), ensure_ascii=False)
    except TypeError:
        return str(value)


async def write_anthropic_sse(response: web.StreamResponse, event: str, payload: dict[str, Any]) -> None:
    data = json.dumps(payload, separators=(",", ":"))
    try:
        await response.write(f"event: {event}\ndata: {data}\n\n".encode())
    except (ConnectionResetError, ConnectionError) as exc:
        raise ClientDisconnected() from exc
    except Exception as exc:
        if exc.__class__.__name__ in {
            "ClientConnectionResetError",
            "ClientConnectionError",
            "ClientPayloadError",
        }:
            raise ClientDisconnected() from exc
        raise


class AnthropicMessagesStreamState:
    """Translates OpenAI chat-completions chunks into Anthropic Messages SSE."""

    def __init__(self, model: str):
        self.message_id = f"msg_{uuid.uuid4().hex[:24]}"
        self.model = model
        self.next_index = 0
        self.text_index: int | None = None
        self.reasoning_index: int | None = None
        self.text_open = False
        self.reasoning_open = False
        self.tool_calls: dict[int, dict[str, Any]] = {}
        self.usage: dict[str, Any] | None = None
        self.stop_reason = "end_turn"

    async def start(self, response: web.StreamResponse) -> None:
        await write_anthropic_sse(
            response,
            "message_start",
            {
                "type": "message_start",
                "message": {
                    "id": self.message_id,
                    "type": "message",
                    "role": "assistant",
                    "model": self.model,
                    "content": [],
                    "stop_reason": None,
                    "stop_sequence": None,
                    "usage": {"input_tokens": 0, "output_tokens": 0},
                },
            },
        )

    async def write_chat_delta(self, response: web.StreamResponse, chunk: dict[str, Any]) -> None:
        usage = chunk.get("usage")
        if isinstance(usage, dict):
            self.usage = normalize_responses_usage(usage)
        choice = (chunk.get("choices") or [{}])[0]
        finish_reason = choice.get("finish_reason")
        if finish_reason:
            self.stop_reason = chat_finish_to_anthropic_stop(finish_reason)
        delta = choice.get("delta") or {}
        reasoning = delta.get("reasoning_content") or delta.get("reasoning")
        if reasoning:
            await self._reasoning_delta(response, str(reasoning))
        content = delta.get("content")
        if content:
            if self.reasoning_open:
                await self._close_reasoning(response)
            await self._text_delta(response, str(content))
        for call in delta.get("tool_calls") or []:
            await self._tool_delta(response, call)

    async def finish(self, response: web.StreamResponse) -> None:
        if self.reasoning_open:
            await self._close_reasoning(response)
        if self.text_open:
            await self._close_text(response)
        for index in sorted(self.tool_calls):
            state = self.tool_calls[index]
            if not state.get("closed"):
                await self._close_tool(response, index, state)
        await write_anthropic_sse(
            response,
            "message_delta",
            {
                "type": "message_delta",
                "delta": {"stop_reason": self.stop_reason, "stop_sequence": None},
                "usage": responses_usage_to_anthropic_usage(self.usage) or {"output_tokens": 0},
            },
        )
        await write_anthropic_sse(response, "message_stop", {"type": "message_stop"})

    async def _text_delta(self, response: web.StreamResponse, text: str) -> None:
        if self.text_index is None:
            self.text_index = self.next_index
            self.next_index += 1
            self.text_open = True
            await write_anthropic_sse(
                response,
                "content_block_start",
                {
                    "type": "content_block_start",
                    "index": self.text_index,
                    "content_block": {"type": "text", "text": ""},
                },
            )
        await write_anthropic_sse(
            response,
            "content_block_delta",
            {
                "type": "content_block_delta",
                "index": self.text_index,
                "delta": {"type": "text_delta", "text": text},
            },
        )

    async def _close_text(self, response: web.StreamResponse) -> None:
        if self.text_index is None:
            return
        await write_anthropic_sse(
            response, "content_block_stop", {"type": "content_block_stop", "index": self.text_index}
        )
        self.text_index = None
        self.text_open = False

    async def _reasoning_delta(self, response: web.StreamResponse, text: str) -> None:
        if self.reasoning_index is None:
            self.reasoning_index = self.next_index
            self.next_index += 1
            self.reasoning_open = True
            await write_anthropic_sse(
                response,
                "content_block_start",
                {
                    "type": "content_block_start",
                    "index": self.reasoning_index,
                    "content_block": {"type": "thinking", "thinking": ""},
                },
            )
        await write_anthropic_sse(
            response,
            "content_block_delta",
            {
                "type": "content_block_delta",
                "index": self.reasoning_index,
                "delta": {"type": "thinking_delta", "thinking": text},
            },
        )

    async def _close_reasoning(self, response: web.StreamResponse) -> None:
        if self.reasoning_index is None:
            return
        await write_anthropic_sse(
            response,
            "content_block_stop",
            {"type": "content_block_stop", "index": self.reasoning_index},
        )
        self.reasoning_index = None
        self.reasoning_open = False

    async def _tool_delta(self, response: web.StreamResponse, call: dict[str, Any]) -> None:
        index = int(call.get("index", 0))
        fn = call.get("function") or {}
        state = self.tool_calls.setdefault(
            index,
            {
                "id": "",
                "name": "",
                "arguments": "",
                "emitted": 0,
                "block_index": None,
                "open": False,
                "closed": False,
            },
        )
        if call.get("id"):
            state["id"] = call["id"]
        if fn.get("name"):
            state["name"] += fn["name"]
        if fn.get("arguments"):
            state["arguments"] += fn["arguments"]
        if not state["open"] and state["name"]:
            if self.reasoning_open:
                await self._close_reasoning(response)
            if self.text_open:
                await self._close_text(response)
            await self._open_tool(response, index, state)
        if state["open"] and len(state["arguments"]) > state["emitted"]:
            delta = state["arguments"][state["emitted"] :]
            state["emitted"] = len(state["arguments"])
            await write_anthropic_sse(
                response,
                "content_block_delta",
                {
                    "type": "content_block_delta",
                    "index": state["block_index"],
                    "delta": {"type": "input_json_delta", "partial_json": delta},
                },
            )

    async def _open_tool(self, response: web.StreamResponse, index: int, state: dict[str, Any]) -> None:
        state["block_index"] = self.next_index
        self.next_index += 1
        state["open"] = True
        if not state["id"]:
            state["id"] = f"call_{index}"
        await write_anthropic_sse(
            response,
            "content_block_start",
            {
                "type": "content_block_start",
                "index": state["block_index"],
                "content_block": {
                    "type": "tool_use",
                    "id": state["id"],
                    "name": state["name"] or "tool",
                    "input": {},
                },
            },
        )

    async def _close_tool(self, response: web.StreamResponse, index: int, state: dict[str, Any]) -> None:
        if not state["open"]:
            await self._open_tool(response, index, state)
            if len(state["arguments"]) > state["emitted"]:
                delta = state["arguments"][state["emitted"] :]
                state["emitted"] = len(state["arguments"])
                await write_anthropic_sse(
                    response,
                    "content_block_delta",
                    {
                        "type": "content_block_delta",
                        "index": state["block_index"],
                        "delta": {"type": "input_json_delta", "partial_json": delta},
                    },
                )
        await write_anthropic_sse(
            response,
            "content_block_stop",
            {"type": "content_block_stop", "index": state["block_index"]},
        )
        state["open"] = False
        state["closed"] = True
