
/* WARNING: Possible PIC construction at 0x00010368e2f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010368e2fc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10368d45c(long *param_1,ulong *param_2)

{
  int *piVar1;
  undefined8 ******ppppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined4 uVar4;
  undefined5 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  undefined1 uVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  long *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar20;
  long lVar21;
  undefined8 unaff_x21;
  ulong *puVar22;
  ulong unaff_x22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  undefined1 *unaff_x29;
  undefined1 *puVar29;
  undefined8 unaff_x30;
  long *plVar30;
  undefined1 auStack_3f0 [88];
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong *puStack_370;
  ulong *puStack_368;
  ulong *puStack_360;
  ulong *puStack_358;
  ulong uStack_350;
  ulong *puStack_348;
  ulong uStack_340;
  ulong *puStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong *puStack_320;
  ulong uStack_318;
  ulong uStack_310;
  long *plStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined8 *******pppppppuStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *******pppppppuStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_260;
  long *plStack_258;
  ulong uStack_250;
  long *plStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 *******pppppppuStack_220;
  byte bStack_218;
  uint7 uStack_217;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 uStack_208;
  undefined7 uStack_207;
  byte bStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  undefined1 uStack_159;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined1 uStack_149;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  undefined1 uStack_139;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *******pppppppuStack_118;
  byte bStack_110;
  uint7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  byte bStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  puVar29 = &stack0xfffffffffffffff0;
  puVar10 = auStack_3f0 + 0x50;
  uVar23 = *param_2;
  uVar17 = uVar23 ^ 0x8000000000000000;
  if (-1 < (long)uVar23) {
    uVar17 = 6;
  }
  if (3 < (long)uVar17) {
    if (uVar17 == 5) {
      uStack_378 = param_2[1];
      puVar13 = (ulong *)param_2[2];
      uStack_380 = param_2[3];
      uVar23 = uStack_380 * 0x50;
      puStack_368 = puVar13 + uStack_380 * 10;
      uVar17 = uStack_380;
      if (0x7fff < uStack_380) {
        uVar17 = 0x8000;
      }
      puStack_370 = puVar13;
      puStack_360 = puVar13;
      puStack_358 = puVar13;
      uStack_350 = uStack_378;
      puStack_348 = puStack_368;
      if (uStack_380 == 0) {
        uVar17 = 0;
        uStack_328 = 0;
        puStack_320 = (ulong *)0x8;
        puVar12 = puVar13;
      }
      else {
        puVar12 = (ulong *)_malloc(uVar17 << 5);
        if (puVar12 == (ulong *)0x0) {
          func_0x0001087c9084(8,uVar17 << 5);
          goto LAB_10368e408;
        }
        uStack_318 = 0;
        puVar22 = puVar13 + 10;
        uVar24 = *puVar13;
        uStack_328 = uVar17;
        puStack_320 = puVar12;
        if (uVar24 == 0x8000000000000006) {
          uVar17 = 0;
          puVar12 = puVar22;
          puStack_358 = puVar22;
        }
        else {
          do {
            uVar23 = uVar23 - 0x50;
            uVar18 = puVar13[2];
            plVar30 = (long *)puVar13[1];
            uVar20 = puVar13[6];
            uStack_2e8 = puVar13[5];
            uStack_2d0 = puVar13[8];
            uStack_2d8 = puVar13[7];
            uStack_2c8 = puVar13[9];
            uStack_2f0 = puVar13[4];
            uStack_2f8 = puVar13[3];
            uVar17 = uVar24 ^ 0x8000000000000000;
            if (-1 < (long)uVar24) {
              uVar17 = 6;
            }
            plStack_308._0_1_ = (byte)plVar30;
            puStack_358 = puVar22;
            uStack_310 = uVar24;
            plStack_308 = plVar30;
            uStack_300 = uVar18;
            uStack_2e0 = uVar20;
            if ((long)uVar17 < 3) {
              if (uVar17 == 0) {
                func_0x00010892b768(&pppppppuStack_2c0,&plStack_308);
              }
              else {
                uStack_217 = (uint7)((ulong)plVar30 >> 8);
                bStack_218 = (byte)plStack_308;
                if (uVar17 == 1) {
                  pppppppuStack_220 = (undefined8 *******)CONCAT71(pppppppuStack_220._1_7_,2);
                  func_0x000108921f70(&pppppppuStack_2c0,&pppppppuStack_220,&uStack_180,
                                      &UNK_10b29cd50);
                }
                else {
                  pppppppuStack_220 = (undefined8 *******)CONCAT71(pppppppuStack_220._1_7_,3);
                  func_0x000108921f70(&pppppppuStack_2c0,&pppppppuStack_220,&uStack_180,
                                      &UNK_10b29cd50);
                }
              }
            }
            else if ((long)uVar17 < 5) {
              if (uVar17 == 3) {
                pppppppuStack_220 =
                     (undefined8 *******)
                     ((ulong)CONCAT61(pppppppuStack_220._2_6_,(byte)plStack_308) << 8);
                func_0x000108921f70(&pppppppuStack_2c0,&pppppppuStack_220,&uStack_180,&UNK_10b29cd50
                                   );
              }
              else {
                plStack_258 = (long *)puVar13[2];
                uStack_260 = (long *)puVar13[1];
                uStack_250 = puVar13[3];
                pppppppuStack_118 = (undefined8 *******)0x0;
                bStack_110 = 1;
                uStack_10f = 0;
                uStack_108 = 0;
                uStack_107 = 0;
                uStack_210 = 0x60000020;
                uStack_20c = 0;
                pppppppuStack_220 = &pppppppuStack_118;
                bStack_218 = 0x48;
                uStack_217 = 0x10b29a4;
                iVar11 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                                   (&uStack_260,&pppppppuStack_220);
                if (iVar11 != 0) {
                  func_0x000108a07a3c(&UNK_108d8639e,0x37,&uStack_180,&UNK_10b2c0eb8,&UNK_10b2c0b18)
                  ;
                  goto LAB_10368e408;
                }
                uStack_168 = (undefined7)CONCAT71(uStack_10f,bStack_110);
                uStack_161 = (undefined1)(uStack_10f >> 0x30);
                uStack_170 = (int)pppppppuStack_118;
                uStack_16c = (int)((ulong)pppppppuStack_118 >> 0x20);
                uStack_160 = (undefined7)CONCAT71(uStack_107,uStack_108);
                uStack_159 = (undefined1)((uint7)uStack_107 >> 0x30);
                func_0x00010892b768(&pppppppuStack_2c0,&uStack_170);
              }
            }
            else if (uVar17 == 5) {
              uStack_388 = puVar13[1];
              plVar25 = (long *)puVar13[2];
              uVar17 = puVar13[3];
              plVar26 = plVar25 + uVar17 * 10;
              plVar30 = plVar26;
              plVar28 = plVar25;
              uStack_260 = plVar25;
              uStack_250 = uStack_388;
              plStack_248 = plVar26;
              if (uVar17 == 0) {
LAB_10368db3c:
                plStack_258 = plVar28;
                func_0x0001089223ec(&pppppppuStack_118,0,&UNK_10b2bde68,&UNK_10b29b520);
LAB_10368db58:
                uVar24 = CONCAT71(uStack_10f,bStack_110);
                pppppppuVar15 = pppppppuStack_118;
                if (pppppppuStack_118 != (undefined8 *******)0x2) goto LAB_10368ddf8;
                uVar18 = CONCAT71(uStack_107,uStack_108);
                uStack_238 = CONCAT71(uStack_f7,bStack_f8);
                uStack_240 = CONCAT71(uStack_ff,uStack_100);
joined_r0x00010368db7c:
                if (plVar26 == plVar30) {
                  pppppppuStack_2c0 = (undefined8 *******)0x2;
                  uStack_2b8 = uVar24;
                  uStack_2b0 = uVar18;
                  uStack_2a8 = uStack_240;
                  uStack_2a0 = uStack_238;
                }
                else {
                  func_0x0001089223ec(&pppppppuStack_220,uVar17,&UNK_10b2b6868,&UNK_10b29b520);
                  pppppppuStack_298 = (undefined8 *******)CONCAT71(uStack_1f7,uStack_1f8);
                  uStack_2a0 = CONCAT71(uStack_1ff,bStack_200);
                  uStack_288 = CONCAT71(uStack_1e7,uStack_1e8);
                  uStack_290 = CONCAT71(uStack_1ef,uStack_1f0);
                  uStack_278 = CONCAT71(uStack_1d7,uStack_1d8);
                  uStack_280 = CONCAT71(uStack_1df,uStack_1e0);
                  lStack_270 = lStack_1d0;
                  uStack_2b8 = CONCAT71(uStack_217,bStack_218);
                  pppppppuStack_2c0 = pppppppuStack_220;
                  uStack_2a8 = CONCAT71(uStack_207,uStack_208);
                  uStack_2b0 = CONCAT44(uStack_20c,uStack_210);
                  if (uVar24 != 0) {
                    _free(uVar18);
                  }
                }
                lVar21 = ((ulong)((long)plVar26 - (long)plVar28) >> 4) * -0x3333333333333333 + 1;
                while (lVar21 = lVar21 + -1, lVar21 != 0) {
                  FUN_10337b6e4(plVar28);
                  plVar28 = plVar28 + 10;
                }
              }
              else {
                plVar28 = plVar25 + 10;
                lVar21 = *plVar25;
                plVar30 = plVar28;
                if (lVar21 == -0x7ffffffffffffffa) goto LAB_10368db3c;
                uStack_170 = (int)lVar21;
                uStack_16c = (int)((ulong)lVar21 >> 0x20);
                uStack_150 = (undefined7)plVar25[4];
                uStack_149 = (undefined1)((ulong)plVar25[4] >> 0x38);
                uStack_158 = (undefined7)plVar25[3];
                uStack_151 = (undefined1)((ulong)plVar25[3] >> 0x38);
                uStack_140 = (undefined7)plVar25[6];
                uStack_139 = (undefined1)((ulong)plVar25[6] >> 0x38);
                uStack_148 = (undefined7)plVar25[5];
                uStack_141 = (undefined1)((ulong)plVar25[5] >> 0x38);
                lStack_130 = plVar25[8];
                lStack_138 = plVar25[7];
                lStack_128 = plVar25[9];
                uStack_160 = (undefined7)plVar25[2];
                uStack_159 = (undefined1)((ulong)plVar25[2] >> 0x38);
                uStack_168 = (undefined7)plVar25[1];
                uStack_161 = (undefined1)((ulong)plVar25[1] >> 0x38);
                plStack_258 = plVar28;
                func_0x0001036ebe2c(&pppppppuStack_220,&uStack_170);
                bVar19 = bStack_218;
                if (pppppppuStack_220 == (undefined8 *******)0x2) {
                  plVar30 = plVar26;
                  uVar16 = uStack_108;
                  uVar8 = uStack_107;
                  if (uVar17 == 1) {
LAB_10368dda0:
                    uStack_107 = uVar8;
                    uStack_108 = uVar16;
                    func_0x0001089223ec(&pppppppuStack_118,1,&UNK_10b2bde68,&UNK_10b29b520);
                    goto LAB_10368db58;
                  }
                  plVar30 = plVar25 + 0x14;
                  lVar21 = plVar25[10];
                  plVar28 = plVar30;
                  plStack_258 = plVar30;
                  if (lVar21 == -0x7ffffffffffffffa) goto LAB_10368dda0;
                  uStack_170 = (int)lVar21;
                  uStack_16c = (int)((ulong)lVar21 >> 0x20);
                  uStack_150 = (undefined7)plVar25[0xe];
                  uStack_149 = (undefined1)((ulong)plVar25[0xe] >> 0x38);
                  uStack_158 = (undefined7)plVar25[0xd];
                  uStack_151 = (undefined1)((ulong)plVar25[0xd] >> 0x38);
                  uStack_140 = (undefined7)plVar25[0x10];
                  uStack_139 = (undefined1)((ulong)plVar25[0x10] >> 0x38);
                  uStack_148 = (undefined7)plVar25[0xf];
                  uStack_141 = (undefined1)((ulong)plVar25[0xf] >> 0x38);
                  lStack_130 = plVar25[0x12];
                  lStack_138 = plVar25[0x11];
                  lStack_128 = plVar25[0x13];
                  uStack_160 = (undefined7)plVar25[0xc];
                  uStack_159 = (undefined1)((ulong)plVar25[0xc] >> 0x38);
                  uStack_168 = (undefined7)plVar25[0xb];
                  uStack_161 = (undefined1)((ulong)plVar25[0xb] >> 0x38);
                  func_0x0001035dd020(&pppppppuStack_220,&uStack_170);
                  uVar8 = uStack_107;
                  uVar16 = uStack_108;
                  uVar24 = CONCAT71(uStack_217,bStack_218);
                  uStack_188 = CONCAT71(uStack_207,uStack_208);
                  uStack_190 = CONCAT44(uStack_20c,uStack_210);
                  uStack_108 = (undefined1)uStack_210;
                  uStack_107 = (undefined7)((ulong)uStack_190 >> 8);
                  uStack_180 = uStack_190;
                  uStack_178 = uStack_188;
                  if (pppppppuStack_220 != (undefined8 *******)0x2) {
                    uStack_e0 = uStack_1e8;
                    uStack_df = uStack_1e7;
                    uStack_e8 = uStack_1f0;
                    uStack_e7 = uStack_1ef;
                    uStack_d0 = uStack_1d8;
                    uStack_cf = uStack_1d7;
                    uStack_d8 = uStack_1e0;
                    uStack_d7 = uStack_1df;
                    uStack_c8 = (undefined1)lStack_1d0;
                    uStack_c7 = (undefined7)((ulong)lStack_1d0 >> 8);
                    uStack_100 = uStack_208;
                    uStack_ff = uStack_207;
                    uStack_f0 = uStack_1f8;
                    uStack_ef = uStack_1f7;
                    bStack_f8 = bStack_200;
                    uStack_f7 = uStack_1ff;
                    pppppppuVar15 = pppppppuStack_220;
                    goto LAB_10368ddf8;
                  }
                  if (uVar24 == 0x8000000000000000) goto LAB_10368dda0;
                  uVar18 = CONCAT71(uStack_107,uStack_108);
                  uStack_238 = CONCAT71(uStack_f7,bVar19);
                  uStack_240 = CONCAT71(uStack_207,uStack_208);
                  uStack_100 = uStack_208;
                  uStack_ff = uStack_207;
                  bStack_f8 = bVar19;
                  goto joined_r0x00010368db7c;
                }
                uStack_f7 = uStack_1ff;
                uStack_f0 = uStack_1f8;
                uStack_ff = uStack_207;
                bStack_f8 = bStack_200;
                uStack_e7 = uStack_1ef;
                uStack_e0 = uStack_1e8;
                uStack_ef = uStack_1f7;
                uStack_e8 = uStack_1f0;
                uStack_d7 = uStack_1df;
                uStack_df = uStack_1e7;
                uStack_d8 = uStack_1e0;
                uStack_c8 = (undefined1)lStack_1d0;
                uStack_c7 = (undefined7)((ulong)lStack_1d0 >> 8);
                uStack_d0 = uStack_1d8;
                uStack_cf = uStack_1d7;
                uStack_107 = CONCAT43(uStack_20c,uStack_210._1_3_);
                uStack_100 = uStack_208;
                uStack_10f = uStack_217;
                uStack_108 = (undefined1)uStack_210;
                bStack_110 = bStack_218;
                uVar24 = CONCAT71(uStack_217,bStack_218);
                pppppppuVar15 = pppppppuStack_220;
LAB_10368ddf8:
                uStack_2b0 = CONCAT71(uStack_107,uStack_108);
                uStack_2a0 = CONCAT71(uStack_f7,bStack_f8);
                uStack_2a8 = CONCAT71(uStack_ff,uStack_100);
                uStack_290 = CONCAT71(uStack_e7,uStack_e8);
                pppppppuStack_298 = (undefined8 *******)CONCAT71(uStack_ef,uStack_f0);
                uStack_280 = CONCAT71(uStack_d7,uStack_d8);
                uStack_288 = CONCAT71(uStack_df,uStack_e0);
                lStack_270 = CONCAT71(uStack_c7,uStack_c8);
                uStack_278 = CONCAT71(uStack_cf,uStack_d0);
                lVar21 = ((ulong)((long)plVar26 - (long)plVar28) >> 4) * -0x3333333333333333 + 1;
                pppppppuStack_2c0 = pppppppuVar15;
                uStack_2b8 = uVar24;
                uStack_230 = uStack_2a8;
                uStack_228 = uStack_2a0;
                while (lVar21 = lVar21 + -1, lVar21 != 0) {
                  FUN_10337b6e4(plVar28);
                  plVar28 = plVar28 + 10;
                }
              }
              if (uStack_388 != 0) {
                _free(plVar25);
              }
            }
            else {
              if ((uStack_2f0 != 0) && (uStack_2f0 * 9 != -0x11)) {
                _free(uStack_2f8 + uStack_2f0 * -8 + -8);
              }
              plVar25 = plVar30 + uVar18 * 0xe;
              uVar17 = 0x8000000000000000;
              pppppppuStack_220 = (undefined8 *******)0x8000000000000000;
              uStack_398 = uVar20;
              plStack_1b8 = plVar30;
              plStack_1b0 = plVar30;
              uStack_1a8 = uVar24;
              plStack_1a0 = plVar25;
              if (uVar18 == 0) {
LAB_10368dbd0:
                plVar30 = plStack_1a0;
                func_0x0001089221e0(&pppppppuStack_118,&UNK_108cde34c,4);
                uVar24 = (ulong)bStack_110;
                bVar19 = bStack_110;
                if (pppppppuStack_118 == (undefined8 *******)0x2) goto LAB_10368dbf4;
LAB_10368dc4c:
                uVar27 = (ulong)uStack_10f;
                uVar18 = CONCAT71(uStack_107,uStack_108);
                uVar20 = CONCAT71(uStack_ff,uStack_100);
                uStack_170 = (int)uStack_f7;
                uStack_16c = (int)(CONCAT17(uStack_f0,uStack_f7) >> 0x20);
                pppppppuVar15 = pppppppuStack_118;
                bVar19 = bStack_f8;
                uStack_168 = uStack_ef;
                uStack_161 = uStack_e8;
                uStack_160 = uStack_e7;
                uStack_159 = uStack_e0;
                uStack_158 = uStack_df;
                uStack_151 = uStack_d8;
                uStack_150 = uStack_d7;
                uStack_149 = uStack_d0;
                uStack_148 = uStack_cf;
                uStack_141 = uStack_c8;
                uStack_140 = uStack_c7;
                uVar6 = uVar17;
joined_r0x00010368e0cc:
                uVar17 = uVar24;
                pppppppuStack_118 = pppppppuVar15;
                bStack_f8 = bVar19;
                uStack_ef = uStack_168;
                uStack_e8 = uStack_161;
                uStack_e7 = uStack_160;
                uStack_e0 = uStack_159;
                uStack_df = uStack_158;
                uStack_d8 = uStack_151;
                uStack_d7 = uStack_150;
                uStack_d0 = uStack_149;
                uStack_cf = uStack_148;
                uStack_c8 = uStack_141;
                uStack_c7 = uStack_140;
                if ((uVar6 & 0x7fffffffffffffff) != 0) {
                  _free(uStack_390);
                }
                plVar25 = plStack_1b0;
                plVar30 = plStack_1a0;
                if (pppppppuVar15 != (undefined8 *******)0x2) goto LAB_10368deb0;
              }
              else {
                lVar21 = *plVar30;
                uVar24 = 2;
                iVar11 = 2;
                while( true ) {
                  bVar19 = (byte)iVar11;
                  plStack_1b0 = plVar30 + 0xe;
                  if (lVar21 == -0x8000000000000000) break;
                  piVar1 = (int *)plVar30[1];
                  pppppppuVar15 = (undefined8 *******)plVar30[2];
                  lStack_a8 = plVar30[6];
                  lStack_b0 = plVar30[5];
                  lStack_98 = plVar30[8];
                  lStack_a0 = plVar30[7];
                  lStack_88 = plVar30[10];
                  lStack_90 = plVar30[9];
                  lStack_78 = plVar30[0xc];
                  lStack_80 = plVar30[0xb];
                  lStack_b8 = plVar30[4];
                  lStack_c0 = plVar30[3];
                  if (pppppppuVar15 == (undefined8 *******)0x0) {
                    lVar14 = 1;
                  }
                  else {
                    lVar14 = _malloc(pppppppuVar15);
                    if (lVar14 == 0) {
                      func_0x0001087c9084(1,pppppppuVar15);
                      goto LAB_10368e408;
                    }
                  }
                  _memcpy(lVar14,piVar1,pppppppuVar15);
                  if (pppppppuStack_220 != (undefined8 *******)0x8000000000000000) {
                    if (pppppppuStack_220 != (undefined8 *******)0x0) {
                      _free(CONCAT71(uStack_217,bStack_218));
                    }
                    FUN_10337b6e4(&uStack_208);
                  }
                  bStack_218 = (byte)lVar14;
                  uStack_217 = (uint7)((ulong)lVar14 >> 8);
                  uStack_210 = SUB84(pppppppuVar15,0);
                  uStack_20c = (undefined4)((ulong)pppppppuVar15 >> 0x20);
                  uStack_1f0 = (undefined1)lStack_a8;
                  uStack_1ef = (undefined7)((ulong)lStack_a8 >> 8);
                  uStack_1f8 = (undefined1)lStack_b0;
                  uStack_1f7 = (undefined7)((ulong)lStack_b0 >> 8);
                  uStack_1e0 = (undefined1)lStack_98;
                  uStack_1df = (undefined7)((ulong)lStack_98 >> 8);
                  uStack_1e8 = (undefined1)lStack_a0;
                  uStack_1e7 = (undefined7)((ulong)lStack_a0 >> 8);
                  lStack_1d0 = lStack_88;
                  uStack_1d8 = (undefined1)lStack_90;
                  uStack_1d7 = (undefined7)((ulong)lStack_90 >> 8);
                  lStack_1c0 = lStack_78;
                  lStack_1c8 = lStack_80;
                  bStack_200 = (byte)lStack_b8;
                  uStack_1ff = (undefined7)((ulong)lStack_b8 >> 8);
                  uStack_208 = (undefined1)lStack_c0;
                  uStack_207 = (undefined7)((ulong)lStack_c0 >> 8);
                  if (pppppppuVar15 == (undefined8 *******)0x2) {
                    iVar11 = 1;
                    if ((short)*piVar1 != 0x6469) {
                      iVar11 = 2;
                    }
                  }
                  else if (pppppppuVar15 == (undefined8 *******)0x4) {
                    iVar11 = 2;
                    if (*piVar1 == 0x65707974) {
                      iVar11 = 0;
                    }
                  }
                  else {
                    iVar11 = 2;
                  }
                  pppppppuStack_220 = pppppppuVar15;
                  if (lVar21 != 0) {
                    _free(piVar1);
                  }
                  if (iVar11 == 0) {
                    if ((int)uVar24 != 2) {
                      func_0x000108922524(&pppppppuStack_118,&UNK_108cde34c,4);
LAB_10368e154:
                      uVar24 = CONCAT71(uStack_10f,bStack_110);
                      uVar18 = CONCAT71(uStack_107,uStack_108);
LAB_10368e09c:
                      uVar27 = uVar24 >> 8;
                      uVar20 = CONCAT71(uStack_ff,uStack_100);
                      uStack_170 = (int)uStack_f7;
                      uStack_16c = (int)(CONCAT17(uStack_f0,uStack_f7) >> 0x20);
                      pppppppuVar15 = pppppppuStack_118;
                      bVar19 = bStack_f8;
                      uStack_168 = uStack_ef;
                      uStack_161 = uStack_e8;
                      uStack_160 = uStack_e7;
                      uStack_159 = uStack_e0;
                      uStack_158 = uStack_df;
                      uStack_151 = uStack_d8;
                      uStack_150 = uStack_d7;
                      uStack_149 = uStack_d0;
                      uStack_148 = uStack_cf;
                      uStack_141 = uStack_c8;
                      uStack_140 = uStack_c7;
                      uVar6 = uVar17;
                      goto joined_r0x00010368e0cc;
                    }
                    func_0x0001034a6e50(&pppppppuStack_118,&pppppppuStack_220);
                    uVar24 = (ulong)bStack_110;
                    uVar18 = uStack_390;
                    uVar20 = uStack_388;
                    if (pppppppuStack_118 != (undefined8 *******)0x2) goto LAB_10368dc4c;
                  }
                  else if (iVar11 == 1) {
                    if (uVar17 != 0x8000000000000000) {
                      func_0x000108922524(&pppppppuStack_118,&UNK_108d522a1,2);
                      goto LAB_10368e154;
                    }
                    func_0x000103607aa0(&pppppppuStack_118,&pppppppuStack_220);
                    uVar17 = CONCAT71(uStack_10f,bStack_110);
                    uVar18 = CONCAT71(uStack_107,uStack_108);
                    uVar20 = CONCAT71(uStack_ff,uStack_100);
                    if (pppppppuStack_118 != (undefined8 *******)0x2) {
                      uStack_170 = (int)uStack_f7;
                      uStack_16c = (int)(CONCAT17(uStack_f0,uStack_f7) >> 0x20);
                      goto LAB_10368dea4;
                    }
                  }
                  else {
                    FUN_103607dc0(&pppppppuStack_118,&pppppppuStack_220);
                    uVar18 = uStack_390;
                    uVar20 = uStack_388;
                    if (pppppppuStack_118 != (undefined8 *******)0x2) {
                      uVar24 = CONCAT71(uStack_10f,bStack_110);
                      uVar18 = CONCAT71(uStack_107,uStack_108);
                      goto LAB_10368e09c;
                    }
                  }
                  uStack_388 = uVar20;
                  uStack_390 = uVar18;
                  iVar11 = (int)uVar24;
                  bVar19 = (byte)uVar24;
                  plVar25 = plStack_1a0;
                  plVar30 = plStack_1a0;
                  if (plStack_1b0 == plStack_1a0) goto joined_r0x00010368db30;
                  lVar21 = *plStack_1b0;
                  plVar30 = plStack_1b0;
                }
                plVar25 = plVar30 + 0xe;
                plVar30 = plStack_1a0;
joined_r0x00010368db30:
                plStack_1a0 = plVar30;
                if (iVar11 == 2) goto LAB_10368dbd0;
LAB_10368dbf4:
                uVar18 = uStack_390;
                if (uVar17 == 0x8000000000000000) {
                  func_0x0001089221e0(&pppppppuStack_118,&UNK_108d522a1,2);
                  uVar17 = CONCAT71(uStack_10f,bStack_110);
                  uVar18 = CONCAT71(uStack_107,uStack_108);
                  uVar20 = CONCAT71(uStack_ff,uStack_100);
                  uStack_388 = uVar20;
                  if (pppppppuStack_118 != (undefined8 *******)0x2) {
                    uStack_170 = (int)uStack_f7;
                    uStack_16c = (int)(CONCAT17(uStack_f0,uStack_f7) >> 0x20);
LAB_10368dea4:
                    uVar27 = uVar17 >> 8;
                    pppppppuVar15 = pppppppuStack_118;
                    uStack_168 = uStack_ef;
                    uStack_161 = uStack_e8;
                    uStack_160 = uStack_e7;
                    uStack_159 = uStack_e0;
                    uStack_158 = uStack_df;
                    uStack_151 = uStack_d8;
                    uStack_150 = uStack_d7;
                    uStack_149 = uStack_d0;
                    uStack_148 = uStack_cf;
                    uStack_141 = uStack_c8;
                    uStack_140 = uStack_c7;
                    bVar19 = bStack_f8;
LAB_10368deb0:
                    uStack_2b8 = uVar17 & 0xff | uVar27 << 8;
                    uVar5 = CONCAT14(uStack_260._7_1_,uStack_16c << 8);
                    uStack_260 = (long *)CONCAT44((int)((uint5)uVar5 >> 8),uStack_170);
                    uStack_290 = CONCAT71(uStack_160,uStack_161);
                    pppppppuStack_298 = (undefined8 *******)CONCAT71(uStack_168,uStack_16c._3_1_);
                    uStack_280 = CONCAT71(uStack_150,uStack_151);
                    uStack_288 = CONCAT71(uStack_158,uStack_159);
                    lStack_270 = CONCAT71(uStack_140,uStack_141);
                    uStack_278 = CONCAT71(uStack_148,uStack_149);
                    uStack_2a0._0_4_ = uStack_170 << 8;
                    uStack_2a0 = CONCAT44(uStack_260._3_4_,(int)uStack_2a0);
                    uStack_2a0 = CONCAT71(uStack_2a0._1_7_,bVar19);
                    pppppppuStack_2c0 = pppppppuVar15;
                    uStack_2b0 = uVar18;
                    uStack_2a8 = uVar20;
                    FUN_10338a7ec(&pppppppuStack_220);
                    goto LAB_10368df10;
                  }
                }
                uStack_390 = uVar18;
                bVar19 = bVar19 & 1;
                uVar27 = uVar17 >> 8;
                uVar18 = uStack_390;
                uVar20 = uStack_388;
              }
              uStack_388 = uVar20;
              uVar17 = uVar17 & 0xff | uVar27 << 8;
              uVar4 = CONCAT31((undefined3)uStack_16c,uStack_170._3_1_);
              uStack_260._0_3_ = (undefined3)uStack_170;
              uStack_260._0_7_ = CONCAT43(uVar4,(undefined3)uStack_260);
              uStack_180._0_7_ = CONCAT43(uVar4,(undefined3)uStack_260);
              uVar7 = uStack_180;
              if (plVar30 == plVar25) {
                uStack_2a0._0_4_ = (int)uStack_180 << 8;
                uStack_2a0 = CONCAT44(uVar4,(int)uStack_2a0);
                uStack_2a8 = uStack_388;
                uStack_2a0 = CONCAT71(uStack_2a0._1_7_,bVar19);
                pppppppuStack_2c0 = (undefined8 *******)0x2;
                uStack_2b8 = uVar17;
                uStack_2b0 = uVar18;
                uStack_180 = uVar7;
              }
              else {
                func_0x0001089223ec(&pppppppuStack_118,uStack_398,&UNK_10b2b6878,&UNK_10b29b520);
                pppppppuStack_298 = (undefined8 *******)CONCAT71(uStack_ef,uStack_f0);
                uStack_2a0 = CONCAT71(uStack_f7,bStack_f8);
                uStack_288 = CONCAT71(uStack_df,uStack_e0);
                uStack_290 = CONCAT71(uStack_e7,uStack_e8);
                uStack_278 = CONCAT71(uStack_cf,uStack_d0);
                uStack_280 = CONCAT71(uStack_d7,uStack_d8);
                lStack_270 = CONCAT71(uStack_c7,uStack_c8);
                uStack_2b8 = CONCAT71(uStack_10f,bStack_110);
                pppppppuStack_2c0 = pppppppuStack_118;
                uStack_2a8 = CONCAT71(uStack_ff,uStack_100);
                uStack_2b0 = CONCAT71(uStack_107,uStack_108);
                if (uVar17 != 0) {
                  _free(uVar18);
                }
              }
              FUN_10338a7ec(&pppppppuStack_220);
            }
LAB_10368df10:
            uVar27 = uStack_2a0;
            uVar20 = uStack_2a8;
            uVar18 = uStack_2b0;
            uVar24 = uStack_2b8;
            pppppppuVar15 = pppppppuStack_2c0;
            uVar17 = uStack_318;
            if (pppppppuStack_2c0 != (undefined8 *******)0x2) {
              bStack_218 = (byte)uStack_290;
              uStack_217 = (uint7)((ulong)uStack_290 >> 8);
              pppppppuStack_220 = pppppppuStack_298;
              uStack_208 = (undefined1)uStack_280;
              uStack_207 = (undefined7)((ulong)uStack_280 >> 8);
              uStack_210 = (undefined4)uStack_288;
              uStack_20c = (undefined4)((ulong)uStack_288 >> 0x20);
              uStack_1f8 = (undefined1)lStack_270;
              uStack_1f7 = (undefined7)((ulong)lStack_270 >> 8);
              bStack_200 = (byte)uStack_278;
              uStack_1ff = (undefined7)((ulong)uStack_278 >> 8);
              puStack_368 = puStack_320;
              if (uStack_318 != 0) {
                puVar13 = puStack_320 + 1;
                do {
                  if (puVar13[-1] != 0) {
                    _free(*puVar13);
                  }
                  puVar13 = puVar13 + 4;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              if (uStack_328 != 0) {
                _free(puStack_368);
              }
              puVar13 = puStack_370;
              param_1[6] = CONCAT71(uStack_217,bStack_218);
              param_1[5] = (long)pppppppuStack_220;
              *param_1 = (long)pppppppuVar15;
              param_1[1] = uVar24;
              param_1[2] = uVar18;
              param_1[3] = uVar20;
              param_1[4] = uVar27;
              param_1[8] = CONCAT71(uStack_207,uStack_208);
              param_1[7] = CONCAT44(uStack_20c,uStack_210);
              param_1[10] = CONCAT71(uStack_1f7,uStack_1f8);
              param_1[9] = CONCAT71(uStack_1ff,bStack_200);
              lVar21 = uVar23 / 0x50 + 1;
              while (lVar21 = lVar21 + -1, lVar21 != 0) {
                FUN_10337b6e4(puVar22);
                puVar22 = puVar22 + 10;
              }
              if (uStack_378 == 0) {
                return;
              }
              goto LAB_10368d720;
            }
            puVar12 = puVar22;
            if (uStack_2b8 == 0x8000000000000000) break;
            if (uStack_318 == uStack_328) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h03420294d64adb6aE(&uStack_328);
            }
            puVar13 = puStack_320 + uVar17 * 4;
            *puVar13 = uVar24;
            puVar13[1] = uVar18;
            puVar13[2] = uVar20;
            puVar13[3] = uVar27;
            uVar17 = uVar17 + 1;
            puVar12 = puStack_368;
            uStack_318 = uVar17;
            if (puVar22 == puStack_368) break;
            puStack_358 = puVar22 + 10;
            uVar24 = *puVar22;
            puVar13 = puVar22;
            puVar22 = puStack_358;
            puVar12 = puStack_358;
          } while (uVar24 != 0x8000000000000006);
        }
      }
      puVar13 = puStack_370;
      uStack_340 = uStack_328;
      puStack_338 = puStack_320;
      uVar23 = (long)puStack_368 - (long)puVar12;
      uStack_330 = uVar17;
      if (uVar23 == 0) {
        param_1[2] = (long)puStack_320;
        param_1[1] = uStack_328;
        param_1[3] = uVar17;
        *param_1 = 2;
      }
      else {
        func_0x0001089223ec(&pppppppuStack_220,uStack_380,&UNK_10b2b6868,&UNK_10b29b520);
        param_1[5] = CONCAT71(uStack_1f7,uStack_1f8);
        param_1[4] = CONCAT71(uStack_1ff,bStack_200);
        param_1[7] = CONCAT71(uStack_1e7,uStack_1e8);
        param_1[6] = CONCAT71(uStack_1ef,uStack_1f0);
        param_1[9] = CONCAT71(uStack_1d7,uStack_1d8);
        param_1[8] = CONCAT71(uStack_1df,uStack_1e0);
        param_1[10] = lStack_1d0;
        param_1[1] = CONCAT71(uStack_217,bStack_218);
        *param_1 = (long)pppppppuStack_220;
        param_1[3] = CONCAT71(uStack_207,uStack_208);
        param_1[2] = CONCAT44(uStack_20c,uStack_210);
        FUN_1032a43b0(&uStack_340);
      }
      lVar21 = (uVar23 >> 4) * -0x3333333333333333 + 1;
      while (lVar21 = lVar21 + -1, lVar21 != 0) {
        FUN_10337b6e4(puVar12);
        puVar12 = puVar12 + 10;
      }
      if (uStack_378 == 0) {
        return;
      }
LAB_10368d720:
      _free(puVar13);
      return;
    }
    if (uVar17 != 6) {
      uStack_168 = (undefined7)param_2[2];
      uStack_161 = (undefined1)(param_2[2] >> 0x38);
      uStack_170 = (int)param_2[1];
      uStack_16c = (int)(param_2[1] >> 0x20);
      uStack_160 = (undefined7)param_2[3];
      uStack_159 = (undefined1)(param_2[3] >> 0x38);
      pppppppuStack_118 = (undefined8 *******)0x0;
      bStack_110 = 1;
      uStack_10f = 0;
      uStack_108 = 0;
      uStack_107 = 0;
      uStack_210 = 0x60000020;
      uStack_20c = 0;
      pppppppuStack_220 = &pppppppuStack_118;
      bStack_218 = 0x48;
      uStack_217 = 0x10b29a4;
      iVar11 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                         (&uStack_170,&pppppppuStack_220);
      if (iVar11 == 0) {
        uStack_2b8 = CONCAT71(uStack_10f,bStack_110);
        pppppppuStack_2c0 = pppppppuStack_118;
        uStack_2b0 = CONCAT71(uStack_107,uStack_108);
        pppppppuVar15 = &pppppppuStack_2c0;
        unaff_x30 = 0x10368e2fc;
        unaff_x19 = param_1;
        goto SUB_10892e7f8;
      }
      func_0x000108a07a3c(&UNK_108d8639e,0x37,&uStack_180,&UNK_10b2c0eb8,&UNK_10b2c0b18);
LAB_10368e408:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10368e40c);
      (*pcVar9)();
    }
    uVar20 = param_2[6];
    uVar17 = param_2[1];
    uVar24 = param_2[2];
    uVar18 = param_2[4];
    if ((uVar18 != 0) && (uVar18 * 9 != -0x11)) {
      _free(param_2[3] + uVar18 * -8 + -8);
    }
    plStack_1a0 = (long *)(uVar17 + uVar24 * 0x70);
    pppppppuStack_220 = (undefined8 *******)0x8000000000000000;
    pppppppuStack_2c0 = (undefined8 *******)CONCAT71(pppppppuStack_2c0._1_7_,0xb);
    plStack_1b8 = (long *)uVar17;
    plStack_1b0 = (long *)uVar17;
    uStack_1a8 = uVar23;
    func_0x000108921f70(&pppppppuStack_118,&pppppppuStack_2c0,&uStack_180,&UNK_10b29af90);
    uStack_168 = (undefined7)CONCAT71(uStack_107,uStack_108);
    uStack_161 = (undefined1)((uint7)uStack_107 >> 0x30);
    uStack_170 = (int)CONCAT71(uStack_10f,bStack_110);
    uStack_16c = (int)(uStack_10f >> 0x18);
    uStack_160 = (undefined7)CONCAT71(uStack_ff,uStack_100);
    uStack_159 = (undefined1)((uint7)uStack_ff >> 0x30);
    if (pppppppuStack_118 == (undefined8 *******)0x2) {
      plStack_308 = (long *)CONCAT17(uStack_161,uStack_168);
      uStack_310 = CONCAT44(uStack_16c,uStack_170);
      uStack_300 = CONCAT17(uStack_159,uStack_160);
      if (uVar24 != 0) {
        func_0x0001089223ec(&pppppppuStack_118,uVar20,&UNK_10b2b6878,&UNK_10b29b520);
        param_1[5] = CONCAT71(uStack_ef,uStack_f0);
        param_1[4] = CONCAT71(uStack_f7,bStack_f8);
        param_1[7] = CONCAT71(uStack_df,uStack_e0);
        param_1[6] = CONCAT71(uStack_e7,uStack_e8);
        param_1[9] = CONCAT71(uStack_cf,uStack_d0);
        param_1[8] = CONCAT71(uStack_d7,uStack_d8);
        param_1[10] = CONCAT71(uStack_c7,uStack_c8);
        param_1[1] = CONCAT71(uStack_10f,bStack_110);
        *param_1 = (long)pppppppuStack_118;
        param_1[3] = CONCAT71(uStack_ff,uStack_100);
        param_1[2] = CONCAT71(uStack_107,uStack_108);
        FUN_1032a43b0(&uStack_310);
        goto LAB_10368d694;
      }
      param_1[2] = (long)plStack_308;
      param_1[1] = uStack_310;
      param_1[3] = uStack_300;
      pppppppuStack_118 = (undefined8 *******)0x2;
    }
    else {
      param_1[5] = CONCAT71(uStack_ef,uStack_f0);
      param_1[4] = CONCAT71(uStack_f7,bStack_f8);
      param_1[7] = CONCAT71(uStack_df,uStack_e0);
      param_1[6] = CONCAT71(uStack_e7,uStack_e8);
      param_1[9] = CONCAT71(uStack_cf,uStack_d0);
      param_1[8] = CONCAT71(uStack_d7,uStack_d8);
      param_1[10] = CONCAT71(uStack_c7,uStack_c8);
      param_1[2] = CONCAT17(uStack_161,uStack_168);
      param_1[1] = CONCAT44(uStack_16c,uStack_170);
      param_1[3] = CONCAT17(uStack_159,uStack_160);
    }
    *param_1 = (long)pppppppuStack_118;
LAB_10368d694:
    FUN_10338a7ec(&pppppppuStack_220);
    return;
  }
  if ((long)uVar17 < 2) {
    if (uVar17 == 0) {
      pppppppuVar15 = (undefined8 *******)(param_2 + 1);
      puVar10 = (undefined1 *)register0x00000008;
      uVar23 = unaff_x22;
      puVar29 = unaff_x29;
SUB_10892e7f8:
      *(ulong *)(puVar10 + -0x30) = uVar23;
      *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar10 + -0x20) = unaff_x20;
      *(long **)(puVar10 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar10 + -0x10) = puVar29;
      *(undefined8 *)(puVar10 + -8) = unaff_x30;
      ppppppuVar2 = pppppppuVar15[1];
      ppppppuVar3 = pppppppuVar15[2];
      *(undefined8 *******)(puVar10 + -0x48) = ppppppuVar2;
      *(undefined8 *******)(puVar10 + -0x40) = ppppppuVar3;
      puVar10[-0x50] = 5;
      func_0x000108921f70(param_1,puVar10 + -0x50,puVar10 + -0x31,&UNK_10b29af90);
      if (*pppppppuVar15 != (undefined8 ******)0x0) {
        _free(ppppppuVar2);
      }
      return;
    }
    bStack_218 = (byte)param_2[1];
    uStack_217 = (uint7)(param_2[1] >> 8);
    uVar16 = 2;
  }
  else {
    if (uVar17 != 2) {
      pppppppuStack_220 =
           (undefined8 *******)((ulong)CONCAT61(pppppppuStack_220._2_6_,(char)param_2[1]) << 8);
      goto LAB_10368d648;
    }
    bStack_218 = (byte)param_2[1];
    uStack_217 = (uint7)(param_2[1] >> 8);
    uVar16 = 3;
  }
  pppppppuStack_220 = (undefined8 *******)CONCAT71(pppppppuStack_220._1_7_,uVar16);
LAB_10368d648:
  func_0x000108921f70(param_1,&pppppppuStack_220,&uStack_180,&UNK_10b29af90);
  return;
}

