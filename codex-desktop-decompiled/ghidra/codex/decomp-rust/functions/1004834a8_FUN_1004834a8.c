
void FUN_1004834a8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000010;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -200);
  *unaff_x26 = 0x800000000000006e;
  unaff_x26[1] = uVar1;
  if (unaff_x23 != -0x8000000000000000) {
    FUN_100e6d9bc(&stack0x00000248);
  }
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free(in_stack_00000010);
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

