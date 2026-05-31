
void FUN_101c6d28c(void)

{
  undefined8 uVar1;
  uint unaff_w19;
  long unaff_x23;
  undefined8 *unaff_x26;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *unaff_x26 = 0x8000000000000000;
  unaff_x26[1] = uVar1;
  FUN_102033488(unaff_x23 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  if ((unaff_w19 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

