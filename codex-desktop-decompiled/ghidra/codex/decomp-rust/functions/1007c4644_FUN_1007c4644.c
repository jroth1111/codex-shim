
void FUN_1007c4644(void)

{
  undefined8 uVar1;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  char in_stack_00000070;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xe8);
  *in_stack_00000048 = 2;
  in_stack_00000048[1] = uVar1;
  if (in_stack_00000040 != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x27 != 0x8000000000000001) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000058._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000050);
  }
  return;
}

