
void FUN_101cce170(void)

{
  undefined8 uVar1;
  ulong unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000028;
  long in_stack_00000040;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x000002c8);
  *in_stack_00000018 = 0x8000000000000000;
  in_stack_00000018[1] = uVar1;
  if (unaff_x27 != -0x8000000000000000) {
    FUN_10203e4dc(&stack0x000001c8);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_1020353a0(unaff_x23 + 0x48);
  if (in_stack_00000040 != unaff_x26) {
    func_0x00010203527c(&stack0x00000040);
  }
  if (((long)unaff_x21 < 0) && ((unaff_x21 & 0xfffffffffffffffe) != unaff_x26 - 1U)) {
    func_0x00010203527c(in_stack_00000008);
  }
  return;
}
