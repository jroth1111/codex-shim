from __future__ import annotations

import pytest

from codex_shim.translate import (
    ResponsesInputError,
    responses_to_anthropic,
    responses_to_chat,
)
from codex_shim.translate.content import chat_parts_from_content


def test_chat_parts_from_content_handles_nested_visual_output():
    parts = chat_parts_from_content(
        {
            "output": [{"type": "input_image", "image_url": "data:image/png;base64,BBB"}],
        }
    )
    assert parts == [
        {"type": "image_url", "image_url": {"url": "data:image/png;base64,BBB"}},
    ]


def test_responses_to_chat_preserves_input_images_for_vision_models():
    body = {
        "model": "slug",
        "input": [
            {
                "role": "user",
                "content": [
                    {"type": "input_text", "text": "What is visible?"},
                    {"type": "input_image", "image_url": "data:image/png;base64,AAA", "detail": "high"},
                ],
            }
        ],
    }

    out = responses_to_chat(body, "vision-model")

    assert out["messages"] == [
        {
            "role": "user",
            "content": [
                {"type": "text", "text": "What is visible?"},
                {"type": "image_url", "image_url": {"url": "data:image/png;base64,AAA", "detail": "high"}},
            ],
        }
    ]


def test_responses_to_chat_normalises_original_image_detail():
    """Codex Desktop sends `detail: "original"` on input_image items, but
    "original" is not a valid OpenAI Chat Completions value.  Providers like
    Kimi K2.6 (via Ark) reject it with:

        The parameter `messages.content.image_url.detail` specified in the
        request are not valid: invalid value: `original`, supported values
        are: `low`, `high`, `xhigh`, and `auto`.

    The shim must translate ``original`` to ``high`` (the closest standard
    OpenAI value — "full resolution") rather than passing it through verbatim.
    """
    body = {
        "model": "slug",
        "input": [
            {
                "role": "user",
                "content": [
                    {"type": "input_text", "text": "Describe the screenshot"},
                    {"type": "input_image", "image_url": "data:image/png;base64,ZZZ", "detail": "original"},
                ],
            }
        ],
    }

    out = responses_to_chat(body, "vision-model")

    assert out["messages"] == [
        {
            "role": "user",
            "content": [
                {"type": "text", "text": "Describe the screenshot"},
                {"type": "image_url", "image_url": {"url": "data:image/png;base64,ZZZ", "detail": "high"}},
            ],
        }
    ]


def test_responses_to_chat_preserves_input_audio_for_audio_models():
    body = {
        "model": "slug",
        "input": [
            {
                "role": "user",
                "content": [
                    {"type": "input_audio", "input_audio": {"data": "data:audio/mpeg;base64,AAAA", "format": "mp3"}},
                    {"type": "input_text", "text": "Transcribe this."},
                ],
            }
        ],
    }

    out = responses_to_chat(body, "audio-model")

    assert out["messages"] == [
        {
            "role": "user",
            "content": [
                {"type": "input_audio", "input_audio": {"data": "data:audio/mpeg;base64,AAAA", "format": "mp3"}},
                {"type": "text", "text": "Transcribe this."},
            ],
        }
    ]


def test_responses_to_chat_infers_input_audio_format_from_data_url():
    body = {"model": "slug", "input": {"type": "input_audio", "data": "data:audio/mpeg;base64,AAAA"}}

    out = responses_to_chat(body, "audio-model")

    assert out["messages"] == [
        {"role": "user", "content": [{"type": "input_audio", "input_audio": {"data": "data:audio/mpeg;base64,AAAA", "format": "mp3"}}]}
    ]


def test_responses_to_chat_rejects_oversized_inline_media(monkeypatch):
    from codex_shim.translate import content as content_module

    monkeypatch.setattr(content_module, "MAX_INLINE_MEDIA_BYTES", 2)
    body = {"model": "slug", "input": {"type": "input_audio", "data": "data:audio/wav;base64,AAAA"}}

    with pytest.raises(ResponsesInputError, match="exceeds 2 bytes"):
        responses_to_chat(body, "audio-model")


def test_responses_to_chat_rejects_unknown_content_part_type():
    body = {
        "model": "slug",
        "input": [{"role": "user", "content": [{"type": "file", "file_id": "file_123"}]}],
    }

    with pytest.raises(ResponsesInputError, match="Unsupported Responses content part type: file"):
        responses_to_chat(body, "real-model")


def test_top_level_input_audio_reaches_openai_chat_payload():
    body = {"model": "slug", "input": {"type": "input_audio", "data": "AAAA", "format": "wav"}}

    out = responses_to_chat(body, "audio-model")

    assert out["messages"] == [
        {"role": "user", "content": [{"type": "input_audio", "input_audio": {"data": "AAAA", "format": "wav"}}]}
    ]


def test_computer_call_output_screenshot_reaches_openai_chat_vision():
    body = {
        "model": "slug",
        "input": [
            {"type": "computer_call_output", "call_id": "cu_1", "output": {"type": "input_image", "image_url": "data:image/png;base64,BBB"}}
        ],
    }

    out = responses_to_chat(body, "vision-model")

    assert out["messages"] == [
        {
            "role": "user",
            "content": [
                {"type": "text", "text": "Computer output for cu_1."},
                {"type": "image_url", "image_url": {"url": "data:image/png;base64,BBB"}},
            ],
        }
    ]


def test_function_call_output_visual_feedback_adds_followup_image_message():
    body = {
        "model": "slug",
        "input": [
            {"type": "function_call", "call_id": "call_1", "name": "computer_use", "arguments": "{}"},
            {"type": "function_call_output", "call_id": "call_1", "output": [{"type": "input_image", "image_url": "data:image/png;base64,CCC"}]},
        ],
    }

    out = responses_to_chat(body, "vision-model")

    assert out["messages"][1] == {"role": "tool", "tool_call_id": "call_1", "content": "[image]"}
    assert out["messages"][2] == {
        "role": "user",
        "content": [
            {"type": "text", "text": "Visual tool output for call_1."},
            {"type": "image_url", "image_url": {"url": "data:image/png;base64,CCC"}},
        ],
    }
