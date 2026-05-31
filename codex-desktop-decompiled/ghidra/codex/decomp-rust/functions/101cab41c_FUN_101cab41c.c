
void FUN_101cab41c(void)

{
  undefined8 uVar1;
  long unaff_x24;
  undefined8 *unaff_x26;
  ulong unaff_x28;
  long in_stack_00000020;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x00000478);
  *unaff_x26 = 0x8000000000000000;
  unaff_x26[1] = uVar1;
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000020 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000020);
  }
  if (((long)unaff_x28 < 0) && ((unaff_x28 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c();
  }
  return;
}
