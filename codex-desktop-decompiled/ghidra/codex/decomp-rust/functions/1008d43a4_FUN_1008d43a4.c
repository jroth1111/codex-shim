
void FUN_1008d43a4(void)

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
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x80,s__failed_to_append_realtime_conve_108aca798,unaff_x29 + -0x68);
  lVar1 = *(long *)(unaff_x29 + -0x80);
  uVar5 = *(ulong *)(unaff_x29 + -0x78);
  lVar4 = *(long *)(unaff_x29 + -0x70);
  FUN_100df5738(&stack0x000001d8);
  if (lVar1 == -0x8000000000000000) {
    if (uVar5 != 0) {
      _free(lVar4);
    }
    lVar1 = **(long **)(unaff_x19 + 200);
    **(long **)(unaff_x19 + 200) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x98));
    }
    uVar5 = 1;
    *(undefined2 *)(unaff_x19 + 0xc0) = 1;
    lVar1 = -0x8000000000000000;
  }
  else {
    lVar2 = **(long **)(unaff_x19 + 200);
    **(long **)(unaff_x19 + 200) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    in_stack_00000008 = -0x7f5b;
    unaff_x28 = -0x7ffffffffffffffb;
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x98));
    }
    if ((*(char *)(unaff_x19 + 0xc1) == '\x01') && (*(long *)(unaff_x19 + 0xa8) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0xb0));
    }
    *(undefined2 *)(unaff_x19 + 0xc0) = 1;
    if (lVar1 == -0x7fffffffffffffff) {
      *unaff_x21 = -0x7fffffffffffff8f;
      uVar3 = 3;
      goto LAB_1008d4530;
    }
  }
  FUN_100d61ca8();
  if (lVar1 == -0x8000000000000000) {
    in_stack_00000008 = 0x37;
    lVar2 = 0x37;
    if ((uVar5 & 1) == 0) {
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
  unaff_x21[2] = uVar5;
  unaff_x21[3] = lVar4;
  unaff_x21[4] = unaff_x28;
  unaff_x21[0xc] = in_stack_000000c8;
  unaff_x21[0xb] = in_stack_000000c0;
  uVar3 = 1;
  unaff_x21[0xd] = in_stack_00000008;
LAB_1008d4530:
  *(undefined1 *)(unaff_x19 + 0x1bc8) = uVar3;
  return;
}

