
void FUN_1008d29e4(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *unaff_x26;
  long unaff_x28;
  long unaff_x29;
  ulong in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s__failed_to_stop_realtime_convers_108aca6e7,unaff_x29 + -0x68);
  lVar1 = *(long *)(unaff_x29 + -0x80);
  uVar6 = *(ulong *)(unaff_x29 + -0x78);
  uVar4 = *(ulong *)(unaff_x29 + -0x70);
  FUN_100df5738(&stack0x000001d8);
  if (lVar1 == -0x8000000000000000) {
    if (uVar6 != 0) {
      _free(uVar4);
    }
    lVar1 = **(long **)(unaff_x19 + 0x80);
    **(long **)(unaff_x19 + 0x80) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    uVar6 = 1;
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      lVar1 = -0x8000000000000000;
      uVar5 = uVar4;
LAB_1008d2a74:
      _free(*(undefined8 *)(unaff_x19 + 0x68));
      goto LAB_1008d2a7c;
    }
    *unaff_x26 = 1;
    lVar1 = -0x8000000000000000;
  }
  else {
    uVar5 = uVar6 >> 8;
    lVar2 = **(long **)(unaff_x19 + 0x80);
    **(long **)(unaff_x19 + 0x80) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    in_stack_00000008 = -0x7f5b;
    unaff_x28 = -0x7ffffffffffffffb;
    in_stack_00000000 = uVar4;
    if (*(long *)(unaff_x19 + 0x60) != 0) goto LAB_1008d2a74;
LAB_1008d2a7c:
    *unaff_x26 = 1;
    if (lVar1 == -0x7fffffffffffffff) {
      *unaff_x21 = -0x7fffffffffffff8f;
      uVar3 = 3;
      goto LAB_1008d2b38;
    }
    uVar6 = uVar6 & 0xff | uVar5 << 8;
    uVar4 = in_stack_00000000;
  }
  FUN_100d50ae0();
  if (lVar1 == -0x8000000000000000) {
    in_stack_00000008 = 0x38;
    lVar2 = 0x38;
    if ((uVar6 & 1) == 0) {
      lVar2 = 0x6a;
    }
    lVar2 = lVar2 + -0x7ffffffffffffffb;
  }
  else {
    in_stack_00000098 = in_stack_00000198;
    in_stack_00000090 = in_stack_00000190;
    in_stack_000000a8 = in_stack_000001a8;
    in_stack_000000a0 = in_stack_000001a0;
    in_stack_000000b8 = in_stack_000001b8;
    in_stack_000000b0 = in_stack_000001b0;
    in_stack_000000c8 = in_stack_000001c8;
    in_stack_000000c0 = in_stack_000001c0;
    lVar2 = -0x7fffffffffffff90;
  }
  unaff_x21[6] = in_stack_00000098;
  unaff_x21[5] = in_stack_00000090;
  unaff_x21[8] = in_stack_000000a8;
  unaff_x21[7] = in_stack_000000a0;
  unaff_x21[10] = in_stack_000000b8;
  unaff_x21[9] = in_stack_000000b0;
  *unaff_x21 = lVar2;
  unaff_x21[1] = lVar1;
  unaff_x21[2] = uVar6;
  unaff_x21[3] = uVar4;
  unaff_x21[4] = unaff_x28;
  unaff_x21[0xc] = in_stack_000000c8;
  unaff_x21[0xb] = in_stack_000000c0;
  uVar3 = 1;
  unaff_x21[0xd] = in_stack_00000008;
LAB_1008d2b38:
  *(undefined1 *)(unaff_x19 + 0x1b80) = uVar3;
  return;
}

