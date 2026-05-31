
void FUN_1007ee030(void)

{
  undefined8 uVar1;
  ulong unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  long in_stack_000000a8;
  char in_stack_000000b0;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb8);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar1;
  if ((in_stack_000000a0 != 0x8000000000000001) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  if ((-0x7fffffffffffffff < in_stack_000000a8) && (in_stack_000000a8 != 0)) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000090 != 0) {
    FUN_100cdf624(unaff_x29 + -0xe8);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  FUN_100d34830(&stack0x000000d0);
  if (in_stack_000000b0 != '\x16') {
    FUN_100e077ec(&stack0x000000b0);
  }
  if ((in_stack_00000078._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000088);
  }
  return;
}

