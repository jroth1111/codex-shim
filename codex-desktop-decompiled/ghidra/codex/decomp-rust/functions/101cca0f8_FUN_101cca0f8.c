
void FUN_101cca0f8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x29;
  ulong in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar1;
  FUN_1020353a0(unaff_x20 + 0x48);
  if (in_stack_00000050 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)in_stack_00000028 < 0) &&
     ((in_stack_00000028 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c(in_stack_00000040);
  }
  return;
}
