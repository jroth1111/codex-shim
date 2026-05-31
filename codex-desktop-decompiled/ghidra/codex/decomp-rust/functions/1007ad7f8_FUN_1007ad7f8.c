
void FUN_1007ad7f8(void)

{
  ulong uVar1;
  long unaff_x22;
  ulong *unaff_x23;
  uint unaff_w26;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  char in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x23 = unaff_x27;
  unaff_x23[1] = uVar1;
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000040);
  }
  return;
}

