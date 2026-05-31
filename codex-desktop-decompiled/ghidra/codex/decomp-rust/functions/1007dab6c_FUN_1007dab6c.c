
void FUN_1007dab6c(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x25;
  long unaff_x28;
  long unaff_x29;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000120);
  *unaff_x25 = 0x8000000000000002;
  unaff_x25[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x28) && (unaff_x28 != 0)) {
    _free();
  }
  if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

