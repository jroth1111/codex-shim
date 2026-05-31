# Codex Shim — GitHub Audit Scope

Third-party LLM review of codex-shim fidelity against Codex Desktop.

**Repository:** https://github.com/jroth1111/codex-shim

## In repo (GitHub MCP / clone)

| Path | Contents |
|------|----------|
| `codex_shim/` | Shim Python source |
| `tests/` | Tests + `fixtures/desktop/` golden turns |
| `AUDIT_CONTRACTS.md` | Tier A vs BYOK wire contracts |
| `AUDIT_PROMPT.md` | Full audit instructions |
| `README.md` | Behavior, fidelity tiers, env vars |

## Not in repo (gitignored)

`codex-desktop-decompiled/` — Electron ASAR extract, Ghidra decomp, strings dump. Provide separately for full Desktop-grounded audit, or label Desktop-only findings as **DESKTOP-EVIDENCE-MISSING**.

## Read first

1. **`AUDIT_CONTRACTS.md`**
2. **`AUDIT_PROMPT.md`**
3. `README.md`
4. `codex_shim/server.py` + `codex_shim/translate.py`

## Verify after review

```bash
PYTHONPATH=. pytest tests/ -q
codex-shim probe fidelity
```
