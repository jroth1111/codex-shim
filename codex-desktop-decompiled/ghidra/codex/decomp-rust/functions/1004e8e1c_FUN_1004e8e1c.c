
void FUN_1004e8e1c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000048;
  undefined8 in_stack_00000148;
  long in_stack_00000158;
  undefined8 in_stack_00000160;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000050);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if ((unaff_x22 != unaff_x25) && (unaff_x22 != -0x7fffffffffffffff)) {
    if ((unaff_x22 != -0x8000000000000000) && (unaff_x22 != 0)) {
      _free(in_stack_00000148);
    }
    if ((in_stack_00000158 != -0x8000000000000000) && (in_stack_00000158 != 0)) {
      _free(in_stack_00000160);
    }
  }
  if (1 < (unaff_x23 + in_stack_00000048) - 0xbU) {
    FUN_100de6690(&stack0x000000f8);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if ((unaff_x24 != 0x8000000000000001) && ((unaff_x24 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  return;
}

