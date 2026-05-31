
void FUN_1012ff508(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000048;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  *unaff_x19 = 4;
  unaff_x19[1] = uVar1;
  if ((in_stack_00000040 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((-0x7fffffffffffffff < in_stack_00000048) && (in_stack_00000048 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x29 + -0xe0);
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
  return;
}

