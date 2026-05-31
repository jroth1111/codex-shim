
void FUN_100e19a94(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  lVar1 = uVar2 + 0x7ffffffffffffffb;
  if (uVar2 < 0x8000000000000005) {
    lVar1 = 2;
  }
  if ((lVar1 == 0) || (lVar1 == 1)) {
    uVar2 = param_1[1];
  }
  else {
    uVar3 = uVar2 ^ 0x8000000000000000;
    if (-1 < (long)uVar2) {
      uVar3 = 5;
    }
    if (4 < uVar3) {
      if (uVar2 != 0) {
        _free(param_1[1]);
      }
      if ((param_1[3] & 0x7fffffffffffffff) == 0) {
        return;
      }
      uVar2 = param_1[4];
      goto code_r0x000108aa97c4;
    }
    if (uVar3 != 2) {
      return;
    }
    uVar2 = param_1[1] & 0x7fffffffffffffff;
  }
  if (uVar2 == 0) {
    return;
  }
  uVar2 = param_1[2];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar2);
  return;
}

