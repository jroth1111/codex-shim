
void FUN_1012975bc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  char in_stack_00000080;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000f0);
  *unaff_x23 = 7;
  unaff_x23[1] = uVar1;
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  return;
}

