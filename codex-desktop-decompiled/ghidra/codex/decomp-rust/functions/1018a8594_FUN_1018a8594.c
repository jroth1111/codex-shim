
void FUN_1018a8594(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x25;
  long unaff_x29;
  undefined8 uStack00000000000000b0;
  long lStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  long lStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  char *pcStack0000000000000100;
  long lStack0000000000000108;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 uStack0000000000000180;
  undefined1 *puStack0000000000000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  long in_stack_000001f0;
  undefined8 in_stack_000001f8;
  long in_stack_00000208;
  
  puStack0000000000000188 = &stack0x00000360;
  uStack0000000000000180 = 1;
  uStack0000000000000190 = 1;
  lStack00000000000000d0 = *(long *)(unaff_x22 + 0x60);
  uStack00000000000000d8 = *(undefined8 *)(unaff_x22 + 0x68);
  lStack00000000000000b8 = *(long *)(unaff_x22 + 0x50);
  uStack00000000000000c0 = *(undefined8 *)(unaff_x22 + 0x58);
  uStack00000000000000b0 = 1;
  if (lStack00000000000000b8 == 0) {
    uStack00000000000000b0 = 2;
  }
  uStack00000000000000f8 = *(undefined4 *)(unaff_x22 + 8);
  uStack00000000000000fc = *(undefined4 *)(unaff_x22 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x100) = &stack0x00000180;
  *(undefined1 *)(unaff_x29 + -0xf8) = 1;
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x100;
  *(undefined **)(unaff_x29 + -0xa8) = &DAT_1061c2098;
  uStack00000000000000c8 = 1;
  if (lStack00000000000000d0 == 0) {
    uStack00000000000000c8 = 2;
  }
  uStack00000000000000e8 = in_stack_00000158;
  uStack00000000000000e0 = in_stack_00000150;
  uStack00000000000000f0 = in_stack_00000160;
  lStack0000000000000108 = unaff_x29 + -0xb0;
  pcStack0000000000000100 = s__108b39f4f;
  uStack0000000000000198 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  *(undefined1 *)(unaff_x20 + 0x12) = 1;
  lVar1 = unaff_x25 + -1;
  *unaff_x20 = lVar1;
  unaff_x20[9] = lVar1;
  if (in_stack_00000208 != lVar1) {
    func_0x00010194dc28(&stack0x00000208);
  }
  if (in_stack_000001f0 != 0) {
    _free(in_stack_000001f8);
  }
  return;
}

