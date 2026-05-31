
void FUN_101a5b270(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x23;
  long unaff_x26;
  undefined8 in_stack_00000008;
  ulong in_stack_00000018;
  long in_stack_00000020;
  
  uVar1 = FUN_1088bbbb8(s_duplicate_field_____108ac2973,&stack0x00000140);
  *unaff_x20 = 0x8000000000000002;
  unaff_x20[1] = uVar1;
  if (1 < unaff_x26 + 0x7fffffffffffffffU) {
    func_0x000101933128(&stack0x000000f0);
  }
  FUN_10194df64(unaff_x23 + 0x48);
  if (in_stack_00000020 != -0x7ffffffffffffffb) {
    func_0x00010194dc28(&stack0x00000020);
  }
  if (((long)in_stack_00000018 < 0) &&
     ((in_stack_00000018 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010194dc28(in_stack_00000008);
  }
  return;
}

