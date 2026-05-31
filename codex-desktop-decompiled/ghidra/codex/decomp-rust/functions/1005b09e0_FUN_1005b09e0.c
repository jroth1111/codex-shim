
undefined8 FUN_1005b09e0(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  undefined1 *puStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined1 *puStack0000000000000058;
  undefined *puStack0000000000000060;
  char *pcStack0000000000000068;
  long lStack0000000000000070;
  long lStack0000000000000078;
  undefined *puStack0000000000000080;
  undefined8 uStack0000000000000090;
  long lStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  long lStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  char *pcStack00000000000000e0;
  undefined1 *puStack00000000000000e8;
  
  lStack0000000000000070 = unaff_x29 + -0x50;
  pcStack0000000000000068 = s__No_pending_user_input_found_for_108ac1988;
  puStack0000000000000058 = (undefined1 *)&stack0x00000068;
  puStack0000000000000060 = &UNK_10b208fd0;
  puStack0000000000000008 = (undefined1 *)&stack0x00000058;
  uStack0000000000000000 = 1;
  uStack0000000000000010 = 1;
  lStack00000000000000b0 = *(long *)(unaff_x22 + 0x60);
  uStack00000000000000b8 = *(undefined8 *)(unaff_x22 + 0x68);
  lStack0000000000000098 = *(long *)(unaff_x22 + 0x50);
  uStack00000000000000a0 = *(undefined8 *)(unaff_x22 + 0x58);
  uStack0000000000000090 = 1;
  if (lStack0000000000000098 == 0) {
    uStack0000000000000090 = 2;
  }
  uStack00000000000000d8 = *(undefined4 *)(unaff_x22 + 8);
  uStack00000000000000dc = *(undefined4 *)(unaff_x22 + 0xc);
  *(BADSPACEBASE **)(unaff_x29 + -0x40) = register0x00000008;
  *(undefined1 *)(unaff_x29 + -0x38) = 1;
  lStack0000000000000078 = unaff_x29 + -0x40;
  puStack0000000000000080 = &DAT_1061c2098;
  uStack00000000000000a8 = 1;
  if (lStack00000000000000b0 == 0) {
    uStack00000000000000a8 = 2;
  }
  uStack00000000000000c8 = in_stack_00000048;
  uStack00000000000000c0 = in_stack_00000040;
  uStack00000000000000d0 = in_stack_00000050;
  puStack00000000000000e8 = (undefined1 *)&stack0x00000078;
  pcStack00000000000000e0 = s__108b39f4f;
  uStack0000000000000018 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  if ((*(byte *)(unaff_x19 + 0x90) & 1) != 0) {
    func_0x000100d30908(unaff_x19 + 0x10);
  }
  *(undefined1 *)(unaff_x19 + 0x90) = 0;
  *(undefined1 *)(unaff_x19 + 0x91) = 1;
  return 0;
}

