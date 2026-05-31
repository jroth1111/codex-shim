
void FUN_101cb99bc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  long in_stack_00000070;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  ulong in_stack_00000168;
  undefined8 in_stack_00000170;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xf8);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if ((unaff_x21 != -0x8000000000000000) && (unaff_x21 != 0)) {
    _free(in_stack_00000028);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if (in_stack_00000150 != -0x8000000000000000) {
    if (in_stack_00000150 != 0) {
      _free(in_stack_00000158);
    }
    if ((in_stack_00000168 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_00000170);
    }
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
