
/* WARNING: Removing unreachable block (ram,0x0001007b2dc0) */
/* WARNING: Removing unreachable block (ram,0x0001007b32a4) */

void FUN_1007b2d8c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x24;
  uint unaff_w26;
  undefined8 unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000060;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  char in_stack_000000a0;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *unaff_x24 = unaff_x27;
  unaff_x24[1] = uVar1;
  if (*(long *)(unaff_x29 + -0xf0) != 0) {
    FUN_100cdf624(unaff_x29 + -0xf0);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000060);
  }
  FUN_100d34830(&stack0x000000c0);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

