
void FUN_100950c44(void)

{
  byte bVar1;
  undefined1 uVar2;
  long unaff_x19;
  long *unaff_x21;
  long lVar3;
  undefined1 *unaff_x23;
  long unaff_x24;
  long lVar4;
  long lVar5;
  undefined8 unaff_x27;
  long lVar6;
  long lVar7;
  long unaff_x29;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack0000000000000090;
  long lStack0000000000000098;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  long in_stack_000001f8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xf0,s_invalid_deltaBase64__108ac9bea,unaff_x29 + -0x70);
  lVar5 = *(long *)(unaff_x29 + -0xf0);
  lVar3 = *(long *)(unaff_x29 + -0xe8);
  lVar4 = *(long *)(unaff_x29 + -0xe0);
  lStack0000000000000098 = *(long *)(unaff_x29 + -0x98);
  lStack0000000000000090 = *(long *)(unaff_x29 + -0xa0);
  if (lVar5 == -0x8000000000000000) {
    *(undefined1 *)(unaff_x19 + 0x289) = 0;
    *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0xe8);
    *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0xe0);
    *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 0xf0);
    *(long *)(unaff_x19 + 0x130) = lVar3;
    *(long *)(unaff_x19 + 0x138) = lVar4;
    *(undefined8 *)(unaff_x19 + 0x140) = 0x8000000000000005;
    *(undefined1 *)(unaff_x19 + 0x148) = *(undefined1 *)(unaff_x19 + 0x110);
    *(undefined8 *)(unaff_x19 + 0x150) = unaff_x27;
    *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0xd8);
    *(undefined1 *)(unaff_x19 + 400) = 0;
    FUN_10094aa48(unaff_x29 + -0xf0,unaff_x19 + 0x118);
    lVar5 = *(long *)(unaff_x29 + -0xf0);
    if (lVar5 != -0x7fffffffffffffff) {
      lVar3 = *(long *)(unaff_x29 + -0xe8);
      lVar4 = *(long *)(unaff_x29 + -0xe0);
      lVar7 = *(long *)(unaff_x29 + -0xd8);
      lVar10 = *(long *)(unaff_x29 + -200);
      lVar8 = *(long *)(unaff_x29 + -0xd0);
      lVar13 = *(long *)(unaff_x29 + -0xb8);
      lVar12 = *(long *)(unaff_x29 + -0xc0);
      lVar11 = *(long *)(unaff_x29 + -0xa8);
      lVar9 = *(long *)(unaff_x29 + -0xb0);
      lStack0000000000000098 = *(long *)(unaff_x29 + -0x98);
      lStack0000000000000090 = *(long *)(unaff_x29 + -0xa0);
      lVar6 = *(long *)(unaff_x29 + -0x90);
      FUN_100d32c6c(unaff_x19 + 0x118);
      if (lVar5 != -0x8000000000000000) {
        bVar1 = *(byte *)(unaff_x19 + 0x289);
        in_stack_000001c0 = lVar8;
        in_stack_000001c8 = lVar10;
        in_stack_000001e0 = lVar9;
        in_stack_000001e8 = lVar11;
        in_stack_000001d0 = lVar12;
        in_stack_000001d8 = lVar13;
        goto joined_r0x000100950de4;
      }
      *(undefined2 *)(unaff_x19 + 0x289) = 0;
      lStack0000000000000090 = in_stack_000001f0;
      lStack0000000000000098 = in_stack_000001f8;
      if ((*(ulong *)(unaff_x19 + 0xc0) & 0x7fffffffffffffff) != 0) {
        lVar5 = -0x8000000000000000;
        goto LAB_100950e38;
      }
      *unaff_x23 = 1;
      lVar5 = -0x8000000000000000;
      goto LAB_100950e74;
    }
    *unaff_x23 = 3;
  }
  else {
    lVar6 = -0x7f5a;
    lVar7 = -0x7ffffffffffffffb;
    bVar1 = *(byte *)(unaff_x19 + 0x289);
    in_stack_000001c0 = *(long *)(unaff_x29 + -0xd0);
    in_stack_000001c8 = *(long *)(unaff_x29 + -200);
    in_stack_000001e0 = *(long *)(unaff_x29 + -0xb0);
    in_stack_000001e8 = *(long *)(unaff_x29 + -0xa8);
    in_stack_000001d0 = *(long *)(unaff_x29 + -0xc0);
    in_stack_000001d8 = *(long *)(unaff_x29 + -0xb8);
joined_r0x000100950de4:
    if (((bVar1 & 1) != 0) && (*(long *)(unaff_x19 + 0xe0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0xe8));
    }
    if (((*(long *)(unaff_x19 + 0xf8) != -0x8000000000000000) &&
        ((*(byte *)(unaff_x19 + 0x28a) & 1) != 0)) && (*(long *)(unaff_x19 + 0xf8) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x100));
    }
    *(undefined2 *)(unaff_x19 + 0x289) = 0;
    if ((*(ulong *)(unaff_x19 + 0xc0) & 0x7fffffffffffffff) != 0) {
LAB_100950e38:
      _free(*(undefined8 *)(unaff_x19 + 200));
    }
    *unaff_x23 = 1;
    if (lVar5 != -0x7fffffffffffffff) {
LAB_100950e74:
      FUN_100d2fd08();
      if (lVar5 == -0x8000000000000000) {
        lVar8 = unaff_x24 + 0x58;
      }
      else {
        in_stack_000000e8 = in_stack_000001c8;
        in_stack_000000e0 = in_stack_000001c0;
        in_stack_000000f8 = in_stack_000001d8;
        in_stack_000000f0 = in_stack_000001d0;
        in_stack_00000108 = in_stack_000001e8;
        in_stack_00000100 = in_stack_000001e0;
        in_stack_00000118 = lStack0000000000000098;
        in_stack_00000110 = lStack0000000000000090;
        lVar8 = unaff_x24 + 0x6b;
      }
      unaff_x21[6] = in_stack_000000e8;
      unaff_x21[5] = in_stack_000000e0;
      unaff_x21[8] = in_stack_000000f8;
      unaff_x21[7] = in_stack_000000f0;
      unaff_x21[10] = in_stack_00000108;
      unaff_x21[9] = in_stack_00000100;
      *unaff_x21 = lVar8;
      unaff_x21[1] = lVar5;
      unaff_x21[2] = lVar3;
      unaff_x21[3] = lVar4;
      unaff_x21[4] = lVar7;
      unaff_x21[0xc] = in_stack_00000118;
      unaff_x21[0xb] = in_stack_00000110;
      uVar2 = 1;
      unaff_x21[0xd] = lVar6;
      goto LAB_100950ee0;
    }
  }
  *unaff_x21 = unaff_x24 + 0x6c;
  uVar2 = 3;
LAB_100950ee0:
  *(undefined1 *)(unaff_x19 + 0x290) = uVar2;
  return;
}

