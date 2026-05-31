
void FUN_100e4d008(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar2 = 2;
  }
  if (uVar2 == 0) {
    return;
  }
  if ((uVar2 == 1) || (uVar2 != 2)) {
    if (param_1[1] == 0) {
      return;
    }
    uVar2 = param_1[2];
  }
  else {
    if (uVar1 != 0) {
      _free(param_1[1]);
    }
    if ((param_1[3] & 0x7fffffffffffffff) == 0) {
      return;
    }
    uVar2 = param_1[4];
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar2);
  return;
}

