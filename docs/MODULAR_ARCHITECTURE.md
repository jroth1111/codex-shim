# Modular Monolith Architecture

`codex_shim` is organized as a modular monolith. Runtime deployment remains one process, but internal boundaries are explicit:

- `gateway`: HTTP surface and request-context concerns.
- `routing`: model/provider resolution, inference context (mode/surface/prefetch), and retry policy metadata.
- `providers`: transport adapters and dispatch contracts (`cursor_agent/` optional native Cursor envelope transport).
- `tools`: tool execution policy metadata.
- `sessions`: previous-response expansion and history persistence.
- `governance`: per-request audit emission.
- `observability`: normalized stage/event telemetry.
- `persistence`: operational state abstraction and migration-ready storage scaffolding (model catalog prefetch cache under `model_catalog/desktop`).

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
