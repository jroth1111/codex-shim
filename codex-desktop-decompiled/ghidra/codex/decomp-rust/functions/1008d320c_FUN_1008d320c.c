
void FUN_1008d320c(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long unaff_x19;
  long *unaff_x21;
  long lVar4;
  ulong uVar5;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s__failed_to_start_realtime_conver_108ac0640,unaff_x29 + -0x68);
  lVar1 = *(long *)(unaff_x29 + -0x80);
  uVar5 = *(ulong *)(unaff_x29 + -0x78);
  lVar4 = *(long *)(unaff_x29 + -0x70);
  FUN_100df5738(&stack0x000001e0);
  if (lVar1 == -0x8000000000000000) {
    if (uVar5 != 0) {
      _free(lVar4);
    }
    lVar1 = **(long **)(unaff_x19 + 0x170);
    **(long **)(unaff_x19 + 0x170) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x170);
    }
    if (*(long *)(unaff_x19 + 0x100) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x108));
    }
    uVar5 = 1;
    *(undefined4 *)(unaff_x19 + 0x168) = 1;
    lVar1 = -0x8000000000000000;
  }
  else {
    lVar2 = **(long **)(unaff_x19 + 0x170);
    **(long **)(unaff_x19 + 0x170) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x170);
    }
    in_stack_00000008 = -0x7f5b;
    unaff_x28 = -0x7ffffffffffffffb;
    if (*(long *)(unaff_x19 + 0x100) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x108));
    }
    if (((((*(byte *)(unaff_x19 + 0x16b) & 1) != 0) &&
         (lVar2 = *(long *)(unaff_x19 + 0x130), lVar2 != -0x7fffffffffffffff)) &&
        (lVar2 != -0x8000000000000000)) && (lVar2 != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x138));
    }
    if ((((*(byte *)(unaff_x19 + 0x16a) & 1) != 0) &&
        (*(long *)(unaff_x19 + 0x118) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x118) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x120));
    }
    if ((((*(byte *)(unaff_x19 + 0x169) & 1) != 0) &&
        (-0x7fffffffffffffff < *(long *)(unaff_x19 + 0x148))) && (*(long *)(unaff_x19 + 0x148) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x150));
    }
    *(undefined4 *)(unaff_x19 + 0x168) = 1;
    if (lVar1 == -0x7fffffffffffffff) {
      *unaff_x21 = -0x7fffffffffffff8f;
      uVar3 = 3;
      goto LAB_1008d33f8;
    }
  }
  FUN_100d52d38();
  if (lVar1 == -0x8000000000000000) {
    in_stack_00000008 = 0x35;
    lVar2 = 0x35;
    if ((uVar5 & 1) == 0) {
      lVar2 = 0x6a;
    }
    lVar2 = lVar2 + -0x7ffffffffffffffb;
  }
  else {
    in_stack_00000098 = in_stack_000001a8;
    in_stack_00000090 = in_stack_000001a0;
    in_stack_000000a8 = in_stack_000001b8;
    in_stack_000000a0 = in_stack_000001b0;
    in_stack_000000b8 = in_stack_000001c8;
    in_stack_000000b0 = in_stack_000001c0;
    in_stack_000000c8 = in_stack_000001d8;
    in_stack_000000c0 = in_stack_000001d0;
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
  unaff_x21[2] = uVar5;
  unaff_x21[3] = lVar4;
  unaff_x21[4] = unaff_x28;
  unaff_x21[0xc] = in_stack_000000c8;
  unaff_x21[0xb] = in_stack_000000c0;
  uVar3 = 1;
  unaff_x21[0xd] = in_stack_00000008;
LAB_1008d33f8:
  *(undefined1 *)(unaff_x19 + 0x1c70) = uVar3;
  return;
}

