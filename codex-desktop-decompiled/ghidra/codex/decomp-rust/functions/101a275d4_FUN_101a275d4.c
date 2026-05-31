
/* WARNING: Removing unreachable block (ram,0x000101a2750c) */

void FUN_101a275d4(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  
  uVar1 = FUN_1088bbbb8(s_duplicate_field_____108ac2973,&stack0x00000090);
  FUN_10194df64(unaff_x22 + 0x48);
  if (in_stack_00000020 != unaff_x19) {
    func_0x00010194dc28(&stack0x00000020);
  }
  if (((long)in_stack_00000018 < 0) && ((in_stack_00000018 & 0xfffffffffffffffe) != unaff_x19 - 1U))
  {
    func_0x00010194dc28(in_stack_00000008);
  }
  *(undefined8 *)(in_stack_00000010 + 8) = uVar1;
  *in_stack_00000010 = 1;
  return;
}

