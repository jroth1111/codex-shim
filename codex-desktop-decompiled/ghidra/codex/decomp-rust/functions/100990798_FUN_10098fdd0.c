
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10098fdd0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 uVar20;
  undefined8 uVar21;
  bool bVar22;
  long unaff_x22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  byte bVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  char *pcStack_2d0;
  undefined8 **ppuStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_244;
  undefined8 uStack_23c;
  undefined8 uStack_234;
  undefined8 uStack_22c;
  undefined4 uStack_224;
  undefined8 uStack_1c0;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint uStack_124;
  undefined6 uStack_11e;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 aauStack_90 [2] [12];
  
  bVar13 = *(byte *)((long)param_1 + 0xd2);
  if (bVar13 < 3) {
    if (bVar13 != 0) {
      if (bVar13 == 1) {
        FUN_107c05cc0(&UNK_10b229328);
      }
      uVar10 = FUN_107c05cc4();
      if ((*(byte *)((long)param_1 + 0xd4) & 1) != 0) {
        FUN_100ca9bc8(param_1 + 0x29);
      }
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      if ((((*(byte *)((long)param_1 + 0xd5) & 1) != 0) && (param_1[0x26] != -0x8000000000000000))
         && (param_1[0x26] != 0)) {
        _free(param_1[0x27]);
      }
      *(undefined1 *)((long)param_1 + 0xd5) = 0;
      if (((*(byte *)((long)param_1 + 0xd6) & 1) != 0) && (param_1[0x23] != 0)) {
        _free(param_1[0x24]);
      }
      *(undefined1 *)((long)param_1 + 0xd6) = 0;
      if (((*(byte *)((long)param_1 + 0xd7) & 1) != 0) && (param_1[0x20] != 0)) {
        _free(param_1[0x21]);
      }
      *(undefined1 *)((long)param_1 + 0xd7) = 0;
      if (((*(byte *)(param_1 + 0x1b) & 1) != 0) && (param_1[0x16] != 0)) {
        _free(param_1[0x17]);
      }
      *(undefined1 *)(param_1 + 0x1b) = 0;
      if (((*(byte *)((long)param_1 + 0xd9) & 1) != 0) && (param_1[0x1d] != 0)) {
        _free(param_1[0x1e]);
      }
      *(undefined1 *)((long)param_1 + 0xd9) = 0;
      *(undefined1 *)((long)param_1 + 0xd2) = 2;
      __Unwind_Resume(uVar10);
      auVar39 = FUN_107c05ccc();
      puVar11 = auVar39._0_8_;
      bVar13 = *(byte *)(puVar11 + 0x1fe);
      if (bVar13 < 2) {
        if (bVar13 != 0) {
          FUN_107c05cc0(&UNK_10b229340);
LAB_100990710:
          uVar12 = FUN_107c05cc4(&UNK_10b229340);
          *(undefined1 *)((long)puVar11 + 0xfe9) = 0;
          if ((*(byte *)((long)puVar11 + 0xff1) & 1) != 0) {
            FUN_100ccc408(puVar11 + 0x1c);
          }
          *(undefined1 *)((long)puVar11 + 0xff1) = 0;
          if ((*(char *)((long)puVar11 + 0xff2) == '\x01') && (unaff_x22 != 0)) {
            _free(uVar10);
          }
          *(undefined1 *)((long)puVar11 + 0xff2) = 0;
          *(undefined1 *)(puVar11 + 0x1fe) = 2;
          uVar10 = __Unwind_Resume(uVar12);
          uVar12 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                             (___ZN16codex_app_server22bespoke_event_handling31on_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h48bb310f7415808bE
                              ,uVar10);
          lVar17 = 
          ___ZN16codex_app_server22bespoke_event_handling31on_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h48bb310f7415808bE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
            uStack_330 = *(undefined8 *)
                          (
                          ___ZN16codex_app_server22bespoke_event_handling31on_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h48bb310f7415808bE
                          + 0x20);
            uStack_328 = *(undefined8 *)
                          (
                          ___ZN16codex_app_server22bespoke_event_handling31on_request_permissions_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h48bb310f7415808bE
                          + 0x28);
            uStack_338 = 1;
            puVar3 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_10b3c24c8;
            }
            puVar4 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_109adfc03;
            }
            uVar12 = (**(code **)(puVar3 + 0x18))(puVar4,&uStack_338);
            if ((int)uVar12 != 0) {
              lStack_300 = *(long *)(lVar17 + 0x60);
              uStack_2f8 = *(undefined8 *)(lVar17 + 0x68);
              lStack_318 = *(long *)(lVar17 + 0x50);
              uStack_310 = *(undefined8 *)(lVar17 + 0x58);
              uStack_320 = 1;
              if (lStack_318 == 0) {
                uStack_320 = 2;
              }
              uStack_2d8 = *(undefined4 *)(lVar17 + 8);
              uStack_2d4 = *(undefined4 *)(lVar17 + 0xc);
              uStack_2b8 = 1;
              puStack_2b0 = &uStack_2c0;
              puStack_2a8 = &DAT_1061c2098;
              uStack_308 = 1;
              if (lStack_300 == 0) {
                uStack_308 = 2;
              }
              uStack_2e8 = uStack_330;
              uStack_2f0 = uStack_338;
              uStack_2e0 = uStack_328;
              ppuStack_2c8 = &puStack_2b0;
              pcStack_2d0 = s__108b39f4f;
              uStack_2c0 = uVar10;
              uVar12 = (**(code **)(puVar3 + 0x20))(puVar4,&uStack_320);
            }
          }
          return uVar12;
        }
        puVar11[0x1d] = puVar11[7];
        puVar11[0x1c] = puVar11[6];
        puVar11[0x1f] = puVar11[9];
        puVar11[0x1e] = puVar11[8];
        puVar11[0x21] = puVar11[0xb];
        puVar11[0x20] = puVar11[10];
        puVar11[0x23] = puVar11[0xd];
        puVar11[0x22] = puVar11[0xc];
        puVar11[0x15] = puVar11[0x13];
        puVar11[0x14] = puVar11[0x12];
        puVar11[0x17] = puVar11[1];
        puVar11[0x16] = *puVar11;
        uVar10 = puVar11[0xe];
        uVar38 = puVar11[0xf];
        *(undefined2 *)((long)puVar11 + 0xff1) = 0x101;
        puVar11[0x19] = puVar11[3];
        puVar11[0x18] = puVar11[2];
        puVar11[0x1b] = puVar11[5];
        puVar11[0x1a] = puVar11[4];
        uVar12 = puVar11[0x10];
        uVar14 = puVar11[0x11];
        uStack_260 = 0;
        lStack_258 = 1;
        lStack_250 = 0;
        FUN_10624142c(&uStack_244,puVar11 + 0x14,0);
        FUN_108855060(&uStack_260,0,0x24,1,1);
        puVar2 = (undefined8 *)(lStack_258 + lStack_250);
        puVar2[1] = uStack_23c;
        *puVar2 = uStack_244;
        puVar2[3] = uStack_22c;
        puVar2[2] = uStack_234;
        *(undefined4 *)(puVar2 + 4) = uStack_224;
        *(undefined2 *)((long)puVar11 + 0xff1) = 0;
        puVar11[0x24] = 0x800000000000000e;
        puVar11[0x26] = puVar11[0x17];
        puVar11[0x25] = puVar11[0x16];
        puVar11[0x28] = puVar11[0x19];
        puVar11[0x27] = puVar11[0x18];
        puVar11[0x2a] = puVar11[0x1b];
        puVar11[0x29] = puVar11[0x1a];
        puVar11[0x2b] = uVar10;
        puVar11[0x2c] = uVar38;
        puVar11[0x2d] = uVar12;
        puVar11[0x2e] = 0;
        puVar11[0x2f] = 8;
        puVar11[0x30] = 0;
        puVar11[0x37] = puVar11[0x22];
        puVar11[0x34] = puVar11[0x1f];
        puVar11[0x33] = puVar11[0x1e];
        puVar11[0x36] = puVar11[0x21];
        puVar11[0x35] = puVar11[0x20];
        puVar11[0x32] = puVar11[0x1d];
        puVar11[0x31] = puVar11[0x1c];
        *(undefined1 *)(puVar11 + 0x38) = 0;
        *(undefined1 *)((long)puVar11 + 0x1c1) = *(undefined1 *)(puVar11 + 0x23);
        puVar11[0x39] = uStack_260;
        puVar11[0x3a] = lStack_258;
        puVar11[0x3b] = lStack_250 + 0x24;
        puVar11[99] = uVar14;
        *(undefined1 *)(puVar11 + 0x1fd) = 0;
      }
      else if (bVar13 != 3) goto LAB_100990710;
      uVar10 = FUN_10089a8d4(puVar11 + 0x24,auVar39._8_8_);
      if ((int)uVar10 == 0) {
        if (*(char *)(puVar11 + 0x1fd) == '\x03') {
          FUN_100d40d08(puVar11 + 0xa3);
          *(undefined1 *)((long)puVar11 + 0xfe9) = 0;
        }
        else if (*(char *)(puVar11 + 0x1fd) == '\0') {
          FUN_100e5286c(puVar11 + 0x24);
        }
        *(undefined2 *)((long)puVar11 + 0xff1) = 0;
        uVar20 = 1;
      }
      else {
        uVar20 = 3;
      }
      *(undefined1 *)(puVar11 + 0x1fe) = uVar20;
      return uVar10;
    }
    *(undefined1 *)((long)param_1 + 0xda) = 0;
    param_1[0x15] = param_1[0x12];
    param_1[0x1e] = param_1[1];
    param_1[0x1d] = *param_1;
    param_1[0x1f] = param_1[2];
    *(undefined2 *)(param_1 + 0x1b) = 0x101;
    param_1[0x17] = param_1[4];
    param_1[0x16] = param_1[3];
    param_1[0x21] = param_1[7];
    param_1[0x20] = param_1[6];
    param_1[0x22] = param_1[8];
    param_1[0x25] = param_1[0xb];
    param_1[0x24] = param_1[10];
    param_1[0x23] = param_1[9];
    param_1[0x28] = param_1[0x11];
    param_1[0x27] = param_1[0x10];
    param_1[0x26] = param_1[0xf];
    *(undefined1 *)((long)param_1 + 0xd3) = *(undefined1 *)(param_1 + 0x1a);
    *(undefined4 *)((long)param_1 + 0xd4) = 0x1010101;
    param_1[0x2a] = param_1[0xd];
    param_1[0x29] = param_1[0xc];
    param_1[0x2b] = param_1[0xe];
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)((long)param_1 + 0xd1);
    param_1[0x18] = param_1[5];
    param_1[0x19] = param_1[0x13];
    param_1[0x2c] = *(long *)param_1[0x14] + 0x10;
    *(undefined1 *)(param_1 + 0x3a) = 0;
