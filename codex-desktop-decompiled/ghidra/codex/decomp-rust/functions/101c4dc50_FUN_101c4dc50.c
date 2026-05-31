
void FUN_101c4dc50(void)

{
  undefined8 uVar1;
  uint unaff_w19;
  long unaff_x22;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *in_stack_00000020 = 0x8000000000000000;
  in_stack_00000020[1] = uVar1;
  FUN_102033488(unaff_x22 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  if ((unaff_w19 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

