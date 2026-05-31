
void FUN_1007ef3f4(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w19;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  char in_stack_00000050;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x27 = 0x8000000000000000;
  unaff_x27[1] = uVar2;
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  iVar1 = 0;
  if (unaff_x23 != 0x8000000000000001) {
    iVar1 = unaff_w19;
  }
  if ((iVar1 == 1) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

