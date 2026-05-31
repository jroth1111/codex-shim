
void FUN_1007b7010(void)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
  *in_stack_00000010 = 0x8000000000000000;
  in_stack_00000010[1] = uVar1;
  if (unaff_x22 != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000020._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000018);
  }
  return;
}

