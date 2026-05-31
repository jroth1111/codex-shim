
/* WARNING: Type propagation algorithm not settling */

void FUN_100468434(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x24;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  long in_stack_00000080;
  ulong in_stack_00000088;
  char in_stack_00000090;
  long in_stack_00000210;
  undefined8 in_stack_00000218;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xf0);
  *unaff_x24 = 0x1d;
  unaff_x24[1] = uVar1;
  if (in_stack_00000080 != -0x8000000000000000) {
    if (in_stack_00000080 != 0) {
      _free(in_stack_00000058);
    }
    if (in_stack_00000210 != 0) {
      _free(in_stack_00000218);
    }
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  return;
}

