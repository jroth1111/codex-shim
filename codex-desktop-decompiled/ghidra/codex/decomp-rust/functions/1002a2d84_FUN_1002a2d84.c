
void FUN_1002a2d84(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack0000000000000028;
  undefined1 *puStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined1 *puStack0000000000000048;
  undefined *puStack0000000000000050;
  char *pcStack0000000000000058;
  undefined1 *puStack0000000000000060;
  undefined8 uStack0000000000000078;
  long lStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  
  puStack0000000000000060 = &stack0x00000068;
  pcStack0000000000000058 = s__recv_stream_window_update_____e_108ac8030;
  puStack0000000000000048 = (undefined1 *)&stack0x00000058;
  puStack0000000000000050 = &UNK_10b1f3630;
  puStack0000000000000030 = (undefined1 *)&stack0x00000048;
  uStack0000000000000028 = 1;
  uStack0000000000000038 = 1;
  lVar2 = *(long *)(unaff_x25 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x25 + 0x68);
  lStack0000000000000080 = *(long *)(unaff_x25 + 0x50);
  uStack0000000000000088 = *(undefined8 *)(unaff_x25 + 0x58);
  uStack0000000000000078 = 1;
  if (lStack0000000000000080 == 0) {
    uStack0000000000000078 = 2;
  }
  uStack00000000000000c0 = *(undefined4 *)(unaff_x25 + 8);
  uStack00000000000000c4 = *(undefined4 *)(unaff_x25 + 0xc);
  *(undefined8 **)(unaff_x26 + 0x60) = &stack0x00000028;
  *(undefined1 *)(unaff_x29 + -0x70) = 1;
  *(long *)(unaff_x26 + 0x70) = unaff_x29 + -0x78;
  *(undefined **)(unaff_x26 + 0x78) = &DAT_1061c2098;
  uVar1 = 1;
  if (lVar2 == 0) {
    uVar1 = 2;
  }
  *(undefined8 *)(unaff_x26 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x26 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x26 + 0x40) = in_stack_00000020;
  *(char **)(unaff_x26 + 0x50) = s__108b39f4f;
  *(long *)(unaff_x26 + 0x58) = unaff_x29 + -0x68;
  *(undefined8 *)(unaff_x26 + 0x18) = uVar1;
  *(long *)(unaff_x26 + 0x20) = lVar2;
  *(undefined8 *)(unaff_x26 + 0x28) = uVar3;
  uStack0000000000000040 = param_1;
  (**(code **)(unaff_x27 + 0x20))(in_stack_00000000,&stack0x00000078);
  FUN_1002a19f0();
  return;
}

