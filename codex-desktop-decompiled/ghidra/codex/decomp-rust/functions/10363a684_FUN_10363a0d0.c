
undefined8 * FUN_10363a0d0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *plVar13;
  undefined8 extraout_x1_02;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x20;
  long *plVar17;
  ulong uVar18;
  ulong unaff_x22;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long lStack_588;
  undefined8 *puStack_580;
  byte bStack_578;
  byte bStack_577;
  ulong uStack_570;
  undefined8 uStack_568;
  undefined1 ****ppppuStack_560;
  undefined8 uStack_558;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 *puStack_530;
  long lStack_528;
  undefined *puStack_520;
  long *plStack_518;
  undefined *puStack_510;
  ulong uStack_508;
  undefined8 uStack_500;
  long lStack_4f8;
  undefined *puStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 ***pppuStack_480;
  undefined8 uStack_478;
  long *plStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 *puStack_458;
  long lStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  ulong uStack_438;
  long lStack_430;
  long lStack_428;
  undefined *puStack_420;
  ulong uStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined1 **ppuStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  long lStack_378;
  undefined *puStack_370;
  long *plStack_368;
  undefined *puStack_360;
  ulong uStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  ulong uStack_338;
  undefined *puStack_330;
  long alStack_328 [61];
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar10 = param_2[4];
  uVar14 = param_2[5];
  uVar16 = param_2[1];
  if (uVar16 == 0) {
    uStack_98 = 0;
    puStack_a0 = &UNK_108d52778;
    lStack_88 = 0;
    uStack_90 = 0;
    puStack_c8 = param_1;
    goto LAB_10363a330;
  }
  uVar20 = uVar16 + 1;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar20;
  if (SUB168(auVar29 * ZEXT816(0x30),8) == 0) {
    unaff_x22 = uVar20 * 0x30;
    unaff_x20 = uVar16 + 9;
    uVar18 = unaff_x22 + unaff_x20;
    if ((CARRY8(unaff_x22,unaff_x20)) || (0x7ffffffffffffff8 < uVar18)) goto LAB_10363a16c;
    uStack_d8 = uVar14;
    uStack_d0 = uVar10;
    puStack_c8 = param_1;
    if (uVar18 == 0) goto LAB_10363a184;
    if (uVar18 < 8) {
      puStack_80 = (undefined *)0x0;
      iVar6 = _posix_memalign(&puStack_80,8,uVar18);
      puVar8 = puStack_80;
      if (iVar6 == 0) goto LAB_10363a1ac;
LAB_10363a380:
      uVar10 = func_0x0001087c906c(8,uVar18);
      FUN_10336eefc(lStack_b8,puStack_80);
      FUN_1032b5104(&puStack_80);
      auVar26 = __Unwind_Resume(uVar10);
      lVar22 = auVar26._8_8_;
      puVar12 = auVar26._0_8_;
      uStack_e8 = 0x10363a3c0;
      uVar10 = *(undefined8 *)(lVar22 + 0x20);
      uVar14 = *(undefined8 *)(lVar22 + 0x28);
      uVar16 = *(ulong *)(lVar22 + 8);
      if (uVar16 == 0) {
        uStack_338 = 0;
        puStack_340 = &UNK_108d52778;
        alStack_328[0] = 0;
        puStack_330 = (undefined *)0x0;
        goto LAB_10363a604;
      }
      uVar19 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar19;
      puStack_f0 = &stack0xfffffffffffffff0;
      if (SUB168(auVar3 * ZEXT816(0x1f0),8) == 0) {
        uVar20 = uVar19 * 0x1f0;
        uVar18 = uVar16 + 9;
        uVar1 = uVar20 + uVar18;
        if ((CARRY8(uVar20,uVar18)) || (0x7ffffffffffffff8 < uVar1)) goto LAB_10363a45c;
        uStack_390 = uVar14;
        uStack_388 = uVar10;
        if (uVar1 == 0) goto LAB_10363a474;
        puStack_380 = puVar12;
        if (uVar1 < 8) {
          puStack_340 = (undefined *)0x0;
          iVar6 = _posix_memalign(&puStack_340,8,uVar1);
          puVar8 = puStack_340;
          if (iVar6 == 0) goto LAB_10363a49c;
LAB_10363a640:
          uVar10 = func_0x0001087c906c(8,uVar1);
          FUN_103376e24(uVar18,puStack_3a0);
          FUN_1032f347c(&puStack_360);
          auVar27 = __Unwind_Resume(uVar10);
          lVar22 = auVar27._8_8_;
          puVar12 = auVar27._0_8_;
          uStack_3a8 = 0x10363a684;
          uVar10 = *(undefined8 *)(lVar22 + 0x20);
          uVar14 = *(undefined8 *)(lVar22 + 0x28);
          uVar16 = *(ulong *)(lVar22 + 8);
          if (uVar16 == 0) {
            uStack_438 = 0;
            puStack_440 = &UNK_108d52778;
            lStack_428 = 0;
            lStack_430 = 0;
            goto LAB_10363a87c;
          }
          uVar20 = uVar16 + 1;
          ppuStack_3b0 = &puStack_f0;
          if (uVar20 >> 0x3b == 0) {
            uVar19 = uVar20 * 0x20;
            uVar18 = uVar16 + 9;
            uVar1 = uVar19 + uVar18;
            if ((CARRY8(uVar19,uVar18)) || (0x7ffffffffffffff8 < uVar1)) goto LAB_10363a714;
            uStack_468 = uVar14;
            uStack_460 = uVar10;
            if (uVar1 == 0) goto LAB_10363a72c;
            puStack_458 = puVar12;
            if (uVar1 < 8) {
              puStack_420 = (undefined *)0x0;
              iVar6 = _posix_memalign(&puStack_420,8,uVar1);
              puVar8 = puStack_420;
              if (iVar6 == 0) goto LAB_10363a754;
LAB_10363a8b8:
              uVar10 = func_0x0001087c906c(8,uVar1);
              FUN_103376068(uVar18,puStack_420);
              FUN_1032eacac(&puStack_420);
              auVar28 = __Unwind_Resume(uVar10);
              lVar22 = auVar28._8_8_;
              puVar12 = auVar28._0_8_;
              uStack_478 = 0x10363a8e4;
              uVar10 = *(undefined8 *)(lVar22 + 0x20);
              uVar14 = *(undefined8 *)(lVar22 + 0x28);
              uVar16 = *(ulong *)(lVar22 + 8);
              if (uVar16 == 0) {
                uStack_508 = 0;
                puStack_510 = &UNK_108d52778;
                lStack_4f8 = 0;
                uStack_500 = 0;
                goto LAB_10363aaf4;
              }
              uVar18 = uVar16 + 1;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = uVar18;
              pppuStack_480 = &ppuStack_3b0;
              if (SUB168(auVar4 * ZEXT816(0x18),8) == 0) {
                uVar20 = uVar18 * 0x18;
                uVar19 = uVar16 + 9;
                uVar1 = uVar20 + uVar19;
                if ((CARRY8(uVar20,uVar19)) || (0x7ffffffffffffff8 < uVar1)) goto LAB_10363a980;
                uStack_540 = uVar14;
                uStack_538 = uVar10;
                if (uVar1 == 0) goto LAB_10363a998;
                puStack_530 = puVar12;
                if (uVar1 < 8) {
                  puStack_4f0 = (undefined *)0x0;
                  iVar6 = _posix_memalign(&puStack_4f0,8,uVar1);
                  puStack_520 = puStack_4f0;
                  if (iVar6 != 0) goto LAB_10363ab20;
                }
                else {
                  puStack_520 = (undefined *)_malloc(uVar1);
                }
                auVar28._8_8_ = lVar22;
                auVar28._0_8_ = puStack_530;
                if (puStack_520 == (undefined *)0x0) {
LAB_10363ab20:
                  uVar10 = func_0x0001087c906c(8,uVar1);
                  FUN_103372998(uVar19,puStack_4f0);
                  FUN_1032cd278(&puStack_4f0);
                  auVar29 = __Unwind_Resume(uVar10);
                  puVar12 = auVar29._8_8_;
                  lVar22 = auVar29._0_8_;
                  uStack_558 = 0x10363ab4c;
                  lStack_588 = lVar22;
                  uStack_570 = uVar1;
                  uStack_568 = uVar10;
                  ppppuStack_560 = &pppuStack_480;
                  bStack_578 = (**(code **)(puVar12[1] + 0x18))(*puVar12,&UNK_108d90c90,0x17);
                  bStack_577 = 0;
                  puStack_580 = puVar12;
                  __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
                            (&puStack_580,&UNK_108cde070,0x10,lVar22 + 0x38,&UNK_10b2cec98);
                  __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
                            (&puStack_580,&UNK_108d90ca7,0x1a,lVar22 + 0x20,&UNK_10b2cfe38);
                  __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
                            (&puStack_580,&UNK_108d90cc1,0x16,&lStack_588,&UNK_10b2cfe58);
                  uVar7 = (uint)(bStack_577 | bStack_578);
                  if ((bStack_577 == 1) && ((bStack_578 & 1) == 0)) {
                    if (*(char *)((long)puStack_580 + 0x12) < '\0') {
                      uVar10 = *puStack_580;
                      pcVar5 = *(code **)(puStack_580[1] + 0x18);
                      puVar8 = &UNK_108f5894b;
                      uVar14 = 1;
                    }
                    else {
                      uVar10 = *puStack_580;
                      pcVar5 = *(code **)(puStack_580[1] + 0x18);
                      puVar8 = &UNK_108f5894c;
                      uVar14 = 2;
                    }
                    uVar7 = (*pcVar5)(uVar10,puVar8,uVar14);
                  }
                  return (undefined8 *)(ulong)(uVar7 & 1);
                }
              }
              else {
LAB_10363a980:
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_109a75098,0x39,&UNK_10b3ad9c8);
                auVar28._8_8_ = extraout_x1_02;
                auVar28._0_8_ = puStack_530;
LAB_10363a998:
                puStack_520 = (undefined *)0x8;
              }
              puVar12 = auVar28._8_8_;
              puStack_530 = auVar28._0_8_;
              puStack_520 = puStack_520 + uVar20;
              uStack_4e0 = uVar16;
              if (7 < uVar16) {
                uStack_4e0 = (uVar18 >> 3) * 7;
              }
              uStack_4d8 = 0;
              plStack_518 = (long *)*puVar12;
              puStack_4f0 = puStack_520;
              uStack_4e8 = uVar16;
              _memcpy(puStack_520,plStack_518,uVar19);
              lStack_528 = puVar12[3];
              puStack_548 = puVar12;
              if (lStack_528 != 0) {
                plVar13 = plStack_518 + 1;
                lVar22 = *plStack_518;
                uVar16 = CONCAT17(-(-1 < lVar22),
                                  CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar22 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                         0x8080808080808080;
                plVar23 = plStack_518;
                lVar22 = lStack_528;
                do {
                  while (uVar16 == 0) {
                    lVar24 = *plVar13;
                    plVar13 = plVar13 + 1;
                    plVar23 = plVar23 + -0x18;
                    uVar16 = CONCAT17(-(-1 < lVar24),
                                      CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                               CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                                        CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20
                                                                              )),
                                                                 CONCAT13(-(-1 < (char)((ulong)
                                                  lVar24 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)lVar24 >> 0x10)),
                                                           CONCAT11(-(-1 < (char)((ulong)lVar24 >> 8
                                                                                 )),
                                                                    -(-1 < (char)lVar24)))))))) &
                             0x8080808080808080;
                  }
                  uVar20 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10
                  ;
                  plVar17 = plVar23 + (long)-(int)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20)
                                                  >> 3) * 3;
                  lVar24 = plVar17[-2];
                  lVar25 = plVar17[-1];
                  if (lVar25 == 0) {
                    lVar11 = 1;
                  }
                  else {
                    lVar11 = _malloc(lVar25);
                    if (lVar11 == 0) {
                      func_0x0001087c9084(1,lVar25);
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x10363aad8);
                      (*pcVar5)();
                    }
                  }
                  uVar16 = uVar16 - 1 & uVar16;
                  lVar22 = lVar22 + -1;
                  _memcpy(lVar11,lVar24,lVar25);
                  lVar24 = (long)plStack_518 - (long)plVar17 >> 3;
                  *(long *)(puStack_520 + lVar24 * -8 + -0x18) = lVar25;
                  *(long *)(puStack_520 + lVar24 * -8 + -0x10) = lVar11;
                  *(long *)(puStack_520 + lVar24 * -8 + -8) = lVar25;
                } while (lVar22 != 0);
              }
              uStack_500 = puStack_548[2];
              uStack_508 = uStack_4e8;
              puStack_510 = puStack_4f0;
              lStack_4f8 = lStack_528;
              puVar12 = puStack_530;
              uVar10 = uStack_538;
              uVar14 = uStack_540;
