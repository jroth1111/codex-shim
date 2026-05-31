
void FUN_101cc5010(void)

{
  undefined8 uVar1;
  long unaff_x23;
  undefined8 *unaff_x25;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 in_stack_00000030;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  long in_stack_00000060;
  long in_stack_000001f8;

  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000002f0);
  *unaff_x25 = 0x12;
  unaff_x25[1] = uVar1;
  if (((in_stack_00000058 & 0x7fffffffffffffff) != 0) && ((unaff_x27 & 1) != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000050 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if (in_stack_000001f8 != 0x12) {
    FUN_10203bcb8(&stack0x000001f8);
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
