from __future__ import annotations

import os
import shutil
import subprocess
from pathlib import Path


def apply_postgres_migrations(migrations_dir: Path) -> int:
    dsn = os.environ.get("DATABASE_URL", "").strip()
    if not dsn:
        print("DATABASE_URL is not set; skipping migration apply.")
        return 0
    if shutil.which("psql") is None:
        print("psql is not installed or not on PATH; cannot apply migrations.")
        return 2
    sql_files = sorted(migrations_dir.glob("*.sql"))
    if not sql_files:
        print("No migrations found.")
        return 0
    for sql_file in sql_files:
        cmd = ["psql", dsn, "-v", "ON_ERROR_STOP=1", "-f", str(sql_file)]
        result = subprocess.run(cmd, check=False)
        if result.returncode != 0:
            return result.returncode
    print(f"Applied {len(sql_files)} migration(s).")
    return 0
