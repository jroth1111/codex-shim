
void FUN_100e35550(ulong *param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  char *pcVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  char in_wzr;
  undefined8 *puStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  
  uVar11 = param_1[3];
  uVar7 = *param_1;
  if (uVar11 != 0) {
    plVar10 = (long *)param_1[1];
    uVar12 = 0;
    if (uVar7 <= param_1[2]) {
      uVar12 = uVar7;
    }
    lVar4 = param_1[2] - uVar12;
    uVar12 = uVar7 - lVar4;
    lVar3 = 0;
    if (uVar12 <= uVar11) {
      lVar3 = uVar11 - uVar12;
    }
    uVar6 = uVar7;
    if (uVar11 <= uVar12) {
      uVar6 = lVar4 + uVar11;
    }
    lVar5 = uVar6 - lVar4;
    if (lVar5 != 0) {
      plVar13 = plVar10 + lVar4 * 5;
      do {
        lVar4 = *plVar13;
        uVar6 = lVar4 + 0x8000000000000001U & lVar4 >> 0x3f;
        if (1 < uVar6 - 1) {
          if (uVar6 == 0) {
            if (lVar4 != 0) {
              lVar4 = 8;
LAB_100e35978:
              _free(*(undefined8 *)((long)plVar13 + lVar4));
              param_2 = extraout_x1_03;
            }
          }
          else if (plVar13[1] != 0) {
            lVar4 = 0x10;
            goto LAB_100e35978;
          }
        }
        plVar13 = plVar13 + 5;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (uVar12 < uVar11) {
      do {
        lVar4 = *plVar10;
        uVar11 = lVar4 + 0x8000000000000001U & lVar4 >> 0x3f;
        if (1 < uVar11 - 1) {
          if (uVar11 == 0) {
            if (lVar4 != 0) {
              lVar4 = 8;
LAB_100e355cc:
              _free(*(undefined8 *)((long)plVar10 + lVar4));
              param_2 = extraout_x1;
            }
          }
          else if (plVar10[1] != 0) {
            lVar4 = 0x10;
            goto LAB_100e355cc;
          }
        }
        plVar10 = plVar10 + 5;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  if (uVar7 != 0) {
    _free(param_1[1]);
    param_2 = extraout_x1_00;
  }
  puVar8 = param_1 + 4;
  uVar7 = *puVar8;
  pcVar9 = (char *)(uVar7 + 0x28);
  if (*pcVar9 == '\0') {
    *pcVar9 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar9,param_2,1000000000);
    param_2 = extraout_x1_04;
  }
  uVar11 = *(ulong *)(uVar7 + 0x30);
  lVar3 = *(long *)(uVar7 + 0x38) + -1;
  *(long *)(uVar7 + 0x38) = lVar3;
  if (lVar3 == 0) {
    uVar12 = *puVar8;
    pcVar1 = (char *)(uVar12 + 0x70);
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar1,param_2,1000000000);
    }
    puStack_78 = (undefined8 *)(uVar12 + 0x68);
    uStack_68 = *puStack_78;
    pcStack_70 = pcVar1;
    __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&puStack_78);
    *(undefined1 *)(uVar7 + 0x50) = 1;
  }
  if (*pcVar9 == '\x01') {
    *pcVar9 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar9,0);
  }
  uVar7 = param_1[5];
  while (uVar7 < uVar11) {
    uVar6 = *puVar8;
    uVar12 = *(ulong *)(uVar6 + 0x18);
    uVar7 = *(ulong *)(uVar6 + 0x20) & uVar7;
    if (uVar12 <= uVar7) {
      func_0x000108a07bdc(uVar7,uVar12,&UNK_10b23a9a0);
LAB_100e35a4c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e35a50);
      (*pcVar2)();
    }
    pcVar9 = (char *)(*(long *)(uVar6 + 0x10) + uVar7 * 0x40);
    if (*pcVar9 == '\0') {
      *pcVar9 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar9,uVar12,1000000000);
      uVar12 = extraout_x1_01;
    }
    if (*(ulong *)(pcVar9 + 0x38) == param_1[5]) {
LAB_100e357c8:
      param_1[5] = param_1[5] + 1;
      LOAcquire();
      lVar3 = *(long *)(pcVar9 + 0x30);
      *(long *)(pcVar9 + 0x30) = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        plVar10 = (long *)(pcVar9 + 8);
        lVar3 = *plVar10;
        if ((lVar3 != -0x7ffffffffffffffd) &&
           (uVar7 = lVar3 + 0x8000000000000001U & lVar3 >> 0x3f, 1 < uVar7 - 1)) {
          if (uVar7 == 0) {
            if (lVar3 != 0) {
              lVar3 = 8;
LAB_100e35854:
              _free(*(undefined8 *)((long)plVar10 + lVar3));
            }
          }
          else if (*(long *)(pcVar9 + 0x10) != 0) {
            lVar3 = 0x10;
            goto LAB_100e35854;
          }
        }
        *plVar10 = -0x7ffffffffffffffd;
      }
      if (*pcVar9 == '\x01') {
        *pcVar9 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar9,0);
      }
    }
    else {
      if (*pcVar9 == '\x01') {
        *pcVar9 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar9,0);
        uVar12 = extraout_x1_02;
      }
      uVar6 = *puVar8;
      pcVar1 = (char *)(uVar6 + 0x28);
      if (*pcVar1 == '\0') {
        *pcVar1 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar1,uVar12,1000000000)
        ;
      }
      uVar12 = *(ulong *)(*puVar8 + 0x18);
      if (uVar12 <= uVar7) {
        func_0x000108a07bdc(uVar7,uVar12,&UNK_10b23a9b8);
        goto LAB_100e35a4c;
      }
      pcVar9 = (char *)(*(long *)(*puVar8 + 0x10) + uVar7 * 0x40);
      if (*pcVar9 == '\0') {
        *pcVar9 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar9,uVar12,1000000000)
        ;
      }
      uVar7 = param_1[5];
      if (*(ulong *)(pcVar9 + 0x38) == uVar7) {
        if (*pcVar1 == '\x01') {
          *pcVar1 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
        }
        goto LAB_100e357c8;
      }
      lVar3 = *(long *)(*puVar8 + 0x18);
      uVar12 = lVar3 + *(ulong *)(pcVar9 + 0x38);
      if (uVar12 == uVar7) {
        if ((*(byte *)(uVar6 + 0x50) & 1) == 0) {
          if (*pcVar9 == '\x01') {
            *pcVar9 = in_wzr;
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar9,0);
          }
          if (*pcVar1 == '\x01') {
            *pcVar1 = in_wzr;
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
          }
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd4b29,0x45,&UNK_10b24bc90);
          goto LAB_100e35a4c;
        }
        if (*pcVar1 == '\x01') {
          *pcVar1 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
        }
      }
      else {
        lVar4 = *(long *)(uVar6 + 0x30);
        if (*(char *)(uVar6 + 0x28) == '\x01') {
          *(char *)(uVar6 + 0x28) = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
        }
        uVar6 = lVar4 - lVar3;
        if (uVar6 == uVar7) goto LAB_100e357c8;
        param_1[5] = uVar6;
      }
      if (*pcVar9 == '\x01') {
        *pcVar9 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar9,0);
      }
      if (uVar12 == uVar7) break;
    }
    uVar7 = param_1[5];
  }
  lVar3 = *(long *)*puVar8;
  *(long *)*puVar8 = lVar3 + -1;
  LORelease();
  if (lVar3 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  uVar7 = *puVar8;
  lVar3 = *(long *)(uVar7 + 0x18);
  if (lVar3 != 0) {
    lVar4 = *(long *)(uVar7 + 0x10);
    plVar10 = (long *)(lVar4 + 8);
    do {
      lVar5 = *plVar10;
      if ((lVar5 != -0x7ffffffffffffffd) &&
         (uVar11 = lVar5 + 0x8000000000000001U & lVar5 >> 0x3f, 1 < uVar11 - 1)) {
        if (uVar11 == 0) {
          if (lVar5 != 0) {
            lVar5 = 8;
LAB_103b20f6c:
            _free(*(undefined8 *)((long)plVar10 + lVar5));
          }
        }
        else if (plVar10[1] != 0) {
          lVar5 = 0x10;
          goto LAB_103b20f6c;
        }
      }
      plVar10 = plVar10 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    _free(lVar4);
  }
  if (uVar7 != 0xffffffffffffffff) {
    lVar3 = *(long *)(uVar7 + 8);
    *(long *)(uVar7 + 8) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(uVar7);
      return;
    }
  }
  return;
}

