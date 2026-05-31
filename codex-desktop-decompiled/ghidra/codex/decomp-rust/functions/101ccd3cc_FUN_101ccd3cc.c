
void FUN_101ccd3cc(void)

{
  undefined8 uVar1;
  ulong in_x10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000058 = 2;
  in_stack_00000058[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < in_stack_00000070) && (in_stack_00000070 != 0)) {
    _free(in_stack_00000040);
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_1020353a0(unaff_x22 + 0x48);
  if (in_stack_00000080 != unaff_x25) {
    func_0x00010203527c(&stack0x00000080);
  }
  if (((long)in_stack_00000060 < 0) && ((in_stack_00000060 & 0xfffffffffffffffe) != unaff_x25 - 1U))
  {
    func_0x00010203527c(in_stack_00000078);
  }
  return;
}
