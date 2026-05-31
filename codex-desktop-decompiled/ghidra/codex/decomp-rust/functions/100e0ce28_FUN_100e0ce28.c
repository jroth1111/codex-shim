
void FUN_100e0ce28(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *param_1 + 0x7ffffffffffffffa;
  if (*param_1 < 0x8000000000000006) {
    lVar1 = 6;
  }
  if (lVar1 == 4) {
    if (param_1[1] != 0) {
      uVar2 = param_1[2];
      goto code_r0x000108aa97c4;
    }
  }
  else if (lVar1 == 6) {
    uVar3 = *param_1;
    uVar2 = uVar3 + 0x7fffffffffffffff;
    if (uVar3 < 0x8000000000000001) {
      uVar2 = 2;
    }
    if (uVar2 < 2) {
      return;
    }
    if (uVar2 == 2) {
      if (uVar3 == 0x8000000000000000 || uVar3 == 0) {
        uVar2 = param_1[3];
      }
      else {
        _free(param_1[1]);
        uVar2 = param_1[3];
      }
      if ((uVar2 != 0x8000000000000000) && (uVar2 != 0)) {
        _free(param_1[4]);
      }
      if ((param_1[6] & 0x7fffffffffffffff) == 0) {
        return;
      }
      uVar2 = param_1[7];
    }
    else {
      if (uVar2 == 3) {
        return;
      }
      if (param_1[1] == 0) {
        return;
      }
      uVar2 = param_1[2];
    }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(uVar2);
    return;
  }
  return;
}

