
void FUN_1004999c8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *unaff_x27 = 0x800000000000006e;
  unaff_x27[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free(in_stack_00000020);
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

