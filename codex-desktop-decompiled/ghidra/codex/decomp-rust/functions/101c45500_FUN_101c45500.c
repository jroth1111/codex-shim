
void FUN_101c45500(void)

{
  undefined8 uVar1;
  long in_x10;
  undefined8 *puVar2;
  long unaff_x20;
  ulong unaff_x23;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000028;
  long in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000010 = 0x12;
  in_stack_00000010[1] = uVar1;
  if (unaff_x28 != 0) {
    puVar2 = (undefined8 *)(unaff_x26 + 8);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      unaff_x28 = unaff_x28 + -1;
    } while (unaff_x28 != 0);
  }
  if (in_x10 != 0) {
    _free();
  }
  if (in_stack_00000048 != -0x8000000000000000) {
    if (unaff_x27 != 0) {
      puVar2 = (undefined8 *)(unaff_x20 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x27 = unaff_x27 + -1;
      } while (unaff_x27 != 0);
    }
    if (in_stack_00000048 != 0) {
      _free();
    }
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

