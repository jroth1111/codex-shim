
void FUN_101c7ed84(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x25;
  uint unaff_w28;
  long unaff_x29;
  char in_stack_00000030;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  *unaff_x25 = 0x8000000000000000;
  unaff_x25[1] = uVar1;
  FUN_102033488(unaff_x19 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}
