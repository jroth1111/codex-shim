
uint FUN_1004f3050(undefined8 param_1)

{
  long unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  long lStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  long lStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  char *pcStack0000000000000050;
  long lStack0000000000000058;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  *(char **)(unaff_x29 + -0x88) = s__failed_to_prepare_external_goal_108abfd2f;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x60;
  *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x88;
  *(undefined **)(unaff_x29 + -0x90) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 1;
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x98;
  *(undefined8 *)(unaff_x29 + -0xa8) = 1;
  *(undefined8 *)(unaff_x29 + -0xa0) = param_1;
  lStack0000000000000020 = *(long *)(unaff_x23 + 0x60);
  uStack0000000000000028 = *(undefined8 *)(unaff_x23 + 0x68);
  lStack0000000000000008 = *(long *)(unaff_x23 + 0x50);
  uStack0000000000000010 = *(undefined8 *)(unaff_x23 + 0x58);
  uStack0000000000000000 = 1;
  if (lStack0000000000000008 == 0) {
    uStack0000000000000000 = 2;
  }
  uStack0000000000000048 = *(undefined4 *)(unaff_x23 + 8);
  uStack000000000000004c = *(undefined4 *)(unaff_x23 + 0xc);
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0xb8;
  *(undefined1 *)(unaff_x29 + -0x48) = 1;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x70) = &DAT_1061c2098;
  uStack0000000000000018 = 1;
  if (lStack0000000000000020 == 0) {
    uStack0000000000000018 = 2;
  }
  uStack0000000000000038 = in_stack_000000d8;
  uStack0000000000000030 = in_stack_000000d0;
  uStack0000000000000040 = in_stack_000000e0;
  lStack0000000000000058 = unaff_x29 + -0x78;
  pcStack0000000000000050 = s__108b39f4f;
  (**(code **)(unaff_x22 + 0x20))();
  (**(code **)*in_stack_000000b8)();
  *(undefined1 *)(unaff_x19 + 0x18) = 1;
  return unaff_w20 & 1;
}

