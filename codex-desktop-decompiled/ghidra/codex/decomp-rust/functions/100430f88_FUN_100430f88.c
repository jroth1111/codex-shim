
void FUN_100430f88(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x22;
  undefined8 *unaff_x27;
  long unaff_x28;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002f8);
  *unaff_x27 = 0x800000000000006e;
  unaff_x27[1] = uVar1;
  if (unaff_x28 != 3) {
    FUN_100e659a4(&stack0x00000250);
  }
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

