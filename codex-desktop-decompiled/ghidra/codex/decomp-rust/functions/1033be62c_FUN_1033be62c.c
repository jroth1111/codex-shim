
void FUN_1033be62c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[0x26] != 0) {
    _free(param_1[0x27]);
  }
  if (*param_1 == 2) {
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    lVar1 = param_1[8];
    lVar3 = param_1[9] + 1;
    lVar2 = lVar1;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      func_0x0001033ae22c(lVar2);
      lVar2 = lVar2 + 0x130;
    }
    if (param_1[7] != 0) {
      _free(lVar1);
    }
  }
  else {
    func_0x0001033ae22c(param_1);
  }
  if (param_1[0x29] != -0x8000000000000000) {
    if (param_1[0x29] != 0) {
      _free(param_1[0x2a]);
    }
    if ((param_1[0x2c] != -0x8000000000000000) && (param_1[0x2c] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[0x2d]);
      return;
    }
  }
  return;
}

