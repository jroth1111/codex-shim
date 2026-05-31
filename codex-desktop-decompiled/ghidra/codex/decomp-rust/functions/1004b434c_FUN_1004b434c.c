
void FUN_1004b434c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  undefined8 in_stack_00000018;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002e8);
  *unaff_x20 = 0x800000000000006e;
  unaff_x20[1] = uVar1;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

