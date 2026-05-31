
void FUN_10065aec4(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  long in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  *in_stack_00000018 = 0x8000000000000000;
  in_stack_00000018[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free();
  }
  if (unaff_x23 != -0x8000000000000000) {
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 + -1) {
      FUN_100e37cf8(unaff_x19);
      unaff_x19 = unaff_x19 + 0x170;
    }
    if (unaff_x23 != 0) {
      _free();
    }
  }
  FUN_100de8910(unaff_x25 + 0x48);
  if (in_stack_00000050 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000050);
  }
  if (((long)unaff_x26 < 0) && ((unaff_x26 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690();
  }
  return;
}

