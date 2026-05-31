
void FUN_100aed6a0(undefined8 param_1)

{
  long unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined1 *puStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined1 *puStack0000000000000050;
  undefined *puStack0000000000000058;
  char *pcStack0000000000000060;
  undefined1 *puStack0000000000000068;
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
  long lStack00000000000000e8;
  
  puStack0000000000000068 = &stack0x00000070;
  pcStack0000000000000060 = s___108ac1f1a;
  puStack0000000000000050 = (undefined1 *)&stack0x00000060;
  puStack0000000000000058 = &UNK_10b208fd0;
  puStack0000000000000038 = (undefined1 *)&stack0x00000050;
  uStack0000000000000030 = 1;
  uStack0000000000000040 = 1;
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
  *(undefined8 **)(unaff_x29 + -0x50) = &stack0x00000030;
  *(undefined1 *)(unaff_x29 + -0x48) = 1;
  *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x38) = &DAT_1061c2098;
  uStack00000000000000a8 = 1;
  if (lStack00000000000000b0 == 0) {
    uStack00000000000000a8 = 2;
  }
  uStack00000000000000c8 = in_stack_00000020;
  uStack00000000000000c0 = in_stack_00000018;
  uStack00000000000000d0 = in_stack_00000028;
  lStack00000000000000e8 = unaff_x29 + -0x40;
  pcStack00000000000000e0 = s__108b39f4f;
  uStack0000000000000048 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  __ZN19codex_network_proxy9responses13text_response17hb12ec00a07c01d4aE(500,&UNK_108ca33da,5);
  (**(code **)*in_stack_00000010)();
  return;
}

