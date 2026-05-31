
void FUN_101cb8388(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long unaff_x24;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000040;
  ulong in_stack_00000128;
  undefined8 in_stack_00000130;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if (unaff_x28 != -0x8000000000000000) {
    if (unaff_x28 != 0) {
      _free();
    }
    if ((in_stack_00000128 & 0x7fffffffffffffff) != 0) {
      _free(in_stack_00000130);
    }
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000040 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000040);
  }
  if (((long)unaff_x21 < 0) && ((unaff_x21 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c();
  }
  return;
}
