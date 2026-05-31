
void FUN_101cc9384(void)

{
  undefined8 uVar1;
  long unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  long in_stack_00000080;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000050 = 0x8000000000000000;
  in_stack_00000050[1] = uVar1;
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  FUN_1020353a0(unaff_x25 + 0x48);
  if (in_stack_00000080 != unaff_x28) {
    func_0x00010203527c(&stack0x00000080);
  }
  if (((long)in_stack_00000070 < 0) && ((in_stack_00000070 & 0xfffffffffffffffe) != unaff_x28 - 1U))
  {
    func_0x00010203527c();
  }
  return;
}
