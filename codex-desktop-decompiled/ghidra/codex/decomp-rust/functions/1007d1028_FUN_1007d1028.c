
void FUN_1007d1028(void)

{
  undefined8 uVar1;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000018 = 0x8000000000000000;
  in_stack_00000018[1] = uVar1;
  if (unaff_x28 != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000020);
  }
  return;
}

