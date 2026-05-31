
void FUN_1004848f8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x22;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  long in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa0);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar1;
  if ((unaff_x22 & 6) != 4) {
    FUN_100e0c988(&stack0x00000160);
  }
  if ((-0x7fffffffffffffff < in_stack_00000040) && (in_stack_00000040 != 0)) {
    _free(in_stack_00000028);
  }
  if ((-0x7fffffffffffffff < in_stack_00000048) && (in_stack_00000048 != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  return;
}

