
/* WARNING: Removing unreachable block (ram,0x0001004ca3f8) */

void FUN_1004ca484(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong unaff_x23;
  uint unaff_w24;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000070;
  char in_stack_00000080;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *in_stack_00000038 = 0x8000000000000000;
  in_stack_00000038[1] = uVar2;
  if (in_stack_00000070 != 0) {
    _free(in_stack_00000058);
  }
  if ((unaff_x28 != -0x8000000000000000) && (unaff_x28 != 0)) {
    _free(in_stack_00000028);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  uVar1 = 0;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w24;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000060._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

