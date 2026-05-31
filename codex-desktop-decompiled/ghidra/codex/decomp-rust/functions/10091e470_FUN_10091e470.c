
undefined8 FUN_10091e470(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined1 *puStack0000000000000058;
  undefined *puStack0000000000000060;
  char *pcStack0000000000000068;
  undefined1 *puStack0000000000000070;
  undefined8 uStack0000000000000088;
  undefined1 *puStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  
  puStack0000000000000070 = &stack0x00000078;
  pcStack0000000000000068 = s__failed_to_refresh_token_while_g_108acb4f6;
  puStack0000000000000058 = (undefined1 *)&stack0x00000068;
  puStack0000000000000060 = &UNK_10b208fd0;
  puStack0000000000000090 = (undefined1 *)&stack0x00000058;
  uStack0000000000000088 = 1;
  uStack0000000000000098 = 1;
  uStack00000000000000a0 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if (in_stack_00000020 == -0x8000000000000000) {
    if (((ulong)in_stack_00000028 & 3) != 1) goto LAB_10091e4dc;
    puVar2 = (undefined8 *)((long)in_stack_00000028 + -1);
    uVar3 = *puVar2;
    puVar4 = *(undefined8 **)((long)in_stack_00000028 + 7);
    pcVar1 = (code *)*puVar4;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
    in_stack_00000028 = puVar2;
    if (puVar4[1] != 0) {
      _free(uVar3);
    }
  }
  else if (in_stack_00000020 == 0) goto LAB_10091e4dc;
  _free(in_stack_00000028);
LAB_10091e4dc:
  *(undefined1 *)(unaff_x19 + 0xee0) = 1;
  return 1;
}

