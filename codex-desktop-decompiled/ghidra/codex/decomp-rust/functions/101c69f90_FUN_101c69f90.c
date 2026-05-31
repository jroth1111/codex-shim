
void FUN_101c69f90(void)

{
  undefined8 uVar1;
  long unaff_x20;
  ulong unaff_x23;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *unaff_x27 = 0x8000000000000000;
  unaff_x27[1] = uVar1;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_102033488(unaff_x20 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

