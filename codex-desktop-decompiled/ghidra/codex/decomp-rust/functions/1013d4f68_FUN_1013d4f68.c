
/* WARNING: Removing unreachable block (ram,0x0001013d54a8) */

void FUN_1013d4f68(undefined8 *param_1,ulong *param_2)

{
  int *piVar1;
  ulong uVar2;
  code *pcVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  byte bVar14;
  undefined8 extraout_d0;
  int *piVar15;
  undefined1 auVar16 [16];
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  int *piStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong *puStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong *puStack_280;
  byte bStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined7 uStack_237;
  ulong uStack_230;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 auStack_200 [3];
  ulong *puStack_1e8;
  int *piStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong *puStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  ulong uStack_150;
  ulong *puStack_148;
  int *piStack_140;
  ulong uStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  ulong uStack_120;
  ulong *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong *puStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  ulong uStack_80;
  ulong uStack_78;
  
  piVar1 = (int *)param_2[10];
  uVar2 = param_2[0xb];
  uStack_2e8 = param_2[9];
  uStack_2f0 = param_2[8];
  uVar7 = param_2[0xb];
  piVar15 = (int *)param_2[10];
  uStack_2d0 = param_2[0xc];
  uStack_328 = param_2[1];
  uStack_330 = *param_2;
  uStack_318 = param_2[3];
  uStack_320 = param_2[2];
  uStack_308 = param_2[5];
  uStack_310 = param_2[4];
  uStack_2f8 = param_2[7];
  uStack_300 = param_2[6];
  piStack_2e0 = piVar15;
  uStack_2d8 = uVar7;
  if ((((uStack_2d0 & 1) != 0) && (-1 < (long)uStack_330)) &&
     (func_0x000106120e7c(&puStack_1e8,&uStack_330,&UNK_10b2203b8,1), puStack_1e8 != (ulong *)0x2))
  {
    uStack_2b8 = uStack_1c8;
    uStack_2c0 = uStack_1d0;
    uStack_2a8 = uStack_1b8;
    puStack_2b0 = puStack_1c0;
    uStack_298 = uStack_1a8;
    uStack_2a0 = uStack_1b0;
    uStack_288 = uStack_198;
    uStack_290 = uStack_1a0;
    uVar10 = uStack_1d8;
    piVar4 = piStack_1e0;
    if (((ulong)puStack_1e8 & 1) == 0) {
      uVar10 = uVar7;
      piVar4 = piVar15;
    }
    FUN_100dfe50c(param_2);
    goto LAB_1013d57e0;
  }
  uVar10 = *param_2;
  uVar7 = uVar10 ^ 0x8000000000000000;
  if (-1 < (long)uVar10) {
    uVar7 = 6;
  }
  if ((long)uVar7 < 3) {
    if (uVar7 == 0) {
      if (param_2[1] == 0x8000000000000000) {
        piStack_1e0 = (int *)param_2[2];
        uStack_1d8 = param_2[3];
        puStack_1e8 = (ulong *)CONCAT71(puStack_1e8._1_7_,5);
        FUN_1087e3db0(&puStack_280,&puStack_1e8,&puStack_130,&UNK_10b21b110);
        puVar11 = puStack_280;
      }
      else {
        func_0x00010881671c(&puStack_280);
        puVar11 = puStack_280;
      }
      goto joined_r0x0001013d5238;
    }
    if (uVar7 == 1) {
      uStack_218 = param_2[2];
      uStack_220 = param_2[1];
      uStack_208 = param_2[4];
      uStack_210 = param_2[3];
      auVar16 = func_0x00010612451c(&uStack_220);
      if ((auVar16._0_8_ & 1) == 0) {
        auVar16 = func_0x0001061247b8(&uStack_220);
        if ((auVar16._0_8_ & 1) == 0) {
          func_0x0001061249a4(&puStack_130,&uStack_220);
          if (((uint)puStack_130 & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (&puStack_d0,&uStack_220);
            if (((uint)puStack_d0 & 1) == 0) {
              auStack_200[0] = 0;
              FUN_100f1395c(&puStack_1e8,auStack_200);
              uStack_258 = SUB81(puStack_1c0,0);
              uStack_257 = (undefined7)((ulong)puStack_1c0 >> 8);
              uStack_260 = (undefined1)uStack_1c8;
              uStack_25f = (undefined7)(uStack_1c8 >> 8);
              uStack_248 = (undefined1)uStack_1b0;
              uStack_247 = (undefined7)(uStack_1b0 >> 8);
              uStack_250 = (undefined1)uStack_1b8;
              uStack_24f = (undefined7)(uStack_1b8 >> 8);
              uStack_238 = (undefined1)uStack_1a0;
              uStack_237 = (undefined7)(uStack_1a0 >> 8);
              uStack_240 = (undefined1)uStack_1a8;
              uStack_23f = (undefined7)(uStack_1a8 >> 8);
              uStack_230 = uStack_198;
              bStack_278 = (byte)piStack_1e0;
              uStack_277 = (undefined7)((ulong)piStack_1e0 >> 8);
              puStack_280 = puStack_1e8;
              uStack_268 = (undefined1)uStack_1d0;
              uStack_267 = (undefined7)(uStack_1d0 >> 8);
              uStack_270 = (undefined1)uStack_1d8;
              uStack_26f = (undefined7)(uStack_1d8 >> 8);
              if ((uStack_220 & 0x7fffffffffffffff) != 0) {
                _free(uStack_218);
                puStack_1e8 = puStack_280;
              }
              goto LAB_1013d57b4;
            }
            func_0x00010880730c(&puStack_280,CONCAT71(uStack_bf,uStack_c0),
                                CONCAT71(uStack_b7,uStack_b8));
          }
          else {
            func_0x0001087fa8f0(&puStack_280,uStack_120,puStack_118);
          }
        }
        else {
          puStack_1e8 = (ulong *)CONCAT71(puStack_1e8._1_7_,1);
          piStack_1e0 = auVar16._8_8_;
          FUN_1087e3db0(&puStack_280,&puStack_1e8,&puStack_130,&UNK_10b21b110);
        }
      }
      else {
        puStack_1e8 = (ulong *)CONCAT71(puStack_1e8._1_7_,2);
        piStack_1e0 = auVar16._8_8_;
        FUN_1087e3db0(&puStack_280,&puStack_1e8,&puStack_130,&UNK_10b21b110);
      }
      puVar11 = puStack_280;
      if ((uStack_220 & 0x7fffffffffffffff) != 0) {
        _free(uStack_218);
        puVar11 = puStack_280;
      }
      goto joined_r0x0001013d5238;
    }
    puStack_d0 = (ulong *)param_2[1];
    bStack_c8 = (byte)param_2[2];
    uStack_c7 = (undefined7)(param_2[2] >> 8);
    uStack_c0 = (undefined1)param_2[3];
    uStack_bf = (undefined7)(param_2[3] >> 8);
    uVar7 = func_0x0001061240c0(&puStack_d0);
    if ((uVar7 & 1) != 0) {
      puStack_1e8 = (ulong *)CONCAT71(puStack_1e8._1_7_,3);
      piStack_1e0 = (int *)extraout_d0;
      FUN_1087e3db0(&puStack_280,&puStack_1e8,&puStack_130,&UNK_10b21b110);
      puVar11 = puStack_280;
      if (((ulong)puStack_d0 & 0x7fffffffffffffff) != 0) {
        _free(CONCAT71(uStack_c7,bStack_c8));
        puVar11 = puStack_280;
      }
      goto joined_r0x0001013d5238;
    }
    puVar5 = (undefined8 *)_malloc(0x20);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x20);
LAB_1013d5894:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1013d5898);
      (*pcVar3)();
    }
    puVar5[1] = 0x6e20746e696f702d;
    *puVar5 = 0x676e6974616f6c66;
    puVar5[3] = 0x6465776f6c667265;
    puVar5[2] = 0x766f207265626d75;
    uStack_268 = 0x20;
    uStack_267 = 0;
    uStack_260 = SUB81(puVar5,0);
    uStack_25f = (undefined7)((ulong)puVar5 >> 8);
    uStack_250 = 0;
    uStack_24f = 0;
    uStack_258 = 0x20;
    uStack_257 = 0;
    uStack_240 = 0;
    uStack_23f = 0;
    uStack_238 = 0;
    uStack_237 = 0;
    uStack_248 = 8;
    uStack_247 = 0;
    if (((ulong)puStack_d0 & 0x7fffffffffffffff) != 0) {
      _free(CONCAT71(uStack_c7,bStack_c8));
    }
    puStack_1e8 = (ulong *)0x0;
  }
  else {
    if ((long)uVar7 < 5) {
      if (uVar7 == 3) {
        puStack_1e8 = (ulong *)((ulong)CONCAT61(puStack_1e8._2_6_,(char)param_2[1]) << 8);
        FUN_1087e3db0(&puStack_280,&puStack_1e8,&puStack_130,&UNK_10b21b110);
        puVar11 = puStack_280;
      }
      else {
        puStack_d0 = (ulong *)param_2[1];
        bStack_c8 = (byte)param_2[2];
        uStack_c7 = (undefined7)(param_2[2] >> 8);
        uStack_c0 = (undefined1)param_2[3];
        uStack_bf = (undefined7)(param_2[3] >> 8);
        do {
          if ((uint)puStack_d0 == 2) {
            bStack_278 = 1;
            goto LAB_1013d5700;
          }
          FUN_101509040(&puStack_1e8,&puStack_d0);
        } while (puStack_1e8 == (ulong *)0x2);
        uStack_258 = SUB81(puStack_1c0,0);
        uStack_257 = (undefined7)((ulong)puStack_1c0 >> 8);
        uStack_260 = (undefined1)uStack_1c8;
        uStack_25f = (undefined7)(uStack_1c8 >> 8);
        uStack_248 = (undefined1)uStack_1b0;
        uStack_247 = (undefined7)(uStack_1b0 >> 8);
        uStack_250 = (undefined1)uStack_1b8;
        uStack_24f = (undefined7)(uStack_1b8 >> 8);
        uStack_238 = (undefined1)uStack_1a0;
        uStack_237 = (undefined7)(uStack_1a0 >> 8);
        uStack_240 = (undefined1)uStack_1a8;
        uStack_23f = (undefined7)(uStack_1a8 >> 8);
        bStack_278 = (byte)piStack_1e0;
        uStack_277 = (undefined7)((ulong)piStack_1e0 >> 8);
        uStack_268 = (undefined1)uStack_1d0;
        uStack_267 = (undefined7)(uStack_1d0 >> 8);
        uStack_270 = (undefined1)uStack_1d8;
        uStack_26f = (undefined7)(uStack_1d8 >> 8);
        uStack_230 = uStack_198;
        puVar11 = puStack_1e8;
      }
    }
    else if (uVar7 == 5) {
      uVar7 = param_2[1];
      puVar12 = (ulong *)param_2[2];
      puVar11 = puVar12 + param_2[3] * 0xc;
      puStack_130 = puVar12;
      uStack_120 = uVar7;
      puStack_118 = puVar11;
      if (param_2[3] == 0) {
        bStack_c8 = 2;
        puVar6 = puVar12;
        puStack_128 = puVar12;
LAB_1013d55f4:
        bStack_278 = bStack_c8 == 2 | bStack_c8 & 1;
        puStack_280 = (ulong *)0x2;
      }
      else {
        puVar6 = puVar12 + 0xc;
        puStack_128 = puVar6;
        if ((ulong *)*puVar12 == (ulong *)0x8000000000000006) {
          bStack_c8 = 2;
          goto LAB_1013d55f4;
        }
        uStack_1c8 = puVar12[4];
        uStack_1d0 = puVar12[3];
        uStack_1b8 = puVar12[6];
        puStack_1c0 = (ulong *)puVar12[5];
        uStack_1a8 = puVar12[8];
        uStack_1b0 = puVar12[7];
        uStack_1a0 = puVar12[9];
        uStack_1d8 = puVar12[2];
        piStack_1e0 = (int *)puVar12[1];
        uStack_190 = puVar12[0xb];
        uStack_198 = puVar12[10];
        uStack_188 = uStack_188 & 0xffffffffffffff00;
        puStack_1e8 = (ulong *)*puVar12;
        FUN_10061703c(&puStack_d0,&puStack_1e8);
        puStack_280 = puStack_d0;
        if (puStack_d0 == (ulong *)0x2) goto LAB_1013d55f4;
        uStack_25f = uStack_af;
        uStack_258 = uStack_a8;
        uStack_267 = uStack_b7;
        uStack_260 = uStack_b0;
        uStack_24f = uStack_9f;
        uStack_248 = uStack_98;
        uStack_257 = uStack_a7;
        uStack_250 = uStack_a0;
        uStack_23f = uStack_8f;
        uStack_247 = uStack_97;
        uStack_240 = uStack_90;
        uStack_230 = uStack_80;
        uStack_238 = uStack_88;
        uStack_237 = uStack_87;
        uStack_26f = uStack_bf;
        uStack_268 = uStack_b8;
        uStack_277 = uStack_c7;
        uStack_270 = uStack_c0;
        bStack_278 = bStack_c8;
      }
      lVar13 = ((ulong)((long)puVar11 - (long)puVar6) >> 5) * -0x5555555555555555 + 1;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        FUN_100dfe50c(puVar6);
        puVar6 = puVar6 + 0xc;
      }
      puVar11 = puStack_280;
      if (uVar7 != 0) {
        _free(puVar12);
        puVar11 = puStack_280;
      }
    }
    else {
      puVar11 = (ulong *)param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[4];
      if ((uVar8 != 0) && (uVar8 * 9 != -0x11)) {
        _free(param_2[3] + uVar8 * -8 + -8);
      }
      puStack_148 = puVar11 + uVar7 * 0x12;
      puStack_1e8 = (ulong *)0x8000000000000001;
      puStack_160 = puVar11;
      uStack_150 = uVar10;
      piStack_140 = piVar1;
      uStack_138 = uVar2;
      if (uVar7 == 0) {
        bVar14 = 2;
      }
      else {
        bVar14 = 2;
        puStack_158 = puVar11;
        do {
          puVar11 = puStack_158 + 0x12;
          puVar12 = (ulong *)*puStack_158;
          if (puVar12 == (ulong *)0x8000000000000001) break;
          piVar15 = (int *)puStack_158[1];
          uVar10 = puStack_158[2];
          uVar7 = puStack_158[3];
          uVar8 = puStack_158[4];
          uStack_108 = puStack_158[10];
          uStack_110 = puStack_158[9];
          uStack_f8 = puStack_158[0xc];
          uStack_100 = puStack_158[0xb];
          uStack_e8 = puStack_158[0xe];
          uStack_f0 = puStack_158[0xd];
          uStack_d8 = puStack_158[0x10];
          uStack_e0 = puStack_158[0xf];
          puStack_128 = (ulong *)puStack_158[6];
          puStack_130 = (ulong *)puStack_158[5];
          puStack_118 = (ulong *)puStack_158[8];
          uStack_120 = puStack_158[7];
          uStack_a8 = (undefined1)uStack_108;
          uStack_a7 = (undefined7)(uStack_108 >> 8);
          uStack_b0 = (undefined1)uStack_110;
          uStack_af = (undefined7)(uStack_110 >> 8);
          uStack_98 = (undefined1)uStack_f8;
          uStack_97 = (undefined7)(uStack_f8 >> 8);
          uStack_a0 = (undefined1)uStack_100;
          uStack_9f = (undefined7)(uStack_100 >> 8);
          uStack_88 = (undefined1)uStack_e8;
          uStack_87 = (undefined7)(uStack_e8 >> 8);
          uStack_90 = (undefined1)uStack_f0;
          uStack_8f = (undefined7)(uStack_f0 >> 8);
          bStack_c8 = (byte)puStack_128;
          uStack_c7 = (undefined7)((ulong)puStack_128 >> 8);
          uStack_b8 = SUB81(puStack_118,0);
          uStack_b7 = (undefined7)((ulong)puStack_118 >> 8);
          uStack_c0 = (undefined1)uStack_120;
          uStack_bf = (undefined7)(uStack_120 >> 8);
          puStack_158 = puVar11;
          puStack_d0 = puStack_130;
          uStack_80 = uStack_e0;
          uStack_78 = uStack_d8;
          if (puVar12 == (ulong *)0x8000000000000000) {
            if (uVar10 == 7) {
              bVar9 = *piVar15 != 0x62616e65 || *(int *)((long)piVar15 + 3) != 0x64656c62;
            }
            else {
LAB_1013d53d0:
              bVar9 = true;
            }
          }
          else {
            if (uVar10 == 0) goto LAB_1013d53d0;
            piVar4 = (int *)_malloc(uVar10);
            if (piVar4 == (int *)0x0) {
              func_0x0001087c9084(1,uVar10);
              goto LAB_1013d5894;
            }
            _memcpy(piVar4,piVar15,uVar10);
            bVar9 = true;
            if (uVar10 != 0x8000000000000000) {
              if (uVar10 == 7) {
                bVar9 = *piVar4 != 0x62616e65 || *(int *)((long)piVar4 + 3) != 0x64656c62;
              }
              _free(piVar4);
            }
          }
          if (puStack_1e8 != (ulong *)0x8000000000000001) {
            if (((ulong)puStack_1e8 & 0x7fffffffffffffff) != 0) {
              _free(piStack_1e0);
            }
            FUN_100dfe50c(&puStack_1c0);
          }
          uStack_198 = CONCAT71(uStack_a7,uStack_a8);
          uStack_1a0 = CONCAT71(uStack_af,uStack_b0);
          uStack_188 = CONCAT71(uStack_97,uStack_98);
          uStack_190 = CONCAT71(uStack_9f,uStack_a0);
          uStack_178 = CONCAT71(uStack_87,uStack_88);
          uStack_180 = CONCAT71(uStack_8f,uStack_90);
          uStack_168 = uStack_78;
          uStack_170 = uStack_80;
          uStack_1b8 = CONCAT71(uStack_c7,bStack_c8);
          uStack_1a8 = CONCAT71(uStack_b7,uStack_b8);
          uStack_1b0 = CONCAT71(uStack_bf,uStack_c0);
          puStack_1c0 = puStack_d0;
          puStack_1e8 = puVar12;
          piStack_1e0 = piVar15;
          uStack_1d8 = uVar10;
          uStack_1d0 = uVar7;
          uStack_1c8 = uVar8;
          if (bVar9) {
            func_0x0001014e08dc(&puStack_d0,&puStack_1e8);
            if (puStack_d0 != (ulong *)0x2) {
LAB_1013d5854:
              uStack_258 = uStack_a8;
              uStack_257 = uStack_a7;
              uStack_260 = uStack_b0;
              uStack_25f = uStack_af;
              uStack_248 = uStack_98;
              uStack_247 = uStack_97;
              uStack_250 = uStack_a0;
              uStack_24f = uStack_9f;
              uStack_238 = uStack_88;
              uStack_237 = uStack_87;
              uStack_240 = uStack_90;
              uStack_23f = uStack_8f;
              uStack_230 = uStack_80;
              puStack_280 = puStack_d0;
              bStack_278 = bStack_c8;
              uStack_277 = uStack_c7;
              uStack_268 = uStack_b8;
              uStack_267 = uStack_b7;
              uStack_270 = uStack_c0;
              uStack_26f = uStack_bf;
              goto LAB_1013d557c;
            }
          }
          else {
            if (bVar14 != 2) {
              FUN_1087e4364(&puStack_d0,&UNK_108ca2209,7);
              goto LAB_1013d5854;
            }
            FUN_1014e04f4(&puStack_d0,&puStack_1e8);
            bVar14 = bStack_c8;
            if (puStack_d0 != (ulong *)0x2) {
              uStack_25f = uStack_af;
              uStack_258 = uStack_a8;
              uStack_267 = uStack_b7;
              uStack_260 = uStack_b0;
              uStack_24f = uStack_9f;
              uStack_248 = uStack_98;
              uStack_257 = uStack_a7;
              uStack_250 = uStack_a0;
              uStack_23f = uStack_8f;
              uStack_247 = uStack_97;
              uStack_240 = uStack_90;
              uStack_230 = uStack_80;
              uStack_238 = uStack_88;
              uStack_237 = uStack_87;
              uStack_26f = uStack_bf;
              uStack_268 = uStack_b8;
              uStack_277 = uStack_c7;
              uStack_270 = uStack_c0;
              puStack_280 = puStack_d0;
              bStack_278 = bStack_c8;
              goto LAB_1013d557c;
            }
          }
          puVar11 = puStack_158;
        } while (puStack_158 != puStack_148);
      }
      puStack_158 = puVar11;
      bStack_278 = bVar14 == 2 | bVar14 & 1;
      puStack_280 = (ulong *)0x2;
LAB_1013d557c:
      FUN_100e1fd94(&puStack_1e8);
      puVar11 = puStack_280;
    }
