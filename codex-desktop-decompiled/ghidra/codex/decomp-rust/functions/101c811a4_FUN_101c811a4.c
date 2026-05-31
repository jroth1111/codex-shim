
/* WARNING: Removing unreachable block (ram,0x000101c81074) */
/* WARNING: Removing unreachable block (ram,0x000101c8107c) */

void FUN_101c811a4(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  uint unaff_w26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  char in_stack_00000060;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar1;
  if (unaff_x27 != 0) {
    _free(in_stack_00000040);
  }
  if (unaff_x28 != 0) {
    _free(in_stack_00000050);
  }
  if (((unaff_x27 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000040);
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}
