
void FUN_100e5d530(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  uVar1 = param_1[3];
  uVar3 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar3 = 2;
  }
  if (uVar3 == 0) {
    return;
  }
  if ((uVar3 == 1) || (uVar3 != 2)) {
    if (param_1[4] == 0) {
      return;
    }
    lVar2 = 0x10;
  }
  else {
    if (uVar1 != 0) {
      _free(param_1[4]);
    }
    if ((param_1[6] & 0x7fffffffffffffffU) == 0) {
      return;
    }
    lVar2 = 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)((long)(param_1 + 3) + lVar2));
  return;
}

