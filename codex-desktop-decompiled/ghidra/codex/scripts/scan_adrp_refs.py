#!/usr/bin/env python3
"""Scan __text for ARM64 ADRP+ADD/LDR pairs referencing target string pages."""
from __future__ import annotations

import json
import struct
import sys
from pathlib import Path

TEXT_VM = 0x100004000
TEXT_OFF = 16384
TEXT_SIZE = 0x8AA41E4
STUB_CUTOFF = 0x108AA8000

SHIM_KW = (
    "backend-api",
    "chatgpt",
    "responses-api",
    "codex-rs",
    "app-server",
    "auth.openai",
    "/v1/",
    "rustls",
)


def sign_extend(value: int, bits: int) -> int:
    mask = 1 << (bits - 1)
    return (value & (mask - 1)) - (value & mask)


def decode_adrp(inst: int, pc: int) -> tuple[int, int] | None:
    if (inst & 0x9F000000) != 0x90000000:
        return None
    rd = inst & 0x1F
    immlo = (inst >> 29) & 0x3
    immhi = (inst >> 5) & 0x7FFFF
    imm21 = sign_extend((immhi << 2) | immlo, 21)
    page = (pc & ~0xFFF) + (imm21 << 12)
    return rd, page


def decode_add_imm(inst: int) -> tuple[int, int, int] | None:
    # ADD (immediate) 64-bit: sf=1, op=0
    if (inst & 0xFF800000) != 0x91000000:
        return None
    rd = inst & 0x1F
    rn = (inst >> 5) & 0x1F
    imm12 = (inst >> 10) & 0xFFF
    shift = (inst >> 22) & 0x3
    if shift == 1:
        imm12 <<= 12
    elif shift != 0:
        return None
    return rd, rn, imm12


def decode_ldr_imm64(inst: int) -> tuple[int, int, int] | None:
    # LDR (unsigned immediate, 64-bit)
    if (inst & 0xFFC00000) != 0xF9400000:
        return None
    rt = inst & 0x1F
    rn = (inst >> 5) & 0x1F
    imm12 = ((inst >> 10) & 0xFFF) << 3
    return rt, rn, imm12


def load_target_pages(strings_path: Path) -> dict[int, list[str]]:
    pages: dict[int, list[str]] = {}
    data = json.loads(strings_path.read_text())
    for rec in data:
        text = (rec.get("text") or "").lower()
        if not any(k in text for k in SHIM_KW):
            continue
        addr = int(rec["address"], 16)
        page = addr & ~0xFFF
        pages.setdefault(page, []).append(rec.get("text", "")[:80])
    return pages


def scan(binary: Path, target_pages: dict[int, list[str]], chunk: int = 16 * 1024 * 1024) -> dict[int, set[str]]:
    hits: dict[int, set[str]] = {}
    with binary.open("rb") as f:
        f.seek(TEXT_OFF)
        offset = 0
        while offset < TEXT_SIZE:
            block = f.read(min(chunk, TEXT_SIZE - offset))
            if not block:
                break
            base_pc = TEXT_VM + offset
            n = len(block) - (len(block) % 4)
            for i in range(0, n - 4, 4):
                pc = base_pc + i
                if pc >= STUB_CUTOFF:
                    break
                inst = struct.unpack_from("<I", block, i)[0]
                adrp = decode_adrp(inst, pc)
                if adrp is None:
                    continue
                rd, page = adrp
                nxt = struct.unpack_from("<I", block, i + 4)[0]
                target = None
                add = decode_add_imm(nxt)
                if add and add[1] == rd:
                    target = page + add[2]
                else:
                    ldr = decode_ldr_imm64(nxt)
                    if ldr and ldr[1] == rd:
                        target = page + ldr[2]
                if target is None:
                    if page in target_pages:
                        target = page
                    else:
                        continue
                page_hit = target & ~0xFFF
                if page_hit not in target_pages:
                    continue
                fn_addr = pc & ~0x3  # instruction address; Ghidra will find function start
                hits.setdefault(fn_addr, set()).update(target_pages[page_hit][:2])
            offset += len(block)
            if offset % (64 * 1024 * 1024) == 0:
                print(f"  scanned {offset // (1024*1024)} MiB...", file=sys.stderr)
    return hits


def main() -> None:
    root = Path(__file__).resolve().parents[1]
    binary = root.parent.parent / "native-binaries" / "codex"
    strings = root / "facts" / "strings.json"
    out_addrs = root / "plans" / "decomp_string_seeds.txt"
    out_report = root / "plans" / "string_ref_report.json"

    if not binary.is_file():
        sys.exit(f"missing binary: {binary}")
    if not strings.is_file():
        sys.exit(f"missing strings.json: {strings} (run continue_decomp.sh export first)")

    target_pages = load_target_pages(strings)
    print(f"target string pages: {len(target_pages)}", file=sys.stderr)
    hits = scan(binary, target_pages)
    print(f"code sites referencing shim strings: {len(hits)}", file=sys.stderr)

    # Skip already decompiled
    decomp: set[str] = set()
    func_dir = root / "decomp-rust" / "functions"
    if func_dir.is_dir():
        for p in func_dir.glob("*.c"):
            decomp.add(p.name.split("_", 1)[0].lower())

    addrs = sorted(hits.keys())
    new_addrs = [hex(a)[2:] for a in addrs if hex(a)[2:].lower() not in decomp]
    out_addrs.write_text("\n".join(new_addrs) + ("\n" if new_addrs else ""))

    seen: set[int] = set()
    deduped: list[str] = []
    for a in addrs:
        bucket = a >> 8
        if bucket in seen:
            continue
        seen.add(bucket)
        h = hex(a)[2:]
        if h.lower() not in decomp:
            deduped.append(h)
    (root / "plans" / "decomp_string_seeds_dedup.txt").write_text(
        "\n".join(deduped) + ("\n" if deduped else "")
    )

    report = [
        {
            "pc": hex(a),
            "strings": sorted(hits[a]),
        }
        for a in addrs[:500]
    ]
    out_report.write_text(json.dumps({"count": len(hits), "new": len(new_addrs), "samples": report}, indent=2))
    print(f"wrote {len(new_addrs)} new seeds -> {out_addrs}")


if __name__ == "__main__":
    main()
