
void FUN_1007afb10(void)

{
  undefined8 uVar1;
  long unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *in_stack_00000008 = 4;
  in_stack_00000008[1] = uVar1;
  if (unaff_x21 != 4) {
    FUN_100e0c988(unaff_x29 + -0xf8);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

