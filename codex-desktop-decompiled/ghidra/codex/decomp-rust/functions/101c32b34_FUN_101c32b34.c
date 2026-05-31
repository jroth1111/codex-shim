
void FUN_101c32b34(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x12;
  unaff_x19[1] = uVar2;
  if (unaff_x22 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -0xa8);
    lVar4 = *(long *)(unaff_x29 + -0xa0);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (puVar5[-4] != 0) {
          _free(puVar5[-3]);
        }
        if (puVar5[2] + 0x7fffffffffffffff < 2 || (puVar5[2] & 0x7fffffffffffffff) == 0) {
          lVar3 = puVar5[-1];
        }
        else {
          _free(puVar5[3]);
          lVar3 = puVar5[-1];
        }
        if (lVar3 != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 9;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (unaff_x22 != 0) {
      _free(lVar1);
    }
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_102033488(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  return;
}

