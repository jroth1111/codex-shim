
/* WARNING: Removing unreachable block (ram,0x000101c657d4) */
/* WARNING: Removing unreachable block (ram,0x000101c657f0) */
/* WARNING: Removing unreachable block (ram,0x000101c657f4) */
/* WARNING: Removing unreachable block (ram,0x000101c657fc) */
/* WARNING: Removing unreachable block (ram,0x000101c65808) */

void FUN_101c65890(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x22;
  long unaff_x26;
  uint unaff_w27;
  long unaff_x29;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  char in_stack_00000060;
  undefined8 in_stack_000000a8;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x22 = 0x8000000000000000;
  unaff_x22[1] = uVar1;
  if (unaff_x26 != 0) {
    _free();
  }
  if (*(long *)(unaff_x29 + -0xc0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xb8));
  }
  if ((*(ulong *)(unaff_x29 + -0xa8) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xa0));
  }
  if ((in_stack_00000058 != -0x8000000000000000) && (in_stack_00000058 != 0)) {
    _free();
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000048);
  }
  return;
}

