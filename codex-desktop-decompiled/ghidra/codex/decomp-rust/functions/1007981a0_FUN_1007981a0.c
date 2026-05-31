
/* WARNING: Type propagation algorithm not settling */

void FUN_1007981a0(long *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte bVar9;
  undefined8 *puVar10;
  long lVar11;
  byte *pbVar12;
  byte *unaff_x24;
  undefined8 *puVar13;
  undefined1 uVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  byte *pbStack_380;
  byte *pbStack_378;
  byte *pbStack_370;
  byte *pbStack_368;
  byte *pbStack_360;
  byte *pbStack_358;
  byte *pbStack_338;
  byte bStack_330;
  byte bStack_32f;
  undefined6 uStack_32e;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  byte *pbStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  byte *pbStack_2f0;
  byte *pbStack_2e8;
  byte *pbStack_2e0;
  byte *pbStack_2d8;
  byte *pbStack_2d0;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  byte *pbStack_2a8;
  byte *pbStack_2a0;
  byte *pbStack_298;
  long lStack_290;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1c8;
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
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  long lStack_80;
  undefined1 auStack_71 [17];
  
  bVar2 = *param_2;
  if (bVar2 != 0x14) {
    if (bVar2 != 0x15) {
      lVar11 = thunk_FUN_108855b04(param_2,auStack_71,&UNK_10b20a9e0);
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar11;
      return;
    }
    pbStack_2a0 = *(byte **)(param_2 + 8);
    pbStack_2b0 = *(byte **)(param_2 + 0x10);
    pbStack_298 = pbStack_2b0 + *(long *)(param_2 + 0x18) * 0x40;
    pbStack_2d0 = (byte *)CONCAT71(pbStack_2d0._1_7_,0x16);
    lStack_290 = 0;
    uStack_1c8 = (byte *)0x8000000000000000;
    pbStack_1b0 = (byte *)0x8000000000000006;
    pbStack_168 = (byte *)0x8000000000000006;
    if (*(long *)(param_2 + 0x18) == 0) {
      pbStack_168 = (byte *)0x8000000000000006;
      pbStack_1b0 = (byte *)0x8000000000000006;
      pbVar12 = (byte *)0x8000000000000006;
      pbStack_338 = (byte *)0x8000000000000006;
      uStack_1c8 = (byte *)0x8000000000000000;
      pbStack_378 = unaff_x24;
      pbStack_2a8 = pbStack_2b0;
    }
    else {
      bVar9 = *pbStack_2b0;
      pbStack_2a8 = pbStack_2b0 + 0x40;
      if (bVar9 == 0x16) {
        cVar4 = '\x03';
        pbVar16 = (byte *)0x8000000000000000;
        pbVar12 = (byte *)0x8000000000000006;
        pbStack_338 = (byte *)0x8000000000000006;
        pbVar18 = (byte *)0x8000000000000006;
        pbStack_358 = (byte *)0x8000000000000006;
        pbStack_360 = (byte *)0x8000000000000000;
        pbVar6 = pbStack_2b0;
      }
      else {
        puVar15 = (undefined8 *)((ulong)&uStack_98 | 1);
        puVar13 = (undefined8 *)((ulong)&pbStack_2d0 | 1);
        puVar10 = (undefined8 *)((ulong)&bStack_330 | 1);
        cVar4 = '\x03';
        pbStack_360 = (byte *)0x8000000000000000;
        pbStack_358 = (byte *)0x8000000000000006;
        pbVar18 = (byte *)0x8000000000000006;
        pbStack_338 = (byte *)0x8000000000000006;
        pbVar12 = (byte *)0x8000000000000006;
        pbVar16 = (byte *)0x8000000000000000;
        pbVar6 = pbStack_2b0;
        do {
          lStack_290 = lStack_290 + 1;
          uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,bVar9);
          uVar7 = *(undefined8 *)(pbVar6 + 1);
          puVar15[1] = *(undefined8 *)(pbVar6 + 9);
          *puVar15 = uVar7;
          lVar11 = *(long *)(pbVar6 + 0x10);
          lVar20 = *(long *)(pbVar6 + 0x28);
          lVar19 = *(long *)(pbVar6 + 0x20);
          *(long *)((long)puVar15 + 0x17) = *(long *)(pbVar6 + 0x18);
          *(long *)((long)puVar15 + 0xf) = lVar11;
          pbStack_318 = *(byte **)(pbVar6 + 0x38);
          uStack_328 = (undefined1)lVar20;
          uStack_327 = (undefined7)((ulong)lVar20 >> 8);
          bStack_330 = (byte)lVar19;
          bStack_32f = (byte)((ulong)lVar19 >> 8);
          uStack_32e = (undefined6)((ulong)lVar19 >> 0x10);
          uStack_320 = (undefined1)*(long *)(pbVar6 + 0x30);
          uStack_31f = (undefined7)((ulong)*(long *)(pbVar6 + 0x30) >> 8);
          if ((byte)pbStack_2d0 != '\x16') {
            FUN_100e077ec(&pbStack_2d0);
          }
          pbVar8 = pbStack_88;
          pbVar6 = pbStack_90;
          pbStack_2c8 = (byte *)CONCAT71(uStack_327,uStack_328);
          pbStack_2d0 = (byte *)CONCAT62(uStack_32e,CONCAT11(bStack_32f,bStack_330));
          pbStack_2c0 = (byte *)CONCAT71(uStack_31f,uStack_320);
          pbStack_2b8 = pbStack_318;
          if (0xc < bVar9) {
            if (bVar9 == 0xd) {
              if (pbStack_88 == (byte *)0x5) {
                if (*(int *)pbStack_90 == 0x74656d5f && pbStack_90[4] == 0x61) {
                  bStack_32f = 3;
                  goto LAB_100798784;
                }
              }
              else if (pbStack_88 == (byte *)0x11) {
                if ((*(long *)pbStack_90 == 0x7275746375727473 &&
                    *(long *)(pbStack_90 + 8) == 0x6e65746e6f436465) && pbStack_90[0x10] == 0x74) {
                  bStack_32f = 1;
                  goto LAB_100798784;
                }
              }
              else if (pbStack_88 == (byte *)0x7) {
                if (*(int *)pbStack_90 == 0x746e6f63 && *(int *)(pbStack_90 + 3) == 0x746e6574) {
                  bStack_32f = 0;
                }
                else {
                  if (*(int *)pbStack_90 != 0x72457369 || *(int *)(pbStack_90 + 3) != 0x726f7272)
                  goto LAB_10079877c;
                  bStack_32f = 2;
                }
                goto LAB_100798784;
              }
LAB_10079877c:
              bStack_32f = 4;
              goto LAB_100798784;
            }
            if (bVar9 == 0xe) {
              FUN_100a64ff8(&bStack_330,pbStack_88);
joined_r0x000100798700:
              pbVar17 = pbStack_2d0;
              if (pbVar6 != (byte *)0x0) {
                _free(pbVar8);
                pbVar17 = pbStack_2d0;
              }
              goto joined_r0x000100798710;
            }
            if (bVar9 == 0xf) {
              FUN_100a64ff8(&bStack_330,pbStack_90,pbStack_88);
              goto LAB_100798788;
            }
LAB_1007989bc:
            uVar7 = thunk_FUN_108855b04(&uStack_98,auStack_71,&UNK_10b212360);
            uStack_328 = (undefined1)uVar7;
            uStack_327 = (undefined7)((ulong)uVar7 >> 8);
            bStack_330 = 1;
LAB_100798a04:
            pbVar6 = (byte *)CONCAT71(uStack_327,uStack_328);
LAB_100798a08:
            pbStack_160 = pbStack_380;
            pbStack_1a8 = pbStack_370;
            pbStack_1b0 = pbStack_358;
            pbStack_1b8 = pbStack_368;
            pbStack_1c0 = pbStack_378;
            uStack_1c8 = pbStack_360;
            pbStack_168 = pbVar18;
            goto LAB_100798410;
          }
          if (bVar9 == 1) {
            bStack_32f = uStack_98._1_1_;
            if (3 < uStack_98._1_1_) {
              bStack_32f = 4;
            }
          }
          else {
            if (bVar9 != 4) {
              if (bVar9 != 0xc) goto LAB_1007989bc;
              if (lStack_80 == 5) {
                if (*(int *)pbStack_88 == 0x74656d5f && pbStack_88[4] == 0x61) {
                  bStack_32f = 3;
                  goto LAB_1007986f8;
                }
LAB_1007986f4:
                bStack_32f = 4;
              }
              else {
                if (lStack_80 == 0x11) {
                  if ((*(long *)pbStack_88 == 0x7275746375727473 &&
                      *(long *)(pbStack_88 + 8) == 0x6e65746e6f436465) && pbStack_88[0x10] == 0x74)
                  {
                    bStack_32f = 1;
                    goto LAB_1007986f8;
                  }
                  goto LAB_1007986f4;
                }
                if (lStack_80 != 7) goto LAB_1007986f4;
                if (*(int *)pbStack_88 == 0x746e6f63 && *(int *)(pbStack_88 + 3) == 0x746e6574) {
                  bStack_32f = 0;
                }
                else {
                  if (*(int *)pbStack_88 != 0x72457369 || *(int *)(pbStack_88 + 3) != 0x726f7272)
                  goto LAB_1007986f4;
                  bStack_32f = 2;
                }
              }
LAB_1007986f8:
              bStack_330 = 0;
              goto joined_r0x000100798700;
            }
            if ((byte *)0x3 < pbStack_90) {
              pbVar6 = (byte *)0x4;
            }
            bStack_32f = (byte)pbVar6;
          }
LAB_100798784:
          bStack_330 = 0;
LAB_100798788:
          FUN_100e077ec(&uStack_98);
          pbVar17 = pbStack_2d0;
joined_r0x000100798710:
          pbStack_2d0 = pbVar17;
          if ((bStack_330 & 1) != 0) goto LAB_100798a04;
          pbStack_2d0._0_1_ = (byte)pbVar17;
          bVar9 = (byte)pbStack_2d0;
          pbStack_2d0._1_7_ = (undefined7)((ulong)pbVar17 >> 8);
          if (bStack_32f < 2) {
            if (bStack_32f == 0) {
              if (pbVar16 != (byte *)0x8000000000000000) {
                pbStack_160 = pbStack_380;
                pbStack_1a8 = pbStack_370;
                pbStack_1b8 = pbStack_368;
                pbStack_1b0 = pbStack_358;
                uStack_1c8 = pbStack_360;
                pbStack_1c0 = pbStack_378;
                uStack_98 = &UNK_108ca1095;
                pbStack_90 = (byte *)0x7;
                bStack_330 = (byte)&uStack_98;
                bStack_32f = (byte)((ulong)&uStack_98 >> 8);
                uStack_32e = (undefined6)((ulong)&uStack_98 >> 0x10);
                uStack_328 = 0xa0;
                uStack_327 = 0x100c7b3;
                pbStack_168 = pbVar18;
                pbVar6 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_330);
                goto LAB_100798410;
              }
              pbStack_2d0 = (byte *)CONCAT71(pbStack_2d0._1_7_,0x16);
              if (bVar9 == 0x16) {
                pbStack_160 = pbStack_380;
                pbStack_1a8 = pbStack_370;
                pbStack_1b8 = pbStack_368;
                pbStack_1b0 = pbStack_358;
                uStack_1c8 = pbStack_360;
                pbStack_1c0 = pbStack_378;
                pbStack_168 = pbVar18;
                FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_1007990b4;
              }
              uVar7 = *puVar13;
              puVar10[1] = puVar13[1];
              *puVar10 = uVar7;
              uVar7 = *(undefined8 *)((long)puVar13 + 0xf);
              *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
              *(undefined8 *)((long)puVar10 + 0xf) = uVar7;
              bStack_330 = bVar9;
              FUN_10132fb4c(&uStack_98,&bStack_330);
              if (uStack_98 == (byte *)0x8000000000000000) {
                pbVar16 = (byte *)0x8000000000000000;
                pbVar6 = pbStack_90;
                goto LAB_100798a08;
              }
              pbStack_378 = pbStack_90;
              pbStack_368 = pbStack_88;
              pbStack_360 = uStack_98;
              pbVar16 = uStack_98;
            }
            else {
              if (pbVar12 != (byte *)0x8000000000000006) {
                pbStack_160 = pbStack_380;
                pbStack_1a8 = pbStack_370;
                pbStack_1b8 = pbStack_368;
                pbStack_1b0 = pbStack_358;
                uStack_1c8 = pbStack_360;
                pbStack_1c0 = pbStack_378;
                uStack_98 = &UNK_108cadf7d;
                pbStack_90 = (byte *)0x11;
                bStack_330 = (byte)&uStack_98;
                bStack_32f = (byte)((ulong)&uStack_98 >> 8);
                uStack_32e = (undefined6)((ulong)&uStack_98 >> 0x10);
                uStack_328 = 0xa0;
                uStack_327 = 0x100c7b3;
                pbStack_168 = pbVar18;
                pbVar6 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_330);
                goto LAB_100798410;
              }
              func_0x000100f1e618(&bStack_330,&pbStack_2d0);
              pbVar12 = (byte *)CONCAT62(uStack_32e,CONCAT11(bStack_32f,bStack_330));
              if (pbVar12 == (byte *)0x8000000000000006) {
                pbVar12 = (byte *)0x8000000000000006;
                goto LAB_100798a04;
              }
              pbStack_370 = (byte *)CONCAT71(uStack_327,uStack_328);
              pbStack_1a0 = (byte *)CONCAT71(uStack_31f,uStack_320);
              pbStack_198 = pbStack_318;
              pbStack_188 = pbStack_308;
              pbStack_190 = pbStack_310;
              pbStack_178 = pbStack_2f8;
              pbStack_180 = pbStack_300;
              pbStack_170 = pbStack_2f0;
              pbStack_358 = pbVar12;
            }
          }
          else {
            if (bStack_32f == 2) {
              if (cVar4 == '\x03') {
                pbStack_2d0 = (byte *)CONCAT71(pbStack_2d0._1_7_,0x16);
                if (bVar9 == 0x16) {
LAB_100798e84:
                  pbStack_2d0 = (byte *)CONCAT71(pbStack_2d0._1_7_,0x16);
                  pbStack_160 = pbStack_380;
                  pbStack_1a8 = pbStack_370;
                  pbStack_1b8 = pbStack_368;
                  pbStack_1b0 = pbStack_358;
                  uStack_1c8 = pbStack_360;
                  pbStack_1c0 = pbStack_378;
                  pbStack_168 = pbVar18;
                  FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1007990b4:
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1007990b8);
                  (*pcVar5)();
                }
                uVar7 = *puVar13;
                puVar10[1] = puVar13[1];
                *puVar10 = uVar7;
                uVar7 = *(undefined8 *)((long)puVar13 + 0xf);
                *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
                *(undefined8 *)((long)puVar10 + 0xf) = uVar7;
                bStack_330 = bVar9;
                FUN_101226150(&uStack_98,&bStack_330);
                pbVar6 = pbStack_90;
                if ((char)uStack_98 != '\x01') {
                  cVar4 = uStack_98._1_1_;
                  goto LAB_100798974;
                }
                goto LAB_100798a08;
              }
              pbStack_160 = pbStack_380;
              pbStack_1a8 = pbStack_370;
              pbStack_1b8 = pbStack_368;
              pbStack_1b0 = pbStack_358;
              uStack_1c8 = pbStack_360;
              pbStack_1c0 = pbStack_378;
              uStack_98 = &UNK_108cadf8e;
              pbStack_90 = (byte *)0x7;
              bStack_330 = (byte)&uStack_98;
              bStack_32f = (byte)((ulong)&uStack_98 >> 8);
              uStack_32e = (undefined6)((ulong)&uStack_98 >> 0x10);
              uStack_328 = 0xa0;
              uStack_327 = 0x100c7b3;
              pbStack_168 = pbVar18;
              pbVar6 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_330);
              goto LAB_100798410;
            }
            if (bStack_32f != 3) {
              pbStack_2d0 = (byte *)CONCAT71(pbStack_2d0._1_7_,0x16);
              if (bVar9 == 0x16) goto LAB_100798e84;
              uVar7 = *puVar13;
              puVar10[1] = puVar13[1];
              *puVar10 = uVar7;
              uVar7 = *(undefined8 *)((long)puVar13 + 0xf);
              *(undefined8 *)((long)puVar10 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
              *(undefined8 *)((long)puVar10 + 0xf) = uVar7;
              bStack_330 = bVar9;
              FUN_100e077ec(&bStack_330);
              goto LAB_100798974;
            }
            if (pbStack_338 != (byte *)0x8000000000000006) {
              pbStack_160 = pbStack_380;
              pbStack_1a8 = pbStack_370;
              pbStack_1b8 = pbStack_368;
              pbStack_1b0 = pbStack_358;
              uStack_1c8 = pbStack_360;
              pbStack_1c0 = pbStack_378;
              uStack_98 = &UNK_108cadf95;
              pbStack_90 = (byte *)0x5;
              bStack_330 = (byte)&uStack_98;
              bStack_32f = (byte)((ulong)&uStack_98 >> 8);
              uStack_32e = (undefined6)((ulong)&uStack_98 >> 0x10);
              uStack_328 = 0xa0;
              uStack_327 = 0x100c7b3;
              pbStack_168 = pbVar18;
              pbVar6 = (byte *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&bStack_330);
              goto LAB_100798410;
            }
            func_0x000100f1e618(&bStack_330,&pbStack_2d0);
            pbVar18 = (byte *)CONCAT62(uStack_32e,CONCAT11(bStack_32f,bStack_330));
            if (pbVar18 == (byte *)0x8000000000000006) {
              *param_1 = -0x8000000000000000;
              param_1[1] = CONCAT71(uStack_327,uStack_328);
              pbStack_1a8 = pbStack_370;
              pbStack_1b8 = pbStack_368;
              uStack_1c8 = pbStack_360;
              pbStack_1b0 = pbStack_358;
              pbStack_1c0 = pbStack_378;
              goto joined_r0x000100798d34;
            }
            pbStack_380 = (byte *)CONCAT71(uStack_327,uStack_328);
            pbStack_158 = (byte *)CONCAT71(uStack_31f,uStack_320);
            pbStack_150 = pbStack_318;
            pbStack_140 = pbStack_308;
            pbStack_148 = pbStack_310;
            pbStack_130 = pbStack_2f8;
            pbStack_138 = pbStack_300;
            pbStack_128 = pbStack_2f0;
            pbStack_338 = pbVar18;
          }
LAB_100798974:
          pbVar6 = pbStack_298;
          if (pbStack_2a8 == pbStack_298) goto LAB_100798270;
          pbVar8 = pbStack_2a8 + 0x40;
          bVar9 = *pbStack_2a8;
          pbVar6 = pbStack_2a8;
          pbStack_2a8 = pbVar8;
        } while (bVar9 != 0x16);
      }
      pbVar6 = pbVar6 + 0x40;
