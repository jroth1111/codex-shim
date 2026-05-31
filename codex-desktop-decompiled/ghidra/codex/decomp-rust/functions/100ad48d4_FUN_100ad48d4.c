
void FUN_100ad48d4(void)

{
  undefined8 uVar1;
  undefined2 *unaff_x19;
  long unaff_x29;
  undefined8 in_stack_00000008;
  char in_stack_00000060;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *(undefined8 *)(unaff_x19 + 4) = uVar1;
  *unaff_x19 = 1;
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000008._4_4_ != 0x16) && ((in_stack_00000008._4_4_ & 0x1e) != 0x14)) {
    FUN_100e077ec(&stack0x00000010);
  }
  return;
}

