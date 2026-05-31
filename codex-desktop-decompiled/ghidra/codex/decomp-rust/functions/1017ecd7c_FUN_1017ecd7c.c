
void FUN_1017ecd7c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long unaff_x29;
  char *pcStack0000000000000028;
  undefined1 *puStack0000000000000030;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  puStack0000000000000030 = &stack0x000000c0;
  pcStack0000000000000028 = s__received_unsupported_realtime_v_108adce3a;
  *(char ***)(unaff_x29 + -0x88) = &stack0x00000028;
  *(undefined **)(unaff_x29 + -0x80) = &UNK_10b25b0a0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 1;
  *(long *)(unaff_x29 + -200) = unaff_x29 + -0x88;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 *)(unaff_x29 + -0xb8) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *unaff_x19 = 0x800000000000000f;
  if (in_stack_000000a8 != 0) {
    _free(in_stack_000000b0);
  }
  FUN_1017a4698(&stack0x00000060);
  return;
}

