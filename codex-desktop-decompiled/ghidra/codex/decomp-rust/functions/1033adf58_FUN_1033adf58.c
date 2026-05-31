
void FUN_1033adf58(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_1[1] != 0) {
        _free(param_1[2]);
      }
      if (param_1[4] != 0) {
        _free(param_1[5]);
      }
      if (param_1[7] == 0) {
        return;
      }
      lVar1 = 0x40;
      goto LAB_1033ae038;
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    uVar2 = param_1[1] & 0x7fffffffffffffff;
  }
  else {
    if (lVar1 == 2) {
      if (param_1[7] != 0) {
        _free(param_1[8]);
      }
      if (param_1[1] == -0x8000000000000000 || param_1[1] == 0) {
        uVar2 = param_1[4];
      }
      else {
        _free(param_1[2]);
        uVar2 = param_1[4];
      }
      if ((uVar2 & 0x7fffffffffffffff) == 0) {
        return;
      }
      lVar1 = 0x28;
      goto LAB_1033ae038;
    }
    uVar2 = param_1[1];
  }
  if (uVar2 == 0) {
    return;
  }
  lVar1 = 0x10;
LAB_1033ae038:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)((long)param_1 + lVar1));
  return;
}

