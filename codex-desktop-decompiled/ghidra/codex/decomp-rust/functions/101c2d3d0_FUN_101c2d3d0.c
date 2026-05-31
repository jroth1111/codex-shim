
/* WARNING: Removing unreachable block (ram,0x000101c2d504) */
/* WARNING: Removing unreachable block (ram,0x000101c2d50c) */

void FUN_101c2d3d0(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long lVar4;
  ulong unaff_x21;
  long unaff_x22;
  uint unaff_w25;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  long in_stack_00000068;
  char in_stack_00000070;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  if (in_stack_00000068 != -0x8000000000000000) {
    lVar4 = unaff_x22 + 1;
    lVar3 = in_stack_00000048;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      func_0x00010203527c(lVar3);
      lVar3 = lVar3 + 0x48;
    }
    if (in_stack_00000068 != 0) {
      _free(in_stack_00000048);
    }
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
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

