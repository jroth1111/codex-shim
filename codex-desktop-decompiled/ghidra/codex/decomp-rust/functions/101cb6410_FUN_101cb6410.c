
void FUN_101cb6410(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  ulong in_stack_00000050;
  ulong in_stack_00000068;
  long in_stack_00000070;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x19 = unaff_x27;
  unaff_x19[1] = uVar1;
  if ((unaff_x21 != 0x8000000000000001) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_1020353a0(unaff_x23 + 0x48);
  if (in_stack_00000070 != unaff_x26) {
    func_0x00010203527c(&stack0x00000070);
  }
  if (((long)in_stack_00000050 < 0) && ((in_stack_00000050 & 0xfffffffffffffffe) != unaff_x26 - 1U))
  {
    func_0x00010203527c();
  }
  return;
}
