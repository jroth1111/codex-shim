
void FUN_1013b0f7c(void)

{
  undefined8 uVar1;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000040;
  long in_stack_00000108;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
  *in_stack_00000020 = 7;
  in_stack_00000020[1] = uVar1;
  if ((unaff_x27 != -0x8000000000000000) && (unaff_x27 != 0)) {
    _free(in_stack_00000028);
    unaff_x24 = in_stack_00000108;
  }
  if (unaff_x24 != 7) {
    FUN_100e5d1e8(&stack0x00000108);
  }
  FUN_100de8910(unaff_x23 + 0x48);
  if (in_stack_00000040 != unaff_x26) {
    FUN_100de6690(&stack0x00000040);
  }
  if (((long)unaff_x21 < 0) && ((unaff_x21 & 0xfffffffffffffffe) != unaff_x26 - 1U)) {
    FUN_100de6690(in_stack_00000010);
  }
  return;
}

