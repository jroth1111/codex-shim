# Downstream parity audit (origin feature branches → fork)

Audit date: 2026-06-03  
Fork: `jroth1111/codex-shim` (`main`)  
Upstream repo: `0xSero/codex-shim` (`origin`) — **not merged**; feature branches only.

## Scope

| Source | Commit | Status |
|--------|--------|--------|
| `origin/feat/compact-native-tools` | `421a8ef` | Already present on fork |
| `origin/feat/model-picker-web-ui` | `e9e368a` | Already present on fork |
| `origin/fix/streaming-usage-compaction-main` | `5deecde` | Already present on fork |
| `origin/fix/visual-feedback-passthrough` | `70e7836` | Already present on fork |
| `origin/main` (Anthropic header, Windows launcher, Auto Router, Composer passthrough, OpenCode Go, Anthropic Messages bridge) | — | **Ported** on local `main` (adapted into modular layout) |

Raw cherry-picks of the four commits are **not** recommended: they target pre-refactor paths (`codex_shim/translate.py`, monolithic `server.py`). The fork absorbed the same behavior via the modular refactor and conformance roadmap.

## Behavior matrix

### `421a8ef` — compact + native tool fallbacks

| Behavior | Fork location |
|----------|----------------|
| `POST /v1/responses/compact` | [`codex_shim/server.py`](../codex_shim/server.py), [`codex_shim/gateway/handlers.py`](../codex_shim/gateway/handlers.py) |
| ChatGPT native compact passthrough | [`codex_shim/passthrough.py`](../codex_shim/passthrough.py), [`codex_shim/compact.py`](../codex_shim/compact.py) |
| BYOK emulated compact | [`codex_shim/compact.py`](../codex_shim/compact.py) |
| Native tool → function fallbacks | [`codex_shim/translate/tool_schema.py`](../codex_shim/translate/tool_schema.py) |

Regression tests: `tests/test_server.py` (compact routes), `tests/translate/test_tool_schema.py` (`test_native_responses_tools_*`).

### `e9e368a` — model picker web UI

| Behavior | Fork location |
|----------|----------------|
| `GET /picker` | [`codex_shim/server.py`](../codex_shim/server.py) + [`codex_shim/picker.py`](../codex_shim/picker.py) |
| `GET /api/models` | [`codex_shim/server.py`](../codex_shim/server.py) (`include_unavailable` query supported) |
| `POST /api/switch` + optional restart | [`codex_shim/server.py`](../codex_shim/server.py), [`codex_shim/picker.py`](../codex_shim/picker.py) |

Regression tests: `tests/test_server.py` (`test_picker_*`, `test_api_models_*`, `test_switch_model_*`).

### `5deecde` — streaming usage on `response.completed`

| Behavior | Fork location |
|----------|----------------|
| OpenAI chat stream usage | [`codex_shim/streaming.py`](../codex_shim/streaming.py) (`write_chat_delta`, `normalize_responses_usage`) |
| Anthropic `message_delta` usage | [`codex_shim/streaming.py`](../codex_shim/streaming.py) |
| Usage on final `response.completed` | [`codex_shim/streaming.py`](../codex_shim/streaming.py) `finish()` |

Regression tests: `tests/test_server.py` (`test_streaming_openai_chat_response_completed_includes_usage`, `test_streaming_anthropic_response_completed_includes_usage`).

### `70e7836` — BYOK visual feedback

| Behavior | Fork location |
|----------|----------------|
| `input_image` / multimodal user content | [`codex_shim/translate/content.py`](../codex_shim/translate/content.py), [`codex_shim/translate/input.py`](../codex_shim/translate/input.py) |
| `computer_call_output` screenshots | [`codex_shim/translate/input.py`](../codex_shim/translate/input.py) |
| Anthropic image blocks for visual feedback | [`codex_shim/translate/anthropic.py`](../codex_shim/translate/anthropic.py) |

Regression tests: `tests/translate/test_content.py`, `tests/translate/test_anthropic.py`.

## Verification command

```bash
pytest -m "not live" \
  tests/test_server.py::test_responses_compact_routes_to_openai_chat_and_returns_compacted_window \
  tests/test_server.py::test_streaming_openai_chat_response_completed_includes_usage \
  tests/test_server.py::test_streaming_anthropic_response_completed_includes_usage \
  tests/test_server.py::test_picker_page_served_at_picker \
  tests/translate/test_tool_schema.py \
  tests/translate/test_content.py \
  tests/translate/test_anthropic.py
```

## Follow-up (optional, not part of this audit)

- **Composer subscription passthrough** (`composer-2-5` on `origin/main`) — separate fork-only feature if desired; adapt concepts into `cursor_cli` / settings, do not merge `origin/main` wholesale.