LAB_10363aaf4:
              puVar12[4] = uVar10;
              puVar12[5] = uVar14;
              puVar12[1] = uStack_508;
              *puVar12 = puStack_510;
              puVar12[3] = lStack_4f8;
              puVar12[2] = uStack_500;
              return puVar12;
            }
            puVar8 = (undefined *)_malloc(uVar1);
LAB_10363a754:
            auVar27._8_8_ = lVar22;
            auVar27._0_8_ = puStack_458;
            if (puVar8 == (undefined *)0x0) goto LAB_10363a8b8;
          }
          else {
LAB_10363a714:
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39,&UNK_10b3ad9c8);
            auVar27._8_8_ = extraout_x1_01;
            auVar27._0_8_ = puStack_458;
LAB_10363a72c:
            puVar8 = (undefined *)0x8;
          }
          plVar13 = auVar27._8_8_;
          puStack_458 = auVar27._0_8_;
          puVar8 = puVar8 + uVar19;
          uStack_410 = uVar16;
          if (7 < uVar16) {
            uStack_410 = (uVar20 >> 3) * 7;
          }
          uStack_408 = 0;
          plVar23 = (long *)*plVar13;
          puStack_420 = puVar8;
          uStack_418 = uVar16;
          _memcpy(puVar8,plVar23,uVar18);
          lStack_450 = plVar13[3];
          plStack_470 = plVar13;
          if (lStack_450 != 0) {
            plVar13 = plVar23 + 1;
            lVar22 = *plVar23;
            puStack_448 = puVar8 + -0x20;
            uVar16 = CONCAT17(-(-1 < lVar22),
                              CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar22 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                     0x8080808080808080;
            plVar17 = plVar23;
            lVar22 = lStack_450;
            do {
              while (uVar16 == 0) {
                lVar24 = *plVar13;
                plVar13 = plVar13 + 1;
                plVar17 = plVar17 + -0x20;
                uVar16 = CONCAT17(-(-1 < lVar24),
                                  CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar24 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar24 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar24 >> 8)),
                                                           -(-1 < (char)lVar24)))))))) &
                         0x8080808080808080;
              }
              uVar20 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
              lVar25 = (long)plVar17 + (LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) & 0x78U) * -4;
              uVar10 = *(undefined8 *)(lVar25 + -0x18);
              lVar24 = *(long *)(lVar25 + -0x10);
              if (lVar24 == 0) {
                lVar11 = 1;
              }
              else {
                lVar11 = _malloc(lVar24);
                if (lVar11 == 0) {
                  func_0x0001087c9084(1,lVar24);
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10363a8b8);
                  (*pcVar5)();
                }
              }
              _memcpy(lVar11,uVar10,lVar24);
              uVar16 = uVar16 - 1 & uVar16;
              uVar2 = *(undefined1 *)(lVar25 + -8);
              plVar15 = (long *)(puStack_448 + -((long)plVar23 - lVar25));
              *plVar15 = lVar24;
              plVar15[1] = lVar11;
              plVar15[2] = lVar24;
              *(undefined1 *)(plVar15 + 3) = uVar2;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          lStack_430 = plStack_470[2];
          uStack_438 = uStack_418;
          puStack_440 = puStack_420;
          lStack_428 = lStack_450;
          puVar12 = puStack_458;
          uVar10 = uStack_460;
          uVar14 = uStack_468;
