#!/usr/bin/env python3
from __future__ import annotations

import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from codex_shim.cli import _inspect_codex_desktop_bundles, _inspection_has_missing_patch  # noqa: E402


def main() -> int:
    workdir = ROOT / "codex-desktop-decompiled" / "app-asar-extracted"
    if not workdir.exists():
        print(f"Desktop bundle extraction not found: {workdir}", file=sys.stderr)
        return 1
    inspection = _inspect_codex_desktop_bundles(workdir)
    for report in inspection:
        path_note = f" ({report['path']})" if report.get("path") else ""
        print(f"{report['label']}: {report['status']}{path_note}")
    return 1 if _inspection_has_missing_patch(inspection) else 0


if __name__ == "__main__":
    raise SystemExit(main())
