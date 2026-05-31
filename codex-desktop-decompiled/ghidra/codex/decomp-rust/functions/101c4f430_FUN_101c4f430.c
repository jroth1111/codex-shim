
void FUN_101c4f430(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined1 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char in_stack_00000020;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *(undefined8 *)(in_stack_00000008 + 8) = uVar1;
  *in_stack_00000008 = 1;
  FUN_102033488(&stack0x00000040);
  if (in_stack_00000020 != '\x16') {
    FUN_1020378e0(&stack0x00000020);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000018);
  }
  return;
}

