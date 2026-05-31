
void FUN_103dc0794(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  uVar2 = param_1[3];
  uVar3 = uVar2 ^ 0x8000000000000000;
  if (-1 < (long)uVar2) {
    uVar3 = 5;
  }
  if (2 < uVar3) {
    if (uVar3 == 3) {
      if (param_1[4] == 0) {
        return;
      }
      lVar4 = param_1[5];
    }
    else if (uVar3 == 4) {
      lVar4 = param_1[5];
      lVar5 = param_1[6] + 1;
      lVar1 = lVar4;
      while (lVar5 = lVar5 + -1, lVar5 != 0) {
        func_0x000103daac44(lVar1);
        lVar1 = lVar1 + 0x48;
      }
      if (param_1[4] == 0) {
        return;
      }
    }
    else {
      lVar4 = param_1[7];
      if (lVar4 != 0 && lVar4 * 9 != -0x11) {
        _free(param_1[6] + lVar4 * -8 + -8);
      }
      lVar4 = param_1[4];
      lVar5 = param_1[5] + 1;
      lVar1 = lVar4;
      while (lVar5 = lVar5 + -1, lVar5 != 0) {
        FUN_103dc0794(lVar1);
        lVar1 = lVar1 + 0x68;
      }
      if (param_1[3] == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar4);
    return;
  }
  return;
}

