
/* WARNING: Removing unreachable block (ram,0x000101cd5314) */
/* WARNING: Removing unreachable block (ram,0x000101cd531c) */

void FUN_101cd4e48(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x22;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000050;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000090;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *in_stack_00000050 = unaff_x20;
  in_stack_00000050[1] = uVar1;
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000090 != unaff_x19) {
    func_0x00010203527c(&stack0x00000090);
  }
  if (((long)unaff_x22 < 0) && ((unaff_x22 & 0xfffffffffffffffe) != unaff_x19 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
