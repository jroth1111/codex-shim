
void FUN_101c52fa4(void)

{
  ulong uVar1;
  long unaff_x19;
  ulong *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x25;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x22 = unaff_x25;
  unaff_x22[1] = uVar1;
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_102033488(unaff_x19 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

