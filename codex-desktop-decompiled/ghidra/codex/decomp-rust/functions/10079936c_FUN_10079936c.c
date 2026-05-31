
void FUN_10079936c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (-1 < lVar1) {
    lVar1 = 9;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007993c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1007993c4 + (ulong)*(ushort *)(&UNK_108c9b298 + lVar1 * 2) * 4))();
  return;
}

