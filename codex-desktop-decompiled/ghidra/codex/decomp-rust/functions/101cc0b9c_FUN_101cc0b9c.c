
/* WARNING: Removing unreachable block (ram,0x000101cc0aec) */

void FUN_101cc0b9c(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  uint unaff_w23;
  long unaff_x25;
  long unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  long in_stack_00000050;
  long in_stack_000001b0;

  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x00000328);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if (unaff_x25 != 0) {
    _free(in_stack_00000028);
  }
  if (in_stack_000001b0 != 0x11) {
    FUN_102036bf0(&stack0x000001b0);
  }
  uVar1 = 0;
  if ((in_stack_00000048 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w23;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000020);
  }
  FUN_1020353a0(unaff_x28 + 0x48);
  if (in_stack_00000050 != unaff_x27) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)in_stack_00000040 < 0) && ((in_stack_00000040 & 0xfffffffffffffffe) != unaff_x27 - 1U))
  {
    func_0x00010203527c();
  }
  return;
}
