
void FUN_1012d4324(void)

{
  undefined8 uVar1;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  uint in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
  *in_stack_00000018 = 0x8000000000000001;
  in_stack_00000018[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x26) && (unaff_x26 != 0)) {
    _free();
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  if ((in_stack_00000038 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000010);
  }
  return;
}

