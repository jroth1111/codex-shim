# Goal

Build `codex_shim` as a production-ready greenfield platform using a **modular monolith** architecture with strict boundaries, strong test coverage, and a clear path to split services later only when justified by scale or ownership.

## Target Architecture

### 1) Application Shape (Modular Monolith)
- One deployable backend codebase with explicit domain modules and interface boundaries.
- No cross-module imports of internals; integration happens through service interfaces/events.
- Shared platform capabilities (logging, auth, config, telemetry, retries) are centralized.

### 2) Core Modules
- `gateway`: OpenAI-compatible HTTP surface (`/v1/*`), request validation, auth, rate limits.
- `routing`: model/provider resolution, policy gates, fallback and retry orchestration.
- `providers`: provider adapters with normalized request/response contracts.
- `tools`: tool registry, tool execution policy, and local vs remote tool dispatch.
- `sessions`: conversation history, compaction, and context assembly.
- `governance`: audits, evidence rows, compliance checks, and policy enforcement.
- `observability`: structured logs, metrics, traces, and diagnostic snapshots.

### 3) Data Architecture
- Single primary relational store (PostgreSQL preferred) for durable operational state.
- File-backed artifacts for captures/fixtures/docs kept versioned in repo where appropriate.
- Schema migrations are mandatory and forward/backward-safe.
- Idempotency keys for externally visible write operations.

### 4) API and Contracts
- API-first: backward-compatible `/v1/responses` behavior as the stability anchor.
- Typed internal contracts for module interfaces and provider adapters.
- Contract generation/check scripts are required gates in CI.
- Versioned fixture corpus for regression-proof protocol behavior.

### 5) Async and Background Work
- Keep synchronous path simple; use async queue only for non-critical/long-running work
  (capture ingestion, summarization, report generation).
- Background jobs are retry-safe and idempotent.

### 6) Delivery and Operations
- Containerized local/dev/prod parity.
- CI gates: lint, type check, unit tests, integration tests, contract checks.
- Environments: local, staging, production with explicit config separation.
- Baseline SLOs and dashboards for latency, error rate, and provider/tool failures.

## Non-Goals (Initial Phase)
- Premature microservice split.
- Multi-database polyglot persistence without clear need.
- Event-driven redesign of all workflows before baseline stability.
- Large-scale infra complexity before reliability and contract correctness are proven.

## Implementation Phases

### Phase 1: Foundation
- Establish module boundaries and shared platform layer.
- Lock API contract and normalize provider adapter contract.
- Stand up CI contract/type/test gates.

### Phase 2: Reliability
- Add robust retries/timeouts/fallbacks in routing and providers.
- Harden session/history/compaction correctness with fixtures.
- Add structured observability across all module boundaries.

### Phase 3: Scale Readiness
- Introduce queue-backed background workers for heavy offline jobs.
- Add performance profiling and targeted optimizations.
- Define service extraction criteria (ownership, throughput, failure isolation).

## Acceptance Criteria
- Module boundaries are enforced and documented.
- `/v1` compatibility remains stable under automated contract tests.
- Provider/tool routing behavior is deterministic and covered by regression tests.
- Observability can answer: which provider was chosen, what tools ran, and why failures occurred.
- CI consistently enforces quality gates before merge.

### Upstream contract parity
- **Desktop Tier A (harness):** `pytest tests/test_upstream_harness_fixtures.py` passes on synthetic paired fixtures in CI.
- **Desktop Tier B (production):** Manual AppleScript capture via `scripts/capture_upstream_parity.py --tier-b --refresh-fixtures` produces `ok: true` diff and `tests/fixtures/upstream/.live-refreshed`; validated locally with `tests/test_upstream_live_fixtures.py`.
- **CLI Tier A (harness):** `pytest tests/test_upstream_cli_harness_fixtures.py` and `tests/test_upstream_cli_replay.py` pass on synthetic CLI fixtures in CI.
- **CLI Tier B (production):** Manual `codex exec` capture via `scripts/capture_cli_upstream_parity.py --tier-b --refresh-fixtures` produces `ok: true` diff and `tests/fixtures/upstream/.live-cli-refreshed`; validated locally with `tests/test_upstream_cli_live_fixtures.py`.
- Verification source of truth: [`scripts/capture_runbook.md`](scripts/capture_runbook.md) section D.

## Checks
Each command below must exit 0 before release:

- `python3 scripts/generate_desktop_contract.py --check`
- `python3 scripts/generate_desktop_app_server_contract.py --check`
- `PYTHONPATH=. python3 -m pytest tests/ -m "not live" -q`
