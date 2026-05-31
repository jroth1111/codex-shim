
void FUN_10057da14(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int *piVar4;
  byte bVar5;
  code *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined1 uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 *puStack_488;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3e9;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_359;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined7 uStack_2d8;
  undefined1 uStack_2d1;
  undefined7 uStack_2d0;
  long lStack_2c9;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_239;
  long lStack_228;
  undefined1 uStack_220;
  undefined8 uStack_21f;
  undefined8 uStack_217;
  undefined8 uStack_20f;
  undefined8 uStack_207;
  undefined8 uStack_1ff;
  undefined8 uStack_1f7;
  undefined8 uStack_1ef;
  undefined8 uStack_1e7;
  undefined8 uStack_1df;
  undefined8 uStack_1d7;
  undefined8 uStack_1cf;
  undefined8 uStack_1c7;
  undefined8 uStack_1bf;
  undefined8 uStack_1b7;
  undefined8 uStack_1af;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_109;
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
  undefined8 uStack_79;
  
  pbVar2 = (byte *)(param_2 + 0x961);
  pbVar18 = (byte *)(param_2 + 0x565);
  bVar5 = *(byte *)(param_2 + 3);
  if (bVar5 < 3) {
    if (bVar5 != 0) {
      if (bVar5 == 1) {
        FUN_107c05cc0(&UNK_10b217d00);
      }
      FUN_107c05cc4();
LAB_10057e248:
      FUN_107c03c64(1,pbVar18);
      goto LAB_10057e2b8;
    }
    puVar11 = (undefined8 *)*param_2;
    plVar13 = (long *)param_2[1];
    uVar19 = param_2[2];
    uVar21 = *(undefined1 *)((long)param_2 + 0x1b);
    uVar22 = *(undefined1 *)((long)param_2 + 0x19);
    uVar17 = *(undefined1 *)((long)param_2 + 0x1a);
    lVar9 = *(long *)(*plVar13 + 0x7a8);
    lVar9 = (**(code **)(lVar9 + 0x20))
                      (*(long *)(*plVar13 + 0x7a0) +
                       (*(long *)(lVar9 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    piVar4 = *(int **)(lVar9 + 0x48);
    if ((*(long *)(lVar9 + 0x50) != 6) || (*piVar4 != 0x6e65704f || (short)piVar4[1] != 0x4941)) {
      uVar3 = 0;
      if (*(long *)(lVar9 + 0x58) != -0x8000000000000000) {
        uVar3 = *(undefined8 *)(lVar9 + 0x60);
      }
      uVar7 = __ZN9codex_api8provider27is_azure_responses_provider17hb8387dd0c218361dE
                        (piVar4,*(long *)(lVar9 + 0x50),uVar3,*(undefined8 *)(lVar9 + 0x68));
      if ((uVar7 & 1) == 0) {
        plVar10 = (long *)*puVar11;
        lVar9 = *plVar10;
        *plVar10 = lVar9 + 1;
        if (lVar9 < 0) goto LAB_10057e2b8;
        plVar13 = (long *)*plVar13;
        lVar9 = *plVar13;
        *plVar13 = lVar9 + 1;
        if (lVar9 < 0) goto LAB_10057e2b8;
        param_2[0x9b3] = plVar10;
        param_2[0x9b4] = plVar13;
        *(undefined1 *)((long)param_2 + 0x4dab) = 0;
        *(undefined1 *)((long)param_2 + 0x4dac) = uVar22;
        *(undefined1 *)((long)param_2 + 0x4dad) = uVar17;
        *(undefined1 *)((long)param_2 + 0x4dae) = uVar21;
LAB_10057dccc:
        *(undefined1 *)(param_2 + 0x9b5) = 0;
        *(undefined2 *)((long)param_2 + 0x4da9) = 0x101;
        param_2[0x9b2] = plVar13;
        plStack_2c0 = plVar10;
        if (plVar13[0xa1] == -0x8000000000000000) {
          puVar20 = &UNK_108ca6220;
          pbVar18 = (byte *)0x1aa;
LAB_10057dd14:
          lVar9 = _malloc(pbVar18);
          if (lVar9 == 0) goto LAB_10057e248;
        }
        else {
          puVar20 = (undefined *)plVar13[0xa2];
          pbVar18 = (byte *)plVar13[0xa3];
          if (pbVar18 != (byte *)0x0) goto LAB_10057dd14;
          lVar9 = 1;
        }
        _memcpy(lVar9,puVar20,pbVar18);
        *(undefined1 *)(param_2 + 0x9b5) = 1;
        puVar8 = (undefined1 *)_malloc(0x38);
        if (puVar8 == (undefined1 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
          goto LAB_10057e2b8;
        }
        *(undefined2 *)(param_2 + 0x9b5) = 0;
        *puVar8 = 0;
        *(byte **)(puVar8 + 8) = pbVar18;
        *(long *)(puVar8 + 0x10) = lVar9;
        *(byte **)(puVar8 + 0x18) = pbVar18;
        *(undefined8 *)(puVar8 + 0x20) = 0;
        *(undefined8 *)(puVar8 + 0x28) = 8;
        *(undefined8 *)(puVar8 + 0x30) = 0;
        *(undefined1 *)((long)param_2 + 0x4daa) = 0;
        param_2[4] = 1;
        param_2[5] = puVar8;
        param_2[6] = 1;
        param_2[7] = plVar10;
        param_2[8] = param_2[0x9b2];
        *(undefined1 *)(param_2 + 0x2f) = uVar21;
        *(undefined1 *)((long)param_2 + 0x179) = 1;
        *(undefined1 *)((long)param_2 + 0x17a) = uVar22;
        *(undefined1 *)((long)param_2 + 0x17b) = uVar17;
        *(undefined1 *)((long)param_2 + 0x17c) = 0;
        goto LAB_10057dfdc;
      }
    }
    lVar9 = *(long *)(*plVar13 + 0x648);
    if (lVar9 != 0) {
      lVar12 = *(long *)(*plVar13 + 0x650);
      do {
        uVar7 = 0xffffffffffffffff;
        pbVar15 = (byte *)(lVar9 + 0xc);
        uVar16 = (ulong)*(ushort *)(lVar9 + 10);
        do {
          uVar14 = (ulong)*(ushort *)(lVar9 + 10);
          if (uVar16 == 0) goto LAB_10057db50;
          cVar1 = *pbVar15 < 0x35;
          if (0x35 < *pbVar15) {
            cVar1 = -1;
          }
          uVar16 = uVar16 - 1;
          uVar7 = uVar7 + 1;
          pbVar15 = pbVar15 + 1;
        } while (cVar1 == '\x01');
        uVar14 = uVar7;
        if (cVar1 == '\0') {
          plVar10 = (long *)*puVar11;
          lVar9 = *plVar10;
          *plVar10 = lVar9 + 1;
          if (lVar9 < 0) goto LAB_10057e2b8;
          plVar13 = (long *)*plVar13;
          lVar9 = *plVar13;
          *plVar13 = lVar9 + 1;
          if (lVar9 < 0) goto LAB_10057e2b8;
          param_2[0x95e] = plVar10;
          param_2[0x95f] = plVar13;
          param_2[0x960] = uVar19;
          *pbVar2 = 0;
          *(undefined1 *)((long)param_2 + 0x4b09) = uVar22;
          *(undefined1 *)((long)param_2 + 0x4b0a) = uVar17;
          *(undefined1 *)((long)param_2 + 0x4b0b) = uVar21;
          goto LAB_10057dc5c;
        }
LAB_10057db50:
        if (lVar12 == 0) break;
        lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x18);
        lVar12 = lVar12 + -1;
      } while( true );
    }
    plVar10 = (long *)*puVar11;
    lVar9 = *plVar10;
    *plVar10 = lVar9 + 1;
    if (lVar9 < 0) {
LAB_10057e2b8:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10057e2bc);
      (*pcVar6)();
    }
    plVar13 = (long *)*plVar13;
    lVar9 = *plVar13;
    *plVar13 = lVar9 + 1;
    if (lVar9 < 0) goto LAB_10057e2b8;
    param_2[0x563] = plVar10;
    param_2[0x564] = plVar13;
    *pbVar18 = 0;
    *(undefined1 *)((long)param_2 + 0x2b29) = uVar22;
    *(undefined1 *)((long)param_2 + 0x2b2a) = uVar17;
    *(undefined1 *)((long)param_2 + 0x2b2b) = uVar21;
LAB_10057ddd4:
    param_2[5] = plVar13;
    param_2[4] = plVar10;
    param_2[0x2c] = param_2 + 4;
    param_2[0x2d] = param_2 + 5;
    *(undefined1 *)(param_2 + 0x2f) = 0;
    *(undefined1 *)((long)param_2 + 0x179) = uVar22;
    *(undefined1 *)((long)param_2 + 0x17a) = uVar17;
    *(undefined1 *)((long)param_2 + 0x17b) = uVar21;
    *(undefined1 *)((long)param_2 + 0x17c) = 1;
LAB_10057df14:
    puVar11 = param_2 + 4;
    func_0x00010050c2a8(&lStack_228,param_2 + 6,param_3);
    if (lStack_228 == -0x7fffffffffffffdf) {
      *pbVar18 = 3;
      *param_1 = -0x7fffffffffffffdf;
      uVar21 = 4;
      goto LAB_10057e1fc;
    }
    uStack_258 = uStack_1b7;
    uStack_260 = uStack_1bf;
    uStack_250 = uStack_1af;
    uStack_239 = uStack_198;
    uStack_298 = uStack_1f7;
    uStack_2a0 = uStack_1ff;
    uStack_288 = uStack_1e7;
    uStack_290 = uStack_1ef;
    uStack_278 = uStack_1d7;
    uStack_280 = uStack_1df;
    uStack_268 = uStack_1c7;
    uStack_270 = uStack_1cf;
    uStack_2b8 = uStack_217;
    plStack_2c0 = (long *)uStack_21f;
    uStack_2a8 = uStack_207;
    uStack_2b0 = uStack_20f;
    func_0x000100cb7ac0(param_2 + 6);
    lVar9 = -0x7fffffffffffffe0;
    if (lStack_228 == -0x7fffffffffffffe0) {
      uVar21 = 0xff;
      lVar12 = *(long *)param_2[5];
      *(long *)param_2[5] = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
      }
      lVar12 = *(long *)*puVar11;
      *(long *)*puVar11 = lVar12 + -1;
      LORelease();
    }
    else {
      uStack_128 = uStack_258;
      uStack_130 = uStack_260;
      uStack_120 = uStack_250;
      uStack_109 = uStack_239;
      uStack_168 = uStack_298;
      uStack_170 = uStack_2a0;
      uStack_158 = uStack_288;
      uStack_160 = uStack_290;
      uStack_148 = uStack_278;
      uStack_150 = uStack_280;
      uStack_138 = uStack_268;
      uStack_140 = uStack_270;
      uStack_188 = uStack_2b8;
      uStack_190 = plStack_2c0;
      uStack_178 = uStack_2a8;
      uStack_180 = uStack_2b0;
      lVar12 = *(long *)param_2[5];
      *(long *)param_2[5] = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
      }
      lVar12 = *(long *)*puVar11;
      *(long *)*puVar11 = lVar12 + -1;
      LORelease();
      uVar21 = uStack_220;
    }
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(puVar11);
    }
    uStack_378 = uStack_128;
    uStack_380 = uStack_130;
    uStack_370 = uStack_120;
    uStack_359 = uStack_109;
    uStack_3b8 = uStack_168;
    uStack_3c0 = uStack_170;
    uStack_3a8 = uStack_158;
    uStack_3b0 = uStack_160;
    uStack_398 = uStack_148;
    uStack_3a0 = uStack_150;
    uStack_388 = uStack_138;
    uStack_390 = uStack_140;
    uStack_3d8 = uStack_188;
    uStack_3e0 = uStack_190;
    uStack_3c8 = uStack_178;
    uStack_3d0 = uStack_180;
    *pbVar18 = 1;
    func_0x000100ccde68(puVar11);
    if (lStack_228 == -0x7fffffffffffffe0) {
      uStack_220 = 1;
    }
    else {
      puVar11 = &uStack_3e0;
      lVar9 = lStack_228;
      uStack_220 = uVar21;
LAB_10057e190:
      uStack_2e8 = puVar11[0xd];
      uStack_2f0 = puVar11[0xc];
      uStack_2d8 = (undefined7)puVar11[0xf];
      uStack_2d1 = (undefined1)((ulong)puVar11[0xf] >> 0x38);
      uStack_2e0 = puVar11[0xe];
      lStack_2c9 = *(long *)((long)puVar11 + 0x87);
      uStack_2d1 = (undefined1)*(undefined8 *)((long)puVar11 + 0x7f);
      uStack_2d0 = (undefined7)((ulong)*(undefined8 *)((long)puVar11 + 0x7f) >> 8);
      uStack_328 = puVar11[5];
      uStack_330 = puVar11[4];
      uStack_318 = puVar11[7];
      uStack_320 = puVar11[6];
      uStack_308 = puVar11[9];
      uStack_310 = puVar11[8];
      uStack_2f8 = puVar11[0xb];
      uStack_300 = puVar11[10];
      uStack_348 = puVar11[1];
      uStack_350 = *puVar11;
      uStack_338 = puVar11[3];
      uStack_340 = puVar11[2];
    }
  }
  else {
    if (bVar5 == 3) {
      bVar5 = *pbVar2;
      if (bVar5 < 2) {
        if (bVar5 != 0) {
          FUN_107c05cc0(&UNK_10b216360);
          goto LAB_10057e2b8;
        }
        plVar10 = (long *)param_2[0x95e];
        plVar13 = (long *)param_2[0x95f];
        uVar19 = param_2[0x960];
        uVar21 = *(undefined1 *)((long)param_2 + 0x4b0b);
        uVar22 = *(undefined1 *)((long)param_2 + 0x4b09);
        uVar17 = *(undefined1 *)((long)param_2 + 0x4b0a);
LAB_10057dc5c:
        param_2[0x95c] = plVar10;
        param_2[0x95d] = plVar13;
        param_2[4] = uVar19;
        param_2[0x2c] = param_2 + 0x95c;
        param_2[0x2d] = param_2 + 0x95d;
        *(undefined1 *)(param_2 + 0x2f) = 0;
        *(undefined1 *)((long)param_2 + 0x179) = uVar22;
        *(undefined1 *)((long)param_2 + 0x17a) = uVar17;
        *(undefined1 *)((long)param_2 + 0x17b) = uVar21;
        *(undefined1 *)((long)param_2 + 0x17c) = 1;
      }
      else if (bVar5 != 3) {
        FUN_107c05cc4(&UNK_10b216360);
        goto LAB_10057e2b8;
      }
      puVar11 = param_2 + 4;
      func_0x000100515d20(&lStack_228,puVar11,param_3);
      if (lStack_228 == -0x7fffffffffffffdf) {
        *pbVar2 = 3;
      }
      else {
        func_0x000100cc3f1c(puVar11);
        lVar9 = *(long *)param_2[0x95d];
        *(long *)param_2[0x95d] = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(param_2 + 0x95d);
        }
        lVar9 = *(long *)param_2[0x95c];
        *(long *)param_2[0x95c] = lVar9 + -1;
        LORelease();
        if (lVar9 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(param_2 + 0x95c);
        }
        *pbVar2 = 1;
        if (lStack_228 != -0x7fffffffffffffdf) {
          uStack_408 = uStack_1b7;
          uStack_410 = uStack_1bf;
          uStack_400 = uStack_1af;
          uStack_3e9 = uStack_198;
          uStack_448 = uStack_1f7;
          uStack_450 = uStack_1ff;
          uStack_438 = uStack_1e7;
          uStack_440 = uStack_1ef;
          uStack_428 = uStack_1d7;
          uStack_430 = uStack_1df;
          uStack_418 = uStack_1c7;
          uStack_420 = uStack_1cf;
          uStack_468 = uStack_217;
          uStack_470 = uStack_21f;
          uStack_458 = uStack_207;
          uStack_460 = uStack_20f;
          func_0x000100cd84bc(puVar11);
          lVar9 = -0x7fffffffffffffe0;
          if (lStack_228 == -0x7fffffffffffffe0) {
            uStack_220 = 0;
            goto LAB_10057e1b8;
          }
          puVar11 = &uStack_470;
          lVar9 = lStack_228;
          goto LAB_10057e190;
        }
      }
      *param_1 = -0x7fffffffffffffdf;
      uVar21 = 3;
      goto LAB_10057e1fc;
    }
    if (bVar5 == 4) {
      bVar5 = *pbVar18;
      if (bVar5 < 2) {
        if (bVar5 != 0) {
          FUN_107c05cc0(&UNK_10b215f38);
          goto LAB_10057e2b8;
        }
        plVar10 = (long *)param_2[0x563];
        plVar13 = (long *)param_2[0x564];
        uVar21 = *(undefined1 *)((long)param_2 + 0x2b2b);
        uVar22 = *(undefined1 *)((long)param_2 + 0x2b29);
        uVar17 = *(undefined1 *)((long)param_2 + 0x2b2a);
        goto LAB_10057ddd4;
      }
      if (bVar5 != 3) {
        FUN_107c05cc4(&UNK_10b215f38);
        goto LAB_10057e2b8;
      }
      goto LAB_10057df14;
    }
    bVar5 = *(byte *)((long)param_2 + 0x4dab);
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        FUN_107c05cc0(&UNK_10b217910);
        goto LAB_10057e2b8;
      }
      plVar10 = (long *)param_2[0x9b3];
      plVar13 = (long *)param_2[0x9b4];
      uVar21 = *(undefined1 *)((long)param_2 + 0x4dae);
      uVar22 = *(undefined1 *)((long)param_2 + 0x4dac);
      uVar17 = *(undefined1 *)((long)param_2 + 0x4dad);
      goto LAB_10057dccc;
    }
    if (bVar5 != 3) {
      FUN_107c05cc4(&UNK_10b217910);
      goto LAB_10057e2b8;
    }
