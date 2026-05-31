
void FUN_10126c52c(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar4;
  long unaff_x23;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000060;
  ulong in_stack_00000068;
  char in_stack_00000070;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *unaff_x21 = 0x8000000000000001;
  unaff_x21[1] = uVar1;
  if (((unaff_x22 != -0x7ffffffffffffffe) && (-0x7fffffffffffffff < unaff_x22)) && (unaff_x22 != 0))
  {
    _free(in_stack_00000018);
  }
  if ((unaff_x23 != -0x7fffffffffffffff) && (unaff_x23 != -0x8000000000000000)) {
    lVar4 = *(long *)(unaff_x29 + -0xf0);
    lVar2 = *(long *)(unaff_x29 + -0xe8);
    if (lVar2 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (unaff_x23 != 0) {
      _free(lVar4);
    }
  }
  if ((in_stack_00000068 & 1) != 0) {
    if (in_stack_00000040 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined8 *)(unaff_x29 + -0xa8) = 0;
      *(long *)(unaff_x29 + -0xa0) = in_stack_00000040;
      *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000138;
      *(undefined8 *)(unaff_x29 + -0x88) = 0;
      *(long *)(unaff_x29 + -0x80) = in_stack_00000040;
      *(undefined8 *)(unaff_x29 + -0x78) = in_stack_00000138;
      uVar1 = in_stack_00000140;
    }
    uVar3 = (ulong)(in_stack_00000040 != 0);
    *(ulong *)(unaff_x29 + -0xb0) = uVar3;
    *(ulong *)(unaff_x29 + -0x90) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar1;
    while( true ) {
      FUN_100f3aeb8(unaff_x29 + -0xd0,unaff_x29 + -0xb0);
      lVar4 = *(long *)(unaff_x29 + -0xd0);
      if (lVar4 == 0) break;
      lVar6 = *(long *)(unaff_x29 + -0xc0);
      lVar2 = lVar4 + lVar6 * 0x18;
      if (*(long *)(lVar2 + 8) != 0) {
        _free(*(undefined8 *)(lVar2 + 0x10));
      }
      FUN_100e28410(lVar4 + lVar6 * 0x88 + 0x110);
    }
  }
  if (((in_stack_00000060 != -0x7ffffffffffffffe) && (-0x7fffffffffffffff < in_stack_00000060)) &&
     (in_stack_00000060 != 0)) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

