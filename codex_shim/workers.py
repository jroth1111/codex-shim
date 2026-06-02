from __future__ import annotations

import argparse
import json
from pathlib import Path
import time
from typing import Sequence

from .persistence.job_queue import JsonlJobQueue


PROJECT_ROOT = Path(__file__).resolve().parents[1]
DEFAULT_QUEUE_PATH = PROJECT_ROOT / ".codex-shim" / "jobs.jsonl"
DEFAULT_RESULTS_PATH = PROJECT_ROOT / ".codex-shim" / "worker-results.jsonl"
CAPTURE_INGEST_PATH = PROJECT_ROOT / ".codex-shim" / "capture-ingest.jsonl"
SUMMARIES_PATH = PROJECT_ROOT / ".codex-shim" / "summaries.jsonl"
REPORTS_PATH = PROJECT_ROOT / ".codex-shim" / "reports.jsonl"

def _handle_job(job: dict) -> dict:
    job_type = str(job.get("type") or "unknown")
    payload = job.get("payload") or {}
    if job_type == "capture_ingest":
        CAPTURE_INGEST_PATH.parent.mkdir(parents=True, exist_ok=True)
        with CAPTURE_INGEST_PATH.open("a", encoding="utf-8") as f:
            f.write(json.dumps(payload, sort_keys=True) + "\n")
    elif job_type == "summarization":
        SUMMARIES_PATH.parent.mkdir(parents=True, exist_ok=True)
        text = str(payload.get("text") or "")
        summary = text[:160]
        with SUMMARIES_PATH.open("a", encoding="utf-8") as f:
            f.write(json.dumps({"summary": summary, "source_len": len(text)}, sort_keys=True) + "\n")
    elif job_type == "report_generation":
        REPORTS_PATH.parent.mkdir(parents=True, exist_ok=True)
        with REPORTS_PATH.open("a", encoding="utf-8") as f:
            f.write(json.dumps({"report": payload}, sort_keys=True) + "\n")
    return {
        "processed_at": int(time.time()),
        "type": job_type,
        "status": "processed",
        "payload": payload,
    }


def run_worker_once(queue_path: Path = DEFAULT_QUEUE_PATH, results_path: Path = DEFAULT_RESULTS_PATH) -> int:
    queue = JsonlJobQueue(queue_path)
    jobs = queue.pop_all()
    if not jobs:
        return 0
    results_path.parent.mkdir(parents=True, exist_ok=True)
    with results_path.open("a", encoding="utf-8") as f:
        for job in jobs:
            f.write(json.dumps(_handle_job(job), sort_keys=True) + "\n")
    return 0


def enqueue_job(job_type: str, payload: dict, queue_path: Path = DEFAULT_QUEUE_PATH) -> int:
    queue = JsonlJobQueue(queue_path)
    queue.enqueue(job_type, payload)
    return 0


def main(argv: Sequence[str] | None = None) -> int:
    parser = argparse.ArgumentParser(prog="codex-shim-worker")
    sub = parser.add_subparsers(dest="command", required=True)
    run_parser = sub.add_parser("run", help="Run worker jobs from queue.")
    run_parser.add_argument("--once", action="store_true", help="Run one worker cycle and exit.")
    enqueue_parser = sub.add_parser("enqueue", help="Queue a background job.")
    enqueue_parser.add_argument("job_type")
    enqueue_parser.add_argument("--payload", default="{}", help="JSON payload for the queued job.")
    args = parser.parse_args(list(argv) if argv is not None else None)
    if args.command == "run":
        return run_worker_once()
    if args.command == "enqueue":
        payload = json.loads(args.payload)
        return enqueue_job(args.job_type, payload)
    return 2


if __name__ == "__main__":
    raise SystemExit(main())
