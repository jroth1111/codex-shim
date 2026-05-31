
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10059fda8(void)

{
  undefined *puVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined1 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *puVar14;
  long lVar15;
  char *pcVar16;
  undefined8 *unaff_x24;
  undefined8 *puVar17;
  undefined1 *puVar18;
  long *unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 *in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined1 *puStack00000000000001e0;
  code *pcStack00000000000001e8;
  undefined8 *in_stack_000004c0;
  char *in_stack_000004c8;
  undefined8 *in_stack_000004d0;
  undefined8 *in_stack_000006d0;
  char *in_stack_000006d8;
  undefined8 *in_stack_000006e0;
  long in_stack_000006f0;
  undefined8 in_stack_000006f8;
  
  *(char **)(unaff_x29 + -0xf0) = s_failed_to_notify_parent_thread___108ac1ae7;
  *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x000006d0;
  pcStack00000000000001e8 = (code *)&stack0x00000430;
  puStack00000000000001e0 = (undefined1 *)0x1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100df5738(&stack0x000004c0);
  if ((*(long *)(unaff_x19 + 0x658) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x658) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x660));
  }
  *(undefined2 *)((long)unaff_x28 + 0x11) = 0;
  *(undefined1 *)((long)unaff_x28 + 0x13) = 0;
  if (*(long *)(unaff_x19 + 0x620) == 4) {
    uVar8 = *(ulong *)(unaff_x19 + 0x628);
joined_r0x0001005a085c:
    if (uVar8 != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x630));
    }
  }
  else if (*(long *)(unaff_x19 + 0x620) == 3) {
    uVar8 = *(ulong *)(unaff_x19 + 0x628) & 0x7fffffffffffffff;
    goto joined_r0x0001005a085c;
  }
  *in_stack_00000080 = 1;
  FUN_100d65ad8(in_stack_00000088);
  *(undefined1 *)(unaff_x28 + 10) = 0;
  *unaff_x21 = 1;
  *(undefined8 *)(unaff_x19 + 0x5d0) = *(undefined8 *)(unaff_x19 + 0x1e8);
  *(long *)(unaff_x19 + 0x5d8) = unaff_x19 + 0x3d0;
  puVar18 = (undefined1 *)(unaff_x19 + 0x5e1);
  *(undefined1 *)(unaff_x19 + 0x5e1) = 0;
  *(undefined1 *)(unaff_x19 + 0x5e0) = 0;
  *(undefined8 *)(unaff_x19 + 0x5b0) = *(undefined8 *)(unaff_x19 + 0x1e8);
  __ZN10codex_core7session4turn23realtime_text_for_event17h28836209fba9a31eE(&stack0x000004c0);
  if (in_stack_000004c0 != (undefined8 *)0x8000000000000000) {
    *(undefined1 *)(unaff_x19 + 0x5e0) = 1;
    *(undefined8 **)(unaff_x19 + 0x5c8) = in_stack_000004d0;
    *(char **)(unaff_x19 + 0x5c0) = in_stack_000004c8;
    *(undefined8 **)(unaff_x19 + 0x5b8) = in_stack_000004c0;
    *(long *)(unaff_x19 + 0x5e8) = *(long *)(*(long *)(unaff_x19 + 0x5b0) + 0x6e0) + 0x10;
    *(undefined1 *)(unaff_x19 + 0x668) = 0;
    puVar14 = (undefined8 *)(unaff_x19 + 0x5e8);
    bVar3 = FUN_10052acf0(puVar14);
    if (bVar3 == 2) {
      uVar9 = 3;
LAB_1005a0fc0:
      *puVar18 = uVar9;
      uVar7 = 1;
      uVar9 = 5;
      goto LAB_1005a2ce4;
    }
    if ((((*(char *)(unaff_x19 + 0x668) == '\x03') && (*(char *)(unaff_x19 + 0x660) == '\x03')) &&
        (*(char *)(unaff_x19 + 0x658) == '\x03')) && (*(char *)(unaff_x19 + 0x610) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x618);
      if (*(long *)(unaff_x19 + 0x620) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x620) + 0x18))(*(undefined8 *)(unaff_x19 + 0x628));
      }
    }
    if ((bVar3 & 1) == 0) {
LAB_1005a0ca4:
      if (*(long *)(unaff_x19 + 0x5b8) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x5c0));
      }
    }
    else {
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x5b0) + 0x6e0) + 0x10;
      *(long *)(unaff_x19 + 0x5e8) = lVar11;
      plVar10 = (long *)(unaff_x19 + 0x5f0);
      *(undefined1 *)(unaff_x19 + 0x5f0) = 0;
      *(long *)(unaff_x19 + 0x5f8) = lVar11;
      *(undefined1 *)(unaff_x19 + 0x668) = 0;
      auVar21 = FUN_100fd3e50(unaff_x19 + 0x5f8);
      uVar7 = auVar21._8_8_;
      pcVar16 = auVar21._0_8_;
      if (pcVar16 == (char *)0x0) {
        uVar9 = 3;
LAB_1005a0b1c:
        *(undefined1 *)plVar10 = uVar9;
        uVar9 = 4;
        goto LAB_1005a0fc0;
      }
      if (((*(char *)(unaff_x19 + 0x668) == '\x03') && (*(char *)(unaff_x19 + 0x660) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x618) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x620);
        uVar7 = extraout_x1;
        if (*(long *)(unaff_x19 + 0x628) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x628) + 0x18))(*(undefined8 *)(unaff_x19 + 0x630));
          uVar7 = extraout_x1_00;
        }
      }
      if (pcVar16[0x70] == '\x02') {
        cVar4 = '\x02';
        plVar12 = plVar10;
      }
      else {
        unaff_x26 = *(long **)(pcVar16 + 0x50);
        lVar11 = unaff_x26[0x54];
        unaff_x26[0x54] = lVar11 + 1;
        if (lVar11 < 0) goto LAB_1005a1ad4;
        lVar11 = *unaff_x26;
        *unaff_x26 = lVar11 + 1;
        if (lVar11 < 0) goto LAB_1005a2d40;
        plVar12 = *(long **)(pcVar16 + 0x58);
        lVar11 = *plVar12;
        *plVar12 = lVar11 + 1;
        if (lVar11 < 0) goto LAB_1005a2d40;
        unaff_x28 = *(long **)(pcVar16 + 0x60);
        lVar11 = *unaff_x28;
        *unaff_x28 = lVar11 + 1;
        if (lVar11 < 0) goto LAB_1005a2d40;
        cVar4 = pcVar16[0x68];
      }
      if (*pcVar16 == '\0') {
        *pcVar16 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar16,uVar7,1000000000)
        ;
      }
      FUN_1060fa678(pcVar16,1,pcVar16);
      if (cVar4 == '\x02') {
        *(undefined1 *)plVar10 = 1;
        unaff_x24 = (undefined8 *)0x8000000000000000;
      }
      else {
        *(long **)(unaff_x19 + 0x670) = unaff_x26;
        *(long **)(unaff_x19 + 0x678) = plVar12;
        *(long **)(unaff_x19 + 0x680) = unaff_x28;
        *(char *)(unaff_x19 + 0x688) = cVar4;
        *(long **)(unaff_x19 + 0x5f8) = plVar12 + 2;
        *(undefined1 *)(unaff_x19 + 0x668) = 0;
        auVar21 = FUN_100fd3e50(unaff_x19 + 0x5f8);
        uVar7 = auVar21._8_8_;
        pcVar16 = auVar21._0_8_;
        if (pcVar16 == (char *)0x0) {
          uVar9 = 4;
          goto LAB_1005a0b1c;
        }
        if (((*(char *)(unaff_x19 + 0x668) == '\x03') && (*(char *)(unaff_x19 + 0x660) == '\x03'))
           && (*(char *)(unaff_x19 + 0x618) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (unaff_x19 + 0x620);
          uVar7 = extraout_x1_01;
          if (*(long *)(unaff_x19 + 0x628) != 0) {
            (**(code **)(*(long *)(unaff_x19 + 0x628) + 0x18))(*(undefined8 *)(unaff_x19 + 0x630));
            uVar7 = extraout_x1_02;
          }
        }
        if (*(long *)(pcVar16 + 0x28) == -0x8000000000000000) {
          unaff_x24 = (undefined8 *)0x8000000000000000;
        }
        else {
          func_0x000100025ae8(&stack0x000004c0);
          uVar7 = extraout_x1_03;
          unaff_x24 = in_stack_000004c0;
        }
        if (*pcVar16 == '\0') {
          *pcVar16 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar16,uVar7,1000000000);
        }
        FUN_1060fa678(pcVar16,1,pcVar16);
        FUN_100e3da24(unaff_x19 + 0x670);
        *(undefined1 *)plVar10 = 1;
        pcVar16 = in_stack_000004c8;
        in_stack_000004c0 = unaff_x24;
        if (unaff_x24 == (undefined8 *)0x8000000000000001) {
          uVar9 = 4;
          goto LAB_1005a0fc0;
        }
      }
      FUN_100d09648(puVar14);
      if (unaff_x24 == (undefined8 *)0x8000000000000000) goto LAB_1005a0ca4;
      if (unaff_x24 != (undefined8 *)0x0) {
        _free(pcVar16);
      }
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x5b0) + 0x6e0) + 0x10;
      *(undefined1 *)(unaff_x19 + 0x5e0) = 0;
      *(undefined8 *)(unaff_x19 + 0x5f8) = *(undefined8 *)(unaff_x19 + 0x5c8);
      *(undefined8 *)(unaff_x19 + 0x5f0) = *(undefined8 *)(unaff_x19 + 0x5c0);
      *puVar14 = *(undefined8 *)(unaff_x19 + 0x5b8);
      *(long *)(unaff_x19 + 0x600) = lVar11;
      unaff_x26 = (long *)(unaff_x19 + 0x658);
      *(undefined1 *)(unaff_x19 + 0x658) = 0;
      puVar14 = (undefined8 *)(unaff_x19 + 0x5e8);
      *(undefined1 *)(unaff_x19 + 0x65c) = 0;
      *(undefined2 *)(unaff_x19 + 0x65a) = 0;
      *(undefined1 *)(unaff_x19 + 0x659) = 1;
      *(undefined8 *)(unaff_x19 + 0x610) = *(undefined8 *)(unaff_x19 + 0x5f0);
      *(undefined8 *)(unaff_x19 + 0x608) = *puVar14;
      *(undefined8 *)(unaff_x19 + 0x618) = *(undefined8 *)(unaff_x19 + 0x5f8);
      *(long *)(unaff_x19 + 0x660) = lVar11;
      *(undefined1 *)(unaff_x19 + 0x6d0) = 0;
      unaff_x24 = (undefined8 *)FUN_100fd3e50(unaff_x19 + 0x660);
      if (unaff_x24 == (undefined8 *)0x0) {
        uVar9 = 3;
        goto LAB_1005a0fb8;
      }
      if (((*(char *)(unaff_x19 + 0x6d0) == '\x03') && (*(char *)(unaff_x19 + 0x6c8) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x680) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x688);
        if (*(long *)(unaff_x19 + 0x690) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x690) + 0x18))(*(undefined8 *)(unaff_x19 + 0x698));
        }
      }
      if (*(char *)(unaff_x24 + 0xe) != '\x02') {
        plVar10 = (long *)unaff_x24[10];
        lVar11 = plVar10[0x54];
        plVar10[0x54] = lVar11 + 1;
        if (lVar11 < 0) goto LAB_1005a1ad4;
        lVar11 = *plVar10;
        *plVar10 = lVar11 + 1;
        if (lVar11 < 0) goto LAB_1005a2d40;
        plVar12 = (long *)unaff_x24[0xb];
        lVar11 = *plVar12;
        *plVar12 = lVar11 + 1;
        if (lVar11 < 0) goto LAB_1005a2d40;
        plVar13 = (long *)unaff_x24[0xc];
        lVar11 = *plVar13;
        *plVar13 = lVar11 + 1;
        if (lVar11 < 0) goto LAB_1005a2d40;
        uVar9 = *(undefined1 *)(unaff_x24 + 0xd);
        *(long **)(unaff_x19 + 0x620) = plVar10;
        *(long **)(unaff_x19 + 0x628) = plVar12;
        *(long **)(unaff_x19 + 0x630) = plVar13;
        *(undefined1 *)(unaff_x19 + 0x638) = uVar9;
        __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(unaff_x24,1);
        *(long *)(unaff_x19 + 0x660) = *(long *)(unaff_x19 + 0x628) + 0x10;
        *(undefined1 *)(unaff_x19 + 0x6d0) = 0;
        puVar6 = (undefined8 *)FUN_100fd3e50((undefined8 *)(unaff_x19 + 0x660));
        if (puVar6 == (undefined8 *)0x0) {
          uVar9 = 4;
        }
        else {
          if (((*(char *)(unaff_x19 + 0x6d0) == '\x03') && (*(char *)(unaff_x19 + 0x6c8) == '\x03'))
             && (*(char *)(unaff_x19 + 0x680) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x19 + 0x688);
            if (*(long *)(unaff_x19 + 0x690) != 0) {
              (**(code **)(*(long *)(unaff_x19 + 0x690) + 0x18))(*(undefined8 *)(unaff_x19 + 0x698))
              ;
            }
          }
          if ((puVar6[5] == -0x8000000000000000) ||
             (func_0x000100025ae8(&stack0x000006d0),
             in_stack_000006d0 == (undefined8 *)0x8000000000000000)) {
            __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(puVar6,1);
            puVar17 = (undefined8 *)0x8000000000000020;
LAB_1005a1028:
            FUN_100e3da24(unaff_x19 + 0x620);
            goto LAB_1005a1030;
          }
          *(undefined1 *)(unaff_x19 + 0x65b) = 1;
          *(char **)(unaff_x19 + 0x668) = in_stack_000006d8;
          *(undefined8 *)(unaff_x19 + 0x660) = in_stack_000006d0;
          *(undefined8 **)(unaff_x19 + 0x670) = in_stack_000006e0;
          __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(puVar6,1);
          *(undefined1 *)(unaff_x19 + 0x659) = 0;
          in_stack_000004c8 = *(char **)(unaff_x19 + 0x610);
          in_stack_000004c0 = *(undefined8 **)(unaff_x19 + 0x608);
          in_stack_000004d0 = *(undefined8 **)(unaff_x19 + 0x618);
          __ZN10codex_core21realtime_conversation20prefix_realtime_text17h258f76f3bb635982E
                    (unaff_x19 + 0x640,&stack0x000006d0,&UNK_108ca3361,10,
                     *(undefined1 *)(unaff_x19 + 0x638));
          *(undefined1 *)(unaff_x19 + 0x65a) = 1;
          func_0x000100025ae8(&stack0x000006d0,unaff_x19 + 0x640);
          *(undefined1 *)(unaff_x19 + 0x65c) = 1;
          *(undefined8 **)(unaff_x19 + 0x688) = in_stack_000004d0;
          *(char **)(unaff_x19 + 0x680) = in_stack_000004c8;
          *(undefined8 **)(unaff_x19 + 0x678) = in_stack_000004c0;
          *(long *)(unaff_x19 + 0x690) = *(long *)(unaff_x19 + 0x630) + 0x10;
          *(undefined1 *)(unaff_x19 + 0x700) = 0;
          puVar6 = (undefined8 *)FUN_100fd3e50(unaff_x19 + 0x690);
          if (puVar6 == (undefined8 *)0x0) {
            uVar9 = 5;
          }
          else {
            if (((*(char *)(unaff_x19 + 0x700) == '\x03') &&
                (*(char *)(unaff_x19 + 0x6f8) == '\x03')) &&
               (*(char *)(unaff_x19 + 0x6b0) == '\x04')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (unaff_x19 + 0x6b8);
              if (*(long *)(unaff_x19 + 0x6c0) != 0) {
                (**(code **)(*(long *)(unaff_x19 + 0x6c0) + 0x18))
                          (*(undefined8 *)(unaff_x19 + 0x6c8));
              }
            }
            lVar11 = puVar6[5];
            if ((lVar11 != -0x8000000000000000) && (lVar11 != 0)) {
              _free(puVar6[6]);
            }
            uVar7 = *(undefined8 *)(unaff_x19 + 0x680);
            lVar11 = *(long *)(unaff_x19 + 0x678);
            puVar6[7] = *(undefined8 *)(unaff_x19 + 0x688);
            puVar6[6] = uVar7;
            puVar6[5] = lVar11;
            *(undefined1 *)(unaff_x19 + 0x65c) = 0;
            __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(puVar6,1);
            pcStack00000000000001e8 = *(code **)(unaff_x19 + 0x668);
            puStack00000000000001e0 = *(undefined1 **)(unaff_x19 + 0x660);
            uVar7 = *(undefined8 *)(unaff_x19 + 0x670);
            *(undefined2 *)(unaff_x19 + 0x65a) = 0;
            *(undefined8 *)(unaff_x19 + 0x660) = 0;
            *(code **)(unaff_x19 + 0x670) = pcStack00000000000001e8;
            *(undefined1 **)(unaff_x19 + 0x668) = puStack00000000000001e0;
            *(undefined8 *)(unaff_x19 + 0x678) = uVar7;
            *(undefined8 *)(unaff_x19 + 0x688) = *(undefined8 *)(unaff_x19 + 0x648);
            *(undefined8 *)(unaff_x19 + 0x680) = *(undefined8 *)(unaff_x19 + 0x640);
            *(undefined8 *)(unaff_x19 + 0x690) = *(undefined8 *)(unaff_x19 + 0x650);
            *(long *)(unaff_x19 + 0x698) = unaff_x19 + 0x620;
            *(undefined8 *)(unaff_x19 + 0x6a0) = 0;
            FUN_1011c463c(&stack0x000006d0,unaff_x19 + 0x660,*unaff_x20);
            if (in_stack_000004c0 != (undefined8 *)0x3) {
              FUN_100e7c8a8(unaff_x19 + 0x660);
              in_stack_000006d0 = in_stack_000004c0;
              in_stack_000006d8 = in_stack_000004c8;
              in_stack_000006e0 = in_stack_000004d0;
              if (in_stack_000004c0 != (undefined8 *)0x2) {
                puVar6 = (undefined8 *)_malloc(0x1b);
                if (puVar6 == (undefined8 *)0x0) {
                  FUN_107c03c64(1,0x1b);
                  goto LAB_1005a2d40;
                }
                puVar6[1] = 0x207369206e6f6974;
                *puVar6 = 0x61737265766e6f63;
                *(undefined8 *)((long)puVar6 + 0x13) = 0x676e696e6e757220;
                *(undefined8 *)((long)puVar6 + 0xb) = 0x746f6e207369206e;
                if (in_stack_000004c8 != (char *)0x0) {
                  _free(in_stack_000004d0);
                }
                if (in_stack_000006f0 != 0) {
                  _free(in_stack_000006f8);
                }
                *(undefined2 *)(unaff_x19 + 0x65a) = 0;
                puVar17 = (undefined8 *)0x800000000000000b;
                goto LAB_1005a1028;
              }
              *(undefined2 *)(unaff_x19 + 0x65a) = 0;
              FUN_100e3da24(unaff_x19 + 0x620);
              puVar17 = (undefined8 *)0x8000000000000020;
              *(undefined1 *)(unaff_x19 + 0x659) = 0;
              goto LAB_1005a104c;
            }
            uVar9 = 6;
          }
        }
LAB_1005a0fb8:
        *(undefined1 *)unaff_x26 = uVar9;
        uVar9 = 5;
        goto LAB_1005a0fc0;
      }
      puVar6 = (undefined8 *)_malloc(0x1b);
      if (puVar6 == (undefined8 *)0x0) {
        FUN_107c03c64(1,0x1b);
        goto LAB_1005a2d40;
      }
      puVar6[1] = 0x207369206e6f6974;
      *puVar6 = 0x61737265766e6f63;
      *(undefined8 *)((long)puVar6 + 0x13) = 0x676e696e6e757220;
      *(undefined8 *)((long)puVar6 + 0xb) = 0x746f6e207369206e;
      __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(unaff_x24,1);
      puVar17 = (undefined8 *)0x800000000000000b;
