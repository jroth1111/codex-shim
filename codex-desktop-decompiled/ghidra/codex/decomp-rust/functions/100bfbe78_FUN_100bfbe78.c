
undefined8 FUN_100bfbe78(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x29;
  undefined1 *puStack0000000000000030;
  undefined *puStack0000000000000038;
  char *pcStack0000000000000050;
  long lStack0000000000000058;
  undefined8 uStack0000000000000090;
  undefined1 *puStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  
  lStack0000000000000058 = unaff_x29 + -0xc0;
  pcStack0000000000000050 = s_7remote_control_websocket_auth_r_108ad263c;
  puStack0000000000000030 = (undefined1 *)&stack0x00000050;
  puStack0000000000000038 = &UNK_10b208fd0;
  puStack0000000000000098 = (undefined1 *)&stack0x00000030;
  uStack0000000000000090 = 1;
  uStack00000000000000a0 = 1;
  uStack00000000000000a8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(undefined1 *)(unaff_x19 + 0xe68) = 1;
  return 1;
}

