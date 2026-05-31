
/* WARNING: Type propagation algorithm not settling */

void FUN_10145ae18(undefined8 *param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  byte bVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  bool bVar28;
  long lVar29;
  long lVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbStack_550;
  byte *pbStack_548;
  byte *pbStack_540;
  byte *pbStack_530;
  byte *pbStack_528;
  byte *pbStack_520;
  byte *pbStack_518;
  byte *pbStack_4f0;
  byte *pbStack_4e8;
  byte *pbStack_4d8;
  byte *pbStack_4d0;
  byte *pbStack_4c0;
  byte *pbStack_4b8;
  byte *pbStack_4b0;
  byte *pbStack_4a8;
  long lStack_4a0;
  byte *pbStack_498;
  byte *pbStack_490;
  byte *pbStack_488;
  byte *pbStack_480;
  byte *pbStack_478;
  byte *pbStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  byte *pbStack_430;
  byte *pbStack_428;
  byte *pbStack_420;
  byte *pbStack_410;
  byte *pbStack_408;
  byte *pbStack_400;
  byte *pbStack_3f0;
  byte *pbStack_3e8;
  byte *pbStack_3e0;
  byte *pbStack_3d8;
  byte *pbStack_3d0;
  byte *pbStack_3c8;
  byte *pbStack_3c0;
  byte *pbStack_3b8;
  byte *pbStack_3b0;
  byte *pbStack_3a8;
  byte *pbStack_3a0;
  byte *pbStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  byte bStack_360;
  undefined7 uStack_35f;
  byte abStack_358 [8];
  long lStack_350;
  byte *pbStack_348;
  long lStack_340;
  byte *pbStack_338;
  byte *pbStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  byte *pbStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  byte *pbStack_2f0;
  byte *pbStack_2e8;
  byte *pbStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  byte bStack_2a8;
  byte bStack_2a7;
  undefined6 uStack_2a6;
  byte *pbStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  byte *pbStack_280;
  byte *pbStack_278;
  byte *pbStack_270;
  byte *pbStack_260;
  byte *pbStack_258;
  byte *pbStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  byte *pbStack_210;
  byte *pbStack_208;
  long lStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  long lStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  undefined1 auStack_71 [17];
  byte *pbVar27;
  
  if (*param_2 == '\x14') {
    pbVar2 = *(byte **)(param_2 + 8);
    pbVar3 = *(byte **)(param_2 + 0x10);
    pbVar19 = *(byte **)(param_2 + 0x18);
    pbVar1 = pbVar3 + (long)pbVar19 * 0x20;
    lStack_4a0 = 0;
    pbVar18 = pbVar19;
    if ((byte *)0x1af1 < pbVar19) {
      pbVar18 = (byte *)0x1af2;
    }
    pbStack_4c0 = pbVar3;
    pbStack_4b8 = pbVar3;
    pbStack_4b0 = pbVar2;
    pbStack_4a8 = pbVar1;
    if (pbVar19 != (byte *)0x0) {
      pbVar19 = (byte *)_malloc((long)pbVar18 * 0x98);
      if (pbVar19 == (byte *)0x0) {
        func_0x0001087c9084(8,(long)pbVar18 * 0x98);
LAB_10145c40c:
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10145c410);
        (*pcVar12)();
      }
      lVar29 = 0;
      puVar20 = (undefined8 *)((ulong)abStack_358 | 1);
      pbStack_488 = (byte *)0x0;
      puVar25 = (undefined8 *)((ulong)&uStack_e0 | 1);
      puVar21 = (undefined8 *)((ulong)&pbStack_210 | 1);
      puVar22 = (undefined8 *)((ulong)&uStack_98 | 1);
      pbVar27 = pbVar3;
      pbStack_498 = pbVar18;
      pbStack_490 = pbVar19;
LAB_10145af30:
      lVar30 = lStack_340;
      pbVar18 = pbStack_348;
      lVar23 = lStack_350;
      pbVar26 = pbVar27 + 0x20;
      bVar24 = *pbVar27;
      pbVar19 = pbVar26;
      pbStack_4b8 = pbVar26;
      if (bVar24 != 0x16) {
        uVar17 = *(undefined8 *)(pbVar27 + 1);
        puVar20[1] = *(undefined8 *)(pbVar27 + 9);
        *puVar20 = uVar17;
        uVar17 = *(undefined8 *)(pbVar27 + 0x10);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar27 + 0x18);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar17;
        lVar29 = lVar29 + 1;
        lStack_4a0 = lVar29;
        abStack_358[0] = bVar24;
        if (bVar24 == 0x14) {
          pbVar27 = pbStack_348 + lStack_340 * 0x20;
          pbStack_210 = pbStack_348;
          lStack_200 = lStack_350;
          pbStack_1f0 = (byte *)0x0;
          pbVar19 = pbStack_348;
          pbStack_1f8 = pbVar27;
          if (lStack_340 == 0) {
LAB_10145b044:
            pbStack_208 = pbVar19;
            pbVar34 = (byte *)FUN_1087e422c(0,&UNK_10b22e738,&UNK_10b20a590);
LAB_10145b060:
            pbStack_338 = (byte *)0x8000000000000000;
            pbStack_330 = pbVar34;
LAB_10145b068:
            lVar30 = ((ulong)((long)pbVar27 - (long)pbVar19) >> 5) + 1;
            while (lVar30 = lVar30 + -1, lVar30 != 0) {
              FUN_100e077ec(pbVar19);
              pbVar19 = pbVar19 + 0x20;
            }
            if (lVar23 != 0) {
              _free(pbVar18);
            }
          }
          else {
            pbVar19 = pbStack_348 + 0x20;
            bVar4 = *pbStack_348;
            if (bVar4 == 0x16) goto LAB_10145b044;
            uVar17 = *(undefined8 *)(pbStack_348 + 1);
            puVar25[1] = *(undefined8 *)(pbStack_348 + 9);
            *puVar25 = uVar17;
            uVar17 = *(undefined8 *)(pbStack_348 + 0x10);
            *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)(pbStack_348 + 0x18);
            *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
            pbStack_1f0 = (byte *)0x1;
            uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,bVar4);
            pbStack_208 = pbVar19;
            FUN_1004b60cc(&pbStack_128,&uStack_e0);
            pbVar10 = pbStack_118;
            pbVar34 = pbStack_120;
            pbVar8 = pbStack_128;
            if (pbStack_128 == (byte *)0x8000000000000001) goto LAB_10145b060;
            if (lVar30 == 1) {
LAB_10145b5ac:
              pbVar15 = (byte *)FUN_1087e422c(1,&UNK_10b22e738,&UNK_10b20a590);
LAB_10145b5c4:
              pbStack_338 = (byte *)0x8000000000000000;
              pbStack_330 = pbVar15;
LAB_10145b5d0:
              if (((ulong)pbVar8 & 0x7fffffffffffffff) != 0) {
                _free(pbVar34);
              }
              goto LAB_10145b068;
            }
            pbVar19 = pbVar18 + 0x40;
            bVar4 = pbVar18[0x20];
            pbStack_208 = pbVar19;
            if (bVar4 == 0x16) goto LAB_10145b5ac;
            uVar17 = *(undefined8 *)(pbVar18 + 0x21);
            puVar25[1] = *(undefined8 *)(pbVar18 + 0x29);
            *puVar25 = uVar17;
            uVar17 = *(undefined8 *)(pbVar18 + 0x30);
            *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)(pbVar18 + 0x38);
            *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
            pbStack_1f0 = (byte *)0x2;
            uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,bVar4);
            FUN_1004b62d4(&pbStack_128,&uStack_e0);
            pbVar33 = pbStack_118;
            pbVar15 = pbStack_120;
            pbVar31 = pbStack_128;
            if (pbStack_128 == (byte *)0x8000000000000000) goto LAB_10145b5c4;
            if (lVar30 == 2) {
LAB_10145bc58:
              pbVar32 = (byte *)FUN_1087e422c(2,&UNK_10b22e738,&UNK_10b20a590);
LAB_10145bc70:
              pbStack_338 = (byte *)0x8000000000000000;
              pbStack_330 = pbVar32;
LAB_10145bc7c:
              if (pbVar31 != (byte *)0x0) {
                _free(pbVar15);
              }
              goto LAB_10145b5d0;
            }
            pbVar19 = pbVar18 + 0x60;
            bVar4 = pbVar18[0x40];
            pbStack_208 = pbVar19;
            if (bVar4 == 0x16) goto LAB_10145bc58;
            uVar17 = *(undefined8 *)(pbVar18 + 0x41);
            puVar25[1] = *(undefined8 *)(pbVar18 + 0x49);
            *puVar25 = uVar17;
            uVar17 = *(undefined8 *)(pbVar18 + 0x50);
            *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)(pbVar18 + 0x58);
            *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
            pbStack_1f0 = (byte *)0x3;
            uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,bVar4);
            FUN_1004b62d4(&pbStack_128,&uStack_e0);
            pbVar11 = pbStack_118;
            pbVar32 = pbStack_120;
            pbVar9 = pbStack_128;
            if (pbStack_128 == (byte *)0x8000000000000000) goto LAB_10145bc70;
            if (lVar30 == 3) {
LAB_10145bcfc:
              pbVar16 = (byte *)FUN_1087e422c(3,&UNK_10b22e738,&UNK_10b20a590);
LAB_10145bd14:
              pbStack_338 = (byte *)0x8000000000000000;
              pbStack_330 = pbVar16;
LAB_10145bd20:
              if (pbVar9 != (byte *)0x0) {
                _free(pbVar32);
              }
              goto LAB_10145bc7c;
            }
            pbVar19 = pbVar18 + 0x80;
            bVar4 = pbVar18[0x60];
            pbStack_208 = pbVar19;
            if (bVar4 == 0x16) goto LAB_10145bcfc;
            pbStack_518 = pbStack_118;
            uVar17 = *(undefined8 *)(pbVar18 + 0x61);
            puVar22[1] = *(undefined8 *)(pbVar18 + 0x69);
            *puVar22 = uVar17;
            uVar17 = *(undefined8 *)(pbVar18 + 0x70);
            *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)(pbVar18 + 0x78);
            *(undefined8 *)((long)puVar22 + 0xf) = uVar17;
            pbStack_1f0 = (byte *)0x4;
            uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,bVar4);
            FUN_1004aa788(&uStack_e0,&uStack_98);
            pbVar16 = pbStack_d8;
            if (uStack_e0 == (byte *)0x8000000000000005) goto LAB_10145bd14;
            uStack_110 = uStack_c8;
            pbStack_118 = pbStack_d0;
            uStack_100 = uStack_b8;
            uStack_108 = uStack_c0;
            uStack_f0 = uStack_a8;
            uStack_f8 = uStack_b0;
            uStack_e8 = uStack_a0;
            pbStack_128 = uStack_e0;
            pbStack_120 = pbStack_d8;
            if (lVar30 == 4) {
LAB_10145bdbc:
              uVar17 = 4;
LAB_10145bdc0:
              pbVar16 = (byte *)FUN_1087e422c(uVar17,&UNK_10b22e738,&UNK_10b20a590);
LAB_10145bdd4:
              pbStack_338 = (byte *)0x8000000000000000;
              pbStack_330 = pbVar16;
              FUN_100de6690(&pbStack_128);
              goto LAB_10145bd20;
            }
            pbVar19 = pbVar18 + 0xa0;
            bVar4 = pbVar18[0x80];
            pbStack_208 = pbVar19;
            if (bVar4 == 0x16) goto LAB_10145bdbc;
            uVar17 = *(undefined8 *)(pbVar18 + 0x81);
            puVar25[1] = *(undefined8 *)(pbVar18 + 0x89);
            *puVar25 = uVar17;
            uVar17 = *(undefined8 *)(pbVar18 + 0x90);
            *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)(pbVar18 + 0x98);
            *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
            pbStack_1f0 = (byte *)0x5;
            uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,bVar4);
            FUN_101226150(&uStack_98,&uStack_e0);
            pbVar16 = pbStack_90;
            if (((ulong)uStack_98 & 1) != 0) goto LAB_10145bdd4;
            if (lVar30 == 5) {
LAB_10145c044:
              uVar17 = 5;
              goto LAB_10145bdc0;
            }
            bVar6 = uStack_98._1_1_;
            pbVar19 = pbVar18 + 0xc0;
            bVar4 = pbVar18[0xa0];
            pbStack_208 = pbVar19;
            if (bVar4 == 0x16) goto LAB_10145c044;
            uVar17 = *(undefined8 *)(pbVar18 + 0xa1);
            puVar25[1] = *(undefined8 *)(pbVar18 + 0xa9);
            *puVar25 = uVar17;
            uVar17 = *(undefined8 *)(pbVar18 + 0xb0);
            *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)(pbVar18 + 0xb8);
            *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
            pbStack_1f0 = (byte *)0x6;
            uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,bVar4);
            FUN_101226150(&uStack_98,&uStack_e0);
            pbVar16 = pbStack_90;
            if ((byte)uStack_98 == 1) goto LAB_10145bdd4;
            uStack_2d8 = uStack_110;
            pbStack_2e0 = pbStack_118;
            uStack_2c8 = uStack_100;
            uStack_2d0 = uStack_108;
            uStack_2b8 = uStack_f0;
            uStack_2c0 = uStack_f8;
            uStack_2b0 = uStack_e8;
            pbStack_2e8 = pbStack_120;
            pbStack_2f0 = pbStack_128;
            pbStack_338 = pbVar31;
            pbStack_330 = pbVar15;
            pbStack_328 = pbVar33;
            pbStack_320 = pbVar9;
            pbStack_318 = pbVar32;
            pbStack_310 = pbVar11;
            pbStack_308 = pbVar8;
            pbStack_300 = pbVar34;
            pbStack_2f8 = pbVar10;
            bStack_2a8 = bVar6;
            bStack_2a7 = uStack_98._1_1_;
            pbStack_1b8 = pbVar15;
            pbStack_1c0 = pbVar31;
            pbStack_1a8 = pbVar9;
            pbStack_1b0 = pbVar33;
            pbStack_178 = pbStack_128;
            pbStack_180 = pbVar10;
            pbStack_168 = pbStack_118;
            pbStack_170 = pbStack_120;
            pbStack_198 = pbVar11;
            pbStack_1a0 = pbVar32;
            pbStack_188 = pbVar34;
            pbStack_190 = pbVar8;
            uStack_130 = CONCAT62(uStack_2a6,CONCAT11(uStack_98._1_1_,bVar6));
            uStack_138 = uStack_e8;
            uStack_140 = uStack_f0;
            uStack_148 = uStack_f8;
            uStack_150 = uStack_100;
            uStack_158 = uStack_108;
            uStack_160 = uStack_110;
            pbVar18 = (byte *)FUN_100fbc738(&pbStack_210);
            if (pbVar18 != (byte *)0x0) {
              pbStack_338 = (byte *)0x8000000000000000;
              pbStack_330 = pbVar18;
              if ((pbStack_190 != (byte *)0x8000000000000000) && (pbStack_190 != (byte *)0x0)) {
                _free(pbStack_188);
              }
              if (pbStack_1c0 != (byte *)0x0) {
                _free(pbStack_1b8);
              }
              if (pbStack_1a8 != (byte *)0x0) {
                _free(pbStack_1a0);
              }
              FUN_100de6690(&pbStack_178);
            }
          }
          goto LAB_10145b868;
        }
        if (bVar24 == 0x15) {
          lVar23 = lStack_340 * 0x40;
          pbVar18 = pbStack_348 + lVar23;
          pbStack_1f0 = pbStack_348;
          pbStack_1e8 = pbStack_348;
          lStack_1e0 = lStack_350;
          pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
          pbStack_1d0 = (byte *)0x0;
          pbStack_128 = (byte *)0x8000000000000005;
          pbStack_1d8 = pbVar18;
          if (lStack_340 != 0) {
            pbVar19 = (byte *)0x0;
            bVar4 = 3;
            bVar6 = 3;
            pbStack_4d8 = (byte *)0x8000000000000005;
            pbStack_4d0 = (byte *)0x8000000000000000;
            pbStack_4f0 = (byte *)0x8000000000000000;
            pbStack_4e8 = (byte *)0x8000000000000001;
            pbVar34 = (byte *)0x8000000000000005;
            pbVar27 = pbStack_348;
LAB_10145b0c0:
            pbVar15 = pbStack_d0;
            pbVar10 = pbStack_d8;
            pbVar8 = uStack_e0;
            pbVar32 = pbVar27 + 0x40;
            bVar5 = *pbVar27;
            pbVar31 = pbVar19;
            pbVar33 = pbVar32;
            if (bVar5 == 0x16) goto LAB_10145b5ec;
            uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,bVar5);
            pbVar31 = uStack_e0;
            uVar17 = *(undefined8 *)(pbVar27 + 0x10);
            *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)(pbVar27 + 0x18);
            *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
            uVar17 = *(undefined8 *)(pbVar27 + 1);
            puVar25[1] = *(undefined8 *)(pbVar27 + 9);
            *puVar25 = uVar17;
            pbStack_208 = *(byte **)(pbVar27 + 0x28);
            pbStack_210 = *(byte **)(pbVar27 + 0x20);
            pbStack_1f8 = *(byte **)(pbVar27 + 0x38);
            lStack_200 = *(long *)(pbVar27 + 0x30);
            if (bVar5 < 0xd) {
              if (bVar5 == 1) {
                uStack_e0._1_1_ = SUB81(pbVar8,1);
                if (5 < uStack_e0._1_1_) {
                  uStack_e0._1_1_ = 6;
                }
                uStack_98 = (byte *)((ulong)CONCAT61(uStack_98._2_6_,uStack_e0._1_1_) << 8);
                uStack_e0 = pbVar31;
              }
              else {
                if (bVar5 != 4) {
                  if (bVar5 != 0xc) goto LAB_10145b4dc;
                  FUN_100b42834(&uStack_98,pbStack_d0);
                  goto joined_r0x00010145b120;
                }
                pbVar27 = pbStack_d8;
                if ((byte *)0x5 < pbStack_d8) {
                  pbVar27 = (byte *)0x6;
                }
                uStack_98 = (byte *)((ulong)CONCAT61(uStack_98._2_6_,(char)pbVar27) << 8);
                uStack_e0 = pbVar31;
              }
LAB_10145b1bc:
              FUN_100e077ec(&uStack_e0);
              pbVar27 = uStack_98;
joined_r0x00010145b188:
              uStack_98 = pbVar27;
              if (((ulong)pbVar27 & 1) != 0) goto LAB_10145b7bc;
              uStack_98._1_1_ = (byte)((ulong)pbVar27 >> 8);
              cVar7 = (char)pbStack_210;
              pbStack_210._1_7_ = (undefined7)((ulong)pbStack_210 >> 8);
              uStack_e0._1_7_ = (undefined7)((ulong)uStack_e0 >> 8);
              if (2 < uStack_98._1_1_) {
                if (uStack_98._1_1_ < 5) {
                  if (uStack_98._1_1_ == 3) {
                    if (pbStack_4d8 != (byte *)0x8000000000000005) {
                      pbStack_1d0 = pbVar19 + 1;
                      pbStack_120 = pbStack_518;
                      uStack_98 = &UNK_108ca7773;
                      pbStack_90 = (byte *)0xb;
                      uStack_e0 = (byte *)&uStack_98;
                      pbStack_d8 = &DAT_100c7b3a0;
                      pbStack_1e8 = pbVar32;
                      pbStack_128 = pbVar34;
                      pbStack_330 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0
                                                         );
                      pbStack_338 = (byte *)0x8000000000000000;
                      bVar13 = true;
                      bVar28 = true;
                      bVar14 = true;
                      goto LAB_10145b7f0;
                    }
                    pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
                    if (cVar7 == '\x16') {
                      pbStack_1d0 = pbVar19 + 1;
                      pbStack_120 = pbStack_518;
                      pbStack_1e8 = pbVar32;
                      pbStack_128 = pbVar34;
                      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                      goto LAB_10145c40c;
                    }
                    uVar17 = *puVar21;
                    puVar22[1] = puVar21[1];
                    *puVar22 = uVar17;
                    uVar17 = *(undefined8 *)((long)puVar21 + 0xf);
                    *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
                    *(undefined8 *)((long)puVar22 + 0xf) = uVar17;
                    uStack_98._1_7_ = (undefined7)((ulong)pbVar27 >> 8);
                    uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,cVar7);
                    FUN_1004aa788(&uStack_e0,&uStack_98);
                    pbStack_4d8 = uStack_e0;
                    if (uStack_e0 == (byte *)0x8000000000000005) {
                      pbStack_1d0 = pbVar19 + 1;
                      pbStack_330 = pbStack_d8;
                      pbStack_338 = (byte *)0x8000000000000000;
                      bVar13 = true;
                      bVar28 = true;
                      bVar14 = true;
                      pbStack_1e8 = pbVar32;
                      goto LAB_10145b7f8;
                    }
                    pbStack_518 = pbStack_d8;
                    uStack_110 = uStack_c8;
                    pbStack_118 = pbStack_d0;
                    uStack_100 = uStack_b8;
                    uStack_108 = uStack_c0;
                    uStack_f0 = uStack_a8;
                    uStack_f8 = uStack_b0;
                    uStack_e8 = uStack_a0;
                    pbVar34 = uStack_e0;
                  }
                  else {
                    if (bVar6 != 3) {
                      pbStack_1d0 = pbVar19 + 1;
                      pbStack_120 = pbStack_518;
                      uStack_98 = &UNK_108ca777e;
                      pbStack_90 = (byte *)0xc;
                      uStack_e0 = (byte *)&uStack_98;
                      pbStack_d8 = &DAT_100c7b3a0;
                      pbStack_1e8 = pbVar32;
                      pbStack_128 = pbVar34;
                      pbStack_330 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0
                                                         );
                      goto LAB_10145b7d8;
                    }
                    pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
                    if (cVar7 == '\x16') goto LAB_10145c200;
                    uVar17 = *puVar21;
                    puVar25[1] = puVar21[1];
                    *puVar25 = uVar17;
                    uVar17 = *(undefined8 *)((long)puVar21 + 0xf);
                    *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
                    *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
                    uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,cVar7);
                    FUN_101226150(&uStack_98,&uStack_e0);
                    if ((byte)uStack_98 == 1) goto LAB_10145b7bc;
                    bVar6 = uStack_98._1_1_;
                  }
                }
                else if (uStack_98._1_1_ == 5) {
                  if (bVar4 != 3) {
                    pbStack_1d0 = pbVar19 + 1;
                    pbStack_120 = pbStack_518;
                    uStack_98 = &UNK_108ca778a;
                    pbStack_90 = (byte *)0xf;
                    uStack_e0 = (byte *)&uStack_98;
                    pbStack_d8 = &DAT_100c7b3a0;
                    pbStack_1e8 = pbVar32;
                    pbStack_128 = pbVar34;
                    pbStack_330 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
                    goto LAB_10145b7d8;
                  }
                  pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
                  if (cVar7 == '\x16') goto LAB_10145c200;
                  uVar17 = *puVar21;
                  puVar25[1] = puVar21[1];
                  *puVar25 = uVar17;
                  uVar17 = *(undefined8 *)((long)puVar21 + 0xf);
                  *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
                  *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
                  uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,cVar7);
                  FUN_101226150(&uStack_98,&uStack_e0);
                  if ((byte)uStack_98 == 1) goto LAB_10145b7bc;
                  bVar4 = uStack_98._1_1_;
                }
                else {
                  pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
                  if (cVar7 == '\x16') {
LAB_10145c200:
                    pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
                    pbStack_1d0 = pbVar19 + 1;
                    pbStack_120 = pbStack_518;
                    pbStack_1e8 = pbVar32;
                    pbStack_128 = pbVar34;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_10145c40c;
                  }
                  uVar17 = *puVar21;
                  puVar25[1] = puVar21[1];
                  *puVar25 = uVar17;
                  uVar17 = *(undefined8 *)((long)puVar21 + 0xf);
                  *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
                  *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
                  uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,cVar7);
                  FUN_100e077ec(&uStack_e0);
                }
