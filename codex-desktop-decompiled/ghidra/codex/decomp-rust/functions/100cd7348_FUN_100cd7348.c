
void FUN_100cd7348(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = ((ulong)(param_1[3] - param_1[1]) >> 6) * 0x6db6db6db6db6db7 + 1;
  lVar1 = param_1[1];
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    FUN_100e40940(lVar1);
    lVar1 = lVar1 + 0x1c0;
  }
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*param_1);
    return;
  }
  return;
}