joined_r0x0001013d5238:
    puStack_1e8 = puVar11;
    if (puStack_1e8 == (ulong *)0x2) {
LAB_1013d5700:
      *(byte *)(param_1 + 1) = bStack_278;
      *param_1 = 2;
      return;
    }
  }
LAB_1013d57b4:
  uStack_2b8 = CONCAT71(uStack_25f,uStack_260);
  uStack_2c0 = CONCAT71(uStack_267,uStack_268);
  uStack_2a8 = CONCAT71(uStack_24f,uStack_250);
  puStack_2b0 = (ulong *)CONCAT71(uStack_257,uStack_258);
  uStack_298 = CONCAT71(uStack_23f,uStack_240);
  uStack_2a0 = CONCAT71(uStack_247,uStack_248);
  uStack_290 = CONCAT71(uStack_237,uStack_238);
  uStack_288 = uStack_230;
  uVar10 = CONCAT71(uStack_26f,uStack_270);
  piVar4 = (int *)CONCAT71(uStack_277,bStack_278);
  if (((ulong)puStack_1e8 & 1) == 0) {
    uVar10 = uVar2;
    piVar4 = piVar1;
  }
LAB_1013d57e0:
  param_1[4] = uStack_2b8;
  param_1[3] = uStack_2c0;
  param_1[6] = uStack_2a8;
  param_1[5] = puStack_2b0;
  param_1[8] = uStack_298;
  param_1[7] = uStack_2a0;
  *(char *)((long)param_1 + 0xf) = (char)((ulong)piVar4 >> 0x38);
  *(short *)((long)param_1 + 0xd) = (short)((ulong)piVar4 >> 0x28);
  *(int *)((long)param_1 + 9) = (int)((ulong)piVar4 >> 8);
  param_1[10] = uStack_288;
  param_1[9] = uStack_290;
  *(char *)(param_1 + 1) = (char)piVar4;
  *param_1 = 1;
  param_1[2] = uVar10;
  return;
}

