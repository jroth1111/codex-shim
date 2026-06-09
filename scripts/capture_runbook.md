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

For **shim → ChatGPT** upstream captures (Tier A), also set:

```bash
export CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP=1
export CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_PATH="$PWD/codex-desktop-decompiled/captures/debug/shim_to_chatgpt.json"
# Optional full bodies (trusted machine only):
# export CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_FULL=1
```

Use a **real Desktop WS turn** (body includes `client_metadata.x-codex-turn-metadata`) for upstream golden captures. S1 probe harness alone exercises legacy CLI-shaped passthrough and will not populate turn-metadata headers on the ChatGPT hop.

### D. Upstream parity (native Desktop golden vs shim outbound)

System-proxy MITM **does not** capture Desktop inference (`POST …/codex/responses` bypasses macOS HTTP proxy). Use the dump proxy instead: point Desktop’s `model_provider` at a local `/v1/responses` proxy that forwards to ChatGPT and writes the outbound shape.

#### Parity tiers

| Tier | Command flag | Proves |
|------|--------------|--------|
| **A — Harness** | `--tier-a` (default for paired capture) | Shim outbound matches native golden when `reference_capture` alignment is enabled |
| **B — Production** | `--tier-b` | Shim outbound matches native golden using promotion rules only (no reference copy) |

CI uses synthetic harness fixtures (`tests/fixtures/upstream/harness_*.json`). Live Desktop capture is **manual via AppleScript** and is not a PR gate.

One-shot A/B + diff:

```bash
# Tier A harness parity (reference alignment on shim leg)
PYTHONPATH=. python3.11 scripts/capture_upstream_parity.py --tier-a

# Tier B production parity (no reference alignment)
PYTHONPATH=. python3.11 scripts/capture_upstream_parity.py --tier-b --refresh-fixtures
```

After a green Tier B run with `--refresh-fixtures`, validate live fixtures locally:

```bash
PYTHONPATH=. python3.11 -m pytest tests/test_upstream_live_fixtures.py -q
```

#### CLI upstream parity (`codex exec`)

Use the same dump-proxy pattern, but drive turns with `codex exec` instead of AppleScript. CI gates synthetic CLI harness fixtures (`harness_cli_*.json`); live CLI capture is manual.

```bash
# Tier A harness parity (reference alignment on shim leg)
PYTHONPATH=. python3.11 scripts/capture_cli_upstream_parity.py --tier-a

# Tier B production parity (no reference alignment)
PYTHONPATH=. python3.11 scripts/capture_cli_upstream_parity.py --tier-b --refresh-fixtures

# Validate refreshed live CLI fixtures locally
PYTHONPATH=. python3.11 -m pytest tests/test_upstream_cli_live_fixtures.py -q

# Multi-scenario matrix (several live codex exec turns)
PYTHONPATH=. python3.11 scripts/capture_cli_upstream_scenarios.py --tier-b
# Artifacts: captures/debug/cli_scenarios/{scenario}_{native,shim,report}.json
# Summary: captures/debug/cli_scenarios/matrix_report.json
```

Artifacts:

| File | Meaning |
|------|---------|
| `captures/debug/cli_native_to_chatgpt.json` | Golden: native `codex exec` → ChatGPT (via dump proxy) |
| `captures/debug/cli_shim_to_chatgpt.json` | Candidate: `codex exec` → shim → ChatGPT |
| `tests/fixtures/upstream/.live-cli-refreshed` | Marker written after CLI Tier B fixture refresh |

Artifacts:

| File | Meaning |
|------|---------|
| `captures/debug/native_to_chatgpt.json` | Golden: embedded Desktop `codex` → ChatGPT (via dump proxy) |
| `captures/debug/shim_to_chatgpt.json` | Candidate: Desktop → shim → ChatGPT |
| `captures/debug/upstream_parity_report.json` | Normalized diff report (`headers_ok`, `body_ok`, `issue_categories`) |
| `captures/debug/staging/` | Timestamped capture attempts (promoted on success) |
| `tests/fixtures/upstream/.live-refreshed` | Marker written after Tier B fixture refresh |

