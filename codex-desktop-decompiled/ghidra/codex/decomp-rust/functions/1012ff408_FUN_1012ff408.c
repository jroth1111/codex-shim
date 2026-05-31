
void FUN_1012ff408(void)

{
  undefined8 uVar1;
  ulong in_x10;
  ulong unaff_x22;
  undefined8 *unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  *unaff_x26 = 4;
  unaff_x26[1] = uVar1;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((in_x10 != 0x8000000000000001) && ((in_x10 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000040 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x29 + -0xe0);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  return;
}

