
void FUN_101cabbc4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000028;
  long in_stack_00000040;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x00000208);
  *unaff_x19 = 2;
  unaff_x19[1] = uVar1;
  if (unaff_x27 != 2) {
    FUN_10203cab8(&stack0x00000168);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_1020353a0(unaff_x23 + 0x48);
  if (in_stack_00000040 != unaff_x26) {
    func_0x00010203527c(&stack0x00000040);
  }
  if (((long)unaff_x21 < 0) && ((unaff_x21 & 0xfffffffffffffffe) != unaff_x26 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
