
void FUN_101417048(undefined8 *param_1,byte *param_2)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte bVar16;
  undefined8 *puVar17;
  char *in_x10;
  long lVar18;
  char *pcVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  undefined8 uVar25;
  char *pcStack_6e8;
  char *pcStack_6e0;
  char *pcStack_6c0;
  char *pcStack_6b8;
  char *pcStack_6b0;
  undefined8 uStack_6a0;
  char *pcStack_698;
  char *pcStack_690;
  char *pcStack_688;
  char *pcStack_680;
  char *pcStack_678;
  char *pcStack_670;
  char *pcStack_668;
  char *pcStack_660;
  char *pcStack_658;
  char *pcStack_650;
  char *pcStack_648;
  char *pcStack_640;
  char *pcStack_638;
  char *pcStack_630;
  char *pcStack_628;
  char *pcStack_620;
  char *pcStack_618;
  char *pcStack_610;
  char *pcStack_608;
  char *pcStack_600;
  char *pcStack_5f8;
  char *pcStack_5f0;
  char *pcStack_5e8;
  char *pcStack_5e0;
  char *pcStack_5d8;
  char *pcStack_5d0;
  char *pcStack_5c8;
  char *pcStack_5c0;
  char *pcStack_5b8;
  char *pcStack_5b0;
  char *pcStack_5a8;
  char *pcStack_5a0;
  char *pcStack_598;
  char *pcStack_590;
  char *pcStack_588;
  char *pcStack_580;
  char *pcStack_578;
  char *pcStack_570;
  char *pcStack_568;
  char *pcStack_560;
  char *pcStack_558;
  char *pcStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_530;
  char *pcStack_528;
  char *pcStack_520;
  char *pcStack_518;
  byte *pbStack_510;
  byte *pbStack_508;
  undefined8 uStack_500;
  byte *pbStack_4f8;
  char *pcStack_4f0;
  undefined1 auStack_4e0 [360];
  char *pcStack_378;
  char *pcStack_370;
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  char *pcStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
  char *pcStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  char *pcStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  char *pcStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  char *pcStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  char *pcStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  char *pcStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  char *pcStack_210;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  char *pcStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char cStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char acStack_b0 [8];
  undefined8 *puStack_a8;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    pcStack_520 = *(char **)(param_2 + 8);
    pcStack_530 = *(char **)(param_2 + 0x10);
    pcVar19 = pcStack_530 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_510 = (byte *)0x0;
    pcVar23 = pcStack_530;
    pcStack_518 = pcVar19;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_1014172c8:
      pcStack_528 = pcVar23;
      pcStack_698 = (char *)FUN_1087e422c(0,&UNK_10b22d700,&UNK_10b20a590);
LAB_1014172e0:
      uStack_6a0 = (char *)0x8000000000000001;
