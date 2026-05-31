
void FUN_100790c40(void)

{
  undefined8 uVar1;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  uint in_stack_00000070;
  long in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  char in_stack_000000a0;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  *in_stack_00000040 = 0x8000000000000000;
  in_stack_00000040[1] = uVar1;
  if (in_stack_00000080 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x000001a8);
  }
  if ((in_stack_00000090 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000068);
  }
  if ((in_stack_00000088 != 0x8000000000000001) && ((in_stack_00000088 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000c0);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  if ((in_stack_00000070 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000048);
  }
  return;
}

