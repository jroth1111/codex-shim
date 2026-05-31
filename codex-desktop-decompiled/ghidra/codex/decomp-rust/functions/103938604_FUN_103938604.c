
void FUN_103938604(ulong *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar3 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar3 = 6;
  }
  if (uVar3 - 1 < 4) {
    return;
  }
  if (uVar3 == 0) {
    if (param_1[1] == 0) {
      return;
    }
    uVar3 = param_1[2];
  }
  else if (uVar3 == 5) {
    uVar3 = param_1[2];
    lVar6 = param_1[3] + 1;
    uVar1 = uVar3;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      FUN_103938604(uVar1);
      uVar1 = uVar1 + 0x50;
    }
    if (param_1[1] == 0) {
      return;
    }
  }
  else {
    uVar3 = param_1[4];
    if (uVar3 == 0 || uVar3 * 9 == -0x11) {
      uVar3 = param_1[1];
      uVar1 = param_1[2];
    }
    else {
      _free(param_1[3] + uVar3 * -8 + -8);
      uVar3 = param_1[1];
      uVar1 = param_1[2];
    }
    if (uVar1 != 0) {
      uVar7 = 0;
      do {
        plVar5 = (long *)(uVar3 + uVar7 * 0x70);
        if (*plVar5 != 0) {
          _free(plVar5[1]);
        }
        uVar4 = plVar5[3] ^ 0x8000000000000000;
        if (-1 < plVar5[3]) {
          uVar4 = 6;
        }
        if (3 < uVar4 - 1) {
          if (uVar4 == 0) {
            if (plVar5[4] != 0) {
              lVar6 = plVar5[5];
LAB_1039451dc:
              _free(lVar6);
            }
          }
          else if (uVar4 == 5) {
            lVar6 = plVar5[5];
            lVar8 = plVar5[6] + 1;
            lVar2 = lVar6;
            while (lVar8 = lVar8 + -1, lVar8 != 0) {
              FUN_103938604(lVar2);
              lVar2 = lVar2 + 0x50;
            }
            if (plVar5[4] != 0) goto LAB_1039451dc;
          }
          else {
            func_0x0001039439b4();
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
    if (*param_1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(uVar3);
  return;
}

