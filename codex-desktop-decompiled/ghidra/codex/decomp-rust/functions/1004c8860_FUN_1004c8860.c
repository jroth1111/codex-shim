
void FUN_1004c8860(void)

{
  undefined8 uVar1;
  long unaff_x24;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000060;
  char in_stack_00000080;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000050 = 0x8000000000000000;
  in_stack_00000050[1] = uVar1;
  if (unaff_x24 != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000060._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000048);
  }
  return;
}

