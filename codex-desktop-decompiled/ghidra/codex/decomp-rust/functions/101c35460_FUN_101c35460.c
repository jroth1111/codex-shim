
void FUN_101c35460(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong unaff_x24;
  ulong *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000038;
  ulong in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar1;
  if (in_stack_00000038 != -0x8000000000000000) {
    for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
      uVar2 = *unaff_x27;
      uVar4 = uVar2 ^ 0x8000000000000000;
      if (-1 < (long)uVar2) {
        uVar4 = 1;
      }
      if ((uVar4 == 0) || (uVar4 != 1)) {
        if (unaff_x27[1] != 0) {
          lVar3 = 0x10;
          goto LAB_101c34f30;
        }
      }
      else if (uVar2 != 0) {
        lVar3 = 8;
LAB_101c34f30:
        _free(*(undefined8 *)((long)unaff_x27 + lVar3));
      }
      unaff_x27 = unaff_x27 + 4;
    }
    if (in_stack_00000038 != 0) {
      _free();
    }
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if ((in_stack_00000048 != 0x8000000000000001) && ((in_stack_00000048 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000010);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

