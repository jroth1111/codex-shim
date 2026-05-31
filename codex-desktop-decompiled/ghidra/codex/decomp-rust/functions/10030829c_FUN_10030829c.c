
void FUN_10030829c(void)

{
  long unaff_x19;
  long unaff_x29;
  double unaff_d8;
  double unaff_d9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  char *pcStack0000000000000050;
  long lStack0000000000000058;
  undefined8 uStack00000000000000a8;
  undefined1 *puStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined1 *puStack00000000000000c8;
  undefined *puStack00000000000000d0;
  
  lStack0000000000000058 = unaff_x29 + -0xd0;
  pcStack0000000000000050 = s_current_throughput__is_below_min_108abac76;
  puStack00000000000000c8 = (undefined1 *)&stack0x00000050;
  puStack00000000000000d0 = &UNK_10b1f8a98;
  puStack00000000000000b0 = (undefined1 *)&stack0x000000c8;
  uStack00000000000000a8 = 1;
  uStack00000000000000b8 = 1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 8) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
  *(bool *)unaff_x19 = unaff_d9 < unaff_d8;
  return;
}

