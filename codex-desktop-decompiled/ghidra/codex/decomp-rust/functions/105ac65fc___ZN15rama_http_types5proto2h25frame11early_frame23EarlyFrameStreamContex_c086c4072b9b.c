
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN15rama_http_types5proto2h25frame11early_frame23EarlyFrameStreamContext21record_settings_frame17h5dd7d6f3772da26dE
               (ulong *param_1,ulong *param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  char ***pppcVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  undefined *puVar14;
  long *plVar15;
  long *extraout_x8;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined2 uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  undefined6 *puStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  undefined1 **ppuStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  char ***pppcStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  char **ppcStack_2e0;
  undefined *puStack_2d8;
  char *pcStack_2d0;
  char ***pppcStack_2c8;
  char **ppcStack_2c0;
  undefined *puStack_2b8;
  ulong uStack_2b0;
  char ***pppcStack_2a8;
  ulong uStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  char *pcStack_260;
  char ***pppcStack_258;
  char *pcStack_250;
  char ***pppcStack_248;
  char **ppcStack_240;
  undefined *puStack_238;
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  uint uStack_1c4;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  ulong *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  char ***pppcStack_158;
  ulong uStack_150;
  long lStack_148;
  char **ppcStack_140;
  undefined *puStack_138;
  char *pcStack_130;
  ulong ***pppuStack_128;
  ulong **ppuStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined6 uStack_f8;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char *pcStack_a0;
  ulong ***pppuStack_98;
  ulong *puStack_90;
  ulong ***pppuStack_88;
  ulong **ppuStack_80;
  undefined *puStack_78;
  
  puStack_180 = param_2;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bVar9 = bRam000000010b638cb8, bRam000000010b638cb8 - 1 < 2 ||
       ((bRam000000010b638cb8 != 0 &&
        (bVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b638ca8), bVar9 != 0)))) &&
      (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (lRam000000010b638ca8,bVar9), iVar10 != 0)))) {
    lStack_d8 = lRam000000010b638ca8 + 0x30;
    ppuStack_80 = &puStack_180;
    puStack_78 = &DAT_105ad7500;
    pppuStack_88 = &ppuStack_80;
    puStack_90 = (ulong *)s_record_settings_frame__108b2451e;
    ppuStack_120 = &puStack_90;
    puStack_118 = &UNK_10b408ac0;
    uStack_f0 = 1;
    uStack_ee = 0;
    uStack_e8 = SUB82(&ppuStack_120,0);
    uStack_e6 = (undefined6)((ulong)&ppuStack_120 >> 0x10);
    uStack_e0 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b638ca8,&uStack_f0);
    lVar8 = lRam000000010b638ca8;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppcStack_158 = *(char ****)(lRam000000010b638ca8 + 0x20);
      uStack_150 = *(undefined8 *)(lRam000000010b638ca8 + 0x28);
      uStack_160 = 5;
      puVar14 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar14 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar10 = (**(code **)(puVar14 + 0x18))(puVar3,&uStack_160);
      if (iVar10 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar8,puVar3,puVar14,&uStack_160,&uStack_f0);
        param_3 = SUB84(puVar14,0);
      }
    }
  }
  else {
    lVar8 = lRam000000010b638ca8;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_170 = *(undefined8 *)(lRam000000010b638ca8 + 0x20);
      uStack_168 = *(undefined8 *)(lRam000000010b638ca8 + 0x28);
      uStack_178 = 5;
      puVar14 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar14 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar10 = (**(code **)(puVar14 + 0x18))(puVar3,&uStack_178);
      if (iVar10 != 0) {
        lStack_148 = lRam000000010b638ca8 + 0x30;
        ppuStack_120 = &puStack_180;
        puStack_118 = &DAT_105ad7500;
        pppuStack_128 = &ppuStack_120;
        pcStack_130 = s_record_settings_frame__108b2451e;
        ppcStack_140 = &pcStack_130;
        puStack_138 = &UNK_10b408ac0;
        pppcStack_158 = &ppcStack_140;
        uStack_160 = 1;
        uStack_150 = 1;
        lStack_d0 = *(long *)(lVar8 + 0x60);
        uStack_c8 = *(ulong *)(lVar8 + 0x68);
        lVar22 = *(long *)(lVar8 + 0x50);
        uStack_e0 = *(undefined8 *)(lVar8 + 0x58);
        uStack_f0 = 1;
        if (lVar22 == 0) {
          uStack_f0 = 2;
        }
        uStack_a8 = *(undefined4 *)(lVar8 + 8);
        uStack_a4 = *(undefined4 *)(lVar8 + 0xc);
        puStack_90 = &uStack_160;
        pppuStack_88 = (ulong ***)CONCAT71(pppuStack_88._1_7_,1);
        ppuStack_80 = &puStack_90;
        puStack_78 = &DAT_1061c2098;
        lStack_d8 = 1;
        if (lStack_d0 == 0) {
          lStack_d8 = 2;
        }
        uStack_b8 = uStack_170;
        uStack_c0 = uStack_178;
        uStack_b0 = uStack_168;
        pppuStack_98 = &ppuStack_80;
        pcStack_a0 = s__108b39f4f;
        uStack_ee = 0;
        uStack_e8 = (undefined2)lVar22;
        uStack_e6 = (undefined6)((ulong)lVar22 >> 0x10);
        (**(code **)(puVar14 + 0x20))(puVar3,&uStack_f0);
      }
    }
  }
  puVar13 = puStack_180;
  uVar19 = *param_1;
  uVar18 = uVar19;
  if (uVar19 < 0x8000000000000001) {
    uVar18 = 0;
  }
  if (((uVar18 & 0x7fffffffffffffff) == 0) &&
     (*param_1 = 0x8000000000000000, uVar19 != 0x8000000000000000)) {
    uStack_150 = param_1[2];
    pppcStack_158 = (char ***)param_1[1];
    uVar18 = puStack_180[0xf];
    uVar21 = (ulong)(byte)uVar18;
    uStack_184 = (undefined4)*puStack_180;
    uStack_188 = *(undefined4 *)((long)puStack_180 + 4);
    uStack_18c = (undefined4)puStack_180[1];
    uVar4 = *(undefined4 *)((long)puStack_180 + 0xc);
    uVar17 = puStack_180[2];
    uStack_190 = *(undefined4 *)((long)puStack_180 + 0x14);
    uStack_194 = (undefined4)puStack_180[3];
    uStack_198 = *(undefined4 *)((long)puStack_180 + 0x1c);
    uStack_19c = (undefined4)puStack_180[4];
    uStack_1a0 = *(undefined4 *)((long)puStack_180 + 0x24);
    uStack_1a4 = (undefined4)puStack_180[5];
    uStack_1a8 = *(undefined4 *)((long)puStack_180 + 0x2c);
    uStack_1ac = (undefined4)puStack_180[6];
    uStack_1b0 = *(undefined4 *)((long)puStack_180 + 0x34);
    uVar6 = puStack_180[7];
    uVar5 = *(undefined4 *)((long)puStack_180 + 0x3c);
    uStack_160 = uVar19;
    if ((short)puStack_180[8] == 2) {
      uVar20 = 2;
      uVar1 = uStack_150;
    }
    else {
      FUN_105adcf48(&uStack_f0);
      uStack_1c4 = (uint)(ushort)puVar13[0xe];
      lStack_108 = lStack_d0;
      lStack_110 = lStack_d8;
      uStack_1c0 = uStack_c8;
      uStack_1b8 = uStack_e0;
      uVar1 = uStack_150;
      uStack_100 = uStack_ee;
      uStack_fa = uStack_e8;
      uStack_f8 = uStack_e6;
      uVar20 = uStack_f0;
    }
    if (uVar1 == uVar19) {
      uStack_150 = uVar1;
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0a294ef6efdfa803E(&uStack_160);
    }
    pppcVar7 = pppcStack_158;
    uVar19 = uStack_160;
    puVar2 = (undefined4 *)((long)pppcStack_158 + uVar1 * 0x80);
    *puVar2 = uStack_184;
    puVar2[1] = uStack_188;
    puVar2[2] = uStack_18c;
    puVar2[3] = uVar4;
    puVar2[4] = (int)uVar17;
    puVar2[5] = uStack_190;
    puVar2[6] = uStack_194;
    puVar2[7] = uStack_198;
    puVar2[8] = uStack_19c;
    puVar2[9] = uStack_1a0;
    puVar2[10] = uStack_1a4;
    puVar2[0xb] = uStack_1a8;
    puVar2[0xc] = uStack_1ac;
    puVar2[0xd] = uStack_1b0;
    puVar2[0xe] = (int)uVar6;
    puVar2[0xf] = uVar5;
    *(undefined2 *)(puVar2 + 0x10) = uVar20;
    *(ulong *)(puVar2 + 0x12) = CONCAT62(uStack_f8,uStack_fa);
    *(ulong *)((long)puVar2 + 0x42) = CONCAT26(uStack_fa,uStack_100);
    *(undefined8 *)(puVar2 + 0x14) = uStack_1b8;
    *(long *)(puVar2 + 0x18) = lStack_108;
    *(long *)(puVar2 + 0x16) = lStack_110;
    *(ulong *)(puVar2 + 0x1a) = uStack_1c0;
    *(short *)(puVar2 + 0x1c) = (short)uStack_1c4;
    *(byte *)(puVar2 + 0x1e) = (byte)uVar18;
    uVar1 = uVar1 + 1;
    if (uVar1 < 0x10) {
      param_1[1] = (ulong)pppcStack_158;
      *param_1 = uStack_160;
      param_1[2] = uVar1;
    }
    else {
      uVar18 = (uVar1 & 0xffffffffffffff) << 7 | 0x10;
      uStack_150 = uVar1;
      puVar11 = (undefined8 *)_malloc(uVar18);
      if (puVar11 == (undefined8 *)0x0) {
        uVar12 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,uVar18);
        if (((int)uVar1 != 2) && (8 < uStack_1c0)) {
          _free(uStack_1b8);
          FUN_105ad8880(&uStack_160);
          uVar12 = __Unwind_Resume(uVar12);
        }
        FUN_105ad8880(&uStack_160);
        auVar25 = __Unwind_Resume(uVar12);
        uStack_320 = auVar25._8_4_;
        puVar13 = auVar25._0_8_;
        uStack_1d8 = 0x105ac65fc;
        uStack_31c = param_3;
        puStack_1e0 = &stack0xfffffffffffffff0;
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bVar9 = bRam000000010b638cd0, bRam000000010b638cd0 - 1 < 2 ||
             ((bRam000000010b638cd0 != 0 &&
              (bVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (0x10b638cc0), bVar9 != 0)))))) &&
           (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (lRam000000010b638cc0,bVar9), iVar10 != 0)) {
          lStack_298 = lRam000000010b638cc0 + 0x30;
          puStack_238 = &DAT_105adf59c;
          pppcStack_248 = &ppcStack_240;
          pcStack_250 = s_record_windows_update_frame__108b24538;
          ppcStack_2c0 = &pcStack_250;
          puStack_2b8 = &UNK_10b408ac0;
          pppcStack_2a8 = &ppcStack_2c0;
          uStack_2b0 = 1;
          uStack_2a0 = 1;
          ppcStack_240 = (char **)&uStack_320;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (lRam000000010b638cc0,&uStack_2b0);
          lVar8 = lRam000000010b638cc0;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            pppcStack_2f8 = *(char ****)(lRam000000010b638cc0 + 0x20);
            uStack_2f0 = *(undefined8 *)(lRam000000010b638cc0 + 0x28);
            uStack_300 = 5;
            puVar14 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar14 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar10 = (**(code **)(puVar14 + 0x18))(puVar3,&uStack_300);
            if (iVar10 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar8,puVar3,puVar14,&uStack_300,&uStack_2b0);
            }
          }
        }
        else {
          lVar8 = lRam000000010b638cc0;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_310 = *(undefined8 *)(lRam000000010b638cc0 + 0x20);
            uStack_308 = *(undefined8 *)(lRam000000010b638cc0 + 0x28);
            uStack_318 = 5;
            puVar14 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar14 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar10 = (**(code **)(puVar14 + 0x18))(puVar3,&uStack_318);
            if (iVar10 != 0) {
              lStack_2e8 = lRam000000010b638cc0 + 0x30;
              puStack_2b8 = &DAT_105adf59c;
              pppcStack_2c8 = &ppcStack_2c0;
              pcStack_2d0 = s_record_windows_update_frame__108b24538;
              ppcStack_2e0 = &pcStack_2d0;
              puStack_2d8 = &UNK_10b408ac0;
              pppcStack_2f8 = &ppcStack_2e0;
              uStack_300 = 1;
              uStack_2f0 = 1;
              lStack_290 = *(long *)(lVar8 + 0x60);
              uStack_288 = *(undefined8 *)(lVar8 + 0x68);
              pppcStack_2a8 = *(char ****)(lVar8 + 0x50);
              uStack_2a0 = *(undefined8 *)(lVar8 + 0x58);
              uStack_2b0 = 1;
              if (pppcStack_2a8 == (char ***)0x0) {
                uStack_2b0 = 2;
              }
              uStack_268 = *(undefined4 *)(lVar8 + 8);
              uStack_264 = *(undefined4 *)(lVar8 + 0xc);
              pcStack_250 = (char *)&uStack_300;
              pppcStack_248 = (char ***)CONCAT71(pppcStack_248._1_7_,1);
              ppcStack_240 = &pcStack_250;
              puStack_238 = &DAT_1061c2098;
              lStack_298 = 1;
              if (lStack_290 == 0) {
                lStack_298 = 2;
              }
              uStack_278 = uStack_310;
              uStack_280 = uStack_318;
              uStack_270 = uStack_308;
              pppcStack_258 = &ppcStack_240;
              pcStack_260 = s__108b39f4f;
              ppcStack_2c0 = (char **)&uStack_320;
              (**(code **)(puVar14 + 0x20))(puVar3,&uStack_2b0);
            }
          }
        }
        uStack_2b0 = *puVar13;
        uVar18 = uStack_2b0;
        if (uStack_2b0 < 0x8000000000000001) {
          uVar18 = 0;
        }
        if ((uVar18 & 0x7fffffffffffffff) == 0) {
          uVar12 = CONCAT44(uStack_31c,uStack_320);
          *puVar13 = 0x8000000000000000;
          if (uStack_2b0 != 0x8000000000000000) {
            uVar18 = puVar13[2];
            pppcStack_2a8 = (char ***)puVar13[1];
            if (uVar18 == uStack_2b0) {
              uStack_2a0 = uVar18;
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0a294ef6efdfa803E(&uStack_2b0);
            }
            pppcVar7 = pppcStack_2a8;
            uVar17 = uStack_2b0;
            puVar2 = (undefined4 *)((long)pppcStack_2a8 + uVar18 * 0x80);
            *puVar2 = 4;
            *(undefined8 *)(puVar2 + 1) = uVar12;
            uVar19 = uVar18 + 1;
            if (uVar19 < 0x10) {
              puVar13[1] = (ulong)pppcStack_2a8;
              *puVar13 = uStack_2b0;
              puVar13[2] = uVar19;
            }
            else {
              uVar6 = (uVar19 & 0xffffffffffffff) << 7 | 0x10;
              uStack_2a0 = uVar19;
              puVar11 = (undefined8 *)_malloc(uVar6);
              if (puVar11 == (undefined8 *)0x0) {
                uVar12 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,uVar6);
                FUN_105ad8880(&uStack_2b0);
                auVar24 = __Unwind_Resume(uVar12);
                plVar15 = auVar24._8_8_;
                uStack_360 = uVar17;
                uStack_348 = (ulong)pppcVar7;
                uStack_328 = 0x105ac69d4;
                puStack_370 = &uStack_100;
                uStack_368 = uVar21;
                uStack_358 = uVar19;
                uStack_350 = uVar6;
                uStack_340 = uVar18;
                uStack_338 = uVar12;
                ppuStack_330 = &puStack_1e0;
                if (auVar24._0_4_ == 0) {
                  *(undefined1 *)extraout_x8 = 0x12;
                  *(undefined1 *)((long)extraout_x8 + 0x25) = 2;
                  uVar19 = plVar15[2];
                }
                else {
                  if (((auVar24._4_4_ & 0xff) >> 3 & 1) == 0) {
LAB_105ac69fc:
                    lVar8 = *plVar15;
                    lVar23 = plVar15[3];
                    lVar22 = plVar15[2];
                    extraout_x8[1] = plVar15[1];
                    *extraout_x8 = lVar8;
                    extraout_x8[3] = lVar23;
                    extraout_x8[2] = lVar22;
                    *(int *)(extraout_x8 + 4) = auVar24._0_4_;
                    *(byte *)((long)extraout_x8 + 0x24) = auVar24[4] & 9;
                    *(char *)((long)extraout_x8 + 0x25) = (char)((auVar24._4_4_ & 8) >> 3);
                    *(char *)((long)extraout_x8 + 0x26) = (char)uVar18;
                    return;
                  }
                  puVar13 = (ulong *)(plVar15 + 2);
                  uVar19 = *puVar13;
                  if (uVar19 != 0) {
                    pbVar16 = (byte *)plVar15[1] + 1;
                    uVar18 = (ulong)*(byte *)plVar15[1];
                    if (uVar18 < uVar19) {
                      uVar17 = uVar19 - 1;
                      plVar15[1] = (long)pbVar16;
                      plVar15[2] = uVar17;
                      uVar19 = uVar19 + ~uVar18;
                      if (uVar19 < uVar17) {
                        puVar11 = (undefined8 *)*plVar15;
                        if ((puVar11 ==
                             (undefined8 *)
                             &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E) ||
                           (puVar11 ==
                            (undefined8 *)
                            &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E)) {
                          if (uVar19 == 0) {
                            lStack_388 = plVar15[1];
                            lStack_390 = *plVar15;
                            lStack_378 = plVar15[3];
                            lStack_380 = plVar15[2];
                            *plVar15 = (long)&UNK_10b205a90;
                            plVar15[1] = (long)pbVar16;
                            *puVar13 = 0;
                            plVar15[3] = 0;
                          }
                          else {
                            (*(code *)*puVar11)(&lStack_390,plVar15 + 3,pbVar16,uVar17);
                            *puVar13 = uVar19;
                            lStack_380 = lStack_380 - uVar19;
                            lStack_388 = lStack_388 + uVar19;
                          }
                          (**(code **)(lStack_390 + 0x20))(&lStack_378,lStack_388,lStack_380);
                        }
                        else {
                          *puVar13 = uVar19;
                        }
                      }
                      goto LAB_105ac69fc;
                    }
                  }
                  *(undefined1 *)extraout_x8 = 0xd;
                  *(undefined1 *)((long)extraout_x8 + 0x25) = 2;
                }
                    /* WARNING: Could not recover jumptable at 0x000105ac6af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar15 + 0x20))(plVar15 + 3,plVar15[1],uVar19);
                return;
              }
              puVar11[1] = 1;
              *puVar11 = 1;
              _memcpy(puVar11 + 2,pppcVar7,uVar19 * 0x80);
              if (uVar17 != 0) {
                _free(pppcVar7);
              }
              plVar15 = (long *)puVar13[3];
              if (plVar15 != (long *)0x0) {
                lVar8 = *plVar15;
                *plVar15 = lVar8 + -1;
                LORelease();
                if (lVar8 == 1) {
                  DataMemoryBarrier(2,1);
                  func_0x000105adc8a8();
                }
              }
              puVar13[3] = (ulong)puVar11;
              puVar13[4] = uVar19;
            }
          }
        }
        return;
      }
      puVar11[1] = 1;
      *puVar11 = 1;
      _memcpy(puVar11 + 2,pppcVar7,uVar1 * 0x80);
      if (uVar19 != 0) {
        _free(pppcVar7);
      }
      plVar15 = (long *)param_1[3];
      if (plVar15 != (long *)0x0) {
        lVar8 = *plVar15;
        *plVar15 = lVar8 + -1;
        LORelease();
        if (lVar8 == 1) {
          DataMemoryBarrier(2,1);
          func_0x000105adc8a8();
        }
      }
      param_1[3] = (ulong)puVar11;
      param_1[4] = uVar1;
    }
  }
  return;
}

