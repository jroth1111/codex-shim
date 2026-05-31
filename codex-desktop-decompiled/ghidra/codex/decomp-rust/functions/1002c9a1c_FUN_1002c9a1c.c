
undefined8 FUN_1002c9a1c(undefined8 param_1)

{
  long unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined1 *puStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  char *pcStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 uStack0000000000000070;
  long lStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  long lStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  char *pcStack00000000000000c0;
  long lStack00000000000000c8;
  
  puStack0000000000000058 = &stack0x00000060;
  pcStack0000000000000050 = s__idle_interval_evicting_closed_f_108ab8d02;
  puStack0000000000000040 = (undefined1 *)&stack0x00000050;
  puStack0000000000000048 = &UNK_10b1f3630;
  puStack0000000000000028 = (undefined1 *)&stack0x00000040;
  uStack0000000000000020 = 1;
  uStack0000000000000030 = 1;
  lStack0000000000000090 = *(long *)(unaff_x22 + 0x60);
  uStack0000000000000098 = *(undefined8 *)(unaff_x22 + 0x68);
  lStack0000000000000078 = *(long *)(unaff_x22 + 0x50);
  uStack0000000000000080 = *(undefined8 *)(unaff_x22 + 0x58);
  uStack0000000000000070 = 1;
  if (lStack0000000000000078 == 0) {
    uStack0000000000000070 = 2;
  }
  uStack00000000000000b8 = *(undefined4 *)(unaff_x22 + 8);
  uStack00000000000000bc = *(undefined4 *)(unaff_x22 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x50) = &stack0x00000020;
  *(undefined1 *)(unaff_x29 + -0x48) = 1;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x38) = &DAT_1061c2098;
  uStack0000000000000088 = 1;
  if (lStack0000000000000090 == 0) {
    uStack0000000000000088 = 2;
  }
  uStack00000000000000a8 = in_stack_00000010;
  uStack00000000000000a0 = in_stack_00000008;
  uStack00000000000000b0 = in_stack_00000018;
  lStack00000000000000c8 = unaff_x29 + -0x40;
  pcStack00000000000000c0 = s__108b39f4f;
  uStack0000000000000038 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  return 0;
}

