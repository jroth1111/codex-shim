
void FUN_103a15228(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  
  lVar1 = *param_2 - 2;
  if (*param_2 < 2) {
    lVar1 = 7;
  }
                    /* WARNING: Could not recover jumptable at 0x000103a1527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_103a15280 + (ulong)(byte)(&UNK_108d9e371)[lVar1] * 4))();
  return;
}

