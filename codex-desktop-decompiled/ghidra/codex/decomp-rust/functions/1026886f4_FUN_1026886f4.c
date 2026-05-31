
void FUN_1026886f4(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (-1 < lVar1) {
    lVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000102688730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_102688734 + (ulong)*(ushort *)(&UNK_108d32cf0 + lVar1 * 2) * 4))();
  return;
}

