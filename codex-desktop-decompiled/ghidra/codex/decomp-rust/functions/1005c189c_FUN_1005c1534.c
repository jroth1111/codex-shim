
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005c1534(undefined8 *param_1,long param_2,long *param_3)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long *plVar9;
  long *extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *plVar10;
  undefined *puVar11;
  undefined1 uVar12;
  long lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint *puVar19;
  uint *puVar20;
  long in_xzr;
  undefined1 auVar21 [16];
  undefined8 *puStack_750;
  uint *puStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  uint *puStack_720;
  uint *puStack_718;
  undefined8 **ppuStack_710;
  long lStack_708;
  undefined8 uStack_700;
  long lStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 *puStack_6b8;
  byte bStack_6b0;
  undefined7 uStack_6af;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  uint *puStack_688;
  uint *puStack_680;
  undefined8 **ppuStack_678;
  long lStack_670;
  undefined8 uStack_668;
  long lStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  uint *puStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  uint *puStack_5f8;
  uint *puStack_5f0;
  undefined8 **ppuStack_5e8;
  long lStack_5e0;
  undefined8 uStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_588;
  undefined *puStack_580;
  long lStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined8 uStack_560;
  undefined8 auStack_4e0 [69];
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined1 auStack_270 [488];
  undefined1 auStack_88 [40];
  
  auStack_4e0[0] = 0;
  bVar4 = *(byte *)(param_2 + 0x6a8);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      uVar17 = *(undefined8 *)(param_2 + 0x230);
      *(undefined2 *)(param_2 + 0x6a9) = 0x101;
      _memcpy(param_2 + 0x238,param_2,0x230);
      if (*(long *)(param_2 + 0x250) == -0x7fffffffffffffff) {
        __ZN7tracing4span4Span7current17h348f9350075e824bE(auStack_88);
        __ZN10codex_otel13trace_context22span_w3c_trace_context17h70538771b6392d16E
                  (&lStack_2b8,auStack_88);
        FUN_1048c3e1c(auStack_88);
        lVar13 = *(long *)(param_2 + 0x250);
        if (lVar13 != -0x7fffffffffffffff) {
          if ((lVar13 != -0x8000000000000000) && (lVar13 != 0)) {
            _free(*(undefined8 *)(param_2 + 600));
          }
          if ((*(long *)(param_2 + 0x268) != -0x8000000000000000) &&
             (*(long *)(param_2 + 0x268) != 0)) {
            _free(*(undefined8 *)(param_2 + 0x270));
          }
        }
        *(undefined1 *)(param_2 + 0x6aa) = 1;
        *(undefined8 *)(param_2 + 600) = uStack_2b0;
        *(long *)(param_2 + 0x250) = lStack_2b8;
        *(long *)(param_2 + 0x268) = lStack_2a0;
        *(undefined8 *)(param_2 + 0x260) = uStack_2a8;
        *(undefined8 *)(param_2 + 0x278) = uStack_290;
        *(undefined8 *)(param_2 + 0x270) = uStack_298;
      }
      *(undefined2 *)(param_2 + 0x6a9) = 0;
      _memcpy(param_2 + 0x468,param_2 + 0x238,0x230);
      *(undefined8 *)(param_2 + 0x698) = uVar17;
      *(undefined8 *)(param_2 + 0x6a0) = 0;
