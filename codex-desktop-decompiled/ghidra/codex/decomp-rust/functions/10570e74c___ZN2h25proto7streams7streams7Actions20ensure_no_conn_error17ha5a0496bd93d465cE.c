
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long __ZN2h25proto7streams7streams7Actions20ensure_no_conn_error17ha5a0496bd93d465cE
               (undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  char cVar12;
  ulong uVar13;
  byte bVar14;
  int iVar15;
  long lVar16;
  uint *puVar17;
  long *plVar18;
  char **ppcVar19;
  byte *pbVar20;
  byte *extraout_x1;
  undefined8 uVar21;
  long lVar22;
  long unaff_x20;
  undefined1 **ppuVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  undefined1 auVar27 [16];
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined *puStack_2d0;
  undefined1 **ppuStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined1 *apuStack_2b0 [2];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined8 uStack_280;
  undefined ***pppuStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined1 auStack_220 [8];
  undefined1 uStack_218;
  undefined **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  char acStack_190 [8];
  char ***pppcStack_188;
  undefined8 uStack_180;
  long lStack_178;
  char **ppcStack_170;
  undefined *puStack_168;
  char *pcStack_160;
  char ***pppcStack_158;
  char **ppcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  char ***pppcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  char *pcStack_f0;
  char ***pppcStack_e8;
  char *pcStack_e0;
  char ***pppcStack_d8;
  char **ppcStack_d0;
  undefined *puStack_c8;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  bVar14 = *(byte *)(param_2 + 0x118);
  ppuVar23 = (undefined1 **)(ulong)bVar14;
  if (bVar14 == 3) {
    *(undefined1 *)param_1 = 3;
    return param_2;
  }
  if (bVar14 == 0) {
    uStack_67 = *(undefined1 *)(param_2 + 0x119);
    uStack_64 = (undefined4)*(undefined8 *)(param_2 + 0x11c);
    uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x11c) >> 0x20);
    goto LAB_10570e710;
  }
  if (bVar14 == 1) {
    lVar16 = (*(code *)**(undefined8 **)(param_2 + 0x120))
                       (&uStack_60,param_2 + 0x138,*(undefined8 *)(param_2 + 0x128),
                        *(undefined8 *)(param_2 + 0x130));
    uStack_64 = *(undefined4 *)(param_2 + 0x11c);
    uStack_67 = *(undefined1 *)(param_2 + 0x119);
    param_2 = lVar16;
    goto LAB_10570e710;
  }
  uStack_67 = *(undefined1 *)(param_2 + 0x119);
  lVar16 = -0x8000000000000000;
  if (*(long *)(param_2 + 0x120) != -0x8000000000000000) {
    uVar21 = *(undefined8 *)(param_2 + 0x128);
    lVar16 = *(long *)(param_2 + 0x130);
    if (lVar16 == 0) {
      unaff_x20 = 1;
    }
    else {
      unaff_x20 = _malloc(lVar16);
      if (unaff_x20 == 0) {
        auVar27 = func_0x0001087c9084(1,lVar16);
        ppcVar19 = auVar27._8_8_;
        puVar17 = auVar27._0_8_;
        if (((ulong)ppcVar19[7] & 1) == 0) {
          if (1 < *puVar17) {
            if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
               (((bVar14 = bRam000000010b632960, bRam000000010b632960 - 1 < 2 ||
                 ((bRam000000010b632960 != 0 &&
                  (bVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (0x10b632950), bVar14 != 0)))) &&
                (iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (lRam000000010b632950,bVar14), iVar15 != 0)))) {
              lStack_128 = lRam000000010b632950 + 0x30;
              puStack_c8 = &
                           __ZN66__LT_h2__frame__settings__Settings_u20_as_u20_core__fmt__Debug_GT_3fmt17h644bc3e932c8b021E
              ;
              pppcStack_d8 = &ppcStack_d0;
              pcStack_e0 = s_queue_to_send_local_settings__108b17556;
              ppcStack_150 = &pcStack_e0;
              puStack_148 = &UNK_10b3a47a8;
              pppcStack_138 = &ppcStack_150;
              uStack_140 = 1;
              uStack_130 = 1;
              ppcStack_d0 = ppcVar19;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (lRam000000010b632950,&uStack_140);
              lVar16 = lRam000000010b632950;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                pppcStack_188 = *(char ****)(lRam000000010b632950 + 0x20);
                uStack_180 = *(undefined8 *)(lRam000000010b632950 + 0x28);
                acStack_190[0] = '\x05';
                acStack_190[1] = '\0';
                acStack_190[2] = '\0';
                acStack_190[3] = '\0';
                acStack_190[4] = '\0';
                acStack_190[5] = '\0';
                acStack_190[6] = '\0';
                acStack_190[7] = '\0';
                puVar4 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_10b3c24c8;
                }
                puVar5 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar5 = &UNK_109adfc03;
                }
                iVar15 = (**(code **)(puVar4 + 0x18))(puVar5,acStack_190);
                if (iVar15 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar16,puVar5,puVar4,acStack_190,&uStack_140);
                }
              }
            }
            else {
              lVar16 = lRam000000010b632950;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uStack_1a0 = *(undefined8 *)(lRam000000010b632950 + 0x20);
                uStack_198 = *(undefined8 *)(lRam000000010b632950 + 0x28);
                uStack_1a8 = 5;
                puVar4 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_10b3c24c8;
                }
                puVar5 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar5 = &UNK_109adfc03;
                }
                iVar15 = (**(code **)(puVar4 + 0x18))(puVar5,&uStack_1a8);
                if (iVar15 != 0) {
                  lStack_178 = lRam000000010b632950 + 0x30;
                  puStack_148 = &
                                __ZN66__LT_h2__frame__settings__Settings_u20_as_u20_core__fmt__Debug_GT_3fmt17h644bc3e932c8b021E
                  ;
                  pppcStack_158 = &ppcStack_150;
                  pcStack_160 = s_queue_to_send_local_settings__108b17556;
                  ppcStack_170 = &pcStack_160;
                  puStack_168 = &UNK_10b3a47a8;
                  pppcStack_188 = &ppcStack_170;
                  acStack_190[0] = '\x01';
                  acStack_190[1] = '\0';
                  acStack_190[2] = '\0';
                  acStack_190[3] = '\0';
                  acStack_190[4] = '\0';
                  acStack_190[5] = '\0';
                  acStack_190[6] = '\0';
                  acStack_190[7] = '\0';
                  uStack_180 = 1;
                  lStack_120 = *(long *)(lVar16 + 0x60);
                  uStack_118 = *(undefined8 *)(lVar16 + 0x68);
                  pppcStack_138 = *(char ****)(lVar16 + 0x50);
                  uStack_130 = *(undefined8 *)(lVar16 + 0x58);
                  uStack_140 = 1;
                  if (pppcStack_138 == (char ***)0x0) {
                    uStack_140 = 2;
                  }
                  uStack_f8 = *(undefined4 *)(lVar16 + 8);
                  uStack_f4 = *(undefined4 *)(lVar16 + 0xc);
                  pcStack_e0 = acStack_190;
                  pppcStack_d8 = (char ***)CONCAT71(pppcStack_d8._1_7_,1);
                  ppcStack_d0 = &pcStack_e0;
                  puStack_c8 = &DAT_1061c2098;
                  lStack_128 = 1;
                  if (lStack_120 == 0) {
                    lStack_128 = 2;
                  }
                  uStack_108 = uStack_1a0;
                  uStack_110 = uStack_1a8;
                  uStack_100 = uStack_198;
                  pppcStack_e8 = &ppcStack_d0;
                  pcStack_f0 = s__108b39f4f;
                  ppcStack_150 = ppcVar19;
                  (**(code **)(puVar4 + 0x20))(puVar5,&uStack_140);
                }
              }
            }
            *puVar17 = 0;
            pcVar24 = *ppcVar19;
            pcVar26 = ppcVar19[3];
            pcVar25 = ppcVar19[2];
            *(char **)(puVar17 + 3) = ppcVar19[1];
            *(char **)(puVar17 + 1) = pcVar24;
            *(char **)(puVar17 + 7) = pcVar26;
            *(char **)(puVar17 + 5) = pcVar25;
            pcVar24 = ppcVar19[4];
            *(char **)(puVar17 + 0xb) = ppcVar19[5];
            *(char **)(puVar17 + 9) = pcVar24;
            uVar21 = *(undefined8 *)((long)ppcVar19 + 0x2c);
            *(undefined8 *)(puVar17 + 0xe) = *(undefined8 *)((long)ppcVar19 + 0x34);
            *(undefined8 *)(puVar17 + 0xc) = uVar21;
            return 0xd;
          }
          return 10;
        }
        auVar27 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109a7293c,0x21,&UNK_10b3abb38);
        pbVar20 = auVar27._8_8_;
        plVar18 = auVar27._0_8_;
        if ((char)plVar18[1] == '\x01') {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109a72c20,0x2d,&UNK_10b3abdc0);
