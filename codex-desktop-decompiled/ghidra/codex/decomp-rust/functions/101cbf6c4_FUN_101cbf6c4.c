
/* WARNING: Removing unreachable block (ram,0x000101cbf60c) */
/* WARNING: Removing unreachable block (ram,0x000101cbf614) */

void FUN_101cbf6c4(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  long unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000050;
  ulong in_stack_00000058;
  long in_stack_00000060;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *in_stack_00000050 = 0x8000000000000000;
  in_stack_00000050[1] = uVar1;
  if (unaff_x25 != 0) {
    _free();
  }
  if (((in_stack_00000058 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000040);
  }
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000060 != unaff_x28) {
    func_0x00010203527c(&stack0x00000060);
  }
  if (((long)in_stack_00000018 < 0) && ((in_stack_00000018 & 0xfffffffffffffffe) != unaff_x28 - 1U))
  {
    func_0x00010203527c(in_stack_00000010);
  }
  return;
}
