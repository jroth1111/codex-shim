
void FUN_1006fbe60(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x29;
  undefined1 *puStack0000000000000058;
  undefined *puStack0000000000000060;
  char *pcStack0000000000000100;
  undefined1 *puStack0000000000000108;
  
  puStack0000000000000108 = &stack0x00000078;
  pcStack0000000000000100 = s_<south_socket:_write_error:_pack_108ac4826;
  puStack0000000000000058 = (undefined1 *)&stack0x00000100;
  puStack0000000000000060 = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined1 ***)(unaff_x29 + -0xb8) = &stack0x00000058;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar3 = *(ulong *)(unaff_x29 + -0xf8);
  uVar1 = uVar3 & 3;
  if (uVar1 == 1) {
    uVar4 = *(undefined8 *)(uVar3 - 1);
    puVar5 = *(undefined8 **)(uVar3 + 7);
    pcVar2 = (code *)*puVar5;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar4);
    }
    if (puVar5[1] != 0) {
      _free(uVar4);
    }
    _free((undefined8 *)(uVar3 - 1));
    uVar1 = extraout_x8;
  }
  unaff_x20[1] = 0;
  unaff_x20[2] = uVar1;
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x19 + 0x78) = 1;
  return;
}

