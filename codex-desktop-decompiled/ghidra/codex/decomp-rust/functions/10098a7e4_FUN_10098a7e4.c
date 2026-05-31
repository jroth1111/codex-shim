
undefined8 FUN_10098a7e4(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar2;
  
  *(char **)(unaff_x29 + -0x90) = s__failed_to_submit_ResolveElicita_108acc4fa;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x80;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xa0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  uVar2 = *(undefined8 *)(unaff_x25 + 0x98);
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x25 + 0xa0);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -200);
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100df5738(&stack0x00000180);
  *(undefined2 *)(unaff_x19 + 0x246) = 0;
  *(undefined2 *)(unaff_x19 + 0x241) = 0;
  lVar1 = **(long **)(unaff_x19 + 0x188);
  **(long **)(unaff_x19 + 0x188) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x188);
  }
  lVar1 = **(long **)(unaff_x19 + 0x180);
  **(long **)(unaff_x19 + 0x180) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x180);
  }
  *(undefined2 *)(unaff_x19 + 0x243) = 0;
  *(undefined1 *)(unaff_x19 + 0x245) = 0;
  *(undefined1 *)(unaff_x19 + 0x240) = 1;
  FUN_100cf9b58();
  *(undefined1 *)(unaff_x19 + 0xfc0) = 1;
  return 0;
}

