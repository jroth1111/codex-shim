
/* WARNING: Removing unreachable block (ram,0x00010129f3b8) */
/* WARNING: Removing unreachable block (ram,0x00010129f3c4) */

void FUN_10129ee70(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x22;
  long lVar3;
  undefined8 unaff_x24;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000068;
  long in_stack_00000078;
  ulong in_stack_00000080;
  char in_stack_00000090;
  long in_stack_00000178;
  long in_stack_00000180;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *unaff_x19 = 2;
  unaff_x19[1] = uVar1;
  if ((in_stack_00000078 != 2) && (in_stack_00000078 != 0)) {
    if (unaff_x22 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x98) = 0;
      *(long *)(unaff_x29 + -0x90) = unaff_x22;
      *(undefined8 *)(unaff_x29 + -0x88) = in_stack_000001a0;
      *(undefined8 *)(unaff_x29 + -0x78) = 0;
      *(long *)(unaff_x29 + -0x70) = unaff_x22;
      *(undefined8 *)(unaff_x29 + -0x68) = in_stack_000001a0;
      uVar1 = in_stack_000001a8;
    }
    uVar2 = (ulong)(unaff_x22 != 0);
    *(ulong *)(unaff_x29 + -0xa0) = uVar2;
    *(ulong *)(unaff_x29 + -0x80) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x60) = uVar1;
    while( true ) {
      FUN_100f3a3c8(unaff_x29 + -0xc0,unaff_x29 + -0xa0);
      if (*(long *)(unaff_x29 + -0xc0) == 0) break;
      lVar3 = *(long *)(unaff_x29 + -0xc0) + *(long *)(unaff_x29 + -0xb0) * 0x18;
      if (*(long *)(lVar3 + 8) != 0) {
        _free(*(undefined8 *)(lVar3 + 0x10));
      }
      if (*(long *)(lVar3 + 0x110) != 0) {
        _free(*(undefined8 *)(lVar3 + 0x118));
      }
    }
  }
  lVar3 = in_stack_00000178;
  if ((unaff_x27 != -0x7fffffffffffffff) && (unaff_x27 != -0x8000000000000000)) {
    if (in_stack_00000180 != 0) {
      puVar5 = (undefined8 *)(in_stack_00000178 + 8);
      lVar4 = in_stack_00000180;
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (unaff_x27 != 0) {
      _free(lVar3);
    }
  }
  if ((in_stack_00000080 != 0x8000000000000001) && ((in_stack_00000080 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000018);
  }
  if ((unaff_x28 != 0x8000000000000001) && ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  if ((in_stack_00000068._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(unaff_x24);
  }
  return;
}

