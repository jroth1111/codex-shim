
/* WARNING: Removing unreachable block (ram,0x00010178f474) */
/* WARNING: Removing unreachable block (ram,0x00010178f478) */

void FUN_10178a240(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  long unaff_x26;
  ulong *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000030;
  char in_stack_00000140;
  
  uVar2 = FUN_108880790(s_missing_field_____108ac28f7,&stack0x000000b0);
  *unaff_x28 = 0x11;
  unaff_x28[1] = uVar2;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
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
          goto LAB_10178b680;
        }
      }
      else if (uVar3 != 0) {
        lVar4 = 8;
LAB_10178b680:
        _free(*(undefined8 *)((long)unaff_x27 + lVar4));
      }
      unaff_x27 = unaff_x27 + 4;
    }
    if (unaff_x25 != 0) {
      _free();
    }
  }
  iVar1 = 0;
  if (unaff_x23 != 0x8000000000000001) {
    iVar1 = unaff_w21;
  }
  if ((iVar1 == 1) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000030);
  }
  FUN_1017a1d58(unaff_x26 + 0x20);
  if (in_stack_00000140 != '\x16') {
    func_0x0001017a6a48(&stack0x00000140);
  }
  return;
}

