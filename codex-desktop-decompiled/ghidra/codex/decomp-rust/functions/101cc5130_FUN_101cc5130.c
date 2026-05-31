
/* WARNING: Removing unreachable block (ram,0x000101cc54b4) */

void FUN_101cc5130(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  long unaff_x23;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  long in_stack_00000060;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000002f0);
  *in_stack_00000020 = 0x12;
  in_stack_00000020[1] = uVar1;
  if (in_stack_00000050 != 0) {
    _free(in_stack_00000028);
  }
  FUN_10203bcb8(&stack0x000003e0);
  if (((in_stack_00000058 & 0x7fffffffffffffff) != 0) && ((unaff_x27 & 1) != 0)) {
    _free(in_stack_00000030);
  }
  if (((in_stack_00000050 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_1020353a0(unaff_x23 + 0x48);
  if (in_stack_00000060 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000060);
  }
  if (((long)unaff_x28 < 0) && ((unaff_x28 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c();
  }
  return;
}
