# Modular Monolith Architecture

`codex_shim` is organized as a modular monolith. Runtime deployment remains one process, but internal boundaries are explicit:

- `gateway`: HTTP surface and request-context concerns.
- `routing`: model/provider resolution and retry policy metadata.
- `providers`: transport adapters and dispatch contracts.
- `tools`: tool execution policy metadata.
- `sessions`: previous-response expansion and history persistence.
- `governance`: per-request audit emission.
- `observability`: normalized stage/event telemetry.
- `persistence`: operational state abstraction and migration-ready storage scaffolding.

## Service Extraction Criteria

Only consider service split when at least one is true:

1. **Ownership boundary**: a module requires independent release cadence and owner team.
2. **Throughput hotspot**: one module dominates CPU/latency and needs isolated scaling.
3. **Failure isolation need**: module failure should not impact core `/v1/responses` availability.

## Background Work Scope

Non-critical jobs may run in worker mode (`codex_shim/workers.py`) for tasks such as fixture ingestion and report generation. Synchronous request path behavior remains in-process.
