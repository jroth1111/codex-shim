
void FUN_10046a230(void)

{
  undefined8 uVar1;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa0);
  *in_stack_00000008 = 0x8000000000000006;
  in_stack_00000008[1] = uVar1;
  if (unaff_x23 != -0x8000000000000000) {
    FUN_100e79780(unaff_x29 + -200);
  }
  if ((unaff_x21 != 0x8000000000000001) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

