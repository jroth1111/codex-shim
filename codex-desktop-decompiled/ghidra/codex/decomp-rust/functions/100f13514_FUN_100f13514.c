
void FUN_100f13514(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined1 *puStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  long lStack0000000000000108;
  undefined *puStack0000000000000110;
  
  *(char **)(unaff_x29 + -0x48) = s_Failed_to_parse_message_____Erro_108ad3d3d;
  *(undefined1 **)(unaff_x29 + -0x40) = &stack0x00000090;
  lStack0000000000000108 = unaff_x29 + -0x48;
  puStack0000000000000110 = &UNK_10b208fd0;
  puStack0000000000000050 = (undefined1 *)&stack0x00000108;
  uStack0000000000000048 = 1;
  uStack0000000000000058 = 1;
  uStack0000000000000060 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  unaff_x19[2] = in_stack_00000040;
  unaff_x19[1] = 1;
  *unaff_x19 = 0x16;
  return;
}

