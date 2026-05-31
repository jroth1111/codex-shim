
void FUN_101cb6378(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  ulong in_stack_00000068;
  long in_stack_00000070;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if ((unaff_x21 != 0x8000000000000001) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_1020353a0(unaff_x23 + 0x48);
  if (in_stack_00000070 != unaff_x26) {
    func_0x00010203527c(&stack0x00000070);
  }
  if (((long)unaff_x22 < 0) && ((unaff_x22 & 0xfffffffffffffffe) != unaff_x26 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
