/*
 * entry: 108aa9cbc
 * name: _mprotect
 * namespace: Global
 * cluster: subsystems/memory
 * confidence: medium
 * status: ok
 * inferred tags: memory
 * import evidence: <none>
 * string evidence: <none>
 * callers: 0
 * callees: 0
 * original file boundary: unknown
 */

void _mprotect(void)

{
                    /* WARNING: Could not recover jumptable at 0x000108aa9cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mprotect_10b61b3f8)();
  return;
}

