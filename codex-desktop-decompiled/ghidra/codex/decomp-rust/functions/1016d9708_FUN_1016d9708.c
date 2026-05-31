
undefined8 FUN_1016d9708(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x23;
  undefined8 *in_stack_00000008;
  char *pcStack0000000000000010;
  undefined1 *puStack0000000000000018;
  undefined8 uStack0000000000000068;
  undefined1 *puStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined1 *puStack0000000000000088;
  undefined *puStack0000000000000090;
  
  puStack0000000000000018 = &stack0x000000a0;
  pcStack0000000000000010 = s_>failed_to_restore_side_conversa_108adbb11;
  puStack0000000000000088 = (undefined1 *)&stack0x00000010;
  puStack0000000000000090 = &UNK_10b208fd0;
  puStack0000000000000070 = (undefined1 *)&stack0x00000088;
  uStack0000000000000068 = 1;
  uStack0000000000000078 = 1;
  uStack0000000000000080 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  (**(code **)*in_stack_00000008)();
  *(undefined1 *)(unaff_x19 + unaff_x23) = 1;
  return 0;
}