LAB_10057dfdc:
    puStack_488 = (undefined1 *)((long)param_2 + 0x4dab);
    puVar11 = param_2 + 4;
    func_0x000100572924(&lStack_228,puVar11,param_3);
    if (lStack_228 == -0x7fffffffffffffdf) {
      *puStack_488 = 3;
      *param_1 = -0x7fffffffffffffdf;
      uVar21 = 5;
      goto LAB_10057e1fc;
    }
    uStack_128 = uStack_1b7;
    uStack_130 = uStack_1bf;
    uStack_120 = uStack_1af;
    uStack_109 = uStack_198;
    uStack_168 = uStack_1f7;
    uStack_170 = uStack_1ff;
    uStack_158 = uStack_1e7;
    uStack_160 = uStack_1ef;
    uStack_148 = uStack_1d7;
    uStack_150 = uStack_1df;
    uStack_138 = uStack_1c7;
    uStack_140 = uStack_1cf;
    uStack_188 = uStack_217;
    uStack_190 = uStack_21f;
    uStack_178 = uStack_207;
    uStack_180 = uStack_20f;
    func_0x000100e74494(puVar11);
    lVar9 = -0x7fffffffffffffe0;
    if (lStack_228 != -0x7fffffffffffffe0) {
      uStack_98 = uStack_128;
      uStack_a0 = uStack_130;
      uStack_90 = uStack_120;
      uStack_79 = uStack_109;
      uStack_d8 = uStack_168;
      uStack_e0 = uStack_170;
      uStack_c8 = uStack_158;
      uStack_d0 = uStack_160;
      uStack_b8 = uStack_148;
      uStack_c0 = uStack_150;
      uStack_a8 = uStack_138;
      uStack_b0 = uStack_140;
      uStack_f8 = uStack_188;
      uStack_100 = uStack_190;
      uStack_e8 = uStack_178;
      uStack_f0 = uStack_180;
    }
    *(undefined4 *)(param_2 + 0x9b5) = 0x1000000;
    func_0x000100e8b4b8(puVar11);
    if (lStack_228 != -0x7fffffffffffffe0) {
      puVar11 = &uStack_100;
      lVar9 = lStack_228;
      goto LAB_10057e190;
    }
    uStack_220 = 1;
  }
