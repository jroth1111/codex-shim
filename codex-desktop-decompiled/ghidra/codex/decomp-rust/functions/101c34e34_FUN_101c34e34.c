
/* WARNING: Removing unreachable block (ram,0x000101c35590) */
/* WARNING: Removing unreachable block (ram,0x000101c35594) */

void FUN_101c34e34(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  long unaff_x26;
  ulong *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000010;
  char in_stack_00000050;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000010);
  }
  if (unaff_x25 != -0x8000000000000000) {
    for (; unaff_x20 != 0; unaff_x20 = unaff_x20 + -1) {
      uVar3 = *unaff_x27;
      uVar5 = uVar3 ^ 0x8000000000000000;
      if (-1 < (long)uVar3) {
        uVar5 = 1;
      }
      if ((uVar5 == 0) || (uVar5 != 1)) {
        if (unaff_x27[1] != 0) {
          lVar4 = 0x10;
          goto LAB_101c34f30;
        }
      }
      else if (uVar3 != 0) {
        lVar4 = 8;
LAB_101c34f30:
        _free(*(undefined8 *)((long)unaff_x27 + lVar4));
      }
      unaff_x27 = unaff_x27 + 4;
    }
    if (unaff_x25 != 0) {
      _free();
    }
  }
  uVar1 = 0;
  if (unaff_x23 != 0x8000000000000001) {
    uVar1 = unaff_w21;
  }
  if (((uVar1 & 1) != 0) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000010);
  }
  FUN_102033488(unaff_x26 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  return;
}

