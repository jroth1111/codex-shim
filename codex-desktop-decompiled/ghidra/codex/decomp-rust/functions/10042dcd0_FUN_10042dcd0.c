
/* WARNING: Removing unreachable block (ram,0x00010042dfd0) */

void FUN_10042dcd0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong unaff_x19;
  long lVar4;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000070;
  
  uVar3 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x24 = 0x11;
  unaff_x24[1] = uVar3;
  if (unaff_x27 != 0) {
    _free(in_stack_00000030);
  }
  if (in_stack_00000068 != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if (in_stack_00000060 != -0x8000000000000000) {
    lVar4 = unaff_x22 + 1;
    lVar2 = in_stack_00000048;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100de6690(lVar2);
      lVar2 = lVar2 + 0x48;
    }
    if (in_stack_00000060 != 0) {
      _free(in_stack_00000048);
    }
  }
  if (((unaff_x27 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free(in_stack_00000030);
  }
  iVar1 = 0;
  if (unaff_x26 != 0x8000000000000001) {
    iVar1 = unaff_w23;
  }
  if ((iVar1 == 1) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  return;
}

