
/* WARNING: Removing unreachable block (ram,0x000101c53134) */
/* WARNING: Removing unreachable block (ram,0x000101c5313c) */

void FUN_101c53010(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x22 = 0x8000000000000000;
  unaff_x22[1] = uVar1;
  if (unaff_x25 != 0) {
    _free();
  }
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  FUN_102033488(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

