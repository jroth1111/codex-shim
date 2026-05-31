
undefined1  [16] FUN_1006e9b0c(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  long unaff_x19;
  ulong uVar3;
  long unaff_x26;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 *in_stack_00000730;
  
  *(undefined8 *)(unaff_x26 + 0xa8) = in_stack_000000f0;
  *(undefined8 *)(unaff_x26 + 0xa0) = in_stack_000000e8;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)*in_stack_00000730)();
  uVar3 = *(ulong *)(unaff_x19 + 0x170);
  *(undefined2 *)(unaff_x19 + 0x16d) = 0;
  lVar2 = **(long **)(unaff_x19 + 0x138);
  **(long **)(unaff_x19 + 0x138) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1c1e707e916f6992E(unaff_x19 + 0x138);
  }
  *(undefined2 *)(unaff_x19 + 0x169) = 0;
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
  *(undefined1 *)(unaff_x19 + 0x16b) = 0;
  *(undefined1 *)(unaff_x19 + 0x16c) = 0;
  *(undefined1 *)(unaff_x19 + 0x168) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  return auVar1 << 0x40;
}

