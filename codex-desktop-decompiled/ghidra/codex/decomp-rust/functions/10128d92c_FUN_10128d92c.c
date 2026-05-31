
void FUN_10128d92c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x24;
  uint unaff_w25;
  undefined8 *unaff_x26;
  long unaff_x29;
  char in_stack_00000020;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x26 = 0x8000000000000001;
  unaff_x26[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000020 != '\x16') {
    FUN_100e077ec(&stack0x00000020);
  }
  if ((unaff_w25 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

