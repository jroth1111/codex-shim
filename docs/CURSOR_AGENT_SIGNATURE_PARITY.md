# Cursor Agent signature parity (shim → api2.cursor.sh)

How to make **codex-shim** native transport look like **cursor-agent** to Cursor’s remote endpoint (`https://api2.cursor.sh`).

## Two execution paths today

| Path | What hits api2.cursor.sh | Default for `cursor-auto` |
|------|--------------------------|---------------------------|
| **CLI delegate** | Nothing — shim spawns `cursor-agent` subprocess; the CLI owns auth + wire | **Yes** |
| **Native transport** | Shim posts Connect/protobuf directly when `CODEX_SHIM_CURSOR_AGENT_LIVE=1` | No (opt-in) |

Signature parity only matters for **native transport** or if you want mock-recorder validation without the CLI.

---

## Remote signature checklist

What Cursor’s edge sees on a live agent turn (HTTP/1 default):

### 1. HTTP headers (must match)

Built by `codex_shim/providers/cursor_agent/headers.py`:

| Header | cursor-agent | shim (native) | Fix if mismatched |
|--------|--------------|---------------|-------------------|
| `Authorization` | `Bearer <access_token>` from login | Same (`~/.codex/auth.json` or `CODEX_SHIM_CURSOR_AUTH_TOKEN`) | `codex login` |
| `x-cursor-client-version` | `cli-<cursor-agent --version>` e.g. `cli-2026.06.04-5fd875e` | Auto-resolved from `cursor-agent --version` (override: `CODEX_SHIM_CURSOR_CLIENT_VERSION`) | Upgrade cursor-agent or set env |
| `x-cursor-client-type` | `cli` (ACP sessions: `acp`) | From `InferenceContext.surface` | Forward Desktop header or set route transport |
| `x-request-id` / `x-original-request-id` | UUID per request | UUID per request | OK |
| `x-ghost-mode` | `true` | `true` | OK |
| `x-cursor-streaming` | `true` (HTTP/1 RunSSE leg) | Set when `transport=http1` | OK |
| `Content-Type` | `application/connect+proto` | Same on Connect legs | OK |
| `connect-protocol-version` | `1` | Same | OK |

**Verify locally:**

```bash
cursor-agent --version
PYTHONPATH=. python3 -c "
from codex_shim.providers.cursor_agent.headers import build_cursor_agent_headers, resolve_cursor_client_version
from codex_shim.routing import parse_inference_context
inf = parse_inference_context({'model':'auto'})
h = build_cursor_agent_headers(inference=inf, transport='http1')
print('resolved version:', resolve_cursor_client_version())
print('header version:', h['x-cursor-client-version'])
"
```

### 2. Wire sequence (HTTP/1)

cursor-agent and shim both use:

1. `POST /aiserver.v1.ServerConfigService/GetServerConfig` (force HTTP/1 bidi)
2. `POST /agent.v1.AgentService/RunSSE` (open SSE stream, Connect framing)
3. `POST /aiserver.v1.BidiService/BidiAppend` (hex-encoded `ClientEnvelope`)

Implementations: `live_http1.py` (shim), cursor-agent `run-agent` transport.

**HTTP/2 alternative:** single bidi `POST /agent.v1.AgentService/Run` — set `CODEX_SHIM_CURSOR_AGENT_TRANSPORT=http2` or model `nativeTransportMode: http2`.

### 3. Protobuf envelope (largest gap)

JSON skeleton: `build_run_request_skeleton()` in `envelope.py`.  
Binary encode: `encode_client_envelope_bytes()` in `proto_wire.py`.

