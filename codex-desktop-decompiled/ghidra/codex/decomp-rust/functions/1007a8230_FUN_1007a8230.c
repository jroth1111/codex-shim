
void FUN_1007a8230(void)

{
  undefined8 uVar1;
  long unaff_x23;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000010 = 0x8000000000000000;
  in_stack_00000010[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000058._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000018);
  }
  return;
}

