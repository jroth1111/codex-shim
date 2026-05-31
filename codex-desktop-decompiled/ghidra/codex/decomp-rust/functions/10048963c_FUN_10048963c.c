
/* WARNING: Type propagation algorithm not settling */

void FUN_10048963c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  ulong in_stack_00000070;
  long in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  char in_stack_000000a0;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xc0);
  *unaff_x24 = 0x1d;
  unaff_x24[1] = uVar1;
  if (in_stack_00000078 != -0x8000000000000000) {
    if (in_stack_00000078 != 0) {
      _free(in_stack_00000060);
    }
    if (*(long *)(unaff_x29 + -0xe0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd8));
    }
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((in_stack_00000090 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000c0);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  return;
}

