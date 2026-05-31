
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b12614(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 extraout_x1;
  undefined8 *puVar16;
  undefined8 extraout_x1_00;
  byte bVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  uint uVar20;
  long lVar21;
  char *pcVar22;
  long lVar23;
  undefined8 *puVar24;
  ushort *unaff_x23;
  byte bVar25;
  byte bVar26;
  char *pcVar27;
  char *unaff_x28;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  int iStack_480;
  undefined4 uStack_47c;
  undefined5 uStack_478;
  undefined4 uStack_473;
  undefined7 uStack_46f;
  char *pcStack_468;
  ushort **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  char *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  ushort *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  char *pcStack_410;
  ushort *puStack_408;
  char *pcStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [3];
  undefined1 uStack_3ad;
  undefined4 uStack_3ac;
  undefined1 uStack_3a8;
  undefined2 uStack_3a7;
  undefined1 uStack_3a5;
  undefined4 uStack_3a4;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  char *pcStack_398;
  ushort **ppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  char *pcStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  ushort *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  char *pcStack_340;
  ushort *puStack_338;
  char *pcStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  char *pcStack_2d8;
  ushort *puStack_2d0;
  char *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined2 uStack_280;
  undefined1 uStack_27e;
  undefined5 uStack_27d;
  ushort *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  char *pcStack_228;
  ushort **ppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  char *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ushort *puStack_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 auStack_1d0 [32];
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  bVar26 = *(byte *)(param_2 + 2);
  if (bVar26 < 3) {
    if (bVar26 != 0) {
      if (bVar26 == 1) {
        func_0x000108a07af4(&UNK_10b22dca0);
      }
      func_0x000108a07b10();
      *(undefined1 *)(param_2 + 2) = 2;
      uVar9 = __Unwind_Resume();
      FUN_100d0db68(param_2 + 3);
      *(undefined1 *)(param_2 + 2) = 2;
      __Unwind_Resume(uVar9);
      auVar29 = func_0x000108a07bc4();
      auVar28._8_8_ = auStack_240._8_8_;
      auVar28._0_8_ = auStack_240._0_8_;
      puVar16 = auVar29._8_8_;
      puVar10 = auVar29._0_8_;
      bVar26 = *(byte *)((long)puVar16 + 0x4d);
      if (bVar26 < 3) {
        if (bVar26 != 0) {
          if (bVar26 == 1) {
            func_0x000108a07af4(&UNK_10b22dcb8);
          }
          func_0x000108a07b10();
LAB_100b1377c:
          func_0x000108a07af4(&UNK_10b22de20);
          goto LAB_100b137a8;
        }
        *(undefined1 *)((long)puVar16 + 0x4c) = 0;
        puVar16[4] = puVar16[8];
        *puVar16 = puVar16[2];
        puVar16[1] = puVar16[3];
        *(undefined2 *)((long)puVar16 + 0x4a) = *(undefined2 *)(puVar16 + 9);
        puVar16[0x92] = puVar16[8];
        *(undefined1 *)((long)puVar16 + 0x49b) = 0;
LAB_100b1291c:
        auVar28 = FUN_100b14e84(puVar16 + 10,param_3);
        puVar24 = auVar28._8_8_;
        if ((auVar28._0_8_ & 1) != 0) {
          *puVar10 = 2;
          uVar6 = 3;
          goto LAB_100b136f4;
        }
        FUN_100cd5a2c(puVar16 + 10);
        if (puVar24 == (undefined8 *)0x0) {
          __ZN19codex_network_proxy6policy14normalize_host17h2c92f2b136a2cdb4E
                    (auStack_3b0,*puVar16,puVar16[1]);
          if (CONCAT71(uStack_39f,uStack_3a0) == 0) {
            puVar13 = (undefined8 *)FUN_10899ec8c(&UNK_108e49a0a,0xd);
            puVar24 = puVar13;
            if (CONCAT44(uStack_3ac,CONCAT13(uStack_3ad,CONCAT21(auStack_3b0._1_2_,auStack_3b0[0])))
                != 0) {
              _free(CONCAT44(uStack_3a4,CONCAT13(uStack_3a5,CONCAT21(uStack_3a7,uStack_3a8))));
            }
          }
          else {
            lVar21 = CONCAT44(uStack_3ac,
                              CONCAT13(uStack_3ad,CONCAT21(auStack_3b0._1_2_,auStack_3b0[0])));
            puVar13 = (undefined8 *)
                      CONCAT44(uStack_3a4,CONCAT13(uStack_3a5,CONCAT21(uStack_3a7,uStack_3a8)));
            if (lVar21 != -0x8000000000000000) {
              puVar16[5] = lVar21;
              puVar16[6] = puVar13;
              puVar16[7] = CONCAT71(uStack_39f,uStack_3a0);
              puVar16[10] = *(long *)(puVar16[4] + 0xd8) + 0x10;
              *(undefined1 *)(puVar16 + 0x15) = 0;
              goto LAB_100b129c4;
            }
          }
          (**(code **)*puVar13)();
          uVar6 = 0;
          unaff_x23 = (ushort *)0x1;
        }
        else {
          uVar6 = 1;
        }
      }
      else {
        if (bVar26 == 3) goto LAB_100b1291c;
        if (bVar26 == 4) {
LAB_100b129c4:
          auVar28 = FUN_100fd4eb8(puVar16 + 10,param_3);
          lVar21 = auVar28._8_8_;
          pcVar22 = auVar28._0_8_;
          if (pcVar22 == (char *)0x0) {
            *puVar10 = 2;
            uVar6 = 4;
            goto LAB_100b136f4;
          }
          if ((*(char *)(puVar16 + 0x15) == '\x03') && (*(char *)(puVar16 + 0x14) == '\x03')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (puVar16 + 0xc);
            if (puVar16[0xd] != 0) {
              (**(code **)(puVar16[0xd] + 0x18))(puVar16[0xe]);
            }
          }
          FUN_1047b4354(&pcStack_2d8,lVar21,1);
          FUN_100f181a8(auStack_240,lVar21 + 0xb0);
          FUN_100f181a8(&iStack_480,lVar21 + 0x90);
          pcVar1 = pcStack_2c8;
          puVar12 = puStack_2d0;
          pcVar27 = pcStack_2d8;
          bVar26 = *(byte *)(lVar21 + 0x87);
          uStack_3a8 = (undefined1)auStack_240._8_8_;
          uStack_3a7 = SUB82(auStack_240._8_8_,1);
          uStack_3a5 = SUB81(auStack_240._8_8_,3);
          uStack_3a4 = SUB84(auStack_240._8_8_,4);
          auStack_3b0[0] = (char)auStack_240._0_8_;
          auStack_3b0._1_2_ = SUB82(auStack_240._0_8_,1);
          uStack_3ad = SUB81(auStack_240._0_8_,3);
          uStack_3ac = SUB84(auStack_240._0_8_,4);
          pcStack_398 = pcStack_228;
          uStack_3a0 = (undefined1)uStack_230;
          uStack_39f = (undefined7)((ulong)uStack_230 >> 8);
          pcStack_388 = (code *)CONCAT35((undefined3)uStack_473,uStack_478);
          ppuStack_390 = (ushort **)CONCAT44(uStack_47c,iStack_480);
          uStack_380 = CONCAT71(uStack_46f,uStack_473._3_1_);
          pcStack_378 = pcStack_468;
          if (*pcVar22 == '\0') {
            *pcVar22 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar22,extraout_x1_00,1000000000);
          }
          FUN_1060fa678(pcVar22,1,pcVar22);
          puVar16[0x33] = CONCAT44(uStack_3a4,CONCAT13(uStack_3a5,CONCAT21(uStack_3a7,uStack_3a8)));
          puVar16[0x32] =
               CONCAT44(uStack_3ac,CONCAT13(uStack_3ad,CONCAT21(auStack_3b0._1_2_,auStack_3b0[0])));
          puVar16[0x35] = pcStack_398;
          puVar16[0x34] = CONCAT71(uStack_39f,uStack_3a0);
          puVar16[0x37] = pcStack_388;
          puVar16[0x36] = ppuStack_390;
          puVar16[0x39] = pcStack_378;
          puVar16[0x38] = uStack_380;
          puVar16[0xc] = puVar12;
          puVar16[0xb] = pcVar27;
          puVar16[0xd] = pcVar1;
          lVar21 = puVar16[0xb];
          *(undefined1 *)((long)puVar16 + 0x4c) = 0;
          *(bool *)(puVar16 + 10) = lVar21 == -0x8000000000000000;
          if (lVar21 == -0x8000000000000000) {
            lVar21 = 0;
            puVar16[0xf] = 8;
            puVar16[0x10] = 0;
          }
          else {
            puVar16[0x10] = pcVar1;
            puVar16[0xf] = puVar12;
          }
          puVar16[0xe] = lVar21;
          lVar21 = puVar16[6];
          pcVar27 = (char *)puVar16[7];
          uVar11 = __ZN19codex_network_proxy7runtime32globset_matches_host_or_unscoped17h55d2adbb76d32ea6E
                             (puVar16 + 0x32,lVar21,pcVar27);
          if ((uVar11 & 1) != 0) {
            unaff_x23 = (ushort *)0x0;
            lVar21 = puVar16[0xf];
            lVar23 = puVar16[0x10];
            goto joined_r0x000100b12b0c;
          }
          uVar6 = __ZN19codex_network_proxy7runtime32globset_matches_host_or_unscoped17h55d2adbb76d32ea6E
                            (puVar16 + 0x36,lVar21,pcVar27);
          *(undefined1 *)((long)puVar16 + 0x51) = uVar6;
          if ((bVar26 & 1) == 0) {
            auStack_3b0[0] = (char)lVar21;
            auStack_3b0._1_2_ = (undefined2)((ulong)lVar21 >> 8);
            uStack_3ad = (undefined1)((ulong)lVar21 >> 0x18);
            uStack_3ac = (undefined4)((ulong)lVar21 >> 0x20);
            uVar19 = uStack_3ac;
            uStack_3a8 = SUB81(pcVar27,0);
            uStack_3a7 = (undefined2)((ulong)pcVar27 >> 8);
            uStack_3a5 = (undefined1)((ulong)pcVar27 >> 0x18);
            uStack_3a4 = (undefined4)((ulong)pcVar27 >> 0x20);
            uStack_3a0 = 0;
            uStack_39f = 0;
            pcStack_388 = (code *)CONCAT71(pcStack_388._1_7_,1);
            ppuStack_390 = (ushort **)0x2500000025;
            pcStack_398 = pcVar27;
            FUN_104835b28(&iStack_480,auStack_3b0);
            if (iStack_480 == 1) {
              pcVar22 = (char *)CONCAT35((undefined3)uStack_473,uStack_478);
              iStack_480 = (int)lVar21;
              uStack_47c = uVar19;
              uVar11 = FUN_1055b965c(&iStack_480);
              if ((((uVar11 & 1) == 0) &&
                  (FUN_1055b9bec(auStack_3b0,&iStack_480), auStack_3b0[0] != '\x01')) ||
                 (lVar23 = lVar21, CONCAT35((undefined3)uStack_473,uStack_478) != 0)) {
                lVar23 = 0;
              }
            }
            else {
              lVar23 = 0;
            }
            pcVar1 = pcVar27;
            lVar15 = lVar21;
            if (lVar23 != 0) {
              pcVar1 = pcVar22;
              lVar15 = lVar23;
            }
            uVar11 = __ZN19codex_network_proxy6policy16is_loopback_host17hbf2ea6571ac13c1eE
                               (puVar16 + 5);
            if ((uVar11 & 1) == 0) {
              auStack_240._0_8_ = lVar15;
              auStack_240._8_8_ = pcVar1;
              uVar11 = FUN_1055b965c(auStack_240);
              if ((uVar11 & 1) == 0) {
                FUN_1055b9bec(auStack_3b0,auStack_240);
                if (auStack_3b0[0] == '\x01') {
                  uVar19 = CONCAT13((undefined1)uStack_3ac,CONCAT12(uStack_3ad,auStack_3b0._1_2_));
                  pcStack_2d8 = (char *)CONCAT17((undefined1)uStack_3a4,
                                                 CONCAT16(uStack_3a5,
                                                          CONCAT24(uStack_3a7,
                                                                   CONCAT13(uStack_3a8,
                                                                            uStack_3ac._1_3_))));
                  puStack_2d0 = (ushort *)
                                CONCAT44(puStack_2d0._4_4_,CONCAT13(uStack_3a0,uStack_3a4._1_3_));
                  if ((char *)auStack_240._8_8_ == (char *)0x0) {
                    auStack_3b0[0] = (char)((uint)uStack_3ac >> 8);
                    auStack_3b0._1_2_ = (undefined2)((uint)uStack_3ac >> 0x10);
                    uStack_3ad = uStack_3a8;
                    uStack_3ac = (undefined4)((ulong)pcStack_2d8 >> 0x20);
                    uStack_3a8 = (undefined1)((uint)uStack_3a4 >> 8);
                    uStack_3a7 = (undefined2)((uint)uStack_3a4 >> 0x10);
                    uStack_3a5 = uStack_3a0;
                    uVar6 = 1;
                    goto LAB_100b12ec4;
                  }
                }
              }
              else if ((char *)auStack_240._8_8_ == (char *)0x0) {
                uVar6 = 0;
                uVar19 = (undefined4)(uVar11 >> 8);
LAB_100b12ec4:
                uStack_478 = (undefined5)
                             (CONCAT44(uStack_3ac,
                                       CONCAT13(uStack_3ad,
                                                CONCAT21(auStack_3b0._1_2_,auStack_3b0[0]))) >> 0x18
                             );
                uStack_473 = CONCAT13(uStack_3a5,CONCAT21(uStack_3a7,uStack_3a8));
                iStack_480._1_3_ = (undefined3)uVar19;
                iStack_480 = CONCAT31(iStack_480._1_3_,uVar6);
                uStack_47c._0_1_ = (undefined1)((uint)uVar19 >> 0x18);
                uStack_47c = CONCAT31(CONCAT21(auStack_3b0._1_2_,auStack_3b0[0]),
                                      (undefined1)uStack_47c);
                uVar11 = __ZN19codex_network_proxy6policy16is_non_public_ip17h16d30dbe479a3e2dE
                                   (&iStack_480);
                if ((uVar11 & 1) != 0) goto LAB_100b12e44;
              }
              unaff_x28 = (char *)0x0;
              lVar23 = 2;
              puVar16[0x11] = 2;
              uVar18 = *(undefined2 *)((long)puVar16 + 0x4a);
              *(undefined4 *)(puVar16 + 0x12) = 0;
              puVar16[0x13] = lVar21;
              puVar16[0x14] = pcVar27;
              *(undefined2 *)(puVar16 + 0x31) = uVar18;
              *(undefined1 *)((long)puVar16 + 0x18c) = 0;
              goto LAB_100b128e8;
            }
LAB_100b12e44:
            uVar11 = __ZN19codex_network_proxy7runtime29is_explicit_local_allowlisted17h69549672ca6cececE
                               (puVar16[0xf],puVar16[0x10],puVar16 + 5);
            if ((uVar11 & 1) == 0) goto LAB_100b13620;
          }
LAB_100b132f8:
          if ((*(byte *)(puVar16 + 10) & 1) == 0) {
            uVar20 = 3;
            if (*(char *)((long)puVar16 + 0x51) == '\0') {
              uVar20 = 1;
            }
            unaff_x23 = (ushort *)(ulong)uVar20;
          }
          else {
            unaff_x23 = (ushort *)0x1;
          }
          lVar21 = puVar16[0xf];
          lVar23 = puVar16[0x10];
          if (lVar23 != 0) {
            puVar24 = (undefined8 *)(lVar21 + 8);
            do {
              if (puVar24[-1] != 0) {
                _free(*puVar24);
              }
              puVar24 = puVar24 + 3;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          if (puVar16[0xe] != 0) {
            _free(lVar21);
          }
          *(undefined1 *)((long)puVar16 + 0x4c) = 0;
          lVar23 = puVar16[0x37];
          lVar21 = puVar16[0x38] + 1;
          lVar15 = lVar23;
          while (lVar21 = lVar21 + -1, lVar21 != 0) {
            FUN_100df1440(lVar15);
            lVar15 = lVar15 + 0x40;
          }
          if (puVar16[0x36] != 0) {
            _free(lVar23);
          }
          puVar24 = (undefined8 *)puVar16[0x33];
          lVar21 = puVar16[0x34] + 1;
          puVar13 = puVar24;
          while (lVar21 = lVar21 + -1, lVar21 != 0) {
            FUN_100df1440(puVar13);
            puVar13 = puVar13 + 8;
          }
        }
        else {
          bVar26 = *(byte *)((long)puVar16 + 0x18c);
          if (bVar26 < 2) {
            if (bVar26 != 0) goto LAB_100b1377c;
            lVar21 = puVar16[0x13];
            pcVar27 = (char *)puVar16[0x14];
            uVar18 = *(undefined2 *)(puVar16 + 0x31);
            lVar23 = puVar16[0x11];
            unaff_x28 = (char *)(ulong)*(uint *)(puVar16 + 0x12);
LAB_100b128e8:
            puVar16[0x15] = lVar21;
            puVar16[0x16] = pcVar27;
            *(undefined2 *)((long)puVar16 + 0x18a) = uVar18;
            *(undefined1 *)((long)puVar16 + 0x18d) = 1;
            auStack_240._0_8_ = lVar21;
            auStack_240._8_8_ = pcVar27;
            uVar11 = FUN_1055b965c(auStack_240);
            if ((uVar11 & 1) == 0) {
              FUN_1055b9bec(auStack_3b0,auStack_240);
              if (auStack_3b0[0] == '\x01') {
                uVar19 = CONCAT13((undefined1)uStack_3ac,CONCAT12(uStack_3ad,auStack_3b0._1_2_));
                pcStack_2d8 = (char *)CONCAT17((undefined1)uStack_3a4,
                                               CONCAT16(uStack_3a5,
                                                        CONCAT24(uStack_3a7,
                                                                 CONCAT13(uStack_3a8,
                                                                          uStack_3ac._1_3_))));
                puStack_2d0 = (ushort *)
                              CONCAT44(puStack_2d0._4_4_,CONCAT13(uStack_3a0,uStack_3a4._1_3_));
                if ((char *)auStack_240._8_8_ == (char *)0x0) {
                  auStack_3b0[0] = (char)((uint)uStack_3ac >> 8);
                  auStack_3b0._1_2_ = (undefined2)((uint)uStack_3ac >> 0x10);
                  uStack_3ad = uStack_3a8;
                  uStack_3ac = (undefined4)((ulong)pcStack_2d8 >> 0x20);
                  uStack_3a8 = (undefined1)((uint)uStack_3a4 >> 8);
                  uStack_3a7 = (undefined2)((uint)uStack_3a4 >> 0x10);
                  uStack_3a5 = uStack_3a0;
                  uVar6 = 1;
                  goto LAB_100b12df8;
                }
              }
LAB_100b12bcc:
              *(undefined1 *)((long)puVar16 + 0x18d) = 0;
              uVar9 = puVar16[0x15];
              pcVar27 = (char *)puVar16[0x16];
              if (pcVar27 == (char *)0x0) {
                puVar12 = (ushort *)0x1;
              }
              else {
                puVar12 = (ushort *)_malloc(pcVar27);
                if (puVar12 == (ushort *)0x0) {
                  func_0x0001087c9084(1,pcVar27);
                  goto LAB_100b137a8;
                }
              }
              _memcpy(puVar12,uVar9,pcVar27);
              uStack_280 = *(undefined2 *)((long)puVar16 + 0x18a);
              uStack_27e = 0;
              pcStack_2d8 = pcVar27;
              puStack_2d0 = puVar12;
              pcStack_2c8 = pcVar27;
              auVar30 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
              unaff_x23 = (ushort *)(auVar30._0_8_ + lVar23);
              if ((lVar23 < 0 != SCARRY8(auVar30._0_8_,lVar23)) ||
                 ((uVar20 = auVar30._8_4_ + (int)unaff_x28, 999999999 < uVar20 &&
                  ((bVar5 = SCARRY8((long)unaff_x23,1), unaff_x23 = (ushort *)((long)unaff_x23 + 1),
                   bVar5 || (uVar20 = uVar20 + 0xc4653600, uVar20 == 1000000000)))))) {
                __ZN5tokio4time5sleep5Sleep10far_future17h6fe06e7f826507d5E(auStack_240,0);
                auVar28._8_8_ = auStack_240._8_8_;
                auVar28._0_8_ = auStack_240._0_8_;
              }
              else {
                auVar28 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E
                                    (&UNK_10b22de08);
                lVar21 = 0x140;
                if ((auVar28._0_8_ & 1) == 0) {
                  lVar21 = 0x200;
                }
                auStack_1d0._0_16_ = auVar28;
                if (*(int *)(auVar28._8_8_ + lVar21 + 0xd8) == 1000000000) {
                  func_0x000108a079f0(&UNK_109bebb98,0x73,&UNK_10b22de08);
                  goto LAB_100b137a8;
                }
                uStack_230 = 0;
                uStack_1d8 = 0;
                puStack_1e8 = unaff_x23;
                uStack_1e0 = uVar20;
              }
              uStack_368 = uStack_1f8;
              uStack_370 = uStack_200;
              puStack_358 = puStack_1e8;
              uStack_360 = uStack_1f0;
              uStack_418 = CONCAT71(uStack_1d7,uStack_1d8);
              uStack_420 = CONCAT44(uStack_1dc,uStack_1e0);
              uStack_3a8 = auVar28[8];
              uStack_3a7 = auVar28._9_2_;
              uStack_3a5 = auVar28[0xb];
              uStack_3a4 = auVar28._12_4_;
              auStack_3b0[0] = auVar28[0];
              auStack_3b0._1_2_ = auVar28._1_2_;
              uStack_3ad = auVar28[3];
              uStack_3ac = auVar28._4_4_;
              pcStack_398 = pcStack_228;
              uStack_3a0 = (undefined1)uStack_230;
              uStack_39f = (undefined7)((ulong)uStack_230 >> 8);
              pcStack_388 = pcStack_218;
              ppuStack_390 = ppuStack_220;
              pcStack_378 = pcStack_208;
              uStack_380 = uStack_210;
              puStack_338 = puStack_2d0;
              pcStack_340 = pcStack_2d8;
              uStack_3b8 = CONCAT53(uStack_27d,CONCAT12(uStack_27e,uStack_280));
              uStack_2f8 = uStack_290;
              uStack_300 = uStack_298;
              uStack_2f0 = uStack_288;
              uStack_318 = uStack_2b0;
              uStack_320 = uStack_2b8;
              uStack_308 = uStack_2a0;
              uStack_310 = uStack_2a8;
              uStack_328 = uStack_2c0;
              pcStack_330 = pcStack_2c8;
              pcStack_458 = pcStack_218;
              ppuStack_460 = ppuStack_220;
              pcStack_448 = pcStack_208;
              uStack_450 = uStack_210;
              uStack_478 = auVar28._8_5_;
              uStack_473._0_3_ = auVar28._13_3_;
              iStack_480 = auVar28._0_4_;
              pcStack_468 = pcStack_228;
              uStack_473 = CONCAT13(uStack_3a0,(undefined3)uStack_473);
              puStack_408 = puStack_2d0;
              pcStack_410 = pcStack_2d8;
              uStack_438 = uStack_1f8;
              uStack_440 = uStack_200;
              puStack_428 = puStack_1e8;
              uStack_430 = uStack_1f0;
              uStack_3c8 = uStack_290;
              uStack_3d0 = uStack_298;
              uStack_3c0 = uStack_288;
              uStack_3e8 = uStack_2b0;
              uStack_3f0 = uStack_2b8;
              uStack_3d8 = uStack_2a0;
              uStack_3e0 = uStack_2a8;
              uStack_3f8 = uStack_2c0;
              pcStack_400 = pcStack_2c8;
              puVar16[0x2a] = uStack_2b0;
              puVar16[0x29] = uStack_2b8;
              puVar16[0x2c] = uStack_2a0;
              puVar16[0x2b] = uStack_2a8;
              puVar16[0x2e] = uStack_290;
              puVar16[0x2d] = uStack_298;
              puVar16[0x30] = uStack_3b8;
              puVar16[0x2f] = uStack_288;
              puVar16[0x22] = puStack_1e8;
              puVar16[0x21] = uStack_1f0;
              puVar16[0x24] = uStack_418;
              puVar16[0x23] = uStack_420;
              puVar16[0x26] = puStack_2d0;
              puVar16[0x25] = pcStack_2d8;
              puVar16[0x28] = uStack_2c0;
              puVar16[0x27] = pcStack_2c8;
              puVar16[0x1a] = pcStack_228;
              puVar16[0x19] = uStack_230;
              puVar16[0x1c] = pcStack_218;
              puVar16[0x1b] = ppuStack_220;
              puVar16[0x1e] = pcStack_208;
              puVar16[0x1d] = uStack_210;
              puVar16[0x20] = uStack_1f8;
              puVar16[0x1f] = uStack_200;
              *(undefined1 (*) [16])(puVar16 + 0x17) = auVar28;
              uStack_47c = uStack_3ac;
              uStack_46f = uStack_39f;
              uStack_350 = uStack_420;
              uStack_348 = uStack_418;
              uStack_2e8 = uStack_3b8;
              goto LAB_100b12d84;
            }
            if ((char *)auStack_240._8_8_ != (char *)0x0) goto LAB_100b12bcc;
            uVar6 = 0;
            uVar19 = (undefined4)(uVar11 >> 8);
LAB_100b12df8:
            uStack_478 = (undefined5)
                         (CONCAT44(uStack_3ac,
                                   CONCAT13(uStack_3ad,CONCAT21(auStack_3b0._1_2_,auStack_3b0[0])))
                         >> 0x18);
            uStack_473 = CONCAT13(uStack_3a5,CONCAT21(uStack_3a7,uStack_3a8));
            iStack_480._1_3_ = (undefined3)uVar19;
            iStack_480 = CONCAT31(iStack_480._1_3_,uVar6);
            uStack_47c._0_1_ = (undefined1)((uint)uVar19 >> 0x18);
            uStack_47c = CONCAT31(CONCAT21(auStack_3b0._1_2_,auStack_3b0[0]),(undefined1)uStack_47c)
            ;
            uVar11 = __ZN19codex_network_proxy6policy16is_non_public_ip17h16d30dbe479a3e2dE
                               (&iStack_480);
            *(undefined2 *)((long)puVar16 + 0x18c) = 1;
            if ((uVar11 & 1) == 0) goto LAB_100b132f8;
          }
          else {
            if (bVar26 != 3) {
              func_0x000108a07b10(&UNK_10b22de20);
              goto LAB_100b137a8;
            }
LAB_100b12d84:
            auStack_240 = auVar28;
            puVar12 = (ushort *)
                      (*
                      ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                      )();
            if ((char)puVar12[0x24] == '\x01') {
LAB_100b12f74:
              bVar5 = *(char *)((long)puVar12 + 0x45) != '\0';
              bVar26 = bVar5 | ((byte)puVar12[0x22] ^ 0xff) & 1;
              bVar5 = (bVar5 | ((byte)puVar12[0x22] ^ 0xff) & 1) == 2;
              bVar17 = *(byte *)((long)puVar16 + 0x182);
              bVar25 = bVar26;
              if (bVar17 < 2) goto LAB_100b12dc0;
LAB_100b12fa4:
              if (bVar17 != 3) {
                func_0x000108a07b10(&UNK_10b22dcd0);
                goto LAB_100b137a8;
              }
            }
            else {
              if ((char)puVar12[0x24] != '\x02') {
                __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                          (puVar12,&DAT_100c35d48);
                *(undefined1 *)(puVar12 + 0x24) = 1;
                unaff_x23 = puVar12;
                goto LAB_100b12f74;
              }
              bVar5 = true;
              bVar17 = *(byte *)((long)puVar16 + 0x182);
              bVar26 = 0;
              bVar25 = 0;
              if (1 < bVar17) goto LAB_100b12fa4;
LAB_100b12dc0:
              if (bVar17 != 0) {
                func_0x000108a07af4(&UNK_10b22dcd0);
LAB_100b137a8:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100b137ac);
                (*pcVar4)();
              }
              puVar16[0x28] = puVar16[0x26];
              puVar16[0x29] = puVar16[0x27];
              *(undefined2 *)(puVar16 + 0x2a) = *(undefined2 *)(puVar16 + 0x30);
              *(undefined1 *)(puVar16 + 0x2f) = 0;
              bVar26 = bVar25;
            }
            FUN_100fc4094(auStack_240,puVar16 + 0x28,param_3);
            if (auStack_240._0_4_ == 3) {
              *(undefined1 *)((long)puVar16 + 0x182) = 3;
LAB_100b13080:
              iVar8 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                                (bVar5 | bVar26,puVar16 + 0x17,param_3);
              if (iVar8 != 0) {
LAB_100b13098:
                *(undefined1 *)((long)puVar16 + 0x18c) = 3;
                *puVar10 = 2;
                uVar6 = 5;
                goto LAB_100b136f4;
              }
              if (*(char *)((long)puVar16 + 0x182) == '\0') {
LAB_100b130fc:
                if (puVar16[0x25] != 0) {
                  _free(puVar16[0x26]);
                }
              }
              else if (*(char *)((long)puVar16 + 0x182) == '\x03') {
                if ((*(char *)(puVar16 + 0x2f) == '\x03') && (*(short *)(puVar16 + 0x2b) == 3)) {
                  plVar14 = (long *)puVar16[0x2c];
                  if (*plVar14 == 0xcc) {
                    *plVar14 = 0x84;
                  }
                  else {
                    (**(code **)(plVar14[2] + 0x20))();
                  }
                }
                goto LAB_100b130fc;
              }
              pcVar27 = (char *)0x8000000000000001;
            }
            else {
              uStack_3a8 = auStack_240[8];
              uStack_3a7 = auStack_240._9_2_;
              uStack_3a5 = auStack_240[0xb];
              uStack_3a4 = auStack_240._12_4_;
              auStack_3b0[0] = auStack_240[0];
              auStack_3b0._1_2_ = auStack_240._1_2_;
              uStack_3ad = auStack_240[3];
              uStack_3ac = auStack_240._4_4_;
              pcStack_398 = pcStack_228;
              uStack_3a0 = (undefined1)uStack_230;
              uStack_39f = (undefined7)((ulong)uStack_230 >> 8);
              ppuStack_390 = ppuStack_220;
              if ((*(char *)(puVar16 + 0x2f) == '\x03') && (*(short *)(puVar16 + 0x2b) == 3)) {
                plVar14 = (long *)puVar16[0x2c];
                if (*plVar14 == 0xcc) {
                  *plVar14 = 0x84;
                }
                else {
                  (**(code **)(plVar14[2] + 0x20))();
                }
              }
              if (CONCAT13(uStack_3ad,CONCAT21(auStack_3b0._1_2_,auStack_3b0[0])) == 2) {
                puStack_2d0 = (ushort *)
                              CONCAT44(uStack_3a4,
                                       CONCAT13(uStack_3a5,CONCAT21(uStack_3a7,uStack_3a8)));
                pcStack_2d8 = (char *)0x8000000000000000;
              }
              else {
                FUN_100e90814(&pcStack_2d8,auStack_3b0);
              }
              if (puVar16[0x25] != 0) {
                _free(puVar16[0x26]);
              }
              *(undefined1 *)((long)puVar16 + 0x182) = 1;
              if (pcStack_2d8 == (char *)0x8000000000000002) goto LAB_100b13098;
              unaff_x23 = puStack_2d0;
              pcVar27 = pcStack_2d8;
              unaff_x28 = pcStack_2c8;
              if (pcStack_2d8 == (char *)0x8000000000000001) goto LAB_100b13080;
            }
            FUN_100de8a5c(puVar16 + 0x17);
            if (pcVar27 == (char *)0x8000000000000000) {
              puStack_278 = unaff_x23;
              if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                if (1 < bRam000000010b62ed68 - 1) {
                  if (bRam000000010b62ed68 != 0) {
                    cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c5904abe524a719E
                                      );
                    if (cVar7 != '\0') goto LAB_100b131fc;
                  }
                  goto LAB_100b134c8;
                }
LAB_100b131fc:
                uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c5904abe524a719E
                                   );
                if ((uVar11 & 1) == 0) goto LAB_100b134c8;
                pcStack_228 = (char *)(
                                      ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c5904abe524a719E
                                      + 0x30);
                puVar24 = puVar16 + 0x15;
                auStack_3b0[0] = (char)puVar24;
                auStack_3b0._1_2_ = (undefined2)((ulong)puVar24 >> 8);
                uStack_3ad = (undefined1)((ulong)puVar24 >> 0x18);
                uStack_3ac = (undefined4)((ulong)puVar24 >> 0x20);
                uStack_3a8 = 0xa0;
                uStack_3a7 = 0xc7b3;
                uStack_3a5 = 0;
                uStack_3a4 = 1;
                uStack_3a0 = (undefined1)((long)puVar16 + 0x18a);
                uStack_39f = (undefined7)((ulong)((long)puVar16 + 0x18a) >> 8);
                pcStack_398 = &
                              __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
                ;
                ppuStack_390 = &puStack_278;
                pcStack_388 = 
                __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                ;
                puStack_2d0 = (ushort *)auStack_3b0;
                pcStack_2d8 = s_Lblocking_host_because_DNS_looku_108ad0a48;
                auStack_1d0._0_8_ = &pcStack_2d8;
                auStack_1d0._8_8_ = &UNK_10b208fd0;
                auStack_240._8_8_ = auStack_1d0;
                auStack_240._0_8_ = 1;
                uStack_230 = 1;
                FUN_100b16024(auStack_240);
              }
              else {
LAB_100b134c8:
                lVar21 = 
                ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c5904abe524a719E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uStack_268 = *(undefined8 *)
                                (
                                ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c5904abe524a719E
                                + 0x20);
                  uStack_260 = *(undefined8 *)
                                (
                                ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c5904abe524a719E
                                + 0x28);
                  uStack_270 = 4;
                  puVar2 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_10b3c24c8;
                  }
                  puVar3 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_109adfc03;
                  }
                  iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_270);
                  if (iVar8 != 0) {
                    pcStack_228 = (char *)(
                                          ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c5904abe524a719E
                                          + 0x30);
                    puVar24 = puVar16 + 0x15;
                    auStack_3b0[0] = (char)puVar24;
                    auStack_3b0._1_2_ = (undefined2)((ulong)puVar24 >> 8);
                    uStack_3ad = (undefined1)((ulong)puVar24 >> 0x18);
                    uStack_3ac = (undefined4)((ulong)puVar24 >> 0x20);
                    uStack_3a8 = 0xa0;
                    uStack_3a7 = 0xc7b3;
                    uStack_3a5 = 0;
                    uStack_3a4 = 1;
                    uStack_3a0 = (undefined1)((long)puVar16 + 0x18a);
                    uStack_39f = (undefined7)((ulong)((long)puVar16 + 0x18a) >> 8);
                    pcStack_398 = &
                                  __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
                    ;
                    ppuStack_390 = &puStack_278;
                    pcStack_388 = 
                    __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                    ;
                    puStack_2d0 = (ushort *)auStack_3b0;
                    pcStack_2d8 = s_Lblocking_host_because_DNS_looku_108ad0a48;
                    auStack_1d0._0_8_ = &pcStack_2d8;
                    auStack_1d0._8_8_ = &UNK_10b208fd0;
                    auStack_240._8_8_ = auStack_1d0;
                    auStack_240._0_8_ = 1;
                    uStack_230 = 1;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar21,puVar3,puVar2,&uStack_270,auStack_240);
                  }
                }
              }
              if (((ulong)puStack_278 & 3) == 1) {
                unaff_x23 = (ushort *)((long)puStack_278 + -1);
                uVar9 = *(undefined8 *)unaff_x23;
                puVar24 = *(undefined8 **)((long)puStack_278 + 7);
                pcVar4 = (code *)*puVar24;
                if (pcVar4 != (code *)0x0) {
                  (*pcVar4)(uVar9);
                }
                if (puVar24[1] != 0) {
                  _free(uVar9);
                }
LAB_100b13614:
                _free(unaff_x23);
              }
            }
            else {
              if (pcVar27 != (char *)0x8000000000000001) {
                if (unaff_x28 != (char *)0x0) {
                  puVar12 = unaff_x23;
                  do {
                    if (*puVar12 == 2) break;
                    uVar19 = *(undefined4 *)(puVar12 + 1);
                    bVar5 = (*puVar12 & 1) == 0;
                    if (bVar5) {
                      auStack_3b0._1_2_ = (undefined2)uVar19;
                      uStack_3ad = (undefined1)((uint)uVar19 >> 0x10);
                      uStack_3ac._0_1_ = (undefined1)((uint)uVar19 >> 0x18);
                    }
                    else {
                      auStack_3b0._1_2_ = (undefined2)((uint)uVar19 >> 0x10);
                      uVar9 = *(undefined8 *)(puVar12 + 3);
                      uStack_3ad = (undefined1)uVar9;
                      uStack_3ac = (undefined4)((ulong)uVar9 >> 8);
                      uStack_3a8 = (undefined1)((ulong)uVar9 >> 0x28);
                      uVar9 = *(undefined8 *)(puVar12 + 6);
                      uStack_3a7 = (undefined2)uVar9;
                      uStack_3a5 = (undefined1)((ulong)uVar9 >> 0x10);
                      uStack_3a4 = (undefined4)((ulong)uVar9 >> 0x18);
                      uStack_3a0 = (undefined1)((ulong)uVar9 >> 0x38);
                    }
                    auStack_3b0[0] = !bVar5;
                    uVar11 = __ZN19codex_network_proxy6policy16is_non_public_ip17h16d30dbe479a3e2dE
                                       (auStack_3b0);
                    if ((uVar11 & 1) != 0) {
                      if (pcVar27 == (char *)0x0) goto LAB_100b13618;
                      goto LAB_100b13614;
                    }
                    puVar12 = puVar12 + 0x10;
                  } while (puVar12 != unaff_x23 + (long)unaff_x28 * 0x10);
                }
                if (pcVar27 != (char *)0x0) {
                  _free(unaff_x23);
                }
                *(undefined2 *)((long)puVar16 + 0x18c) = 1;
                goto LAB_100b132f8;
              }
              if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
                if (1 < bRam000000010b62ed50 - 1) {
                  if (bRam000000010b62ed50 != 0) {
                    cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h542c33aee1f13b91E
                                      );
                    if (cVar7 != '\0') goto LAB_100b1315c;
                  }
                  goto LAB_100b133c4;
                }
