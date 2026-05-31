
bool FUN_1005a5f80(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x23;
  long unaff_x29;
  long in_stack_00000210;
  undefined8 in_stack_00000218;
  
  *(char **)(unaff_x29 + -0xd8) = s__dropping_event_because_channel_i_108ac1844;
  *(undefined1 **)(unaff_x29 + -0xd0) = &stack0x00000400;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0xd8;
  *(undefined **)(unaff_x29 + -0x48) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x50;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if (in_stack_00000210 != 0) {
    _free(in_stack_00000218);
  }
  func_0x000100dfc74c(&stack0x00000228);
  *(undefined1 *)(unaff_x19 + 0x5e9) = 0;
  *(undefined1 *)(unaff_x19 + 0x5e8) = 1;
  return unaff_x23 == -0x7fffffffffffffff;
}

