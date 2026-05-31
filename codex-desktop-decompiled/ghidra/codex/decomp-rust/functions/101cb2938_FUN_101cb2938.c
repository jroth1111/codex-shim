
void FUN_101cb2938(void)

{
  ulong uVar1;
  ulong *unaff_x20;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000040;
  ulong in_stack_00000058;
  long in_stack_00000060;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *unaff_x20 = unaff_x28;
  unaff_x20[1] = uVar1;
  if (unaff_x22 != -0x8000000000000000) {
    FUN_102030bc4(unaff_x29 + -0xd0);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000060 != unaff_x25) {
    func_0x00010203527c(&stack0x00000060);
  }
  if (((long)unaff_x26 < 0) && ((unaff_x26 & 0xfffffffffffffffe) != unaff_x25 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
