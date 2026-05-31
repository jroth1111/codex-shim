
void FUN_10048de6c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000028;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000338);
  *unaff_x26 = 0x800000000000006e;
  unaff_x26[1] = uVar1;
  if (unaff_x20 != 2) {
    FUN_100e73b90(&stack0x00000258);
  }
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

