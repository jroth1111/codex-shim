
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN18codex_core_plugins7manager14PluginsManager11clear_cache17h826a5e6550ad2aa8E(long param_1)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong in_xzr;
  long *plStack_38;
  
  FUN_1039046fc();
  puVar1 = (ulong *)(param_1 + 0x48);
  LOAcquire();
  uVar5 = *puVar1;
  *puVar1 = uVar5 | 1;
  if ((uVar5 & 1) == 0) {
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) != 0) goto LAB_1038fe504;
LAB_1038fe4a0:
    FUN_103927330(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0x8000000000000000;
  }
  else {
    func_0x000108a82360(puVar1,1);
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) goto LAB_1038fe4a0;
LAB_1038fe504:
    iVar8 = func_0x000108a82c0c();
    FUN_103927330(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0x8000000000000000;
    if (iVar8 == 0) goto LAB_1038fe4c4;
  }
  if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE & 0x7fffffffffffffff
      ) != 0) {
    uVar5 = func_0x000108a82c0c();
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
  }
LAB_1038fe4c4:
  puVar1 = (ulong *)(param_1 + 0x48);
  uVar5 = *puVar1;
  if (*puVar1 == 1) {
    *puVar1 = in_xzr;
    return;
  }
  do {
    while (uVar10 = uVar5 & 0xfffffffffffffffe, ((uint)uVar5 >> 2 & 1) != 0) {
      bVar2 = *puVar1 == uVar5;
      uVar5 = *puVar1;
      if (bVar2) {
        *puVar1 = uVar10;
        return;
      }
    }
    uVar10 = uVar10 + 4;
    bVar2 = *puVar1 != uVar5;
    uVar5 = *puVar1;
  } while (bVar2);
  *puVar1 = uVar10;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar5 = uVar10 & 0xfffffffffffffff0;
          lVar9 = *(long *)(uVar5 + 0x10);
          puVar3 = (ulong *)uVar5;
          while (lVar9 == 0) {
            uVar12 = *puVar3;
            *(ulong **)(uVar12 + 8) = puVar3;
            puVar3 = (ulong *)uVar12;
            lVar9 = *(long *)(uVar12 + 0x10);
          }
          *(long *)(uVar5 + 0x10) = lVar9;
          if ((uVar10 & 9) != 1) break;
          uVar5 = uVar10 & 0xfffffffffffffff3;
          bVar2 = *puVar1 == uVar10;
          uVar10 = *puVar1;
          if (bVar2) {
            *puVar1 = uVar5;
            return;
          }
        }
        if (((uint)uVar10 >> 3 & 1) == 0) break;
        bVar2 = *puVar1 == uVar10;
        uVar10 = *puVar1;
        if (bVar2) {
          *puVar1 = 0x11;
          goto LAB_106032ccc;
        }
      }
      if ((*(char *)(lVar9 + 0x21) == '\x01') && (*(long *)(lVar9 + 8) != 0)) break;
      bVar2 = *puVar1 == uVar10;
      uVar10 = *puVar1;
      if (bVar2) {
        *puVar1 = 0;
        goto LAB_106032ccc;
      }
    }
    *(long *)(uVar5 + 0x10) = *(long *)(lVar9 + 8);
    uVar12 = *puVar1;
    if (uVar12 == uVar10) break;
    *(long *)(uVar5 + 0x10) = lVar9;
    uVar10 = uVar12;
  }
  *puVar1 = uVar10 & 0xfffffffffffffff3;
  plVar11 = *(long **)(lVar9 + 0x18);
  if (plVar11 == (long *)0x0) {
LAB_106032d98:
    func_0x000108a07a20(&UNK_10b4addc8);
  }
  else {
    lVar7 = *plVar11;
    *plVar11 = lVar7 + 1;
    if (-1 < lVar7) {
      plVar11 = *(long **)(lVar9 + 0x18);
      *(undefined1 *)(lVar9 + 0x20) = 1;
      lVar9 = plVar11[6];
      *(char *)(plVar11 + 6) = '\x01';
      LORelease();
      plStack_38 = plVar11;
      if ((char)lVar9 == -1) {
        _dispatch_semaphore_signal(plVar11[5]);
      }
      lVar9 = *plVar11;
      *plVar11 = lVar9 + -1;
      LORelease();
      if (lVar9 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&plStack_38);
      return;
    }
  }
LAB_106032da4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x106032da8);
  (*pcVar4)();
LAB_106032ccc:
  lVar7 = *(long *)(lVar9 + 8);
  plVar11 = *(long **)(lVar9 + 0x18);
  if (plVar11 == (long *)0x0) goto LAB_106032d98;
  lVar6 = *plVar11;
  *plVar11 = lVar6 + 1;
  if (lVar6 < 0) goto LAB_106032da4;
  plVar11 = *(long **)(lVar9 + 0x18);
  *(undefined1 *)(lVar9 + 0x20) = 1;
  lVar9 = plVar11[6];
  *(char *)(plVar11 + 6) = '\x01';
  LORelease();
  plStack_38 = plVar11;
  if ((char)lVar9 == -1) {
    _dispatch_semaphore_signal(plVar11[5]);
    lVar9 = *plVar11;
    *plVar11 = lVar9 + -1;
    LORelease();
  }
  else {
    lVar9 = *plVar11;
    *plVar11 = lVar9 + -1;
    LORelease();
  }
  if (lVar9 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&plStack_38);
  }
  lVar9 = lVar7;
  if (lVar7 == 0) {
    return;
  }
  goto LAB_106032ccc;
}

