
undefined8 FUN_1009b4290(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 *unaff_x28;
  long unaff_x29;
  char *pcStack0000000000000110;
  long lStack0000000000000118;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined8 uStack00000000000001b0;
  long lStack00000000000001b8;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001c8;
  long lStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  
  lStack0000000000000118 = unaff_x29 + -0xc0;
  pcStack0000000000000110 = s_request_failed__108ac9ce2;
  *(char ***)(unaff_x29 + -0xd0) = &stack0x00000110;
  *(undefined **)(unaff_x29 + -200) = &UNK_10b208fd0;
  uStack0000000000000130 = 1;
  uStack0000000000000140 = 1;
  lStack00000000000001d0 = *(long *)(unaff_x22 + 0x60);
  uStack00000000000001d8 = *(undefined8 *)(unaff_x22 + 0x68);
  lStack00000000000001b8 = *(long *)(unaff_x22 + 0x50);
  uStack00000000000001c0 = *(undefined8 *)(unaff_x22 + 0x58);
  uStack00000000000001b0 = 1;
  if (lStack00000000000001b8 == 0) {
    uStack00000000000001b0 = 2;
  }
  *(undefined8 **)(unaff_x29 + -0xa0) = &stack0x00000130;
  *(undefined1 *)(unaff_x29 + -0x98) = 1;
  *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
  *(undefined **)(unaff_x29 + -0x78) = &DAT_1061c2098;
  uStack00000000000001c8 = 1;
  if (lStack00000000000001d0 == 0) {
    uStack00000000000001c8 = 2;
  }
  uStack00000000000001e8 = unaff_x28[1];
  uStack00000000000001e0 = *unaff_x28;
  uStack0000000000000148 = param_1;
  (**(code **)(unaff_x20 + 0x20))();
  lVar1 = **(long **)(unaff_x19 + 0x80);
  **(long **)(unaff_x19 + 0x80) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
  if (*(long *)(unaff_x19 + 0x110) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x118));
  }
  *(undefined1 *)(unaff_x19 + 0xf1) = 0;
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x100));
  }
  *(undefined1 *)(unaff_x19 + 0xf2) = 0;
  *(undefined1 *)(unaff_x19 + 0xf0) = 1;
  FUN_100cbd6ec();
  *(undefined1 *)(unaff_x19 + 0xdd8) = 1;
  return 0;
}

