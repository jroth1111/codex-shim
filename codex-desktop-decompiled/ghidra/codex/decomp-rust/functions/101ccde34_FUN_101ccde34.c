
void FUN_101ccde34(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  ulong in_stack_00000038;
  long in_stack_00000040;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000002c8);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if (unaff_x24 != 0) {
    _free();
  }
  FUN_1020353a0(unaff_x23 + 0x48);
  if (in_stack_00000040 != unaff_x26) {
    func_0x00010203527c(&stack0x00000040);
  }
  if (((long)in_stack_00000038 < 0) && ((in_stack_00000038 & 0xfffffffffffffffe) != unaff_x26 - 1U))
  {
    func_0x00010203527c();
  }
  return;
}
