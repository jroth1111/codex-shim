
/* WARNING: Removing unreachable block (ram,0x000101cc8d30) */

void FUN_101cc8e28(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  ulong in_stack_00000060;
  long in_stack_00000068;
  ulong in_stack_00000078;
  long in_stack_00000080;

  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x27 = 0x8000000000000000;
  unaff_x27[1] = uVar2;
  if (in_stack_00000068 != 0) {
    _free();
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  uVar1 = 0;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w26;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000048);
  }
  FUN_1020353a0(unaff_x25 + 0x48);
  if (in_stack_00000080 != unaff_x28) {
    func_0x00010203527c(&stack0x00000080);
  }
  if (((long)unaff_x23 < 0) && ((unaff_x23 & 0xfffffffffffffffe) != unaff_x28 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
