
void FUN_101cc79b0(void)

{
  undefined8 uVar1;
  long unaff_x23;
  ulong unaff_x25;
  undefined8 *unaff_x28;
  long in_stack_00000020;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x00000090);
  *unaff_x28 = 0x8000000000000000;
  unaff_x28[1] = uVar1;
  FUN_1020353a0(unaff_x23 + 0x48);
  if (in_stack_00000020 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000020);
  }
  if (((long)unaff_x25 < 0) && ((unaff_x25 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c();
  }
  return;
}
