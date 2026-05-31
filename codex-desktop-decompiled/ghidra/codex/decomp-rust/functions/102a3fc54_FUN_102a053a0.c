
/* WARNING: Possible PIC construction at 0x000102a053f0: Changing call to branch */

void FUN_102a053a0(ulong *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar7 = *param_1;
  bVar4 = uVar7 != 0x8000000000000000;
  if (uVar7 < 0x8000000000000001) {
    uVar7 = 0;
  }
  if (bVar4 && (uVar7 & 0x7fffffffffffffff) == 0) {
    FUN_102a22e60(param_1);
  }
  puVar6 = param_1 + 5;
  lVar5 = *(long *)*puVar6;
  *(long *)*puVar6 = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    unaff_x30 = 0x102a053f4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0a09de1abf1f5717E:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar2 = *puVar6;
    puVar3 = (undefined8 *)puVar6[1];
    uVar7 = puVar3[2];
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2 + (uVar7 - 1 & 0xfffffffffffffff0) + 0x10);
    }
    if (uVar2 != 0xffffffffffffffff) {
      lVar5 = *(long *)(uVar2 + 8);
      *(long *)(uVar2 + 8) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
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
  puVar6 = param_1 + 7;
  plVar8 = (long *)*puVar6;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    *plVar8 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      goto __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0a09de1abf1f5717E;
    }
  }
  return;
}

