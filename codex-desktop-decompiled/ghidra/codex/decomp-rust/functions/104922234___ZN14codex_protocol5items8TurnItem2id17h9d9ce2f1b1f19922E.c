
void __ZN14codex_protocol5items8TurnItem2id17h9d9ce2f1b1f19922E(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar1 = 9;
  }
                    /* WARNING: Could not recover jumptable at 0x000104922270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_104922274 + (ulong)(byte)(&UNK_108e51cb6)[uVar1] * 4))();
  return;
}

