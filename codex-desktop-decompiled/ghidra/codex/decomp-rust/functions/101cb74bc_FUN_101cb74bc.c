
void FUN_101cb74bc(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  long in_stack_00000060;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x19 = unaff_x23;
  unaff_x19[1] = uVar1;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000060 != unaff_x28) {
    func_0x00010203527c(&stack0x00000060);
  }
  if (((long)unaff_x22 < 0) && ((unaff_x22 & 0xfffffffffffffffe) != unaff_x28 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
