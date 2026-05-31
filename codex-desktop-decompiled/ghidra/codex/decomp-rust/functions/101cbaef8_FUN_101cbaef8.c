
void FUN_101cbaef8(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  ulong in_stack_00000048;
  long in_stack_00000050;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000040 = 0x8000000000000000;
  in_stack_00000040[1] = uVar1;
  if ((unaff_x21 != -0x8000000000000000) && (unaff_x21 != 0)) {
    _free(in_stack_00000020);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_1020353a0(unaff_x22 + 0x48);
  if (in_stack_00000050 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)in_stack_00000048 < 0) &&
     ((in_stack_00000048 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c(in_stack_00000038);
  }
  return;
}
