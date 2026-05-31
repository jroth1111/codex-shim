
void FUN_100793b2c(void)

{
  undefined8 uVar1;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x27 = 4;
  unaff_x27[1] = uVar1;
  if ((unaff_x23 != -0x8000000000000000) && (unaff_x23 != 0)) {
    _free();
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  return;
}

