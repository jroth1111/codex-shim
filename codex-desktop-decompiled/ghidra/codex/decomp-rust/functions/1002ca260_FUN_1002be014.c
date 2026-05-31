
/* WARNING: Possible PIC construction at 0x0001002be06c: Changing call to branch */

void FUN_1002be014(long param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar6;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  FUN_1002ba428(param_1 + 0xd8);
  plVar5 = *(long **)(param_1 + 0x120);
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    *plVar5 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001002ca0bc(param_1 + 0x120);
    }
  }
  plVar5 = (long *)(param_1 + 0x78);
  lVar3 = *(long *)*plVar5;
  *(long *)*plVar5 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    unaff_x30 = 0x1002be070;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      *plVar5 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7894b98b68b4ed45E();
      }
    }
    lVar3 = **(long **)(param_1 + 0x110);
    **(long **)(param_1 + 0x110) = lVar3 + -1;
    LORelease();
    if (lVar3 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    plVar5 = (long *)(param_1 + 0x110);
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar3 = *plVar5;
  puVar2 = (undefined8 *)plVar5[1];
  uVar6 = puVar2[2];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(lVar3 + (uVar6 - 1 & 0xfffffffffffffff0) + 0x10);
  }
  if (lVar3 != -1) {
    lVar4 = *(long *)(lVar3 + 8);
    *(long *)(lVar3 + 8) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      if ((uVar6 + puVar2[1] + 0xf & -uVar6) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar3);
        return;
      }
    }
  }
  return;
}

