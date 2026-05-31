
void FUN_100456aa8(void)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong unaff_x22;
  long unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  char in_stack_00000030;
  
  uVar3 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa0);
  *in_stack_00000008 = 0x11;
  in_stack_00000008[1] = uVar3;
  if (unaff_x25 == 0) {
    if (in_stack_00000028 == 0) goto LAB_100456ae4;
    puVar7 = *(ulong **)(unaff_x29 + -0xb8);
  }
  else {
    puVar7 = *(ulong **)(unaff_x29 + -0xb8);
    puVar1 = puVar7;
    for (lVar2 = *(long *)(unaff_x29 + -0xb0); lVar2 != 0; lVar2 = lVar2 + -1) {
      uVar4 = *puVar1;
      uVar6 = uVar4 ^ 0x8000000000000000;
      if (-1 < (long)uVar4) {
        uVar6 = 1;
      }
      if ((uVar6 == 0) || (uVar6 != 1)) {
        if (puVar1[1] != 0) {
          lVar5 = 0x10;
          goto LAB_1004566f4;
        }
      }
      else if (uVar4 != 0) {
        lVar5 = 8;
LAB_1004566f4:
        _free(*(undefined8 *)((long)puVar1 + lVar5));
      }
      puVar1 = puVar1 + 4;
    }
    if (in_stack_00000028 == 0) goto LAB_100456ae4;
  }
  _free(puVar7);
LAB_100456ae4:
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

