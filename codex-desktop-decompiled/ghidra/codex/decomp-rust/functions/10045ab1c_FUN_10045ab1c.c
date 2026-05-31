
void FUN_10045ab1c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x27;
  long unaff_x29;
  char in_stack_00000030;
  long in_stack_00000250;
  undefined8 in_stack_00000258;
  long in_stack_00000268;
  undefined8 in_stack_00000270;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -200);
  *unaff_x27 = 0x800000000000006e;
  unaff_x27[1] = uVar1;
  if (unaff_x23 != 3) {
    if (in_stack_00000250 != 0) {
      _free(in_stack_00000258);
    }
    if ((in_stack_00000268 != -0x8000000000000000) && (in_stack_00000268 != 0)) {
      _free(in_stack_00000270);
    }
  }
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

