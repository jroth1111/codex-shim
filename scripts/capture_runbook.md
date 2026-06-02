# Codex Desktop → shim capture runbook

Local-only. Do not commit raw HAR files (they may contain tokens). Use `codex-desktop-decompiled/captures/`.

## Prerequisites

1. Desktop **26.527+** with shim catalog enabled (`codex-shim enable`).
2. Shim running: `codex-shim start` (default `127.0.0.1:8765`).
3. Auth for Tier A: `~/.codex/auth.json` with valid ChatGPT tokens.
4. BYOK models visible in `~/.codex-shim/models.json` for S5–S10.

## Environment (recommended per session)

```bash
export CODEX_SHIM_DEBUG_DUMP=1
export CODEX_SHIM_DEBUG_DUMP_PATH="$PWD/codex-desktop-decompiled/captures/debug/last_request.json"
# Optional full bodies (trusted machine only):
# export CODEX_SHIM_DEBUG_DUMP_FULL=1
```

## Capture tools (pick one)

### A. Proxyman / Charles (macOS)

1. Enable macOS proxy; filter `127.0.0.1:8765`.
2. Run scenario in Codex Desktop.
3. Export HAR → `codex-desktop-decompiled/captures/raw/YYYY-MM-DD/S{n}_description.har`.

### B. mitmproxy

```bash
mitmproxy --listen-port 8080
# Only if Desktop is configured to use HTTP proxy; loopback shim traffic may bypass proxy.
# Prefer Proxyman filter on 8765 for shim-local captures.
```

### C. Shim-only (no HAR)

Use `CODEX_SHIM_DEBUG_DUMP=1` plus shim access log. Enough for **HTTP body keys** and routing, not for app-server RPC timing.

## Per-scenario steps

| ID | Steps |
|----|--------|
| **S1** | New project/thread. Model **gpt-5.5** (ChatGPT). One short user message. Save HAR. |
| **S2** | Same thread. Second user message (no new thread). Save HAR. |
| **S3** | Prompt that triggers web search (e.g. “search the web for …”). Save HAR. |
| **S4** | Trigger compact (UI or long thread). Capture `POST /v1/responses/compact`. |
| **S5** | New thread. Pick visible **BYOK** OpenAI-shaped slug. One message. |
| **S6** | Same BYOK thread. Second message. Note `previous_response_id` in request if present. |
| **S7** | New thread. **Anthropic** slug if configured. Message with tool use if offered. |
| **S8** | BYOK thread with streaming; capture WebSocket to `GET /v1/responses` if Desktop uses WS. |
| **S9** | BYOK model with image generation enabled; request image. |
| **S10** | BYOK turn that invokes local shell tool; capture request + follow-up `input` items. |

## Shim-wire captures (no Desktop UI)

When HAR is inconvenient, record HTTP to the shim (same JSONL layout, `source=shim-wire`):

```bash
PYTHONPATH=. python3 scripts/record_shim_wire_captures.py
```

## After each capture

```bash
python3 scripts/ingest_har.py \
  codex-desktop-decompiled/captures/raw/YYYY-MM-DD/S1_new_thread.har \
  --scenario S1 \
  --append-manifest

python3 scripts/diff_captures.py \
  codex-desktop-decompiled/captures/parsed/S1_*.jsonl \
  codex-desktop-decompiled/captures/parsed/S2_*.jsonl
```

Update `codex-desktop-decompiled/RE_SCENARIO_MATRIX.md` status column.

## Manifest

Copy `captures/MANIFEST.template.json` to `captures/MANIFEST.json` on day 1. Each `ingest_har.py --append-manifest` adds a run record.
