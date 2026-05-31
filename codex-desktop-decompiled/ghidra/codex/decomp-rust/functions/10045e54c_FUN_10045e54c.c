
void FUN_10045e54c(void)

{
  undefined8 uVar1;
  long unaff_x23;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x28 = 0x8000000000000006;
  unaff_x28[1] = uVar1;
  if (unaff_x23 != 0) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

