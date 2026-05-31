
void FUN_101cc0ff8(void)

{
  undefined8 uVar1;
  ulong unaff_x25;
  long unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  long in_stack_00000050;
  long in_stack_000001b0;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x00000328);
  *in_stack_00000030 = 0x11;
  in_stack_00000030[1] = uVar1;
  if (in_stack_000001b0 != 0x11) {
    FUN_102036bf0(&stack0x000001b0);
  }
  if ((in_stack_00000048 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_1020353a0(unaff_x28 + 0x48);
  if (in_stack_00000050 != unaff_x27) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)in_stack_00000040 < 0) && ((in_stack_00000040 & 0xfffffffffffffffe) != unaff_x27 - 1U))
  {
    func_0x00010203527c(in_stack_00000038);
  }
  return;
}
