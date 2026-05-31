
void FUN_101c29f30(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  char in_stack_00000070;
  
  uVar2 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if ((in_stack_00000068 != 0x8000000000000001) && ((in_stack_00000068 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000018);
  }
  if ((in_stack_00000050 != -0x7fffffffffffffff) && (in_stack_00000050 != -0x8000000000000000)) {
    lVar1 = *(long *)(unaff_x29 + -0xd8);
    lVar4 = *(long *)(unaff_x29 + -0xd0);
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 0x10);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (in_stack_00000050 != 0) {
      _free(lVar1);
    }
  }
  if (unaff_x24 != -0x8000000000000000) {
    if (unaff_x20 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000048 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        unaff_x20 = unaff_x20 + -1;
      } while (unaff_x20 != 0);
    }
    if (unaff_x24 != 0) {
      _free(in_stack_00000048);
    }
  }
  if ((in_stack_00000060 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_102033488(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  return;
}

