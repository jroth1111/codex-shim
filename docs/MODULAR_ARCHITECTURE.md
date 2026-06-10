# Modular Monolith Architecture

`codex_shim` is organized as a modular monolith. Runtime deployment remains one
process, but internal boundaries are explicit and CI-enforced by
`scripts/check_module_boundaries.py` (the checker is the registry: its
`MODULES` / `PLATFORM` / `ENTRYPOINTS` sets and the shrinking `LEGACY_DEBT`
ratchet are the source of truth).

Domain modules (import their own internals, other modules' top-level surface,
and the platform layer — nothing else):

- `gateway`: HTTP surface — app assembly + route table (`app.py`), `/v1`
  orchestration (`responses.py`), request validation (`handlers.py`), the
  `/v1/responses` websocket (`ws.py`), the `/v1/messages` bridge
  (`anthropic_messages.py`), host guarding, and the admin/picker endpoints.
- `routing`: model/provider resolution, the Auto Router (LLM-classifier body
  rewriting for `codex-auto`), inference context (mode/surface/prefetch),
  image gating, helper-model policy, subscription-catalog acquisition, and
  retry policy metadata.
- `providers`: provider transports as free functions over an injected
  `ProviderRuntime` (`openai_chat.py`, `anthropic.py`, `cursor_transports.py`),
  the `cursor/` and `chatgpt/` provider packages, the dispatch contract
  (`dispatcher.py`), HTTP/auth plumbing, and `cursor_agent/` (optional native
  Cursor envelope transport).
- `tools`: tool execution policy metadata.
- `sessions`: previous-response expansion, history persistence, compaction,
  delegate history filtering, and turn identity (`turn_metadata.py`).
- `governance`: per-request audit emission.
- `observability`: normalized stage/event telemetry, access logging, debug
  dumps, and parity-capture configuration.
- `persistence`: operational state abstraction, the JSONL job queue, and SQL
  migrations.
- `clientconfig`: Codex client configuration — catalog generation,
  `~/.codex/config.toml` management, picker actions, ASAR patch specs, and
  OpenCode Go model discovery. Never on the request path.
- `verification`: the shipped probe/harness/smoke surface behind
  `codex-shim probe`/`test` and the CI probe matrix.
- `translate`: protocol translation, including the streaming state machines
  (`streaming.py`).

Shared platform layer (importable by every module; imports only platform):
`settings`, `errors`, `capabilities`, `wire` (SSE/WS byte plumbing and the
`StreamSink` union), and the generated desktop contract files
(`desktop_contract`, `desktop_app_server_contract`, `desktop_validate`,
`desktop_decompiled`). `settings.PROJECT_ROOT` / `settings.RUNTIME_DIR` are the
single home for repo-root-anchored paths. Known residual inversion: settings'
lazy model-discovery imports of routing/providers, tracked in the checker's
`LEGACY_DEBT` ratchet.

Entrypoints / composition roots (may import any module surface): `cli/`
(command submodules re-exported through the package namespace), `server.py`
(ShimServer composition root and `-m codex_shim.server` daemon entry), and
`workers.py`.

## Service Extraction Criteria

Only consider service split when at least one is true:

1. **Ownership boundary**: a module requires independent release cadence and owner team.
2. **Throughput hotspot**: one module dominates CPU/latency and needs isolated scaling.
3. **Failure isolation need**: module failure should not impact core `/v1/responses` availability.

## Background Work Scope

Non-critical jobs may run in worker mode (`codex_shim/workers.py`) for tasks such as fixture ingestion and report generation. Synchronous request path behavior remains in-process.

## Cursor inference port (behavior + optional native wire)

Ported from Cursor Agent semantics (`reproduce-inference.mjs` + reconstructed `client.ts`):

| Module | Role |
|--------|------|
| `routing/inference_context.py` | CLI/agent/metadata modes, surface, `force_run_everything`, prefetch status |
| `routing/model_catalog.py` | Desktop model catalog snapshot + TTL cache (`persistence` key `model_catalog/desktop`) |
| `routing/model_resolution.py` | `auto` / `default` slug resolution with unavailable-exact guard |
| `tools/policy.py` | Tool policy evaluation before dispatch (image gate remains in `server.py`) |
| `providers/cursor_agent/` | Opt-in native envelope builder (`headers`, `envelope`, `transport`, `proto_wire`, `proto_decode`, `connect_framing`, `live_http1`, `live_run`, `catalog_rpc`, `decode`) |

**Per-model flag:** `useNativeTransport: true` on a Cursor provider row sets transport to `cursor-agent-grpc`. Default execution still delegates to the Cursor CLI unless:

- `CODEX_SHIM_CURSOR_AGENT_MOCK_URL` — POST envelope to a local recorder for structural validation
- `CODEX_SHIM_CURSOR_AGENT_LIVE=1` — HTTP/1 RunSSE+BidiAppend to `api2.cursor.sh` (requires `~/.codex/auth.json` or `CODEX_SHIM_CURSOR_AUTH_TOKEN`)
- `CODEX_SHIM_CURSOR_AUTH_TOKEN` — override bearer token for live native transport

**Parity:** `python3 scripts/cursor_inference_parity.py --self-check` (CI) or `--compare` when `CURSOR_SOURCE_ROOT` points at the Cursor source tree.
