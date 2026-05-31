
void FUN_100ad024c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x25;
  long unaff_x28;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  char in_stack_00000080;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000100);
  *unaff_x19 = 0x800000000000000f;
  unaff_x19[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x28) && (unaff_x28 != 0)) {
    _free(in_stack_00000060);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000068);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000078._4_4_ != 0x16) && ((in_stack_00000078._4_4_ & 0x1e) != 0x14)) {
    FUN_100e077ec(&stack0x000000e0);
  }
  return;
}

