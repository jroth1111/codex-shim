
void FUN_101c53314(void)

{
  undefined8 uVar1;
  ulong unaff_x23;
  ulong unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000008 = 0x8000000000000000;
  in_stack_00000008[1] = uVar1;
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000018);
  }
  return;
}

