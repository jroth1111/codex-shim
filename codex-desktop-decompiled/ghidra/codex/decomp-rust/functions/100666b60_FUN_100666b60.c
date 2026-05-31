
void FUN_100666b60(void)

{
  undefined8 uVar1;
  long unaff_x23;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000070;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  long in_stack_00000178;
  undefined8 in_stack_00000180;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  *in_stack_00000008 = 3;
  in_stack_00000008[1] = uVar1;
  if (unaff_x28 != 2) {
    if (in_stack_00000160 != 0) {
      _free(in_stack_00000168);
    }
    if (in_stack_00000178 != 0) {
      _free(in_stack_00000180);
    }
  }
  FUN_100de8910(unaff_x23 + 0x48);
  if (in_stack_00000070 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000070);
  }
  if (((long)in_stack_00000018 < 0) &&
     ((in_stack_00000018 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000010);
  }
  return;
}

