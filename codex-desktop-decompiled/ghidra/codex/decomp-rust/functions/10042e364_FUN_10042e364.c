
void FUN_10042e364(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  ulong in_stack_00000058;
  long in_stack_00000060;
  ulong in_stack_00000068;
  char in_stack_00000070;
  
  uVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000020 = 0x11;
  in_stack_00000020[1] = uVar2;
  if (in_stack_00000060 != -0x8000000000000000) {
    lVar3 = unaff_x22 + 1;
    lVar1 = in_stack_00000048;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      FUN_100de6690(lVar1);
      lVar1 = lVar1 + 0x48;
    }
    if (in_stack_00000060 != 0) {
      _free(in_stack_00000048);
    }
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x26 != 0x8000000000000001) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  return;
}

