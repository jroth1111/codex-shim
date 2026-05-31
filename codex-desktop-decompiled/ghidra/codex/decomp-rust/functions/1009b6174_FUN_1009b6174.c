
undefined8 FUN_1009b6174(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x29;
  long lStack0000000000000100;
  undefined *puStack0000000000000108;
  
  *(char **)(unaff_x29 + -0xd0) = s__failed_to_submit_denied_PatchAp_108accd8e;
  *(long *)(unaff_x29 + -200) = unaff_x29 + -0xa8;
  lStack0000000000000100 = unaff_x29 + -0xd0;
  puStack0000000000000108 = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0x88) = 1;
  *(long **)(unaff_x29 + -0x80) = &stack0x00000100;
  *(undefined8 *)(unaff_x29 + -0x78) = 1;
  *(undefined8 *)(unaff_x29 + -0x70) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100df5738(&stack0x000001a0);
  lVar1 = **(long **)(unaff_x19 + 0x68);
  **(long **)(unaff_x19 + 0x68) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x58));
  }
  *(undefined2 *)(unaff_x19 + 0xb8) = 1;
  FUN_100cc5b38();
  *(undefined1 *)(unaff_x19 + 0xdc0) = 1;
  return 0;
}

