
/* WARNING: Removing unreachable block (ram,0x000101c6abcc) */
/* WARNING: Removing unreachable block (ram,0x000101c6abd4) */

void FUN_101c6ac5c(void)

{
  undefined8 uVar1;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  long unaff_x29;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x24 = 0x8000000000000000;
  unaff_x24[1] = uVar1;
  if (unaff_x25 != 0) {
    _free();
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000020);
  }
  FUN_102033488(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

