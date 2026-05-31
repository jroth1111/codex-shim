
void FUN_101cc2120(void)

{
  undefined8 uVar1;
  ulong in_x10;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  long unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000030 = 0x8000000000000000;
  in_stack_00000030[1] = uVar1;
  if ((in_stack_00000078 != -0x8000000000000000) && (in_stack_00000078 != 0)) {
    _free(in_stack_00000040);
    unaff_x20 = &stack0x00000080;
  }
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_1020353a0(unaff_x20 + 9);
  if (in_stack_00000080 != unaff_x25) {
    func_0x00010203527c(&stack0x00000080);
  }
  if (((long)in_stack_00000060 < 0) && ((in_stack_00000060 & 0xfffffffffffffffe) != unaff_x25 - 1U))
  {
    func_0x00010203527c(in_stack_00000038);
  }
  return;
}
