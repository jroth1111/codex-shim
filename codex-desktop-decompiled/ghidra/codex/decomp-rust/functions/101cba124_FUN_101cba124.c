
void FUN_101cba124(void)

{
  undefined8 uVar1;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  ulong in_stack_00000168;
  undefined8 in_stack_00000170;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar1;
  if ((in_stack_00000068 != -0x8000000000000000) && (in_stack_00000068 != 0)) {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if (in_stack_00000150 != -0x8000000000000000) {
    if (in_stack_00000150 != 0) {
      _free(in_stack_00000158);
    }
    if ((in_stack_00000168 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_00000170);
    }
  }
  FUN_1020353a0(unaff_x26 + 0x48);
  if (in_stack_00000070 != unaff_x25) {
    func_0x00010203527c(&stack0x00000070);
  }
  if (((long)in_stack_00000058 < 0) && ((in_stack_00000058 & 0xfffffffffffffffe) != unaff_x25 - 1U))
  {
    func_0x00010203527c();
  }
  return;
}
