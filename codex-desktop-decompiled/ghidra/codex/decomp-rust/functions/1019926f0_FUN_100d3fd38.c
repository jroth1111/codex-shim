
void FUN_100d3fd38(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined8 extraout_x1;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  char *pcVar20;
  long lVar21;
  ulong uVar22;
  long *plStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  long lStack_68;
  
  lVar21 = *param_1;
  if ((*(byte *)(lVar21 + 0x1b8) & 1) == 0) {
    *(undefined1 *)(lVar21 + 0x1b8) = 1;
  }
  puVar17 = (ulong *)(lVar21 + 0x1c0);
  *puVar17 = *puVar17 | 1;
  LORelease();
  pcVar20 = (char *)(lVar21 + 0x188);
  if (*pcVar20 == '\0') {
    *pcVar20 = '\x01';
    goto LAB_100d3fd90;
  }
  do {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar20,param_2,1000000000);
LAB_100d3fd90:
    plStack_88 = (long *)(lVar21 + 0x180);
    pcStack_78 = (char *)*plStack_88;
    pcStack_80 = pcVar20;
    __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&plStack_88);
    pcVar20 = (char *)(lVar21 + 0x1a0);
    lVar21 = lVar21 + 0x80;
    while (func_0x000100fc8f14(&plStack_88,pcVar20,lVar21), pcVar11 = pcStack_70,
          pcVar13 = pcStack_78, pcVar7 = pcStack_80, plStack_88 < (long *)0x2) {
      uVar15 = *puVar17;
      *puVar17 = uVar15 - 2;
      LORelease();
      if (uVar15 < 2) goto LAB_100d3ff8c;
      pcVar12 = pcStack_78;
      if (plStack_88 == (long *)0x0) {
        pcVar8 = pcStack_78;
        pcVar9 = pcStack_70;
        if (pcStack_80 != (char *)0x8000000000000000) {
          for (; pcVar11 = pcVar13, pcVar12 = pcVar7, pcVar9 != (char *)0x0; pcVar9 = pcVar9 + -1) {
            FUN_100e3b46c(pcVar8);
            pcVar8 = pcVar8 + 0x270;
          }
        }
      }
      else {
        pcVar7 = pcStack_70;
        lVar19 = lStack_68;
        if (pcStack_80 == (char *)0x0) {
          for (; pcVar12 = pcStack_78, lVar19 != 0; lVar19 = lVar19 + -1) {
            FUN_100e3b46c(pcVar7);
            pcVar7 = pcVar7 + 0x270;
          }
        }
      }
      if (pcVar12 != (char *)0x0) {
        _free(pcVar11);
      }
    }
    while( true ) {
      func_0x000100fc8f14(&plStack_88,pcVar20,lVar21);
      pcVar11 = pcStack_70;
      pcVar13 = pcStack_78;
      pcVar7 = pcStack_80;
      if ((long *)0x1 < plStack_88) {
        lVar21 = *(long *)*param_1;
        *(long *)*param_1 = lVar21 + -1;
        LORelease();
        if (lVar21 != 1) {
          return;
        }
        DataMemoryBarrier(2,1);
        lVar19 = *param_1;
        uVar15 = *(ulong *)(lVar19 + 0x1b0) & 0xffffffffffffffe0;
        lVar21 = *(long *)(lVar19 + 0x1a0);
        if (*(ulong *)(lVar21 + 0x500) != uVar15) goto LAB_101992754;
        goto LAB_101992774;
      }
      uVar15 = *puVar17;
      *puVar17 = uVar15 - 2;
      LORelease();
      if (uVar15 < 2) break;
      pcVar12 = pcStack_78;
      if (plStack_88 == (long *)0x0) {
        pcVar8 = pcStack_78;
        pcVar9 = pcStack_70;
        if (pcStack_80 != (char *)0x8000000000000000) {
          for (; pcVar11 = pcVar13, pcVar12 = pcVar7, pcVar9 != (char *)0x0; pcVar9 = pcVar9 + -1) {
            FUN_100e3b46c(pcVar8);
            pcVar8 = pcVar8 + 0x270;
          }
        }
      }
      else {
        pcVar7 = pcStack_70;
        lVar19 = lStack_68;
        if (pcStack_80 == (char *)0x0) {
          for (; pcVar12 = pcStack_78, lVar19 != 0; lVar19 = lVar19 + -1) {
            FUN_100e3b46c(pcVar7);
            pcVar7 = pcVar7 + 0x270;
          }
        }
      }
      if (pcVar12 != (char *)0x0) {
        _free(pcVar11);
      }
    }
LAB_100d3ff8c:
    __ZN3std7process5abort17hdc01e45e25b715e8E();
    param_2 = extraout_x1;
  } while( true );