LAB_1005a1030:
      if (((*(byte *)(unaff_x19 + 0x659) & 1) != 0) && (*(long *)(unaff_x19 + 0x608) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x610));
      }
      *(undefined1 *)(unaff_x19 + 0x659) = 0;
LAB_1005a104c:
      *(undefined1 *)unaff_x26 = 1;
      FUN_100cf77cc(puVar14);
      unaff_x24 = puVar17;
      if (puVar17 != (undefined8 *)0x8000000000000020) {
        in_stack_000004c8 = (char *)0x1b;
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
           (((bRam000000010b62ad68 - 1 < 2 ||
             ((bRam000000010b62ad68 != 0 &&
              (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35maybe_mirror_event_text_to_realtime28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17292b5b8d289848E
                                 ), cVar4 != '\0')))) &&
            (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35maybe_mirror_event_text_to_realtime28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17292b5b8d289848E
                               ), (uVar8 & 1) != 0)))) {
          puStack00000000000001e0 = &stack0x000004c0;
          pcStack00000000000001e8 =
               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
          ;
          in_stack_000006d8 = &stack0x00000320;
          in_stack_000006d0 = (undefined8 *)0x1;
          in_stack_000006e0 = (undefined8 *)0x1;
          FUN_1005b3b90(&stack0x000006d0);
        }
        else {
          lVar11 = 
          ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35maybe_mirror_event_text_to_realtime28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17292b5b8d289848E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar7 = *(undefined8 *)
                     (
                     ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35maybe_mirror_event_text_to_realtime28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17292b5b8d289848E
                     + 0x20);
            uVar19 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35maybe_mirror_event_text_to_realtime28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17292b5b8d289848E
                      + 0x28);
            *(undefined8 *)(unaff_x29 + -0xf0) = 4;
            *(undefined8 *)(unaff_x29 + -0xe8) = uVar7;
            *(undefined8 *)(unaff_x29 + -0xe0) = uVar19;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            unaff_x24 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              unaff_x24 = (undefined8 *)&UNK_109adfc03;
            }
            iVar5 = (**(code **)(puVar1 + 0x18))(unaff_x24,unaff_x29 + -0xf0);
            if (iVar5 != 0) {
              puStack00000000000001e0 = &stack0x000004c0;
              pcStack00000000000001e8 =
                   __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
              ;
              in_stack_000006d8 = &stack0x00000320;
              in_stack_000006d0 = (undefined8 *)0x1;
              in_stack_000006e0 = (undefined8 *)0x1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar11,unaff_x24,puVar1,unaff_x29 + -0xf0,&stack0x000006d0);
            }
          }
        }
        FUN_100df5738(&stack0x000004c0);
        in_stack_000004c0 = puVar17;
        in_stack_000004d0 = puVar6;
      }
    }
    *(undefined1 *)(unaff_x19 + 0x5e0) = 0;
  }
  *puVar18 = 1;
  FUN_100d68960(unaff_x19 + 0x5b0);
  lVar11 = *(long *)(unaff_x19 + 0x1e8);
  *(long *)(unaff_x19 + 0x5b0) = lVar11;
  *(int **)(unaff_x19 + 0x5b8) = (int *)(unaff_x19 + 0x3d0);
  puVar18 = (undefined1 *)(unaff_x19 + 0x5c8);
  *(undefined1 *)(unaff_x19 + 0x5c8) = 0;
  *(long *)(unaff_x19 + 0x5c0) = lVar11;
  if (*(int *)(unaff_x19 + 0x3d0) == 0xd) {
    lVar11 = *(long *)(lVar11 + 0x6e0) + 0x10;
    *(long *)(unaff_x19 + 0x610) = lVar11;
    unaff_x26 = (long *)(unaff_x19 + 0x61a);
    *(undefined1 *)(unaff_x19 + 0x61a) = 0;
    puVar14 = (undefined8 *)(unaff_x19 + 0x5d0);
    *(undefined2 *)(unaff_x19 + 0x618) = 0;
    *(long *)(unaff_x19 + 0x620) = lVar11;
    *(undefined1 *)(unaff_x19 + 0x690) = 0;
    auVar21 = FUN_100fd3e50(unaff_x19 + 0x620);
    uVar7 = auVar21._8_8_;
    pcVar16 = auVar21._0_8_;
    if (pcVar16 != (char *)0x0) {
      if (((*(char *)(unaff_x19 + 0x690) == '\x03') && (*(char *)(unaff_x19 + 0x688) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x640) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x648);
        uVar7 = extraout_x1_04;
        if (*(long *)(unaff_x19 + 0x650) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x650) + 0x18))(*(undefined8 *)(unaff_x19 + 0x658));
          uVar7 = extraout_x1_05;
        }
      }
      if (pcVar16[0x70] != '\x02') {
        plVar10 = *(long **)(pcVar16 + 0x50);
        lVar11 = plVar10[0x54];
        plVar10[0x54] = lVar11 + 1;
        if (lVar11 < 0) goto LAB_1005a1ad4;
        lVar11 = *plVar10;
        *plVar10 = lVar11 + 1;
        if (-1 < lVar11) {
          plVar12 = *(long **)(pcVar16 + 0x58);
          lVar11 = *plVar12;
          *plVar12 = lVar11 + 1;
          if (-1 < lVar11) {
            plVar13 = *(long **)(pcVar16 + 0x60);
            lVar11 = *plVar13;
            *plVar13 = lVar11 + 1;
            if (-1 < lVar11) {
              cVar4 = pcVar16[0x68];
              *(long **)(unaff_x19 + 0x5d0) = plVar10;
              *(long **)(unaff_x19 + 0x5d8) = plVar12;
              *(long **)(unaff_x19 + 0x5e0) = plVar13;
              goto LAB_1005a1350;
            }
          }
        }
LAB_1005a2d40:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005a2d44);
        (*pcVar2)();
      }
      cVar4 = '\x02';
