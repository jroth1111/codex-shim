
void FUN_100ded628(ulong *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = *param_1;
  uVar6 = uVar4;
  if (uVar4 < 0x8000000000000001) {
    uVar6 = 0;
  }
  uVar6 = uVar6 & 0x7fffffffffffffff;
  if (uVar6 == 0) {
    if (uVar4 == 0x8000000000000000 || uVar4 == 0) {
      uVar6 = param_1[3];
    }
    else {
      _free(param_1[1]);
      uVar6 = param_1[3];
    }
    if (uVar6 == 0x8000000000000005) {
      return;
    }
    uVar4 = param_1[3];
    uVar6 = uVar4 ^ 0x8000000000000000;
    if (-1 < (long)uVar4) {
      uVar6 = 5;
    }
    if (uVar6 < 3) {
      return;
    }
    if (uVar6 == 3) {
      if (param_1[4] == 0) {
        return;
      }
      plVar3 = (long *)param_1[5];
    }
    else if (uVar6 == 4) {
      plVar3 = (long *)param_1[5];
      lVar7 = param_1[6] + 1;
      plVar2 = plVar3;
      while (lVar7 = lVar7 + -1, lVar7 != 0) {
        FUN_100de6690(plVar2);
        plVar2 = plVar2 + 9;
      }
      if (param_1[4] == 0) {
        return;
      }
    }
    else {
      uVar6 = param_1[7];
      if ((uVar6 != 0) && (uVar6 * 9 != -0x11)) {
        _free(param_1[6] + uVar6 * -8 + -8);
      }
      plVar3 = (long *)param_1[4];
      lVar7 = param_1[5] + 1;
      plVar2 = plVar3;
      while (lVar7 = lVar7 + -1, lVar7 != 0) {
        if (*plVar2 != 0) {
          _free(plVar2[1]);
        }
        FUN_100de6690(plVar2 + 3);
        plVar2 = plVar2 + 0xd;
      }
      if (param_1[3] == 0) {
        return;
      }
    }
  }
  else if (uVar6 == 1) {
    if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
      plVar3 = (long *)param_1[4];
      puVar1 = (undefined8 *)param_1[5];
      pcVar5 = (code *)*puVar1;
    }
    else {
      _free(param_1[2]);
      plVar3 = (long *)param_1[4];
      puVar1 = (undefined8 *)param_1[5];
      pcVar5 = (code *)*puVar1;
    }
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(plVar3);
    }
    if (puVar1[1] == 0) {
      return;
    }
  }
  else {
    if (uVar6 != 4) {
      return;
    }
    if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
      return;
    }
    plVar3 = (long *)param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar3);
  return;
}

