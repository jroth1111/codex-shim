
void FUN_101246920(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  ulong uStack_48;
  
  if (*param_2 == 0x8000000000000000) {
    *param_1 = 0;
    uVar4 = *param_2 ^ 0x8000000000000000;
    if (-1 < (long)*param_2) {
      uVar4 = 5;
    }
    if (uVar4 < 3) {
      return;
    }
    if (uVar4 == 3) {
      if (param_2[1] == 0) {
        return;
      }
      plVar2 = (long *)param_2[2];
    }
    else if (uVar4 == 4) {
      plVar2 = (long *)param_2[2];
      lVar5 = param_2[3] + 1;
      plVar1 = plVar2;
      while (lVar5 = lVar5 + -1, lVar5 != 0) {
        FUN_100de6690(plVar1);
        plVar1 = plVar1 + 9;
      }
      if (param_2[1] == 0) {
        return;
      }
    }
    else {
      uVar4 = param_2[4];
      if ((uVar4 != 0) && (uVar4 * 9 != -0x11)) {
        _free(param_2[3] + uVar4 * -8 + -8);
      }
      plVar2 = (long *)param_2[1];
      lVar5 = param_2[2] + 1;
      plVar1 = plVar2;
      while (lVar5 = lVar5 + -1, lVar5 != 0) {
        if (*plVar1 != 0) {
          _free(plVar1[1]);
        }
        FUN_100de6690(plVar1 + 3);
        plVar1 = plVar1 + 0xd;
      }
      if (*param_2 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar2);
    return;
  }
  if (*param_2 == 0x8000000000000002) {
    uStack_48 = param_2[2];
    if (param_2[1] == 0) {
      if (-1 < (long)uStack_48) goto LAB_1012469b4;
      auStack_50[0] = 1;
      uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_50,&stack0xffffffffffffffcf,&UNK_10b2199d0);
    }
    else {
      if (param_2[1] == 1) {
LAB_1012469b4:
        *param_1 = 1;
        param_1[1] = uStack_48;
        return;
      }
      auStack_50[0] = 3;
      uVar3 = func_0x000108a4a50c(auStack_50,&stack0xffffffffffffffcf,&UNK_10b2199d0);
    }
  }
  else {
    uVar3 = FUN_108832ea0(param_2,&stack0xffffffffffffffcf,&UNK_10b2199d0);
    FUN_100de6690(param_2);
  }
  *param_1 = 2;
  param_1[1] = uVar3;
  return;
}