LAB_101992774:
  lVar16 = *(long *)(lVar19 + 0x1a8);
  if (lVar16 == lVar21) {
    uVar15 = *(ulong *)(lVar19 + 0x1b0) & 0x1f;
    uVar18 = *(ulong *)(lVar21 + 0x510) >> uVar15;
  }
  else {
    do {
      if (((*(ulong *)(lVar16 + 0x510) >> 0x20 & 1) == 0) ||
         (*(ulong *)(lVar19 + 0x1b0) < *(ulong *)(lVar16 + 0x518))) break;
      if (*(long *)(lVar16 + 0x508) == 0) {
        func_0x000108a07a20(&UNK_10b269340);
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1019929b0);
        (*pcVar14)();
      }
      *(long *)(lVar19 + 0x1a8) = *(long *)(lVar16 + 0x508);
      *(undefined8 *)(lVar16 + 0x500) = 0;
      *(undefined8 *)(lVar16 + 0x510) = 0;
      *(undefined8 *)(lVar16 + 0x508) = 0;
      lVar21 = *(long *)(lVar19 + 0x80);
      *(long *)(lVar16 + 0x500) = *(long *)(lVar21 + 0x500) + 0x20;
      plVar1 = (long *)(lVar21 + 0x508);
      lVar21 = *plVar1;
      if (lVar21 == 0) {
        *plVar1 = lVar16;
      }
      else {
        *(long *)(lVar16 + 0x500) = *(long *)(lVar21 + 0x500) + 0x20;
        lVar2 = *(long *)(lVar21 + 0x508);
        if (lVar2 == 0) {
          *(long *)(lVar21 + 0x508) = lVar16;
        }
        else {
          *(long *)(lVar16 + 0x500) = *(long *)(lVar2 + 0x500) + 0x20;
          if (*(long *)(lVar2 + 0x508) == 0) {
            *(long *)(lVar2 + 0x508) = lVar16;
          }
          else {
            _free();
          }
        }
      }
      InstructionSynchronizationBarrier();
      lVar16 = *(long *)(lVar19 + 0x1a8);
    } while (lVar16 != *(long *)(lVar19 + 0x1a0));
    lVar21 = *(long *)(lVar19 + 0x1a0);
    uVar15 = *(ulong *)(lVar19 + 0x1b0) & 0x1f;
    uVar18 = *(ulong *)(lVar21 + 0x510) >> uVar15;
  }
  if ((uVar18 & 1) == 0) goto LAB_10199291c;
  puVar17 = (ulong *)(lVar21 + uVar15 * 0x28);
  uVar18 = *puVar17;
  uVar4 = puVar17[1];
  uVar3 = puVar17[2];
  uVar5 = puVar17[3];
  uVar22 = puVar17[4];
  if (1 < uVar18) {
    if ((uVar18 & 0xfffffffffffffffe) != 2) {
      uVar15 = uVar5;
      if (uVar4 == 0) {
        for (; uVar22 != 0; uVar22 = uVar22 - 1) {
          FUN_101960e38(uVar15);
          uVar15 = uVar15 + 0x270;
        }
      }
      if (uVar3 != 0) {
        _free(uVar5);
      }
    }
LAB_10199291c:
    lVar21 = *(long *)(lVar19 + 0x1a8);
    do {
      lVar21 = *(long *)(lVar21 + 0x508);
      _free();
    } while (lVar21 != 0);
    if (*(long *)(lVar19 + 0x100) != 0) {
      (**(code **)(*(long *)(lVar19 + 0x100) + 0x18))(*(undefined8 *)(lVar19 + 0x108));
    }
    if (lVar19 != -1) {
      lVar21 = *(long *)(lVar19 + 8);
      *(long *)(lVar19 + 8) = lVar21 + -1;
      LORelease();
      if (lVar21 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar19);
        return;
      }
    }
    return;
  }
  uVar15 = *(long *)(lVar19 + 0x1b0) + 1;
  *(ulong *)(lVar19 + 0x1b0) = uVar15;
  uVar6 = uVar5;
  uVar10 = uVar3;
  if (uVar18 == 0) {
    uVar18 = uVar3;
    if (uVar4 != 0x8000000000000000) {
      for (; uVar6 = uVar3, uVar10 = uVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
        FUN_101960e38(uVar18);
        uVar18 = uVar18 + 0x270;
      }
    }
  }
  else if (uVar4 == 0) {
    for (; uVar22 != 0; uVar22 = uVar22 - 1) {
      FUN_101960e38(uVar5);
      uVar5 = uVar5 + 0x270;
    }
  }
  if (uVar10 != 0) {
    _free(uVar6);
  }
  uVar15 = uVar15 & 0xffffffffffffffe0;
  lVar21 = *(long *)(lVar19 + 0x1a0);
  if (*(ulong *)(lVar21 + 0x500) != uVar15) {
LAB_101992754:
    do {
      lVar21 = *(long *)(lVar21 + 0x508);
      if (lVar21 == 0) goto LAB_10199291c;
      *(long *)(lVar19 + 0x1a0) = lVar21;
      InstructionSynchronizationBarrier();
    } while (*(ulong *)(lVar21 + 0x500) != uVar15);
  }
  goto LAB_101992774;
}

