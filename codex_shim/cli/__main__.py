"""`python -m codex_shim.cli` entry (bin/codex-shim and launchers exec this)."""
from . import _entrypoint

raise SystemExit(_entrypoint())
