
void FUN_103939e10(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = ((ulong)(param_1[0x10] - param_1[0xe]) >> 4) * 0x6db6db6db6db6db7 + 1;
  plVar4 = (long *)param_1[0xe];
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
    if (*plVar4 != 0) {
      _free(plVar4[1]);
    }
    FUN_103938604(plVar4 + 3);
    plVar4 = plVar4 + 0xe;
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
  uVar2 = param_1[3];
  uVar3 = uVar2 ^ 0x8000000000000000;
  if (-1 < (long)uVar2) {
    uVar3 = 6;
  }
  if (uVar3 - 1 < 4) {
    return;
  }
  if (uVar3 == 0) {
    if (param_1[4] == 0) {
      return;
    }
    lVar5 = param_1[5];
  }
  else if (uVar3 == 5) {
    lVar5 = param_1[5];
    lVar6 = param_1[6] + 1;
    lVar8 = lVar5;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      FUN_103938604(lVar8);
      lVar8 = lVar8 + 0x50;
    }
    if (param_1[4] == 0) {
      return;
    }
  }
  else {
    lVar5 = param_1[7];
    if (lVar5 == 0 || lVar5 * 9 == -0x11) {
      lVar5 = param_1[4];
      lVar6 = param_1[5];
    }
    else {
      _free(param_1[6] + lVar5 * -8 + -8);
      lVar5 = param_1[4];
      lVar6 = param_1[5];
    }
    if (lVar6 != 0) {
      lVar8 = 0;
      do {
        plVar4 = (long *)(lVar5 + lVar8 * 0x70);
        if (*plVar4 != 0) {
          _free(plVar4[1]);
        }
        uVar3 = plVar4[3] ^ 0x8000000000000000;
        if (-1 < plVar4[3]) {
          uVar3 = 6;
        }
        if (3 < uVar3 - 1) {
          if (uVar3 == 0) {
            if (plVar4[4] != 0) {
              lVar7 = plVar4[5];
LAB_1039451dc:
              _free(lVar7);
            }
          }
          else if (uVar3 == 5) {
            lVar7 = plVar4[5];
            lVar9 = plVar4[6] + 1;
            lVar1 = lVar7;
            while (lVar9 = lVar9 + -1, lVar9 != 0) {
              FUN_103938604(lVar1);
              lVar1 = lVar1 + 0x50;
            }
            if (plVar4[4] != 0) goto LAB_1039451dc;
          }
          else {
            FUN_1039439b4();
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar6);
    }
    if (param_1[3] == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar5);
  return;
}

