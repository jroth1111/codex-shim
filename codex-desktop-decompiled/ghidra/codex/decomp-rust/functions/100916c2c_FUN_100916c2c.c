
void FUN_100916c2c(void)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong extraout_x10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong uVar5;
  ulong uVar6;
  undefined1 *unaff_x25;
  long unaff_x26;
  ulong uVar7;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s_5failed_to_increment_out_of_band_108acb292,unaff_x29 + -0x68);
  uVar7 = *(ulong *)(unaff_x29 + -0x80);
  uVar1 = *(ulong *)(unaff_x29 + -0x78);
  uVar5 = *(ulong *)(unaff_x29 + -0x70);
  FUN_100df5738(&stack0x00000150);
  if (uVar7 == 0x8000000000000000) {
    uVar5 = (ulong)(uVar1 != 0);
    lVar2 = **(long **)(unaff_x19 + 0x60);
    **(long **)(unaff_x19 + 0x60) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      uVar6 = 0;
      uVar7 = 0x8000000000000000;
LAB_100916c94:
      _free(*(undefined8 *)(unaff_x19 + 0x48));
      goto LAB_100916c9c;
    }
    *unaff_x25 = 1;
    uVar7 = 0x8000000000000000;
  }
  else {
    lVar2 = **(long **)(unaff_x19 + 0x60);
    **(long **)(unaff_x19 + 0x60) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    unaff_x26 = -0x7f5b;
    unaff_x28 = -0x7ffffffffffffffb;
    uVar6 = uVar5 >> 8;
    if (*(long *)(unaff_x19 + 0x40) != 0) goto LAB_100916c94;
LAB_100916c9c:
    *unaff_x25 = 1;
    if (uVar7 == 0x8000000000000001) {
      *unaff_x21 = unaff_x20 + 0x6c;
      uVar3 = 3;
      goto LAB_100916d7c;
    }
    uVar5 = uVar5 & 0xff | uVar6 << 8;
  }
  FUN_100d6cf38(in_stack_00000008);
  if (uVar7 == 0x8000000000000000) {
    uVar4 = 0;
    lVar2 = unaff_x20 + 1;
    uVar6 = extraout_x10;
    uVar7 = uVar1;
  }
  else {
    uVar4 = uVar1 & 0xffffffffffffff00;
    in_stack_00000098 = in_stack_00000118;
    in_stack_00000090 = in_stack_00000110;
    in_stack_000000a8 = in_stack_00000128;
    in_stack_000000a0 = in_stack_00000120;
    in_stack_000000b8 = in_stack_00000138;
    in_stack_000000b0 = in_stack_00000130;
    in_stack_000000c8 = in_stack_00000148;
    in_stack_000000c0 = in_stack_00000140;
    lVar2 = unaff_x20 + 0x6b;
    uVar6 = uVar5;
    uVar5 = uVar1;
  }
  unaff_x21[6] = in_stack_00000098;
  unaff_x21[5] = in_stack_00000090;
  unaff_x21[8] = in_stack_000000a8;
  unaff_x21[7] = in_stack_000000a0;
  unaff_x21[10] = in_stack_000000b8;
  unaff_x21[9] = in_stack_000000b0;
  *unaff_x21 = lVar2;
  unaff_x21[1] = uVar7;
  unaff_x21[2] = uVar4 | uVar5 & 0xff;
  unaff_x21[3] = uVar6;
  unaff_x21[4] = unaff_x28;
  unaff_x21[0xc] = in_stack_000000c8;
  unaff_x21[0xb] = in_stack_000000c0;
  uVar3 = 1;
  unaff_x21[0xd] = unaff_x26;
LAB_100916d7c:
  *(undefined1 *)(unaff_x19 + 0x140) = uVar3;
  return;
}

