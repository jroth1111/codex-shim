
void FUN_100e90e70(long *param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_70 = param_2[2];
  lVar3 = func_0x0001004d6b98(&uStack_80);
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    plVar4 = (long *)_malloc(0x20);
    if (plVar4 == (long *)0x0) {
      uVar6 = func_0x0001087c9084(8,0x20);
      if (lStack_68 != 0) {
        _free(plStack_60);
      }
      auVar16 = __Unwind_Resume(uVar6);
      puVar9 = auVar16._8_8_;
      puVar7 = auVar16._0_8_;
      plVar15 = (long *)puVar9[1];
      plVar14 = (long *)*puVar9;
      plVar13 = (long *)puVar9[3];
      uVar6 = puVar9[2];
      plVar4 = plVar14;
      plVar8 = plVar14;
      if (plVar15 != plVar13) {
        do {
          plVar11 = plVar15;
          lVar3 = *plVar11;
          lVar5 = plVar11[1];
          auVar16 = FUN_100e8d6f8(lVar5,plVar11[2]);
          lVar10 = auVar16._8_8_;
          if (lVar10 == 0) {
            lVar1 = -0x8000000000000000;
          }
          else {
            plVar8 = (long *)_malloc(lVar10);
            if (plVar8 == (long *)0x0) {
              func_0x0001087c9084(1,lVar10);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100e910f8);
              (*pcVar2)();
            }
            _memcpy(plVar8,auVar16._0_8_,lVar10);
            lVar1 = lVar10;
          }
          if (lVar3 != 0) {
            _free(lVar5);
          }
          if (lVar1 != -0x8000000000000000) {
            *plVar4 = lVar1;
            plVar4[1] = (long)plVar8;
            plVar4[2] = lVar10;
            plVar4 = plVar4 + 3;
          }
          plVar15 = plVar11 + 3;
        } while (plVar11 + 3 != plVar13);
        plVar15 = plVar11 + 3;
      }
      if ((long)plVar13 - (long)plVar15 != 0) {
        uVar12 = (ulong)((long)plVar13 - (long)plVar15) / 0x18;
        plVar15 = plVar15 + 1;
        do {
          if (plVar15[-1] != 0) {
            _free(*plVar15);
          }
          plVar15 = plVar15 + 3;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      *puVar7 = uVar6;
      puVar7[1] = plVar14;
      puVar7[2] = ((ulong)((long)plVar4 - (long)plVar14) >> 3) * -0x5555555555555555;
      return;
    }
    *plVar4 = lVar3;
    lStack_68 = 4;
    lStack_58 = 1;
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    uStack_40 = uStack_70;
    plStack_60 = plVar4;
    while (lVar3 = lStack_58, lVar5 = func_0x0001004d6b98(&uStack_50), lVar5 != 0) {
      if (lVar3 == lStack_68) {
        FUN_108855060(&lStack_68,lVar3,1,8,8);
        plVar4 = plStack_60;
      }
      plVar4[lVar3] = lVar5;
      lStack_58 = lVar3 + 1;
    }
    param_1[1] = (long)plStack_60;
    *param_1 = lStack_68;
    param_1[2] = lStack_58;
  }
  return;
}

