
bool FUN_100895444(void)

{
  long unaff_x19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  long in_stack_000003a8;
  undefined8 in_stack_000003b0;
  long in_stack_00000640;
  undefined8 in_stack_00000648;
  long in_stack_00000658;
  
  *(char **)(unaff_x29 + -0x88) = s_could_not_notify_callback_for_du_108ac9ee2;
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000470;
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x88;
  *(undefined **)(unaff_x29 + -0x58) = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if (in_stack_00000640 == -0x8000000000000000) {
    FUN_100de6690((ulong)&stack0x00000640 | 8);
  }
  else {
    if (in_stack_00000658 != unaff_x25 + -6) {
      FUN_100de6690(&stack0x00000658);
    }
    if (in_stack_00000640 != 0) {
      _free(in_stack_00000648);
    }
  }
  func_0x000100e45ab8();
  if ((in_stack_000003a8 != -0x8000000000000000) && (in_stack_000003a8 != 0)) {
    _free(in_stack_000003b0);
  }
  if ((*(byte *)(unaff_x19 + 0x169) & 1) != 0) {
    FUN_100de6690(unaff_x19 + 0x88);
  }
  *(undefined1 *)(unaff_x19 + 0x169) = 0;
  if ((*(long *)(unaff_x19 + 0x70) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x70) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x78));
  }
  *(undefined1 *)(unaff_x19 + 0x168) = 1;
  return unaff_x23 == unaff_x24;
}