LAB_100798270:
      pbVar8 = pbStack_298;
      pbStack_160 = pbStack_380;
      pbStack_1a8 = pbStack_370;
      pbStack_1b8 = pbStack_368;
      pbStack_1b0 = pbStack_358;
      uStack_1c8 = pbStack_360;
      pbStack_1c0 = pbStack_378;
      pbStack_168 = pbVar18;
      if (pbVar16 != (byte *)0x8000000000000000) {
        pbVar18 = (byte *)0x8000000000000005;
        if (pbVar12 != (byte *)0x8000000000000006) {
          pbStack_118 = pbStack_1a0;
          pbStack_120 = pbStack_370;
          pbStack_108 = pbStack_190;
          pbStack_110 = pbStack_198;
          pbStack_f8 = pbStack_180;
          pbStack_100 = pbStack_188;
          pbStack_e8 = pbStack_170;
          pbStack_f0 = pbStack_178;
          pbVar18 = pbVar12;
        }
        cVar1 = '\x02';
        if (cVar4 != '\x03') {
          cVar1 = cVar4;
        }
        pbVar12 = (byte *)0x8000000000000005;
        if (pbStack_338 != (byte *)0x8000000000000006) {
          pbStack_d8 = pbStack_158;
          pbStack_e0 = pbStack_380;
          pbStack_c8 = pbStack_148;
          pbStack_d0 = pbStack_150;
          pbStack_b8 = pbStack_138;
          pbStack_c0 = pbStack_140;
          pbStack_a8 = pbStack_128;
          pbStack_b0 = pbStack_130;
          pbVar12 = pbStack_338;
        }
        *param_1 = (long)pbVar16;
        param_1[1] = (long)pbStack_378;
        param_1[2] = (long)pbStack_368;
        param_1[3] = (long)pbVar18;
        param_1[5] = (long)pbStack_118;
        param_1[4] = (long)pbStack_120;
        param_1[7] = (long)pbStack_108;
        param_1[6] = (long)pbStack_110;
        param_1[9] = (long)pbStack_f8;
        param_1[8] = (long)pbStack_100;
        param_1[0xb] = (long)pbStack_e8;
        param_1[10] = (long)pbStack_f0;
        param_1[0xc] = (long)pbVar12;
        param_1[0xe] = (long)pbStack_d8;
        param_1[0xd] = (long)pbStack_e0;
        param_1[0x10] = (long)pbStack_c8;
        param_1[0xf] = (long)pbStack_d0;
        param_1[0x12] = (long)pbStack_b8;
        param_1[0x11] = (long)pbStack_c0;
        param_1[0x14] = (long)pbStack_a8;
        param_1[0x13] = (long)pbStack_b0;
        *(char *)(param_1 + 0x15) = cVar1;
        lStack_1e8 = param_1[0x13];
        lStack_1f0 = param_1[0x12];
        lStack_1d8 = param_1[0x15];
        lStack_1e0 = param_1[0x14];
        lStack_208 = param_1[0xf];
        lStack_210 = param_1[0xe];
        lStack_1f8 = param_1[0x11];
        lStack_200 = param_1[0x10];
        lStack_228 = param_1[0xb];
        lStack_230 = param_1[10];
        lStack_218 = param_1[0xd];
        lStack_220 = param_1[0xc];
        lStack_248 = param_1[7];
        lStack_250 = param_1[6];
        lStack_238 = param_1[9];
        lStack_240 = param_1[8];
        lStack_268 = param_1[3];
        lStack_270 = param_1[2];
        lStack_258 = param_1[5];
        lStack_260 = param_1[4];
        lStack_278 = param_1[1];
        lStack_280 = *param_1;
        FUN_100d34830(&pbStack_2b0);
        if (pbVar8 == pbVar6) {
          lVar11 = 0;
        }
        else {
          bStack_330 = (byte)lStack_290;
          bStack_32f = (byte)((ulong)lStack_290 >> 8);
          uStack_32e = (undefined6)((ulong)lStack_290 >> 0x10);
          lVar11 = thunk_FUN_1087e422c(lStack_290 + ((ulong)((long)pbVar8 - (long)pbVar6) >> 6),
                                       &bStack_330,&UNK_10b23a190);
        }
        if ((byte)pbStack_2d0 != '\x16') {
          FUN_100e077ec(&pbStack_2d0);
        }
        if (lVar11 != 0) {
          *param_1 = -0x8000000000000000;
          param_1[1] = lVar11;
          func_0x000100e00868(&lStack_280);
        }
        goto LAB_100798b38;
      }
    }
    uStack_98 = &UNK_108ca1095;
    pbStack_90 = (byte *)0x7;
    bStack_330 = (byte)&uStack_98;
    bStack_32f = (byte)((ulong)&uStack_98 >> 8);
    uStack_32e = (undefined6)((ulong)&uStack_98 >> 0x10);
    uStack_328 = 0xa0;
    uStack_327 = 0x100c7b3;
    pbVar16 = (byte *)0x8000000000000000;
    pbVar6 = (byte *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&bStack_330);