LAB_100b1315c:
                uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h542c33aee1f13b91E
                                   );
                if ((uVar11 & 1) == 0) goto LAB_100b133c4;
                pcStack_228 = (char *)(
                                      ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h542c33aee1f13b91E
                                      + 0x30);
                puVar24 = puVar16 + 0x15;
                auStack_3b0[0] = (char)puVar24;
                auStack_3b0._1_2_ = (undefined2)((ulong)puVar24 >> 8);
                uStack_3ad = (undefined1)((ulong)puVar24 >> 0x18);
                uStack_3ac = (undefined4)((ulong)puVar24 >> 0x20);
                uStack_3a8 = 0xa0;
                uStack_3a7 = 0xc7b3;
                uStack_3a5 = 0;
                uStack_3a4 = 1;
                uStack_3a0 = (undefined1)((long)puVar16 + 0x18a);
                uStack_39f = (undefined7)((ulong)((long)puVar16 + 0x18a) >> 8);
                pcStack_398 = &
                              __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
                ;
                puStack_2d0 = (ushort *)auStack_3b0;
                pcStack_2d8 = s_Oblocking_host_because_DNS_looku_108ad0aa5;
                auStack_1d0._0_8_ = &pcStack_2d8;
                auStack_1d0._8_8_ = &UNK_10b208fd0;
                auStack_240._8_8_ = auStack_1d0;
                auStack_240._0_8_ = 1;
                uStack_230 = 1;
                FUN_100b16160(auStack_240);
              }
              else {
LAB_100b133c4:
                lVar21 = 
                ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h542c33aee1f13b91E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uStack_250 = *(undefined8 *)
                                (
                                ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h542c33aee1f13b91E
                                + 0x20);
                  uStack_248 = *(undefined8 *)
                                (
                                ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h542c33aee1f13b91E
                                + 0x28);
                  uStack_258 = 4;
                  puVar2 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_10b3c24c8;
                  }
                  puVar3 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_109adfc03;
                  }
                  iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_258);
                  if (iVar8 != 0) {
                    pcStack_228 = (char *)(
                                          ___ZN19codex_network_proxy7runtime30host_resolves_to_non_public_ip28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h542c33aee1f13b91E
                                          + 0x30);
                    puVar24 = puVar16 + 0x15;
                    auStack_3b0[0] = (char)puVar24;
                    auStack_3b0._1_2_ = (undefined2)((ulong)puVar24 >> 8);
                    uStack_3ad = (undefined1)((ulong)puVar24 >> 0x18);
                    uStack_3ac = (undefined4)((ulong)puVar24 >> 0x20);
                    uStack_3a8 = 0xa0;
                    uStack_3a7 = 0xc7b3;
                    uStack_3a5 = 0;
                    uStack_3a4 = 1;
                    uStack_3a0 = (undefined1)((long)puVar16 + 0x18a);
                    uStack_39f = (undefined7)((ulong)((long)puVar16 + 0x18a) >> 8);
                    pcStack_398 = &
                                  __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
                    ;
                    puStack_2d0 = (ushort *)auStack_3b0;
                    pcStack_2d8 = s_Oblocking_host_because_DNS_looku_108ad0aa5;
                    auStack_1d0._0_8_ = &pcStack_2d8;
                    auStack_1d0._8_8_ = &UNK_10b208fd0;
                    auStack_240._8_8_ = auStack_1d0;
                    auStack_240._0_8_ = 1;
                    uStack_230 = 1;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar21,puVar3,puVar2,&uStack_258,auStack_240);
                  }
                }
              }
            }
