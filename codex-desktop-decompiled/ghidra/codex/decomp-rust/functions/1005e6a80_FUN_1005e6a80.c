
undefined8 FUN_1005e6a80(void)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long unaff_x24;
  undefined1 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_00002db0;
  undefined8 in_stack_00007b90;
  undefined4 in_stack_0000cad0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00007b80,s_8failed_to_flush_thread_persiste_108ac1f8e,&stack0x0000a310);
  uVar8 = unaff_x20[1];
  uVar6 = *unaff_x20;
  uVar9 = unaff_x27[1];
  uVar7 = *unaff_x27;
  *(undefined8 *)(unaff_x24 + 0xb8) = uVar9;
  *(undefined8 *)(unaff_x24 + 0xb0) = uVar7;
  *(undefined8 *)(in_stack_000000a0 + 0x768) = uVar9;
  *(undefined8 *)(in_stack_000000a0 + 0x760) = uVar7;
  *(undefined8 *)(in_stack_000000a0 + 0x770) = in_stack_00002db0;
  *(undefined4 *)(in_stack_000000a0 + 0x778) = 0;
  *(ulong *)(in_stack_000000a0 + 0x784) = CONCAT44((int)uVar8,(int)((ulong)uVar6 >> 0x20));
  *(ulong *)(in_stack_000000a0 + 0x77c) = CONCAT44((int)uVar6,in_stack_0000cad0);
  *(undefined8 *)(in_stack_000000a0 + 0x790) = in_stack_00007b90;
  *(undefined8 *)(in_stack_000000a0 + 0x788) = uVar8;
  *(undefined1 *)(in_stack_000000a0 + 0x798) = 0xd;
  *(long *)(in_stack_000000a0 + 0x950) = unaff_x19 + 0x10;
  *(undefined1 *)(in_stack_000000a0 + 0xb68) = 0;
  iVar3 = FUN_1005a4060(in_stack_000000a0 + 0x760,in_stack_00000098);
  if (iVar3 != 0) {
    *unaff_x25 = 9;
    uVar6 = 2;
    uVar4 = 0x16;
    goto LAB_1005eb358;
  }
  FUN_100d28c3c(in_stack_000000a0 + 0x760);
  bVar1 = *(byte *)(in_stack_000000a0 + 0x740);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
LAB_1005e7118:
      if (*(long *)(in_stack_000000a0 + 0x748) != 0) {
        _free(*(undefined8 *)(in_stack_000000a0 + 0x750));
      }
    }
  }
  else if ((bVar1 == 2) || (bVar1 != 3)) goto LAB_1005e7118;
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