LAB_10570f17c:
          __ZN4core9panicking13assert_failed17h1b82284f18993378E
                    (0,&plStack_320,&UNK_10b3abdd8,&UNK_109a72c4d,0x47,&UNK_10b3abde0);
          pbVar20 = extraout_x1;
LAB_10570f1a4:
          bVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b6336b8);
          if (bVar14 == 0) goto LAB_10570eee4;
        }
        else {
          if ((*pbVar20 & 1) == 0) {
            uVar21 = *(undefined8 *)(pbVar20 + 1);
            *(undefined1 *)(plVar18 + 1) = 1;
            *(undefined8 *)((long)plVar18 + 9) = uVar21;
            return 0;
          }
          ppuVar23 = apuStack_2b0;
          cVar12 = *(char *)((long)plVar18 + 0x11);
          lVar16 = *(long *)((long)plVar18 + 0x12);
          *(undefined1 *)((long)plVar18 + 0x11) = 2;
          if (cVar12 == '\x02') {
            lVar22 = *(long *)(pbVar20 + 1);
            lVar16 = *plVar18;
          }
          else {
            lVar22 = *(long *)(pbVar20 + 1);
            lStack_328 = lVar16;
            if (lVar16 == lVar22) {
              plStack_320 = &lStack_328;
              if (lVar16 == 0x54fe9b8bf0a27b0b) {
                if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                    ((bVar14 = bRam000000010b6336b0, bRam000000010b6336b0 - 1 < 2 ||
                     ((bRam000000010b6336b0 != 0 &&
                      (bVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                          (0x10b6336a0), bVar14 != 0)))))) &&
                   (iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                       (lRam000000010b6336a0,bVar14), iVar15 != 0)) {
                  lStack_268 = lRam000000010b6336a0 + 0x30;
                  puStack_2d0 = &UNK_109a72c70;
                  ppuStack_2c8 = (undefined1 **)0x2d;
                  ppuStack_210 = &puStack_2d0;
                  puStack_208 = &UNK_10b3a47a8;
                  pppuStack_278 = &ppuStack_210;
                  uStack_280 = 1;
                  uStack_270 = 1;
                  FUN_10570f1c4(&uStack_280);
                  return 2;
                }
                lVar16 = lRam000000010b6336a0;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  uStack_310 = *(undefined8 *)(lRam000000010b6336a0 + 0x20);
                  uStack_308 = *(undefined8 *)(lRam000000010b6336a0 + 0x28);
                  uStack_318 = 5;
                  puVar4 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar4 = &UNK_10b3c24c8;
                  }
                  puVar5 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar5 = &UNK_109adfc03;
                  }
                  iVar15 = (**(code **)(puVar4 + 0x18))(puVar5,&uStack_318);
                  if (iVar15 != 0) {
                    lStack_268 = lRam000000010b6336a0 + 0x30;
                    puStack_2d0 = &UNK_109a72c70;
                    ppuStack_2c8 = (undefined1 **)0x2d;
                    ppuStack_210 = &puStack_2d0;
                    puStack_208 = &UNK_10b3a47a8;
                    pppuStack_278 = &ppuStack_210;
                    uStack_280 = 1;
                    uStack_270 = 1;
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar16,puVar5,puVar4,&uStack_318,&uStack_280);
                    return 2;
                  }
                }
                return 2;
              }
              goto LAB_10570f17c;
            }
            *(char *)((long)plVar18 + 0x11) = cVar12;
            lVar16 = *plVar18;
          }
          if (((lVar16 != 0) && (lVar22 == -0x4be978f4852483c5)) && (*(long *)(lVar16 + 0x10) == 2))
          {
            *(long *)(lVar16 + 0x10) = 3;
            puVar1 = (ulong *)(lVar16 + 0x40);
            LOAcquire();
            uVar13 = *puVar1;
            *puVar1 = uVar13 | 2;
            LORelease();
            if (uVar13 == 0) {
              lVar22 = *(long *)(lVar16 + 0x30);
              *(undefined8 *)(lVar16 + 0x30) = 0;
              *puVar1 = *puVar1 & 0xfffffffffffffffd;
              LORelease();
              if (lVar22 != 0) {
                (**(code **)(lVar22 + 8))(*(undefined8 *)(lVar16 + 0x38));
              }
            }
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                ((bVar14 = bRam000000010b633698, bRam000000010b633698 - 1 < 2 ||
                 ((bRam000000010b633698 != 0 &&
                  (bVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (0x10b633688), bVar14 != 0)))))) &&
               (iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (lRam000000010b633688,bVar14), iVar15 != 0)) {
              lStack_268 = lRam000000010b633688 + 0x30;
              puStack_2d0 = &UNK_109a72c86;
              ppuStack_2c8 = (undefined1 **)0x25;
              ppuStack_210 = &puStack_2d0;
              puStack_208 = &UNK_10b3a47a8;
              pppuStack_278 = &ppuStack_210;
              uStack_280 = 1;
              uStack_270 = 1;
              FUN_10570f2fc(&uStack_280);
              return 1;
            }
            lVar16 = lRam000000010b633688;
            if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
              return 1;
            }
            if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
              return 1;
            }
            uStack_2f8 = *(undefined8 *)(lRam000000010b633688 + 0x20);
            uStack_2f0 = *(undefined8 *)(lRam000000010b633688 + 0x28);
            uStack_300 = 5;
            puVar4 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_10b3c24c8;
            }
            puVar5 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar5 = &UNK_109adfc03;
            }
            iVar15 = (**(code **)(puVar4 + 0x18))(puVar5,&uStack_300);
            if (iVar15 == 0) {
              return 1;
            }
            lStack_268 = lRam000000010b633688 + 0x30;
            puStack_2d0 = &UNK_109a72c86;
            ppuStack_2c8 = (undefined1 **)0x25;
            ppuStack_210 = &puStack_2d0;
            puStack_208 = &UNK_10b3a47a8;
            pppuStack_278 = &ppuStack_210;
            uStack_280 = 1;
            uStack_270 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar16,puVar5,puVar4,&uStack_300,&uStack_280);
            return 1;
          }
          if (3 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) goto LAB_10570eee4;
          bVar14 = bRam000000010b6336c8;
          if (1 < bRam000000010b6336c8 - 1) {
            if (bRam000000010b6336c8 == 0) goto LAB_10570eee4;
            goto LAB_10570f1a4;
          }
        }
        iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (lRam000000010b6336b8,bVar14);
        if (iVar15 != 0) {
          ppuVar23[0x14] = pbVar20;
          ppuVar23[0x15] = &DAT_105716f54;
          ppuVar23[0x12] = s__recv_PING_ack_that_we_never_sen_108b175db;
          ppuVar23[0x13] = (undefined1 *)&ppuStack_210;
          ppuVar23[4] = auStack_220;
          ppuVar23[5] = &UNK_10b3a47a8;
          ppuVar23[6] = (undefined1 *)0x1;
          ppuVar23[7] = auStack_290;
          ppuVar23[8] = (undefined1 *)0x1;
          ppuVar23[9] = (undefined1 *)(lRam000000010b6336b8 + 0x30);
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (lRam000000010b6336b8,&uStack_280);
          lVar16 = lRam000000010b6336b8;
          if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
            return 1;
          }
          if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 2) {
            return 1;
          }
          ppuStack_2c8 = *(undefined1 ***)(lRam000000010b6336b8 + 0x20);
          uStack_2c0 = *(undefined8 *)(lRam000000010b6336b8 + 0x28);
          puStack_2d0 = (undefined *)0x2;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar15 = (**(code **)(puVar4 + 0x18))(puVar5,&puStack_2d0);
          if (iVar15 == 0) {
            return 1;
          }
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar16,puVar5,puVar4,&puStack_2d0,&uStack_280);
          return 1;
        }