LAB_100b13618:
            *(undefined2 *)((long)puVar16 + 0x18c) = 1;
          }
LAB_100b13620:
          unaff_x23 = (ushort *)0x2;
          lVar21 = puVar16[0xf];
          lVar23 = puVar16[0x10];
joined_r0x000100b12b0c:
          if (lVar23 != 0) {
            puVar24 = (undefined8 *)(lVar21 + 8);
            do {
              if (puVar24[-1] != 0) {
                _free(*puVar24);
              }
              puVar24 = puVar24 + 3;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
          }
          if (puVar16[0xe] != 0) {
            _free(lVar21);
          }
          *(undefined1 *)((long)puVar16 + 0x4c) = 0;
          lVar23 = puVar16[0x37];
          lVar21 = puVar16[0x38] + 1;
          lVar15 = lVar23;
          while (lVar21 = lVar21 + -1, lVar21 != 0) {
            FUN_100df1440(lVar15);
            lVar15 = lVar15 + 0x40;
          }
          if (puVar16[0x36] != 0) {
            _free(lVar23);
          }
          puVar24 = (undefined8 *)puVar16[0x33];
          lVar21 = puVar16[0x34] + 1;
          puVar13 = puVar24;
          while (lVar21 = lVar21 + -1, lVar21 != 0) {
            FUN_100df1440(puVar13);
            puVar13 = puVar13 + 8;
          }
        }
        if (puVar16[0x32] != 0) {
          _free(puVar24);
        }
        uVar6 = 0;
        if (puVar16[5] != 0) {
          _free(puVar16[6]);
          uVar6 = 0;
        }
      }
      *puVar10 = uVar6;
      puVar10[1] = (char)unaff_x23;
      uVar6 = 1;
      *(undefined8 **)(puVar10 + 8) = puVar24;
