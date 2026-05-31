
void FUN_101cce968(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000040;
  long in_stack_00000050;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if (((unaff_x28 != 0x8000000000000001) && ((in_stack_00000028 & 0x100000000) != 0)) &&
     ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free();
  }
  FUN_1020353a0(unaff_x25 + 0x48);
  if (in_stack_00000050 != unaff_x24) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)unaff_x21 < 0) && ((unaff_x21 & 0xfffffffffffffffe) != unaff_x24 - 1U)) {
    func_0x00010203527c(in_stack_00000020);
  }
  return;
}
