
void FUN_10044ebb8(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  long in_stack_00000260;
  undefined8 in_stack_00000268;
  long in_stack_00000278;
  undefined8 in_stack_00000280;
  long in_stack_00000290;
  undefined8 in_stack_00000298;
  
  lVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd8);
  *unaff_x28 = unaff_x19;
  unaff_x28[1] = lVar1;
  if (unaff_x25 != -0x8000000000000000) {
    if (unaff_x26 != 0) {
      _free(in_stack_00000020);
    }
    if (in_stack_00000260 != unaff_x19 + -0x6c) {
      if (((in_stack_00000260 != -0x7fffffffffffffff) && (in_stack_00000260 != -0x8000000000000000))
         && (in_stack_00000260 != 0)) {
        _free(in_stack_00000268);
      }
      if (((in_stack_00000278 != -0x7fffffffffffffff) && (in_stack_00000278 != -0x8000000000000000))
         && (in_stack_00000278 != 0)) {
        _free(in_stack_00000280);
      }
      if (((in_stack_00000290 != -0x7fffffffffffffff) && (in_stack_00000290 != -0x8000000000000000))
         && (in_stack_00000290 != 0)) {
        _free(in_stack_00000298);
      }
    }
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

