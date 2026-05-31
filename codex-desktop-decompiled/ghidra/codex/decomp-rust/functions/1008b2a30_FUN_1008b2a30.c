
void FUN_1008b2a30(void)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  long unaff_x19;
  long *plVar5;
  char *unaff_x22;
  undefined8 in_stack_00000020;
  long *in_stack_00000048;
  long in_stack_00001d80;
  long in_stack_00001d88;
  long in_stack_00001d90;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001d80,s_watchId_already_exists__108accb2f,&stack0x000013d8);
  if (*unaff_x22 == '\0') {
    *unaff_x22 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E();
  }
  FUN_1060fa678();
  FUN_100ca9300(unaff_x19 + 0x158);
  *(undefined1 *)(unaff_x19 + 0x1d9) = 0;
  plVar5 = *(long **)(unaff_x19 + 0x150);
  if (plVar5 != (long *)0x0) {
    uVar1 = plVar5[8];
    do {
      uVar4 = uVar1;
      if (((uint)uVar4 >> 2 & 1) != 0) goto LAB_1008b2ab4;
      uVar1 = plVar5[8];
    } while (uVar1 != uVar4);
    plVar5[8] = uVar4 | 2;
LAB_1008b2ab4:
    if ((uVar4 & 5) == 1) {
      (**(code **)(plVar5[6] + 0x10))(plVar5[7]);
    }
    lVar2 = *plVar5;
    *plVar5 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2674eac193d18652E(unaff_x19 + 0x150);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x1da) = 0;
  FUN_100e05e38(unaff_x19 + 0x128);
  *(undefined1 *)(unaff_x19 + 0x1db) = 0;
  if (*(long *)(unaff_x19 + 0x110) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x118));
  }
  *(undefined1 *)(unaff_x19 + 0x1dc) = 0;
  lVar2 = **(long **)(unaff_x19 + 0x108);
  **(long **)(unaff_x19 + 0x108) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9caa3736ec68bf2eE(unaff_x19 + 0x108);
  }
  *(undefined1 *)(unaff_x19 + 0x1dd) = 0;
  __ZN83__LT_codex_file_watcher__FileWatcherSubscriber_u20_as_u20_core__ops__drop__Drop_GT_4drop17h0fc6f4cba3b855ceE
            (unaff_x19 + 0xf8);
  lVar2 = **(long **)(unaff_x19 + 0xf8);
  **(long **)(unaff_x19 + 0xf8) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd438c1543b9b97e9E(unaff_x19 + 0xf8);
  }
  *(undefined1 *)(unaff_x19 + 0x1de) = 0;
  lVar2 = **(long **)(unaff_x19 + 0xf0);
  **(long **)(unaff_x19 + 0xf0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E();
  }
  *(undefined2 *)(unaff_x19 + 0x1df) = 0;
  if (*(long *)(unaff_x19 + 0xb8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xc0));
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xa8));
  }
  *(undefined1 *)(unaff_x19 + 0x1e1) = 0;
  *(undefined1 *)(unaff_x19 + 0x1d8) = 1;
  if (in_stack_00001d80 == -0x7fffffffffffffff) {
    *in_stack_00000048 = -0x7fffffffffffffff;
    uVar3 = 3;
  }
  else {
    FUN_100e88c44(in_stack_00000020);
    *(undefined1 *)(unaff_x19 + 0x1e9) = 0;
    *in_stack_00000048 = in_stack_00001d80;
    in_stack_00000048[1] = in_stack_00001d88;
    in_stack_00000048[2] = in_stack_00001d90;
    in_stack_00000048[3] = -0x7ffffffffffffffb;
    uVar3 = 1;
    in_stack_00000048[0xc] = -0x7f58;
  }
  *(undefined1 *)(unaff_x19 + 0x1e8) = uVar3;
  return;
}

