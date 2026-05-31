
void FUN_100ded3bc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) {
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) {
LAB_100ded440:
      _free(param_1[7]);
      lVar4 = param_1[9];
      goto joined_r0x000100ded420;
    }
  }
  else {
    _free(param_1[4]);
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) goto LAB_100ded440;
  }
  lVar4 = param_1[9];
joined_r0x000100ded420:
  if (lVar4 != -0x8000000000000000) {
    lVar1 = param_1[10];
    lVar6 = param_1[0xb];
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (puVar5[-4] != 0) {
          _free(puVar5[-3]);
        }
        if (puVar5[-1] == -0x8000000000000000 || puVar5[-1] == 0) {
          if (puVar5[2] != -0x8000000000000000 && puVar5[2] != 0) {
LAB_100ded4c4:
            _free(puVar5[3]);
          }
        }
        else {
          _free(*puVar5);
          if (puVar5[2] != -0x8000000000000000 && puVar5[2] != 0) goto LAB_100ded4c4;
        }
        puVar5 = puVar5 + 10;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar1);
    }
  }
  lVar4 = param_1[0xc];
  if (lVar4 != -0x8000000000000000) {
    lVar1 = param_1[0xd];
    lVar6 = param_1[0xe];
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        plVar9 = (long *)(lVar1 + lVar7 * 0x48);
        if (*plVar9 != 0) {
          _free(plVar9[1]);
        }
        if (plVar9[3] == -0x8000000000000000 || plVar9[3] == 0) {
          lVar8 = plVar9[6];
        }
        else {
          _free(plVar9[4]);
          lVar8 = plVar9[6];
        }
        if (lVar8 != -0x8000000000000000) {
          lVar2 = plVar9[7];
          lVar10 = plVar9[8];
          if (lVar10 != 0) {
            puVar5 = (undefined8 *)(lVar2 + 8);
            do {
              if (puVar5[-1] != 0) {
                _free(*puVar5);
              }
              puVar5 = puVar5 + 3;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          if (lVar8 != 0) {
            _free(lVar2);
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar6);
    }
    if (lVar4 != 0) {
      _free(lVar1);
    }
  }
  if (param_1[0xf] != -0x8000000000000000) {
    lVar4 = param_1[0x13];
    if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
      _free(param_1[0x12] + lVar4 * -8 + -8);
    }
    plVar9 = (long *)param_1[0x10];
    lVar4 = param_1[0x11] + 1;
    plVar3 = plVar9;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      if (*plVar3 != 0) {
        _free(plVar3[1]);
      }
      FUN_100de6690(plVar3 + 3);
      plVar3 = plVar3 + 0xd;
    }
    if (param_1[0xf] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(plVar9);
      return;
    }
    return;
  }
  return;
}

