
void FUN_100433078(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_00000058;
  char in_stack_00000060;
  long in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xf0);
  *in_stack_00000040 = 0x1d;
  in_stack_00000040[1] = uVar1;
  if (in_stack_00000058 != -0x8000000000000000) {
    if (in_stack_00000058 != 0) {
      _free();
    }
    if (in_stack_000001e0 != 0) {
      _free(in_stack_000001e8);
    }
  }
  if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000050 != 0x8000000000000001) && ((in_stack_00000050 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000020);
  }
  if ((in_stack_00000048 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  return;
}