LAB_1014172e8:
      lVar18 = ((ulong)((long)pcVar19 - (long)pcVar23) >> 5) + 1;
      while (lVar18 = lVar18 + -1, lVar18 != 0) {
        FUN_100e077ec(pcVar23);
        pcVar23 = pcVar23 + 0x20;
      }
      if (pcStack_520 != (char *)0x0) {
        _free(pcStack_530);
      }
    }
    else {
      pcVar23 = pcStack_530 + 0x20;
      cVar2 = *pcStack_530;
      if (cVar2 == '\x16') goto LAB_1014172c8;
      uStack_e7 = (undefined7)*(undefined8 *)(pcStack_530 + 9);
      uStack_ef = (undefined7)*(undefined8 *)(pcStack_530 + 1);
      uStack_e8 = (undefined1)((ulong)*(undefined8 *)(pcStack_530 + 1) >> 0x38);
      pcStack_d8 = *(char **)(pcStack_530 + 0x18);
      uStack_e0 = (undefined1)*(undefined8 *)(pcStack_530 + 0x10);
      uStack_df = (undefined7)((ulong)*(undefined8 *)(pcStack_530 + 0x10) >> 8);
      pbStack_510 = (byte *)0x1;
      pcStack_528 = pcVar23;
      cStack_f0 = cVar2;
      if (cVar2 != '\x10') {
        if (cVar2 == '\x11') {
          plVar1 = (long *)CONCAT71(uStack_e7,uStack_e8);
          pcStack_128 = (char *)plVar1[1];
          pcStack_130 = (char *)*plVar1;
          pcStack_118 = (char *)plVar1[3];
          pcStack_120 = (char *)plVar1[2];
          FUN_101432b9c(&uStack_6a0,&pcStack_130);
          _free(plVar1);
        }
        else {
          if (cVar2 == '\x12') goto LAB_101417224;
          FUN_101432b9c(&uStack_6a0,&cStack_f0);
        }
        if (uStack_6a0 != (char *)0x8000000000000003) {
          pcStack_158 = pcStack_5e8;
          pcStack_160 = pcStack_5f0;
          pcStack_148 = pcStack_5d8;
          pcStack_150 = pcStack_5e0;
          pcStack_140 = pcStack_5d0;
          pcStack_198 = pcStack_628;
          pcStack_1a0 = pcStack_630;
          pcStack_188 = pcStack_618;
          pcStack_190 = pcStack_620;
          pcStack_178 = pcStack_608;
          pcStack_180 = pcStack_610;
          pcStack_168 = pcStack_5f8;
          pcStack_170 = pcStack_600;
          pcStack_1d8 = pcStack_668;
          pcStack_1e0 = pcStack_670;
          pcStack_1c8 = pcStack_658;
          pcStack_1d0 = pcStack_660;
          pcStack_1b8 = pcStack_648;
          pcStack_1c0 = pcStack_650;
          pcStack_1a8 = pcStack_638;
          pcStack_1b0 = pcStack_640;
          pcStack_1f8 = pcStack_688;
          pcStack_200 = pcStack_690;
          pcStack_1e8 = pcStack_678;
          pcStack_1f0 = pcStack_680;
          pcVar22 = pcStack_698;
          pcVar24 = uStack_6a0;
          if (uStack_6a0 != (char *)0x8000000000000004) goto LAB_101417234;
        }
        goto LAB_1014172e0;
      }
LAB_101417224:
      pcVar22 = (char *)FUN_100e077ec(&cStack_f0);
      pcVar24 = (char *)0x8000000000000002;
LAB_101417234:
      pcStack_2c0 = pcStack_158;
      pcStack_2c8 = pcStack_160;
      pcStack_2b0 = pcStack_148;
      pcStack_2b8 = pcStack_150;
      pcStack_2a8 = pcStack_140;
      pcStack_300 = pcStack_198;
      pcStack_308 = pcStack_1a0;
      pcStack_2f0 = pcStack_188;
      pcStack_2f8 = pcStack_190;
      pcStack_2e0 = pcStack_178;
      pcStack_2e8 = pcStack_180;
      pcStack_2d0 = pcStack_168;
      pcStack_2d8 = pcStack_170;
      pcStack_340 = pcStack_1d8;
      pcStack_348 = pcStack_1e0;
      pcStack_330 = pcStack_1c8;
      pcStack_338 = pcStack_1d0;
      pcStack_320 = pcStack_1b8;
      pcStack_328 = pcStack_1c0;
      pcStack_310 = pcStack_1a8;
      pcStack_318 = pcStack_1b0;
      pcStack_360 = pcStack_1f8;
      pcStack_368 = pcStack_200;
      pcStack_350 = pcStack_1e8;
      pcStack_358 = pcStack_1f0;
      pcStack_378 = pcVar24;
      pcStack_370 = pcVar22;
      FUN_100f2abac(&uStack_6a0,&pcStack_530);
      pcVar19 = uStack_6a0;
      if (uStack_6a0 == (char *)0x8000000000000002) {
LAB_1014172a8:
        uStack_6a0 = (char *)0x8000000000000001;
LAB_1014172b0:
        pcVar19 = pcStack_518;
        pcVar23 = pcStack_528;
        if (pcVar24 != (char *)0x8000000000000002) {
          FUN_100e2bb8c(&pcStack_378);
          pcVar19 = pcStack_518;
          pcVar23 = pcStack_528;
        }
        goto LAB_1014172e8;
      }
      pcStack_298 = pcStack_688;
      pcStack_2a0 = pcStack_690;
      pcStack_288 = pcStack_678;
      pcStack_290 = pcStack_680;
      pcStack_278 = pcStack_668;
      pcStack_280 = pcStack_670;
      pcStack_270 = pcStack_660;
      if (uStack_6a0 == (char *)0x8000000000000001) {
        pcStack_698 = (char *)FUN_1087e422c(1,&UNK_10b22d700,&UNK_10b20a590);
        goto LAB_1014172a8;
      }
      pcStack_1e8 = pcStack_688;
      pcStack_1f0 = pcStack_690;
      pcStack_1d8 = pcStack_678;
      pcStack_1e0 = pcStack_680;
      pcStack_1c8 = pcStack_668;
      pcStack_1d0 = pcStack_670;
      pcStack_1c0 = pcStack_660;
      pcStack_200 = uStack_6a0;
      pcStack_1f8 = pcStack_698;
      FUN_100f2abac(&uStack_6a0,&pcStack_530);
      pcVar22 = pcStack_200;
      pcVar6 = pcStack_698;
      pcVar23 = uStack_6a0;
      if (uStack_6a0 == (char *)0x8000000000000002) {
LAB_101417a10:
        uStack_6a0 = (char *)0x8000000000000001;
        if (pcVar19 != (char *)0x8000000000000000) {
          if ((pcStack_1e0 != (char *)0x0) && ((long)pcStack_1e0 * 9 != -0x11)) {
            _free(pcStack_1e8 + (long)pcStack_1e0 * -8 + -8);
          }
          func_0x000100cd7284(&pcStack_200);
        }
        goto LAB_1014172b0;
      }
      pcStack_248 = pcStack_688;
      pcStack_250 = pcStack_690;
      pcStack_238 = pcStack_678;
      pcStack_240 = pcStack_680;
      pcStack_228 = pcStack_668;
      pcStack_230 = pcStack_670;
      pcStack_220 = pcStack_660;
      if (uStack_6a0 == (char *)0x8000000000000001) {
        pcStack_698 = (char *)FUN_1087e422c(2,&UNK_10b22d700,&UNK_10b20a590);
        goto LAB_101417a10;
      }
      pcStack_640 = pcStack_688;
      pcStack_648 = pcStack_690;
      pcStack_630 = pcStack_678;
      pcStack_638 = pcStack_680;
      pcStack_620 = pcStack_668;
      pcStack_628 = pcStack_670;
      pcStack_618 = pcStack_660;
      pcStack_568 = pcStack_2d0;
      pcStack_570 = pcStack_2d8;
      pcStack_558 = pcStack_2c0;
      pcStack_560 = pcStack_2c8;
      pcStack_548 = pcStack_2b0;
      pcStack_550 = pcStack_2b8;
      pcStack_540 = pcStack_2a8;
      pcStack_5a8 = pcStack_310;
      pcStack_5b0 = pcStack_318;
      pcStack_598 = pcStack_300;
      pcStack_5a0 = pcStack_308;
      pcStack_588 = pcStack_2f0;
      pcStack_590 = pcStack_2f8;
      pcStack_578 = pcStack_2e0;
      pcStack_580 = pcStack_2e8;
      pcStack_5e8 = pcStack_350;
      pcStack_5f0 = pcStack_358;
      pcStack_5d8 = pcStack_340;
      pcStack_5e0 = pcStack_348;
      pcStack_5c8 = pcStack_330;
      pcStack_5d0 = pcStack_338;
      pcStack_5b8 = pcStack_320;
      pcStack_5c0 = pcStack_328;
      pcStack_608 = pcStack_370;
      pcStack_610 = pcStack_378;
      pcStack_5f8 = pcStack_360;
      pcStack_600 = pcStack_368;
      pcStack_698 = pcStack_1f8;
      uStack_6a0 = pcStack_200;
      pcStack_688 = pcStack_1e8;
      pcStack_690 = pcStack_1f0;
      pcStack_678 = pcStack_1d8;
      pcStack_680 = pcStack_1e0;
      pcStack_668 = pcStack_1c8;
      pcStack_670 = pcStack_1d0;
      pcStack_660 = pcStack_1c0;
      pcStack_658 = pcVar23;
      pcStack_650 = pcVar6;
      pcVar19 = pcStack_518;
      pcVar23 = pcStack_528;
      if (pcStack_200 == (char *)0x8000000000000001) goto LAB_1014172e8;
      _memcpy(auStack_4e0,&uStack_6a0,0x168);
      pcVar19 = (char *)FUN_100fbc738(&pcStack_530);
      if (pcVar19 == (char *)0x0) goto LAB_10141794c;
      uStack_6a0 = (char *)0x8000000000000001;
      pcStack_698 = pcVar19;
      func_0x000100e17824(auStack_4e0);
    }
