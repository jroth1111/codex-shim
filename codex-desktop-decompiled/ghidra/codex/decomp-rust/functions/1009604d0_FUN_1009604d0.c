
void FUN_1009604d0(void)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x25;
  undefined1 *unaff_x28;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  ulong in_stack_00000140;
  short in_stack_00000170;
  long in_stack_00004c50;
  long in_stack_00004c58;
  long in_stack_00004c60;
  long in_stack_00004c68;
  long in_stack_00004c70;
  long in_stack_00004c78;
  long in_stack_00004c80;
  long in_stack_00004c88;
  long in_stack_00004c90;
  long in_stack_00004c98;
  long in_stack_00004ca0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00004c90,s___108add0c1,&stack0x00004da0);
  uVar1 = in_stack_00000140;
  if (-1 < (long)in_stack_00000140) {
    uVar1 = 4;
  }
  lVar5 = -0x7f58;
  if (((1L << (uVar1 & 0x3f) & 0xeceecU) != 0) ||
     (((1L << (uVar1 & 0x3f) & 0x13103U) == 0 && (in_stack_00000170 != 0x194)))) {
    lVar5 = -0x7f5b;
  }
  FUN_101960064(&stack0x00000140);
  if (in_stack_00004c90 == -0x8000000000000000) {
    if (*(long *)(unaff_x20 + 0x26d8) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x26e0));
    }
    if (*(long *)(unaff_x20 + 0x2638) != -0x7ffffffffffffffd) {
      FUN_100e0609c(unaff_x20 + 0x2638);
    }
    FUN_100de93d0(unaff_x20 + 0xf0);
    if (*(long *)(unaff_x20 + 0xd8) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0xe0));
    }
    if (*(long *)(unaff_x20 + 0xc0) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 200));
    }
    if (*(long *)(unaff_x20 + 0xa8) != 0) {
      in_stack_00004c90 = -0x8000000000000000;
LAB_100960654:
      _free(*(undefined8 *)(unaff_x20 + 0xb0));
      goto LAB_10096065c;
    }
    *unaff_x28 = 1;
    in_stack_00004c90 = -0x8000000000000000;
  }
  else {
    if (*(long *)(unaff_x20 + 0x26d8) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x26e0));
    }
    if (*(long *)(unaff_x20 + 0x2638) != -0x7ffffffffffffffd) {
      FUN_100e0609c(unaff_x20 + 0x2638);
    }
    FUN_100de93d0(unaff_x20 + 0xf0);
    if (*(long *)(unaff_x20 + 0xd8) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0xe0));
    }
    if (*(long *)(unaff_x20 + 0xc0) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 200));
    }
    if (*(long *)(unaff_x20 + 0xa8) != 0) goto LAB_100960654;
LAB_10096065c:
    *unaff_x28 = 1;
    if (in_stack_00004c90 == -0x7fffffffffffffff) {
      *in_stack_00000078 = unaff_x25 + 0x6c;
      uVar2 = 3;
      goto LAB_10096071c;
    }
  }
  FUN_100d3a924(in_stack_00000070);
  if (in_stack_00004c90 == -0x8000000000000000) {
    lVar3 = unaff_x25 + 0x1f;
    lVar4 = -0x7ffffffffffffffb;
    in_stack_00004c90 = in_stack_00004c98;
  }
  else {
    lVar3 = unaff_x25 + 0x6b;
    lVar4 = in_stack_00004ca0;
    in_stack_00004ca0 = in_stack_00004c98;
    in_stack_00000100 = in_stack_00004c50;
    in_stack_00000108 = in_stack_00004c58;
    in_stack_00000110 = in_stack_00004c60;
    in_stack_00000118 = in_stack_00004c68;
    in_stack_00000120 = in_stack_00004c70;
    in_stack_00000128 = in_stack_00004c78;
    in_stack_00000130 = in_stack_00004c80;
    in_stack_00000138 = in_stack_00004c88;
  }
  in_stack_00000078[6] = in_stack_00000108;
  in_stack_00000078[5] = in_stack_00000100;
  in_stack_00000078[8] = in_stack_00000118;
  in_stack_00000078[7] = in_stack_00000110;
  in_stack_00000078[10] = in_stack_00000128;
  in_stack_00000078[9] = in_stack_00000120;
  *in_stack_00000078 = lVar3;
  in_stack_00000078[1] = in_stack_00004c90;
  in_stack_00000078[2] = in_stack_00004ca0;
  in_stack_00000078[3] = lVar4;
  in_stack_00000078[4] = -0x7ffffffffffffffb;
  in_stack_00000078[0xc] = in_stack_00000138;
  in_stack_00000078[0xb] = in_stack_00000130;
  uVar2 = 1;
  in_stack_00000078[0xd] = lVar5;
LAB_10096071c:
  unaff_x28[0xf90] = uVar2;
  return;
}

