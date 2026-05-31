
void FUN_100ccc464(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if (*param_1 == 2) {
    plVar4 = (long *)param_1[1];
    if (*plVar4 == 1) {
      uVar7 = plVar4[1];
      if ((uVar7 & 3) != 1) goto code_r0x000108aa97c4;
      puVar6 = (undefined8 *)(uVar7 - 1);
      uVar8 = *puVar6;
      puVar9 = *(undefined8 **)(uVar7 + 7);
      pcVar2 = (code *)*puVar9;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar8);
      }
      if (puVar9[1] != 0) {
        _free(uVar8);
      }
    }
    else {
      if ((*plVar4 != 0) || (plVar4[2] == 0)) goto code_r0x000108aa97c4;
      puVar6 = (undefined8 *)plVar4[1];
    }
    _free(puVar6);
  }
  else {
    if (param_1[0xd] != 0) {
      _free(param_1[0xe]);
    }
    if (param_1[10] == -0x8000000000000000 || param_1[10] == 0) {
      lVar3 = param_1[0x10];
    }
    else {
      _free(param_1[0xb]);
      lVar3 = param_1[0x10];
    }
    if (lVar3 != 0) {
      _free(param_1[0x11]);
    }
    puVar5 = (ulong *)(param_1 + 1);
    if (*puVar5 == 0x8000000000000005) {
      return;
    }
    uVar7 = *puVar5 ^ 0x8000000000000000;
    if (-1 < (long)*puVar5) {
      uVar7 = 5;
    }
    if (uVar7 < 3) {
      return;
    }
    if (uVar7 == 3) {
      if (param_1[2] == 0) {
        return;
      }
      plVar4 = (long *)param_1[3];
    }
    else if (uVar7 == 4) {
      plVar4 = (long *)param_1[3];
      lVar3 = param_1[4] + 1;
      plVar1 = plVar4;
      while (lVar3 = lVar3 + -1, lVar3 != 0) {
        FUN_100de6690(plVar1);
        plVar1 = plVar1 + 9;
      }
      if (param_1[2] == 0) {
        return;
      }
    }
    else {
      lVar3 = param_1[5];
      if ((lVar3 != 0) && (lVar3 * 9 != -0x11)) {
        _free(param_1[4] + lVar3 * -8 + -8);
      }
      plVar4 = (long *)param_1[2];
      lVar3 = param_1[3] + 1;
      plVar1 = plVar4;
      while (lVar3 = lVar3 + -1, lVar3 != 0) {
        if (*plVar1 != 0) {
          _free(plVar1[1]);
        }
        FUN_100de6690(plVar1 + 3);
        plVar1 = plVar1 + 0xd;
      }
      if (*puVar5 == 0) {
        return;
      }
    }
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar4);
  return;
}

