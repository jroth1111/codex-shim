
/* WARNING: Possible PIC construction at 0x000100e1a86c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100dfb434: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100dfb438) */
/* WARNING: Removing unreachable block (ram,0x000100dfb440) */
/* WARNING: Removing unreachable block (ram,0x000100dfb448) */
/* WARNING: Removing unreachable block (ram,0x000100dfb450) */

void FUN_100dfb3ec(ulong *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined1 *puVar5;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar5 = &stack0xfffffffffffffff0;
  uVar4 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar4 = 1;
  }
  if (uVar4 == 0) {
LAB_100dfb420:
    param_1 = param_1 + 1;
    puVar1 = (undefined1 *)register0x00000008;
    puVar5 = unaff_x29;
SUB_100e1a840:
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(ulong **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar5;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    lVar2 = *(long *)param_1[0x81];
    *(long *)param_1[0x81] = lVar2 + -1;
    LORelease();
    if (lVar2 != 1) {
      if (param_1[0xb] != 0x8000000000000000) {
        FUN_100e1dd44();
      }
      FUN_100e28a08(param_1 + 0x26);
      lVar2 = *(long *)param_1[0x82];
      *(long *)param_1[0x82] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E(param_1 + 0x82);
      }
      lVar2 = *(long *)param_1[0x84];
      *(long *)param_1[0x84] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E(param_1 + 0x84);
      }
      if (*param_1 == 0) {
        return;
      }
      uVar4 = param_1[1];
      goto code_r0x000108aa97c4;
    }
    DataMemoryBarrier(2,1);
    puVar3 = param_1 + 0x81;
    unaff_x30 = 0x100e1a870;
    unaff_x19 = param_1;
  }
  else {
    if (uVar4 == 1) {
      unaff_x30 = 0x100dfb438;
      unaff_x19 = param_1;
      goto SUB_100e1a840;
    }
    if (uVar4 == 2) goto LAB_100dfb420;
    lVar2 = *(long *)param_1[1];
    *(long *)param_1[1] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105ca7698();
    }
    puVar3 = param_1 + 2;
    lVar2 = *(long *)*puVar3;
    *(long *)*puVar3 = lVar2 + -1;
    LORelease();
    if (lVar2 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar4 = *puVar3;
  FUN_105c23f48(uVar4 + 0x10);
  if (uVar4 != 0xffffffffffffffff) {
    lVar2 = *(long *)(uVar4 + 8);
    *(long *)(uVar4 + 8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(uVar4);
      return;
    }
  }
  return;
}

