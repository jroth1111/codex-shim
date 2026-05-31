
void FUN_1007d24f8(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  ulong unaff_x26;
  uint unaff_w28;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *in_stack_00000018 = 0x8000000000000001;
  in_stack_00000018[1] = uVar2;
  if ((unaff_x21 & 0x7fffffffffffffff) == 0) {
    iVar1 = 0;
    if (unaff_x26 != 0x8000000000000001) {
      iVar1 = unaff_w22;
    }
  }
  else {
    _free(in_stack_00000028);
    iVar1 = 0;
    if (unaff_x26 != 0x8000000000000001) {
      iVar1 = unaff_w22;
    }
  }
  if ((iVar1 == 1) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((unaff_w28 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

