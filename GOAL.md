# Goal

## Goal

Complete the **12-day Codex Desktop inference & tools RE plan**: produce evidence-backed documentation of how Desktop routes inference (app-server → `model_provider` → shim `/v1/responses`), which tools run locally vs on the wire, and how history/compaction behave—then fold proven findings into generated contracts, audit rows, and [`docs/DESKTOP_INFERENCE_MAP.md`](docs/DESKTOP_INFERENCE_MAP.md).

**Desktop pin:** 26.527.31326 · **Shim:** `http://127.0.0.1:8765/v1`

## Non-goals

- Full Rust decompilation of the ~185 MB `codex` binary
- Windows MSIX / non-macOS Desktop builds
- Deep `codex_chronicle` or screen-memory RE
- Publishing or redistributing extracted Desktop sources
- Changing shim runtime behavior unless capture-backed contract drift requires it

## Scope

Paths the agent may change (one per line):

- `docs/`
- `scripts/`
- `codex_shim/desktop_contract.py`
- `codex_shim/desktop_app_server_contract.py`
- `tests/`
- `AUDIT_CONTRACTS.md`
- `README.md`
- `CONTRIBUTING.md`
- `.github/workflows/ci.yml`
- `codex-desktop-decompiled/` (gitignored artifacts only: captures, matrices, RE notes—not committed bulk)

## Work units

### day1-2-baseline
Baseline, contracts, capture harness

- scope: `scripts/`, `docs/DESKTOP_INFERENCE_MAP.md`, `codex_shim/desktop_contract.py`, `codex_shim/desktop_app_server_contract.py`
- role: implement
- acceptance: Days 1–2 artifacts exist; contract generators pass `--check`; offline pytest green

### day3-5-captures
Live HAR corpus S1–S10

- scope: `codex-desktop-decompiled/captures/`, `scripts/ingest_har.py`, `scripts/diff_captures.py`
- role: implement
- acceptance: `captures/MANIFEST.json` lists parsed runs for applicable S1–S10; `RE_SCENARIO_MATRIX.md` statuses not `pending`

### day6-7-app-server
App-server index and HTTP map

- scope: `scripts/generate_app_server_method_index.py`, `codex-desktop-decompiled/APP_SERVER_TO_HTTP.md`
- role: implement
- acceptance: `extracted/app_server_method_index.json` present; HTTP map cites capture per tier family

### day8-10-native
Ghidra + tool execution matrix

- scope: `codex-desktop-decompiled/ghidra/codex/`, `scripts/summarize_ghidra_shim_hits.py`
- role: implement
- acceptance: `shim_hits.md` updated; `TOOL_EXECUTION_MATRIX.md` draft complete

### day11-contracts
Fixtures, audit, CI

- scope: `tests/fixtures/desktop/captured/`, `AUDIT_CONTRACTS.md`
- role: implement
- acceptance: New capture fixtures; audit rows cite CAPTURE/STRINGS/GHIDRA; CI checks pass

### day12-synthesis
Finalize inference map

- scope: `docs/DESKTOP_INFERENCE_MAP.md`
- role: verify
- acceptance: No `pending` plan rows; sections tagged with evidence types; upgrade checklist present

## Checks

Machine-verified stopping condition. Each line is a shell command that must exit 0:

- `python3 scripts/generate_desktop_contract.py --check`
- `python3 scripts/generate_desktop_app_server_contract.py --check`
- `PYTHONPATH=. python3 -m pytest tests/ -m "not live" -q`
- `test -f scripts/capture_runbook.md && test -f scripts/ingest_har.py && test -f scripts/diff_captures.py`
- `test -f docs/DESKTOP_INFERENCE_MAP.md`
- `test -f codex-desktop-decompiled/RE_SCENARIO_MATRIX.md`
- `test -f codex-desktop-decompiled/extracted/app_server_method_index.json`
- `python3 -c "import json,sys; m=json.load(open('codex-desktop-decompiled/captures/MANIFEST.json')); runs=[r for r in m.get('runs',[]) if r.get('parsed') or r.get('har')]; sys.exit(0 if len(runs)>=6 else 1)"`
- `test -f codex-desktop-decompiled/APP_SERVER_TO_HTTP.md`
- `test -f codex-desktop-decompiled/TOOL_EXECUTION_MATRIX.md`
- `test -f codex-desktop-decompiled/ghidra/codex/shim_hits.md`
- `! grep -q '| pending |' docs/DESKTOP_INFERENCE_MAP.md`

## Forbidden proxies

Do not treat these as done without the checks above:

- Contract generators pass but no Desktop HAR captures in `captures/MANIFEST.json`
- Shim `probe` logs only (not a substitute for S1–S10 UI captures)
- `DESKTOP_INFERENCE_MAP.md` still lists plan days as `pending`
- Ghidra decomp file count growth without updated `shim_hits.md` summaries
- Agent narrative in PROGRESS without fresh `ingest_har` / `diff_captures` command output