LAB_1005a1350:
      *(char *)(unaff_x19 + 0x5e8) = cVar4;
      if (*pcVar16 == '\0') {
        *pcVar16 = '\x01';
        goto LAB_1005a1368;
      }
      do {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar16,uVar7,1000000000)
        ;
LAB_1005a1368:
        FUN_1060fa678(pcVar16,1,pcVar16);
        if (*(char *)(unaff_x19 + 0x5e8) == '\x02') {
LAB_1005a1520:
          puVar6 = (undefined8 *)0x8000000000000020;
        }
        else {
          uVar19 = puVar14[1];
          uVar7 = *puVar14;
          uVar20 = puVar14[2];
          *(undefined8 *)(unaff_x19 + 0x608) = puVar14[3];
          *(undefined8 *)(unaff_x19 + 0x600) = uVar20;
          *(undefined8 *)(unaff_x19 + 0x5f8) = uVar19;
          *(undefined8 *)(unaff_x19 + 0x5f0) = uVar7;
          if ((*(byte *)(unaff_x19 + 0x608) & 1) == 0) {
LAB_1005a1518:
            FUN_100e3da24(unaff_x19 + 0x5f0);
            goto LAB_1005a1520;
          }
          *(long *)(unaff_x19 + 0x620) = *(long *)(unaff_x19 + 0x5f8) + 0x10;
          *(undefined1 *)(unaff_x19 + 0x690) = 0;
          unaff_x24 = (undefined8 *)(unaff_x19 + 0x620);
          lVar11 = FUN_100fd3e50(unaff_x24);
          if (lVar11 == 0) {
            uVar9 = 4;
            goto LAB_1005a12f4;
          }
          if (((*(char *)(unaff_x19 + 0x690) == '\x03') && (*(char *)(unaff_x19 + 0x688) == '\x03'))
             && (*(char *)(unaff_x19 + 0x640) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x19 + 0x648);
            if (*(long *)(unaff_x19 + 0x650) != 0) {
              (**(code **)(*(long *)(unaff_x19 + 0x650) + 0x18))(*(undefined8 *)(unaff_x19 + 0x658))
              ;
            }
          }
          if ((*(long *)(lVar11 + 0x28) == -0x8000000000000000) ||
             (func_0x000100025ae8(&stack0x000006d0),
             in_stack_000006d0 == (undefined8 *)0x8000000000000000)) {
            __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar11,1);
            goto LAB_1005a1518;
          }
          *(undefined1 *)(unaff_x19 + 0x618) = 1;
          *(char **)(unaff_x19 + 0x628) = in_stack_000006d8;
          *unaff_x24 = in_stack_000006d0;
          *(undefined8 **)(unaff_x19 + 0x630) = in_stack_000006e0;
          __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar11,1);
          *(long *)(unaff_x19 + 0x638) = *(long *)(unaff_x19 + 0x600) + 0x10;
          *(undefined1 *)(unaff_x19 + 0x6a8) = 0;
          unaff_x24 = (undefined8 *)FUN_100fd3e50(unaff_x19 + 0x638);
          if (unaff_x24 == (undefined8 *)0x0) {
            uVar9 = 5;
            goto LAB_1005a12f4;
          }
          if (((*(char *)(unaff_x19 + 0x6a8) == '\x03') && (*(char *)(unaff_x19 + 0x6a0) == '\x03'))
             && (*(char *)(unaff_x19 + 0x658) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x19 + 0x660);
            if (*(long *)(unaff_x19 + 0x668) != 0) {
              (**(code **)(*(long *)(unaff_x19 + 0x668) + 0x18))(*(undefined8 *)(unaff_x19 + 0x670))
              ;
            }
          }
          if ((unaff_x24[5] == -0x8000000000000000) ||
             (func_0x000100025ae8(&stack0x000006d0),
             in_stack_000006d0 == (undefined8 *)0x8000000000000000)) {
            __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(unaff_x24,1);
            if (*(long *)(unaff_x19 + 0x620) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x628));
            }
            *(undefined1 *)(unaff_x19 + 0x618) = 0;
            goto LAB_1005a1518;
          }
          *(undefined1 *)(unaff_x19 + 0x619) = 1;
          __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(unaff_x24,1);
          *(undefined2 *)(unaff_x19 + 0x618) = 0;
          pcStack00000000000001e8 = *(code **)(unaff_x19 + 0x628);
          puStack00000000000001e0 = *(undefined1 **)(unaff_x19 + 0x620);
          uVar7 = *(undefined8 *)(unaff_x19 + 0x630);
          *(undefined8 *)(unaff_x19 + 0x620) = 1;
          *(code **)(unaff_x19 + 0x630) = pcStack00000000000001e8;
          *(undefined1 **)(unaff_x19 + 0x628) = puStack00000000000001e0;
          *(undefined8 *)(unaff_x19 + 0x638) = uVar7;
          *(undefined8 **)(unaff_x19 + 0x640) = in_stack_000006d0;
          *(char **)(unaff_x19 + 0x648) = in_stack_000006d8;
          *(undefined8 **)(unaff_x19 + 0x650) = in_stack_000006e0;
          *(long *)(unaff_x19 + 0x658) = unaff_x19 + 0x5f0;
          *(undefined8 *)(unaff_x19 + 0x660) = 0;
          FUN_1011c463c(&stack0x000006d0,unaff_x19 + 0x620,*unaff_x20);
          if (in_stack_000006d0 == (undefined8 *)0x3) {
            uVar9 = 6;
            goto LAB_1005a12f4;
          }
          FUN_100e7c8a8(unaff_x19 + 0x620);
          puVar6 = (undefined8 *)0x8000000000000020;
          if (in_stack_000006d0 != (undefined8 *)0x2) {
            unaff_x24 = (undefined8 *)_malloc(0x1b);
            if (unaff_x24 == (undefined8 *)0x0) {
              FUN_107c03c64(1,0x1b);
              goto LAB_1005a2d40;
            }
            unaff_x24[1] = 0x207369206e6f6974;
            *unaff_x24 = 0x61737265766e6f63;
            *(undefined8 *)((long)unaff_x24 + 0x13) = 0x676e696e6e757220;
            *(undefined8 *)((long)unaff_x24 + 0xb) = 0x746f6e207369206e;
            if (in_stack_000006d8 != (char *)0x0) {
              _free(in_stack_000006e0);
            }
            if (in_stack_000006f0 != 0) {
              _free(in_stack_000006f8);
            }
            puVar6 = (undefined8 *)0x800000000000000b;
          }
          *(undefined2 *)(unaff_x19 + 0x618) = 0;
          FUN_100e3da24(unaff_x19 + 0x5f0);
          in_stack_000004c0 = in_stack_000006d0;
          in_stack_000004c8 = in_stack_000006d8;
          in_stack_000004d0 = in_stack_000006e0;
        }
        *(undefined1 *)unaff_x26 = 1;
        FUN_100d05bf8(puVar14);
        if (puVar6 != (undefined8 *)0x8000000000000020) {
          in_stack_000004c8 = (char *)0x1b;
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
              ((bRam000000010b62adf8 - 1 < 2 ||
               ((bRam000000010b62adf8 != 0 &&
                (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
                                   ), cVar4 != '\0')))))) &&
             (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
                                ), (uVar8 & 1) != 0)) {
            puStack00000000000001e0 = &stack0x000004c0;
            pcStack00000000000001e8 =
                 __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
            ;
            in_stack_000006d8 = &stack0x00000320;
            in_stack_000006d0 = (undefined8 *)0x1;
            in_stack_000006e0 = (undefined8 *)0x1;
            FUN_1005b4b40(&stack0x000006d0);
          }
          else {
            lVar11 = 
            ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              unaff_x26 = (long *)&
                                  __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
              ;
              uVar7 = *(undefined8 *)
                       (
                       ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
                       + 0x20);
              uVar19 = *(undefined8 *)
                        (
                        ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
                        + 0x28);
              *(undefined8 *)(unaff_x29 + -0xf0) = 4;
              *(undefined8 *)(unaff_x29 + -0xe8) = uVar7;
              *(undefined8 *)(unaff_x29 + -0xe0) = uVar19;
              puVar1 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_10b3c24c8;
              }
              puVar14 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar14 = (undefined8 *)&UNK_109adfc03;
              }
              iVar5 = (**(code **)(puVar1 + 0x18))(puVar14,unaff_x29 + -0xf0);
              if (iVar5 != 0) {
                in_stack_000006d8 = &stack0x00000290;
                in_stack_000006d0 = (undefined8 *)0x1;
                in_stack_000006e0 = (undefined8 *)0x1;
                pcStack00000000000001e8 = *(code **)(unaff_x29 + -0xe8);
                puStack00000000000001e0 = *(undefined1 **)(unaff_x29 + -0xf0);
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar11,puVar14,puVar1,&stack0x000001e0,&stack0x000006d0);
              }
            }
          }
          FUN_100df5738(&stack0x000004c0);
          in_stack_000004c0 = puVar6;
          in_stack_000004d0 = unaff_x24;
        }
        *(long *)(unaff_x19 + 0x610) = *(long *)(*(long *)(unaff_x19 + 0x5c0) + 0x6e0) + 0x10;
        unaff_x24 = (undefined8 *)(unaff_x19 + 0x61a);
        *(undefined1 *)(unaff_x19 + 0x61a) = 0;
        puVar14 = (undefined8 *)(unaff_x19 + 0x5d0);
        *(undefined2 *)(unaff_x19 + 0x618) = 0;
        *(undefined8 *)(unaff_x19 + 0x620) = *(undefined8 *)(unaff_x19 + 0x610);
        *(undefined1 *)(unaff_x19 + 0x690) = 0;
        auVar21 = FUN_100fd3e50(unaff_x19 + 0x620);
        uVar7 = auVar21._8_8_;
        pcVar16 = auVar21._0_8_;
        if (pcVar16 == (char *)0x0) {
          uVar9 = 3;
          goto LAB_1005a1a54;
        }
        if (((*(char *)(unaff_x19 + 0x690) == '\x03') && (*(char *)(unaff_x19 + 0x688) == '\x03'))
           && (*(char *)(unaff_x19 + 0x640) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (unaff_x19 + 0x648);
          uVar7 = extraout_x1_06;
          if (*(long *)(unaff_x19 + 0x650) != 0) {
            (**(code **)(*(long *)(unaff_x19 + 0x650) + 0x18))(*(undefined8 *)(unaff_x19 + 0x658));
            uVar7 = extraout_x1_07;
          }
        }
        if (pcVar16[0x70] == '\x02') {
          cVar4 = '\x02';
          goto LAB_1005a1800;
        }
        plVar10 = *(long **)(pcVar16 + 0x50);
        lVar11 = plVar10[0x54];
        plVar10[0x54] = lVar11 + 1;
        if (-1 < lVar11) goto code_r0x0001005a17c4;
LAB_1005a1ad4:
        __ZN3std7process5abort17hdc01e45e25b715e8E();
        uVar7 = extraout_x1_14;
      } while( true );
    }
    uVar9 = 3;
