
undefined8 FUN_1008ebc5c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  char *pcVar5;
  long lVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x26;
  long unaff_x28;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000780;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000770,s_thread___is_closing__retry_threa_108acabc9,&stack0x00000190);
  uVar2 = *(undefined8 *)(unaff_x28 + 0x650);
  *(undefined8 *)(unaff_x28 + 0x358) = *(undefined8 *)(unaff_x28 + 0x658);
  *(undefined8 *)(unaff_x28 + 0x350) = uVar2;
  uVar11 = *(undefined8 *)(unaff_x28 + 0xa28);
  uVar10 = *(undefined8 *)(unaff_x28 + 0xa20);
  *(undefined8 *)(unaff_x28 + 0xbc8) = uVar11;
  *(undefined8 *)(unaff_x28 + 0xbc0) = uVar10;
  unaff_x20[1] = *(undefined8 *)(unaff_x28 + 0x658);
  *unaff_x20 = uVar2;
  unaff_x20[2] = in_stack_00000780;
  *(long *)(unaff_x19 + 0xda0) = unaff_x26 + -4;
  *(undefined8 *)(unaff_x19 + 0xde8) = 0xffffffffffff80a8;
  *(undefined8 *)(unaff_x19 + 0xdf0) = unaff_x24;
  *(undefined8 *)(unaff_x19 + 0xdf8) = unaff_x23;
  *(undefined8 *)(unaff_x19 + 0xe08) = uVar11;
  *(undefined8 *)(unaff_x19 + 0xe00) = uVar10;
  *(long *)(unaff_x19 + 0xe10) = unaff_x21 + 0x10;
  *(undefined1 *)(unaff_x19 + 0xe40) = 0;
  iVar1 = FUN_1008927b8(unaff_x19 + 0xd88,in_stack_00000080);
  if (iVar1 == 0) {
    FUN_100d84c5c(unaff_x19 + 0xd88);
    if ((*(byte *)(unaff_x19 + 0xd6b) & 1) != 0) {
      pcVar5 = *(char **)(unaff_x19 + 0xd20);
      if (*pcVar5 == '\0') {
        *pcVar5 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar5,extraout_x1,1000000000);
      }
      FUN_1060fa678(pcVar5,1,pcVar5);
    }
    *(undefined1 *)(unaff_x19 + 0xd6b) = 0;
    if (*(long *)(unaff_x19 + 0xb28) != -0x8000000000000000) {
      FUN_100e4affc(unaff_x19 + 0xb28);
    }
    *(undefined1 *)(unaff_x19 + 0xd6d) = 0;
    FUN_100e4affc(unaff_x19 + 0x930);
    *(undefined2 *)(unaff_x19 + 0xd6e) = 0;
    if (((*(byte *)(unaff_x19 + 0xd6c) & 1) != 0) &&
       ((*(ulong *)(unaff_x19 + 0x908) & 0x7fffffffffffffff) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x910));
    }
    *(undefined1 *)(unaff_x19 + 0xd6c) = 0;
    if (*(long *)(unaff_x19 + 0x868) != 2) {
      FUN_100e4623c(unaff_x19 + 0x868);
    }
    lVar7 = *(long *)(unaff_x19 + 0x480);
    lVar8 = *(long *)(unaff_x19 + 0x488) + 1;
    lVar6 = lVar7;
    while (lVar8 = lVar8 + -1, lVar8 != 0) {
      FUN_100e068b8(lVar6);
      lVar6 = lVar6 + 0x1e0;
    }
    if (*(long *)(unaff_x19 + 0x478) != 0) {
      _free(lVar7);
    }
    FUN_100e20dec(unaff_x19 + 0x490);
    lVar6 = *(long *)(unaff_x19 + 0x630);
    lVar8 = *(long *)(unaff_x19 + 0x638);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(lVar6 + 8);
      do {
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (*(long *)(unaff_x19 + 0x628) != 0) {
      _free(lVar6);
    }
    plVar4 = *(long **)(unaff_x19 + 0x858);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      *plVar4 = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(unaff_x19 + 0x858);
      }
    }
    uVar2 = 0;
    *(undefined1 *)(unaff_x19 + 0xd6a) = 0;
    *(undefined8 *)(unaff_x19 + 0xd70) = 0;
    uVar3 = 1;
    *(undefined2 *)(unaff_x19 + 0xd78) = 0;
  }
  else {
    uVar2 = 1;
    uVar3 = 7;
  }
  *(undefined1 *)(unaff_x19 + 0xd68) = uVar3;
  return uVar2;
}

