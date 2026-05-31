
void FUN_10114744c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x23;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long lStack_f8;
  long lStack_f0;
  long lStack_78;
  long lStack_70;
  
  if (param_3 == 0) {
    lStack_78 = 0;
    lStack_70 = 8;
  }
  else {
    lVar7 = param_3 * 0x30;
    lVar10 = param_3;
    lStack_70 = _malloc(lVar7);
    if (lStack_70 == 0) {
      uVar4 = func_0x0001087c9084(8,lVar7);
      if (unaff_x23 != 0) {
        _free();
        func_0x000100cbf808(&lStack_78);
        uVar4 = __Unwind_Resume(uVar4);
      }
      func_0x000100cbf808(&lStack_78);
      auVar11 = __Unwind_Resume(uVar4);
      plVar6 = auVar11._0_8_;
      if (lVar10 == 0) {
        lStack_f8 = 0;
        lStack_f0 = 8;
      }
      else {
        lVar7 = lVar10 * 0x18;
        lStack_f0 = _malloc(lVar7);
        if (lStack_f0 == 0) {
          func_0x0001087c9084(8,lVar7);
          func_0x0001087c9084(1);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10114783c);
          (*pcVar2)();
        }
        lStack_f8 = lVar10;
        if (lVar7 != 0) {
          uVar5 = *auVar11._8_8_ ^ 0x8000000000000000;
          if (-1 < (long)*auVar11._8_8_) {
            uVar5 = 0x23;
          }
                    /* WARNING: Could not recover jumptable at 0x0001011476c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_101147680 + (ulong)(byte)(&UNK_108c9ef80)[uVar5] * 4))();
          return;
        }
      }
      plVar6[1] = lStack_f0;
      *plVar6 = lStack_f8;
      plVar6[2] = lVar10;
      return;
    }
    lVar10 = 0;
    plVar6 = (long *)(lStack_70 + 0x18);
    lStack_78 = param_3;
    do {
      if (lVar7 == 0) break;
      uVar4 = *(undefined8 *)(param_2 + 8);
      lVar1 = *(long *)(param_2 + 0x10);
      if (lVar1 == 0) {
        lVar3 = 1;
        _memcpy(1,uVar4,0);
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        lVar8 = *(long *)(param_2 + 0x28);
        if (lVar8 == 0) goto LAB_1011474a0;
LAB_101147528:
        lVar9 = _malloc(lVar8);
        if (lVar9 == 0) {
          func_0x0001087c9084(1,lVar8);
LAB_101147590:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101147594);
          (*pcVar2)();
        }
      }
      else {
        lVar3 = _malloc(lVar1);
        if (lVar3 == 0) {
          func_0x0001087c9084(1,lVar1);
          goto LAB_101147590;
        }
        _memcpy(lVar3,uVar4,lVar1);
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        lVar8 = *(long *)(param_2 + 0x28);
        if (lVar8 != 0) goto LAB_101147528;
LAB_1011474a0:
        lVar9 = 1;
      }
      param_2 = param_2 + 0x30;
      lVar10 = lVar10 + 1;
      _memcpy(lVar9,uVar4,lVar8);
      plVar6[-3] = lVar1;
      plVar6[-2] = lVar3;
      plVar6[-1] = lVar1;
      *plVar6 = lVar8;
      lVar7 = lVar7 + -0x30;
      plVar6[1] = lVar9;
      plVar6[2] = lVar8;
      plVar6 = plVar6 + 6;
    } while (param_3 != lVar10);
  }
  param_1[1] = lStack_70;
  *param_1 = lStack_78;
  param_1[2] = param_3;
  return;
}

