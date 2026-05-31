
void FUN_101298140(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char in_stack_00000080;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000f0);
  *unaff_x23 = 7;
  unaff_x23[1] = uVar1;
  if (unaff_x25 != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  return;
}

