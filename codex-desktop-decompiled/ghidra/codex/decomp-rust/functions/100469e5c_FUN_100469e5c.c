
void FUN_100469e5c(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong unaff_x21;
  int unaff_w22;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *unaff_x27 = 0x8000000000000006;
  unaff_x27[1] = uVar2;
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  iVar1 = 0;
  if (unaff_x21 != 0x8000000000000001) {
    iVar1 = unaff_w22;
  }
  if ((iVar1 == 1) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(unaff_x25 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

