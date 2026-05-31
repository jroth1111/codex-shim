
void FUN_1004d5008(void)

{
  undefined8 uVar1;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  char in_stack_00000070;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000030 = 0x8000000000000000;
  in_stack_00000030[1] = uVar1;
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000048);
  }
  return;
}