LAB_10145b0ac:
                pbVar19 = pbVar19 + 1;
                pbVar31 = (byte *)((lVar23 - 0x40U >> 6) + 1);
                pbVar33 = pbVar18;
                pbVar27 = pbVar32;
                if (pbVar32 == pbVar18) goto LAB_10145b5ec;
                goto LAB_10145b0c0;
              }
              if (uStack_98._1_1_ == 0) {
                if (pbStack_4e8 == (byte *)0x8000000000000001) {
                  pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
                  if (cVar7 == '\x16') {
                    pbStack_1d0 = pbVar19 + 1;
                    pbStack_120 = pbStack_518;
                    pbStack_1e8 = pbVar32;
                    pbStack_128 = pbVar34;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_10145c40c;
                  }
                  uVar17 = *puVar21;
                  puVar25[1] = puVar21[1];
                  *puVar25 = uVar17;
                  uVar17 = *(undefined8 *)((long)puVar21 + 0xf);
                  *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
                  *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
                  uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,cVar7);
                  FUN_1004b60cc(&uStack_98,&uStack_e0);
                  pbStack_4e8 = uStack_98;
                  if (uStack_98 != (byte *)0x8000000000000001) {
                    pbStack_540 = pbStack_88;
                    pbStack_530 = pbStack_90;
                    goto LAB_10145b0ac;
                  }
                  pbStack_1d0 = pbVar19 + 1;
                  pbStack_120 = pbStack_518;
                  pbStack_4e8 = (byte *)0x8000000000000001;
                  pbStack_330 = pbStack_90;
                  pbStack_1e8 = pbVar32;
                  pbStack_128 = pbVar34;
                }
                else {
                  pbStack_1d0 = pbVar19 + 1;
                  pbStack_120 = pbStack_518;
                  uStack_98 = &UNK_108ca776a;
                  pbStack_90 = (byte *)0x9;
                  uStack_e0 = (byte *)&uStack_98;
                  pbStack_d8 = &DAT_100c7b3a0;
                  pbStack_1e8 = pbVar32;
                  pbStack_128 = pbVar34;
                  pbStack_330 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
                }
              }
              else if (uStack_98._1_1_ == 1) {
                if (pbStack_4d0 != (byte *)0x8000000000000000) {
                  pbStack_1d0 = pbVar19 + 1;
                  pbStack_120 = pbStack_518;
                  uStack_98 = &UNK_108c61018;
                  pbStack_90 = (byte *)0x4;
                  uStack_e0 = (byte *)&uStack_98;
                  pbStack_d8 = &DAT_100c7b3a0;
                  pbStack_1e8 = pbVar32;
                  pbStack_128 = pbVar34;
                  pbStack_330 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
                  goto LAB_10145b7d8;
                }
                pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
                if (cVar7 == '\x16') {
                  pbStack_1d0 = pbVar19 + 1;
                  pbStack_120 = pbStack_518;
                  pbStack_1e8 = pbVar32;
                  pbStack_128 = pbVar34;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_10145c40c;
                }
                uVar17 = *puVar21;
                puVar25[1] = puVar21[1];
                *puVar25 = uVar17;
                uVar17 = *(undefined8 *)((long)puVar21 + 0xf);
                *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
                *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
                uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,cVar7);
                FUN_1004b62d4(&uStack_98,&uStack_e0);
                pbStack_4d0 = uStack_98;
                if (uStack_98 != (byte *)0x8000000000000000) {
                  pbStack_548 = pbStack_88;
                  pbStack_520 = pbStack_90;
                  goto LAB_10145b0ac;
                }
                pbStack_1d0 = pbVar19 + 1;
                pbStack_120 = pbStack_518;
                pbStack_4d0 = (byte *)0x0;
                pbStack_330 = pbStack_90;
                pbStack_1e8 = pbVar32;
                pbStack_128 = pbVar34;
              }
              else {
                if (pbStack_4f0 == (byte *)0x8000000000000000) {
                  pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
                  if (cVar7 != '\x16') {
                    uVar17 = *puVar21;
                    puVar25[1] = puVar21[1];
                    *puVar25 = uVar17;
                    uVar17 = *(undefined8 *)((long)puVar21 + 0xf);
                    *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
                    *(undefined8 *)((long)puVar25 + 0xf) = uVar17;
                    uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,cVar7);
                    FUN_1004b62d4(&uStack_98,&uStack_e0);
                    pbStack_4f0 = uStack_98;
                    if (uStack_98 != (byte *)0x8000000000000000) {
                      pbStack_550 = pbStack_88;
                      pbStack_528 = pbStack_90;
                      goto LAB_10145b0ac;
                    }
                    pbStack_1d0 = pbVar19 + 1;
                    pbStack_4f0 = (byte *)0x0;
                    bVar14 = true;
                    bVar28 = true;
                    bVar13 = true;
                    pbStack_338 = (byte *)0x8000000000000000;
                    pbStack_330 = pbStack_90;
                    pbStack_1e8 = pbVar32;
                    pbStack_128 = pbVar34;
                    pbStack_120 = pbStack_518;
                    goto joined_r0x00010145b7ec;
                  }
                  pbStack_1d0 = pbVar19 + 1;
                  pbStack_120 = pbStack_518;
                  pbStack_1e8 = pbVar32;
                  pbStack_128 = pbVar34;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_10145c40c;
                }
                pbStack_1d0 = pbVar19 + 1;
                pbStack_120 = pbStack_518;
                uStack_98 = &UNK_108ca155d;
                pbStack_90 = (byte *)0xb;
                uStack_e0 = (byte *)&uStack_98;
                pbStack_d8 = &DAT_100c7b3a0;
                pbStack_1e8 = pbVar32;
                pbStack_128 = pbVar34;
                pbStack_330 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
              }
            }
            else {
              if (bVar5 == 0xd) {
                FUN_100b42834(&uStack_98,pbStack_d8,pbStack_d0);
                goto LAB_10145b1bc;
              }
              if (bVar5 == 0xe) {
                FUN_100b424b0(&uStack_98,pbStack_d0,uStack_c8);
joined_r0x00010145b120:
                pbVar27 = uStack_98;
                if (pbVar10 != (byte *)0x0) {
                  _free(pbVar15);
                  pbVar27 = uStack_98;
                }
                goto joined_r0x00010145b188;
              }
              if (bVar5 == 0xf) {
                FUN_100b424b0(&uStack_98,pbStack_d8,pbStack_d0);
                goto LAB_10145b1bc;
              }
LAB_10145b4dc:
              pbStack_90 = (byte *)FUN_108855b04(&uStack_e0,auStack_71,&UNK_10b211600);
              uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,1);
