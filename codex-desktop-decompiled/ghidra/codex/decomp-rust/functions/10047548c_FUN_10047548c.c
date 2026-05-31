
void FUN_10047548c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  ulong unaff_x25;
  undefined8 *unaff_x28;
  long unaff_x29;
  long in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *unaff_x28 = 0x1d;
  unaff_x28[1] = uVar1;
  if (in_stack_00000038 != -0x8000000000000000) {
    if (in_stack_00000038 != 0) {
      _free();
    }
    if (*(long *)(unaff_x29 + -0xe0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd8));
    }
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

