
undefined8 FUN_1005f5d28(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  undefined1 *unaff_x24;
  
  FUN_1005f6df0(&stack0x00003a10);
  FUN_100df5738(&stack0x000084b0);
  *(undefined1 *)(unaff_x19 + 0x851) = 0;
  if (*(long *)(unaff_x19 + 0x818) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x820));
  }
  *(undefined1 *)(unaff_x19 + 0x850) = 0;
  *unaff_x24 = 1;
  FUN_100cc0d74();
  lVar2 = *(long *)(unaff_x19 + 0x7b8);
  lVar1 = lVar2;
  for (lVar3 = *(long *)(unaff_x19 + 0x7c0); lVar3 != 0; lVar3 = lVar3 + -1) {
    FUN_100e06c08(lVar1);
    lVar1 = lVar1 + 0x38;
  }
  if (*(long *)(unaff_x19 + 0x7b0) != 0) {
    _free(lVar2);
  }
  *(undefined1 *)(unaff_x19 + 0x7ac) = 0;
  lVar1 = **(long **)(unaff_x19 + 0x750);
  **(long **)(unaff_x19 + 0x750) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(unaff_x19 + 0x750);
  }
  *(undefined2 *)(unaff_x19 + 0x7ad) = 0;
  *(undefined1 *)(unaff_x19 + 0x7af) = 0;
  if ((*(byte *)(unaff_x19 + 0x7a5) & 1) != 0) {
    func_0x000100e2b238(unaff_x19 + 0x458);
  }
  *(undefined1 *)(unaff_x19 + 0x7a5) = 0;
  if ((*(long *)(unaff_x19 + 0x428) != 0) && ((*(byte *)(unaff_x19 + 0x7a6) & 1) != 0)) {
    FUN_100cb56bc(unaff_x19 + 0x428);
  }
  *(undefined1 *)(unaff_x19 + 0x7a6) = 0;
  *(undefined2 *)(unaff_x19 + 0x7aa) = 0;
  if ((*(byte *)(unaff_x19 + 0x7a7) & 1) != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x418);
    lVar1 = lVar2;
    for (lVar3 = *(long *)(unaff_x19 + 0x420); lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_100e06c08(lVar1);
      lVar1 = lVar1 + 0x38;
    }
    if (*(long *)(unaff_x19 + 0x410) != 0) {
      _free(lVar2);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x7a7) = 0;
  if (*(long *)(unaff_x19 + 0x228) < 0) {
    FUN_100def028(unaff_x19 + 0x228);
  }
  if (((*(byte *)(unaff_x19 + 0x7a8) & 1) != 0) && (*(long *)(unaff_x19 + 0x210) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x218));
  }
  *(undefined1 *)(unaff_x19 + 0x7a8) = 0;
  *(undefined1 *)(unaff_x19 + 0x7a1) = 1;
  return 0;
}

