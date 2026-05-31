
void FUN_10043d518(void)

{
  undefined8 uVar1;
  ulong unaff_x22;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  char in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *in_stack_00000010 = 0x800000000000006e;
  in_stack_00000010[1] = uVar1;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000040);
  if (in_stack_00000020 != '\x16') {
    FUN_100e077ec(&stack0x00000020);
  }
  return;
}

