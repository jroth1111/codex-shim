
/* WARNING: Removing unreachable block (ram,0x000101ccbef4) */

void FUN_101ccbc28(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  undefined8 unaff_x26;
  uint unaff_w27;
  long unaff_x29;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;

  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *in_stack_00000030 = 0x8000000000000000;
  in_stack_00000030[1] = uVar2;
  if (unaff_x22 != 0) {
    _free();
  }
  if ((in_stack_00000078 != -0x8000000000000000) && (in_stack_00000078 != 0)) {
    _free(in_stack_00000040);
    unaff_x20 = &stack0x00000080;
  }
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  uVar1 = 0;
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w27;
  }
  if ((uVar1 & 1) != 0) {
    _free(unaff_x26);
  }
  FUN_1020353a0(unaff_x20 + 9);
  if (in_stack_00000080 != unaff_x25) {
    func_0x00010203527c(&stack0x00000080);
  }
  if (((long)unaff_x23 < 0) && ((unaff_x23 & 0xfffffffffffffffe) != unaff_x25 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
