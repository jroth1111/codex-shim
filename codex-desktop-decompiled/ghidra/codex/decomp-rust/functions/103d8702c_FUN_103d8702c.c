
void FUN_103d8702c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(ulong *)*param_1 + 0x7fffffffffffffff;
  if (*(ulong *)*param_1 < 0x8000000000000001) {
    lVar1 = 0x15;
  }
                    /* WARNING: Could not recover jumptable at 0x000103d87060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_103d87064 + (ulong)(byte)(&UNK_108dc0bfe)[lVar1] * 4))();
  return;
}

