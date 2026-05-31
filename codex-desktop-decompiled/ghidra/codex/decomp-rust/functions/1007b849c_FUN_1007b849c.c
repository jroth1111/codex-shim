
void FUN_1007b849c(void)

{
  undefined8 uVar1;
  ulong unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000070;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar1;
  if (in_stack_00000068 != 0) {
    FUN_100cdf624(unaff_x29 + -0xe8);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000050._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000018);
  }
  return;
}

