
undefined1  [16] FUN_101696f34(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long *plVar4;
  long lVar5;
  ulong *unaff_x24;
  ulong in_xzr;
  byte in_stack_00000060;
  
  FUN_1016979d4(&stack0x00001680);
  if ((in_stack_00000060 & 1) != 0) {
    FUN_100cdd078(&stack0x00000060);
  }
  lVar2 = **(long **)(unaff_x19 + 0x80);
  **(long **)(unaff_x19 + 0x80) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbc4ddf33f5ab629fE();
  }
  if ((*(byte *)(unaff_x19 + 0x101) & 1) != 0) {
    plVar4 = (long *)(unaff_x19 + 0x78);
    lVar5 = *plVar4;
    LOAcquire();
    lVar2 = *(long *)(lVar5 + 0x1f0);
    *(long *)(lVar5 + 0x1f0) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      LOAcquire();
      lVar2 = *(long *)(lVar5 + 0x88);
      *(long *)(lVar5 + 0x88) = lVar2 + 1;
      lVar2 = FUN_100fca4a4(lVar5 + 0x80,lVar2);
      *(ulong *)(lVar2 + 0x3f10) = *(ulong *)(lVar2 + 0x3f10) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar5 + 0x110);
      LOAcquire();
      uVar3 = *puVar1;
      *puVar1 = uVar3 | 2;
      LORelease();
      if (uVar3 == 0) {
        lVar2 = *(long *)(lVar5 + 0x100);
        *(undefined8 *)(lVar5 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar5 + 0x108));
        }
      }
    }
    lVar2 = *(long *)*plVar4;
    *(long *)*plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h20edc871926e8591E(plVar4);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x101) = 0;
  if (((*(byte *)(unaff_x19 + 0x102) & 1) != 0) && ((*unaff_x24 & 0x7fffffffffffffff) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x58));
  }
  *(undefined1 *)(unaff_x19 + 0x102) = 0;
  *(undefined1 *)(unaff_x19 + 0x100) = 1;
  return ZEXT816(0);
}

