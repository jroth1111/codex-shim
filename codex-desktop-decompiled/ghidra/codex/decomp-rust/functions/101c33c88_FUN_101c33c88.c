
void FUN_101c33c88(void)

{
  undefined8 uVar1;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x27 = 0x12;
  unaff_x27[1] = uVar1;
  if ((unaff_x25 != 5) && (unaff_x25 != 4)) {
    FUN_102037b10(&stack0x00000198);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_102033488(unaff_x22 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

