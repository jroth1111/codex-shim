
/* WARNING: Possible PIC construction at 0x000100df84b8: Changing call to branch */

void FUN_100df8370(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar8;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar11 = param_1 + 1;
  lVar5 = *param_1;
  if (lVar5 < 2) {
    if (lVar5 == 0) {
      if (*plVar11 != 0) {
        _free(param_1[2]);
      }
      plVar4 = param_1 + 4;
      if (*plVar4 == -0x8000000000000000) {
        return;
      }
      lVar5 = param_1[8];
      if ((lVar5 != 0) && (lVar5 * 9 != -0x11)) {
        lVar6 = param_1[7];
LAB_100df84ec:
        _free(lVar6 + lVar5 * -8 + -8);
      }
    }
    else {
      if (lVar5 != 1) goto SUB_100dfdd9c;
      if (*plVar11 != 0) {
        _free(param_1[2]);
      }
      if (param_1[4] != 0) {
        _free(param_1[5]);
      }
      plVar4 = param_1 + 7;
      if (*plVar4 == -0x8000000000000000) {
        return;
      }
      lVar5 = param_1[0xb];
      if ((lVar5 != 0) && (lVar5 * 9 != -0x11)) {
        lVar6 = param_1[10];
        goto LAB_100df84ec;
      }
    }
  }
  else if (lVar5 == 2) {
    plVar4 = param_1 + 0x14;
    if (*plVar4 == -0x8000000000000000) {
      if (param_1[0xe] != 0) {
        _free(param_1[0xf]);
      }
      if (param_1[2] == -0x8000000000000000 || param_1[2] == 0) {
        lVar5 = param_1[0x11];
      }
      else {
        _free(param_1[3]);
        lVar5 = param_1[0x11];
      }
      if (lVar5 != 0) {
        _free(param_1[0x12]);
      }
      plVar4 = param_1 + 5;
      if (*plVar4 == -0x8000000000000000) {
        return;
      }
      lVar5 = param_1[9];
      if ((lVar5 != 0) && (lVar5 * 9 != -0x11)) {
        _free(param_1[8] + lVar5 * -8 + -8);
      }
    }
    else {
      lVar5 = param_1[0x18];
      if ((lVar5 != 0) && (lVar5 * 9 != -0x11)) {
        _free(param_1[0x17] + lVar5 * -8 + -8);
      }
      unaff_x30 = 0x100df84bc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_1;
      unaff_x20 = plVar11;
      unaff_x21 = plVar4;
      unaff_x29 = puVar1;
    }
  }
  else {
    if (lVar5 == 3) {
      if (*plVar11 != 0) {
        _free(param_1[2]);
      }
      if (param_1[4] == 0) {
        return;
      }
      plVar11 = (long *)param_1[5];
      goto code_r0x000108aa97c4;
    }
SUB_100dfdd9c:
    if (*plVar11 != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] == -0x8000000000000000 || param_1[7] == 0) {
      if (param_1[10] != -0x8000000000000000 && param_1[10] != 0) goto LAB_100dfde2c;
LAB_100dfde04:
      lVar5 = param_1[0xd];
    }
    else {
      _free(param_1[8]);
      if (param_1[10] == -0x8000000000000000 || param_1[10] == 0) goto LAB_100dfde04;
LAB_100dfde2c:
      _free(param_1[0xb]);
      lVar5 = param_1[0xd];
    }
    if ((lVar5 != -0x8000000000000000) && (lVar5 != 0)) {
      _free(param_1[0xe]);
    }
    lVar5 = param_1[0x10];
    if (lVar5 != -0x8000000000000000) {
      lVar6 = param_1[0x11];
      lVar3 = param_1[0x12];
      if (lVar3 != 0) {
        lVar9 = 0;
        do {
          plVar11 = (long *)(lVar6 + lVar9 * 0x48);
          if (*plVar11 != 0) {
            _free(plVar11[1]);
          }
          if (plVar11[3] == -0x8000000000000000 || plVar11[3] == 0) {
            lVar10 = plVar11[6];
          }
          else {
            _free(plVar11[4]);
            lVar10 = plVar11[6];
          }
          if (lVar10 != -0x8000000000000000) {
            lVar2 = plVar11[7];
            lVar12 = plVar11[8];
            if (lVar12 != 0) {
              puVar8 = (undefined8 *)(lVar2 + 8);
              do {
                if (puVar8[-1] != 0) {
                  _free(*puVar8);
                }
                puVar8 = puVar8 + 3;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            if (lVar10 != 0) {
              _free(lVar2);
            }
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 != lVar3);
      }
      if (lVar5 != 0) {
        _free(lVar6);
      }
    }
    plVar4 = param_1 + 0x13;
    if (*plVar4 == -0x8000000000000000) {
      return;
    }
    lVar5 = param_1[0x17];
    if ((lVar5 != 0) && (lVar5 * 9 != -0x11)) {
      _free(param_1[0x16] + lVar5 * -8 + -8);
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar11 = (long *)plVar4[1];
  lVar5 = plVar4[2] + 1;
  plVar7 = plVar11;
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
    if (*plVar7 != 0) {
      _free(plVar7[1]);
    }
    FUN_100de6690(plVar7 + 3);
    plVar7 = plVar7 + 0xd;
  }
  if (*plVar4 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar11);
  return;
}

