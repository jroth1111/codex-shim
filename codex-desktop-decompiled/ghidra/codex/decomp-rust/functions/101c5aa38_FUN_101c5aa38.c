
void FUN_101c5aa38(void)

{
  undefined8 uVar1;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000030;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x000001f8);
  *unaff_x27 = 2;
  unaff_x27[1] = uVar1;
  if (unaff_x24 != 2) {
    FUN_10203cab8(&stack0x00000158);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_102033488(unaff_x21 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((unaff_w22 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

