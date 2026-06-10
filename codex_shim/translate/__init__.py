from __future__ import annotations

from . import content as _content_module
from .anthropic import anthropic_to_chat_response, responses_to_anthropic
from .anthropic_messages import anthropic_messages_to_chat, chat_completion_to_anthropic_message
from .chat import chat_to_anthropic, chat_to_responses_request, responses_to_chat
from .common import (
    THINK_RE,
    ResponsesInputError,
    chat_finish_to_anthropic_stop,
    responses_usage_to_anthropic_usage,
    strip_think,
)
from .content import SUPPORTED_AUDIO_FORMATS, SUPPORTED_AUDIO_MIME_FORMATS
from .input import KNOWN_RESPONSE_INPUT_TYPES, responses_input_to_messages, validate_responses_input
from .output import anthropic_to_response, chat_completion_to_response
from .streaming import (
    AnthropicMessagesStreamState,
    ResponsesStreamState,
    anthropic_stream_to_chat_chunk,
)
from .thinking import SHIM_ENCRYPTED_CONTENT_PREFIX
from .tools import (
    HOSTED_CALL_FALLBACK_NAMES,
    NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME,
    WEB_SEARCH_ACTION_TYPES,
    build_streaming_tool_output_types,
    function_call_to_native_item,
    initial_native_tool_action,
    normalize_hosted_call_item,
    normalize_local_shell_action,
    normalize_web_search_action,
    streaming_tool_completed_item,
    streaming_tool_open_item,
    streaming_tool_output_type,
    tool_call_to_response_item,
)
from .usage import normalize_responses_usage

MAX_INLINE_MEDIA_BYTES = _content_module.MAX_INLINE_MEDIA_BYTES

__all__ = [
    "AnthropicMessagesStreamState",
    "ResponsesStreamState",
    "anthropic_stream_to_chat_chunk",
    "MAX_INLINE_MEDIA_BYTES",
    "KNOWN_RESPONSE_INPUT_TYPES",
    "NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME",
    "ResponsesInputError",
    "SHIM_ENCRYPTED_CONTENT_PREFIX",
    "SUPPORTED_AUDIO_FORMATS",
    "SUPPORTED_AUDIO_MIME_FORMATS",
    "THINK_RE",
    "WEB_SEARCH_ACTION_TYPES",
    "HOSTED_CALL_FALLBACK_NAMES",
    "anthropic_messages_to_chat",
    "anthropic_to_chat_response",
    "anthropic_to_response",
    "chat_completion_to_anthropic_message",
    "chat_finish_to_anthropic_stop",
    "responses_usage_to_anthropic_usage",
    "build_streaming_tool_output_types",
    "chat_completion_to_response",
    "chat_to_anthropic",
    "chat_to_responses_request",
    "function_call_to_native_item",
    "initial_native_tool_action",
    "normalize_hosted_call_item",
    "normalize_local_shell_action",
    "normalize_responses_usage",
    "normalize_web_search_action",
    "responses_input_to_messages",
    "responses_to_anthropic",
    "responses_to_chat",
    "streaming_tool_completed_item",
    "streaming_tool_open_item",
    "streaming_tool_output_type",
    "strip_think",
    "tool_call_to_response_item",
    "validate_responses_input",
]