LAB_10057e1b8:
  *(undefined8 *)((long)param_1 + 0x61) = uStack_2f8;
  *(undefined8 *)((long)param_1 + 0x59) = uStack_300;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_2e8;
  *(undefined8 *)((long)param_1 + 0x69) = uStack_2f0;
  *(ulong *)((long)param_1 + 0x81) = CONCAT17(uStack_2d1,uStack_2d8);
  *(undefined8 *)((long)param_1 + 0x79) = uStack_2e0;
  param_1[0x12] = lStack_2c9;
  param_1[0x11] = CONCAT71(uStack_2d0,uStack_2d1);
  *(undefined8 *)((long)param_1 + 0x21) = uStack_338;
  *(undefined8 *)((long)param_1 + 0x19) = uStack_340;
  *(undefined8 *)((long)param_1 + 0x31) = uStack_328;
  *(undefined8 *)((long)param_1 + 0x29) = uStack_330;
  *(undefined8 *)((long)param_1 + 0x41) = uStack_318;
  *(undefined8 *)((long)param_1 + 0x39) = uStack_320;
  *(undefined8 *)((long)param_1 + 0x51) = uStack_308;
  *(undefined8 *)((long)param_1 + 0x49) = uStack_310;
  *param_1 = lVar9;
  *(undefined1 *)(param_1 + 1) = uStack_220;
  uVar21 = 1;
  *(undefined8 *)((long)param_1 + 0x11) = uStack_348;
  *(undefined8 *)((long)param_1 + 9) = uStack_350;
LAB_10057e1fc:
  *(undefined1 *)(param_2 + 3) = uVar21;
  return;
}

