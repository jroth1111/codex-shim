
void FUN_100ded1dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[6] == -0x8000000000000000 || param_1[6] == 0) {
    lVar4 = param_1[3];
  }
  else {
    _free(param_1[7]);
    lVar4 = param_1[3];
  }
  if (lVar4 != 0) {
    _free(param_1[4]);
  }
  if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) {
    lVar4 = param_1[0xc];
  }
  else {
    _free(param_1[10]);
    lVar4 = param_1[0xc];
  }
  if (lVar4 != -0x8000000000000000) {
    lVar1 = param_1[0xd];
    lVar3 = param_1[0xe];
    if (lVar3 != 0) {
      lVar6 = 0;
      do {
        plVar8 = (long *)(lVar1 + lVar6 * 0x48);
        if (*plVar8 != 0) {
          _free(plVar8[1]);
        }
        if (plVar8[3] == -0x8000000000000000 || plVar8[3] == 0) {
          lVar7 = plVar8[6];
        }
        else {
          _free(plVar8[4]);
          lVar7 = plVar8[6];
        }
        if (lVar7 != -0x8000000000000000) {
          lVar2 = plVar8[7];
          lVar9 = plVar8[8];
          if (lVar9 != 0) {
            puVar5 = (undefined8 *)(lVar2 + 8);
            do {
              if (puVar5[-1] != 0) {
                _free(*puVar5);
              }
              puVar5 = puVar5 + 3;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          if (lVar7 != 0) {
            _free(lVar2);
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != lVar3);
    }
    if (lVar4 != 0) {
      _free(lVar1);
    }
  }
  if ((param_1[0xf] != -0x8000000000000000) && (param_1[0xf] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[0x10]);
    return;
  }
  return;
}

