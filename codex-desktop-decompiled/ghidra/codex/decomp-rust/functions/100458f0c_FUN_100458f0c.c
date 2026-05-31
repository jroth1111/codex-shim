
void FUN_100458f0c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x21;
  ulong unaff_x23;
  long unaff_x29;
  undefined8 in_stack_00000010;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -200);
  *unaff_x21 = 0x800000000000006e;
  unaff_x21[1] = uVar1;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000010);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

