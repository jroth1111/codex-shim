
void FUN_1007c3678(void)

{
  undefined8 uVar1;
  uint unaff_w19;
  long unaff_x20;
  ulong unaff_x23;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  *unaff_x26 = 0x8000000000000000;
  unaff_x26[1] = uVar1;
  if (unaff_x25 != 0) {
    FUN_100cdf624(&stack0x000000d8);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  if ((unaff_w19 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