LAB_10145b7bc:
              pbStack_1d0 = pbVar19 + 1;
              pbStack_120 = pbStack_518;
              pbStack_330 = pbStack_90;
              pbStack_1e8 = pbVar32;
              pbStack_128 = pbVar34;
            }
LAB_10145b7d8:
            pbStack_338 = (byte *)0x8000000000000000;
            bVar14 = true;
            bVar13 = true;
            bVar28 = true;
            goto joined_r0x00010145b7ec;
          }
          pbStack_4e8 = (byte *)0x8000000000000001;
          pbStack_128 = (byte *)0x8000000000000005;
          bVar13 = true;
          pbVar19 = (byte *)0x0;
          pbStack_4d8 = (byte *)0x8000000000000005;
          pbStack_4f0 = (byte *)0x0;
          goto LAB_10145b630;
        }
        pbVar19 = (byte *)FUN_108855b04(abStack_358,auStack_71,&UNK_10b20b140);
        goto LAB_10145c250;
      }
      goto LAB_10145c194;
    }
    pbStack_498 = (byte *)0x0;
    pbStack_490 = (byte *)0x8;
    pbStack_488 = (byte *)0x0;
    pbVar19 = pbVar3;
LAB_10145c194:
    pbVar34 = pbStack_488;
    pbVar27 = pbStack_490;
    pbVar18 = pbStack_498;
    pbStack_1b8 = pbStack_490;
    pbStack_1c0 = pbStack_498;
    pbStack_1b0 = pbStack_488;
    pbVar26 = pbVar19;
    if (pbStack_498 == (byte *)0x8000000000000000) {
LAB_10145c270:
      lVar29 = ((ulong)((long)pbVar1 - (long)pbVar26) >> 5) + 1;
      while (lVar29 = lVar29 + -1, pbVar19 = pbStack_1b8, pbVar1 = pbStack_1b8, lVar29 != 0) {
        FUN_100e077ec(pbVar26);
        pbVar26 = pbVar26 + 0x20;
      }
    }
    else {
      pbVar19 = (byte *)FUN_100fbc738(&pbStack_4c0);
      if (pbVar19 == (byte *)0x0) {
        param_1[1] = pbStack_1b8;
        *param_1 = pbStack_1c0;
        param_1[2] = pbStack_1b0;
        return;
      }
      pbStack_1b8 = pbVar19;
      FUN_100e40160(pbVar27,pbVar34);
      pbVar3 = pbVar27;
      pbVar1 = pbStack_1b8;
      pbVar2 = pbVar18;
    }
    pbStack_1b8 = pbVar19;
    if (pbVar2 != (byte *)0x0) {
      pbStack_1b8 = pbVar1;
      _free(pbVar3);
    }
  }
  else {
    pbStack_1b8 = (byte *)FUN_108855b04(param_2,auStack_71,&UNK_10b20a520);
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = pbStack_1b8;
  return;
LAB_10145b5ec:
  pbStack_120 = pbStack_518;
  bVar13 = pbStack_4e8 == (byte *)0x8000000000000001;
  pbVar19 = (byte *)0x8000000000000000;
  if (!bVar13) {
    pbVar19 = pbStack_4e8;
  }
  pbStack_1e8 = pbVar33;
  pbStack_1d0 = pbVar31;
  pbStack_128 = pbVar34;
  if (pbStack_4d0 == (byte *)0x8000000000000000) {
LAB_10145b630:
    uStack_98 = &UNK_108c61018;
    pbStack_90 = (byte *)0x4;
    uStack_e0 = (byte *)&uStack_98;
    pbStack_d8 = &DAT_100c7b3a0;
    pbStack_330 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_e0);
    pbStack_4d0 = (byte *)0x0;
    pbStack_338 = (byte *)0x8000000000000000;
    bVar28 = true;
    bVar14 = true;
  }
  else {
    bVar14 = pbStack_4f0 == (byte *)0x8000000000000000;
    if (bVar14) {
      uStack_98 = &UNK_108ca155d;
      pbStack_90 = (byte *)0xb;
      uStack_e0 = (byte *)&uStack_98;
      pbStack_d8 = &DAT_100c7b3a0;
      pbStack_330 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_e0);
      pbStack_338 = (byte *)0x8000000000000000;
    }
    else {
      if (pbStack_4d8 != (byte *)0x8000000000000005) {
        uStack_2d8 = uStack_110;
        pbStack_2e0 = pbStack_118;
        uStack_2c8 = uStack_100;
        uStack_2d0 = uStack_108;
        uStack_2b8 = uStack_f0;
        uStack_2c0 = uStack_f8;
        uStack_2b0 = uStack_e8;
        bStack_2a8 = 2;
        if (bVar6 != 3) {
          bStack_2a8 = bVar6;
        }
        bStack_2a7 = 2;
        if (bVar4 != 3) {
          bStack_2a7 = bVar4;
        }
        pbStack_338 = pbStack_4d0;
        pbStack_330 = pbStack_520;
        pbStack_328 = pbStack_548;
        pbStack_320 = pbStack_4f0;
        pbStack_318 = pbStack_528;
        pbStack_310 = pbStack_550;
        pbStack_300 = pbStack_530;
        pbStack_2f8 = pbStack_540;
        pbStack_2f0 = pbStack_4d8;
        pbStack_2e8 = pbStack_518;
        pbStack_1b8 = pbStack_520;
        pbStack_1c0 = pbStack_4d0;
        pbStack_1a8 = pbStack_4f0;
        pbStack_1b0 = pbStack_548;
        uStack_158 = uStack_108;
        uStack_160 = uStack_110;
        uStack_148 = uStack_f8;
        uStack_150 = uStack_100;
        uStack_138 = uStack_e8;
        uStack_140 = uStack_f0;
        uStack_130 = CONCAT62(uStack_2a6,CONCAT11(bStack_2a7,bStack_2a8));
        pbStack_178 = pbStack_4d8;
        pbStack_180 = pbStack_540;
        pbStack_168 = pbStack_118;
        pbStack_170 = pbStack_518;
        pbStack_198 = pbStack_550;
        pbStack_1a0 = pbStack_528;
        pbStack_188 = pbStack_530;
        pbStack_308 = pbVar19;
        pbStack_190 = pbVar19;
        FUN_100d34830(&pbStack_1f0);
        if (pbVar18 != pbVar33) {
          uStack_e0 = pbVar31;
          pbStack_330 = (byte *)FUN_1087e422c(pbVar31 + ((ulong)((long)pbVar18 - (long)pbVar33) >> 6
                                                        ),&uStack_e0,&UNK_10b23a190);
          pbStack_338 = (byte *)0x8000000000000000;
          if ((pbStack_190 != (byte *)0x8000000000000000) && (pbStack_190 != (byte *)0x0)) {
            _free(pbStack_188);
          }
          if (pbStack_1c0 != (byte *)0x0) {
            _free(pbStack_1b8);
          }
          if (pbStack_1a8 != (byte *)0x0) {
            _free(pbStack_1a0);
          }
          FUN_100de6690(&pbStack_178);
        }
        goto LAB_10145b868;
      }
      uStack_98 = &UNK_108ca7773;
      pbStack_90 = (byte *)0xb;
      uStack_e0 = (byte *)&uStack_98;
      pbStack_d8 = &DAT_100c7b3a0;
      pbStack_330 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_e0);
      pbStack_338 = (byte *)0x8000000000000000;
      if (pbStack_4f0 != (byte *)0x0) {
        _free(pbStack_528);
      }
    }
    if (pbStack_4d0 == (byte *)0x0) {
      bVar28 = false;
      pbStack_4d0 = (byte *)0x0;
    }
    else {
      _free(pbStack_520);
      bVar28 = false;
    }
  }
  if (((ulong)pbVar19 & 0x7fffffffffffffff) != 0) {
    _free(pbStack_530);
  }
