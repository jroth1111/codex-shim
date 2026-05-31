
void FUN_1007aec24(void)

{
  undefined8 uVar1;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x29;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000038 = 2;
  in_stack_00000038[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free(in_stack_00000040);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000070._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000078);
  }
  return;
}

