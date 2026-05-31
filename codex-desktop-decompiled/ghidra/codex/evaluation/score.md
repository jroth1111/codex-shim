# Reconstruction score

- Program: `codex`
- Format: `Mac OS X Mach-O`
- Language mode: `objc`
- Score: `60 / 100`
- Level: `workable`

## Breakdown

- `decompilation`: `40`
- `naming`: `20`
- `evidence`: `0`
- `structure`: `10`
- `class_recovery`: `0`
- `next_pass_readiness`: `0`
- `obfuscation_penalty`: `-10`

## Coverage stats

- Functions: `797`
- Decompiled successfully: `150`
- Decompiled failed/partial: `0`
- Auto-named functions: `0`
- Functions with string evidence: `0`
- Functions with import evidence: `0`
- Class / RTTI signal count: `1035`
- High-confidence metadata suggestions: `0`

## Recommended next actions

- Binary looks packed or obfuscated. Separate the loader/unpacking layer before trusting pseudocode deeply.
- String references are sparse in recovered functions. Focus on log/error-heavy routines to bootstrap naming.
- Objective-C / Swift indicators are strong. Recover selectors, framework boundaries, and object lifecycle before renaming low-level helpers.
- Prioritize verification on sensitive surfaces first: fileio, threading, memory, crypto, process, compression.