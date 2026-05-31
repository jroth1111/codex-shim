
void FUN_100acfd14(void)

{
  undefined8 uVar1;
  long unaff_x22;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000078;
  char in_stack_00000080;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000100);
  *in_stack_00000070 = 0x800000000000000f;
  in_stack_00000070[1] = uVar1;
  if (unaff_x22 != 0) {
    _free();
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000078._4_4_ != 0x16) && ((in_stack_00000078._4_4_ & 0x1e) != 0x14)) {
    FUN_100e077ec(&stack0x000000e0);
  }
  return;
}

