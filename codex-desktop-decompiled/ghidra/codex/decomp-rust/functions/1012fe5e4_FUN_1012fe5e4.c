
void FUN_1012fe5e4(void)

{
  undefined8 uVar1;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000a0);
  *unaff_x24 = 4;
  unaff_x24[1] = uVar1;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free();
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  return;
}

