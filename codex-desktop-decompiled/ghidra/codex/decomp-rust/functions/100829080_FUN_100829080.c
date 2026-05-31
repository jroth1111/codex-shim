
undefined1  [16] FUN_100829080(undefined8 param_1)

{
  long unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  long lStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  long lStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  long lStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  char *pcStack00000000000000b8;
  long lStack00000000000000c0;
  
  *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000468;
  *(undefined **)(unaff_x29 + -0x60) = &UNK_10b208fd0;
  lStack0000000000000050 = unaff_x29 + -0x68;
  uStack0000000000000048 = 1;
  uStack0000000000000058 = 1;
  lStack0000000000000088 = *(long *)(unaff_x22 + 0x60);
  uStack0000000000000090 = *(undefined8 *)(unaff_x22 + 0x68);
  lStack0000000000000070 = *(long *)(unaff_x22 + 0x50);
  uStack0000000000000078 = *(undefined8 *)(unaff_x22 + 0x58);
  uStack0000000000000068 = 1;
  if (lStack0000000000000070 == 0) {
    uStack0000000000000068 = 2;
  }
  uStack00000000000000b0 = *(undefined4 *)(unaff_x22 + 8);
  uStack00000000000000b4 = *(undefined4 *)(unaff_x22 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x100) = &stack0x00000048;
  *(undefined1 *)(unaff_x29 + -0xf8) = 1;
  *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x100;
  *(undefined **)(unaff_x29 + -0xd8) = &DAT_1061c2098;
  uStack0000000000000080 = 1;
  if (lStack0000000000000088 == 0) {
    uStack0000000000000080 = 2;
  }
  uStack00000000000000a0 = in_stack_00000038;
  uStack0000000000000098 = in_stack_00000030;
  uStack00000000000000a8 = in_stack_00000040;
  lStack00000000000000c0 = unaff_x29 + -0xe0;
  pcStack00000000000000b8 = s__108b39f4f;
  uStack0000000000000060 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  return ZEXT816(0);
}