LAB_101417320:
    pcVar22 = (char *)0x8000000000000001;
  }
  else {
    if (bVar3 != 0x15) {
      pcStack_698 = (char *)FUN_108855b04(param_2,acStack_b0,&UNK_10b20c600);
      goto LAB_101417970;
    }
    uStack_500 = *(undefined8 *)(param_2 + 8);
    pbVar20 = *(byte **)(param_2 + 0x10);
    pbStack_4f8 = pbVar20 + *(long *)(param_2 + 0x18) * 0x40;
    pcStack_530 = (char *)CONCAT71(pcStack_530._1_7_,0x16);
    pcStack_4f0 = (char *)0x0;
    pcStack_378 = (char *)0x8000000000000003;
    pcStack_2a0 = (char *)0x8000000000000001;
    pcStack_250 = (char *)0x8000000000000001;
    pbStack_510 = pbVar20;
    if (*(long *)(param_2 + 0x18) == 0) {
      pcVar22 = (char *)0x8000000000000000;
      pcStack_610 = (char *)0x8000000000000002;
      pcStack_6c0 = in_x10;
      pbStack_508 = pbVar20;
LAB_101417828:
      pcVar23 = (char *)0x8000000000000000;
    }
    else {
      bVar16 = *pbVar20;
      pbStack_508 = pbVar20 + 0x40;
      if (bVar16 == 0x16) {
        pcVar23 = (char *)0x8000000000000001;
        pcVar19 = (char *)0x8000000000000003;
        pcVar22 = (char *)0x8000000000000001;
      }
      else {
        puVar21 = (undefined8 *)((ulong)&uStack_90 | 1);
        puVar13 = (undefined8 *)((ulong)&pcStack_530 | 1);
        puVar17 = (undefined8 *)((ulong)acStack_b0 | 1);
        puVar14 = (undefined8 *)((ulong)&uStack_6a0 | 1);
        pcStack_6e8 = (char *)0x8000000000000001;
        pcStack_6e0 = (char *)0x8000000000000003;
        pcVar24 = (char *)0x8000000000000001;
        pcVar22 = (char *)0x8000000000000001;
        pcVar19 = (char *)0x8000000000000003;
        pcVar23 = (char *)0x8000000000000001;
        do {
          pcStack_4f0 = pcStack_4f0 + 1;
          uStack_90 = (undefined *)CONCAT71(uStack_90._1_7_,bVar16);
          uVar25 = *(undefined8 *)(pbVar20 + 1);
          puVar21[1] = *(undefined8 *)(pbVar20 + 9);
          *puVar21 = uVar25;
          uVar25 = *(undefined8 *)(pbVar20 + 0x10);
          pcStack_698 = *(char **)(pbVar20 + 0x28);
          uStack_6a0 = *(char **)(pbVar20 + 0x20);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)(pbVar20 + 0x18);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar25;
          pcStack_688 = *(char **)(pbVar20 + 0x38);
          pcStack_690 = *(char **)(pbVar20 + 0x30);
          if ((char)pcStack_530 != '\x16') {
            FUN_100e077ec(&pcStack_530);
          }
          plVar5 = plStack_80;
          plVar1 = plStack_88;
          pcStack_530 = uStack_6a0;
          pcStack_528 = pcStack_698;
          pcStack_518 = pcStack_688;
          pcStack_520 = pcStack_690;
          if (bVar16 < 0xd) {
            if (bVar16 == 1) {
              bVar16 = uStack_90._1_1_;
              if (2 < uStack_90._1_1_) {
                bVar16 = 3;
              }
LAB_101417578:
              uStack_6a0._1_7_ = CONCAT61(uStack_6a0._2_6_,bVar16);
              uStack_6a0 = (char *)((ulong)uStack_6a0._1_7_ << 8);
              goto LAB_10141757c;
            }
            if (bVar16 == 4) {
              if ((long *)0x2 < plStack_88) {
                plVar1 = (long *)0x3;
              }
              bVar16 = (byte)plVar1;
              goto LAB_101417578;
            }
            if (bVar16 == 0xc) {
              if (lStack_78 == 4) {
                if ((int)*plStack_80 != 0x7473696c) goto LAB_101417518;
                uStack_6a0 = (char *)CONCAT62(uStack_6a0._2_6_,0x100);
              }
              else if (lStack_78 == 6) {
                if ((int)*plStack_80 != 0x636e6163 || *(short *)((long)plStack_80 + 4) != 0x6c65)
                goto LAB_101417518;
                uStack_6a0 = (char *)CONCAT62(uStack_6a0._2_6_,0x200);
              }
              else if ((lStack_78 == 8) && (*plStack_80 == 0x7374736575716572)) {
                uStack_6a0 = (char *)((ulong)uStack_6a0._2_6_ << 0x10);
              }
              else {
LAB_101417518:
                uStack_6a0 = (char *)CONCAT62(uStack_6a0._2_6_,0x300);
              }
joined_r0x0001014177c0:
              if (plVar1 != (long *)0x0) {
                _free(plVar5);
              }
            }
            else {
LAB_1014177d0:
              pcStack_698 = (char *)FUN_108855b04(&uStack_90,acStack_b0,&UNK_10b212b60);
              uStack_6a0 = (char *)CONCAT71(uStack_6a0._1_7_,1);
            }
          }
          else {
            if (bVar16 == 0xd) {
              if (plStack_80 == (long *)0x4) {
                if ((int)*plStack_88 != 0x7473696c) goto LAB_101417570;
                bVar16 = 1;
              }
              else if (plStack_80 == (long *)0x6) {
                if ((int)*plStack_88 != 0x636e6163 || *(short *)((long)plStack_88 + 4) != 0x6c65)
                goto LAB_101417570;
                bVar16 = 2;
              }
              else if ((plStack_80 == (long *)0x8) && (*plStack_88 == 0x7374736575716572)) {
                bVar16 = 0;
              }
              else {
LAB_101417570:
                bVar16 = 3;
              }
              goto LAB_101417578;
            }
            if (bVar16 == 0xe) {
              FUN_100b22958(&uStack_6a0,plStack_80);
              goto joined_r0x0001014177c0;
            }
            if (bVar16 != 0xf) goto LAB_1014177d0;
            FUN_100b22958(&uStack_6a0,plStack_88,plStack_80);
LAB_10141757c:
            FUN_100e077ec(&uStack_90);
          }
          puVar4 = puStack_a8;
          if (((ulong)uStack_6a0 & 1) != 0) {
LAB_101417a80:
            pcStack_248 = pcStack_6c0;
            pcStack_298 = pcStack_6b8;
            pcStack_2a0 = pcStack_6e8;
            pcStack_370 = pcStack_6b0;
            pcStack_378 = pcStack_6e0;
            pcStack_250 = pcVar24;
LAB_101417a84:
            uStack_6a0 = (char *)0x8000000000000001;
            if ((pcVar23 != (char *)0x8000000000000001) && (pcVar23 != (char *)0x8000000000000000))
            {
LAB_101417aac:
              uStack_6a0 = (char *)0x8000000000000001;
              if ((pcStack_230 != (char *)0x0) && ((long)pcStack_230 * 9 != -0x11)) {
                _free(pcStack_238 + (long)pcStack_230 * -8 + -8);
              }
              func_0x000100cd7284(&pcStack_250);
            }
LAB_101417cb4:
            if ((pcVar22 != (char *)0x8000000000000001) && (pcVar22 != (char *)0x8000000000000000))
            {
              if ((pcStack_280 != (char *)0x0) && ((long)pcStack_280 * 9 != -0x11)) {
                _free(pcStack_288 + (long)pcStack_280 * -8 + -8);
              }
              func_0x000100cd7284(&pcStack_2a0);
            }
            if (((ulong)pcVar19 & 0xfffffffffffffffe) != 0x8000000000000002) {
              FUN_100e2bb8c(&pcStack_378);
            }
            FUN_100d34830(&pbStack_510);
            if ((char)pcStack_530 != '\x16') {
              FUN_100e077ec(&pcStack_530);
            }
            goto LAB_101417320;
          }
          cVar2 = (char)pcStack_530;
          if (uStack_6a0._1_1_ < 2) {
            if (uStack_6a0._1_1_ == 0) {
              if (pcVar19 == (char *)0x8000000000000003) {
                pcStack_530 = (char *)CONCAT71(pcStack_530._1_7_,0x16);
                if (cVar2 == '\x16') {
                  pcStack_248 = pcStack_6c0;
                  pcStack_298 = pcStack_6b8;
                  pcStack_2a0 = pcStack_6e8;
                  pcStack_370 = pcStack_6b0;
                  pcStack_378 = pcStack_6e0;
                  pcStack_250 = pcVar24;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_101417fa8;
                }
                uVar25 = *puVar13;
                puVar17[1] = puVar13[1];
                *puVar17 = uVar25;
                uVar25 = *(undefined8 *)((long)puVar13 + 0xf);
                *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
                *(undefined8 *)((long)puVar17 + 0xf) = uVar25;
                acStack_b0[0] = cVar2;
                if (cVar2 == '\x10') {
LAB_1014175f0:
                  FUN_100e077ec(acStack_b0);
                  uStack_6a0 = (char *)0x8000000000000002;
                }
                else {
                  if (cVar2 == '\x11') {
                    plStack_88 = (long *)puStack_a8[1];
                    uStack_90 = (undefined *)*puStack_a8;
                    lStack_78 = puStack_a8[3];
                    plStack_80 = (long *)puStack_a8[2];
                    FUN_101432b9c(&uStack_6a0,&uStack_90);
                    _free(puVar4);
                  }
                  else {
                    if (cVar2 == '\x12') goto LAB_1014175f0;
                    FUN_101432b9c(&uStack_6a0,acStack_b0);
                  }
                  if (uStack_6a0 == (char *)0x8000000000000003) {
                    pcStack_248 = pcStack_6c0;
                    pcStack_298 = pcStack_6b8;
                    pcStack_2a0 = pcStack_6e8;
                    pcVar19 = (char *)0x8000000000000003;
                    pcStack_370 = pcStack_6b0;
                    pcStack_378 = pcStack_6e0;
                    pcStack_250 = pcVar24;
                    goto LAB_101417a84;
                  }
                }
                pcStack_2c0 = pcStack_5e8;
                pcStack_2c8 = pcStack_5f0;
                pcStack_2b0 = pcStack_5d8;
                pcStack_2b8 = pcStack_5e0;
                pcStack_2a8 = pcStack_5d0;
                pcStack_300 = pcStack_628;
                pcStack_308 = pcStack_630;
                pcStack_2f0 = pcStack_618;
                pcStack_2f8 = pcStack_620;
                pcStack_2e0 = pcStack_608;
                pcStack_2e8 = pcStack_610;
                pcStack_2d0 = pcStack_5f8;
                pcStack_2d8 = pcStack_600;
                pcStack_340 = pcStack_668;
                pcStack_348 = pcStack_670;
                pcStack_330 = pcStack_658;
                pcStack_338 = pcStack_660;
                pcStack_320 = pcStack_648;
                pcStack_328 = pcStack_650;
                pcStack_310 = pcStack_638;
                pcStack_318 = pcStack_640;
                pcStack_360 = pcStack_688;
                pcStack_368 = pcStack_690;
                pcStack_350 = pcStack_678;
                pcStack_358 = pcStack_680;
                pcVar19 = uStack_6a0;
                pcStack_6e0 = uStack_6a0;
                pcStack_6b0 = pcStack_698;
                goto LAB_10141778c;
              }
              pcStack_248 = pcStack_6c0;
              pcStack_298 = pcStack_6b8;
              pcStack_2a0 = pcStack_6e8;
              pcStack_370 = pcStack_6b0;
              pcStack_378 = pcStack_6e0;
              uStack_90 = &UNK_108c98428;
              plStack_88 = (long *)0x8;
              uStack_6a0 = (char *)&uStack_90;
              pcStack_698 = &DAT_100c7b3a0;
              pcStack_250 = pcVar24;
              pcStack_698 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_6a0);
            }
            else {
              if (pcVar22 == (char *)0x8000000000000001) {
                func_0x000100f21ca8(&uStack_6a0,&pcStack_530);
                if (uStack_6a0 == (char *)0x8000000000000001) {
                  pcVar22 = (char *)0x8000000000000001;
                  goto LAB_101417a80;
                }
                pcStack_6b8 = pcStack_698;
                pcStack_288 = pcStack_688;
                pcStack_290 = pcStack_690;
                pcStack_278 = pcStack_678;
                pcStack_280 = pcStack_680;
                pcStack_268 = pcStack_668;
                pcStack_270 = pcStack_670;
                pcStack_260 = pcStack_660;
                pcStack_6e8 = uStack_6a0;
                pcVar22 = uStack_6a0;
                goto LAB_10141778c;
              }
              pcStack_248 = pcStack_6c0;
              pcStack_298 = pcStack_6b8;
              pcStack_2a0 = pcStack_6e8;
              pcStack_370 = pcStack_6b0;
              pcStack_378 = pcStack_6e0;
              uStack_90 = &UNK_108cde33c;
              plStack_88 = (long *)0x4;
              uStack_6a0 = (char *)&uStack_90;
              pcStack_698 = &DAT_100c7b3a0;
              pcStack_250 = pcVar24;
              pcStack_698 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_6a0);
            }
            goto LAB_101417a84;
          }
          if (uStack_6a0._1_1_ == 2) {
            if (pcVar23 != (char *)0x8000000000000001) {
              pcStack_248 = pcStack_6c0;
              pcStack_298 = pcStack_6b8;
              pcStack_2a0 = pcStack_6e8;
              pcStack_370 = pcStack_6b0;
              pcStack_378 = pcStack_6e0;
              uStack_90 = &UNK_108cab265;
              plStack_88 = (long *)0x6;
              uStack_6a0 = (char *)&uStack_90;
              pcStack_698 = &DAT_100c7b3a0;
              pcStack_250 = pcVar24;
              pcStack_698 = (char *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_6a0);
              uStack_6a0 = (char *)0x8000000000000001;
              if (pcVar23 == (char *)0x8000000000000000) goto LAB_101417cb4;
              goto LAB_101417aac;
            }
            func_0x000100f21ca8(&uStack_6a0,&pcStack_530);
            if (uStack_6a0 != (char *)0x8000000000000001) {
              pcStack_6c0 = pcStack_698;
              pcStack_238 = pcStack_688;
              pcStack_240 = pcStack_690;
              pcStack_228 = pcStack_678;
              pcStack_230 = pcStack_680;
              pcStack_218 = pcStack_668;
              pcStack_220 = pcStack_670;
              pcStack_210 = pcStack_660;
              pcVar23 = uStack_6a0;
              pcVar24 = uStack_6a0;
              goto LAB_10141778c;
            }
            pcStack_298 = pcStack_6b8;
            pcStack_2a0 = pcStack_6e8;
            pcStack_370 = pcStack_6b0;
            pcStack_378 = pcStack_6e0;
            uStack_6a0 = (char *)0x8000000000000001;
            goto LAB_101417cb4;
          }
          pcStack_530 = (char *)CONCAT71(pcStack_530._1_7_,0x16);
          if (cVar2 == '\x16') {
            pcStack_248 = pcStack_6c0;
            pcStack_298 = pcStack_6b8;
            pcStack_2a0 = pcStack_6e8;
            pcStack_370 = pcStack_6b0;
            pcStack_378 = pcStack_6e0;
            pcStack_250 = pcVar24;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101417fa8:
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x101417fac);
            (*pcVar12)();
          }
          uVar25 = *puVar13;
          puVar14[1] = puVar13[1];
          *puVar14 = uVar25;
          uVar25 = *(undefined8 *)((long)puVar13 + 0xf);
          *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
          *(undefined8 *)((long)puVar14 + 0xf) = uVar25;
          uStack_6a0 = (char *)CONCAT71(uStack_6a0._1_7_,cVar2);
          FUN_100e077ec(&uStack_6a0);
