
/* WARNING: Removing unreachable block (ram,0x00010047f53c) */
/* WARNING: Removing unreachable block (ram,0x00010047f540) */

void FUN_10047eee0(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  long unaff_x26;
  ulong *unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000018;
  char in_stack_00000060;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x11;
  unaff_x19[1] = uVar2;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
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
          goto LAB_10047ef20;
        }
      }
      else if (uVar3 != 0) {
        lVar4 = 8;
LAB_10047ef20:
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
    _free(in_stack_00000018);
  }
  FUN_100d34830(unaff_x26 + 0x20);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  return;
}

