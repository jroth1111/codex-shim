
void FUN_1017a1bec(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (*param_1 == -0x8000000000000000) {
    plVar2 = (long *)param_1[1];
    FUN_1017a4f34(plVar2);
  }
  else {
    if (*param_1 != 0) {
      _free(param_1[1]);
    }
    lVar1 = param_1[0xc];
    if (lVar1 != -0x7fffffffffffffff) {
      if (lVar1 == -0x8000000000000000 || lVar1 == 0) {
        lVar1 = param_1[0xf];
      }
      else {
        _free(param_1[0xd]);
        lVar1 = param_1[0xf];
      }
      if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
        _free(param_1[0x10]);
      }
    }
    if (param_1[3] == -0x8000000000000000) {
      return;
    }
    lVar1 = param_1[7];
    if (lVar1 != 0 && lVar1 * 9 != -0x11) {
      _free(param_1[6] + lVar1 * -8 + -8);
    }
    plVar2 = (long *)param_1[4];
    lVar1 = param_1[5] + 1;
    plVar3 = plVar2;
    while (lVar1 = lVar1 + -1, lVar1 != 0) {
      if (*plVar3 != 0) {
        _free(plVar3[1]);
      }
      FUN_1017a4698(plVar3 + 3);
      plVar3 = plVar3 + 0xd;
    }
    if (param_1[3] == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar2);
  return;
}

