
undefined8 FUN_1005e9144(void)

{
  int iVar1;
  undefined1 uVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_00002db0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00002da0,s_eRolled_the_thread_back__but_fai_108ac1fff,&stack0x0000a310);
  uVar5 = *unaff_x27;
  *(undefined8 *)((long)unaff_x24 + 0xc) = unaff_x27[1];
  *(undefined8 *)((long)unaff_x24 + 4) = uVar5;
  *(undefined8 *)((long)unaff_x24 + 0x14) = in_stack_00002db0;
  uVar5 = *unaff_x24;
  unaff_x28[1] = unaff_x24[1];
  *unaff_x28 = uVar5;
  uVar5 = *(undefined8 *)((long)unaff_x24 + 0xc);
  *(undefined8 *)((long)unaff_x28 + 0x14) = *(undefined8 *)((long)unaff_x24 + 0x14);
  *(undefined8 *)((long)unaff_x28 + 0xc) = uVar5;
  *(undefined4 *)(unaff_x23 + 0x748) = 1;
  uVar5 = *unaff_x28;
  *(undefined8 *)(unaff_x23 + 0x754) = unaff_x28[1];
  *(undefined8 *)(unaff_x23 + 0x74c) = uVar5;
  uVar5 = *(undefined8 *)((long)unaff_x28 + 0xc);
  *(undefined8 *)(unaff_x23 + 0x760) = *(undefined8 *)((long)unaff_x28 + 0x14);
  *(undefined8 *)(unaff_x23 + 0x758) = uVar5;
  *(long *)(unaff_x23 + 0x920) = unaff_x19 + 0x10;
  *(long *)(unaff_x23 + 0x928) = unaff_x20 + 0x10;
  *(undefined1 *)(unaff_x23 + 0xcf0) = 0;
  iVar1 = FUN_10059e898(unaff_x23 + 0x748,in_stack_00000098);
  if (iVar1 == 0) {
    FUN_100d1ddbc(in_stack_000000a0 + 0x748);
    FUN_100de21d4(in_stack_000000a0 + 0x740);
    lVar4 = **(long **)(in_stack_000000a0 + 0x4b0);
    func_0x000100025ae8(&stack0x00002da0,*(long *)(in_stack_000000a0 + 0x4b8) + 0x240);
    *(undefined1 *)(in_stack_000000a0 + 0x73d) = 0;
    _memcpy(&stack0x00007b98,in_stack_000000a0 + 0x538,0x1d8);
    _memcpy(&stack0x00005490,&stack0x00007b80,0x1f0);
    _memcpy(in_stack_000000a0 + 0x740,&stack0x00005490,0x1f0);
    *(long *)(in_stack_000000a0 + 0x930) = lVar4 + 0x10;
    *(undefined1 *)(in_stack_000000a0 + 0xd28) = 0;
    iVar1 = FUN_1005a5bb0((long *)(in_stack_000000a0 + 0x740),in_stack_00000098);
    if (iVar1 == 0) {
      if (*(char *)(in_stack_000000a0 + 0xd28) == '\x03') {
        FUN_100e44a28(in_stack_000000a0 + 0xb28);
        *(undefined1 *)(in_stack_000000a0 + 0xd29) = 0;
      }
      else if (*(char *)(in_stack_000000a0 + 0xd28) == '\0') {
        if (*(long *)(in_stack_000000a0 + 0x740) != 0) {
          _free(*(undefined8 *)(in_stack_000000a0 + 0x748));
        }
        func_0x000100dfc74c(in_stack_000000a0 + 0x758);
      }
      FUN_100e4a6c8(in_stack_000000a0 + 0x710);
      *(undefined1 *)(in_stack_000000a0 + 0x73d) = 0;
      *(undefined1 *)(in_stack_000000a0 + 0x73f) = 0;
      lVar4 = **(long **)(in_stack_000000a0 + 0x4b8);
      **(long **)(in_stack_000000a0 + 0x4b8) = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(in_stack_000000a0 + 0x4b8);
      }
      *(undefined1 *)(in_stack_000000a0 + 0x73e) = 0;
      *(undefined1 *)(in_stack_000000a0 + 0x73c) = 1;
      FUN_100e7ec78();
      uVar5 = 0;
      uVar3 = *(ulong *)(in_stack_000000a0 + 0x200) ^ 0x8000000000000000;
      if (-1 < (long)*(ulong *)(in_stack_000000a0 + 0x200)) {
        uVar3 = 7;
      }
      if (0x18 < uVar3 || (1L << (uVar3 & 0x3f) & 0x161ff1cU) == 0) {
        FUN_100def028(in_stack_000000a0 + 0x200);
      }
      if ((*(byte *)(in_stack_000000a0 + 0x481) & 1) != 0) {
        FUN_100def028(in_stack_000000a0);
      }
      uVar2 = 1;
      goto LAB_1005eb358;
    }
    uVar2 = 0x11;
  }
  else {
    uVar2 = 0x10;
  }
  *unaff_x25 = uVar2;
  uVar5 = 2;
  uVar2 = 0x16;
LAB_1005eb358:
  *(undefined1 *)(in_stack_000000a0 + 0x480) = uVar2;
  return uVar5;
}

