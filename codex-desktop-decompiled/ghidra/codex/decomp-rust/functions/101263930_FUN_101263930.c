
void FUN_101263930(void)

{
  undefined8 uVar1;
  uint unaff_w19;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  char in_stack_00000060;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *in_stack_00000010 = 0x8000000000000000;
  in_stack_00000010[1] = uVar1;
  if (unaff_x28 != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((unaff_w19 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

