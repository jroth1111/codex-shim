
void FUN_10048ef98(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *unaff_x19 = 0x800000000000006e;
  unaff_x19[1] = uVar1;
  if (unaff_x24 != 0) {
    _free(in_stack_00000010);
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000018);
  }
  FUN_100d34830(&stack0x00000040);
  if (in_stack_00000020 != '\x16') {
    FUN_100e077ec(&stack0x00000020);
  }
  return;
}

