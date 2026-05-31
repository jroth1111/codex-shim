
void FUN_100618424(void)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  uint in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *in_stack_00000010 = uVar1;
  *(undefined4 *)(in_stack_00000010 + 1) = 1000000000;
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000020 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

