
void FUN_101c3424c(void)

{
  undefined8 uVar1;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
  *in_stack_00000010 = 0x12;
  in_stack_00000010[1] = uVar1;
  if ((in_stack_00000048 != 5) && (in_stack_00000048 != 4)) {
    FUN_102037b10(&stack0x00000198);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

