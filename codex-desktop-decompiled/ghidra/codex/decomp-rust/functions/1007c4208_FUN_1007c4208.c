
void FUN_1007c4208(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w20;
  ulong unaff_x21;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  char in_stack_00000070;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xe8);
  *in_stack_00000048 = 2;
  in_stack_00000048[1] = uVar2;
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  iVar1 = 0;
  if (unaff_x27 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((unaff_x27 & 0x7fffffffffffffff) != 0)) {
    _free();
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000058._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000050);
  }
  return;
}

