
void FUN_100e17918(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[6] == -0x8000000000000000 || param_1[6] == 0) {
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
LAB_100e179a4:
      _free(param_1[10]);
      lVar4 = param_1[0xc];
      goto joined_r0x000100e17984;
    }
  }
  else {
    _free(param_1[7]);
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) goto LAB_100e179a4;
  }
  lVar4 = param_1[0xc];
joined_r0x000100e17984:
  if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
    _free(param_1[0xd]);
  }
  lVar4 = param_1[0xf];
  if (lVar4 != -0x8000000000000000) {
    lVar1 = param_1[0x10];
    lVar3 = param_1[0x11];
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        plVar7 = (long *)(lVar1 + lVar5 * 0x48);
        if (*plVar7 != 0) {
          _free(plVar7[1]);
        }
        if (plVar7[3] == -0x8000000000000000 || plVar7[3] == 0) {
          lVar6 = plVar7[6];
        }
        else {
          _free(plVar7[4]);
          lVar6 = plVar7[6];
        }
        if (lVar6 != -0x8000000000000000) {
          lVar2 = plVar7[7];
          lVar8 = plVar7[8];
          if (lVar8 != 0) {
            puVar9 = (undefined8 *)(lVar2 + 8);
            do {
              if (puVar9[-1] != 0) {
                _free(*puVar9);
              }
              puVar9 = puVar9 + 3;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          if (lVar6 != 0) {
            _free(lVar2);
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar3);
    }
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

