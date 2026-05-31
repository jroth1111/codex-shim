
void FUN_1007c377c(void)

{
  undefined8 uVar1;
  uint unaff_w19;
  long unaff_x23;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000028;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  *in_stack_00000008 = 0x8000000000000000;
  in_stack_00000008[1] = uVar1;
  if (unaff_x23 != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  if ((unaff_w19 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

