
void FUN_101c6f4fc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  ulong unaff_x23;
  undefined8 *unaff_x26;
  uint unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  ulong in_stack_00000010;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x26 = 0x8000000000000000;
  unaff_x26[1] = uVar1;
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if (((unaff_x23 != 0x8000000000000001) && ((in_stack_00000010 & 0x100000000) != 0)) &&
     ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free();
  }
  FUN_102033488(unaff_x20 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

