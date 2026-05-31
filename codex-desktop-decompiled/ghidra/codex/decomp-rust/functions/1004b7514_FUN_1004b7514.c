
void FUN_1004b7514(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  ulong in_stack_00000080;
  char in_stack_00000090;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar1;
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  FUN_100d34830(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  if ((in_stack_00000050._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000068);
  }
  return;
}

