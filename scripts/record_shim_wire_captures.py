#!/usr/bin/env python3
"""Record shim wire captures (JSONL) for RE scenarios when Desktop HAR is unavailable.

These document HTTP to the shim, not app-server RPC timing. Label source as shim-wire.
"""

from __future__ import annotations

import argparse
import json
import sys
from datetime import datetime, timezone
from pathlib import Path
from typing import Any

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from codex_shim.desktop_decompiled import desktop_decompiled_root  # noqa: E402
from codex_shim.integration_harness import (  # noqa: E402
    compact_url,
    default_port,
    load_desktop_fixture,
    post_json,
    post_json_streaming,
    require_shim,
    responses_url,
    tier_a_compact_body,
    tier_a_passthrough_body,
    tier_a_tool_heavy_body,
)
from codex_shim.settings import (  # noqa: E402
    CHATGPT_MODEL_SLUG,
    ModelSettings,
    chatgpt_passthrough_available,
)

DEFAULT_SCENARIOS = ("S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "S10")


def _record(
    *,
    scenario: str,
    method: str,
    url: str,
    body: dict[str, Any],
    response: dict[str, Any] | None = None,
    status: int = 200,
) -> dict[str, Any]:
    return {
        "scenario": scenario,
        "source": "shim-wire",
        "ingested_at": datetime.now(timezone.utc).isoformat(),
        "method": method,
        "url": url,
        "path": "/v1/" + url.split("/v1/", 1)[-1] if "/v1/" in url else url,
        "request_body": body,
        "status": status,
        "response_body": response,
    }


def _write_jsonl(path: Path, records: list[dict[str, Any]]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8") as handle:
        for record in records:
            handle.write(json.dumps(record, default=str) + "\n")


def _append_manifest(entries: list[dict[str, Any]]) -> None:
    manifest_path = desktop_decompiled_root() / "captures" / "MANIFEST.json"
    if manifest_path.is_file():
        manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    else:
        manifest = {"runs": []}
    for entry in entries:
        manifest.setdefault("runs", []).append(entry)
    manifest_path.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")


def record_all(port: int | None = None, scenarios: tuple[str, ...] | None = None) -> list[Path]:
    port = port or default_port()
    require_shim(port)
    settings = ModelSettings()
    visible = settings.visible_models()
    byok = next((row for row in visible if not row.is_chatgpt), None)
    anthropic = next((row for row in visible if row.is_anthropic), None)
    want = set(scenarios or DEFAULT_SCENARIOS)
    out_dir = desktop_decompiled_root() / "captures" / "parsed"
    written: list[Path] = []
    manifest_entries: list[dict[str, Any]] = []

    def want_scenario(scenario: str) -> bool:
        return scenario in want

    def save(scenario: str, records: list[dict[str, Any]]) -> None:
        path = out_dir / f"{scenario}_shim_wire.jsonl"
        _write_jsonl(path, records)
        written.append(path)
        manifest_entries.append(
            {
                "type": "shim-wire",
                "scenario": scenario,
                "parsed": str(path),
                "entries": len(records),
                "status": "recorded",
            }
        )

    # S1 Tier A single turn
    if chatgpt_passthrough_available():
        if want_scenario("S1"):
            body = tier_a_passthrough_body(user_text="Reply with exactly: OK")
            body["stream"] = True
            completed = post_json_streaming(
                responses_url(port),
                body,
                headers={"session_id": "re-s1"},
                label="RE S1",
            )
            save("S1", [_record(scenario="S1", method="POST", url=responses_url(port), body=body, response=completed)])

        if want_scenario("S2"):
            body2 = tier_a_tool_heavy_body()
            body2["stream"] = True
            resp2 = post_json_streaming(responses_url(port), body2, headers={"session_id": "re-s2"}, label="RE S2")
            save("S2", [_record(scenario="S2", method="POST", url=responses_url(port), body=body2, response=resp2)])

        if want_scenario("S3"):
            ws_fixture = load_desktop_fixture("web_search_turn.json")
            body3 = {
                "model": CHATGPT_MODEL_SLUG,
                "input": list(ws_fixture.get("input") or [])
                + [{"role": "user", "content": [{"type": "input_text", "text": "continue"}]}],
                "stream": True,
            }
            resp3 = post_json_streaming(responses_url(port), body3, headers={"session_id": "re-s3"}, label="RE S3")
            save("S3", [_record(scenario="S3", method="POST", url=responses_url(port), body=body3, response=resp3)])

        if want_scenario("S4"):
            cbody = tier_a_compact_body(user_text="Summarize prior context for handoff.")
            cresp = post_json(compact_url(port), cbody, headers={"session_id": "re-s4"}, label="RE S4")
            save("S4", [_record(scenario="S4", method="POST", url=compact_url(port), body=cbody, response=cresp)])

    if byok is not None:
        if want_scenario("S5"):
            b5 = {
                "model": byok.slug,
                "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: OK"}]}],
                "stream": False,
            }
            r5 = post_json(responses_url(port), b5, headers={"session_id": "re-s5"}, label="RE S5")
            save("S5", [_record(scenario="S5", method="POST", url=responses_url(port), body=b5, response=r5)])

        if want_scenario("S6"):
            b6a = {
                "model": byok.slug,
                "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: OK6a"}]}],
                "stream": False,
            }
            r6a = post_json(responses_url(port), b6a, headers={"session_id": "re-s6"}, label="RE S6a")
            b6b = {
                "model": byok.slug,
                "previous_response_id": r6a.get("id"),
                "input": [{"role": "user", "content": [{"type": "input_text", "text": "ack"}]}],
                "stream": False,
            }
            r6b = post_json(responses_url(port), b6b, headers={"session_id": "re-s6"}, label="RE S6b")
            save(
                "S6",
                [
                    _record(scenario="S6", method="POST", url=responses_url(port), body=b6a, response=r6a),
                    _record(scenario="S6", method="POST", url=responses_url(port), body=b6b, response=r6b),
                ],
            )

        if want_scenario("S8"):
            b8 = {
                "model": byok.slug,
                "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: OK"}]}],
                "stream": True,
            }
            r8 = post_json_streaming(responses_url(port), b8, headers={"session_id": "re-s8"}, label="RE S8")
            save("S8", [_record(scenario="S8", method="POST", url=responses_url(port), body=b8, response=r8)])

        if want_scenario("S9"):
            ig_fixture = load_desktop_fixture("image_gen_turn.json")
            ig_input = list(ig_fixture.get("input") or []) + [
                {"role": "user", "content": [{"type": "input_text", "text": "continue"}]},
            ]
            if byok.capabilities.supports_image_generation:
                b9 = {"model": byok.slug, "input": ig_input, "stream": False}
                r9 = post_json(responses_url(port), b9, headers={"session_id": "re-s9"}, label="RE S9")
                save("S9", [_record(scenario="S9", method="POST", url=responses_url(port), body=b9, response=r9)])
            elif chatgpt_passthrough_available():
                b9 = {"model": CHATGPT_MODEL_SLUG, "input": ig_input, "stream": True}
                r9 = post_json_streaming(
                    responses_url(port), b9, headers={"session_id": "re-s9"}, label="RE S9 Tier A"
                )
                save("S9", [_record(scenario="S9", method="POST", url=responses_url(port), body=b9, response=r9)])

        if want_scenario("S10"):
            b10 = {
                "model": byok.slug,
                "input": [
                    {"type": "local_shell_call", "call_id": "call_shell", "action": {"command": "echo probe"}},
                    {"type": "function_call_output", "call_id": "call_shell", "output": "probe"},
                    {"role": "user", "content": [{"type": "input_text", "text": "continue"}]},
                ],
                "stream": False,
            }
            r10 = post_json(responses_url(port), b10, headers={"session_id": "re-s10"}, label="RE S10")
            save("S10", [_record(scenario="S10", method="POST", url=responses_url(port), body=b10, response=r10)])

    if anthropic is not None and want_scenario("S7"):
        b7 = {
            "model": anthropic.slug,
            "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: OK"}]}],
            "stream": False,
        }
        r7 = post_json(responses_url(port), b7, headers={"session_id": "re-s7"}, label="RE S7")
        save("S7", [_record(scenario="S7", method="POST", url=responses_url(port), body=b7, response=r7)])

    _append_manifest(manifest_entries)
    return written


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--port", type=int, default=None)
    parser.add_argument(
        "--scenarios",
        default="",
        help="Comma-separated scenario IDs (default: all). Example: S3,S7,S9,S10",
    )
    args = parser.parse_args(argv)
    scenarios: tuple[str, ...] | None = None
    if args.scenarios.strip():
        scenarios = tuple(part.strip().upper() for part in args.scenarios.split(",") if part.strip())
    paths = record_all(args.port, scenarios=scenarios)
    if not paths:
        print("no captures recorded (shim down or no auth/BYOK?)", file=sys.stderr)
        return 1
    for path in paths:
        print(f"wrote {path}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