LAB_1005a12f4:
    *(undefined1 *)unaff_x26 = uVar9;
    uVar9 = 3;
LAB_1005a1a5c:
    *puVar18 = uVar9;
    uVar7 = 1;
    uVar9 = 6;
    goto LAB_1005a2ce4;
  }
LAB_1005a19f0:
  *(undefined1 *)(unaff_x19 + 0x5c8) = 1;
  __ZN95__LT_codex_protocol__protocol__EventMsg_u20_as_u20_codex_protocol__protocol__HasLegacyEvent_GT_16as_legacy_events17h9ae13226bb09f842E
            (&stack0x000004c0,unaff_x19 + 0x3d0,
             *(undefined1 *)(*(long *)(unaff_x19 + 0x1e8) + 0x610));
  *(char **)(unaff_x19 + 0x788) = in_stack_000004c8;
  *(char **)(unaff_x19 + 0x790) = in_stack_000004c8;
  *(undefined8 **)(unaff_x19 + 0x798) = in_stack_000004c0;
  *(char **)(unaff_x19 + 0x7a0) = in_stack_000004c8 + (long)in_stack_000004d0 * 0x1d8;
  if (in_stack_000004c8 != in_stack_000004c8 + (long)in_stack_000004d0 * 0x1d8) {
    do {
      *(char **)(unaff_x19 + 0x790) = in_stack_000004c8 + 0x1d8;
      _memcpy(unaff_x19 + 0x5b0,in_stack_000004c8,0x1d8);
      if (*(int *)(unaff_x19 + 0x5b0) == 0x4a) goto LAB_1005a2d08;
      lVar11 = 1;
      *(undefined1 *)(unaff_x19 + 0x5a9) = 1;
      _memcpy(&stack0x000004c0,unaff_x19 + 0x5b0,0x1d8);
      uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1f0) + 0x238);
      lVar15 = *(long *)(*(long *)(unaff_x19 + 0x1f0) + 0x240);
      if ((lVar15 != 0) && (lVar11 = _malloc(lVar15), lVar11 == 0)) {
        FUN_107c03c64(1,lVar15);
        goto LAB_1005a2d40;
      }
      _memcpy(lVar11,uVar7,lVar15);
      *(undefined1 *)(unaff_x19 + 0x5a9) = 0;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x1e8);
      *(long *)(unaff_x19 + 0x7a8) = lVar15;
      *(long *)(unaff_x19 + 0x7b0) = lVar11;
      *(long *)(unaff_x19 + 0x7b8) = lVar15;
      _memcpy(unaff_x19 + 0x7c0,&stack0x000004c0,0x1d8);
      *(undefined8 *)(unaff_x19 + 0x998) = uVar7;
      *(undefined1 *)(unaff_x19 + 0xbb0) = 0;
      iVar5 = FUN_1005a4060(unaff_x19 + 0x7a8);
      if (iVar5 != 0) {
        uVar7 = 1;
        uVar9 = 7;
        goto LAB_1005a2ce4;
      }
      FUN_100d28c3c(unaff_x19 + 0x7a8);
      *(undefined1 *)(unaff_x19 + 0x5a9) = 0;
      in_stack_000004c8 = *(char **)(unaff_x19 + 0x790);
    } while (in_stack_000004c8 != *(char **)(unaff_x19 + 0x7a0));
  }
  *(undefined4 *)(unaff_x19 + 0x5b0) = 0x4a;
