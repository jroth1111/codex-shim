
undefined1  [16] FUN_1006e8c78(void)

{
  long lVar1;
  long unaff_x19;
  undefined1 auVar2 [16];
  undefined8 in_stack_00000730;
  
  FUN_1006eb014(&stack0x00000770);
  lVar1 = **(long **)(unaff_x19 + 0x130);
  **(long **)(unaff_x19 + 0x130) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1c1e707e916f6992E(unaff_x19 + 0x130);
  }
  *(undefined1 *)(unaff_x19 + 0x169) = 0;
  lVar1 = **(long **)(unaff_x19 + 0x128);
  **(long **)(unaff_x19 + 0x128) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1c1e707e916f6992E(unaff_x19 + 0x128);
  }
  *(undefined1 *)(unaff_x19 + 0x16a) = 0;
  if (*(long *)(unaff_x19 + 0x110) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x118));
  }
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x100));
  }
  if (*(long *)(unaff_x19 + 0xe0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xe8));
  }
  FUN_100e0a9d0(unaff_x19 + 0xc0);
  FUN_100e0a9d0(unaff_x19 + 0xa0);
  FUN_100e0a9d0(unaff_x19 + 0x80);
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x60));
  }
  *(undefined1 *)(unaff_x19 + 0x16b) = 0;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x48));
  }
  *(undefined1 *)(unaff_x19 + 0x16c) = 0;
  *(undefined1 *)(unaff_x19 + 0x168) = 1;
  auVar2._8_8_ = in_stack_00000730;
  auVar2._0_8_ = 1;
  return auVar2;
}

