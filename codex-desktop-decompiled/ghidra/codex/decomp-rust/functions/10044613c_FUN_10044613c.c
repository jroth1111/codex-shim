
void FUN_10044613c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x22;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *unaff_x19 = 0x8000000000000006;
  unaff_x19[1] = uVar1;
  if (unaff_x24 != 0) {
    _free(in_stack_00000018);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

