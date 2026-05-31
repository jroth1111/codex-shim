
void FUN_100e3d46c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *param_1 + 0x8000000000000001U & *param_1 >> 0x3f;
  if (uVar4 == 0) {
    if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) {
      lVar5 = *param_1;
    }
    else {
      _free(param_1[4]);
      lVar5 = *param_1;
    }
    if (lVar5 != 0) {
      _free(param_1[1]);
    }
    if (param_1[0xc] != -0x7ffffffffffffffb) {
      FUN_100de6690();
    }
    lVar5 = param_1[6];
    if (lVar5 != -0x7fffffffffffffff) {
      if ((lVar5 != -0x8000000000000000) && (lVar5 != 0)) {
        _free(param_1[7]);
      }
      if ((param_1[9] != -0x8000000000000000) && (param_1[9] != 0)) {
        plVar2 = (long *)param_1[10];
        goto code_r0x000108aa97c4;
      }
    }
    return;
  }
  if (uVar4 == 1) {
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] == -0x7ffffffffffffffb) {
      return;
    }
  }
  else {
    if (uVar4 != 2) {
      if (param_1[4] != -0x7ffffffffffffffb) {
        FUN_100de6690();
      }
      if (param_1[1] != 0) {
        _free(param_1[2]);
      }
      if (param_1[0xe] == -0x8000000000000000 || param_1[0xe] == 0) {
        return;
      }
      plVar2 = (long *)param_1[0xf];
      goto code_r0x000108aa97c4;
    }
    if (param_1[1] != -0x8000000000000000 && param_1[1] != 0) {
      _free(param_1[2]);
    }
  }
  uVar3 = param_1[4];
  uVar4 = uVar3 ^ 0x8000000000000000;
  if (-1 < (long)uVar3) {
    uVar4 = 5;
  }
  if (uVar4 < 3) {
    return;
  }
  if (uVar4 == 3) {
    if (param_1[5] == 0) {
      return;
    }
    plVar2 = (long *)param_1[6];
  }
  else if (uVar4 == 4) {
    plVar2 = (long *)param_1[6];
    lVar5 = param_1[7] + 1;
    plVar1 = plVar2;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      FUN_100de6690(plVar1);
      plVar1 = plVar1 + 9;
    }
    if (param_1[5] == 0) {
      return;
    }
  }
  else {
    lVar5 = param_1[8];
    if ((lVar5 != 0) && (lVar5 * 9 != -0x11)) {
      _free(param_1[7] + lVar5 * -8 + -8);
    }
    plVar2 = (long *)param_1[5];
    lVar5 = param_1[6] + 1;
    plVar1 = plVar2;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      if (*plVar1 != 0) {
        _free(plVar1[1]);
      }
      FUN_100de6690(plVar1 + 3);
      plVar1 = plVar1 + 0xd;
    }
    if (param_1[4] == 0) {
      return;
    }
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar2);
  return;
}

