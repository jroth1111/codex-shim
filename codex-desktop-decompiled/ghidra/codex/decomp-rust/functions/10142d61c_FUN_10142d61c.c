
/* WARNING: Removing unreachable block (ram,0x00010142d368) */

void FUN_10142d61c(void)

{
  undefined8 uVar1;
  long unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  uint in_stack_00000028;
  char in_stack_00000030;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  if ((-0x7fffffffffffffff < unaff_x27) && (unaff_x27 != 0)) {
    _free(in_stack_00000018);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000028 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000020);
  }
  *in_stack_00000008 = 0x8000000000000002;
  in_stack_00000008[1] = uVar1;
  return;
}

