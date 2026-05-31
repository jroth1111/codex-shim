
/* WARNING: Removing unreachable block (ram,0x0001007b7f08) */

void FUN_1007b827c(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  long unaff_x22;
  ulong unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000070;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xb8);
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar1;
  if (unaff_x22 != 0) {
    _free();
  }
  if (in_stack_00000060 != 0) {
    _free(in_stack_00000028);
  }
  if (in_stack_00000068 != 0) {
    FUN_100cdf624(unaff_x29 + -0xe8);
  }
  if (((unaff_x25 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000050._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

