
void FUN_10044f09c(void)

{
  undefined8 uVar1;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  long in_stack_00000260;
  undefined8 in_stack_00000268;
  long in_stack_00000278;
  undefined8 in_stack_00000280;
  long in_stack_00000290;
  undefined8 in_stack_00000298;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd8);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar1;
  if (unaff_x25 != -0x8000000000000000) {
    if (unaff_x26 != 0) {
      _free(in_stack_00000020);
    }
    if (in_stack_00000260 != -0x7ffffffffffffffe) {
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
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

