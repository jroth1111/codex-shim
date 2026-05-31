
void FUN_1004732f8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000010;
  char in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *unaff_x19 = 0x1d;
  unaff_x19[1] = uVar1;
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000010);
  }
  FUN_100d34830(&stack0x00000040);
  if (in_stack_00000020 != '\x16') {
    FUN_100e077ec(&stack0x00000020);
  }
  return;
}