| Field | cursor-agent | shim encode today | Action to match |
|-------|--------------|-------------------|-----------------|
| `userMessage.text` | User prompt (+ rules/context) | Delegate `WORKSPACE:` prompt via `prompt_text=` | Align prompt builder with CLI |
| `userMessage.messageId` | UUID | UUID | OK |
| `userMessage.modeProtoValue` | AgentMode enum | From `InferenceContext` | OK — run `scripts/cursor_inference_parity.py` |
| `userMessage.selectedContext.workspaceRoot` | Absolute workspace path | In JSON skeleton only — **not encoded in proto** | Extend `encode_user_message()` with selectedContext submessage |
| `userMessage.selectedContext.cursorRules` | Resolved `.cursor/rules` | Placeholder string in skeleton | Implement rules resolution + proto fields |
| `requestedModel.modelId` | Catalog id e.g. `auto` | Route slug / resolved id | Map Desktop model → Cursor catalog id (`model_resolution.py`) |
| `conversationId` / `conversationGroupId` | Stable per thread | Random UUID each turn | Persist from Desktop `thread_id` / session store |
| `mcpTools` | CLI tool surface | Empty | Omit or mirror CLI tool registration |
| Chained history | Prior turns in envelope | `conversationState.note` only | Expand `previous_response_id` into proto conversation state |
| `excludeWorkspaceContext` | `false` | Encoded when present | OK |

**Structural self-check (no Cursor source tree):**

```bash
PYTHONPATH=. python3 scripts/cursor_inference_parity.py --self-check --workspace /path/to/project
```

**Full diff vs Cursor source** (requires `reproduce-inference.mjs`):

```bash
CURSOR_SOURCE_ROOT=/path/to/cursor-checkout \
  PYTHONPATH=. python3 scripts/cursor_inference_parity.py --compare "your prompt"
```

### 4. Auth token source

Both use the same Codex/Cursor OAuth token file (`~/.codex/auth.json` → `tokens.access_token`). The shim must not mint its own token shape.

---

## Recommended parity workflow

1. **Capture golden request from cursor-agent** — mitmproxy outbound to `api2.cursor.sh` during a one-turn CLI run, or Cursor’s `reproduce-inference.mjs --source --json`.
2. **Dump shim prepared request** — enable `CODEX_SHIM_CURSOR_AGENT_MOCK_URL=http://127.0.0.1:RECORDER` and POST one Desktop turn; compare recorder JSON to golden.
3. **Close header drift** — keep `resolve_cursor_client_version()` in sync with installed CLI (automated on import).
4. **Close proto gaps in order** — `workspaceRoot` → `conversationId` from thread → `selectedContext` rules → history expansion → MCP tools.
5. **Enable live** — `CODEX_SHIM_CURSOR_AGENT_LIVE=1` on a canary model row with `useNativeTransport: true`; compare stream decode via `scripts/cursor_connect_decode.py`.

---

## Why CLI delegate skips signature parity

With default `cursor-auto`, upstream parity mode is **on by default**: the shim invokes
`cursor-agent` with plain user text, `--workspace`, optional `--resume <session_id>` (mapped
from Desktop `thread_id`), and matching client version headers. Set
`legacyDelegatePrompt: true` on the model row or `CODEX_SHIM_CURSOR_LEGACY_DELEGATE_PROMPT=1`
to restore the old `WORKSPACE:` / `USER:` delegate prompt.

Capture workflow:

```bash
# Requires mitmproxy + trusted mitm CA for Node (cursor-agent)
export CODEX_SHIM_CURSOR_UPSTREAM_CAPTURE_PROXY=http://127.0.0.1:8081
PYTHONPATH=. python3 scripts/capture_cursor_upstream_parity.py --prompt "Reply OK"
PYTHONPATH=. python3 scripts/capture_cursor_upstream_parity.py --two-turn --shared-session
```

Operator runbook: [CURSOR_UPSTREAM_PARITY_RUNBOOK.md](CURSOR_UPSTREAM_PARITY_RUNBOOK.md)

Previously: shim never spoke to api2.cursor.sh directly. Native transport still opt-in via
`CODEX_SHIM_CURSOR_AGENT_LIVE=1`.

---

## Related artifacts

| Artifact | Purpose |
|----------|---------|
| `scripts/cursor_inference_parity.py` | Header + mode + modelId structural diff |
| `scripts/compare_shim_cursor_flow.py` | CLI vs shim streaming behavior |
| `scripts/cursor_connect_decode.py` | Decode Connect frame captures |
| `codex_shim/providers/cursor_agent/headers.py` | Header builder + version resolve |
| `codex_shim/providers/cursor_agent/proto_wire.py` | Protobuf encoder (extend here) |
