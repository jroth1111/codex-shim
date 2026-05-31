
undefined8 FUN_10098c3fc(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x24;
  undefined1 *unaff_x27;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 in_stack_00000218;
  
  *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000220;
  *(undefined **)(unaff_x29 + -0x70) = &UNK_10b208fd0;
  uVar2 = *(undefined8 *)(unaff_x24 + 0x160);
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x24 + 0x168);
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar2;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000218;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100df5738(&stack0x00000340);
  *(undefined1 *)(unaff_x19 + 0x200) = 0;
  if (*(long *)(unaff_x19 + 400) != -0x7fffffffffffffff) {
    *(undefined1 *)(unaff_x19 + 0x1f9) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x1f9) = 0;
  *(undefined2 *)(unaff_x19 + 0x1fb) = 0;
  *(undefined1 *)(unaff_x19 + 0x1fd) = 0;
  lVar1 = **(long **)(unaff_x19 + 0x140);
  **(long **)(unaff_x19 + 0x140) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7cbe8e2c0817b69fE(unaff_x19 + 0x140);
  }
  lVar1 = **(long **)(unaff_x19 + 0x138);
  **(long **)(unaff_x19 + 0x138) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x138);
  }
  *(undefined1 *)(unaff_x19 + 0x1fe) = 0;
  if (((*(byte *)(unaff_x19 + 0x1fa) & 1) != 0) && (*(long *)(unaff_x19 + 0x120) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x128));
  }
  *(undefined1 *)(unaff_x19 + 0x1fa) = 0;
  *unaff_x27 = 1;
  FUN_100cecd1c();
  *(undefined1 *)(unaff_x19 + 0xf50) = 1;
  return 0;
}