LAB_1005c164c:
      FUN_1011c4c18(&lStack_2b8,(long *)(param_2 + 0x468),param_3);
      if (lStack_2b8 == -0x7fffffffffffffff) {
        uVar17 = 0x8000000000000021;
        uVar12 = 3;
      }
      else {
        _memcpy(auStack_4e0,&uStack_2b0,0x228);
        lVar13 = *(long *)(param_2 + 0x468);
        if (lVar13 != -0x8000000000000000) {
          if (lVar13 != 0) {
            _free(*(undefined8 *)(param_2 + 0x470));
          }
          FUN_100def028(param_2 + 0x4b0);
          lVar13 = *(long *)(param_2 + 0x480);
          if (lVar13 != -0x7fffffffffffffff) {
            if ((lVar13 != -0x8000000000000000) && (lVar13 != 0)) {
              _free(*(undefined8 *)(param_2 + 0x488));
            }
            if ((*(long *)(param_2 + 0x498) != -0x8000000000000000) &&
               (*(long *)(param_2 + 0x498) != 0)) {
              _free(*(undefined8 *)(param_2 + 0x4a0));
            }
          }
        }
        lVar13 = *(long *)(param_2 + 0x6a0);
        if (lVar13 != 0) {
          FUN_100d07adc(lVar13);
          _free(lVar13);
        }
        uVar17 = 0x8000000000000016;
        if (lStack_2b8 == -0x8000000000000000) {
          uVar17 = 0x8000000000000020;
        }
        else {
          _memcpy(&uStack_2b0,auStack_4e0,0x228);
          if (lStack_2b8 != 0) {
            _free(uStack_2b0);
          }
          FUN_100def028(auStack_270);
          if (lStack_2a0 != -0x7fffffffffffffff) {
            if ((lStack_2a0 != -0x8000000000000000) && (lStack_2a0 != 0)) {
              _free(uStack_298);
            }
            if ((lStack_288 != -0x8000000000000000) && (lStack_288 != 0)) {
              _free(uStack_280);
            }
          }
        }
        *(undefined2 *)(param_2 + 0x6a9) = 0;
        uVar12 = 1;
      }
      *param_1 = uVar17;
      *(undefined1 *)(param_2 + 0x6a8) = uVar12;
      return;
    }
    FUN_107c05cc0(&UNK_10b218950);
  }
  else if (bVar4 == 3) goto LAB_1005c164c;
  uVar17 = FUN_107c05cc4(&UNK_10b218950);
  FUN_100e46bb4(&lStack_2a0);
  if (((*(byte *)(param_2 + 0x6a9) & 1) != 0) &&
     ((*(long *)(param_2 + 0x238) == 0 ||
      (_free(*(undefined8 *)(param_2 + 0x240)), (*(byte *)(param_2 + 0x6a9) & 1) != 0)))) {
    FUN_100def028(param_2 + 0x280);
  }
  if ((*(byte *)(param_2 + 0x6aa) & 1) != 0) {
    FUN_100e46bb4(param_2 + 0x250);
  }
  *(undefined1 *)(param_2 + 0x6aa) = 0;
  *(undefined2 *)(param_2 + 0x6a8) = 2;
  __Unwind_Resume(uVar17);
  auVar21 = FUN_107c05ccc();
  plVar9 = auVar21._8_8_;
  puVar6 = auVar21._0_8_;
  bVar4 = *(byte *)((long)plVar9 + 9);
  if (bVar4 < 3) {
    if (bVar4 != 0) {
      if (bVar4 == 1) {
        FUN_107c05cc0(&UNK_10b218968);
      }
      FUN_107c05cc4();
LAB_1005c2050:
      FUN_107c05cc0(&UNK_10b218a18);
      goto LAB_1005c206c;
    }
    *(undefined1 *)(plVar9 + 1) = 0;
    lVar13 = *plVar9;
    plVar10 = *(long **)(lVar13 + 0x30);
    if ((plVar10 != (long *)0x0) && (lVar3 = *plVar10, *plVar10 = lVar3 + 1, lVar3 < 0))
    goto LAB_1005c206c;
    plVar9[0x15f] = (long)plVar10;
    plVar9[0x160] = -1;
    *(undefined1 *)(plVar9 + 1) = 1;
    plVar9[2] = -0x7fffffffffffffe9;
    plVar9[0x3f] = lVar13;
    *(undefined1 *)(plVar9 + 0x15e) = 0;
LAB_1005c1950:
    plVar9[0x40] = -0x7fffffffffffffff;
    _memcpy(plVar9 + 0x46,plVar9 + 2,0x1e8);
    plVar9[0x83] = lVar13;
    *(undefined1 *)(plVar9 + 0x15d) = 0;
LAB_1005c1a08:
    FUN_1005c21f8(&puStack_6b8,plVar9 + 0x40,param_3);
    if (puStack_6b8 == (undefined8 *)0x8000000000000021) {
      uVar12 = 3;
      *(undefined1 *)(plVar9 + 0x15e) = 3;
      *puVar6 = 0x8000000000000021;
      goto LAB_1005c1d58;
    }
    FUN_100e7ab5c(plVar9 + 0x40);
    *(undefined1 *)(plVar9 + 0x15e) = 1;
    uStack_6e8 = uStack_650;
    uStack_6f0 = uStack_658;
    uStack_6d8 = uStack_640;
    uStack_6e0 = uStack_648;
    uStack_6c8 = uStack_630;
    uStack_6d0 = uStack_638;
    uStack_6c0 = uStack_628;
    uStack_728 = uStack_690;
    uStack_730 = uStack_698;
    puStack_718 = puStack_680;
    puStack_720 = puStack_688;
    lStack_708 = lStack_670;
    ppuStack_710 = ppuStack_678;
    lStack_6f8 = lStack_660;
    uStack_700 = uStack_668;
    puStack_748 = (uint *)CONCAT71(uStack_6af,bStack_6b0);
    puStack_750 = puStack_6b8;
    uStack_738 = uStack_6a0;
    uStack_740 = uStack_6a8;
    if (puStack_6b8 == (undefined8 *)0x8000000000000020) {
      plVar10 = extraout_x1;
      if (puStack_748 != (uint *)0x0) {
        _free(uStack_6a8);
        plVar10 = extraout_x1_00;
      }
LAB_1005c1ab4:
      *(undefined1 *)(plVar9 + 1) = 0;
      plVar9[2] = plVar9[0x15f];
      plVar9[3] = plVar9[0x160];
      plVar9[2] = 0;
      lVar3 = plVar9[0x15f];
      lVar13 = lStack_588;
      goto joined_r0x0001005c1acc;
    }
    if (puStack_6b8 == (undefined8 *)0x8000000000000016) {
      FUN_100df5738(&puStack_750);
      plVar10 = extraout_x1_01;
      goto LAB_1005c1ab4;
    }
    uStack_5b8 = uStack_648;
    uStack_5c0 = uStack_650;
    uStack_5a8 = uStack_638;
    uStack_5b0 = uStack_640;
    uStack_598 = uStack_628;
    uStack_5a0 = uStack_630;
    puStack_5f8 = puStack_688;
    uStack_600 = uStack_690;
    ppuStack_5e8 = ppuStack_678;
    puStack_5f0 = puStack_680;
    uStack_5d8 = uStack_668;
    lStack_5e0 = lStack_670;
    uStack_5c8 = uStack_658;
    lStack_5d0 = lStack_660;
    uStack_618 = uStack_6a8;
    uStack_608 = uStack_698;
    uStack_610 = uStack_6a0;
    puStack_620 = puStack_748;
    FUN_100d979f8(plVar9 + 0x15f);
  }
  else {
    if (bVar4 == 3) {
      bVar4 = *(byte *)(plVar9 + 0x15e);
      if (bVar4 < 2) {
        if (bVar4 != 0) goto LAB_1005c2050;
        lVar13 = plVar9[0x3f];
        goto LAB_1005c1950;
      }
      if (bVar4 != 3) {
        FUN_107c05cc4(&UNK_10b218a18);
        goto LAB_1005c206c;
      }
      goto LAB_1005c1a08;
    }
    lVar3 = plVar9[2];
    plVar9[2] = 0;
    plVar10 = plVar9;
    lVar13 = lStack_588;
joined_r0x0001005c1acc:
    lStack_588 = lVar3;
    if (lStack_588 == 0) {
      lStack_588 = lVar13;
      FUN_107c05cac(&UNK_108ca1dd0,0x2b,&UNK_10b209528);
      goto LAB_1005c206c;
    }
    plVar16 = plVar9 + 2;
    if (*(long *)(*(long *)(lStack_588 + 0x10) + 0x10) == 2) {
LAB_1005c1c70:
      FUN_10074ea70(lStack_588,plVar10);
    }
    else {
      lVar13 = *(long *)(lStack_588 + 0x10);
      puVar18 = (undefined8 *)(lVar13 + 0x18);
      if (*(long *)(lVar13 + 0x18) == 0) {
        thunk_FUN_108854158(puVar18);
      }
      iVar5 = _pthread_mutex_lock();
      if (iVar5 != 0) {
        thunk_FUN_108a81ad4();
        goto LAB_1005c206c;
      }
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) {
        bVar4 = 0;
        cVar1 = *(char *)(lVar13 + 0x20);
      }
      else {
        bVar4 = FUN_107c05e34();
        bVar4 = bVar4 ^ 1;
        cVar1 = *(char *)(lVar13 + 0x20);
      }
      if (cVar1 != '\0') {
        puStack_6b8 = puVar18;
        bStack_6b0 = bVar4;
        FUN_107c05cb4(&UNK_108cc408f,0x2b,&puStack_6b8,&UNK_10b2350a0,&UNK_10b221068);
        goto LAB_1005c206c;
      }
      if (*(long *)(lVar13 + 0x28) == -0x8000000000000000) {
        if (((bVar4 & 1) == 0) &&
           ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
            0x7fffffffffffffff) != 0)) {
          uVar7 = FUN_107c05e34();
LAB_1005c1f8c:
          if ((uVar7 & 1) == 0) {
            *(undefined1 *)(lVar13 + 0x20) = 1;
          }
        }
      }
      else {
        uVar7 = plVar9[3];
        if (uVar7 == 0xffffffffffffffff) {
          auVar21 = (**(code **)*param_3)(param_3[1]);
          lVar3 = *(long *)(lVar13 + 0x48);
          FUN_100f1385c((long *)(lVar13 + 0x28),lVar3,auVar21._0_8_,auVar21._8_8_);
          plVar9[3] = lVar3;
        }
        else {
          if ((*(ulong *)(lVar13 + 0x38) <= uVar7) ||
             (puVar19 = (uint *)(*(long *)(lVar13 + 0x30) + uVar7 * 0x18), (*puVar19 & 1) == 0)) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5715,0xb,&UNK_10b221080);
            goto LAB_1005c206c;
          }
          if ((*(undefined8 **)(puVar19 + 2) == (undefined8 *)0x0) ||
             ((undefined8 *)*param_3 != *(undefined8 **)(puVar19 + 2) ||
              param_3[1] != *(long *)(puVar19 + 4))) {
            auVar21 = (**(code **)*param_3)();
            if (*(long *)(puVar19 + 2) != 0) {
              (**(code **)(*(long *)(puVar19 + 2) + 0x18))(*(undefined8 *)(puVar19 + 4));
            }
            *(undefined1 (*) [16])(puVar19 + 2) = auVar21;
          }
        }
        if (((bVar4 & 1) == 0) &&
           ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
            0x7fffffffffffffff) != 0)) {
          uVar7 = FUN_107c05e34();
          goto LAB_1005c1f8c;
        }
      }
      _pthread_mutex_unlock(*puVar18);
      lVar3 = lStack_588;
      plVar10 = (long *)(*(long *)(lStack_588 + 0x10) + 0x10);
      lVar13 = *plVar10;
      if (lVar13 == 0) {
        *plVar10 = 1;
      }
      puVar11 = &UNK_10b2095d8;
      puVar8 = &UNK_108ca1a1b;
      plVar10 = (long *)0x28;
      if (1 < lVar13) {
        if (lVar13 != 2) {
          if (lVar13 == 3) {
            puVar11 = &UNK_10b2095c0;
            plVar10 = (long *)0x21;
            puVar8 = &UNK_108ca1dfb;
          }
          goto LAB_1005c1f74;
        }
        goto LAB_1005c1c70;
      }
      if (lVar13 != 0) {
        if (lVar13 == 1) {
          plVar10 = (long *)*plVar16;
          lVar13 = lVar3;
          if (plVar10 != (long *)0x0) {
            lVar3 = *plVar10;
            *plVar10 = lVar3 + -1;
            LORelease();
            if (lVar3 == 1) {
              DataMemoryBarrier(2,1);
              func_0x0001034c7ad4(plVar16);
            }
          }
LAB_1005c1d4c:
          *plVar16 = lVar13;
          *puVar6 = 0x8000000000000021;
          uVar12 = 4;
          goto LAB_1005c1d58;
        }
LAB_1005c1f74:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar8,plVar10,puVar11);
        goto LAB_1005c206c;
      }
      lStack_578 = *(long *)(lStack_588 + 0x10) + 0x10;
      puStack_580 = &UNK_10b209540;
      ppuStack_570 = &puStack_580;
      uStack_560 = 0;
      ppuStack_568 = ppuStack_570;
      if (*(long *)(lStack_588 + 0x18) == 0) {
        puVar11 = &UNK_10b2095a8;
LAB_1005c1fa4:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar11);
LAB_1005c206c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005c2070);
        (*pcVar2)();
      }
      uVar7 = (**(code **)(*(long *)(lStack_588 + 0x20) + 0x18))
                        (*(long *)(lStack_588 + 0x18),&ppuStack_570,&UNK_10b2095d8);
      lVar13 = lStack_588;
      if ((uVar7 & 1) != 0) {
        plVar10 = (long *)(*(long *)(lVar3 + 0x10) + 0x10);
        if (*plVar10 == 1) {
          *plVar10 = in_xzr;
          plVar10 = (long *)*plVar16;
          if (plVar10 != (long *)0x0) {
            lVar3 = *plVar10;
            *plVar10 = lVar3 + -1;
            LORelease();
            if (lVar3 == 1) {
              DataMemoryBarrier(2,1);
              func_0x0001034c7ad4(plVar16);
            }
          }
          goto LAB_1005c1d4c;
        }
        puVar11 = &UNK_10b209590;
        goto LAB_1005c1fa4;
      }
      lVar13 = *(long *)(lVar3 + 0x18);
      if (lVar13 != 0) {
        puVar18 = *(undefined8 **)(lVar3 + 0x20);
        pcVar2 = (code *)*puVar18;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(lVar13);
        }
        if (puVar18[1] != 0) {
          _free(lVar13);
        }
      }
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10) = 2;
      lVar13 = *(long *)(lVar3 + 0x10);
      puVar18 = (undefined8 *)(lVar13 + 0x18);
      if (*(long *)(lVar13 + 0x18) == 0) {
        thunk_FUN_108854158(puVar18);
      }
      iVar5 = _pthread_mutex_lock();
      if (iVar5 != 0) {
        thunk_FUN_108a81ad4();
        goto LAB_1005c206c;
      }
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) {
        bVar4 = 0;
        cVar1 = *(char *)(lVar13 + 0x20);
      }
      else {
        bVar4 = FUN_107c05e34();
        bVar4 = bVar4 ^ 1;
        cVar1 = *(char *)(lVar13 + 0x20);
      }
      if (cVar1 != '\0') {
        puStack_6b8 = puVar18;
        bStack_6b0 = bVar4;
        FUN_107c05cb4(&UNK_108cc408f,0x2b,&puStack_6b8,&UNK_10b2350a0,&UNK_10b209560);
        goto LAB_1005c206c;
      }
      puVar14 = *(undefined8 **)(lVar13 + 0x28);
      *(undefined8 *)(lVar13 + 0x28) = 0x8000000000000000;
      if (puVar14 == (undefined8 *)0x8000000000000000) {
        FUN_107c05cb0(&UNK_10b209578);
        goto LAB_1005c206c;
      }
      lStack_670 = *(long *)(lVar13 + 0x38);
      puVar19 = *(uint **)(lVar13 + 0x30);
      lVar3 = *(long *)(lVar13 + 0x40);
      uStack_738 = 0;
      uStack_730 = 0;
      uStack_740 = 0;
      puVar20 = puVar19 + lStack_670 * 6;
      puStack_6b8 = (undefined8 *)0x0;
      uStack_6a0 = 0;
      ppuStack_678 = &puStack_750;
      uStack_668 = 0;
      puStack_750 = puVar14;
      puStack_748 = puVar19;
      puStack_680 = puVar20;
      while (puVar15 = puVar19, puVar19 != puVar20) {
        while (puVar19 = puVar15 + 6, (*puVar15 & 1) == 0) {
          puVar15 = puVar19;
          if (puVar19 == puVar20) goto LAB_1005c1e98;
        }
        puVar19 = puVar15 + 6;
        lVar3 = lVar3 + -1;
        if (*(long *)(puVar15 + 2) != 0) {
          puStack_688 = puVar19;
          lStack_660 = lVar3;
          (**(code **)(*(long *)(puVar15 + 2) + 8))(*(undefined8 *)(puVar15 + 4));
        }
      }