Manual pieces:

```bash
# Native golden only
python3.11 scripts/upstream_dump_proxy.py --port 60002 \
  --dump-path codex-desktop-decompiled/captures/debug/native_to_chatgpt.json

# Shim upstream dump (env is inherited by `codex-shim start` after cli fix)
export CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP=1
export CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_FULL=1
export CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_PATH="$PWD/codex-desktop-decompiled/captures/debug/shim_to_chatgpt.json"
PYTHONPATH=. python3.11 -m codex_shim.cli enable

# Diff existing captures
python3.11 scripts/diff_upstream_capture.py \
  codex-desktop-decompiled/captures/debug/native_to_chatgpt.json \
  codex-desktop-decompiled/captures/debug/shim_to_chatgpt.json
```

Temporary Desktop config for native golden:

```toml
model = "gpt-5.5"
model_provider = "upstream_dump"

[model_providers.upstream_dump]
name = "Upstream Dump Proxy"
base_url = "http://127.0.0.1:60002/v1"
wire_api = "responses"
requires_openai_auth = true
```

Relaunch Codex Desktop after changing config. Desktop turns are driven with AppleScript:

```bash
python3.11 scripts/codex_desktop_control.py --relaunch "Reply with exactly: PARITY_SHIM_OK"
```

The orchestrator backs up and restores `~/.codex/config.toml` automatically.

Scenario matrix (manual):

```bash
PYTHONPATH=. python3.11 scripts/capture_upstream_scenarios.py --scenario-id parity_minimal
```

#### Troubleshooting

| Symptom | Likely cause | Mitigation |
|---------|--------------|------------|
| Only `prewarm` in jsonl, no `PARITY_OK` turn | Desktop did not complete the user turn | Relaunch Desktop; verify AppleScript focus; increase wait timeout |
| Shim dump missing, shim.log has no `[req]` | Desktop still on wrong `model_provider` | Ensure `--tier-*` run relaunches Desktop after `cli enable` |
| Agentic loop (growing `input` length) | Tools enabled on parity prompt | Use default parity capture (`CODEX_SHIM_PARITY_MODE=1` strips tools) |
| `model` mismatch (`gpt-5.4` vs `gpt-5.5`) | Desktop UI model not applied | Abort shim leg; fix model picker before retry |
| Tier B fails on `sandbox` / permissions | Desktop sends different inbound bodies per provider path | Documented limitation; Tier A verifies harness; Tier B needs equivalent Desktop inbound or future `sandboxPolicy` promotion |

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
| **S11** | Open a known project path in Desktop (e.g. `/Users/you/project`). New thread on a **Cursor BYOK** slug. Send one short user message. Capture `POST /v1/responses` body `metadata` and request headers. Confirm workspace/cwd field names (`metadata.cwd`, `working_directory`, `x-codex-cwd`, etc.) used by Desktop for thread cwd. |

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

## After S11 (workspace cwd confirmation)

1. Run **S11** in Desktop on a known project path (e.g. `fork-&-flag`).
2. Ingest HAR or read `CODEX_SHIM_DEBUG_DUMP` output; note which field carries thread cwd (`metadata.cwd`, `working_directory`, header, etc.).
3. If the winning field is not in [`codex_shim/routing/workspace.py`](../codex_shim/routing/workspace.py), add it and regenerate the contract.
4. Regenerate committed contract:
   ```bash
   python3 scripts/generate_desktop_contract.py --write
   ```
5. Update [`docs/DESKTOP_INFERENCE_MAP.md`](../docs/DESKTOP_INFERENCE_MAP.md) S11 evidence column with the confirmed field name.

Offline shim-wire regression (daemon must be running):

```bash
PYTHONPATH=. python3 scripts/record_s11_workspace_capture.py --slug cursor-auto --cwd /path/to/project
PYTHONPATH=. python3 scripts/cursor_delegate_verify.py --slug cursor-auto --cwd /path/to/project
```

## Manifest

Copy `captures/MANIFEST.template.json` to `captures/MANIFEST.json` on day 1. Each `ingest_har.py --append-manifest` adds a run record.
