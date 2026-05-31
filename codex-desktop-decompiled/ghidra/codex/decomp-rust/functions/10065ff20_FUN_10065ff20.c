
void FUN_10065ff20(void)

{
  ulong uVar1;
  ulong unaff_x19;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  ulong *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
  *in_stack_00000010 = unaff_x19;
  in_stack_00000010[1] = uVar1;
  if (((unaff_x19 + unaff_x28) - 9 < 0xfffffffffffffffe) && (0 < unaff_x28)) {
    _free(in_stack_00000020);
  }
  FUN_100de8910(unaff_x27 + 0x48);
  if (in_stack_00000030 != unaff_x19 + 1) {
    FUN_100de6690(&stack0x00000030);
  }
  if (((long)in_stack_00000028 < 0) && ((in_stack_00000028 & 0xfffffffffffffffe) != unaff_x19)) {
    FUN_100de6690(in_stack_00000018);
  }
  return;
}

