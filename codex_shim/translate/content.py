from __future__ import annotations

import re
from typing import Any

from .common import ResponsesInputError

MAX_INLINE_MEDIA_BYTES = 50 * 1024 * 1024
SUPPORTED_AUDIO_FORMATS = {"mp3", "wav", "webm", "ogg", "flac", "mp4", "m4a"}
SUPPORTED_AUDIO_MIME_FORMATS = {
    "audio/mpeg": "mp3",
    "audio/mp3": "mp3",
    "audio/wav": "wav",
    "audio/x-wav": "wav",
    "audio/webm": "webm",
    "audio/ogg": "ogg",
    "audio/flac": "flac",
    "audio/mp4": "mp4",
    "audio/m4a": "m4a",
}

def responses_content_to_chat_content(content: Any) -> str | list[dict[str, Any]]:
    parts = chat_parts_from_content(content)
    if not parts:
        return ""
    if any(part.get("type") != "text" for part in parts):
        return parts
    return "\n".join(str(part.get("text", "")) for part in parts if part.get("type") == "text")


def computer_output_to_chat_content(item: dict[str, Any]) -> str | list[dict[str, Any]]:
    call_id = item.get("call_id") or item.get("id")
    prefix = f"Computer output for {call_id}." if call_id else "Computer output."
    parts = chat_parts_from_content(item.get("output", ""))
    if any(part.get("type") == "image_url" for part in parts):
        return [{"type": "text", "text": prefix}, *parts]
    text = "\n".join(str(part.get("text", "")) for part in parts if part.get("type") == "text")
    return f"{prefix}\n{text}" if text else prefix


def visual_feedback_chat_content(output: Any, call_id: Any) -> list[dict[str, Any]]:
    prefix = f"Visual tool output for {call_id}." if call_id else "Visual tool output."
    parts = [part for part in chat_parts_from_content(output) if part.get("type") == "image_url"]
    return [{"type": "text", "text": prefix}, *parts]


def chat_parts_from_content(content: Any) -> list[dict[str, Any]]:
    if content is None:
        return []
    if isinstance(content, str):
        return [{"type": "text", "text": content}] if content else []
    if isinstance(content, list):
        parts: list[dict[str, Any]] = []
        for part in content:
            parts.extend(chat_parts_from_content(part))
        return parts
    if isinstance(content, dict):
        content_type = str(content.get("type") or "")
        if content_type in {"input_text", "output_text", "text"}:
            text = str(content.get("text", ""))
            return [{"type": "text", "text": text}] if text else []
        if content_type == "input_audio" or "input_audio" in content:
            audio = chat_audio_part(content)
            return [audio] if audio else []
        if content_type in {"input_image", "image_url"} or "image_url" in content:
            image = chat_image_part(content)
            return [image] if image else []
        if content_type == "computer_call_output":
            return chat_parts_from_content(content.get("output"))
        if "output" in content and _has_visual_content(content.get("output")):
            return chat_parts_from_content(content.get("output"))
        if "content" in content:
            return chat_parts_from_content(content["content"])
        if "text" in content:
            text = str(content.get("text", ""))
            return [{"type": "text", "text": text}] if text else []
        if content_type:
            raise ResponsesInputError(f"Unsupported Responses content part type: {content_type}")
    return []


def chat_image_part(part: dict[str, Any]) -> dict[str, Any] | None:
    url = image_url_from_part(part)
    if not url:
        return None
    image_url: dict[str, Any] = {"url": url}
    detail = part.get("detail") or part.get("image_detail")
    if detail:
        image_url["detail"] = detail
    return {"type": "image_url", "image_url": image_url}


def chat_audio_part(part: dict[str, Any]) -> dict[str, Any] | None:
    input_audio = part.get("input_audio")
    if isinstance(input_audio, dict):
        audio = dict(input_audio)
        normalize_audio_part(audio)
        return {"type": "input_audio", "input_audio": audio}
    if isinstance(input_audio, str):
        audio: dict[str, Any] = {"data": input_audio}
        if part.get("format"):
            audio["format"] = part["format"]
        normalize_audio_part(audio)
        return {"type": "input_audio", "input_audio": audio}
    data = part.get("data")
    if isinstance(data, str):
        audio = {"data": data}
        if part.get("format"):
            audio["format"] = part["format"]
        normalize_audio_part(audio)
        return {"type": "input_audio", "input_audio": audio}
    return None


