
void FUN_1002fc604(void)

{
  undefined1 *unaff_x19;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000078;
  long lStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  *(char **)(unaff_x29 + -0x58) = s_current_throughput__is_below_min_108abac76;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x78;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x58;
  *(undefined **)(unaff_x29 + -0x80) = &UNK_10b1f8a98;
  lStack0000000000000080 = unaff_x29 + -0x88;
  uStack0000000000000078 = 1;
  uStack0000000000000088 = 1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 8) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
  *unaff_x19 = 1;
  return;
}

