
void FUN_1018a6720(undefined8 param_1)

{
  undefined8 in_x10;
  long unaff_x19;
  undefined8 *unaff_x25;
  long *unaff_x28;
  long unaff_x29;
  long lStack00000000000000e0;
  undefined1 uStack00000000000000e8;
  undefined1 *puStack0000000000000140;
  undefined *puStack0000000000000148;
  
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined8 *)(unaff_x29 + -0xb8) = in_x10;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  lStack00000000000000e0 = unaff_x29 + -0xc0;
  uStack00000000000000e8 = 1;
  puStack0000000000000140 = (undefined1 *)&stack0x000000e0;
  puStack0000000000000148 = &DAT_1061c2098;
  (**(code **)(unaff_x19 + 0x20))();
  *unaff_x25 = 0x8000000000000000;
  *(undefined1 *)(unaff_x25 + 4) = 3;
  *(undefined2 *)(unaff_x25 + 5) = 0;
  if (*unaff_x28 != -0x8000000000000000) {
    FUN_10196b754();
  }
  return;
}

