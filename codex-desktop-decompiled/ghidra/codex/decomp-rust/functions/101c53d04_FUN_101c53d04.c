
void FUN_101c53d04(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  undefined8 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x27 = 0x8000000000000000;
  unaff_x27[1] = uVar1;
  if (unaff_x23 != 0) {
    puVar2 = (undefined8 *)(unaff_x21 + 8);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      unaff_x23 = unaff_x23 + -1;
    } while (unaff_x23 != 0);
  }
  if (unaff_x28 != 0) {
    _free();
  }
  FUN_102033488(unaff_x20 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((unaff_w24 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000020);
  }
  return;
}

