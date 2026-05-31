
void FUN_100796198(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w24;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  ulong in_stack_00000050;
  long in_stack_00000058;
  char in_stack_00000060;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *in_stack_00000038 = 0x8000000000000000;
  in_stack_00000038[1] = uVar2;
  lVar1 = in_stack_00000040;
  if (in_stack_00000058 != -0x8000000000000000) {
    for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -1) {
      FUN_100e4b8ec(lVar1);
      lVar1 = lVar1 + 0x68;
    }
    if (in_stack_00000058 != 0) {
      _free(in_stack_00000040);
    }
  }
  if ((in_stack_00000050 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((unaff_w24 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

