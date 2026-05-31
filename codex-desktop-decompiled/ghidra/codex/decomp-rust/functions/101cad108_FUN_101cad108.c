
void FUN_101cad108(void)

{
  undefined8 uVar1;
  long unaff_x23;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  long in_stack_000000a0;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000078 = 0x8000000000000000;
  in_stack_00000078[1] = uVar1;
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000090 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_1020353a0(unaff_x23 + 0x48);
  if (in_stack_000000a0 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x000000a0);
  }
  if (((long)unaff_x27 < 0) && ((unaff_x27 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c();
  }
  return;
}
