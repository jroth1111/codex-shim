
void FUN_101c3fc20(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x23;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x28;
  long lVar5;
  long unaff_x29;
  undefined8 in_stack_00000020;
  char in_stack_00000050;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x28 = 0x8000000000000006;
  unaff_x28[1] = uVar2;
  if ((unaff_x26 != -0x8000000000000000) && (unaff_x26 != 0)) {
    _free();
  }
  lVar5 = *(long *)(unaff_x29 + -0xb8);
  if (lVar5 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -0xb0);
    lVar3 = *(long *)(unaff_x29 + -0xa8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar5 != 0) {
      _free(lVar1);
    }
  }
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_102033488(unaff_x23 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

