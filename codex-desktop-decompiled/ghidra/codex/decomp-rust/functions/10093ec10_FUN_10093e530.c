
/* WARNING: Removing unreachable block (ram,0x00010093ebe8) */
/* WARNING: Removing unreachable block (ram,0x00010093ec40) */
/* WARNING: Removing unreachable block (ram,0x00010093ec4c) */
/* WARNING: Removing unreachable block (ram,0x00010093ec54) */
/* WARNING: Removing unreachable block (ram,0x00010093ec5c) */
/* WARNING: Removing unreachable block (ram,0x00010093ec64) */
/* WARNING: Removing unreachable block (ram,0x00010093eda0) */
/* WARNING: Removing unreachable block (ram,0x00010093eadc) */
/* WARNING: Removing unreachable block (ram,0x00010093eba8) */
/* WARNING: Removing unreachable block (ram,0x00010093ebbc) */
/* WARNING: Removing unreachable block (ram,0x00010093ebc8) */
/* WARNING: Removing unreachable block (ram,0x00010093ebdc) */
/* WARNING: Removing unreachable block (ram,0x00010093ea8c) */
/* WARNING: Removing unreachable block (ram,0x00010093e8ec) */
/* WARNING: Removing unreachable block (ram,0x00010093e92c) */
/* WARNING: Removing unreachable block (ram,0x00010093eb14) */
/* WARNING: Removing unreachable block (ram,0x00010093e930) */
/* WARNING: Removing unreachable block (ram,0x00010093e980) */
/* WARNING: Removing unreachable block (ram,0x00010093e994) */
/* WARNING: Removing unreachable block (ram,0x00010093e938) */
/* WARNING: Removing unreachable block (ram,0x00010093e94c) */
/* WARNING: Removing unreachable block (ram,0x00010093e9a8) */
/* WARNING: Removing unreachable block (ram,0x00010093e9dc) */
/* WARNING: Removing unreachable block (ram,0x00010093ea00) */
/* WARNING: Removing unreachable block (ram,0x00010093e9e4) */
/* WARNING: Removing unreachable block (ram,0x00010093ea28) */
/* WARNING: Removing unreachable block (ram,0x00010093ea3c) */
/* WARNING: Removing unreachable block (ram,0x00010093ea40) */
/* WARNING: Removing unreachable block (ram,0x00010093ea44) */
/* WARNING: Removing unreachable block (ram,0x00010093ea48) */
/* WARNING: Removing unreachable block (ram,0x00010093ea94) */
/* WARNING: Removing unreachable block (ram,0x00010093eab8) */
/* WARNING: Removing unreachable block (ram,0x00010093eac4) */
/* WARNING: Removing unreachable block (ram,0x00010093eacc) */
/* WARNING: Removing unreachable block (ram,0x00010093eb50) */
/* WARNING: Removing unreachable block (ram,0x00010093eb7c) */
/* WARNING: Removing unreachable block (ram,0x00010093eae0) */
/* WARNING: Removing unreachable block (ram,0x00010093eb98) */
/* WARNING: Removing unreachable block (ram,0x00010093ec70) */
/* WARNING: Removing unreachable block (ram,0x00010093ec80) */
/* WARNING: Removing unreachable block (ram,0x00010093ec8c) */
/* WARNING: Removing unreachable block (ram,0x00010093eda4) */
/* WARNING: Removing unreachable block (ram,0x00010093eca0) */
/* WARNING: Removing unreachable block (ram,0x00010093ecc4) */
/* WARNING: Removing unreachable block (ram,0x00010093ecd0) */
/* WARNING: Removing unreachable block (ram,0x00010093ed04) */
/* WARNING: Removing unreachable block (ram,0x00010093ed08) */
/* WARNING: Removing unreachable block (ram,0x00010093ed18) */
/* WARNING: Removing unreachable block (ram,0x00010093ed3c) */
/* WARNING: Removing unreachable block (ram,0x00010093ed44) */
/* WARNING: Removing unreachable block (ram,0x00010093ed4c) */
/* WARNING: Removing unreachable block (ram,0x00010093ed54) */
/* WARNING: Removing unreachable block (ram,0x00010093ed30) */
/* WARNING: Removing unreachable block (ram,0x00010093ed60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10093e530(void)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined1 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x22;
  ulong uVar11;
  undefined1 *unaff_x25;
  long unaff_x28;
  char in_wzr;
  undefined1 auVar12 [16];
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00005400;
  long in_stack_00005408;
  long in_stack_00005410;
  undefined8 in_stack_0000c370;
  undefined8 in_stack_0000c378;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00005400,s_failed_to_reload_config__108aca2f4,&stack0x00004a70);
  uVar11 = *(ulong *)(unaff_x20 + 0x24d8);
  if ((uVar11 & 3) == 1) {
    unaff_x28 = *(long *)(uVar11 - 1);
    puVar9 = *(undefined8 **)(uVar11 + 7);
    pcVar5 = (code *)*puVar9;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(unaff_x28);
    }
    if (puVar9[1] != 0) {
      _free(unaff_x28);
    }
    _free((long *)(uVar11 - 1));
  }
  _memcpy(&stack0x00000098,&stack0x00009e90,0x24d8);
  *unaff_x25 = 1;
  _memcpy(&stack0x00002588,&stack0x00000098,0x24d8);
  FUN_100d227b4();
  if (unaff_x22 == 2) {
    if ((((*(byte *)(unaff_x19 + 0x61) & 1) != 0) &&
        (*(long *)(unaff_x19 + 0x48) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x48) != 0))
    {
      _free(*(undefined8 *)(unaff_x19 + 0x50));
    }
    *(undefined2 *)(unaff_x19 + 0x60) = 1;
    if (in_stack_00005400 == -0x7fffffffffffffff) {
      *in_stack_00000018 = 0x8000000000000071;
      uVar4 = 3;
    }
    else {
      FUN_100d7bc74(in_stack_00000050);
      if (in_stack_00005400 == -0x8000000000000000) {
        uVar6 = 0x8000000000000020;
        lVar3 = -0x7ffffffffffffffe;
        lVar8 = in_stack_00000040;
        in_stack_00000040 = in_stack_00000038;
        in_stack_00000038 = in_stack_00000030;
        lVar10 = -0x7ffffffffffffffb;
        in_stack_00005400 = in_stack_00005408;
        in_stack_00000030 = unaff_x28;
      }
      else {
        uVar6 = 0x8000000000000070;
        lVar3 = in_stack_00000020;
        lVar8 = in_stack_00000028;
        in_stack_00000028 = -0x7ffffffffffffffb;
        lVar10 = in_stack_00005410;
        in_stack_00000020 = unaff_x28;
        in_stack_00005410 = in_stack_00005408;
        in_stack_00000080 = in_stack_0000c370;
        in_stack_00000088 = in_stack_0000c378;
      }
      *in_stack_00000018 = uVar6;
      in_stack_00000018[1] = in_stack_00005400;
      in_stack_00000018[2] = in_stack_00005410;
      in_stack_00000018[3] = lVar10;
      in_stack_00000018[4] = in_stack_00000028;
      in_stack_00000018[5] = lVar8;
      in_stack_00000018[6] = in_stack_00000040;
      in_stack_00000018[7] = in_stack_00000038;
      in_stack_00000018[8] = in_stack_00000030;
      in_stack_00000018[9] = in_stack_00000020;
      in_stack_00000018[10] = lVar3;
      in_stack_00000018[0xc] = in_stack_00000088;
      in_stack_00000018[0xb] = in_stack_00000080;
      uVar4 = 1;
      in_stack_00000018[0xd] = 0xffffffffffff80a5;
    }
    *(undefined1 *)(unaff_x19 + 0x25b8) = uVar4;
    return;
  }
  _memcpy(&stack0x00005400,&stack0x00002588,0x24d8);
  *(long *)(unaff_x19 + 0x68) = unaff_x22;
  *(long *)(unaff_x19 + 0x70) = in_stack_00005400;
  *(long *)(unaff_x19 + 0x78) = in_stack_00005408;
  *(long *)(unaff_x19 + 0x80) = in_stack_00005410;
  *(undefined8 *)(unaff_x19 + 0x88) = 0x8000000000000005;
  *(long *)(unaff_x19 + 0x90) = in_stack_00000028;
  *(long *)(unaff_x19 + 0x98) = in_stack_00000040;
  *(long *)(unaff_x19 + 0xa0) = in_stack_00000038;
  *(long *)(unaff_x19 + 0xa8) = in_stack_00000030;
  *(long *)(unaff_x19 + 0xb0) = unaff_x28;
  *(long *)(unaff_x19 + 0xb8) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 200) = in_stack_0000c378;
  *(undefined8 *)(unaff_x19 + 0xc0) = in_stack_0000c370;
  *(undefined8 *)(unaff_x19 + 0xd0) = 0xffffffffffff80a5;
  _memcpy(unaff_x19 + 0xd8,&stack0x00005400,0x24d8);
  plVar7 = *(long **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x40) + 0x140) + 0x28) + 0xe0);
  lVar3 = *plVar7;
  *plVar7 = lVar3 + 1;
  if (-1 < lVar3) {
    *(undefined1 *)(unaff_x19 + 99) = 1;
    *(undefined2 *)(unaff_x19 + 0x61) = 0x100;
    __ZN10codex_core6config6Config20plugins_config_input17h9bb6116a4ec46570E(&stack0x00004a70);
    *(undefined2 *)(unaff_x19 + 0x62) = 0;
    _memcpy(&stack0x00000098,&stack0x00004a70,0x980);
    auVar12 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b2285e8);
    plVar7 = auVar12._8_8_;
    do {
      lVar3 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
      bVar2 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar3;
    } while (bVar2);
    _memcpy(&stack0x000079a8,&stack0x00000098,0x9a0);
    if ((auVar12._0_8_ & 1) == 0) {
      plVar1 = plVar7 + 0x4c;
      if ((char)*plVar1 == '\0') {
        *(char *)plVar1 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (plVar1,extraout_x1,1000000000);
      }
      plVar7[0x51] = plVar7[0x51] + 1;
      if ((char)*plVar1 == '\x01') {
        *(char *)plVar1 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar1,0);
      }
      lVar3 = *plVar7;
      *plVar7 = lVar3 + 1;
      if (lVar3 < 0) goto LAB_10093ef24;
      plVar1 = plVar7 + 0x5c;
      plVar7 = (long *)plVar7[0x5e];
    }
    else {
      lVar3 = *plVar7;
      *plVar7 = lVar3 + 1;
      if (lVar3 < 0) goto LAB_10093ef24;
      plVar1 = plVar7 + 0x48;
      plVar7 = (long *)plVar7[0x4a];
    }
    if ((plVar7 == (long *)0x0) ||
       ((lVar3 = *plVar7, *plVar7 = lVar3 + 1, -1 < lVar3 &&
        (lVar3 = *(long *)plVar1[2], *(long *)plVar1[2] = lVar3 + 1, -1 < lVar3)))) {
      _memcpy(&stack0x00009e94,&stack0x00000098,0x9a0);
      _memcpy((ulong)&stack0x00005400 | 0x4c,&stack0x00009e90,0x9a4);
      _posix_memalign(&stack0x00009e80,0x80,0xa80);
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xa80);
    }
  }
LAB_10093ef24:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10093ef28);
  (*pcVar5)();
}

