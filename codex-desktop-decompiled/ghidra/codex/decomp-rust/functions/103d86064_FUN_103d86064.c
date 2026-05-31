
void FUN_103d86064(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (-1 < lVar1) {
    lVar1 = 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x000103d860a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_103d860ac + (ulong)*(ushort *)(&UNK_108dc0bd2 + lVar1 * 2) * 4))();
  return;
}

