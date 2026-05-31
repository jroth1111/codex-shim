
void FUN_1004c790c(void)

{
  undefined8 uVar1;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  uint in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  char in_stack_00000070;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000028 = 0x8000000000000000;
  in_stack_00000028[1] = uVar1;
  if ((unaff_x21 != -0x8000000000000000) && (unaff_x21 != 0)) {
    _free(in_stack_00000038);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000050 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000030);
  }
  return;
}

