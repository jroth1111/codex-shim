
void FUN_100451830(void)

{
  undefined8 uVar1;
  long unaff_x22;
  ulong unaff_x24;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000010 = 0x800000000000006e;
  in_stack_00000010[1] = uVar1;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

