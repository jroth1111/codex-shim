
void FUN_10045d7a0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd8);
  *unaff_x26 = 0x800000000000006e;
  unaff_x26[1] = uVar1;
  if (unaff_x24 != -0x8000000000000000) {
    if (unaff_x24 != 0) {
      _free();
    }
    FUN_100de6690(&stack0x00000260);
  }
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x27 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

