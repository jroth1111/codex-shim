
/* WARNING: Possible PIC construction at 0x000100d1c958: Changing call to branch */

void FUN_100d1c894(long param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0xe88) == '\0') {
    func_0x000100deab40(param_1);
    if (*(long *)(param_1 + 0x338) != -0x8000000000000000) {
      lVar3 = *(long *)(param_1 + 0x358);
      if ((lVar3 != 0) && (lVar3 * 9 != -0x11)) {
        _free(*(long *)(param_1 + 0x350) + lVar3 * -8 + -8);
      }
      plVar4 = (long *)(param_1 + 0x338);
SUB_100cd7284:
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      plVar2 = (long *)plVar4[1];
      lVar3 = plVar4[2] + 1;
      plVar5 = plVar2;
      while (lVar3 = lVar3 + -1, lVar3 != 0) {
        if (*plVar5 != 0) {
          _free(plVar5[1]);
        }
        FUN_100de6690(plVar5 + 3);
        plVar5 = plVar5 + 0xd;
      }
      if (*plVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(plVar2);
        return;
      }
      return;
    }
  }
  else if (*(char *)(param_1 + 0xe88) == '\x03') {
    func_0x000100d76e48(param_1 + 0x758);
    func_0x000100d2f3dc(param_1 + 0x750);
    *(undefined2 *)(param_1 + 0xe89) = 0;
    plVar4 = *(long **)(param_1 + 0x740);
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      *plVar4 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x740);
      }
    }
    *(undefined1 *)(param_1 + 0xe8b) = 0;
    plVar4 = *(long **)(param_1 + 0x730);
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      *plVar4 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x730);
      }
    }
    *(undefined1 *)(param_1 + 0xe8c) = 0;
    if (*(long *)(param_1 + 0x6d8) != -0x8000000000000000) {
      lVar3 = *(long *)(param_1 + 0x6f8);
      if ((lVar3 != 0) && (lVar3 * 9 != -0x11)) {
        _free(*(long *)(param_1 + 0x6f0) + lVar3 * -8 + -8);
      }
      plVar4 = (long *)(param_1 + 0x6d8);
      unaff_x30 = 0x100d1c95c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      unaff_x19 = param_1;
      unaff_x29 = puVar1;
      goto SUB_100cd7284;
    }
    *(undefined2 *)(param_1 + 0xe8d) = 0;
  }
  return;
}