LAB_1005a2d08:
  FUN_100e76a44(unaff_x19 + 0x788);
  func_0x000100dfc74c(unaff_x19 + 0x3d0);
  uVar7 = 0;
  *(undefined1 *)(unaff_x19 + 0x5aa) = 0;
  uVar9 = 1;
LAB_1005a2ce4:
  *(undefined1 *)(unaff_x19 + 0x5a8) = uVar9;
  return uVar7;
code_r0x0001005a17c4:
  lVar11 = *plVar10;
  *plVar10 = lVar11 + 1;
  if (lVar11 < 0) goto LAB_1005a2d40;
  plVar12 = *(long **)(pcVar16 + 0x58);
  lVar11 = *plVar12;
  *plVar12 = lVar11 + 1;
  if (lVar11 < 0) goto LAB_1005a2d40;
  plVar13 = *(long **)(pcVar16 + 0x60);
  lVar11 = *plVar13;
  *plVar13 = lVar11 + 1;
  if (lVar11 < 0) goto LAB_1005a2d40;
  cVar4 = pcVar16[0x68];
  *(long **)(unaff_x19 + 0x5d0) = plVar10;
  *(long **)(unaff_x19 + 0x5d8) = plVar12;
  *(long **)(unaff_x19 + 0x5e0) = plVar13;
