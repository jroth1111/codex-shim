
void FUN_1017ed818(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long unaff_x29;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(char **)(unaff_x29 + -0x78) = s__received_unsupported_realtime_v_108adce74;
  *(undefined1 **)(unaff_x29 + -0x70) = &stack0x000000c0;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x78;
  *(undefined **)(unaff_x29 + -0x80) = &UNK_10b25b0a0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(long *)(unaff_x29 + -200) = unaff_x29 + -0x88;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 *)(unaff_x29 + -0xb8) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *unaff_x19 = 0x800000000000000f;
  if (in_stack_00000028 != 0) {
    _free(in_stack_00000030);
  }
  FUN_1017a4698(&stack0x00000060);
  return;
}

