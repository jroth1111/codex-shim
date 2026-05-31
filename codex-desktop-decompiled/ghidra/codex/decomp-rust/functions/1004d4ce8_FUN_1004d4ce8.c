
void FUN_1004d4ce8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  uint unaff_w26;
  long unaff_x28;
  long unaff_x29;
  char in_stack_00000070;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if (unaff_x28 != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

