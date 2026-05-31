
void FUN_10090f178(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar5;
  undefined1 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
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
            (unaff_x29 + -0x80,s_failed_to_start_shell_command__108acb177,unaff_x29 + -0x68);
  lVar2 = *(long *)(unaff_x29 + -0x80);
  lVar1 = *(long *)(unaff_x29 + -0x78);
  lVar5 = *(long *)(unaff_x29 + -0x70);
  FUN_100df5738(&stack0x000001d8);
  if (lVar2 == -0x8000000000000000) {
    if (lVar1 != 0) {
      _free(lVar5);
    }
    lVar2 = **(long **)(unaff_x19 + 0xe0);
    **(long **)(unaff_x19 + 0xe0) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    *(undefined1 *)(unaff_x19 + 0xd9) = 0;
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xb0));
    }
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      lVar2 = -0x8000000000000000;
LAB_10090f294:
      _free(*(undefined8 *)(unaff_x19 + 0x98));
      goto LAB_10090f29c;
    }
    *unaff_x26 = 1;
    lVar2 = -0x8000000000000000;
  }
  else {
    lVar3 = **(long **)(unaff_x19 + 0xe0);
    **(long **)(unaff_x19 + 0xe0) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
    }
    unaff_x28 = -0x7f5b;
    unaff_x27 = -0x7ffffffffffffffb;
    if (((*(byte *)(unaff_x19 + 0xd9) & 1) != 0) && (*(long *)(unaff_x19 + 0xc0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 200));
    }
    *(undefined1 *)(unaff_x19 + 0xd9) = 0;
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xb0));
    }
    if (*(long *)(unaff_x19 + 0x90) != 0) goto LAB_10090f294;
LAB_10090f29c:
    *unaff_x26 = 1;
    if (lVar2 == -0x7fffffffffffffff) {
      *unaff_x21 = unaff_x20 + 0x6c;
      uVar4 = 3;
      goto LAB_10090f33c;
    }
  }
  FUN_100d5b7c0(in_stack_00000000);
  if (lVar2 == -0x8000000000000000) {
    lVar3 = unaff_x20 + 0xd;
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
    lVar3 = unaff_x20 + 0x6b;
  }
  unaff_x21[6] = in_stack_00000098;
  unaff_x21[5] = in_stack_00000090;
  unaff_x21[8] = in_stack_000000a8;
  unaff_x21[7] = in_stack_000000a0;
  unaff_x21[10] = in_stack_000000b8;
  unaff_x21[9] = in_stack_000000b0;
  *unaff_x21 = lVar3;
  unaff_x21[1] = lVar2;
  unaff_x21[2] = lVar1;
  unaff_x21[3] = lVar5;
  unaff_x21[4] = unaff_x27;
  unaff_x21[0xc] = in_stack_000000c8;
  unaff_x21[0xb] = in_stack_000000c0;
  uVar4 = 1;
  unaff_x21[0xd] = unaff_x28;
LAB_10090f33c:
  *(undefined1 *)(unaff_x19 + 0xe08) = uVar4;
  return;
}

