
void FUN_101ccb1b8(void)

{
  undefined8 uVar1;
  ulong in_x10;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000050;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x000001a8);
  *in_stack_00000030 = 2;
  in_stack_00000030[1] = uVar1;
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000050 != unaff_x28) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)in_stack_00000040 < 0) && ((in_stack_00000040 & 0xfffffffffffffffe) != unaff_x28 - 1U))
  {
    func_0x00010203527c(in_stack_00000008);
  }
  return;
}