LAB_100798410:
    *param_1 = -0x8000000000000000;
    param_1[1] = (long)pbVar6;
    if ((byte *)0x1 < pbStack_338 + 0x7ffffffffffffffb) {
      FUN_100de6690(&pbStack_168);
    }
joined_r0x000100798d34:
    if ((byte *)0x1 < pbVar12 + 0x7ffffffffffffffb) {
      FUN_100de6690(&pbStack_1b0);
    }
    if (pbVar16 != (byte *)0x8000000000000000) {
      pbVar12 = pbStack_368 + 1;
      pbVar18 = pbStack_378;
      while (pbVar12 = pbVar12 + -1, pbVar12 != (byte *)0x0) {
        FUN_100de6690(pbVar18);
        pbVar18 = pbVar18 + 0x48;
      }
      if (pbVar16 != (byte *)0x0) {
        _free(pbStack_378);
      }
    }
    FUN_100d34830(&pbStack_2b0);
    if ((byte)pbStack_2d0 != '\x16') {
      FUN_100e077ec(&pbStack_2d0);
    }
    goto LAB_100798b38;
  }
  pbStack_110 = *(byte **)(param_2 + 8);
  pbStack_120 = *(byte **)(param_2 + 0x10);
  pbVar12 = pbStack_120 + *(long *)(param_2 + 0x18) * 0x20;
  pbStack_100 = (byte *)0x0;
  pbVar18 = pbStack_120;
  pbStack_108 = pbVar12;
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_10079835c:
    pbStack_118 = pbVar18;
    pbVar16 = (byte *)thunk_FUN_1087e422c(0,&UNK_10b22b5d8,&UNK_10b20a590);
