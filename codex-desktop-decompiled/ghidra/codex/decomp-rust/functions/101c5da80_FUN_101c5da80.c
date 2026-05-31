
void FUN_101c5da80(void)

{
  undefined8 uVar1;
  ulong unaff_x24;
  ulong unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
  *in_stack_00000008 = 0x8000000000000000;
  in_stack_00000008[1] = uVar1;
  if ((unaff_x27 != -0x8000000000000000) && (unaff_x27 != 0)) {
    _free(in_stack_00000038);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((in_stack_00000028._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000030);
  }
  return;
}

