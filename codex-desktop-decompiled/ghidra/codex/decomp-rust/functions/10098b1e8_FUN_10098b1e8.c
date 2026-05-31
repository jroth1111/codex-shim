
undefined8 FUN_10098b1e8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x25;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar2;
  undefined1 *in_stack_00000000;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  *(char **)(unaff_x29 + -0xa0) = s__failed_to_submit_RequestPermiss_108acc5aa;
  *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x90;
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xa0;
  *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
  lStack0000000000000078 = unaff_x29 + -0xb0;
  uStack0000000000000070 = 1;
  uStack0000000000000080 = 1;
  uVar2 = *(undefined8 *)(unaff_x29 + -200);
  *(undefined8 *)(unaff_x27 + 0xe8) = *(undefined8 *)(unaff_x29 + -0xc0);
  *(undefined8 *)(unaff_x27 + 0xe0) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0xb8);
  uStack0000000000000088 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
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

