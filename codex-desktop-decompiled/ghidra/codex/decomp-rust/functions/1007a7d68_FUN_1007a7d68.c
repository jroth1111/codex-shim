
void FUN_1007a7d68(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x23;
  undefined8 *unaff_x25;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x25 = 0x8000000000000000;
  unaff_x25[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000058._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

