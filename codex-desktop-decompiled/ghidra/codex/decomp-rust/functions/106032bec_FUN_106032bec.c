
void FUN_106032bec(ulong *param_1,ulong param_2)

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
  long *plStack_38;
  
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar7 = param_2 & 0xfffffffffffffff0;
          lVar6 = *(long *)(uVar7 + 0x10);
          puVar2 = (ulong *)uVar7;
          while (lVar6 == 0) {
            uVar9 = *puVar2;
            *(ulong **)(uVar9 + 8) = puVar2;
            puVar2 = (ulong *)uVar9;
            lVar6 = *(long *)(uVar9 + 0x10);
          }
          *(long *)(uVar7 + 0x10) = lVar6;
          if ((param_2 & 9) != 1) break;
          uVar7 = param_2 & 0xfffffffffffffff3;
          bVar1 = *param_1 == param_2;
          param_2 = *param_1;
          if (bVar1) {
            *param_1 = uVar7;
            return;
          }
        }
        if (((uint)param_2 >> 3 & 1) == 0) break;
        bVar1 = *param_1 == param_2;
        param_2 = *param_1;
        if (bVar1) {
          *param_1 = 0x11;
          goto LAB_106032ccc;
        }
      }
      if ((*(char *)(lVar6 + 0x21) == '\x01') && (*(long *)(lVar6 + 8) != 0)) break;
      bVar1 = *param_1 == param_2;
      param_2 = *param_1;
      if (bVar1) {
        *param_1 = 0;
        goto LAB_106032ccc;
      }
    }
    *(long *)(uVar7 + 0x10) = *(long *)(lVar6 + 8);
    uVar9 = *param_1;
    if (uVar9 == param_2) break;
    *(long *)(uVar7 + 0x10) = lVar6;
    param_2 = uVar9;
  }
  *param_1 = param_2 & 0xfffffffffffffff3;
  plVar8 = *(long **)(lVar6 + 0x18);
  if (plVar8 == (long *)0x0) {
LAB_106032d98:
    func_0x000108a07a20(&UNK_10b4addc8);
  }
  else {
    lVar5 = *plVar8;
    *plVar8 = lVar5 + 1;
    if (-1 < lVar5) {
      plVar8 = *(long **)(lVar6 + 0x18);
      *(undefined1 *)(lVar6 + 0x20) = 1;
      lVar6 = plVar8[6];
      *(char *)(plVar8 + 6) = '\x01';
      LORelease();
      plStack_38 = plVar8;
      if ((char)lVar6 == -1) {
        _dispatch_semaphore_signal(plVar8[5]);
      }
      lVar6 = *plVar8;
      *plVar8 = lVar6 + -1;
      LORelease();
      if (lVar6 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&plStack_38);
      return;
    }
  }
LAB_106032da4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x106032da8);
  (*pcVar3)();
LAB_106032ccc:
  lVar5 = *(long *)(lVar6 + 8);
  plVar8 = *(long **)(lVar6 + 0x18);
  if (plVar8 == (long *)0x0) goto LAB_106032d98;
  lVar4 = *plVar8;
  *plVar8 = lVar4 + 1;
  if (lVar4 < 0) goto LAB_106032da4;
  plVar8 = *(long **)(lVar6 + 0x18);
  *(undefined1 *)(lVar6 + 0x20) = 1;
  lVar6 = plVar8[6];
  *(char *)(plVar8 + 6) = '\x01';
  LORelease();
  plStack_38 = plVar8;
  if ((char)lVar6 == -1) {
    _dispatch_semaphore_signal(plVar8[5]);
    lVar6 = *plVar8;
    *plVar8 = lVar6 + -1;
    LORelease();
  }
  else {
    lVar6 = *plVar8;
    *plVar8 = lVar6 + -1;
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
  goto LAB_106032ccc;
}