joined_r0x00010145b7ec:
  if (pbStack_4d8 != (byte *)0x8000000000000005) {
LAB_10145b7f0:
    FUN_100de6690(&pbStack_128);
  }
LAB_10145b7f8:
  if ((((ulong)pbStack_4f0 & 0x7fffffffffffffff) != 0) && (bVar14)) {
    _free(pbStack_528);
  }
  bVar14 = false;
  if (((ulong)pbStack_4d0 & 0x7fffffffffffffff) != 0) {
    bVar14 = bVar28;
  }
  if (bVar14) {
    _free(pbStack_520);
  }
  bVar14 = false;
  if (pbStack_4e8 != (byte *)0x8000000000000001) {
    bVar14 = bVar13;
  }
  if ((bVar14) && (((ulong)pbStack_4e8 & 0x7fffffffffffffff) != 0)) {
    _free(pbStack_530);
  }
  FUN_100d34830(&pbStack_1f0);
  if ((char)pbStack_210 != '\x16') {
    FUN_100e077ec(&pbStack_210);
  }
LAB_10145b868:
  if ((bVar24 & 0x1e) != 0x14) {
    FUN_100e077ec(abStack_358);
  }
  pbVar18 = pbStack_488;
  pbVar19 = pbStack_330;
  if (pbStack_338 != (byte *)0x8000000000000000) {
    pbStack_278 = pbStack_318;
    pbStack_280 = pbStack_320;
    pbStack_270 = pbStack_310;
    pbStack_298 = pbStack_300;
    pbStack_2a0 = pbStack_308;
    pbStack_290 = pbStack_2f8;
    uStack_248 = uStack_2d8;
    pbStack_250 = pbStack_2e0;
    uStack_238 = uStack_2c8;
    uStack_240 = uStack_2d0;
    uStack_228 = uStack_2b8;
    uStack_230 = uStack_2c0;
    uStack_220 = uStack_2b0;
    pbStack_258 = pbStack_2e8;
    pbStack_260 = pbStack_2f0;
    bVar24 = bStack_2a8;
    if (bStack_2a8 == 2) {
      if (bStack_2a7 == 2) {
        bVar24 = 0;
      }
      else {
        bVar24 = bStack_2a7 ^ 1;
      }
    }
    pbStack_408 = pbStack_318;
    pbStack_410 = pbStack_320;
    pbStack_400 = pbStack_310;
    pbStack_428 = pbStack_300;
    pbStack_430 = pbStack_308;
    pbStack_420 = pbStack_2f8;
    uStack_458 = uStack_2c8;
    uStack_460 = uStack_2d0;
    uStack_448 = uStack_2b8;
    uStack_450 = uStack_2c0;
    uStack_440 = uStack_2b0;
    pbStack_478 = pbStack_2e8;
    pbStack_480 = pbStack_2f0;
    uStack_468 = uStack_2d8;
    pbStack_470 = pbStack_2e0;
    if (pbStack_338 != (byte *)0x8000000000000001) {
      pbStack_3d0 = pbStack_318;
      pbStack_3d8 = pbStack_320;
      pbStack_3b8 = pbStack_300;
      pbStack_3c0 = pbStack_308;
      pbStack_3a0 = pbStack_2e8;
      pbStack_3a8 = pbStack_2f0;
      uStack_390 = uStack_2d8;
      pbStack_398 = pbStack_2e0;
      uStack_380 = uStack_2c8;
      uStack_388 = uStack_2d0;
      uStack_370 = uStack_2b8;
      uStack_378 = uStack_2c0;
      bStack_360 = bVar24 & 1;
      pbStack_3f0 = pbStack_338;
      pbStack_3e8 = pbStack_330;
      pbStack_3e0 = pbStack_328;
      pbStack_3c8 = pbStack_310;
      pbStack_3b0 = pbStack_2f8;
      uStack_368 = uStack_2b0;
      if (pbStack_488 == pbStack_498) {
        func_0x0001088bb0ec(&pbStack_498);
      }
      pbVar19 = pbStack_490 + (long)pbVar18 * 0x98;
      *(undefined8 *)(pbVar19 + 0x68) = uStack_388;
      *(undefined8 *)(pbVar19 + 0x60) = uStack_390;
      *(undefined8 *)(pbVar19 + 0x78) = uStack_378;
      *(undefined8 *)(pbVar19 + 0x70) = uStack_380;
      *(undefined8 *)(pbVar19 + 0x88) = uStack_368;
      *(undefined8 *)(pbVar19 + 0x80) = uStack_370;
      *(ulong *)(pbVar19 + 0x90) = CONCAT71(uStack_35f,bStack_360);
      *(byte **)(pbVar19 + 0x28) = pbStack_3c8;
      *(byte **)(pbVar19 + 0x20) = pbStack_3d0;
      *(byte **)(pbVar19 + 0x38) = pbStack_3b8;
      *(byte **)(pbVar19 + 0x30) = pbStack_3c0;
      *(byte **)(pbVar19 + 0x48) = pbStack_3a8;
      *(byte **)(pbVar19 + 0x40) = pbStack_3b0;
      *(byte **)(pbVar19 + 0x58) = pbStack_398;
      *(byte **)(pbVar19 + 0x50) = pbStack_3a0;
      *(byte **)(pbVar19 + 8) = pbStack_3e8;
      *(byte **)pbVar19 = pbStack_3f0;
      *(byte **)(pbVar19 + 0x18) = pbStack_3d8;
      *(byte **)(pbVar19 + 0x10) = pbStack_3e0;
      pbStack_488 = pbVar18 + 1;
      pbVar19 = pbVar1;
      pbVar27 = pbVar26;
      if (pbVar26 == pbVar1) goto LAB_10145c194;
      goto LAB_10145af30;
    }
  }
LAB_10145c250:
  pbVar18 = pbStack_490;
  pbStack_1b8 = pbVar19;
  FUN_100e40160(pbStack_490,pbStack_488);
  if (pbStack_498 != (byte *)0x0) {
    _free(pbVar18);
  }
  goto LAB_10145c270;
}

