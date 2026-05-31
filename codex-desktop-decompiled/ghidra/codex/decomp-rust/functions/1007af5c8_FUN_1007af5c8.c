
void FUN_1007af5c8(void)

{
  undefined8 uVar1;
  uint unaff_w19;
  long unaff_x21;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *unaff_x23 = 4;
  unaff_x23[1] = uVar1;
  if (unaff_x21 != 4) {
    FUN_100e0c988(unaff_x29 + -0xf8);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((unaff_w19 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000048);
  }
  return;
}

