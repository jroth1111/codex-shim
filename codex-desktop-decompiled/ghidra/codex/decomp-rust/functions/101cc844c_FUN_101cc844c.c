
void FUN_101cc844c(void)

{
  undefined8 uVar1;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000040);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_1020353a0(unaff_x25 + 0x48);
  if (in_stack_00000050 != unaff_x24) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)in_stack_00000020 < 0) && ((in_stack_00000020 & 0xfffffffffffffffe) != unaff_x24 - 1U))
  {
    func_0x00010203527c(in_stack_00000018);
  }
  return;
}
