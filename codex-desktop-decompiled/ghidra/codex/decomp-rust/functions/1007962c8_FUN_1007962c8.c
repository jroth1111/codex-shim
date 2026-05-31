
/* WARNING: Removing unreachable block (ram,0x00010079622c) */

void FUN_1007962c8(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  long unaff_x22;
  uint unaff_w24;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  ulong in_stack_00000050;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *in_stack_00000038 = 0x8000000000000000;
  in_stack_00000038[1] = uVar1;
  if (unaff_x22 != 0) {
    _free();
  }
  if (unaff_x28 != 0) {
    _free(in_stack_00000028);
  }
  if (((in_stack_00000050 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((unaff_w24 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

