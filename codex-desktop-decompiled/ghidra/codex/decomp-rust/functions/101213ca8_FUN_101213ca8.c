
void FUN_101213ca8(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long in_stack_ffffffffffffff88;
  
  lVar13 = *(long *)(param_2 + 0x10);
  if (lVar13 == 0) {
    lStack_88 = 0;
    lStack_80 = 8;
  }
  else {
    lVar9 = *(long *)(param_2 + 8);
    lVar11 = lVar13 * 0x38;
    lStack_80 = _malloc(lVar11);
    if (lStack_80 == 0) {
      uVar8 = func_0x0001087c9084(8,lVar11);
      func_0x000100cc342c(&lStack_a0);
      uVar8 = __Unwind_Resume(uVar8);
      if (unaff_x22 != 0) {
        _free();
        func_0x000100cc342c(&lStack_88);
        uVar8 = __Unwind_Resume(uVar8);
      }
      func_0x000100cc342c(&lStack_88);
      auVar15 = __Unwind_Resume(uVar8);
      bVar5 = *auVar15._0_8_ == '\0';
      uVar8 = 7;
      if (bVar5) {
        uVar8 = 10;
      }
      puVar1 = &UNK_108ca1cf5;
      if (bVar5) {
        puVar1 = &UNK_108ca1ceb;
      }
                    /* WARNING: Could not recover jumptable at 0x000101213eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(auVar15._8_8_[1] + 0x18))(*auVar15._8_8_,puVar1,uVar8);
      return;
    }
    lVar12 = 0;
    plVar10 = (long *)(lStack_80 + 0x18);
    lStack_88 = lVar13;
    do {
      if (lVar11 == 0) break;
      uVar8 = *(undefined8 *)(lVar9 + 8);
      lVar2 = *(long *)(lVar9 + 0x10);
      if (lVar2 == 0) {
        lVar6 = 1;
      }
      else {
        lVar6 = _malloc(lVar2);
        if (lVar6 == 0) {
          func_0x0001087c9084(1,lVar2);
          goto LAB_101213e18;
        }
      }
      _memcpy(lVar6,uVar8,lVar2);
      lVar14 = *(long *)(lVar9 + 0x30);
      uVar8 = *(undefined8 *)(lVar9 + 0x20);
      lVar3 = *(long *)(lVar9 + 0x28);
      if (lVar3 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = _malloc(lVar3);
        if (lVar7 == 0) {
          func_0x0001087c9084(1,lVar3);
LAB_101213e18:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101213e1c);
          (*pcVar4)();
        }
      }
      lVar9 = lVar9 + 0x38;
      lVar12 = lVar12 + 1;
      _memcpy(lVar7,uVar8,lVar3);
      plVar10[-3] = lVar2;
      plVar10[-2] = lVar6;
      plVar10[-1] = lVar2;
      *plVar10 = lVar3;
      lVar11 = lVar11 + -0x38;
      plVar10[1] = lVar7;
      plVar10[2] = lVar3;
      plVar10[3] = lVar14;
      plVar10 = plVar10 + 7;
    } while (lVar13 != lVar12);
  }
  lStack_98 = lStack_80;
  lStack_a0 = lStack_88;
  lStack_90 = lVar13;
  FUN_101146714(&lStack_88,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  param_1[1] = lStack_98;
  *param_1 = lStack_a0;
  param_1[2] = lStack_90;
  param_1[4] = lStack_80;
  param_1[3] = lStack_88;
  param_1[5] = in_stack_ffffffffffffff88;
  return;
}

