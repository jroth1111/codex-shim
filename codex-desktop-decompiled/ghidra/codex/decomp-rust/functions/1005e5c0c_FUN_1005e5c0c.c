
undefined8 FUN_1005e5c0c(void)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 uVar7;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_00002db0;
  undefined8 in_stack_00007b90;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00007b80,s_3failed_to_load_thread_history_f_108ac1fc9,&stack0x0000a310);
  uVar6 = *unaff_x20;
  *(undefined8 *)((long)unaff_x24 + 0xc) = unaff_x20[1];
  *(undefined8 *)((long)unaff_x24 + 4) = uVar6;
  *(undefined8 *)((long)unaff_x24 + 0x14) = in_stack_00007b90;
  uVar7 = unaff_x27[1];
  uVar6 = *unaff_x27;
  unaff_x24[0x17] = uVar7;
  unaff_x24[0x16] = uVar6;
  *(undefined8 *)(in_stack_000000a0 + 0x768) = uVar7;
  *(undefined8 *)(in_stack_000000a0 + 0x760) = uVar6;
  *(undefined8 *)(in_stack_000000a0 + 0x770) = in_stack_00002db0;
  *(undefined4 *)(in_stack_000000a0 + 0x778) = 0;
  uVar6 = *unaff_x24;
  *(undefined8 *)(in_stack_000000a0 + 0x784) = unaff_x24[1];
  *(undefined8 *)(in_stack_000000a0 + 0x77c) = uVar6;
  uVar6 = *(undefined8 *)((long)unaff_x24 + 0xc);
  *(undefined8 *)(in_stack_000000a0 + 0x790) = *(undefined8 *)((long)unaff_x24 + 0x14);
  *(undefined8 *)(in_stack_000000a0 + 0x788) = uVar6;
  *(undefined1 *)(in_stack_000000a0 + 0x798) = 0xd;
  *(long *)(in_stack_000000a0 + 0x950) = unaff_x19 + 0x10;
  *(undefined1 *)(in_stack_000000a0 + 0xb68) = 0;
  iVar3 = FUN_1005a4060(in_stack_000000a0 + 0x760,in_stack_00000098);
  if (iVar3 != 0) {
    *unaff_x25 = 0xb;
    uVar6 = 2;
    uVar4 = 0x16;
    goto LAB_1005eb358;
  }
  FUN_100d28c3c(in_stack_000000a0 + 0x760);
  bVar1 = *(byte *)(in_stack_000000a0 + 0x740);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
LAB_1005e7140:
      if (*(long *)(in_stack_000000a0 + 0x748) != 0) {
        _free(*(undefined8 *)(in_stack_000000a0 + 0x750));
      }
    }
  }
  else if ((bVar1 == 2) || (bVar1 != 3)) goto LAB_1005e7140;
  *(undefined1 *)(in_stack_000000a0 + 0x73f) = 0;
  lVar2 = **(long **)(in_stack_000000a0 + 0x4b8);
  **(long **)(in_stack_000000a0 + 0x4b8) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(in_stack_000000a0 + 0x4b8);
  }
  *(undefined1 *)(in_stack_000000a0 + 0x73e) = 0;
  *(undefined1 *)(in_stack_000000a0 + 0x73c) = 1;
  FUN_100e7ec78();
  uVar6 = 0;
  uVar5 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
  if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
    uVar5 = 7;
  }
  if (0x18 < uVar5 || (1L << (uVar5 & 0x3f) & 0x161ff1cU) == 0) {
    FUN_100def028(in_stack_000000a0 + 0x200);
  }
  if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
    FUN_100def028(in_stack_000000a0);
  }
  uVar4 = 1;
LAB_1005eb358:
  *(undefined1 *)(in_stack_000000a0 + 0x480) = uVar4;
  return uVar6;
}

