
void FUN_101c35f20(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x28 = 0x12;
  unaff_x28[1] = uVar1;
  if (unaff_x22 != -0x8000000000000000) {
    if (unaff_x25 != 0) {
      puVar2 = (undefined8 *)(unaff_x21 + 0x20);
      do {
        if (puVar2[-4] != 0) {
          _free(puVar2[-3]);
        }
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 6;
        unaff_x25 = unaff_x25 + -1;
      } while (unaff_x25 != 0);
    }
    if (unaff_x22 != 0) {
      _free();
    }
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_102033488(unaff_x24 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  return;
}

