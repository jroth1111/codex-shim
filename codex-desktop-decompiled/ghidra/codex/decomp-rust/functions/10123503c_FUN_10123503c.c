
void FUN_10123503c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  uint unaff_w28;
  long unaff_x29;
  char in_stack_000000a0;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x20 = 2;
  unaff_x20[1] = uVar1;
  if (unaff_x21 != 0) {
    _free();
  }
  FUN_100d34830(unaff_x24 + 0x20);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

