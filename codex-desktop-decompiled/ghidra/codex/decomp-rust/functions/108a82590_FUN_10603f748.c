
void FUN_10603f748(long param_1)

{
  bool bVar1;
  ulong *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plStack_38;
  
  puVar7 = *(ulong **)(param_1 + 8);
  uVar10 = *puVar7;
  while( true ) {
    while (((uint)uVar10 >> 1 & 1) == 0) {
      uVar8 = 0;
      if (uVar10 - 0x11 != 0) {
        uVar8 = uVar10 - 0x11 | 1;
      }
      bVar1 = *puVar7 == uVar10;
      uVar10 = *puVar7;
      if (bVar1) {
        *puVar7 = uVar8;
        return;
      }
    }
    if (((uint)uVar10 >> 3 & 1) == 0) break;
    uVar8 = uVar10 & 0xfffffffffffffff6;
    bVar1 = *puVar7 == uVar10;
    uVar10 = *puVar7;
    if (bVar1) {
      *puVar7 = uVar8;
      return;
    }
  }
  uVar8 = uVar10 & 0xfffffffffffffff0;
  plVar9 = *(long **)(uVar8 + 0x10);
  puVar2 = (ulong *)uVar8;
  while (plVar9 == (long *)0x0) {
    uVar11 = *puVar2;
    *(ulong **)(uVar11 + 8) = puVar2;
    puVar2 = (ulong *)uVar11;
    plVar9 = *(long **)(uVar11 + 0x10);
  }
  *(long **)(uVar8 + 0x10) = plVar9;
  LOAcquire();
  lVar6 = *plVar9;
  *plVar9 = lVar6 + -0x10;
  LORelease();
  if (lVar6 != 0x10) {
    return;
  }
  do {
    while (uVar8 = uVar10 & 0xfffffffffffffffe, ((uint)uVar10 >> 2 & 1) != 0) {
      bVar1 = *puVar7 == uVar10;
      uVar10 = *puVar7;
      if (bVar1) {
        *puVar7 = uVar8;
        return;
      }
    }
    uVar8 = uVar8 + 4;
    bVar1 = *puVar7 != uVar10;
    uVar10 = *puVar7;
  } while (bVar1);
  *puVar7 = uVar8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar10 = uVar8 & 0xfffffffffffffff0;
          lVar6 = *(long *)(uVar10 + 0x10);
          puVar2 = (ulong *)uVar10;
          while (lVar6 == 0) {
            uVar11 = *puVar2;
            *(ulong **)(uVar11 + 8) = puVar2;
            puVar2 = (ulong *)uVar11;
            lVar6 = *(long *)(uVar11 + 0x10);
          }
          *(long *)(uVar10 + 0x10) = lVar6;
          if ((uVar8 & 9) != 1) break;
          uVar10 = uVar8 & 0xfffffffffffffff3;
          bVar1 = *puVar7 == uVar8;
          uVar8 = *puVar7;
          if (bVar1) {
            *puVar7 = uVar10;
            return;
          }
        }
        if (((uint)uVar8 >> 3 & 1) == 0) break;
        bVar1 = *puVar7 == uVar8;
        uVar8 = *puVar7;
        if (bVar1) {
          *puVar7 = 0x11;
          goto LAB_106032ccc;
        }
      }
      if ((*(char *)(lVar6 + 0x21) != '\x01') || (*(long *)(lVar6 + 8) == 0)) break;
      *(long *)(uVar10 + 0x10) = *(long *)(lVar6 + 8);
      uVar11 = *puVar7;
      if (uVar11 == uVar8) {
        *puVar7 = uVar8 & 0xfffffffffffffff3;
        plVar9 = *(long **)(lVar6 + 0x18);
        if (plVar9 == (long *)0x0) goto LAB_106032d98;
        lVar5 = *plVar9;
        *plVar9 = lVar5 + 1;
        if (-1 < lVar5) {
          plVar9 = *(long **)(lVar6 + 0x18);
          *(undefined1 *)(lVar6 + 0x20) = 1;
          lVar6 = plVar9[6];
          *(char *)(plVar9 + 6) = '\x01';
          LORelease();
          plStack_38 = plVar9;
          if ((char)lVar6 == -1) {
            _dispatch_semaphore_signal(plVar9[5]);
          }
          lVar6 = *plVar9;
          *plVar9 = lVar6 + -1;
          LORelease();
          if (lVar6 != 1) {
            return;
          }
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&plStack_38);
          return;
        }
        goto LAB_106032da4;
      }
      *(long *)(uVar10 + 0x10) = lVar6;
      uVar8 = uVar11;
    }
    bVar1 = *puVar7 != uVar8;
    uVar8 = *puVar7;
  } while (bVar1);
  *puVar7 = 0;
LAB_106032ccc:
  do {
    lVar5 = *(long *)(lVar6 + 8);
    plVar9 = *(long **)(lVar6 + 0x18);
    if (plVar9 == (long *)0x0) {
LAB_106032d98:
      func_0x000108a07a20(&UNK_10b4addc8);
LAB_106032da4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x106032da8);
      (*pcVar3)();
    }
    lVar4 = *plVar9;
    *plVar9 = lVar4 + 1;
    if (lVar4 < 0) goto LAB_106032da4;
    plVar9 = *(long **)(lVar6 + 0x18);
    *(undefined1 *)(lVar6 + 0x20) = 1;
    lVar6 = plVar9[6];
    *(char *)(plVar9 + 6) = '\x01';
    LORelease();
    plStack_38 = plVar9;
    if ((char)lVar6 == -1) {
      _dispatch_semaphore_signal(plVar9[5]);
      lVar6 = *plVar9;
      *plVar9 = lVar6 + -1;
      LORelease();
    }
    else {
      lVar6 = *plVar9;
      *plVar9 = lVar6 + -1;
      LORelease();
    }
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&plStack_38);
    }
    lVar6 = lVar5;
    if (lVar5 == 0) {
      return;
    }
  } while( true );
}

