
void FUN_1007e7d34(void)

{
  undefined8 uVar1;
  ulong in_x10;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  ulong in_stack_00000068;
  long in_stack_00000070;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000270);
  *in_stack_00000028 = 0x8000000000000000;
  in_stack_00000028[1] = uVar1;
  if (in_stack_00000070 != -0x7fffffffffffffff) {
    FUN_100e1edc8(&stack0x000001c8);
  }
  if ((in_stack_00000078 != 0x8000000000000001) && ((in_stack_00000078 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000020);
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000068 != 0x8000000000000001) && ((in_stack_00000068 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000030._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000058);
  }
  return;
}