LAB_10098feb8:
    pcVar9 = (char *)FUN_100fd3e50(param_1 + 0x2c);
    if (pcVar9 == (char *)0x0) {
      uVar10 = 1;
      uVar20 = 3;
      goto LAB_100990388;
    }
    if (((*(char *)(param_1 + 0x3a) == '\x03') && (*(char *)(param_1 + 0x39) == '\x03')) &&
       (*(char *)(param_1 + 0x30) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x31);
      if (param_1[0x32] != 0) {
        (**(code **)(param_1[0x32] + 0x18))(param_1[0x33]);
      }
    }
    uVar10 = param_1[0x17];
    lVar5 = param_1[0x18];
    auVar39 = FUN_100e8dd9c(*(undefined8 *)(pcVar9 + 0x90),*(undefined8 *)(pcVar9 + 0x98),uVar10,
                            lVar5);
    uVar12 = auVar39._8_8_;
    lVar17 = 0;
    lVar19 = *(long *)(pcVar9 + 0x70);
    uVar6 = *(ulong *)(pcVar9 + 0x78);
    bVar13 = auVar39[7] >> 1;
    uVar23 = auVar39._0_8_ & uVar6;
    uVar38 = *(undefined8 *)(lVar19 + uVar23);
    uVar27 = CONCAT17(-((byte)((ulong)uVar38 >> 0x38) == bVar13),
                      CONCAT16(-((byte)((ulong)uVar38 >> 0x30) == bVar13),
                               CONCAT15(-((byte)((ulong)uVar38 >> 0x28) == bVar13),
                                        CONCAT14(-((byte)((ulong)uVar38 >> 0x20) == bVar13),
                                                 CONCAT13(-((byte)((ulong)uVar38 >> 0x18) == bVar13)
                                                          ,CONCAT12(-((byte)((ulong)uVar38 >> 0x10)
                                                                     == bVar13),
                                                                    CONCAT11(-((byte)((ulong)uVar38
                                                                                     >> 8) == bVar13
                                                                              ),-((byte)uVar38 ==
                                                                                 bVar13)))))))) &
             0x8080808080808080;
    while( true ) {
      for (; uVar27 != 0; uVar27 = uVar27 - 1 & uVar27) {
        uVar25 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
        uVar25 = uVar23 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) & uVar6;
        lVar1 = lVar19 + uVar25 * -0x18;
        if ((lVar5 == *(long *)(lVar1 + -8)) &&
           (iVar8 = _memcmp(uVar10,*(undefined8 *)(lVar1 + -0x10),lVar5), uVar12 = extraout_x1,
           iVar8 == 0)) {
          lVar17 = ((long)(uVar25 * 0x18) >> 3) * -0x5555555555555555;
          puVar11 = (undefined8 *)(lVar19 + (lVar17 - 8U & uVar6));
          uVar10 = *puVar11;
          uVar38 = *(undefined8 *)(lVar19 + lVar17);
          uVar27 = CONCAT17(-((char)((ulong)uVar38 >> 0x38) == -1),
                            CONCAT16(-((char)((ulong)uVar38 >> 0x30) == -1),
                                     CONCAT15(-((char)((ulong)uVar38 >> 0x28) == -1),
                                              CONCAT14(-((char)((ulong)uVar38 >> 0x20) == -1),
                                                       CONCAT13(-((char)((ulong)uVar38 >> 0x18) ==
                                                                 -1),CONCAT12(-((char)((ulong)uVar38
                                                                                      >> 0x10) == -1
                                                                               ),CONCAT11(-((char)((
                                                  ulong)uVar38 >> 8) == -1),-((char)uVar38 == -1))))
                                                  ))));
          uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
          uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
          uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
          uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
          if (((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) +
              ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar10 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar10 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar10 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar10 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar10 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar10 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar10 >> 8) ==
                                                                     -1),-((char)uVar10 == -1)))))))
                                      )) >> 3) < 8) {
            *(long *)(pcVar9 + 0x80) = *(long *)(pcVar9 + 0x80) + 1;
            uVar20 = 0xff;
          }
          else {
            uVar20 = 0x80;
          }
          *(undefined1 *)(lVar19 + lVar17) = uVar20;
          *(undefined1 *)(puVar11 + 1) = uVar20;
          *(long *)(pcVar9 + 0x88) = *(long *)(pcVar9 + 0x88) + -1;
          if (*(long *)(lVar1 + -0x18) == -0x8000000000000000) {
            bVar22 = false;
          }
          else {
            if (*(long *)(lVar1 + -0x18) != 0) {
              _free(*(undefined8 *)(lVar1 + -0x10));
              uVar12 = extraout_x1_00;
            }
            bVar22 = true;
          }
          goto LAB_1009900a4;
        }
      }
      bVar26 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar38 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar38 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar38 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar38 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar38 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar38 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar38 >> 8) == -1),
                                                           -((char)uVar38 == -1)))))))),1);
      if ((bVar26 & 1) != 0) break;
      lVar17 = lVar17 + 8;
      uVar23 = uVar23 + lVar17 & uVar6;
      uVar38 = *(undefined8 *)(lVar19 + uVar23);
      uVar27 = CONCAT17(-((byte)((ulong)uVar38 >> 0x38) == bVar13),
                        CONCAT16(-((byte)((ulong)uVar38 >> 0x30) == bVar13),
                                 CONCAT15(-((byte)((ulong)uVar38 >> 0x28) == bVar13),
                                          CONCAT14(-((byte)((ulong)uVar38 >> 0x20) == bVar13),
                                                   CONCAT13(-((byte)((ulong)uVar38 >> 0x18) ==
                                                             bVar13),CONCAT12(-((byte)((ulong)uVar38
                                                                                      >> 0x10) ==
                                                                               bVar13),CONCAT11(-((
                                                  byte)((ulong)uVar38 >> 8) == bVar13),
                                                  -((byte)uVar38 == bVar13)))))))) &
               0x8080808080808080;
    }
    bVar22 = false;
