
void FUN_10046d89c(void)

{
  undefined8 uVar1;
  ulong unaff_x26;
  ulong unaff_x28;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000200);
  *in_stack_00000038 = 0x11;
  in_stack_00000038[1] = uVar1;
  FUN_100e1cf5c(&stack0x00000178);
  if ((unaff_x28 != 0x8000000000000001) && ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  if ((unaff_x26 != 0x8000000000000001) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  return;
}

