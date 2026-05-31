
void FUN_100797a44(void)

{
  undefined8 uVar1;
  ulong unaff_x22;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  char in_stack_00000090;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000038 = 0x8000000000000000;
  in_stack_00000038[1] = uVar1;
  if ((-0x7fffffffffffffff < in_stack_00000078) && (in_stack_00000078 != 0)) {
    _free(in_stack_00000030);
  }
  if (-0x7fffffffffffffff < unaff_x26) {
    FUN_100e79780(unaff_x29 + -0xd8);
  }
  if ((in_stack_00000080 != 0x8000000000000001) && ((in_stack_00000080 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  if ((in_stack_00000070._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000060);
  }
  return;
}

