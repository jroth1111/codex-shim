
void FUN_101c230c0(void)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined1 *unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  char in_stack_00000030;
  
  uVar3 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0xb0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar3;
  if (unaff_x26 != 2) {
    if (unaff_x27 == 0) {
      if (in_stack_00000028 == 0) goto LAB_101c235a8;
      puVar7 = *(ulong **)(unaff_x29 + -200);
    }
    else {
      puVar7 = *(ulong **)(unaff_x29 + -200);
      puVar1 = puVar7;
      for (lVar2 = *(long *)(unaff_x29 + -0xc0); lVar2 != 0; lVar2 = lVar2 + -1) {
        uVar4 = *puVar1;
        uVar6 = uVar4 ^ 0x8000000000000000;
        if (-1 < (long)uVar4) {
          uVar6 = 1;
        }
        if ((uVar6 == 0) || (uVar6 != 1)) {
          if (puVar1[1] != 0) {
            lVar5 = 0x10;
            goto LAB_101c230fc;
          }
        }
        else if (uVar4 != 0) {
          lVar5 = 8;
LAB_101c230fc:
          _free(*(undefined8 *)((long)puVar1 + lVar5));
        }
        puVar1 = puVar1 + 4;
      }
      unaff_x21 = &stack0x00000030;
      if (in_stack_00000028 == 0) goto LAB_101c235a8;
    }
    _free(puVar7);
  }
LAB_101c235a8:
  if ((unaff_x22 != 0x8000000000000001) && ((unaff_x22 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000018);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_102033488(unaff_x21 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  return;
}

