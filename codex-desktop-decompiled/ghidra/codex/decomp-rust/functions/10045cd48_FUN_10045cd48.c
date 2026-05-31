
void FUN_10045cd48(void)

{
  undefined8 uVar1;
  ulong in_x10;
  ulong unaff_x19;
  long unaff_x29;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  long in_stack_00000068;
  char in_stack_00000070;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *in_stack_00000028 = 0x1d;
  in_stack_00000028[1] = uVar1;
  if (in_stack_00000068 != -0x8000000000000000) {
    if (in_stack_00000068 != 0) {
      _free();
    }
    if (*(long *)(unaff_x29 + -0xe0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd8));
    }
  }
  if ((in_x10 != 0x8000000000000001) && ((in_x10 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x19 != 0x8000000000000001) && ((unaff_x19 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  return;
}