LAB_10141778c:
          pbVar20 = pbStack_4f8;
          if (pbStack_508 == pbStack_4f8) goto LAB_101417104;
          pbVar15 = pbStack_508 + 0x40;
          bVar16 = *pbStack_508;
          pbVar20 = pbStack_508;
          pbStack_508 = pbVar15;
        } while (bVar16 != 0x16);
      }
      pbVar20 = pbVar20 + 0x40;
LAB_101417104:
      pcStack_298 = pcStack_6b8;
      pcStack_370 = pcStack_6b0;
      pcStack_610 = (char *)0x8000000000000002;
      if (pcVar19 != (char *)0x8000000000000003) {
        pcStack_158 = pcStack_2c8;
        pcStack_160 = pcStack_2d0;
        pcStack_148 = pcStack_2b8;
        pcStack_150 = pcStack_2c0;
        pcStack_138 = pcStack_2a8;
        pcStack_140 = pcStack_2b0;
        pcStack_198 = pcStack_308;
        pcStack_1a0 = pcStack_310;
        pcStack_188 = pcStack_2f8;
        pcStack_190 = pcStack_300;
        pcStack_168 = pcStack_2d8;
        pcStack_170 = pcStack_2e0;
        pcStack_178 = pcStack_2e8;
        pcStack_180 = pcStack_2f0;
        pcStack_1d8 = pcStack_348;
        pcStack_1e0 = pcStack_350;
        pcStack_1c8 = pcStack_338;
        pcStack_1d0 = pcStack_340;
        pcStack_1a8 = pcStack_318;
        pcStack_1b0 = pcStack_320;
        pcStack_1b8 = pcStack_328;
        pcStack_1c0 = pcStack_330;
        pcStack_1e8 = pcStack_358;
        pcStack_1f0 = pcStack_360;
        pcStack_1f8 = pcStack_368;
        pcStack_200 = pcStack_6b0;
        pcStack_610 = pcVar19;
      }
      pcVar19 = pcStack_290;
      pcVar24 = pcStack_6b8;
      pcVar6 = pcStack_280;
      pcVar7 = pcStack_288;
      pcVar8 = pcStack_270;
      pcVar9 = pcStack_278;
      pcVar10 = pcStack_260;
      pcVar11 = pcStack_268;
      if (pcVar22 == (char *)0x8000000000000001) {
        pcVar22 = (char *)0x8000000000000000;
        pcVar19 = pcStack_128;
        pcVar24 = pcStack_130;
        pcVar6 = pcStack_118;
        pcVar7 = pcStack_120;
        pcVar8 = pcStack_108;
        pcVar9 = pcStack_110;
        pcVar10 = pcStack_f8;
        pcVar11 = pcStack_100;
      }
      pcStack_100 = pcVar11;
      pcStack_f8 = pcVar10;
      pcStack_110 = pcVar9;
      pcStack_108 = pcVar8;
      pcStack_120 = pcVar7;
      pcStack_118 = pcVar6;
      pcStack_130 = pcVar24;
      pcStack_128 = pcVar19;
      if (pcVar23 == (char *)0x8000000000000001) goto LAB_101417828;
      uStack_e8 = SUB81(pcStack_238,0);
      uStack_e7 = (undefined7)((ulong)pcStack_238 >> 8);
      cStack_f0 = (char)pcStack_240;
      uStack_ef = (undefined7)((ulong)pcStack_240 >> 8);
      pcStack_d8 = pcStack_228;
      uStack_e0 = SUB81(pcStack_230,0);
      uStack_df = (undefined7)((ulong)pcStack_230 >> 8);
      pcStack_c8 = pcStack_218;
      pcStack_d0 = pcStack_220;
      pcStack_c0 = pcStack_210;
    }
    pbVar15 = pbStack_4f8;
    pcStack_550 = pcStack_148;
    pcStack_558 = pcStack_150;
    pcStack_540 = pcStack_138;
    pcStack_548 = pcStack_140;
    pcStack_570 = pcStack_168;
    pcStack_578 = pcStack_170;
    pcStack_560 = pcStack_158;
    pcStack_568 = pcStack_160;
    pcStack_590 = pcStack_188;
    pcStack_598 = pcStack_190;
    pcStack_580 = pcStack_178;
    pcStack_588 = pcStack_180;
    pcStack_690 = pcStack_128;
    pcStack_698 = pcStack_130;
    pcStack_680 = pcStack_118;
    pcStack_688 = pcStack_120;
    pcStack_670 = pcStack_108;
    pcStack_678 = pcStack_110;
    pcStack_660 = pcStack_f8;
    pcStack_668 = pcStack_100;
    pcStack_640 = (char *)CONCAT71(uStack_e7,uStack_e8);
    pcStack_648 = (char *)CONCAT71(uStack_ef,cStack_f0);
    pcStack_638 = (char *)CONCAT71(uStack_df,uStack_e0);
    pcStack_630 = pcStack_d8;
    pcStack_620 = pcStack_c8;
    pcStack_628 = pcStack_d0;
    pcStack_600 = pcStack_1f8;
    pcStack_608 = pcStack_200;
    pcStack_5a0 = pcStack_198;
    pcStack_5a8 = pcStack_1a0;
    pcStack_5b0 = pcStack_1a8;
    pcStack_5b8 = pcStack_1b0;
    pcStack_5c0 = pcStack_1b8;
    pcStack_5c8 = pcStack_1c0;
    pcStack_5d0 = pcStack_1c8;
    pcStack_5d8 = pcStack_1d0;
    pcStack_5e0 = pcStack_1d8;
    pcStack_5e8 = pcStack_1e0;
    pcStack_618 = pcStack_c0;
    pcStack_5f0 = pcStack_1e8;
    pcStack_5f8 = pcStack_1f0;
    uStack_6a0 = pcVar22;
    pcStack_658 = pcVar23;
    pcStack_650 = pcStack_6c0;
    _memcpy(auStack_4e0,&uStack_6a0,0x168);
    FUN_100d34830(&pbStack_510);
    if (pbVar15 == pbVar20) {
      pcVar19 = (char *)0x0;
    }
    else {
      pcStack_378 = pcStack_4f0;
      pcVar19 = (char *)FUN_1087e422c(pcStack_4f0 + ((ulong)((long)pbVar15 - (long)pbVar20) >> 6),
                                      &pcStack_378,&UNK_10b23a190);
    }
    if ((char)pcStack_530 != '\x16') {
      FUN_100e077ec(&pcStack_530);
    }
    if (pcVar19 != (char *)0x0) {
      pcVar22 = (char *)0x8000000000000001;
      uStack_6a0 = (char *)0x8000000000000001;
      pcStack_698 = pcVar19;
      func_0x000100e17824(auStack_4e0);
    }
  }
LAB_10141794c:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (pcVar22 != (char *)0x8000000000000001) {
    _memcpy(param_1,&uStack_6a0,0x168);
    return;
  }
LAB_101417970:
  *param_1 = 0x8000000000000002;
  param_1[1] = pcStack_698;
  return;
}

