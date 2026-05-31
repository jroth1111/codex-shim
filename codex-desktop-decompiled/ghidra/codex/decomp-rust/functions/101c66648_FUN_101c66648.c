
void FUN_101c66648(void)

{
  undefined8 uVar1;
  long unaff_x22;
  uint unaff_w28;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
  *in_stack_00000010 = 0x8000000000000000;
  in_stack_00000010[1] = uVar1;
  if (unaff_x22 != 0) {
    _free();
  }
  FUN_102033488(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000018);
  }
  return;
}

