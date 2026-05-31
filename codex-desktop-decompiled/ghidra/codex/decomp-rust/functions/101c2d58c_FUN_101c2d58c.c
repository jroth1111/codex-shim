
/* WARNING: Removing unreachable block (ram,0x000101c2d50c) */

void FUN_101c2d58c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  uint unaff_w25;
  ulong unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  long in_stack_00000068;
  char in_stack_00000070;
  
  uVar3 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *in_stack_00000020 = 0x11;
  in_stack_00000020[1] = uVar3;
  if (unaff_x27 != 0) {
    _free();
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if (in_stack_00000068 != -0x8000000000000000) {
    lVar4 = unaff_x22 + 1;
    lVar2 = in_stack_00000048;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      func_0x00010203527c(lVar2);
      lVar2 = lVar2 + 0x48;
    }
    if (in_stack_00000068 != 0) {
      _free(in_stack_00000048);
    }
  }
  if (((unaff_x26 & 0x7fffffffffffffff) != 0) && ((unaff_x23 & 1) != 0)) {
    _free(in_stack_00000030);
  }
  uVar1 = 0;
  if (unaff_x21 != 0x8000000000000001) {
    uVar1 = unaff_w25;
  }
  if (((uVar1 & 1) != 0) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_102033488(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  return;
}

