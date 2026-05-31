
void FUN_1012fe718(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  long in_stack_00000040;
  long in_stack_00000048;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000a0);
  *unaff_x24 = 4;
  unaff_x24[1] = uVar1;
  if ((-0x7fffffffffffffff < in_stack_00000040) && (in_stack_00000040 != 0)) {
    _free(in_stack_00000028);
  }
  if ((-0x7fffffffffffffff < in_stack_00000048) && (in_stack_00000048 != 0)) {
    _free();
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x25 + 0x20);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  return;
}

