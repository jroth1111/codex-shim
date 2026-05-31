
void FUN_100438828(void)

{
  undefined8 uVar1;
  ulong unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  long in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *in_stack_00000008 = 0x1d;
  in_stack_00000008[1] = uVar1;
  if (in_stack_00000038 != 0) {
    _free();
  }
  if (*(long *)(unaff_x29 + -0xe0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xd8));
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

