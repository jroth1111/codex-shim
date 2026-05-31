
void FUN_100441e28(void)

{
  undefined8 uVar1;
  long unaff_x21;
  ulong unaff_x25;
  ulong unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x28 = 0x1d;
  unaff_x28[1] = uVar1;
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

