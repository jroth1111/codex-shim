
/* WARNING: Possible PIC construction at 0x000105c1fc38: Changing call to branch */

void FUN_105c1fbe0(ulong *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar7;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar6 = (long *)param_1[3];
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    *plVar6 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc4b43ecce23ab07eE();
    }
  }
  if (1 < *param_1) {
    puVar5 = param_1 + 1;
    lVar4 = *(long *)*puVar5;
    *(long *)*puVar5 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      unaff_x30 = 0x105c1fc3c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x19 = param_1;
      unaff_x29 = puVar1;
      goto __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2f72e2a0def04745E;
    }
  }
  puVar5 = param_1 + 4;
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    *plVar6 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2f72e2a0def04745E:
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar2 = *puVar5;
      puVar3 = (undefined8 *)puVar5[1];
      uVar7 = puVar3[2];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar2 + (uVar7 - 1 & 0xfffffffffffffff0) + 0x10);
      }
      if (uVar2 != 0xffffffffffffffff) {
        lVar4 = *(long *)(uVar2 + 8);
        *(long *)(uVar2 + 8) = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          if (uVar7 < 9) {
            uVar7 = 8;
          }
          if ((uVar7 + puVar3[1] + 0xf & -uVar7) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_10b61b0a8)(uVar2);
            return;
          }
        }
      }
      return;
    }
  }
  return;
}