LAB_10570eee4:
        lVar16 = lRam000000010b6336b8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') ||
           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 2)) {
          return 1;
        }
        puStack_2e0 = *(undefined1 **)(lRam000000010b6336b8 + 0x20);
        puStack_2d8 = *(undefined1 **)(lRam000000010b6336b8 + 0x28);
        puStack_2e8 = (undefined1 *)0x2;
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar15 = (**(code **)(puVar4 + 0x18))(puVar5,&puStack_2e8);
        if (iVar15 == 0) {
          return 1;
        }
        lStack_2b8 = lRam000000010b6336b8 + 0x30;
        puVar8 = *(undefined1 **)(lVar16 + 0x50);
        puVar10 = *(undefined1 **)(lVar16 + 0x58);
        puVar2 = (undefined1 *)0x1;
        if (puVar8 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x2;
        }
        ppuVar23[4] = pbVar20;
        ppuVar23[5] = &DAT_105716f54;
        ppuVar23[2] = s__recv_PING_ack_that_we_never_sen_108b175db;
        ppuVar23[3] = auStack_290;
        apuStack_2b0[0] = auStack_2a0;
        ppuVar23[1] = &UNK_10b3a47a8;
        ppuStack_2c8 = apuStack_2b0;
        puStack_2d0 = (undefined *)0x1;
        uStack_2c0 = 1;
        puVar9 = *(undefined1 **)(lVar16 + 0x60);
        puVar11 = *(undefined1 **)(lVar16 + 0x68);
        uVar6 = *(undefined4 *)(lVar16 + 8);
        uVar7 = *(undefined4 *)(lVar16 + 0xc);
        ppuVar23[0x12] = (undefined1 *)&puStack_2d0;
        uStack_218 = 1;
        ppuVar23[0x14] = auStack_220;
        ppuVar23[0x15] = &DAT_1061c2098;
        puVar3 = (undefined1 *)0x1;
        if (puVar9 == (undefined1 *)0x0) {
          puVar3 = (undefined1 *)0x2;
        }
        ppuVar23[0xd] = puStack_2e0;
        ppuVar23[0xc] = puStack_2e8;
        ppuVar23[0xe] = puStack_2d8;
        ppuVar23[0x10] = s__108b39f4f;
        ppuVar23[0x11] = (undefined1 *)&ppuStack_210;
        ppuVar23[6] = puVar2;
        ppuVar23[7] = puVar8;
        ppuVar23[8] = puVar10;
        ppuVar23[9] = puVar3;
        ppuVar23[10] = puVar9;
        ppuVar23[0xb] = puVar11;
        *(undefined4 *)(ppuVar23 + 0xf) = uVar6;
        *(undefined4 *)((long)ppuVar23 + 0x7c) = uVar7;
        (**(code **)(puVar4 + 0x20))(puVar5,&uStack_280);
        return 1;
      }
    }
    param_2 = _memcpy(unaff_x20,uVar21,lVar16);
  }
  uStack_60 = (undefined4)lVar16;
  uStack_5c = (undefined4)((ulong)lVar16 >> 0x20);
  lStack_58 = unaff_x20;
  lStack_50 = lVar16;
LAB_10570e710:
  param_1[4] = uStack_48;
  param_1[1] = CONCAT44(uStack_5c,uStack_60);
  *param_1 = CONCAT44(uStack_64,CONCAT22(uStack_66,CONCAT11(uStack_67,bVar14)));
  param_1[3] = lStack_50;
  param_1[2] = lStack_58;
  return param_2;
}

