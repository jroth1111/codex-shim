
void FUN_101cc0a98(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x25;
  long unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000050;
  long in_stack_000001b0;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x00000328);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar1;
  if (in_stack_000001b0 != 0x11) {
    FUN_102036bf0(&stack0x000001b0);
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_1020353a0(unaff_x28 + 0x48);
  if (in_stack_00000050 != unaff_x27) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)unaff_x21 < 0) && ((unaff_x21 & 0xfffffffffffffffe) != unaff_x27 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
