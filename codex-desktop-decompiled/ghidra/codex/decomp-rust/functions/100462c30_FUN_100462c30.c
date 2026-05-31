
void FUN_100462c30(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa0);
  *unaff_x19 = 0x800000000000006e;
  unaff_x19[1] = uVar1;
  if ((unaff_x23 & 1) != 0) {
    if (unaff_x24 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x29 + -200);
      *(undefined8 *)(unaff_x29 + -0x98) = 0;
      *(long *)(unaff_x29 + -0x90) = unaff_x24;
      *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0xd0);
      *(undefined8 *)(unaff_x29 + -0x78) = 0;
      *(long *)(unaff_x29 + -0x70) = unaff_x24;
      *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0xd0);
    }
    uVar3 = (ulong)(unaff_x24 != 0);
    *(ulong *)(unaff_x29 + -0xa0) = uVar3;
    *(ulong *)(unaff_x29 + -0x80) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x60) = uVar1;
    while( true ) {
      FUN_100f3a554(unaff_x29 + -0xc0,unaff_x29 + -0xa0);
      if (*(long *)(unaff_x29 + -0xc0) == 0) break;
      lVar2 = *(long *)(unaff_x29 + -0xc0) + *(long *)(unaff_x29 + -0xb0) * 0x18;
      if (*(long *)(lVar2 + 8) != 0) {
        _free(*(undefined8 *)(lVar2 + 0x10));
      }
    }
  }
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

