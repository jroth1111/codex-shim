
void FUN_101cbef0c(void)

{
  undefined8 uVar1;
  long unaff_x27;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000030;
  ulong in_stack_00000198;
  undefined8 in_stack_000001a0;
  ulong in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long in_stack_000001c8;
  undefined8 in_stack_000001d0;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x000001f0);
  *in_stack_00000020 = 3;
  in_stack_00000020[1] = uVar1;
  if ((in_stack_00000198 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000001a0);
  }
  if ((in_stack_000001b0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000001b8);
  }
  if ((-0x7fffffffffffffff < in_stack_000001c8) && (in_stack_000001c8 != 0)) {
    _free(in_stack_000001d0);
  }
  FUN_1020353a0(unaff_x27 + 0x48);
  if (in_stack_00000030 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000030);
  }
  if (((long)in_stack_00000018 < 0) &&
     ((in_stack_00000018 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c(in_stack_00000010);
  }
  return;
}
