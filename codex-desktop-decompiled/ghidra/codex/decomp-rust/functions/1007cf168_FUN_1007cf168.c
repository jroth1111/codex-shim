
void FUN_1007cf168(void)

{
  undefined8 uVar1;
  uint unaff_w24;
  undefined8 *unaff_x26;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *unaff_x26 = 0x8000000000000000;
  unaff_x26[1] = uVar1;
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((unaff_w24 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