LAB_1005a1800:
  *(char *)(unaff_x19 + 0x5e8) = cVar4;
  if (*pcVar16 == '\0') {
    *pcVar16 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar16,uVar7,1000000000);
  }
  FUN_1060fa678(pcVar16,1,pcVar16);
  if (*(char *)(unaff_x19 + 0x5e8) != '\x02') {
    *(undefined8 *)(unaff_x19 + 0x5f8) = *(undefined8 *)(unaff_x19 + 0x5d8);
    *(undefined8 *)(unaff_x19 + 0x5f0) = *puVar14;
    *(undefined8 *)(unaff_x19 + 0x608) = *(undefined8 *)(unaff_x19 + 0x5e8);
    *(undefined8 *)(unaff_x19 + 0x600) = *(undefined8 *)(unaff_x19 + 0x5e0);
    *(undefined1 *)(unaff_x19 + 0x619) = 1;
    *(undefined8 *)(unaff_x19 + 0x620) = 0x8000000000000000;
    *(long *)(unaff_x19 + 0x638) = *(long *)(unaff_x19 + 0x5f8) + 0x10;
    *(undefined1 *)(unaff_x19 + 0x6a8) = 0;
    auVar21 = FUN_100fd3e50(unaff_x19 + 0x638);
    uVar7 = auVar21._8_8_;
    pcVar16 = auVar21._0_8_;
    if (pcVar16 == (char *)0x0) {
      uVar9 = 4;
    }
    else {
      if (((*(char *)(unaff_x19 + 0x6a8) == '\x03') && (*(char *)(unaff_x19 + 0x6a0) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x658) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x660);
        uVar7 = extraout_x1_08;
        if (*(long *)(unaff_x19 + 0x668) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x668) + 0x18))(*(undefined8 *)(unaff_x19 + 0x670));
          uVar7 = extraout_x1_09;
        }
      }
      lVar11 = *(long *)(pcVar16 + 0x28);
      if ((lVar11 != -0x8000000000000000) && (lVar11 != 0)) {
        _free(*(undefined8 *)(pcVar16 + 0x30));
        uVar7 = extraout_x1_10;
      }
      uVar19 = *(undefined8 *)(unaff_x19 + 0x628);
      lVar11 = *(long *)(unaff_x19 + 0x620);
      *(undefined8 *)(pcVar16 + 0x38) = *(undefined8 *)(unaff_x19 + 0x630);
      *(undefined8 *)(pcVar16 + 0x30) = uVar19;
      *(long *)(pcVar16 + 0x28) = lVar11;
      *(undefined1 *)(unaff_x19 + 0x619) = 0;
      if (*pcVar16 == '\0') {
        *pcVar16 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar16,uVar7,1000000000)
        ;
      }
      FUN_1060fa678(pcVar16,1,pcVar16);
      *(undefined1 *)(unaff_x19 + 0x618) = 1;
      *(undefined8 *)(unaff_x19 + 0x620) = 0x8000000000000000;
      *(long *)(unaff_x19 + 0x638) = *(long *)(unaff_x19 + 0x600) + 0x10;
      *(undefined1 *)(unaff_x19 + 0x6a8) = 0;
      auVar21 = FUN_100fd3e50(unaff_x19 + 0x638);
      uVar7 = auVar21._8_8_;
      pcVar16 = auVar21._0_8_;
      if (pcVar16 != (char *)0x0) {
        if (((*(char *)(unaff_x19 + 0x6a8) == '\x03') && (*(char *)(unaff_x19 + 0x6a0) == '\x03'))
           && (*(char *)(unaff_x19 + 0x658) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (unaff_x19 + 0x660);
          uVar7 = extraout_x1_11;
          if (*(long *)(unaff_x19 + 0x668) != 0) {
            (**(code **)(*(long *)(unaff_x19 + 0x668) + 0x18))(*(undefined8 *)(unaff_x19 + 0x670));
            uVar7 = extraout_x1_12;
          }
        }
        lVar11 = *(long *)(pcVar16 + 0x28);
        if ((lVar11 != -0x8000000000000000) && (lVar11 != 0)) {
          _free(*(undefined8 *)(pcVar16 + 0x30));
          uVar7 = extraout_x1_13;
        }
        uVar19 = *(undefined8 *)(unaff_x19 + 0x628);
        lVar11 = *(long *)(unaff_x19 + 0x620);
        *(undefined8 *)(pcVar16 + 0x38) = *(undefined8 *)(unaff_x19 + 0x630);
        *(undefined8 *)(pcVar16 + 0x30) = uVar19;
        *(long *)(pcVar16 + 0x28) = lVar11;
        *(undefined1 *)(unaff_x19 + 0x618) = 0;
        if (*pcVar16 == '\0') {
          *pcVar16 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar16,uVar7,1000000000);
        }
        FUN_1060fa678(pcVar16,1,pcVar16);
        FUN_100e3da24(unaff_x19 + 0x5f0);
        goto LAB_1005a19e0;
      }
      uVar9 = 5;
    }
LAB_1005a1a54:
    *(undefined1 *)unaff_x24 = uVar9;
    uVar9 = 4;
    goto LAB_1005a1a5c;
  }
LAB_1005a19e0:
  *(undefined1 *)unaff_x24 = 1;
  FUN_100d11d00(puVar14);
  goto LAB_1005a19f0;
}

