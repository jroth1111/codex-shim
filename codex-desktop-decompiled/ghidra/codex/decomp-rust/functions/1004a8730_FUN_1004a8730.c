
void FUN_1004a8730(void)

{
  undefined8 uVar1;
  ulong in_x10;
  undefined8 *unaff_x21;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  ulong in_stack_00000088;
  char in_stack_00000090;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *unaff_x21 = 0x11;
  unaff_x21[1] = uVar1;
  if ((in_stack_00000068 != -0x8000000000000000) && (in_stack_00000068 != 0)) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((in_x10 != 0x8000000000000001) && ((in_x10 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  if ((in_stack_00000088 != 0x8000000000000001) && ((in_stack_00000088 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000048);
  }
  FUN_100d34830(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  return;
}

