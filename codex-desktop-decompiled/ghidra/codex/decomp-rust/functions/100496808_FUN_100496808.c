
void FUN_100496808(void)

{
  undefined8 uVar1;
  ulong in_x10;
  undefined8 *unaff_x19;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar1;
  if (in_stack_00000068 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000198);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((in_x10 != 0x8000000000000001) && ((in_x10 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000060 != 0x8000000000000001) && ((in_stack_00000060 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000078 != 0x8000000000000001) && ((in_stack_00000078 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  return;
}

