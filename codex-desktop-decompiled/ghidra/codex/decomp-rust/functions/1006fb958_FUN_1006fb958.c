
void FUN_1006fb958(undefined8 param_1)

{
  undefined8 extraout_x8;
  long in_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x26;
  long unaff_x29;
  char *pcStack0000000000000058;
  undefined1 *puStack0000000000000060;
  undefined8 uStack0000000000000100;
  long lStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  long lStack0000000000000160;
  
  puStack0000000000000060 = &stack0x00000078;
  pcStack0000000000000058 = s__drop_packet_south__length_is_to_108ac46f0;
  lStack0000000000000160 = in_x9 + 0xb2;
  *(long *)(unaff_x29 + -0xe0) = in_x9 + 0xb0;
  *(long *)(unaff_x29 + -0xd0) = unaff_x19 + 0x52;
  *(undefined8 *)(unaff_x29 + -0xf8) = unaff_x26;
  *(char ***)(unaff_x29 + -0xc0) = &stack0x00000058;
  *(undefined **)(unaff_x29 + -0xb8) = &UNK_10b208fd0;
  *(long **)(unaff_x29 + -0xb0) = &stack0x00000160;
  *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b21ec18;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0xe0;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b21ec38;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0xd0;
  *(undefined **)(unaff_x29 + -0x88) = &UNK_10b21ec18;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xf8;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b21ec38;
  lStack0000000000000108 = unaff_x29 + -0xc0;
  uStack0000000000000100 = 1;
  uStack0000000000000110 = 5;
  uStack0000000000000118 = param_1;
  FUN_1006fc1ac(&stack0x00000100);
  (**(code **)(*(long *)(unaff_x19 + 0x230) + 0x20))
            (unaff_x19 + 0x248,*(undefined8 *)(unaff_x19 + 0x238),*(undefined8 *)(unaff_x19 + 0x240)
            );
  unaff_x20[1] = 0;
  unaff_x20[2] = extraout_x8;
  *unaff_x20 = 0;
  *(undefined1 *)(unaff_x19 + 0x78) = 1;
  return;
}

