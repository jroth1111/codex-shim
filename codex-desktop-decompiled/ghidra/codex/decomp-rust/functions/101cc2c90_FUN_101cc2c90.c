
void FUN_101cc2c90(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x22;
  undefined1 *in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x00000088);
  *(undefined8 *)(in_stack_00000008 + 8) = uVar1;
  *in_stack_00000008 = 1;
  FUN_1020353a0(unaff_x22 + 0x48);
  if (in_stack_00000020 != unaff_x19) {
    func_0x00010203527c(&stack0x00000020);
  }
  if (((long)in_stack_00000018 < 0) && ((in_stack_00000018 & 0xfffffffffffffffe) != unaff_x19 - 1U))
  {
    func_0x00010203527c(in_stack_00000010);
  }
  return;
}
