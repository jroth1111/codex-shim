
/* WARNING: Removing unreachable block (ram,0x0001009c1550) */
/* WARNING: Removing unreachable block (ram,0x0001009c22a0) */
/* WARNING: Removing unreachable block (ram,0x0001009c22a4) */
/* WARNING: Removing unreachable block (ram,0x0001009c217c) */
/* WARNING: Removing unreachable block (ram,0x0001009c1afc) */
/* WARNING: Removing unreachable block (ram,0x0001009c18a8) */
/* WARNING: Removing unreachable block (ram,0x0001009c1494) */
/* WARNING: Removing unreachable block (ram,0x0001009c1498) */
/* WARNING: Removing unreachable block (ram,0x0001009c1720) */
/* WARNING: Removing unreachable block (ram,0x0001009c1434) */
/* WARNING: Removing unreachable block (ram,0x0001009c1b28) */
/* WARNING: Removing unreachable block (ram,0x0001009c12d0) */
/* WARNING: Removing unreachable block (ram,0x0001009c19f0) */
/* WARNING: Removing unreachable block (ram,0x0001009c209c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009bfb38(undefined8 param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x19;
  long unaff_x20;
  long lVar16;
  long unaff_x21;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x27;
  undefined8 uVar22;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar23;
  undefined1 *in_stack_00000068;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
  undefined8 *puStack0000000000000090;
  undefined1 *puStack0000000000000098;
  long lStack00000000000000a0;
  undefined *puStack00000000000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  long in_stack_00000118;
  long in_stack_00000160;
  char in_stack_000002c8;
  char in_stack_000002c9;
  char in_stack_000002ca;
  char in_stack_000002cb;
  long in_stack_000003a8;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  long in_stack_000003d8;
  undefined8 *in_stack_000003e0;
  long in_stack_000006a0;
  undefined8 in_stack_000007f0;
  undefined8 in_stack_000007f8;
  long in_stack_00000868;
  undefined8 in_stack_00000988;
  
  puStack0000000000000098 = &stack0x00000600;
  puStack0000000000000090 = (undefined8 *)0x1;
  lStack00000000000000a0 = 1;
  lVar14 = *(long *)(unaff_x20 + 0x20);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x18);
  puStack00000000000000a8 = (undefined *)param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((*(byte *)(unaff_x28 + 0x60) & 1) == 0) {
    *(undefined8 *)(unaff_x19 + 0x13f0) = *(undefined8 *)(unaff_x19 + 0x1300);
    *(undefined8 *)(unaff_x19 + 0x13e8) = *(undefined8 *)(unaff_x19 + 0x12f8);
    *(undefined8 *)(unaff_x19 + 0x1400) = *(undefined8 *)(unaff_x19 + 0x1310);
    *(undefined8 *)(unaff_x19 + 0x13f8) = *(undefined8 *)(unaff_x19 + 0x1308);
    *(undefined8 *)(unaff_x19 + 0x1410) = *(undefined8 *)(unaff_x19 + 0x1320);
    *(undefined8 *)(unaff_x19 + 0x1408) = *(undefined8 *)(unaff_x19 + 0x1318);
    *(undefined8 *)(unaff_x19 + 0x13b0) = *(undefined8 *)(unaff_x19 + 0x12c0);
    *(undefined8 *)(unaff_x19 + 0x13a8) = *(undefined8 *)(unaff_x19 + 0x12b8);
    *(undefined8 *)(unaff_x19 + 0x13c0) = *(undefined8 *)(unaff_x19 + 0x12d0);
    *(undefined8 *)(unaff_x19 + 0x13b8) = *(undefined8 *)(unaff_x19 + 0x12c8);
    *(undefined8 *)(unaff_x19 + 0x13d0) = *(undefined8 *)(unaff_x19 + 0x12e0);
    *(undefined8 *)(unaff_x19 + 0x13c8) = *(undefined8 *)(unaff_x19 + 0x12d8);
    *(undefined8 *)(unaff_x19 + 0x13e0) = *(undefined8 *)(unaff_x19 + 0x12f0);
    *(undefined8 *)(unaff_x19 + 0x13d8) = *(undefined8 *)(unaff_x19 + 0x12e8);
    uVar23 = *(undefined8 *)(unaff_x19 + 0x12a0);
    uVar20 = *(undefined8 *)(unaff_x19 + 0x1298);
    *(undefined8 *)(unaff_x19 + 0x1390) = *(undefined8 *)(unaff_x19 + 0x12a0);
    *(undefined8 *)(unaff_x19 + 5000) = *(undefined8 *)(unaff_x19 + 0x1298);
    *(undefined8 *)(unaff_x19 + 0x13a0) = *(undefined8 *)(unaff_x19 + 0x12b0);
    *(undefined8 *)(unaff_x19 + 0x1398) = *(undefined8 *)(unaff_x19 + 0x12a8);
    *(undefined1 *)(unaff_x27 + 0x584) = 0;
    puStack0000000000000090 = (undefined8 *)(unaff_x19 + 0x1418);
    *(undefined8 *)(unaff_x19 + 0x1420) = uVar23;
    *puStack0000000000000090 = uVar20;
    *(undefined8 *)(unaff_x19 + 0x1428) = *(undefined8 *)(unaff_x19 + 0x12a8);
    lStack00000000000000a0 = unaff_x19 + 0x1430;
    *(undefined8 *)(unaff_x19 + 0x1438) = *(undefined8 *)(unaff_x19 + 0x12b8);
    *(undefined8 *)(unaff_x19 + 0x1430) = *(undefined8 *)(unaff_x19 + 0x12b0);
    *(undefined8 *)(unaff_x19 + 0x1440) = *(undefined8 *)(unaff_x19 + 0x12c0);
    puStack0000000000000098 = &DAT_10112965c;
    puStack00000000000000a8 = &DAT_10112965c;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000390,s___108acb8fa,&stack0x00000090);
    *(long *)(unaff_x19 + 0x1450) = lVar14;
    *(undefined8 *)(unaff_x19 + 0x1448) = uVar22;
    *(long *)(unaff_x19 + 0x1458) = in_stack_00000868;
    *(undefined1 *)(unaff_x27 + 0x582) = 1;
    if (___ZN11codex_login4auth14default_client17USER_AGENT_SUFFIX17h9dc1dc07ad4683cbE != 0) {
      puStack0000000000000090 = (undefined8 *)&stack0x00000390;
      __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                (&__ZN11codex_login4auth14default_client17USER_AGENT_SUFFIX17h9dc1dc07ad4683cbE,1,
                 &stack0x00000090,&UNK_10b234360,&UNK_10b2340c8);
    }
    if (lRam000000010b62d4a0 == 0) {
      FUN_108854158(0x10b62d4a0);
    }
    func_0x00010603285c();
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      if (cRam000000010b62d4a8 == '\0') {
        uVar6 = 0;
LAB_1009bfd80:
        *(undefined1 *)(unaff_x27 + 0x582) = 0;
        lVar17 = *(long *)(unaff_x19 + 0x1448);
        uVar22 = *(undefined8 *)(unaff_x19 + 0x1450);
        uVar20 = *(undefined8 *)(unaff_x19 + 0x1458);
        if ((lRam000000010b62d4b0 != -0x8000000000000000) && (lRam000000010b62d4b0 != 0)) {
          _free(uRam000000010b62d4b8);
        }
        lRam000000010b62d4b0 = lVar17;
        uRam000000010b62d4b8 = uVar22;
        uRam000000010b62d4c0 = uVar20;
        if (((uVar6 & 1) != 0) ||
           ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
            0x7fffffffffffffff) == 0)) goto LAB_1009bfdc8;
        uVar15 = FUN_107c05e34();
      }
      else {
LAB_1009bfd64:
        if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
            0x7fffffffffffffff) == 0) goto LAB_1009bfdc8;
        uVar15 = FUN_107c05e34();
      }
      if ((uVar15 & 1) == 0) {
        cRam000000010b62d4a8 = '\x01';
      }
    }
    else {
      uVar6 = FUN_107c05e34();
      if (cRam000000010b62d4a8 == '\0') {
        uVar6 = uVar6 ^ 1;
        goto LAB_1009bfd80;
      }
      if (uVar6 != 0) goto LAB_1009bfd64;
    }
LAB_1009bfdc8:
    _pthread_mutex_unlock(lRam000000010b62d4a0);
    puVar7 = (undefined8 *)_malloc(0x10);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x10);
      goto LAB_1009c2600;
    }
    puVar7[1] = 0x7265767265732d70;
    *puVar7 = 0x636d2d7865646f63;
    puVar8 = (undefined4 *)_malloc(5);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,5);
      goto LAB_1009c2600;
    }
    *(undefined1 *)(puVar8 + 1) = 0x78;
    *puVar8 = 0x65646f43;
    puVar9 = (undefined4 *)_malloc(7);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,7);
      goto LAB_1009c2600;
    }
    *(undefined4 *)((long)puVar9 + 3) = 0x302e3333;
    *puVar9 = 0x33312e30;
    *(undefined1 *)(unaff_x27 + 0x583) = 1;
    *(undefined8 *)(unaff_x19 + 0x1460) = 0x10;
    *(undefined8 **)(unaff_x19 + 0x1468) = puVar7;
    *(undefined8 *)(unaff_x19 + 0x1490) = 5;
    *(undefined4 **)(unaff_x19 + 0x1498) = puVar8;
    *(undefined8 *)(unaff_x19 + 0x1478) = 7;
    *(undefined8 *)(unaff_x19 + 0x1470) = 0x10;
    *(undefined4 **)(unaff_x19 + 0x1480) = puVar9;
    *(undefined8 *)(unaff_x19 + 0x1488) = 7;
    *(undefined8 *)(unaff_x19 + 0x14a8) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x14a0) = 5;
    *(undefined8 *)(unaff_x19 + 0x14c0) = 0x8000000000000000;
    plVar13 = (long *)(unaff_x19 + 0x1588);
    *(undefined8 *)(unaff_x19 + 0x14d8) = 0x8000000000000000;
    FUN_100688d40(plVar13,unaff_x19 + 0x1460);
    if (*plVar13 != -0x7ffffffffffffffb) {
      *(undefined8 *)(unaff_x19 + 0x14f8) = *(undefined8 *)(unaff_x19 + 0x1590);
      *(long *)(unaff_x19 + 0x14f0) = *plVar13;
      *(undefined8 *)(unaff_x19 + 0x1508) = *(undefined8 *)(unaff_x19 + 0x15a0);
      *(undefined8 *)(unaff_x19 + 0x1500) = *(undefined8 *)(unaff_x19 + 0x1598);
      uVar20 = *(undefined8 *)(unaff_x19 + 0x15c0);
      uVar22 = *(undefined8 *)(unaff_x19 + 0x15b8);
      *(undefined8 *)(unaff_x19 + 0x1518) = *(undefined8 *)(unaff_x19 + 0x15b0);
      *(undefined8 *)(unaff_x19 + 0x1510) = *(undefined8 *)(unaff_x19 + 0x15a8);
      *in_stack_00000068 = 1;
      *(undefined8 *)(unaff_x19 + 0x1528) = uVar20;
      *(undefined8 *)(unaff_x19 + 0x1520) = uVar22;
      *(undefined8 *)(unaff_x19 + 0x1530) = *(undefined8 *)(unaff_x19 + 0x15c8);
      if (-1 < *(long *)(unaff_x19 + 0x14f0)) {
        puVar7 = (undefined8 *)_malloc(10);
        if (puVar7 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,10);
          goto LAB_1009c2600;
        }
        *(undefined2 *)(puVar7 + 1) = 0x746e;
        *puVar7 = 0x6567615f72657375;
        __ZN11codex_login4auth14default_client20get_codex_user_agent17hcb75fa4136ccd59eE
                  (&stack0x00000690);
        if (in_stack_000006a0 == 0) {
          in_stack_00000868 = 1;
        }
        else {
          in_stack_00000868 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_000006a0,1);
          if (in_stack_00000868 == 0) {
            func_0x0001087c9084(1,in_stack_000006a0);
            goto LAB_1009c2600;
          }
        }
        _memcpy(in_stack_00000868,&stack0x00000710,in_stack_000006a0);
        FUN_101497a9c(&stack0x00000090,unaff_x19 + 0x14f0,&stack0x00000600,&stack0x00000390);
        if (puStack0000000000000098 != (undefined *)0x8000000000000005) {
          FUN_100de6690(&stack0x00000710);
        }
        _free(&stack0x00000710);
        lVar14 = in_stack_000006a0;
        in_stack_000003a8 = in_stack_000006a0;
      }
      lVar17 = *(long *)(unaff_x19 + 0x1378);
      lVar19 = *(long *)(unaff_x19 + 0x1380);
      if (*(long *)(unaff_x19 + 0x1370) != -0x8000000000000000) {
        if (lVar19 == 0) {
          lVar21 = 1;
        }
        else {
          lVar21 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar19,1);
          if (lVar21 == 0) {
            func_0x0001087c9084(1,lVar19);
            goto LAB_1009c2600;
          }
        }
        _memcpy(lVar21,lVar17,lVar19);
        lVar17 = lVar21;
      }
      *(undefined1 *)(unaff_x27 + 0x583) = 0;
      _memcpy(&stack0x00000090,&stack0x00000390,0x240);
      __ZN82__LT_serde_json__value__ser__Serializer_u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17h1afe0e688f2d23f7E
                (&stack0x00000390,&UNK_108cddd70,0x10,3);
      plVar1 = (long *)(unaff_x19 + 0x1538);
      uVar22 = 0xf;
      puVar7 = (undefined8 *)_malloc(0xf);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0x6c6f636f746f7270;
        *(undefined8 *)((long)puVar7 + 7) = 0x6e6f69737265566c;
        if ((in_stack_000003d8 != -0x8000000000000000) && (in_stack_000003d8 != 0)) {
          _free(in_stack_000003e0);
        }
        if (lVar19 == 0) {
          lVar21 = 1;
        }
        else {
          lVar21 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar19,1);
          if (lVar21 == 0) {
            func_0x0001087c9084(1,lVar19);
            goto LAB_1009c2600;
          }
        }
        _memcpy(lVar21,lVar17,lVar19);
        lVar17 = -0x7ffffffffffffffd;
        FUN_101497a9c(&stack0x00000390,&stack0x00000600,&stack0x000008c0,&stack0x00000710);
        if (lVar14 != -0x7ffffffffffffffb) {
          FUN_100de6690(&stack0x00000690);
        }
        uVar22 = 0xc;
        puVar10 = (undefined8 *)_malloc(0xc);
        lVar18 = in_stack_00000160;
        lVar3 = in_stack_00000118;
        lVar16 = in_stack_000000d0;
        lVar21 = in_stack_000000b0;
        puVar7 = puStack0000000000000090;
        if (puVar10 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar10 + 1) = 0x73656974;
          *puVar10 = 0x696c696261706163;
          puVar2 = (undefined1 *)(in_stack_000000b0 + (long)puStack0000000000000090);
          if (in_stack_000000d0 != -0x8000000000000000) {
            puVar2 = puVar2 + 1;
          }
          if (in_stack_00000118 != -0x8000000000000000) {
            puVar2 = puVar2 + 1;
          }
          if (in_stack_000002ca != '\x03') {
            puVar2 = puVar2 + 1;
          }
          if (in_stack_000002c8 != '\x03') {
            puVar2 = puVar2 + 1;
          }
          if (in_stack_000002cb != '\x03') {
            puVar2 = puVar2 + 1;
          }
          if (in_stack_00000160 != -0x7fffffffffffffff) {
            puVar2 = puVar2 + 1;
          }
          __ZN82__LT_serde_json__value__ser__Serializer_u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17h1afe0e688f2d23f7E
                    (&stack0x00000390,&UNK_108cc45fd,0x12,puVar2);
          if (((((puVar7 == (undefined8 *)0x0) ||
                (lVar11 = FUN_10148db3c(&stack0x00000690,&UNK_108cb930e,0xc,&stack0x00000090),
                lVar11 == 0)) &&
               ((lVar21 == 0 ||
                (lVar11 = FUN_10148db3c(&stack0x00000690,&UNK_108cb931a,10,&stack0x000000b0),
                lVar11 == 0)))) &&
              ((lVar16 == -0x8000000000000000 ||
               (lVar11 = FUN_10147a740(&stack0x00000690,&UNK_108cb9386,7,&stack0x000000d0),
               lVar11 == 0)))) &&
             ((lVar3 == -0x8000000000000000 ||
              (lVar11 = FUN_10147a740(&stack0x00000690,&UNK_108cb938d,0xb,&stack0x00000118),
              lVar11 == 0)))) {
            puVar7 = in_stack_000003e0;
            if (in_stack_000002ca != '\x03') {
              uVar22 = 7;
              puVar7 = (undefined8 *)_malloc(7);
              if (puVar7 != (undefined8 *)0x0) {
                *(undefined4 *)((long)puVar7 + 3) = 0x7374706d;
                *(undefined4 *)puVar7 = 0x6d6f7270;
                if ((in_stack_000003d8 != -0x8000000000000000) && (in_stack_000003d8 != 0)) {
                  _free(in_stack_000003e0);
                }
                in_stack_000003d8 = -0x8000000000000000;
                *(undefined8 *)(unaff_x21 + 0x10) = 7;
                *(undefined8 **)(unaff_x21 + 8) = puVar7;
                __ZN82__LT_serde_json__value__ser__Serializer_u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17h1afe0e688f2d23f7E
                          (&stack0x00000390,&UNK_108cc45b7,0x11,in_stack_000002ca != '\x02');
                lVar17 = 0;
                if ((in_stack_000002ca == '\x02') ||
                   (lVar11 = func_0x0001006384d0(&stack0x00000710,&UNK_108cb7da7,0xb,
                                                 in_stack_000002ca), lVar11 == 0)) {
                  __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                            (&stack0x000008c0,&stack0x00000390);
                  FUN_101497a9c(&stack0x00000390,&stack0x00000690,&stack0x00000980,&stack0x000008c0)
                  ;
                  lVar19 = lVar14;
                  if (lVar14 != -0x7ffffffffffffffb) {
                    FUN_100de6690(&stack0x00000790);
                  }
                }
                else {
                  FUN_100e040f0(&stack0x00000710);
                  lVar17 = 0;
                  _free(in_stack_00000988);
                  lVar19 = lVar14;
                  if (lVar11 != 0) goto LAB_1009c1b44;
                }
                goto LAB_1009c18b8;
              }
LAB_1009c25d8:
              func_0x0001087c9084(1,uVar22);
              goto LAB_1009c2600;
            }
LAB_1009c18b8:
            puVar12 = puVar7;
            if (in_stack_000002c8 != '\x03') {
              uVar22 = 9;
              puVar12 = (undefined8 *)_malloc(9);
              if (puVar12 == (undefined8 *)0x0) goto LAB_1009c25d8;
              *(undefined1 *)(puVar12 + 1) = 0x73;
              *puVar12 = 0x656372756f736572;
              if ((in_stack_000003d8 != -0x8000000000000000) && (in_stack_000003d8 != 0)) {
                _free(puVar7);
              }
              in_stack_000003d8 = -0x8000000000000000;
              *(undefined8 *)(unaff_x21 + 0x10) = 9;
              *(undefined8 **)(unaff_x21 + 8) = puVar12;
              cVar5 = in_stack_000002c9 != '\x02';
              if (in_stack_000002c8 != '\x02') {
                cVar5 = cVar5 + '\x01';
              }
              __ZN82__LT_serde_json__value__ser__Serializer_u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17h1afe0e688f2d23f7E
                        (&stack0x00000390,&UNK_108cc460f,0x13,cVar5);
              if (((in_stack_000002c8 == '\x02') ||
                  (lVar11 = func_0x0001006384d0(&stack0x00000710,&UNK_108cb95aa,9,in_stack_000002c8)
                  , lVar11 == 0)) &&
                 ((in_stack_000002c9 == '\x02' ||
                  (lVar11 = func_0x0001006384d0(&stack0x00000710,&UNK_108cb7da7,0xb,
                                                in_stack_000002c9), lVar11 == 0)))) {
                __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                          (&stack0x000008c0,&stack0x00000390);
                FUN_101497a9c(&stack0x00000390,&stack0x00000690,&stack0x00000980,&stack0x000008c0);
                lVar17 = 0;
                lVar19 = lVar14;
                if (lVar14 != -0x7ffffffffffffffb) {
                  FUN_100de6690(&stack0x00000790);
                }
              }
              else {
                FUN_100e040f0(&stack0x00000710);
                _free(in_stack_00000988);
                lVar17 = 0;
                lVar19 = lVar14;
                if (lVar11 != 0) goto LAB_1009c1b44;
              }
            }
            if (in_stack_000002cb != '\x03') {
              uVar22 = 5;
              puVar8 = (undefined4 *)_malloc(5);
              if (puVar8 == (undefined4 *)0x0) goto LAB_1009c25d8;
              *(undefined1 *)(puVar8 + 1) = 0x73;
              *puVar8 = 0x6c6f6f74;
              if ((in_stack_000003d8 != -0x8000000000000000) && (in_stack_000003d8 != 0)) {
                _free(puVar12);
              }
              in_stack_000003d8 = -0x8000000000000000;
              *(undefined8 *)(unaff_x21 + 0x10) = 5;
              *(undefined4 **)(unaff_x21 + 8) = puVar8;
              __ZN82__LT_serde_json__value__ser__Serializer_u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17h1afe0e688f2d23f7E
                        (&stack0x00000390,&UNK_108cc45a8,0xf,in_stack_000002cb != '\x02');
              if ((in_stack_000002cb == '\x02') ||
                 (lVar11 = func_0x0001006384d0(&stack0x00000710,&UNK_108cb7da7,0xb,in_stack_000002cb
                                              ), lVar11 == 0)) {
                __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                          (&stack0x000008c0,&stack0x00000390);
                FUN_101497a9c(&stack0x00000390,&stack0x00000690,&stack0x00000980,&stack0x000008c0);
                lVar17 = 0;
                lVar19 = lVar14;
                if (lVar14 != -0x7ffffffffffffffb) {
                  FUN_100de6690(&stack0x00000790);
                }
              }
              else {
                FUN_100e040f0(&stack0x00000710);
                _free(in_stack_00000988);
                lVar17 = 0;
                lVar19 = lVar14;
                if (lVar11 != 0) goto LAB_1009c1b44;
              }
            }
            if ((lVar18 != -0x7fffffffffffffff) &&
               (lVar11 = FUN_101482c68(&stack0x00000690,&stack0x00000160), lVar11 != 0))
            goto LAB_1009c1b44;
            __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                      (unaff_x29 + -0xb0,&stack0x00000390);
            if (*(long *)(unaff_x29 + -0xb0) == -0x7ffffffffffffffb) {
              lVar21 = *(long *)(unaff_x29 + -0xa8);
              _free(puVar10);
              if (lVar21 == 0) goto LAB_1009c2250;
              goto LAB_1009c1b54;
            }
            FUN_101497a9c(&stack0x00000390,&stack0x00000600,&stack0x00000920,unaff_x29 + -0xb0);
            *(long *)(unaff_x29 + -0xf8) = in_stack_00000868;
            *(long *)(unaff_x29 + -0x100) = lVar14;
            *(undefined8 *)(unaff_x29 + -0xe8) = 0;
            *(long *)(unaff_x29 + -0xf0) = in_stack_000003a8;
            *(undefined8 *)(unaff_x29 + -0xd8) = in_stack_000003c0;
            *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_000003b8;
            *(undefined8 *)(unaff_x29 + -200) = 0x8000000000000000;
            *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_000003c8;
            *(long *)(unaff_x29 + -0xc0) = in_stack_000003d8;
            if (*(long *)(unaff_x29 + -0x100) != -0x7ffffffffffffffb) {
              FUN_100de6690(unaff_x29 + -0x100);
            }
LAB_1009c2250:
            uVar22 = 10;
            puVar10 = (undefined8 *)_malloc(10);
            if (puVar10 == (undefined8 *)0x0) goto LAB_1009c25b8;
            *(undefined2 *)(puVar10 + 1) = 0x6f66;
            *puVar10 = 0x6e49726576726573;
            FUN_100688d40(&stack0x00000710,&stack0x000002d0);
            if (lVar17 == -0x7ffffffffffffffb) goto LAB_1009c1b50;
            FUN_101497a9c(&stack0x00000390,&stack0x00000600,&stack0x000008c0,&stack0x00000710);
            if (lVar14 != -0x7ffffffffffffffb) {
              FUN_100de6690(&stack0x00000690);
            }
            __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                      (plVar1,&stack0x00000390);
          }
          else {
LAB_1009c1b44:
            lVar19 = lVar11;
            FUN_100e040f0(&stack0x00000690);
LAB_1009c1b50:
            _free(puVar10);
            lVar21 = lVar19;
LAB_1009c1b54:
            *(long *)(unaff_x19 + 0x1540) = lVar21;
            *(undefined8 *)(unaff_x19 + 0x1538) = 0x8000000000000005;
            FUN_100e040f0(&stack0x00000600);
          }
          FUN_100df1b38(&stack0x00000090);
          if (*plVar1 != -0x7ffffffffffffffb) {
            *(undefined1 *)(unaff_x27 + 0x585) = 1;
            *(undefined8 *)(unaff_x19 + 0x1590) = *(undefined8 *)(unaff_x19 + 0x1540);
            *plVar13 = *plVar1;
            *(undefined8 *)(unaff_x19 + 0x15a0) = *(undefined8 *)(unaff_x19 + 0x1550);
            *(undefined8 *)(unaff_x19 + 0x1598) = *(undefined8 *)(unaff_x19 + 0x1548);
            *(undefined8 *)(unaff_x19 + 0x15b0) = *(undefined8 *)(unaff_x19 + 0x1560);
            *(undefined8 *)(unaff_x19 + 0x15a8) = *(undefined8 *)(unaff_x19 + 0x1558);
            *(undefined8 *)(unaff_x19 + 0x15c0) = *(undefined8 *)(unaff_x19 + 0x1570);
            *(undefined8 *)(unaff_x19 + 0x15b8) = *(undefined8 *)(unaff_x19 + 0x1568);
            *(undefined8 *)(unaff_x19 + 0x15c8) = *(undefined8 *)(unaff_x19 + 0x1578);
            if (-1 < *plVar13) {
              FUN_100c7c1c0(&stack0x00000690,&UNK_108cb497d,10);
              *in_stack_00000068 = 0;
              FUN_101497a9c(&stack0x00000090,plVar13,&stack0x00000690,&stack0x00000390);
              if (puStack0000000000000098 != (undefined *)0x8000000000000005) {
                FUN_100de6690(&stack0x00000710);
              }
            }
            *(undefined1 *)(unaff_x28 + 0x60) = 1;
            lVar14 = *(long *)(unaff_x28 + 0x48);
            uVar22 = *(undefined8 *)(unaff_x19 + 0x1590);
            lVar17 = *plVar13;
            *(undefined8 *)(unaff_x19 + 0x15e8) = *(undefined8 *)(unaff_x19 + 0x15a0);
            *(undefined8 *)(unaff_x19 + 0x15e0) = *(undefined8 *)(unaff_x19 + 0x1598);
            *(undefined8 *)(unaff_x19 + 0x15f8) = *(undefined8 *)(unaff_x19 + 0x15b0);
            *(undefined8 *)(unaff_x19 + 0x15f0) = *(undefined8 *)(unaff_x19 + 0x15a8);
            *(undefined8 *)(unaff_x19 + 0x1608) = *(undefined8 *)(unaff_x19 + 0x15c0);
            *(undefined8 *)(unaff_x19 + 0x1600) = *(undefined8 *)(unaff_x19 + 0x15b8);
            *(undefined2 *)(unaff_x27 + 0x585) = 0;
            *(undefined8 *)(unaff_x19 + 0x1610) = *(undefined8 *)(unaff_x19 + 0x15c8);
            *(undefined8 *)(unaff_x19 + 0x15d8) = uVar22;
            *(long *)(unaff_x19 + 0x15d0) = lVar17;
            *(long *)(unaff_x19 + 0x1618) = lVar14 + 0x10;
            *(undefined8 *)(unaff_x19 + 0x1628) = in_stack_000007f8;
            *(undefined8 *)(unaff_x19 + 0x1620) = in_stack_000007f0;
            *(undefined1 *)(unaff_x27 + 0x708) = 0;
            FUN_1009b7860(unaff_x19 + 0x15d0);
            FUN_100d56730(unaff_x19 + 0x15d0);
            *(undefined1 *)(unaff_x27 + 0x585) = 0;
            if ((*(byte *)(unaff_x27 + 0x581) & 1) != 0) {
              FUN_100de6690(unaff_x19 + 0x14f0);
            }
            *(undefined1 *)(unaff_x27 + 0x581) = 0;
            *(undefined1 *)(unaff_x27 + 0x583) = 0;
            if (((*(byte *)(unaff_x27 + 0x582) & 1) != 0) && (*(long *)(unaff_x19 + 0x1448) != 0)) {
              _free(*(undefined8 *)(unaff_x19 + 0x1450));
            }
            *(undefined1 *)(unaff_x27 + 0x582) = 0;
            if (*(long *)(unaff_x19 + 0x1430) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x1438));
            }
            if (*(long *)(unaff_x19 + 0x1418) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x1420));
            }
            if ((*(long *)(unaff_x19 + 0x13b8) != -0x8000000000000000) &&
               (*(long *)(unaff_x19 + 0x13b8) != 0)) {
              _free(*(undefined8 *)(unaff_x19 + 0x13c0));
            }
            if ((*(long *)(unaff_x19 + 0x13d0) != -0x8000000000000000) &&
               (*(long *)(unaff_x19 + 0x13d0) != 0)) {
              _free(*(undefined8 *)(unaff_x19 + 0x13d8));
            }
            lVar14 = *(long *)(unaff_x19 + 0x13e8);
            if (lVar14 != -0x8000000000000000) {
              lVar17 = *(long *)(unaff_x19 + 0x13f0);
              lVar19 = *(long *)(unaff_x19 + 0x13f8);
              if (lVar19 != 0) {
                lVar21 = 0;
                do {
                  plVar13 = (long *)(lVar17 + lVar21 * 0x48);
                  if (*plVar13 != 0) {
                    _free(plVar13[1]);
                  }
                  if (plVar13[3] == -0x8000000000000000 || plVar13[3] == 0) {
                    lVar16 = plVar13[6];
                  }
                  else {
                    _free(plVar13[4]);
                    lVar16 = plVar13[6];
                  }
                  if (lVar16 != -0x8000000000000000) {
                    lVar3 = plVar13[7];
                    lVar18 = plVar13[8];
                    if (lVar18 != 0) {
                      puVar7 = (undefined8 *)(lVar3 + 8);
                      do {
                        if (puVar7[-1] != 0) {
                          _free(*puVar7);
                        }
                        puVar7 = puVar7 + 3;
                        lVar18 = lVar18 + -1;
                      } while (lVar18 != 0);
                    }
                    if (lVar16 != 0) {
                      _free(lVar3);
                    }
                  }
                  lVar21 = lVar21 + 1;
                } while (lVar21 != lVar19);
              }
              if (lVar14 != 0) {
                _free(lVar17);
              }
            }
            if ((*(long *)(unaff_x19 + 0x1400) != -0x8000000000000000) &&
               (*(long *)(unaff_x19 + 0x1400) != 0)) {
              _free(*(undefined8 *)(unaff_x19 + 0x1408));
            }
            if (*(long *)(unaff_x19 + 0x1328) != -0x8000000000000000) {
              lVar14 = *(long *)(unaff_x19 + 0x1348);
              if ((lVar14 != 0) && (lVar14 * 9 != -0x11)) {
                _free(*(long *)(unaff_x19 + 0x1340) + lVar14 * -8 + -8);
              }
              func_0x000100cd7284(unaff_x19 + 0x1328);
            }
            if ((*(long *)(unaff_x19 + 0x1370) != -0x8000000000000000) &&
               (*(long *)(unaff_x19 + 0x1370) != 0)) {
              _free(*(undefined8 *)(unaff_x19 + 0x1378));
            }
            FUN_100e1f79c(unaff_x19 + 0x1058);
            goto LAB_1009c1ef8;
          }
          *(undefined8 *)(unaff_x19 + 0x1588) = *(undefined8 *)(unaff_x19 + 0x1540);
          lVar14 = *(long *)(unaff_x28 + 0x48);
          *(undefined1 *)(unaff_x27 + 0x586) = 0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000090,s__failed_to_serialize_initialize_r_108acd03e,&stack0x00000390
                    );
          lVar14 = lVar14 + 0x10;
          *(undefined1 **)(unaff_x19 + 0x1598) = puStack0000000000000098;
          *(undefined8 **)(unaff_x19 + 0x1590) = puStack0000000000000090;
          *(long *)(unaff_x19 + 0x15a0) = lStack00000000000000a0;
          *(undefined8 *)(unaff_x19 + 0x15a8) = 0x8000000000000005;
          *(undefined4 *)(unaff_x19 + 0x15f0) = 0xffff80a5;
          *(long *)(unaff_x19 + 0x15f8) = lVar14;
          *(undefined8 *)(unaff_x19 + 0x1608) = in_stack_000007f8;
          *(undefined8 *)(unaff_x19 + 0x1600) = in_stack_000007f0;
          *(undefined1 *)(unaff_x27 + 0x610) = 0;
          in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x1608);
          in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x1600);
          in_stack_000000f0 = *(undefined8 *)(unaff_x19 + 0x15f0);
          in_stack_000000d8 = *(undefined8 *)(unaff_x19 + 0x15d8);
          in_stack_000000d0 = *(long *)(unaff_x19 + 0x15d0);
          in_stack_000000e8 = *(undefined8 *)(unaff_x19 + 0x15e8);
          in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 0x15e0);
          puStack0000000000000098 = *(undefined1 **)(unaff_x19 + 0x1598);
          puStack0000000000000090 = *(undefined8 **)(unaff_x19 + 0x1590);
          puStack00000000000000a8 = *(undefined **)(unaff_x19 + 0x15a8);
          lStack00000000000000a0 = *(long *)(unaff_x19 + 0x15a0);
          in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x15b8);
          in_stack_000000b0 = *(long *)(unaff_x19 + 0x15b0);
          in_stack_000000c8 = *(undefined8 *)(unaff_x19 + 0x15c8);
          in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0x15c0);
          func_0x000100fd3924(&stack0x00000090,lVar14,&stack0x00000390);
          if (puStack0000000000000090 != (undefined8 *)0x8000000000000004) {
            FUN_100e30e98(&stack0x00000090);
          }
          *(undefined1 *)(unaff_x27 + 0x610) = 1;
          plVar13 = *(long **)(unaff_x19 + 0x1588);
          if (*plVar13 == 1) {
            FUN_100de21d4(plVar13 + 1);
          }
          else if ((*plVar13 == 0) && (plVar13[2] != 0)) {
            _free(plVar13[1]);
          }
          _free(plVar13);
          *(undefined1 *)(unaff_x27 + 0x585) = 0;
          FUN_100de6690(unaff_x19 + 0x14f0);
          goto LAB_1009bfffc;
        }
      }
LAB_1009c25b8:
      func_0x0001087c9084(1,uVar22);
LAB_1009c2600:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009c2604);
      (*pcVar4)();
    }
    *(undefined8 *)(unaff_x19 + 0x15d0) = *(undefined8 *)(unaff_x19 + 0x1590);
    lVar14 = *(long *)(unaff_x28 + 0x48);
    *(undefined1 *)(unaff_x27 + 0x586) = 0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000090,s__failed_to_serialize_server_info_108acd06a,&stack0x00000390);
    lVar14 = lVar14 + 0x10;
    *(undefined1 **)(unaff_x19 + 0x15e0) = puStack0000000000000098;
    *(long *)(unaff_x19 + 0x15d8) = (long)puStack0000000000000090;
    *(long *)(unaff_x19 + 0x15e8) = lStack00000000000000a0;
    *(undefined8 *)(unaff_x19 + 0x15f0) = 0x8000000000000005;
    *(undefined4 *)(unaff_x19 + 0x1638) = 0xffff80a5;
    *(long *)(unaff_x19 + 0x1640) = lVar14;
    *(undefined8 *)(unaff_x19 + 0x1650) = in_stack_000007f8;
    *(undefined8 *)(unaff_x19 + 0x1648) = in_stack_000007f0;
    *(undefined1 *)(unaff_x27 + 0x658) = 0;
    in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x1650);
    in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x1648);
    in_stack_000000f0 = *(undefined8 *)(unaff_x19 + 0x1638);
    in_stack_000000d8 = *(undefined8 *)(unaff_x19 + 0x1620);
    in_stack_000000d0 = *(long *)(unaff_x19 + 0x1618);
    in_stack_000000e8 = *(undefined8 *)(unaff_x19 + 0x1630);
    in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 0x1628);
    puStack0000000000000098 = *(undefined1 **)(unaff_x19 + 0x15e0);
    puStack0000000000000090 = *(undefined8 **)(unaff_x19 + 0x15d8);
    puStack00000000000000a8 = *(undefined **)(unaff_x19 + 0x15f0);
    lStack00000000000000a0 = *(long *)(unaff_x19 + 0x15e8);
    in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x1600);
    in_stack_000000b0 = *(long *)(unaff_x19 + 0x15f8);
    in_stack_000000c8 = *(undefined8 *)(unaff_x19 + 0x1610);
    in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0x1608);
    func_0x000100fd3924(&stack0x00000090,lVar14,&stack0x00000390);
    if (puStack0000000000000090 != (undefined8 *)0x8000000000000004) {
      FUN_100e30e98(&stack0x00000090);
    }
    *(undefined1 *)(unaff_x27 + 0x658) = 1;
    plVar13 = *(long **)(unaff_x19 + 0x15d0);
    if (*plVar13 == 1) {
      FUN_100de21d4(plVar13 + 1);
    }
    else if ((*plVar13 == 0) && (plVar13[2] != 0)) {
      _free(plVar13[1]);
    }
    _free(plVar13);
LAB_1009bfffc:
    *(undefined1 *)(unaff_x27 + 0x581) = 0;
    if ((*(byte *)(unaff_x27 + 0x583) & 1) != 0) {
      FUN_100ded1dc(unaff_x19 + 0x1460);
    }
    *(undefined1 *)(unaff_x27 + 0x583) = 0;
    if (((*(byte *)(unaff_x27 + 0x582) & 1) != 0) && (*(long *)(unaff_x19 + 0x1448) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x1450));
    }
    *(undefined1 *)(unaff_x27 + 0x582) = 0;
    if (*(long *)(unaff_x19 + 0x1430) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1438));
    }
    if (*(long *)(unaff_x19 + 0x1418) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1420));
    }
    if ((*(long *)(unaff_x19 + 0x13b8) != -0x8000000000000000) &&
       (*(long *)(unaff_x19 + 0x13b8) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x13c0));
    }
    if ((*(long *)(unaff_x19 + 0x13d0) != -0x8000000000000000) &&
       (*(long *)(unaff_x19 + 0x13d0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x13d8));
    }
    lVar14 = *(long *)(unaff_x19 + 0x13e8);
    if (lVar14 != -0x8000000000000000) {
      lVar17 = *(long *)(unaff_x19 + 0x13f0);
      lVar19 = *(long *)(unaff_x19 + 0x13f8);
      if (lVar19 != 0) {
        lVar21 = 0;
        do {
          plVar13 = (long *)(lVar17 + lVar21 * 0x48);
          if (*plVar13 != 0) {
            _free(plVar13[1]);
          }
          if (plVar13[3] == -0x8000000000000000 || plVar13[3] == 0) {
            lVar16 = plVar13[6];
          }
          else {
            _free(plVar13[4]);
            lVar16 = plVar13[6];
          }
          if (lVar16 != -0x8000000000000000) {
            lVar3 = plVar13[7];
            lVar18 = plVar13[8];
            if (lVar18 != 0) {
              puVar7 = (undefined8 *)(lVar3 + 8);
              do {
                if (puVar7[-1] != 0) {
                  _free(*puVar7);
                }
                puVar7 = puVar7 + 3;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
            if (lVar16 != 0) {
              _free(lVar3);
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 != lVar19);
      }
      if (lVar14 != 0) {
        _free(lVar17);
      }
    }
    if ((*(long *)(unaff_x19 + 0x1400) != -0x8000000000000000) &&
       (*(long *)(unaff_x19 + 0x1400) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x1408));
    }
  }
  else {
    lVar14 = *(long *)(unaff_x28 + 0x48) + 0x10;
    *(undefined1 *)(unaff_x27 + 0x586) = 0;
    *(undefined8 *)(unaff_x19 + 0x1588) = 0x8000000000000000;
    *(undefined **)(unaff_x19 + 0x1590) = &UNK_108cb4987;
    *(undefined8 *)(unaff_x19 + 0x1598) = 0x20;
    *(undefined8 *)(unaff_x19 + 0x15a0) = 0x8000000000000005;
    *(undefined4 *)(unaff_x19 + 0x15e8) = 0xffff80a8;
    *(long *)(unaff_x19 + 0x15f0) = lVar14;
    *(undefined8 *)(unaff_x19 + 0x1600) = in_stack_000007f8;
    *(undefined8 *)(unaff_x19 + 0x15f8) = in_stack_000007f0;
    *(undefined1 *)(unaff_x27 + 0x608) = 0;
    in_stack_00000100 = *(undefined8 *)(unaff_x19 + 0x1600);
    in_stack_000000f8 = *(undefined8 *)(unaff_x19 + 0x15f8);
    in_stack_000000f0 = *(undefined8 *)(unaff_x19 + 0x15e8);
    in_stack_000000d8 = *(undefined8 *)(unaff_x19 + 0x15d0);
    in_stack_000000d0 = *(long *)(unaff_x19 + 0x15c8);
    in_stack_000000e8 = *(undefined8 *)(unaff_x19 + 0x15e0);
    in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 0x15d8);
    puStack0000000000000098 = *(undefined1 **)(unaff_x19 + 0x1590);
    puStack0000000000000090 = *(undefined8 **)(unaff_x19 + 0x1588);
    puStack00000000000000a8 = *(undefined **)(unaff_x19 + 0x15a0);
    lStack00000000000000a0 = *(long *)(unaff_x19 + 0x1598);
    in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x15b0);
    in_stack_000000b0 = *(long *)(unaff_x19 + 0x15a8);
    in_stack_000000c8 = *(undefined8 *)(unaff_x19 + 0x15c0);
    in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0x15b8);
    func_0x000100fd3924(&stack0x00000090,lVar14,&stack0x00000390);
    if (puStack0000000000000090 != (undefined8 *)0x8000000000000004) {
      FUN_100e30e98(&stack0x00000090);
    }
    *(undefined1 *)(unaff_x27 + 0x608) = 1;
  }
  if (*(long *)(unaff_x19 + 0x1328) != -0x8000000000000000) {
    lVar14 = *(long *)(unaff_x19 + 0x1348);
    if ((lVar14 != 0) && (lVar14 * 9 != -0x11)) {
      _free(*(long *)(unaff_x19 + 0x1340) + lVar14 * -8 + -8);
    }
    func_0x000100cd7284(unaff_x19 + 0x1328);
  }
  if ((*(long *)(unaff_x19 + 0x1370) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x1370) != 0)
     ) {
    _free(*(undefined8 *)(unaff_x19 + 0x1378));
  }
  FUN_100e1f79c(unaff_x19 + 0x1058);
  if ((*(byte *)(unaff_x27 + 0x584) & 1) != 0) {
    FUN_100ded1dc(unaff_x19 + 0x1298);
  }
LAB_1009c1ef8:
  *(undefined1 *)(unaff_x27 + 0x584) = 0;
  *(undefined1 *)(unaff_x27 + 0x586) = 0;
  *(undefined1 *)(unaff_x27 + 0x580) = 1;
  FUN_100ceed94(in_stack_00000078);
  func_0x000100dccb50(*(undefined8 *)(unaff_x19 + 0xd08));
  uVar15 = *(ulong *)(unaff_x19 + 0x698) - 2;
  if (*(ulong *)(unaff_x19 + 0x698) < 2) {
    uVar15 = 1;
  }
  if (0xc < uVar15 && uVar15 != 0x11) {
    func_0x000100deab40(unaff_x19 + 0x698);
  }
  if (((*(byte *)(unaff_x19 + 0x9d1) & 1) != 0) && (in_stack_00000080 != (long *)0x0)) {
    lVar14 = *in_stack_00000080;
    *in_stack_00000080 = lVar14 + -1;
    LORelease();
    if (lVar14 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000080);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x9d1) = 0;
  plVar13 = *(long **)(unaff_x19 + 0x688);
  if (plVar13 != (long *)0x0) {
    lVar14 = *plVar13;
    *plVar13 = lVar14 + -1;
    LORelease();
    if (lVar14 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x688);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x9d2) = 0;
  *(undefined1 *)(unaff_x19 + 0x9d0) = 1;
  return 0;
}

