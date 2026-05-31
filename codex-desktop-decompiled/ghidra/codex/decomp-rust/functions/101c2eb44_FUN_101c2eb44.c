
void FUN_101c2eb44(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  long in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *unaff_x19 = 0x8000000000000003;
  unaff_x19[1] = uVar1;
  if (in_stack_00000048 != -0x8000000000000000) {
    if (unaff_x26 != 0) {
      puVar2 = (undefined8 *)(unaff_x20 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x26 = unaff_x26 + -1;
      } while (unaff_x26 != 0);
    }
    if (in_stack_00000048 != 0) {
      _free();
    }
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