LAB_100798378:
    *param_1 = -0x8000000000000000;
    param_1[1] = (long)pbVar16;
  }
  else {
    pbVar18 = pbStack_120 + 0x20;
    if (*pbStack_120 == 0x16) goto LAB_10079835c;
    uVar7 = *(undefined8 *)(pbStack_120 + 1);
    uStack_327 = (undefined7)*(undefined8 *)(pbStack_120 + 9);
    bStack_32f = (byte)uVar7;
    uStack_32e = (undefined6)((ulong)uVar7 >> 8);
    uStack_328 = (undefined1)((ulong)uVar7 >> 0x38);
    pbStack_318 = *(byte **)(pbStack_120 + 0x18);
    uStack_320 = (undefined1)*(long *)(pbStack_120 + 0x10);
    uStack_31f = (undefined7)((ulong)*(long *)(pbStack_120 + 0x10) >> 8);
    pbStack_100 = (byte *)0x1;
    bStack_330 = *pbStack_120;
    pbStack_118 = pbVar18;
    FUN_10132fb4c(&pbStack_168,&bStack_330);
    pbVar6 = pbStack_158;
    pbVar16 = pbStack_160;
    pbVar8 = pbStack_168;
    if (pbStack_168 == (byte *)0x8000000000000000) goto LAB_100798378;
    uStack_98 = pbStack_168;
    pbStack_90 = pbStack_160;
    pbStack_88 = pbStack_158;
    FUN_100f30180(&bStack_330,&pbStack_120);
    pbVar12 = (byte *)CONCAT62(uStack_32e,CONCAT11(bStack_32f,bStack_330));
    if (pbVar12 == (byte *)0x8000000000000007) {
      *param_1 = -0x8000000000000000;
      param_1[1] = (long)CONCAT71(uStack_327,uStack_328);
LAB_100798c94:
      pbVar6 = pbVar6 + 1;
      pbVar12 = pbVar16;
      while (pbVar6 = pbVar6 + -1, pbVar6 != (byte *)0x0) {
        FUN_100de6690(pbVar12);
        pbVar12 = pbVar12 + 0x48;
      }
      pbVar12 = pbStack_108;
      pbVar18 = pbStack_118;
      if (pbVar8 != (byte *)0x0) {
        _free(pbVar16);
        pbVar12 = pbStack_108;
        pbVar18 = pbStack_118;
      }
    }
    else {
      pbStack_e0 = (byte *)CONCAT71(uStack_31f,uStack_320);
      pbStack_d8 = pbStack_318;
      pbStack_c8 = pbStack_308;
      pbStack_d0 = pbStack_310;
      pbStack_b8 = pbStack_2f8;
      pbStack_c0 = pbStack_300;
      pbStack_b0 = pbStack_2f0;
      pbVar18 = (byte *)0x8000000000000005;
      pbVar17 = pbVar18;
      if (pbVar12 != (byte *)0x8000000000000006) {
        pbStack_150 = pbStack_318;
        pbStack_140 = pbStack_308;
        pbStack_148 = pbStack_310;
        pbStack_130 = pbStack_2f8;
        pbStack_138 = pbStack_300;
        pbStack_128 = pbStack_2f0;
        pbVar17 = pbVar12;
        pbStack_160 = (byte *)CONCAT71(uStack_327,uStack_328);
        pbStack_158 = pbStack_e0;
      }
      pbVar12 = pbStack_118;
      pbStack_168 = pbVar17;
      if (pbStack_118 != pbStack_108) {
        pbVar12 = pbStack_118 + 0x20;
        if (*pbStack_118 == 0x16) goto LAB_100798bf8;
        uVar7 = *(undefined8 *)(pbStack_118 + 1);
        uStack_327 = (undefined7)*(undefined8 *)(pbStack_118 + 9);
        bStack_32f = (byte)uVar7;
        uStack_32e = (undefined6)((ulong)uVar7 >> 8);
        uStack_328 = (undefined1)((ulong)uVar7 >> 0x38);
        pbStack_318 = *(byte **)(pbStack_118 + 0x18);
        uStack_320 = (undefined1)*(long *)(pbStack_118 + 0x10);
        uStack_31f = (undefined7)((ulong)*(long *)(pbStack_118 + 0x10) >> 8);
        pbStack_100 = pbStack_100 + 1;
        bStack_330 = *pbStack_118;
        pbStack_118 = pbStack_118 + 0x20;
        FUN_101226150(&uStack_1c8,&bStack_330);
        pbVar12 = pbStack_1c0;
        if (((ulong)uStack_1c8 & 1) == 0) {
          uVar14 = uStack_1c8._1_1_;
          goto LAB_100798bfc;
        }
LAB_100798c74:
        *param_1 = -0x8000000000000000;
        param_1[1] = (long)pbVar12;
        if (pbVar17 != (byte *)0x8000000000000005) {
          FUN_100de6690(&pbStack_168);
        }
        goto LAB_100798c94;
      }
LAB_100798bf8:
      pbStack_118 = pbVar12;
      uVar14 = 2;
LAB_100798bfc:
      FUN_100f30180(&bStack_330,&pbStack_120);
      pbVar3 = (byte *)CONCAT62(uStack_32e,CONCAT11(bStack_32f,bStack_330));
      pbVar12 = (byte *)CONCAT71(uStack_327,uStack_328);
      if (pbVar3 == (byte *)0x8000000000000007) goto LAB_100798c74;
      pbStack_2d0 = (byte *)CONCAT71(uStack_31f,uStack_320);
      pbStack_2c8 = pbStack_318;
      pbStack_2b8 = pbStack_308;
      pbStack_2c0 = pbStack_310;
      pbStack_2a8 = pbStack_2f8;
      pbStack_2b0 = pbStack_300;
      pbStack_2a0 = pbStack_2f0;
      if (pbVar3 != (byte *)0x8000000000000006) {
        pbStack_1a8 = pbStack_318;
        pbStack_198 = pbStack_308;
        pbStack_1a0 = pbStack_310;
        pbStack_188 = pbStack_2f8;
        pbStack_190 = pbStack_300;
        pbStack_180 = pbStack_2f0;
        pbVar18 = pbVar3;
        pbStack_1b0 = pbStack_2d0;
      }
      uStack_320 = SUB81(pbStack_88,0);
      uStack_31f = (undefined7)((ulong)pbStack_88 >> 8);
      uStack_328 = SUB81(pbStack_90,0);
      uStack_327 = (undefined7)((ulong)pbStack_90 >> 8);
      bStack_330 = (byte)uStack_98;
      bStack_32f = (byte)((ulong)uStack_98 >> 8);
      uStack_32e = (undefined6)((ulong)uStack_98 >> 0x10);
      pbStack_310 = pbStack_160;
      pbStack_318 = pbStack_168;
      pbStack_300 = pbStack_150;
      pbStack_308 = pbStack_158;
      pbStack_2f0 = pbStack_140;
      pbStack_2f8 = pbStack_148;
      pbStack_2e0 = pbStack_130;
      pbStack_2e8 = pbStack_138;
      pbStack_2d8 = pbStack_128;
      param_1[1] = (long)pbStack_90;
      *param_1 = (long)uStack_98;
      param_1[3] = (long)pbStack_168;
      param_1[2] = (long)pbStack_88;
      param_1[9] = (long)pbStack_138;
      param_1[8] = (long)pbStack_140;
      param_1[0xb] = (long)pbStack_128;
      param_1[10] = (long)pbStack_130;
      param_1[5] = (long)pbStack_158;
      param_1[4] = (long)pbStack_160;
      param_1[7] = (long)pbStack_148;
      param_1[6] = (long)pbStack_150;
      param_1[0xc] = (long)pbVar18;
      param_1[0xd] = (long)pbVar12;
      param_1[0x14] = (long)pbStack_180;
      param_1[0x11] = (long)pbStack_198;
      param_1[0x10] = (long)pbStack_1a0;
      param_1[0x13] = (long)pbStack_188;
      param_1[0x12] = (long)pbStack_190;
      param_1[0xf] = (long)pbStack_1a8;
      param_1[0xe] = (long)pbStack_1b0;
      *(undefined1 *)(param_1 + 0x15) = uVar14;
      pbVar12 = pbStack_108;
      pbVar18 = pbStack_118;
      if (*param_1 != -0x8000000000000000) {
        lStack_1f8 = param_1[0x11];
        lStack_200 = param_1[0x10];
        lStack_1e8 = param_1[0x13];
        lStack_1f0 = param_1[0x12];
        lStack_1d8 = param_1[0x15];
        lStack_1e0 = param_1[0x14];
        lStack_238 = param_1[9];
        lStack_240 = param_1[8];
        lStack_228 = param_1[0xb];
        lStack_230 = param_1[10];
        lStack_218 = param_1[0xd];
        lStack_220 = param_1[0xc];
        lStack_208 = param_1[0xf];
        lStack_210 = param_1[0xe];
        lStack_278 = param_1[1];
        lStack_280 = *param_1;
        lStack_268 = param_1[3];
        lStack_270 = param_1[2];
        lStack_258 = param_1[5];
        lStack_260 = param_1[4];
        lStack_248 = param_1[7];
        lStack_250 = param_1[6];
        lVar11 = FUN_100fbc738(&pbStack_120);
        if (lVar11 != 0) {
          *param_1 = -0x8000000000000000;
          param_1[1] = lVar11;
          func_0x000100e00868(&lStack_280);
        }
        goto LAB_100798b38;
      }
    }
  }
  lVar11 = ((ulong)((long)pbVar12 - (long)pbVar18) >> 5) + 1;
  while (lVar11 = lVar11 + -1, lVar11 != 0) {
    FUN_100e077ec(pbVar18);
    pbVar18 = pbVar18 + 0x20;
  }
  if (pbStack_110 != (byte *)0x0) {
    _free(pbStack_120);
  }
LAB_100798b38:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

