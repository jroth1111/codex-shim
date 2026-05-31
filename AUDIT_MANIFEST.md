# Codex Shim + Desktop Decompilation — Source-Only Audit Bundle

For third-party LLM review of codex-shim fidelity against Codex Desktop.

**Source only** — no Mach-O binaries, no Ghidra project databases, no analysis cache logs.

## Layout

| Path | Contents |
|------|----------|
| `codex_shim_repo/` | codex-shim Python source, tests, fixtures, README |
| `codex-desktop-decompiled/` | Decompiled / recovered Desktop artifacts (see below) |
| `reverse-cursor-agent/` | Supplemental spawn-helper Ghidra decomp (small) |

## Decompiled source included

| Path | Description |
|------|-------------|
| `app-asar-extracted/` | Electron UI from `app.asar` (Vite bundles, webview assets) |
| `ghidra/codex/recovered-src/` | Recovered Rust-oriented source clusters |
| `ghidra/codex/decomp/` | Ghidra C decompilation (import stubs + early pass) |
| `ghidra/codex/decomp-rust/` | Ghidra C decompilation of Rust CLI functions |
| `native-binaries/codex.strings.txt` | Text strings dump from native CLI (reference only) |

## Read first

1. **`AUDIT_CONTRACTS.md`** — Tier A vs BYOK wire contracts (shim source index)
2. **`AUDIT_PROMPT.md`** — audit instructions and required output format
3. `codex_shim_repo/README.md`
4. `codex-desktop-decompiled/CODEX_SHIM_ARCHITECTURE.md`
5. `codex_shim_repo/codex_shim/server.py` + `translate.py`
4. `codex-desktop-decompiled/app-asar-extracted/` for Desktop client behavior
5. `codex-desktop-decompiled/ghidra/codex/decomp-rust/` for native CLI wire protocol

## Verify shim after review

```bash
cd codex_shim_repo
PYTHONPATH=. pytest tests/ -q
codex-shim probe fidelity
```