LAB_1005c1e98:
      puStack_688 = puVar20;
      lStack_660 = lVar3;
      FUN_100d1e218(&puStack_6b8);
      if ((((bVar4 & 1) == 0) &&
          ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
           0x7fffffffffffffff) != 0)) && (uVar7 = FUN_107c05e34(), (uVar7 & 1) == 0)) {
        *(undefined1 *)(lVar13 + 0x20) = 1;
      }
      _pthread_mutex_unlock(*puVar18);
      FUN_10074ea70(lStack_588);
      FUN_100e69294(&puStack_750);
    }
    FUN_100d979f8(plVar16);
    puStack_6b8 = (undefined8 *)0x8000000000000020;
  }
  puVar6[0xc] = uStack_5c8;
  puVar6[0xb] = lStack_5d0;
  puVar6[0xe] = uStack_5b8;
  puVar6[0xd] = uStack_5c0;
  puVar6[0x10] = uStack_5a8;
  puVar6[0xf] = uStack_5b0;
  puVar6[0x12] = uStack_598;
  puVar6[0x11] = uStack_5a0;
  puVar6[4] = uStack_608;
  puVar6[3] = uStack_610;
  puVar6[6] = puStack_5f8;
  puVar6[5] = uStack_600;
  puVar6[8] = ppuStack_5e8;
  puVar6[7] = puStack_5f0;
  puVar6[10] = uStack_5d8;
  puVar6[9] = lStack_5e0;
  *(undefined1 *)(plVar9 + 1) = 0;
  *puVar6 = puStack_6b8;
  uVar12 = 1;
  puVar6[2] = uStack_618;
  puVar6[1] = puStack_620;
LAB_1005c1d58:
  *(undefined1 *)((long)plVar9 + 9) = uVar12;
  return;
}

