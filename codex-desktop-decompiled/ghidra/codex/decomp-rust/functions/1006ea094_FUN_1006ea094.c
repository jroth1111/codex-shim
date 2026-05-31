
undefined1  [16] FUN_1006ea094(void)

{
  long unaff_x19;
  long unaff_x26;
  undefined1 auVar1 [16];
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000730;
  
  *(undefined8 *)(unaff_x26 + 0xa8) = in_stack_00000070;
  *(undefined8 *)(unaff_x26 + 0xa0) = in_stack_00000068;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
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
  auVar1._8_8_ = in_stack_00000730;
  auVar1._0_8_ = 1;
  return auVar1;
}

