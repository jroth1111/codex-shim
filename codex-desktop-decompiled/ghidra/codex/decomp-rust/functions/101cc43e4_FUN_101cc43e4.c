
void FUN_101cc43e4(void)

{
  undefined8 uVar1;
  ulong in_x10;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000040;
  ulong in_stack_00000050;
  long in_stack_00000060;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000030 = 0x8000000000000000;
  in_stack_00000030[1] = uVar1;
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000060 != unaff_x28) {
    func_0x00010203527c(&stack0x00000060);
  }
  if (((long)in_stack_00000050 < 0) && ((in_stack_00000050 & 0xfffffffffffffffe) != unaff_x28 - 1U))
  {
    func_0x00010203527c(in_stack_00000020);
  }
  return;
}
