
void FUN_101cc7064(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x25;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  long in_stack_00000040;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if ((-0x7ffffffffffffffd < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_1020353a0(unaff_x22 + 0x48);
  if (in_stack_00000040 != unaff_x27) {
    func_0x00010203527c(&stack0x00000040);
  }
  if (((long)unaff_x25 < 0) && ((unaff_x25 & 0xfffffffffffffffe) != unaff_x27 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