LAB_100b136f4:
      *(undefined1 *)((long)puVar16 + 0x4d) = uVar6;
      return;
    }
    param_2[1] = *param_2;
    param_2[0x8b] = *param_2;
    *(undefined1 *)((long)param_2 + 0x463) = 0;
LAB_100b12664:
    auVar28 = FUN_100b14e84(param_2 + 3,param_3);
    lVar21 = auVar28._8_8_;
    if ((auVar28._0_8_ & 1) != 0) {
      uVar6 = 3;
      *param_1 = 3;
      goto LAB_100b12784;
    }
    FUN_100cd5a2c(param_2 + 3);
    if (lVar21 == 0) {
      param_2[3] = *(long *)(param_2[1] + 0xd8) + 0x10;
      *(undefined1 *)(param_2 + 0xe) = 0;
      goto LAB_100b126ac;
    }
    uStack_150 = 2;
  }
  else {
    if (bVar26 == 3) goto LAB_100b12664;
LAB_100b126ac:
    auVar28 = FUN_100fd4eb8(param_2 + 3,param_3);
    pcVar27 = auVar28._0_8_;
    if (pcVar27 == (char *)0x0) {
      *param_1 = 3;
      uVar6 = 4;
      goto LAB_100b12784;
    }
    if ((*(char *)(param_2 + 0xe) == '\x03') && (*(char *)(param_2 + 0xd) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_2 + 5);
      if (param_2[6] != 0) {
        (**(code **)(param_2[6] + 0x18))(param_2[7]);
      }
    }
    FUN_1013fb310(&uStack_150,auVar28._8_8_);
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    if (*pcVar27 == '\0') {
      *pcVar27 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar27,extraout_x1,1000000000);
    }
    FUN_1060fa678(pcVar27,1,pcVar27);
    lVar21 = lStack_148;
  }
  *param_1 = uStack_150;
  param_1[1] = lVar21;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  param_1[0xd] = uStack_68;
  param_1[0xc] = uStack_70;
  param_1[0xf] = uStack_58;
  param_1[0xe] = uStack_60;
  param_1[0x11] = uStack_48;
  param_1[0x10] = uStack_50;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  uVar6 = 1;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[9] = uStack_88;
  param_1[8] = uStack_90;
LAB_100b12784:
  *(undefined1 *)(param_2 + 2) = uVar6;
  return;
}

