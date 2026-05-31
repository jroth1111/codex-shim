
void FUN_101c73ad8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xe8);
  *unaff_x19 = 2;
  unaff_x19[1] = uVar1;
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_102033488(unaff_x22 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((unaff_w21 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000050);
  }
  return;
}

