
void FUN_10123fc20(void)

{
  undefined8 uVar1;
  long unaff_x19;
  ulong unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000068;
  char in_stack_00000070;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *unaff_x27 = 0x8000000000000000;
  unaff_x27[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free();
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000068._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000040);
  }
  return;
}

