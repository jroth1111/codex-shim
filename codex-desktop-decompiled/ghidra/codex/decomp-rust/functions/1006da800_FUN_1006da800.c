
undefined8 FUN_1006da800(undefined8 param_1)

{
  uint uVar1;
  long unaff_x19;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  long in_stack_00000020;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 uStack0000000000000110;
  undefined1 *puStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  long lStack0000000000000130;
  undefined *puStack0000000000000138;
  
  *(char **)(unaff_x29 + -0x80) = s__Skipping_auth_reload_due_to_acc_108ac3685;
  *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000158;
  lStack0000000000000130 = unaff_x29 + -0x80;
  puStack0000000000000138 = &UNK_10b208fd0;
  puStack0000000000000118 = (undefined1 *)&stack0x00000130;
  uStack0000000000000110 = 1;
  uStack0000000000000120 = 1;
  *(undefined8 **)(unaff_x29 + -0x70) = &stack0x00000110;
  *(undefined1 *)(unaff_x29 + -0x68) = 1;
  *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x70;
  *(undefined **)(unaff_x29 + -0x90) = &DAT_1061c2098;
  *(undefined8 *)(unaff_x24 + 0x208) = in_stack_00000100;
  *(undefined8 *)(unaff_x24 + 0x200) = in_stack_000000f8;
  uStack0000000000000128 = param_1;
  (**(code **)(unaff_x23 + 0x20))();
  uVar1 = unaff_w22 ^ 1;
  if (unaff_x25 == 0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) == 0) {
    _free();
  }
  if (in_stack_00000020 != -0x7ffffffffffffffd) {
    FUN_100e0609c(&stack0x00000020);
  }
  *(undefined1 *)(unaff_x19 + 0xb40) = 1;
  return 2;
}

