
void FUN_1060300c0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  FUN_10602fe90();
  lVar4 = _getenv(param_3);
  if (lVar4 == 0) {
    *param_1 = -0x8000000000000000;
  }
  else {
    lVar5 = _strlen();
    if (lVar5 == 0) {
      lVar6 = 1;
    }
    else {
      lVar6 = _malloc(lVar5);
      if (lVar6 == 0) {
        func_0x0001087c9084(1,lVar5);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x106030130);
        (*pcVar3)();
      }
    }
    _memcpy(lVar6,lVar4,lVar5);
    *param_1 = lVar5;
    param_1[1] = lVar6;
    param_1[2] = lVar5;
  }
  uVar9 = uRam000000010b6fdea0;
  if (((uint)uRam000000010b6fdea0 >> 1 & 1) == 0) {
    uVar9 = uRam000000010b6fdea0 - 0x11;
    uRam000000010b6fdea0 = 0;
    if (uVar9 != 0) {
      uRam000000010b6fdea0 = uVar9 | 1;
    }
  }
  else {
    if (((uint)uRam000000010b6fdea0 >> 3 & 1) == 0) {
      uVar7 = uRam000000010b6fdea0 & 0xfffffffffffffff0;
      plVar8 = *(long **)(uVar7 + 0x10);
      puVar2 = (ulong *)uVar7;
      while (plVar8 == (long *)0x0) {
        uVar10 = *puVar2;
        *(ulong **)(uVar10 + 8) = puVar2;
        puVar2 = (ulong *)uVar10;
        plVar8 = *(long **)(uVar10 + 0x10);
      }
      *(long **)(uVar7 + 0x10) = plVar8;
      LOAcquire();
      lVar4 = *plVar8;
      *plVar8 = lVar4 + -0x10;
      LORelease();
      if (lVar4 != 0x10) {
        return;
      }
      do {
        while (uVar7 = uVar9 & 0xfffffffffffffffe, ((uint)uVar9 >> 2 & 1) != 0) {
          bVar1 = uRam000000010b6fdea0 == uVar9;
          uVar9 = uRam000000010b6fdea0;
          if (bVar1) {
            uRam000000010b6fdea0 = uVar7;
            return;
          }
        }
        uVar7 = uVar7 + 4;
        bVar1 = uRam000000010b6fdea0 != uVar9;
        uVar9 = uRam000000010b6fdea0;
        uVar10 = uVar7;
      } while (bVar1);
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              uRam000000010b6fdea0 = uVar10;
              uVar9 = uVar7 & 0xfffffffffffffff0;
              lVar4 = *(long *)(uVar9 + 0x10);
              puVar2 = (ulong *)uVar9;
              while (lVar4 == 0) {
                uVar10 = *puVar2;
                *(ulong **)(uVar10 + 8) = puVar2;
                puVar2 = (ulong *)uVar10;
                lVar4 = *(long *)(uVar10 + 0x10);
              }
              *(long *)(uVar9 + 0x10) = lVar4;
              uVar10 = uRam000000010b6fdea0;
              if ((uVar7 & 9) != 1) break;
              uVar9 = uVar7 & 0xfffffffffffffff3;
              bVar1 = uRam000000010b6fdea0 == uVar7;
              uVar7 = uRam000000010b6fdea0;
              if (bVar1) {
                uRam000000010b6fdea0 = uVar9;
                return;
              }
            }
            if (((uint)uVar7 >> 3 & 1) == 0) break;
            bVar1 = uRam000000010b6fdea0 == uVar7;
            uVar7 = uRam000000010b6fdea0;
            if (bVar1) {
              uRam000000010b6fdea0 = 0x11;
              goto LAB_106032ccc;
            }
          }
          if ((*(char *)(lVar4 + 0x21) == '\x01') && (*(long *)(lVar4 + 8) != 0)) break;
          bVar1 = uRam000000010b6fdea0 == uVar7;
          uVar7 = uRam000000010b6fdea0;
          if (bVar1) {
            uRam000000010b6fdea0 = 0;
            goto LAB_106032ccc;
          }
        }
        *(long *)(uVar9 + 0x10) = *(long *)(lVar4 + 8);
        uVar10 = uRam000000010b6fdea0;
        if (uRam000000010b6fdea0 == uVar7) break;
        *(long *)(uVar9 + 0x10) = lVar4;
        uVar7 = uVar10;
        uVar10 = uRam000000010b6fdea0;
      }
      plVar8 = *(long **)(lVar4 + 0x18);
      uRam000000010b6fdea0 = uVar7 & 0xfffffffffffffff3;
      if (plVar8 == (long *)0x0) {
LAB_106032d98:
        func_0x000108a07a20(&UNK_10b4addc8);
      }
      else {
        lVar5 = *plVar8;
        *plVar8 = lVar5 + 1;
        if (-1 < lVar5) {
          plVar8 = *(long **)(lVar4 + 0x18);
          *(undefined1 *)(lVar4 + 0x20) = 1;
          lVar4 = plVar8[6];
          *(char *)(plVar8 + 6) = '\x01';
          LORelease();
          if ((char)lVar4 == -1) {
            _dispatch_semaphore_signal(plVar8[5]);
          }
          lVar4 = *plVar8;
          *plVar8 = lVar4 + -1;
          LORelease();
          if (lVar4 != 1) {
            return;
          }
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&stack0xffffffffffffffc8);
          return;
        }
      }
LAB_106032da4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x106032da8);
      (*pcVar3)();
    }
    uRam000000010b6fdea0 = uRam000000010b6fdea0 & 0xfffffffffffffff6;
  }
  return;
LAB_106032ccc:
  lVar5 = *(long *)(lVar4 + 8);
  plVar8 = *(long **)(lVar4 + 0x18);
  if (plVar8 == (long *)0x0) goto LAB_106032d98;
  lVar6 = *plVar8;
  *plVar8 = lVar6 + 1;
  if (lVar6 < 0) goto LAB_106032da4;
  plVar8 = *(long **)(lVar4 + 0x18);
  *(undefined1 *)(lVar4 + 0x20) = 1;
  lVar4 = plVar8[6];
  *(char *)(plVar8 + 6) = '\x01';
  LORelease();
  if ((char)lVar4 == -1) {
    _dispatch_semaphore_signal(plVar8[5]);
    lVar4 = *plVar8;
    *plVar8 = lVar4 + -1;
    LORelease();
  }
  else {
    lVar4 = *plVar8;
    *plVar8 = lVar4 + -1;
    LORelease();
  }
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&stack0xffffffffffffffc8);
  }
  lVar4 = lVar5;
  if (lVar5 == 0) {
    return;
  }
  goto LAB_106032ccc;
}