def normalize_audio_part(audio: dict[str, Any]) -> None:
    data = audio.get("data")
    if not isinstance(data, str) or not data:
        raise ResponsesInputError("input_audio.data is required")
    explicit_format = str(audio.get("format") or "").lower()
    if explicit_format and explicit_format not in SUPPORTED_AUDIO_FORMATS:
        raise ResponsesInputError(f"Unsupported input_audio format: {explicit_format}")
    inferred_format = infer_audio_format_from_data_url(data)
    if inferred_format:
        if explicit_format and explicit_format != inferred_format:
            raise ResponsesInputError(
                f"input_audio format {explicit_format} does not match data URL media type {inferred_format}"
            )
        audio["format"] = inferred_format
    elif not explicit_format:
        raise ResponsesInputError("input_audio.format is required when data is not an audio data URL")
    validate_inline_media_size(data, "input_audio.data")


def infer_audio_format_from_data_url(data: str) -> str:
    if not data.startswith("data:"):
        return ""
    match = re.match(r"data:([^;,]+);base64,(.*)", data, re.DOTALL)
    if not match:
        raise ResponsesInputError("input_audio.data must be a base64 data URL when it starts with data:")
    media_type = match.group(1).lower()
    inferred = SUPPORTED_AUDIO_MIME_FORMATS.get(media_type)
    if not inferred:
        raise ResponsesInputError(f"Unsupported input_audio media type: {media_type}")
    return inferred


def validate_inline_media_size(data: str, field_name: str) -> None:
    if not data.startswith("data:"):
        return
    match = re.match(r"data:[^;,]+;base64,(.*)", data, re.DOTALL)
    if not match:
        return
    payload = "".join(match.group(1).split())
    padding = payload.count("=")
    decoded_size = max(0, (len(payload) * 3 // 4) - padding)
    if decoded_size > MAX_INLINE_MEDIA_BYTES:
        raise ResponsesInputError(f"{field_name} exceeds {MAX_INLINE_MEDIA_BYTES} bytes")


def image_url_from_part(part: dict[str, Any]) -> str:
    image_url = part.get("image_url")
    if isinstance(image_url, str):
        validate_inline_media_size(image_url, "image_url")
        return image_url
    if isinstance(image_url, dict) and isinstance(image_url.get("url"), str):
        url = image_url["url"]
        validate_inline_media_size(url, "image_url")
        return url
    for key in ("url", "file_url"):
        value = part.get(key)
        if isinstance(value, str):
            validate_inline_media_size(value, key)
            return value
    return ""


def has_visual_content(content: Any) -> bool:
    return any(part.get("type") == "image_url" for part in chat_parts_from_content(content))


def chat_content_to_anthropic_content(content: Any) -> str | list[dict[str, Any]]:
    blocks = chat_content_to_anthropic_blocks(content)
    if not any(block.get("type") == "image" for block in blocks):
        return "\n".join(block.get("text", "") for block in blocks if block.get("type") == "text")
    return blocks


def chat_content_to_anthropic_blocks(content: Any) -> list[dict[str, Any]]:
    blocks: list[dict[str, Any]] = []
    for part in chat_parts_from_content(content):
        if part.get("type") == "text":
            text = str(part.get("text", ""))
            if text:
                blocks.append({"type": "text", "text": text})
        elif part.get("type") == "image_url":
            block = chat_image_part_to_anthropic(part)
            if block:
                blocks.append(block)
    return blocks or [{"type": "text", "text": ""}]


def chat_image_part_to_anthropic(part: dict[str, Any]) -> dict[str, Any] | None:
    image_url = part.get("image_url")
    url = ""
    if isinstance(image_url, dict):
        url = str(image_url.get("url") or "")
    elif isinstance(image_url, str):
        url = image_url
    if not url:
        return None
    if url.startswith("data:"):
        match = re.match(r"data:([^;,]+);base64,(.*)", url, re.DOTALL)
        if not match:
            return None
        return {"type": "image", "source": {"type": "base64", "media_type": match.group(1), "data": match.group(2)}}
    return {"type": "image", "source": {"type": "url", "url": url}}


def content_to_text(content: Any) -> str:
    if isinstance(content, str):
        return content
    if isinstance(content, list):
        parts = []
        for part in content:
            if isinstance(part, str):
                parts.append(part)
            elif isinstance(part, dict):
                if part.get("type") in {"input_text", "output_text", "text"}:
                    parts.append(str(part.get("text", "")))
                elif part.get("type") == "input_audio" or "input_audio" in part:
                    parts.append("[audio]")
                elif part.get("type") in {"input_image", "image_url"} or "image_url" in part:
                    parts.append("[image]")
                elif "content" in part:
                    parts.append(content_to_text(part["content"]))
        return "\n".join(p for p in parts if p)
    if isinstance(content, dict):
        if content.get("type") == "input_audio" or "input_audio" in content:
            return "[audio]"
        if content.get("type") in {"input_image", "image_url"} or "image_url" in content:
            return "[image]"
        if "output" in content:
            return content_to_text(content.get("output"))
        if "text" in content:
            return str(content.get("text", ""))
        return str(content)
    return str(content)
