
void FUN_10124981c(void)

{
  undefined8 uVar1;
  ulong unaff_x23;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char in_stack_00000030;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
  *in_stack_00000008 = 0x8000000000000000;
  in_stack_00000008[1] = uVar1;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000010);
  }
  return;
}

