
void FUN_1018a83f0(undefined8 param_1)

{
  long *unaff_x20;
  long unaff_x22;
  long unaff_x25;
  long unaff_x29;
  undefined8 uStack00000000000000b0;
  undefined1 *puStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 in_stack_00000178;
  long lStack0000000000000180;
  undefined *puStack0000000000000188;
  
  puStack00000000000000b8 = &stack0x00000288;
  uStack00000000000000b0 = 1;
  uStack00000000000000c0 = 1;
  *(undefined8 **)(unaff_x29 + -0xb0) = &stack0x000000b0;
  *(undefined1 *)(unaff_x29 + -0xa8) = 1;
  lStack0000000000000180 = unaff_x29 + -0xb0;
  puStack0000000000000188 = &DAT_1061c2098;
  uStack00000000000000c8 = param_1;
  (**(code **)(unaff_x22 + 0x20))();
  *(undefined1 *)(unaff_x20 + 0x12) = 1;
  *unaff_x20 = unaff_x25 + -1;
  unaff_x20[9] = unaff_x25 + -1;
  return;
}

