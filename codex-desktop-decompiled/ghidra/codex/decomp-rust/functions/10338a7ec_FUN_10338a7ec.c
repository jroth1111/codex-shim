
void FUN_10338a7ec(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = ((ulong)(param_1[0x10] - param_1[0xe]) >> 4) * 0x6db6db6db6db6db7 + 1;
  plVar2 = (long *)param_1[0xe];
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
    if (*plVar2 != 0) {
      _free(plVar2[1]);
    }
    FUN_10337b6e4(plVar2 + 3);
    plVar2 = plVar2 + 0xe;
  }
  if (param_1[0xf] != 0) {
    _free(param_1[0xd]);
  }
  if (*param_1 == -0x8000000000000000) {
    return;
  }
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  uVar3 = param_1[3];
  uVar4 = uVar3 ^ 0x8000000000000000;
  if (-1 < (long)uVar3) {
    uVar4 = 6;
  }
  if (uVar4 - 1 < 4) {
    return;
  }
  if (uVar4 == 0) {
    if (param_1[4] == 0) {
      return;
    }
    plVar2 = (long *)param_1[5];
  }
  else if (uVar4 == 5) {
    plVar2 = (long *)param_1[5];
    lVar5 = param_1[6] + 1;
    plVar1 = plVar2;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_10337b6e4(plVar1);
      plVar1 = plVar1 + 10;
    }
    if (param_1[4] == 0) {
      return;
    }
  }
  else {
    lVar5 = param_1[7];
    if ((lVar5 != 0) && (lVar5 * 9 != -0x11)) {
      _free(param_1[6] + lVar5 * -8 + -8);
    }
    plVar2 = (long *)param_1[4];
    lVar5 = param_1[5] + 1;
    plVar1 = plVar2;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      if (*plVar1 != 0) {
        _free(plVar1[1]);
      }
      FUN_10337b6e4(plVar1 + 3);
      plVar1 = plVar1 + 0xe;
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

