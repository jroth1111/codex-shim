
void FUN_1035ad224(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_x1;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x23;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  long lStack_1f8;
  long lStack_1f0;
  long lStack_178;
  long lStack_170;
  long lStack_f8;
  long lStack_f0;
  long lStack_78;
  long lStack_70;
  
  if (param_3 == 0) {
    lStack_78 = 0;
    lStack_70 = 8;
LAB_1035ad2d0:
    param_1[1] = lStack_70;
    *param_1 = lStack_78;
    param_1[2] = param_3;
    return;
  }
  lVar6 = param_3 << 5;
  lVar9 = param_3;
  lStack_70 = _malloc(lVar6);
  if (lStack_70 != 0) {
    lVar9 = 0;
    plVar8 = (long *)(lStack_70 + 0x10);
    lStack_78 = param_3;
    do {
      if (lVar6 == 0) break;
      lVar13 = *param_2;
      lVar10 = param_2[2];
      lVar7 = param_2[3];
      if (lVar7 == 0) {
        lVar2 = 1;
      }
      else {
        lVar2 = _malloc(lVar7);
        if (lVar2 == 0) {
          func_0x0001087c9084(1,lVar7);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1035ad30c);
          (*pcVar1)();
        }
      }
      _memcpy(lVar2,lVar10,lVar7);
      lVar9 = lVar9 + 1;
      param_2 = param_2 + 4;
      plVar8[-2] = lVar13;
      plVar8[-1] = lVar7;
      *plVar8 = lVar2;
      plVar8[1] = lVar7;
      lVar6 = lVar6 + -0x20;
      plVar8 = plVar8 + 4;
    } while (param_3 != lVar9);
    goto LAB_1035ad2d0;
  }
  uVar3 = func_0x0001087c9084(8,lVar6);
  FUN_1033d6520(&lStack_78);
  auVar14 = __Unwind_Resume(uVar3);
  lVar6 = auVar14._8_8_;
  plVar8 = auVar14._0_8_;
  if (lVar9 == 0) {
    lStack_f8 = 0;
    lStack_f0 = 8;
LAB_1035ad3dc:
    plVar8[1] = lStack_f0;
    *plVar8 = lStack_f8;
    plVar8[2] = lVar9;
    return;
  }
  lVar7 = lVar9 * 0x18;
  lVar10 = lVar9;
  lStack_f0 = _malloc(lVar7);
  if (lStack_f0 != 0) {
    lVar10 = 0;
    plVar5 = (long *)(lStack_f0 + 0x10);
    lStack_f8 = lVar9;
    do {
      if (lVar7 == 0) break;
      uVar3 = *(undefined8 *)(lVar6 + 8);
      lVar13 = *(long *)(lVar6 + 0x10);
      if (lVar13 == 0) {
        lVar2 = 1;
      }
      else {
        lVar2 = _malloc(lVar13);
        if (lVar2 == 0) {
          func_0x0001087c9084(1,lVar13);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1035ad418);
          (*pcVar1)();
        }
      }
      _memcpy(lVar2,uVar3,lVar13);
      lVar10 = lVar10 + 1;
      lVar6 = lVar6 + 0x18;
      plVar5[-2] = lVar13;
      plVar5[-1] = lVar2;
      *plVar5 = lVar13;
      lVar7 = lVar7 + -0x18;
      plVar5 = plVar5 + 3;
    } while (lVar9 != lVar10);
    goto LAB_1035ad3dc;
  }
  uVar3 = func_0x0001087c9084(8,lVar7);
  FUN_1033ac1c0(&lStack_f8);
  auVar14 = __Unwind_Resume(uVar3);
  plVar8 = auVar14._8_8_;
  plVar5 = auVar14._0_8_;
  if (lVar10 == 0) {
    lStack_178 = 0;
    lStack_170 = 8;
LAB_1035ad4e8:
    plVar5[1] = lStack_170;
    *plVar5 = lStack_178;
    plVar5[2] = lVar10;
    return;
  }
  lVar6 = lVar10 << 5;
  lVar9 = lVar10;
  lStack_170 = _malloc(lVar6);
  if (lStack_170 != 0) {
    lVar9 = 0;
    plVar11 = (long *)(lStack_170 + 0x10);
    lStack_178 = lVar10;
    do {
      if (lVar6 == 0) break;
      lVar2 = *plVar8;
      lVar7 = plVar8[2];
      lVar13 = plVar8[3];
      if (lVar13 == 0) {
        lVar4 = 1;
      }
      else {
        lVar4 = _malloc(lVar13);
        if (lVar4 == 0) {
          func_0x0001087c9084(1,lVar13);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1035ad524);
          (*pcVar1)();
        }
      }
      _memcpy(lVar4,lVar7,lVar13);
      lVar9 = lVar9 + 1;
      plVar8 = plVar8 + 4;
      plVar11[-2] = lVar2;
      plVar11[-1] = lVar13;
      *plVar11 = lVar4;
      plVar11[1] = lVar13;
      lVar6 = lVar6 + -0x20;
      plVar11 = plVar11 + 4;
    } while (lVar10 != lVar9);
    goto LAB_1035ad4e8;
  }
  uVar3 = func_0x0001087c9084(8,lVar6);
  FUN_1032b59bc(&lStack_178);
  auVar14 = __Unwind_Resume(uVar3);
  lVar6 = auVar14._8_8_;
  plVar8 = auVar14._0_8_;
  if (lVar9 == 0) {
    lStack_1f8 = 0;
    lStack_1f0 = 8;
LAB_1035ad640:
    plVar8[1] = lStack_1f0;
    *plVar8 = lStack_1f8;
    plVar8[2] = lVar9;
    return;
  }
  lVar7 = lVar9 * 0x30;
  lVar10 = lVar9;
  lStack_1f0 = _malloc(lVar7);
  if (lStack_1f0 != 0) {
    lVar10 = 0;
    plVar5 = (long *)(lStack_1f0 + 0x18);
    lStack_1f8 = lVar9;
    do {
      if (lVar7 == 0) break;
      uVar3 = *(undefined8 *)(lVar6 + 8);
      lVar13 = *(long *)(lVar6 + 0x10);
      if (lVar13 == 0) {
        lVar4 = 1;
        _memcpy(1,uVar3,0);
        uVar3 = *(undefined8 *)(lVar6 + 0x20);
        lVar2 = *(long *)(lVar6 + 0x28);
        if (lVar2 == 0) goto LAB_1035ad59c;
LAB_1035ad624:
        lVar12 = _malloc(lVar2);
        if (lVar12 == 0) {
          func_0x0001087c9084(1,lVar2);
LAB_1035ad68c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1035ad690);
          (*pcVar1)();
        }
      }
      else {
        lVar4 = _malloc(lVar13);
        if (lVar4 == 0) {
          func_0x0001087c9084(1,lVar13);
          goto LAB_1035ad68c;
        }
        _memcpy(lVar4,uVar3,lVar13);
        uVar3 = *(undefined8 *)(lVar6 + 0x20);
        lVar2 = *(long *)(lVar6 + 0x28);
        if (lVar2 != 0) goto LAB_1035ad624;
LAB_1035ad59c:
        lVar12 = 1;
      }
      lVar6 = lVar6 + 0x30;
      lVar10 = lVar10 + 1;
      _memcpy(lVar12,uVar3,lVar2);
      plVar5[-3] = lVar13;
      plVar5[-2] = lVar4;
      plVar5[-1] = lVar13;
      *plVar5 = lVar2;
      lVar7 = lVar7 + -0x30;
      plVar5[1] = lVar12;
      plVar5[2] = lVar2;
      plVar5 = plVar5 + 6;
    } while (lVar9 != lVar10);
    goto LAB_1035ad640;
  }
  uVar3 = func_0x0001087c9084(8,lVar7);
  if (unaff_x23 != 0) {
    _free();
    FUN_1032c0cd4(&lStack_1f8);
    uVar3 = __Unwind_Resume(uVar3);
  }
  FUN_1032c0cd4(&lStack_1f8);
  auVar14 = __Unwind_Resume(uVar3);
  uVar3 = auVar14._8_8_;
  plVar8 = auVar14._0_8_;
  lVar9 = lVar10 << 4;
  if (lVar10 != 0) {
    lVar6 = _malloc(lVar9);
    if (lVar6 != 0) goto LAB_1035ad71c;
    func_0x0001087c9084(1,lVar9);
    uVar3 = extraout_x1;
  }
  lVar6 = 1;
LAB_1035ad71c:
  *plVar8 = lVar10;
  plVar8[1] = lVar6;
  _memcpy(lVar6,uVar3,lVar9);
  plVar8[2] = lVar10;
  return;
}

