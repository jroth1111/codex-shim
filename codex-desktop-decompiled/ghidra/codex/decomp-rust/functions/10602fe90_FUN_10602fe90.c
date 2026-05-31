
undefined1  [16] FUN_10602fe90(void)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 in_wzr;
  undefined1 auVar11 [16];
  ulong auStack_80 [2];
  undefined1 *puStack_70;
  long *plStack_68;
  ushort uStack_60;
  
  if (((uRam000000010b6fdea0 < 0xfffffffffffffff0) && (uRam000000010b6fdea0 != 1)) &&
     (((uint)uRam000000010b6fdea0 >> 1 & 1) == 0)) {
    uRam000000010b6fdea0 = (uRam000000010b6fdea0 | 1) + 0x10;
LAB_106030048:
    auVar11._8_8_ = 0x10b6fdea0;
    auVar11._0_8_ = 0x10b6fdea9;
    return auVar11;
  }
  uVar9 = 0;
  uStack_60 = 0;
  auStack_80[1] = 0;
  auStack_80[0] = 0;
  plStack_68 = (long *)0x0;
  puStack_70 = (undefined1 *)0x0;
  puVar4 = (ulong *)puStack_70;
LAB_10602ff34:
  while (((puStack_70 = (undefined1 *)puVar4, uVar2 = uRam000000010b6fdea0,
          uVar10 = (uint)uRam000000010b6fdea0, uRam000000010b6fdea0 == 1 ||
          (0xffffffffffffffef < uRam000000010b6fdea0)) || ((uVar10 >> 1 & 1) != 0))) {
    if (((uVar10 >> 1 & 1) == 0) && (uVar9 < 7)) {
      iVar7 = 1 << (ulong)((uint)uVar9 & 0x1f);
      do {
        InstructionSynchronizationBarrier();
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      uVar9 = uVar9 + 1;
      puVar4 = (ulong *)puStack_70;
    }
    else {
      if (plStack_68 == (long *)0x0) {
        FUN_108a84b14(&plStack_68);
      }
      uStack_60 = uStack_60 & 0xff00;
      auStack_80[0] = uVar2 & 0xfffffffffffffff0;
      auStack_80[1] = 0;
      uVar8 = (ulong)auStack_80 | uVar2 & 9;
      if ((uVar10 >> 1 & 1) == 0) goto LAB_10602ff18;
      puStack_70 = (undefined1 *)0x0;
      uVar8 = uVar8 + 6;
      puVar4 = (ulong *)puStack_70;
      if (uRam000000010b6fdea0 == uVar2) {
        if ((uVar10 >> 2 & 1) == 0) {
          uRam000000010b6fdea0 = uVar8;
          FUN_106032bec(0x10b6fdea0);
          uVar8 = uRam000000010b6fdea0;
        }
        goto LAB_10602ffe8;
      }
    }
  }
  uRam000000010b6fdea0 = (uRam000000010b6fdea0 | 1) + 0x10;
  if (plStack_68 != (long *)0x0) {
    lVar6 = *plStack_68;
    *plStack_68 = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&plStack_68);
    }
  }
  goto LAB_106030048;
LAB_10602ff18:
  uVar8 = uVar8 + 2;
  puStack_70 = (undefined1 *)auStack_80;
  puVar4 = auStack_80;
  if (uRam000000010b6fdea0 == uVar2) {
LAB_10602ffe8:
    while (uRam000000010b6fdea0 = uVar8, plVar3 = plStack_68, (char)uStack_60 == '\0') {
      if (plStack_68 == (long *)0x0) {
        func_0x000108a07a20(&UNK_10b4addb0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1060300bc);
        (*pcVar5)();
      }
      LOAcquire();
      cVar1 = (char)plStack_68[6];
      *(char *)(plStack_68 + 6) = cVar1 + -1;
      uVar8 = uRam000000010b6fdea0;
      if (cVar1 != '\x01') {
        do {
          lVar6 = _dispatch_semaphore_wait(plVar3[5],0xffffffffffffffff);
        } while (lVar6 != 0);
        LOAcquire();
        *(char *)(plVar3 + 6) = (char)in_wzr;
        uVar8 = uRam000000010b6fdea0;
      }
    }
    uVar9 = 0;
    puVar4 = (ulong *)puStack_70;
  }
  goto LAB_10602ff34;
}

