
undefined8 FUN_100bfbf88(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  char *pcStack0000000000000050;
  long lStack0000000000000058;
  undefined8 uStack0000000000000090;
  undefined1 *puStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined1 *puStack00000000000000d8;
  undefined *puStack00000000000000e0;
  
  lStack0000000000000058 = unaff_x29 + -0xc0;
  pcStack0000000000000050 = s_4remote_control_websocket_auth_r_108ad2696;
  puStack00000000000000d8 = (undefined1 *)&stack0x00000050;
  puStack00000000000000e0 = &UNK_10b208fd0;
  puStack0000000000000098 = (undefined1 *)&stack0x000000d8;
  uStack0000000000000090 = 1;
  uStack00000000000000a0 = 1;
  uStack00000000000000a8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if (in_stack_00000030 == -0x8000000000000000) {
    if (((ulong)in_stack_00000038 & 3) != 1) goto LAB_100bfc004;
    puVar2 = (undefined8 *)((long)in_stack_00000038 + -1);
    uVar3 = *puVar2;
    puVar4 = *(undefined8 **)((long)in_stack_00000038 + 7);
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
    in_stack_00000038 = puVar2;
    if (puVar4[1] != 0) {
      _free(uVar3);
    }
  }
  else if (in_stack_00000030 == 0) goto LAB_100bfc004;
  _free(in_stack_00000038);
LAB_100bfc004:
  *(undefined1 *)(unaff_x19 + 0xe68) = 1;
  return 0;
}

