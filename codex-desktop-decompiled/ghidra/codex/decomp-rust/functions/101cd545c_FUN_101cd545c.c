
void FUN_101cd545c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  long in_stack_00000090;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *in_stack_00000050 = 0x8000000000000000;
  in_stack_00000050[1] = uVar1;
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000090 != unaff_x19) {
    func_0x00010203527c(&stack0x00000090);
  }
  if (((long)in_stack_00000068 < 0) && ((in_stack_00000068 & 0xfffffffffffffffe) != unaff_x19 - 1U))
  {
    func_0x00010203527c(in_stack_00000060);
  }
  return;
}
