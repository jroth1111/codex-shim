# Codex Shim — GitHub Audit Scope

Third-party LLM review of codex-shim fidelity against Codex Desktop.

**Repository:** https://github.com/jroth1111/codex-shim

## In repo

| Path | Contents |
|------|----------|
| `codex_shim/` | Shim Python source |
| `tests/` | Tests + `fixtures/desktop/` golden turns |
| `codex_shim/desktop_contract.py` | Generated Desktop protocol constants (committed) |
| `AUDIT_CONTRACTS.md` | Tier A vs BYOK wire contracts |
| `AUDIT_PROMPT.md` | Full audit instructions |
| `README.md` | Behavior, fidelity tiers, env vars |

## Optional local Desktop RE tree (not in git)

Maintainers may keep reverse-engineering artifacts under `codex-desktop-decompiled/` (gitignored).
Set `CODEX_DESKTOP_DECOMPILED_DIR` if the tree lives elsewhere.

| Path (under RE root) | Description |
|------|-------------|
| `app-asar-extracted/` | Electron UI from Codex.app `app.asar` |
| `ghidra/codex/decomp-rust/` | Ghidra pseudo-C decompilation of Rust CLI |
| `ghidra/codex/recovered-src/` | Recovered source clusters |
| `ghidra/codex/decomp/` | Early decomp pass |
| `native-binaries/codex.strings.txt` | Strings dump from native CLI |
| `CODEX_SHIM_ARCHITECTURE.md` | Integration map |

Mach-O binaries, Ghidra project DBs, large `facts/` exports, and analysis logs stay local
(see `codex-desktop-decompiled/.gitignore` when the tree is present).

Auditors **without** the RE tree should rely on `codex_shim/desktop_contract.py`,
`tests/fixtures/desktop/`, and shim source; mark Desktop-specific rows **DESKTOP-EVIDENCE-MISSING**
when primary client source cannot be verified.

## Read first

1. **`AUDIT_CONTRACTS.md`**
2. **`AUDIT_PROMPT.md`**
3. `README.md`
4. `codex_shim/desktop_contract.py` (+ local `CODEX_SHIM_ARCHITECTURE.md` if available)
5. `codex_shim/server.py` + `codex_shim/translate.py`

## Verify after review

```bash
PYTHONPATH=. pytest tests/ -q
codex-shim probe fidelity
```
