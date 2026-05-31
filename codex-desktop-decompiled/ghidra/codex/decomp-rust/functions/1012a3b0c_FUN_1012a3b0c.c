
void FUN_1012a3b0c(void)

{
  undefined8 uVar1;
  ulong unaff_x24;
  ulong unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
  *in_stack_00000020 = 0x8000000000000000;
  in_stack_00000020[1] = uVar1;
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x26 != 0x8000000000000001) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((in_stack_00000030._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000028);
  }
  return;
}

