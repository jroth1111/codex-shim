
void FUN_101cae21c(void)

{
  undefined8 uVar1;
  ulong unaff_x22;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000048;
  long in_stack_00000050;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000028 = 0x8000000000000000;
  in_stack_00000028[1] = uVar1;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_1020353a0(unaff_x25 + 0x48);
  if (in_stack_00000050 != unaff_x26) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)in_stack_00000048 < 0) && ((in_stack_00000048 & 0xfffffffffffffffe) != unaff_x26 - 1U))
  {
    func_0x00010203527c(in_stack_00000010);
  }
  return;
}
