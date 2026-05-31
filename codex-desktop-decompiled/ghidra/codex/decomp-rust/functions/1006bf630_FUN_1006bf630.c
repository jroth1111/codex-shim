
void FUN_1006bf630(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  plVar11 = (long *)param_2[3];
  plVar6 = (long *)param_2[8];
  plVar1 = (long *)param_2[9];
  plVar3 = (long *)*param_2;
  plVar4 = (long *)param_2[1];
  lVar5 = param_2[2];
  while( true ) {
    if (plVar3 != (long *)0x0) {
      plVar10 = plVar4;
      if (plVar4 != plVar11) {
        plVar10 = plVar4 + 6;
        lVar7 = *plVar4;
        param_2[1] = (long)plVar10;
        if (lVar7 != -0x8000000000000000) {
          lVar5 = plVar4[4];
          lVar2 = plVar4[5];
          lVar8 = plVar4[1];
          *param_1 = lVar7;
          param_1[1] = lVar8;
          lVar7 = plVar4[2];
          param_1[3] = plVar4[3];
          param_1[2] = lVar7;
          param_1[4] = lVar5;
          param_1[5] = lVar2;
          return;
        }
      }
      if ((long)plVar11 - (long)plVar10 != 0) {
        uVar9 = (ulong)((long)plVar11 - (long)plVar10) / 0x30;
        plVar10 = plVar10 + 4;
        do {
          if (plVar10[-4] != 0) {
            _free(plVar10[-3]);
          }
          if (plVar10[-1] != 0) {
            _free(*plVar10);
          }
          plVar10 = plVar10 + 6;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (lVar5 != 0) {
        _free(plVar3);
      }
      *param_2 = 0;
    }
    plVar11 = plVar6;
    if (plVar6 == (long *)0x0) break;
    do {
      if (plVar11 == plVar1) goto LAB_1006bf750;
      plVar6 = plVar11 + 1;
      lVar5 = *plVar11;
      param_2[8] = (long)plVar6;
      plVar11 = plVar6;
    } while (*(char *)(lVar5 + 0x49) != '\x01');
    func_0x00010114744c(&lStack_a8,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    if (lStack_a8 == -0x8000000000000000) break;
    plVar11 = plStack_a0 + lStack_98 * 6;
    *param_2 = (long)plStack_a0;
    param_2[1] = (long)plStack_a0;
    param_2[2] = lStack_a8;
    param_2[3] = (long)plVar11;
    plVar3 = plStack_a0;
    plVar4 = plStack_a0;
    lVar5 = lStack_a8;
  }
LAB_1006bf750:
  lVar5 = param_2[4];
  if (lVar5 == 0) {
    *param_1 = -0x8000000000000000;
    return;
  }
  plVar6 = (long *)param_2[5];
  if (plVar6 != (long *)param_2[7]) {
    lVar7 = *plVar6;
    lStack_88 = plVar6[2];
    lStack_90 = plVar6[1];
    lStack_78 = plVar6[4];
    lStack_80 = plVar6[3];
    lStack_70 = plVar6[5];
    plVar6 = plVar6 + 6;
    param_2[5] = (long)plVar6;
    if (lVar7 != -0x8000000000000000) goto LAB_1006bf7fc;
  }
  uVar9 = param_2[7] - (long)plVar6;
  if (uVar9 != 0) {
    uVar9 = uVar9 / 0x30;
    plVar6 = plVar6 + 4;
    do {
      if (plVar6[-4] != 0) {
        _free(plVar6[-3]);
      }
      if (plVar6[-1] != 0) {
        _free(*plVar6);
      }
      plVar6 = plVar6 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (param_2[6] != 0) {
    _free(lVar5);
  }
  param_2[4] = 0;
  lVar7 = -0x8000000000000000;
LAB_1006bf7fc:
  *param_1 = lVar7;
  param_1[2] = lStack_88;
  param_1[1] = lStack_90;
  param_1[4] = lStack_78;
  param_1[3] = lStack_80;
  param_1[5] = lStack_70;
  return;
}

