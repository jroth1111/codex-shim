
void FUN_1004e413c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  long unaff_x24;
  undefined8 in_stack_00000018;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000020);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if (1 < (unaff_x19 + unaff_x24) - 0xbU) {
    FUN_100de6690(&stack0x00000080);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  return;
}