LAB_1009900a4:
    if (*pcVar9 == '\0') {
      *pcVar9 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar9,uVar12,1000000000);
    }
    FUN_1060fa678(pcVar9,1,pcVar9);
    if (!bVar22) {
      lVar19 = param_1[0x2a];
      lVar17 = lVar19;
      for (lVar5 = param_1[0x2b]; lVar5 != 0; lVar5 = lVar5 + -1) {
        FUN_100e4af0c(lVar17);
        lVar17 = lVar17 + 0x50;
      }
      if (param_1[0x29] != 0) {
        _free(lVar19);
      }
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      if (param_1[0x26] == -0x8000000000000000 || param_1[0x26] == 0) {
        *(undefined1 *)((long)param_1 + 0xd5) = 0;
        lVar17 = param_1[0x23];
      }
      else {
        _free(param_1[0x27]);
        *(undefined1 *)((long)param_1 + 0xd5) = 0;
        lVar17 = param_1[0x23];
      }
      if (lVar17 != 0) {
        _free(param_1[0x24]);
      }
      *(undefined1 *)((long)param_1 + 0xd6) = 0;
      if (param_1[0x20] != 0) {
        _free(param_1[0x21]);
      }
      *(undefined1 *)((long)param_1 + 0xd7) = 0;
      if (param_1[0x16] != 0) {
        _free(param_1[0x17]);
      }
      *(undefined1 *)(param_1 + 0x1b) = 0;
      if (param_1[0x1d] != 0) {
        _free(param_1[0x1e]);
      }
      uVar10 = 0;
      *(undefined1 *)((long)param_1 + 0xd9) = 0;
      uVar20 = 1;
      goto LAB_100990388;
    }
    *(undefined1 *)(param_1 + 0x1b) = 0;
    uVar33 = param_1[0x17];
    uVar28 = param_1[0x16];
    uVar14 = param_1[0x18];
    uVar34 = param_1[0x21];
    uVar29 = param_1[0x20];
    uVar15 = param_1[0x22];
    uVar18 = param_1[0x25];
    uVar35 = param_1[0x24];
    uVar30 = param_1[0x23];
    uVar16 = param_1[0x28];
    uVar36 = param_1[0x27];
    uVar31 = param_1[0x26];
    uVar20 = *(undefined1 *)((long)param_1 + 0xd3);
    uVar37 = param_1[0x2a];
    uVar32 = param_1[0x29];
    uVar21 = param_1[0x2b];
    uVar7 = *(undefined1 *)(param_1 + 0x1c);
    *(undefined4 *)((long)param_1 + 0xd4) = 0;
    *(undefined1 *)((long)param_1 + 0xda) = 1;
    uStack_d0 = 0;
    uStack_c8 = 1;
    lStack_c0 = 0;
    FUN_10624142c(&uStack_b8,param_1[0x15],0);
    FUN_108855060(&uStack_d0,0,0x24,1,1);
    lVar17 = lStack_c0;
    uVar27 = uStack_c8;
    uVar38 = uStack_d0;
    puVar11 = (undefined8 *)(uStack_c8 + lStack_c0);
    puVar11[1] = lStack_b0;
    *puVar11 = CONCAT44(uStack_b4,uStack_b8);
    puVar11[3] = uStack_a0;
    puVar11[2] = CONCAT44(uStack_a4,uStack_a8);
    *(undefined4 *)(puVar11 + 4) = uStack_98;
    uVar24 = param_1[0x1d];
    *(undefined1 *)((long)param_1 + 0xd9) = 0;
    uVar10 = param_1[0x1e];
    uVar12 = param_1[0x1f];
    aauStack_90[0] = func_0x000106032954(0);
    uStack_d0 = 0;
    uStack_c8 = uStack_c8 & 0xffffffff00000000;
    func_0x000106032878(&uStack_b8,aauStack_90,&uStack_d0);
    if ((uStack_b8 & 1) == 0) {
      lVar19 = lStack_b0 * 1000 + (ulong)uStack_a8 / 1000000;
    }
    else {
      lVar19 = 0;
    }
    *(undefined1 *)((long)param_1 + 0xda) = 0;
    param_1[0x1c] = 0x8000000000000015;
    param_1[0x36] = uStack_108;
    param_1[0x35] = uStack_110;
    param_1[0x38] = uStack_f8;
    param_1[0x37] = uStack_100;
    param_1[0x3a] = uStack_e8;
    param_1[0x39] = uStack_f0;
    param_1[0x3b] = uStack_e0;
    param_1[0x2e] = uVar16;
    param_1[0x2d] = uVar36;
    param_1[0x30] = uStack_138;
    param_1[0x2f] = 0x8000000000000000;
    param_1[0x32] = (ulong)uStack_124 << 0x20;
    param_1[0x31] = uStack_130;
    param_1[0x34] = uStack_118;
    param_1[0x33] = CONCAT62(uStack_11e,CONCAT11(uVar7,uVar20));
    param_1[0x26] = uVar30;
    param_1[0x25] = uVar15;
    param_1[0x28] = uVar18;
    param_1[0x27] = uVar35;
    param_1[0x2a] = uVar37;
    param_1[0x29] = uVar32;
    param_1[0x2c] = uVar31;
    param_1[0x2b] = uVar21;
    param_1[0x1e] = 0;
    param_1[0x1d] = 7;
    param_1[0x20] = uVar28;
    param_1[0x1f] = uStack_1c0;
    param_1[0x22] = uVar14;
    param_1[0x21] = uVar33;
    param_1[0x24] = uVar34;
    param_1[0x23] = uVar29;
    param_1[0x3c] = uVar38;
    param_1[0x3d] = uVar27;
    param_1[0x3e] = lVar17 + 0x24;
    param_1[0x3f] = uVar24;
    param_1[0x40] = uVar10;
    param_1[0x41] = uVar12;
    param_1[0x42] = lVar19;
    param_1[0x5b] = param_1[0x19];
    *(undefined1 *)(param_1 + 0x1f5) = 0;
  }
  else if (bVar13 == 3) goto LAB_10098feb8;
  iVar8 = FUN_10089a8d4(param_1 + 0x1c,param_2);
  if (iVar8 == 0) {
    if (*(char *)(param_1 + 0x1f5) == '\x03') {
      FUN_100d40d08(param_1 + 0x9b);
      *(undefined1 *)((long)param_1 + 0xfa9) = 0;
    }
    else if (*(char *)(param_1 + 0x1f5) == '\0') {
      FUN_100e5286c(param_1 + 0x1c);
    }
    uVar10 = 0;
    *(undefined1 *)((long)param_1 + 0xda) = 0;
    *(undefined2 *)(param_1 + 0x1b) = 0;
    uVar20 = 1;
    *(undefined4 *)((long)param_1 + 0xd4) = 0;
  }
  else {
    uVar10 = 1;
    uVar20 = 4;
  }
LAB_100990388:
  *(undefined1 *)((long)param_1 + 0xd2) = uVar20;
  return uVar10;
}

