
/* WARNING: Removing unreachable block (ram,0x000101c3fcb8) */

void FUN_101c3ff2c(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x21;
  long unaff_x25;
  long unaff_x26;
  long lVar5;
  long unaff_x28;
  long unaff_x29;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  char in_stack_00000050;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *in_stack_00000018 = 0x8000000000000006;
  in_stack_00000018[1] = uVar2;
  if (in_stack_00000030 != 0) {
    puVar3 = (undefined8 *)(unaff_x21 + 8);
    do {
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      in_stack_00000030 = in_stack_00000030 + -1;
    } while (in_stack_00000030 != 0);
  }
  if (unaff_x28 != 0) {
    _free();
  }
  if (unaff_x25 != 0) {
    _free(in_stack_00000020);
  }
  if ((unaff_x26 != -0x8000000000000000) && (unaff_x26 != 0)) {
    _free();
  }
  lVar5 = *(long *)(unaff_x29 + -0xb8);
  if ((lVar5 != -0x8000000000000000) && ((unaff_x19 & 1) != 0)) {
    lVar1 = *(long *)(unaff_x29 + -0xb0);
    lVar4 = *(long *)(unaff_x29 + -0xa8);
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar5 != 0) {
      _free(lVar1);
    }
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

