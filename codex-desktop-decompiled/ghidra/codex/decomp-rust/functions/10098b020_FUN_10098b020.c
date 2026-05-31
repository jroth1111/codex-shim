
undefined8 FUN_10098b020(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x25;
  long unaff_x29;
  undefined1 *in_stack_00000000;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  *(char **)(unaff_x29 + -0x90) = s__failed_to_submit_RequestPermiss_108acc5aa;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x80;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  lStack0000000000000078 = unaff_x29 + -0xa0;
  uStack0000000000000070 = 1;
  uStack0000000000000080 = 1;
  uStack0000000000000088 = param_1;
  func_0x000100990798(&stack0x00000070);
  FUN_100df5738(&stack0x00000120);
  *(undefined1 *)(unaff_x20 + 0x336) = 0;
  *(undefined2 *)(unaff_x20 + 0x331) = 0;
  lVar1 = **(long **)(unaff_x20 + 0x260);
  **(long **)(unaff_x20 + 0x260) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(unaff_x20 + 0x260);
  }
  lVar1 = **(long **)(unaff_x20 + 0x268);
  **(long **)(unaff_x20 + 0x268) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc434be58f634db7bE(unaff_x20 + 0x268);
  }
  *(undefined1 *)(unaff_x20 + 0x333) = 0;
  if (*(long *)(unaff_x20 + 0x230) != 0) {
    _free(*(undefined8 *)(unaff_x20 + 0x238));
  }
  *(undefined2 *)(unaff_x20 + 0x334) = 0;
  lVar1 = **(long **)(unaff_x20 + 0x1e8);
  **(long **)(unaff_x20 + 0x1e8) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x20 + 0x1e8);
  }
  lVar1 = **(long **)(unaff_x20 + 0x1e0);
  **(long **)(unaff_x20 + 0x1e0) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x20 + 0x1e0);
  }
  *in_stack_00000000 = 1;
  FUN_100cf1ba8();
  *(undefined1 *)(unaff_x25 + 0xd16) = 1;
  return 0;
}

