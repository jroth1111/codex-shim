
/* WARNING: Removing unreachable block (ram,0x00010129f3c4) */

void FUN_10129ef18(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int unaff_w20;
  int unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  long lVar4;
  undefined8 unaff_x24;
  long lVar5;
  undefined8 *puVar6;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  char in_stack_00000090;
  long in_stack_00000178;
  long in_stack_00000180;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  uVar2 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *in_stack_00000030 = 2;
  in_stack_00000030[1] = uVar2;
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  if (in_stack_00000088 != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000078 != 2) && (in_stack_00000078 != 0)) {
    if (in_stack_00000050 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x98) = 0;
      *(long *)(unaff_x29 + -0x90) = in_stack_00000050;
      *(undefined8 *)(unaff_x29 + -0x88) = in_stack_000001a0;
      *(undefined8 *)(unaff_x29 + -0x78) = 0;
      *(long *)(unaff_x29 + -0x70) = in_stack_00000050;
      *(undefined8 *)(unaff_x29 + -0x68) = in_stack_000001a0;
      uVar2 = in_stack_000001a8;
    }
    uVar3 = (ulong)(in_stack_00000050 != 0);
    *(ulong *)(unaff_x29 + -0xa0) = uVar3;
    *(ulong *)(unaff_x29 + -0x80) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x60) = uVar2;
    while( true ) {
      FUN_100f3a3c8(unaff_x29 + -0xc0,unaff_x29 + -0xa0);
      if (*(long *)(unaff_x29 + -0xc0) == 0) break;
      lVar4 = *(long *)(unaff_x29 + -0xc0) + *(long *)(unaff_x29 + -0xb0) * 0x18;
      if (*(long *)(lVar4 + 8) != 0) {
        _free(*(undefined8 *)(lVar4 + 0x10));
      }
      if (*(long *)(lVar4 + 0x110) != 0) {
        _free(*(undefined8 *)(lVar4 + 0x118));
      }
    }
  }
  lVar4 = in_stack_00000178;
  if ((in_stack_00000070 != -0x7fffffffffffffff) && (in_stack_00000070 != -0x8000000000000000)) {
    if (in_stack_00000180 != 0) {
      puVar6 = (undefined8 *)(in_stack_00000178 + 8);
      lVar5 = in_stack_00000180;
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (in_stack_00000070 != 0) {
      _free(lVar4);
    }
  }
  iVar1 = 0;
  if (in_stack_00000080 != 0x8000000000000001) {
    iVar1 = unaff_w20;
  }
  if ((iVar1 == 1) && ((in_stack_00000080 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000018);
    iVar1 = 0;
    if (unaff_x28 != 0x8000000000000001) {
      iVar1 = unaff_w21;
    }
  }
  else {
    iVar1 = 0;
    if (unaff_x28 != 0x8000000000000001) {
      iVar1 = unaff_w21;
    }
  }
  if ((iVar1 == 1) && ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
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

