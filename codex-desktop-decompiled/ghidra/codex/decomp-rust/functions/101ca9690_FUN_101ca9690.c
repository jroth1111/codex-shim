
/* WARNING: Removing unreachable block (ram,0x000101ca975c) */

void FUN_101ca9690(void)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long unaff_x24;
  ulong unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;

  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar2;
  if (in_stack_00000070 != 0) {
    _free(in_stack_00000040);
  }
  if (in_stack_00000080 != 0) {
    _free(in_stack_00000030);
  }
  if (in_stack_00000078 != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000088 != 0) {
    _free(in_stack_00000048);
  }
  if (((in_stack_00000070 & 0x7fffffffffffffff) != 0) && ((unaff_x21 & 1) != 0)) {
    _free(in_stack_00000040);
  }
  if (((in_stack_00000080 & 0x7fffffffffffffff) != 0) && ((unaff_x27 & 1) != 0)) {
    _free(in_stack_00000030);
  }
  uVar1 = 0;
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w28;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000038);
  }
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000090 != unaff_x19) {
    func_0x00010203527c(&stack0x00000090);
  }
  if (((long)in_stack_00000068 < 0) && ((in_stack_00000068 & 0xfffffffffffffffe) != unaff_x19 - 1U))
  {
    func_0x00010203527c();
  }
  return;
}
