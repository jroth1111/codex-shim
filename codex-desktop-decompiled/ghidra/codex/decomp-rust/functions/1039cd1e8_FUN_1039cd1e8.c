
void FUN_1039cd1e8(ulong *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  uVar1 = uVar4 ^ 0x8000000000000000;
  if (-1 < (long)uVar4) {
    uVar1 = 6;
  }
  if (3 < uVar1 - 1) {
    if (uVar1 == 0) {
      if (param_1[1] != 0) {
        plVar2 = (long *)param_1[2];
        goto LAB_1039cd2dc;
      }
    }
    else {
      if (uVar1 == 5) {
        plVar2 = (long *)param_1[2];
        FUN_1039cd5c0(plVar2,param_1[3]);
        uVar4 = param_1[1];
      }
      else {
        uVar1 = param_1[4];
        if ((uVar1 != 0) && (uVar1 * 9 != -0x11)) {
          _free(param_1[3] + uVar1 * -8 + -8);
        }
        plVar2 = (long *)param_1[1];
        lVar5 = param_1[2] + 1;
        plVar3 = plVar2;
        while (lVar5 = lVar5 + -1, lVar5 != 0) {
          if (*plVar3 != 0) {
            _free(plVar3[1]);
          }
          FUN_1039cd1e8(plVar3 + 3);
          plVar3 = plVar3 + 0xe;
        }
      }
      if (uVar4 != 0) {
LAB_1039cd2dc:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(plVar2);
        return;
      }
    }
  }
  return;
}

