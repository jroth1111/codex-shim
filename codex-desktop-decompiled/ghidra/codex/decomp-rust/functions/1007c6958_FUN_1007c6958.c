
/* WARNING: Removing unreachable block (ram,0x0001007c67ec) */

void FUN_1007c6958(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int unaff_w19;
  uint unaff_w20;
  ulong unaff_x21;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000050;
  uint in_stack_00000060;
  long in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  char in_stack_00000080;
  
  uVar3 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *in_stack_00000040 = 0x8000000000000000;
  in_stack_00000040[1] = uVar3;
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if (unaff_x24 != 0) {
    _free(in_stack_00000050);
  }
  if (in_stack_00000068 != 0) {
    _free();
  }
  if ((in_stack_00000070 != 0x8000000000000001) && ((in_stack_00000070 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000078 & 0x7fffffffffffffff) == 0) {
    iVar1 = 0;
    if (unaff_x23 != 0x8000000000000001) {
      iVar1 = unaff_w19;
    }
  }
  else {
    _free(in_stack_00000038);
    iVar1 = 0;
    if (unaff_x23 != 0x8000000000000001) {
      iVar1 = unaff_w19;
    }
  }
  if ((iVar1 == 1) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
    uVar2 = 0;
    if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
      uVar2 = unaff_w20;
    }
  }
  else {
    uVar2 = 0;
    if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
      uVar2 = unaff_w20;
    }
  }
  if ((uVar2 & 1) != 0) {
    _free(in_stack_00000050);
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000060 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

