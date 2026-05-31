
void FUN_1007aa038(void)

{
  undefined8 uVar1;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000040;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000040 = 2;
  in_stack_00000040[1] = uVar1;
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000020._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000028);
  }
  return;
}

