
void FUN_1012bbd5c(void)

{
  undefined8 uVar1;
  uint unaff_w22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *unaff_x24 = 0x8000000000000000;
  unaff_x24[1] = uVar1;
  if (unaff_x23 != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((unaff_w22 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

