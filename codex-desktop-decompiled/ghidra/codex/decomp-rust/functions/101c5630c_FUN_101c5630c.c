
void FUN_101c5630c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = uVar1;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000010);
  }
  if (((unaff_x27 != 0x8000000000000001) && ((unaff_x21 & 1) != 0)) &&
     ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free();
  }
  FUN_102033488(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

