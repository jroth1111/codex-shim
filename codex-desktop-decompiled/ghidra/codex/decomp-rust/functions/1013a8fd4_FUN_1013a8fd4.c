
void FUN_1013a8fd4(void)

{
  ulong uVar1;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x26;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  ulong *in_stack_00000038;
  char in_stack_00000050;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *in_stack_00000038 = unaff_x24;
  in_stack_00000038[1] = uVar1;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x23 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

