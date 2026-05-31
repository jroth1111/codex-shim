
void FUN_1007a9bdc(void)

{
  undefined8 uVar1;
  long unaff_x19;
  uint unaff_w26;
  long unaff_x29;
  undefined8 *in_stack_00000040;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *in_stack_00000040 = 2;
  in_stack_00000040[1] = uVar1;
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

