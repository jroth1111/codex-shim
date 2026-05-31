
void FUN_1007ae5b4(void)

{
  undefined8 uVar1;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x25 = 2;
  unaff_x25[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free();
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000070._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000078);
  }
  return;
}

