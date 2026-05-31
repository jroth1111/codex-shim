
void FUN_10046d300(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_w22;
  int unaff_w23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  char in_stack_00000060;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000200);
  *in_stack_00000038 = 0x11;
  in_stack_00000038[1] = uVar2;
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if (unaff_x27 == 2) {
    iVar1 = 0;
    if (unaff_x28 != 0x8000000000000001) {
      iVar1 = unaff_w22;
    }
  }
  else {
    FUN_100e1cf5c(&stack0x00000178);
    iVar1 = 0;
    if (unaff_x28 != 0x8000000000000001) {
      iVar1 = unaff_w22;
    }
  }
  if ((iVar1 == 1) && ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  iVar1 = 0;
  if (unaff_x26 != 0x8000000000000001) {
    iVar1 = unaff_w23;
  }
  if ((iVar1 == 1) && ((unaff_x26 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000040);
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  return;
}

