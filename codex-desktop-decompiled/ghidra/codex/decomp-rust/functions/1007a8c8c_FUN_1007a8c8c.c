
void FUN_1007a8c8c(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  uint unaff_w21;
  ulong unaff_x23;
  undefined8 *unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000040;
  char in_stack_00000060;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x26 = 2;
  unaff_x26[1] = uVar2;
  if ((unaff_x23 & 0x7fffffffffffffff) == 0) {
    iVar1 = 0;
    if (unaff_x28 != 0x8000000000000001) {
      iVar1 = unaff_w27;
    }
  }
  else {
    _free(in_stack_00000040);
    iVar1 = 0;
    if (unaff_x28 != 0x8000000000000001) {
      iVar1 = unaff_w27;
    }
  }
  if ((iVar1 == 1) && ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((unaff_w21 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

