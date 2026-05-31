
void FUN_101cccef4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000078;
  long in_stack_00000080;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x19 = 2;
  unaff_x19[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < unaff_x26) && (unaff_x26 != 0)) {
    _free(in_stack_00000040);
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_1020353a0(unaff_x22 + 0x48);
  if (in_stack_00000080 != unaff_x25) {
    func_0x00010203527c(&stack0x00000080);
  }
  if (((long)unaff_x21 < 0) && ((unaff_x21 & 0xfffffffffffffffe) != unaff_x25 - 1U)) {
    func_0x00010203527c(in_stack_00000078);
  }
  return;
}
