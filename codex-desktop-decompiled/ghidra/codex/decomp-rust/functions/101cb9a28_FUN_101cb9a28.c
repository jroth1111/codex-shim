
/* WARNING: Removing unreachable block (ram,0x000101cb9d8c) */
/* WARNING: Removing unreachable block (ram,0x000101cb9d90) */
/* WARNING: Removing unreachable block (ram,0x000101cb9d98) */
/* WARNING: Removing unreachable block (ram,0x000101cb9da4) */

void FUN_101cb9a28(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000150;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xf8);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if (*(long *)(unaff_x29 + -0xc0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xb8));
  }
  if ((*(ulong *)(unaff_x29 + -0xa8) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xa0));
  }
  if ((in_stack_00000068 != -0x8000000000000000) && (in_stack_00000068 != 0)) {
    _free(in_stack_00000028);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_1020353a0(unaff_x26 + 0x48);
  if (in_stack_00000070 != unaff_x25) {
    func_0x00010203527c(&stack0x00000070);
  }
  if (((long)unaff_x22 < 0) && ((unaff_x22 & 0xfffffffffffffffe) != unaff_x25 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
