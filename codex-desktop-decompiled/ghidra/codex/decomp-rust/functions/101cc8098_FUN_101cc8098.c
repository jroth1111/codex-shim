
void FUN_101cc8098(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000040;
  long in_stack_00000050;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000040);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_1020353a0(unaff_x25 + 0x48);
  if (in_stack_00000050 != unaff_x24) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)unaff_x26 < 0) && ((unaff_x26 & 0xfffffffffffffffe) != unaff_x24 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
