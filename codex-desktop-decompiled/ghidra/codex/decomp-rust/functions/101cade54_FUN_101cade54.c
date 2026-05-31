
/* WARNING: Removing unreachable block (ram,0x000101cae014) */
/* WARNING: Removing unreachable block (ram,0x000101cae01c) */

void FUN_101cade54(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x22;
  long unaff_x25;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  ulong in_stack_00000048;
  long in_stack_00000050;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if (unaff_x28 != 0) {
    _free();
  }
  if ((unaff_x22 != 0x8000000000000001) && ((unaff_x22 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  FUN_1020353a0(unaff_x25 + 0x48);
  if (in_stack_00000050 != unaff_x26) {
    func_0x00010203527c(&stack0x00000050);
  }
  if (((long)in_stack_00000048 < 0) && ((in_stack_00000048 & 0xfffffffffffffffe) != unaff_x26 - 1U))
  {
    func_0x00010203527c();
  }
  return;
}
