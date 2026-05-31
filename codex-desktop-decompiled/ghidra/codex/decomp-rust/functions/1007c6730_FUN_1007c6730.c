
void FUN_1007c6730(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong unaff_x21;
  ulong unaff_x23;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  uint in_stack_00000060;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x19 = unaff_x26;
  unaff_x19[1] = uVar1;
  if ((in_stack_00000070 != 0x8000000000000001) && ((in_stack_00000070 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000060 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

