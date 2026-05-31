
/* WARNING: Removing unreachable block (ram,0x000101c5ffa0) */
/* WARNING: Removing unreachable block (ram,0x000101c5ffa8) */

void FUN_101c5ff3c(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  uint unaff_w26;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  ulong in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *in_stack_00000030 = 0x8000000000000000;
  in_stack_00000030[1] = uVar1;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if (unaff_x28 != 0) {
    _free(in_stack_00000028);
  }
  if (((in_stack_00000038 != 0x8000000000000001) && ((unaff_x20 & 1) != 0)) &&
     ((in_stack_00000038 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  FUN_102033488(unaff_x23 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

