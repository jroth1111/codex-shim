
void FUN_101ca875c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x24;
  long unaff_x27;
  long unaff_x29;
  ulong in_stack_00000018;
  long in_stack_00000040;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if (unaff_x27 != 0) {
    _free();
  }
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000040 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000040);
  }
  if (((long)in_stack_00000018 < 0) &&
     ((in_stack_00000018 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c();
  }
  return;
}
