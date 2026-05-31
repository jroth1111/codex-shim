
/* WARNING: Possible PIC construction at 0x000100340ef8: Changing call to branch */

void FUN_100340ea4(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  ulong uVar8;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar2 = *param_1;
  puVar3 = (undefined8 *)param_1[1];
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(uVar2);
  }
  if (puVar3[1] != 0) {
    _free(uVar2);
  }
  plVar6 = param_1 + 2;
  lVar4 = *(long *)*plVar6;
  *(long *)*plVar6 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    unaff_x30 = 0x100340efc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = puVar3;
    unaff_x21 = uVar2;
    unaff_x29 = puVar1;
__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h05a163dc1ebb79c2E:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar4 = *plVar6;
    puVar3 = (undefined8 *)plVar6[1];
    uVar8 = puVar3[2];
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(lVar4 + (uVar8 - 1 & 0xfffffffffffffff0) + 0x10);
    }
    if (lVar4 != -1) {
      lVar5 = *(long *)(lVar4 + 8);
      *(long *)(lVar4 + 8) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        if ((uVar8 + puVar3[1] + 0xf & -uVar8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar4);
          return;
        }
      }
    }
    return;
  }
  plVar6 = param_1 + 4;
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    *plVar7 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      goto __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h05a163dc1ebb79c2E;
    }
  }
  return;
}

