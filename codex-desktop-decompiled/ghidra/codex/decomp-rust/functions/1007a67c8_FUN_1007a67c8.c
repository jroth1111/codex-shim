
void FUN_1007a67c8(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  uint unaff_w26;
  ulong unaff_x27;
  undefined8 in_stack_00000040;
  char in_stack_00000070;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000438);
  *unaff_x19 = unaff_x27;
  unaff_x19[1] = uVar1;
  if (unaff_x23 != unaff_x21) {
    FUN_100df5b9c(&stack0x00000290);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

