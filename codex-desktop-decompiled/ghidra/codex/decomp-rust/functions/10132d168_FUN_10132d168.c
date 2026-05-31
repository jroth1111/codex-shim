
void FUN_10132d168(void)

{
  ulong uVar1;
  ulong *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x27;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000170);
  *unaff_x19 = unaff_x21;
  unaff_x19[1] = uVar1;
  if ((in_stack_00000048 != unaff_x20) && (in_stack_00000048 != unaff_x20 + -1)) {
    FUN_100de6690(&stack0x00000120);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
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

