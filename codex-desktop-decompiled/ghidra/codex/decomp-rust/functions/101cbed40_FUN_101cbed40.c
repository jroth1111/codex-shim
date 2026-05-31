
void FUN_101cbed40(void)

{
  undefined8 uVar1;
  ulong unaff_x25;
  long unaff_x27;
  undefined8 *in_stack_00000020;
  long in_stack_00000030;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000001f0);
  *in_stack_00000020 = 3;
  in_stack_00000020[1] = uVar1;
  FUN_1020353a0(unaff_x27 + 0x48);
  if (in_stack_00000030 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000030);
  }
  if (((long)unaff_x25 < 0) && ((unaff_x25 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c();
  }
  return;
}
