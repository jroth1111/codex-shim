
void FUN_101cc1a00(void)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  ulong *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x27 = unaff_x22;
  unaff_x27[1] = uVar1;
  if ((in_stack_00000078 != -0x8000000000000000) && (in_stack_00000078 != 0)) {
    _free(in_stack_00000040);
    unaff_x20 = &stack0x00000080;
  }
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(unaff_x26);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(unaff_x21);
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
