
void FUN_100acee7c(void)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  uint unaff_w27;
  long unaff_x28;
  undefined8 in_stack_00000060;
  char in_stack_00000080;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000100);
  *unaff_x24 = 0x800000000000000f;
  unaff_x24[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x28) && (unaff_x28 != 0)) {
    _free(in_stack_00000060);
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((unaff_w27 != 0x16) && ((unaff_w27 & 0x1e) != 0x14)) {
    FUN_100e077ec(&stack0x000000e0);
  }
  return;
}

