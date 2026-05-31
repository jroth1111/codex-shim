
void FUN_1008d21b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001e0,s__failed_to_inject_response_items_108aca7c8,&stack0x00000350);
  lVar2 = in_stack_000001e8;
  lVar4 = in_stack_000001e0;
  FUN_100df5738(&stack0x000004c0);
  if (lVar4 == -0x8000000000000000) {
    *(undefined1 *)(unaff_x20 + 0xa2) = 0;
    lVar4 = **(long **)(unaff_x20 + 0xa8);
    **(long **)(unaff_x20 + 0xa8) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    if (*(long *)(unaff_x20 + 0x70) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x78));
    }
    *(undefined2 *)(unaff_x20 + 0xa0) = 1;
    lVar4 = -0x8000000000000000;
  }
  else {
    *(undefined1 *)(unaff_x20 + 0xa2) = 0;
    lVar3 = **(long **)(unaff_x20 + 0xa8);
    **(long **)(unaff_x20 + 0xa8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
      lVar3 = *(long *)(unaff_x20 + 0x70);
    }
    else {
      lVar3 = *(long *)(unaff_x20 + 0x70);
    }
    if (lVar3 != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x78));
    }
    unaff_x19 = -0x7ffffffffffffffb;
    if (*(char *)(unaff_x20 + 0xa1) == '\x01') {
      lVar1 = *(long *)(unaff_x20 + 0x90);
      lVar3 = *(long *)(unaff_x20 + 0x98) + 1;
      lVar5 = lVar1;
      while (lVar3 = lVar3 + -1, lVar3 != 0) {
        FUN_100de6690(lVar5);
        lVar5 = lVar5 + 0x48;
      }
      if (*(long *)(unaff_x20 + 0x88) != 0) {
        _free(lVar1);
      }
    }
    *(undefined2 *)(unaff_x20 + 0xa0) = 1;
    unaff_x22 = -0x7ffffffffffffffb;
    if (lVar4 == -0x7fffffffffffffff) {
      *unaff_x21 = -0x7fffffffffffff8f;
      uVar6 = 3;
      goto LAB_1008d22a0;
    }
  }
  FUN_100d63e80(in_stack_00000010);
  if (lVar4 == -0x8000000000000000) {
    lVar3 = unaff_x22 + 0x16;
  }
  else {
    in_stack_000000a8 = in_stack_00000148;
    in_stack_000000a0 = in_stack_00000140;
    in_stack_000000b8 = in_stack_00000158;
    in_stack_000000b0 = in_stack_00000150;
    in_stack_000000c8 = in_stack_00000168;
    in_stack_000000c0 = in_stack_00000160;
    in_stack_000000d8 = in_stack_00000178;
    in_stack_000000d0 = in_stack_00000170;
    lVar3 = unaff_x22 + 0x6b;
  }
  unaff_x21[6] = in_stack_000000a8;
  unaff_x21[5] = in_stack_000000a0;
  unaff_x21[8] = in_stack_000000b8;
  unaff_x21[7] = in_stack_000000b0;
  unaff_x21[10] = in_stack_000000c8;
  unaff_x21[9] = in_stack_000000c0;
  *unaff_x21 = lVar3;
  unaff_x21[1] = lVar4;
  unaff_x21[2] = lVar2;
  unaff_x21[3] = in_stack_000001f0;
  unaff_x21[4] = unaff_x19;
  unaff_x21[0xc] = in_stack_000000d8;
  unaff_x21[0xb] = in_stack_000000d0;
  uVar6 = 1;
  unaff_x21[0xd] = -0x7f5b;
LAB_1008d22a0:
  *(undefined1 *)(in_stack_00000018 + 0x850) = uVar6;
  return;
}