LAB_10363a87c:
          puVar12[4] = uVar10;
          puVar12[5] = uVar14;
          puVar12[1] = uStack_438;
          *puVar12 = puStack_440;
          puVar12[3] = lStack_428;
          puVar12[2] = lStack_430;
          return puVar12;
        }
        puVar8 = (undefined *)_malloc(uVar1);
LAB_10363a49c:
        auVar26._8_8_ = lVar22;
        auVar26._0_8_ = puStack_380;
        if (puVar8 == (undefined *)0x0) goto LAB_10363a640;
      }
      else {
LAB_10363a45c:
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39,&UNK_10b3ad9c8);
        auVar26._8_8_ = extraout_x1_00;
        auVar26._0_8_ = puStack_380;
LAB_10363a474:
        puVar8 = (undefined *)0x8;
      }
      puVar12 = auVar26._8_8_;
      puStack_380 = auVar26._0_8_;
      puStack_3a0 = puVar8 + uVar20;
      uStack_350 = uVar16;
      if (7 < uVar16) {
        uStack_350 = (uVar19 >> 3) * 7;
      }
      uStack_348 = 0;
      plStack_368 = (long *)*puVar12;
      puStack_360 = puStack_3a0;
      uStack_358 = uVar16;
      _memcpy(puStack_3a0,plStack_368,uVar18);
      lStack_378 = puVar12[3];
      puStack_398 = puVar12;
      if (lStack_378 != 0) {
        puStack_370 = puStack_3a0 + -0x1f0;
        plVar13 = plStack_368 + 1;
        lVar22 = *plStack_368;
        uVar16 = CONCAT17(-(-1 < lVar22),
                          CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar22 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar22
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar22 >> 8)),-(-1 < (char)lVar22)))))))) &
                 0x8080808080808080;
        plVar23 = plStack_368;
        lVar22 = lStack_378;
        do {
          while (uVar16 == 0) {
            lVar24 = *plVar13;
            plVar13 = plVar13 + 1;
            plVar23 = plVar23 + -0x1f0;
            uVar16 = CONCAT17(-(-1 < lVar24),
                              CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar24 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar24 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar24 >> 8)),
                                                           -(-1 < (char)lVar24)))))))) &
                     0x8080808080808080;
          }
          uVar20 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          plVar17 = plVar23 + (long)-(int)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) *
                              0x3e;
          lVar24 = plVar17[-0x3d];
          puVar8 = (undefined *)plVar17[-0x3c];
          if (puVar8 == (undefined *)0x0) {
            lVar25 = 1;
          }
          else {
            lVar25 = _malloc(puVar8);
            if (lVar25 == 0) {
              func_0x0001087c9084(1,puVar8);
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10363a640);
              (*pcVar5)();
            }
          }
          _memcpy(lVar25,lVar24,puVar8);
          puStack_340 = puVar8;
          uStack_338 = lVar25;
          puStack_330 = puVar8;
          FUN_103637c44(alStack_328,plVar17 + -0x3b);
          uVar16 = uVar16 - 1 & uVar16;
          lVar22 = lVar22 + -1;
          _memcpy(puStack_370 + ((long)plStack_368 - (long)plVar17 >> 4) * -0x10,&puStack_340,0x1f0)
          ;
        } while (lVar22 != 0);
      }
      puStack_330 = (undefined *)puStack_398[2];
      uStack_338 = uStack_358;
      puStack_340 = puStack_360;
      alStack_328[0] = lStack_378;
      puVar12 = puStack_380;
      uVar10 = uStack_388;
      uVar14 = uStack_390;
