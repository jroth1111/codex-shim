
void FUN_1004527c0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x25;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000068;
  long in_stack_00000070;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *unaff_x19 = 0x8000000000000006;
  unaff_x19[1] = uVar1;
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if ((-0x7fffffffffffffff < in_stack_00000070) && (in_stack_00000070 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < unaff_x25) && (unaff_x25 != 0)) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  return;
}

