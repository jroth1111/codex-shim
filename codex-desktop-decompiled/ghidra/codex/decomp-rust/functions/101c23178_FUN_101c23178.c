
/* WARNING: Removing unreachable block (ram,0x000101c235dc) */

void FUN_101c23178(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar1;
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if (unaff_x23 != 0) {
    _free();
  }
  if (((unaff_x22 != 0x8000000000000001) && ((unaff_x20 & 1) != 0)) &&
     ((unaff_x22 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000018);
  }
  FUN_102033488(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  return;
}

