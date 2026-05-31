
/* WARNING: Removing unreachable block (ram,0x0001007b32a4) */

void FUN_1007b2e14(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_w20;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000060;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  char in_stack_000000a0;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *in_stack_00000040 = 0x8000000000000000;
  in_stack_00000040[1] = uVar2;
  if (unaff_x23 != 0) {
    _free();
  }
  if (in_stack_00000090 != 0) {
    _free(in_stack_00000038);
  }
  if (*(long *)(unaff_x29 + -0xf0) != 0) {
    FUN_100cdf624(unaff_x29 + -0xf0);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) == 0) {
    uVar1 = 0;
    if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w22;
    }
  }
  else {
    _free(in_stack_00000028);
    uVar1 = 0;
    if ((in_stack_00000088 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w22;
    }
  }
  if ((uVar1 & 1) == 0) {
    uVar1 = 0;
    if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  else {
    _free(in_stack_00000030);
    uVar1 = 0;
    if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w20;
    }
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000060);
  }
  FUN_100d34830(&stack0x000000c0);
  if (in_stack_000000a0 != '\x16') {
    FUN_100e077ec(&stack0x000000a0);
  }
  if ((in_stack_00000098._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

