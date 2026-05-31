
/* WARNING: Removing unreachable block (ram,0x000101cacc14) */
/* WARNING: Removing unreachable block (ram,0x000101cacc2c) */

void FUN_101cacd60(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x23;
  long unaff_x25;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_000000a0;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if (in_stack_00000088 != 0) {
    _free(in_stack_00000040);
  }
  if (in_stack_00000090 != 0) {
    _free(in_stack_00000050);
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  FUN_1020353a0(unaff_x23 + 0x48);
  if (in_stack_000000a0 != unaff_x25) {
    func_0x00010203527c(&stack0x000000a0);
  }
  if (((long)unaff_x27 < 0) && ((unaff_x27 & 0xfffffffffffffffe) != unaff_x25 - 1U)) {
    func_0x00010203527c();
  }
  return;
}
