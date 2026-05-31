
void FUN_10065fcf0(void)

{
  ulong uVar1;
  ulong unaff_x19;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x24;
  ulong *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  *unaff_x26 = unaff_x19;
  unaff_x26[1] = uVar1;
  if ((unaff_x22 != -0x7ffffffffffffffd) && (0 < unaff_x22)) {
    _free(in_stack_00000020);
  }
  if (((unaff_w21 != 0) && ((unaff_x19 + unaff_x28) - 9 < 0xfffffffffffffffe)) && (0 < unaff_x28)) {
    _free(in_stack_00000020);
  }
  FUN_100de8910(unaff_x27 + 0x48);
  if (in_stack_00000030 != unaff_x19 + 1) {
    FUN_100de6690(&stack0x00000030);
  }
  if (((long)unaff_x24 < 0) && ((unaff_x24 & 0xfffffffffffffffe) != unaff_x19)) {
    FUN_100de6690(in_stack_00000018);
  }
  return;
}

