
void FUN_1039ce740(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  uVar5 = param_1[3];
  uVar1 = uVar5 ^ 0x8000000000000000;
  if (-1 < (long)uVar5) {
    uVar1 = 6;
  }
  if (3 < uVar1 - 1) {
    if (uVar1 == 0) {
      if (param_1[4] != 0) {
        plVar3 = (long *)param_1[5];
        goto LAB_1039cd2dc;
      }
    }
    else {
      if (uVar1 == 5) {
        plVar3 = (long *)param_1[5];
        FUN_1039cd5c0(plVar3,param_1[6]);
        uVar5 = param_1[4];
      }
      else {
        lVar2 = param_1[7];
        if ((lVar2 != 0) && (lVar2 * 9 != -0x11)) {
          _free(param_1[6] + lVar2 * -8 + -8);
        }
        plVar3 = (long *)param_1[4];
        lVar2 = param_1[5] + 1;
        plVar4 = plVar3;
        while (lVar2 = lVar2 + -1, lVar2 != 0) {
          if (*plVar4 != 0) {
            _free(plVar4[1]);
          }
          FUN_1039cd1e8(plVar4 + 3);
          plVar4 = plVar4 + 0xe;
        }
      }
      if (uVar5 != 0) {
LAB_1039cd2dc:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(plVar3);
        return;
      }
    }
  }
  return;
}

