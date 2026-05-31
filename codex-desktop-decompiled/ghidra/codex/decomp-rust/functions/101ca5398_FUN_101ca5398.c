
/* WARNING: Removing unreachable block (ram,0x000101ca55a4) */

void FUN_101ca5398(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000048;
  long in_stack_00000050;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if (unaff_x28 != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x21 != -0x8000000000000000) && (unaff_x21 != 0)) {
    _free(in_stack_00000020);
  }
  if (((unaff_x25 & 0x7fffffffffffffff) != 0) && ((unaff_x24 & 1) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_1020353a0(unaff_x22 + 0x48);
  if (in_stack_00000050 != unaff_x27) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)in_stack_00000048 < 0) && ((in_stack_00000048 & 0xfffffffffffffffe) != unaff_x27 - 1U))
  {
    func_0x00010203527c();
  }
  return;
}
