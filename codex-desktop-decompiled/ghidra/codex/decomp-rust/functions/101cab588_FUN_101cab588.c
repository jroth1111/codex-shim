
void FUN_101cab588(void)

{
  undefined8 uVar1;
  long unaff_x24;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;

  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x00000478);
  *in_stack_00000008 = 0x8000000000000000;
  in_stack_00000008[1] = uVar1;
  FUN_10203d13c(&stack0x00000280);
  FUN_1020353a0(unaff_x24 + 0x48);
  if (in_stack_00000020 != -0x7ffffffffffffffb) {
    func_0x00010203527c(&stack0x00000020);
  }
  if (((long)in_stack_00000018 < 0) &&
     ((in_stack_00000018 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010203527c(in_stack_00000010);
  }
  return;
}
