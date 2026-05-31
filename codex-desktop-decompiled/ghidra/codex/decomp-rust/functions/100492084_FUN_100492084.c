
void FUN_100492084(void)

{
  undefined8 uVar1;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000060 = 0x11;
  in_stack_00000060[1] = uVar1;
  if (unaff_x26 != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000070 != 0x8000000000000001) && ((in_stack_00000070 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  if ((unaff_x25 != 0x8000000000000001) && ((unaff_x25 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000058);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  return;
}

