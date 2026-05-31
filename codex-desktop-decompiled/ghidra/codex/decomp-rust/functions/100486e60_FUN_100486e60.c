
void FUN_100486e60(void)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  char in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free();
  }
  FUN_100d34830(&stack0x00000040);
  if (in_stack_00000020 != '\x16') {
    FUN_100e077ec(&stack0x00000020);
  }
  return;
}

