
/* WARNING: Removing unreachable block (ram,0x0001007ed94c) */

void FUN_1007edab4(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x24;
  long unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000088;
  long in_stack_00000098;
  ulong in_stack_000000a0;
  long in_stack_000000a8;
  char in_stack_000000b0;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb8);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar2;
  if (unaff_x21 != 0) {
    _free();
  }
  if (in_stack_00000098 != 0) {
    _free(in_stack_00000058);
  }
  if ((in_stack_000000a0 != 0x8000000000000001) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000030);
  }
  if ((-0x7fffffffffffffff < in_stack_000000a8) && (in_stack_000000a8 != 0)) {
    _free(in_stack_00000038);
  }
  if (unaff_x22 != 0) {
    FUN_100cdf624(unaff_x29 + -0xe8);
  }
  uVar1 = 0;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w20;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (in_stack_000000b0 != '\x16') {
    FUN_100e077ec(&stack0x000000b0);
  }
  if ((in_stack_00000078._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000088);
  }
  return;
}

