
void FUN_1007bf6cc(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  long unaff_x22;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  ulong in_stack_00000070;
  long in_stack_00000078;
  char in_stack_00000080;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long in_stack_000001c8;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x100);
  *in_stack_00000030 = 0x8000000000000000;
  in_stack_00000030[1] = uVar1;
  if ((in_stack_00000070 != 0x8000000000000001) && ((in_stack_00000070 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((-0x7fffffffffffffff < in_stack_00000078) && (in_stack_00000078 != 0)) {
    _free(in_stack_00000040);
  }
  if (unaff_x22 != -0x8000000000000000) {
    if (unaff_x22 != 0) {
      _free(in_stack_00000060);
    }
    if (in_stack_000001b0 != 0) {
      _free(in_stack_000001b8);
    }
    if (in_stack_000001c8 != -0x7ffffffffffffffb) {
      FUN_100de6690(&stack0x000001c8);
    }
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000048);
  }
  return;
}