LAB_10363a604:
      puVar12[4] = uVar10;
      puVar12[5] = uVar14;
      puVar12[1] = uStack_338;
      *puVar12 = puStack_340;
      puVar12[3] = alStack_328[0];
      puVar12[2] = puStack_330;
      return puVar12;
    }
    puVar8 = (undefined *)_malloc(uVar18);
LAB_10363a1ac:
    if (puVar8 == (undefined *)0x0) goto LAB_10363a380;
  }
  else {
LAB_10363a16c:
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39,&UNK_10b3ad9c8);
    param_2 = extraout_x1;
LAB_10363a184:
    puVar8 = (undefined *)0x8;
  }
  puVar8 = puVar8 + unaff_x22;
  uStack_70 = uVar16;
  if (7 < uVar16) {
    uStack_70 = (uVar20 >> 3) * 7;
  }
  uStack_68 = 0;
  plStack_a8 = (long *)*param_2;
  puStack_80 = puVar8;
  uStack_78 = uVar16;
  _memcpy(puVar8,plStack_a8,unaff_x20);
  lStack_c0 = param_2[3];
  puStack_e0 = param_2;
  if (lStack_c0 != 0) {
    lVar22 = 0;
    puStack_b0 = puVar8 + -0x30;
    plVar13 = plStack_a8 + 1;
    lVar24 = *plStack_a8;
    uVar16 = CONCAT17(-(-1 < lVar24),
                      CONCAT16(-(-1 < (char)((ulong)lVar24 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar24 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar24 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar24 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar24 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar24 >> 8)),-(-1 < (char)lVar24)))))))) &
             0x8080808080808080;
    plVar23 = plStack_a8;
    lVar24 = lStack_c0;
    do {
      while (uVar16 == 0) {
        lVar25 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar23 = plVar23 + -0x30;
        uVar16 = CONCAT17(-(-1 < lVar25),
                          CONCAT16(-(-1 < (char)((ulong)lVar25 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar25 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar25 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar25 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar25
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar25 >> 8)),-(-1 < (char)lVar25)))))))) &
                 0x8080808080808080;
      }
      uVar20 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      plVar17 = plVar23 + (long)-(int)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) * 6;
      lVar25 = plVar17[-5];
      lVar11 = plVar17[-4];
      if (lVar11 == 0) {
        lVar9 = 1;
        _memcpy(1,lVar25,0);
        lVar25 = plVar17[-2];
        lVar21 = plVar17[-1];
        if (lVar21 == 0) goto LAB_10363a22c;
LAB_10363a2fc:
        lStack_b8 = lVar22;
        lVar22 = _malloc(lVar21);
        if (lVar22 == 0) {
          func_0x0001087c9084(1,lVar21);
LAB_10363a37c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10363a380);
          (*pcVar5)();
        }
      }
      else {
        lVar9 = _malloc(lVar11);
        if (lVar9 == 0) {
          lStack_b8 = lVar22;
          func_0x0001087c9084(1,lVar11);
          goto LAB_10363a37c;
        }
        _memcpy(lVar9,lVar25,lVar11);
        lVar25 = plVar17[-2];
        lVar21 = plVar17[-1];
        if (lVar21 != 0) goto LAB_10363a2fc;
LAB_10363a22c:
        lVar22 = 1;
      }
      uVar16 = uVar16 - 1 & uVar16;
      lVar24 = lVar24 + -1;
      _memcpy(lVar22,lVar25,lVar21);
      lVar25 = (long)plStack_a8 - (long)plVar17 >> 4;
      plVar17 = (long *)(puStack_b0 + lVar25 * -0x10);
      *plVar17 = lVar11;
      plVar17[1] = lVar9;
      plVar17[2] = lVar11;
      plVar17[3] = lVar21;
      plVar17[4] = lVar22;
      plVar17[5] = lVar21;
      lVar22 = lVar25 * -0x5555555555555555 + 1;
    } while (lVar24 != 0);
  }
  uStack_90 = puStack_e0[2];
  uStack_98 = uStack_78;
  puStack_a0 = puStack_80;
  lStack_88 = lStack_c0;
  uVar10 = uStack_d0;
  uVar14 = uStack_d8;
LAB_10363a330:
  puStack_c8[4] = uVar10;
  puStack_c8[5] = uVar14;
  puStack_c8[1] = uStack_98;
  *puStack_c8 = puStack_a0;
  puStack_c8[3] = lStack_88;
  puStack_c8[2] = uStack_90;
  return puStack_c8;
}

