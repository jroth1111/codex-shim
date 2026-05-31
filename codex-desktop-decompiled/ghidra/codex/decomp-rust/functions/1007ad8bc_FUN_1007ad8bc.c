
/* WARNING: Removing unreachable block (ram,0x0001007ad82c) */
/* WARNING: Removing unreachable block (ram,0x0001007ad834) */

void FUN_1007ad8bc(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  uint unaff_w26;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  char in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *in_stack_00000038 = 0x8000000000000000;
  in_stack_00000038[1] = uVar1;
  if (unaff_x27 != 0) {
    _free(in_stack_00000030);
  }
  if (((unaff_x28 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000040);
  }
  return;
}

