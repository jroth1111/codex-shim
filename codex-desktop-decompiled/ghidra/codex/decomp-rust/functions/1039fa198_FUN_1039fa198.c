
void FUN_1039fa198(ulong *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar3 = 5;
  }
  if (uVar3 < 3) {
    return;
  }
  if (uVar3 == 3) {
    if (param_1[1] == 0) {
      return;
    }
    plVar2 = (long *)param_1[2];
  }
  else if (uVar3 == 4) {
    plVar2 = (long *)param_1[2];
    lVar4 = param_1[3] + 1;
    plVar1 = plVar2;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_1039fa198(plVar1);
      plVar1 = plVar1 + 9;
    }
    if (param_1[1] == 0) {
      return;
    }
  }
  else {
    uVar3 = param_1[4];
    if ((uVar3 != 0) && (uVar3 * 9 != -0x11)) {
      _free(param_1[3] + uVar3 * -8 + -8);
    }
    plVar2 = (long *)param_1[1];
    lVar4 = param_1[2] + 1;
    plVar1 = plVar2;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      if (*plVar1 != 0) {
        _free(plVar1[1]);
      }
      FUN_1039fa198(plVar1 + 3);
      plVar1 = plVar1 + 0xd;
    }
    if (*param_1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar2);
  return;
}

