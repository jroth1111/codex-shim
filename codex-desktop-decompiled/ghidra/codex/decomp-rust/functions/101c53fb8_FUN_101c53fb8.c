
void FUN_101c53fb8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long unaff_x23;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000020;
  uint in_stack_00000030;
  char in_stack_00000040;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x88);
  *in_stack_00000010 = 0x8000000000000000;
  in_stack_00000010[1] = uVar1;
  if (unaff_x28 != -0x8000000000000000) {
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
  }
  FUN_102033488(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_1020378e0(&stack0x00000040);
  }
  if ((in_stack_00000030 & 0x1e) != 0x14) {
    FUN_1020378e0(in_stack_00000020);
  }
  return;
}

