
/* WARNING: Removing unreachable block (ram,0x0001014454f0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101444d34(undefined8 *param_1,char *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  byte bVar5;
  char *pcVar6;
  long lVar7;
  long ******pppppplVar8;
  code *pcVar9;
  long *******ppppppplVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *******unaff_x19;
  long ******pppppplVar14;
  long *******ppppppplVar15;
  long ******pppppplVar16;
  long ******pppppplVar17;
  long *******ppppppplVar18;
  long ******pppppplVar19;
  undefined8 uVar20;
  long *******ppppppplStack_3d0;
  long ******pppppplStack_3c8;
  long *******ppppppplStack_3c0;
  long *******ppppppplStack_3b8;
  undefined8 uStack_390;
  long *******ppppppplStack_388;
  long ******pppppplStack_380;
  long *******ppppppplStack_378;
  undefined8 uStack_370;
  long *******ppppppplStack_368;
  long ******pppppplStack_360;
  long *******ppppppplStack_358;
  long ******pppppplStack_350;
  long *******ppppppplStack_348;
  long *******ppppppplStack_340;
  long ******pppppplStack_338;
  long *******ppppppplStack_330;
  long ******pppppplStack_328;
  long *******ppppppplStack_320;
  long ******pppppplStack_318;
  long *******ppppppplStack_310;
  long ******pppppplStack_308;
  long ******pppppplStack_300;
  long *******ppppppplStack_2f8;
  long ******pppppplStack_2f0;
  long lStack_2e0;
  long lStack_2d8;
  char *pcStack_2d0;
  long ******pppppplStack_2c8;
  long *******ppppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long ******pppppplStack_2b0;
  long *******ppppppplStack_2a8;
  long ******pppppplStack_2a0;
  long *******ppppppplStack_298;
  long ******pppppplStack_290;
  long *******ppppppplStack_288;
  long ******pppppplStack_280;
  long *******ppppppplStack_278;
  long *******ppppppplStack_270;
  long ******pppppplStack_268;
  long *******ppppppplStack_260;
  long ******pppppplStack_258;
  long *******ppppppplStack_250;
  long ******pppppplStack_248;
  long *******ppppppplStack_240;
  long ******pppppplStack_238;
  long ******pppppplStack_230;
  long *******ppppppplStack_228;
  long ******pppppplStack_220;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  long ******pppppplStack_200;
  long *******ppppppplStack_1f8;
  long ******pppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long ******pppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long ******pppppplStack_1d0;
  long lStack_1c8;
  long ******pppppplStack_1c0;
  long lStack_1b8;
  long ******pppppplStack_1b0;
  long *******ppppppplStack_1a8;
  undefined4 uStack_198;
  undefined3 uStack_194;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long ******pppppplStack_180;
  long *******ppppppplStack_178;
  long ******pppppplStack_170;
  long *******ppppppplStack_168;
  long ******pppppplStack_160;
  long *******ppppppplStack_158;
  long ******pppppplStack_150;
  long ******pppppplStack_140;
  long *******ppppppplStack_138;
  long ******pppppplStack_130;
  long *******ppppppplStack_128;
  long ******pppppplStack_120;
  long ******pppppplStack_118;
  undefined *puStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long ******pppppplStack_f0;
  long *******ppppppplStack_e8;
  long ******pppppplStack_e0;
  long *******ppppppplStack_d8;
  long ******pppppplStack_d0;
  long *******ppppppplStack_c8;
  long ******pppppplStack_c0;
  long ******pppppplStack_b0;
  long *******ppppppplStack_a8;
  long ******pppppplStack_a0;
  long *******ppppppplStack_98;
  long ******pppppplStack_90;
  long *******ppppppplStack_88;
  long ******pppppplStack_80;
  
  if (*param_2 == '\x15') {
    lStack_2e0 = *(long *)(param_2 + 0x10);
    lStack_2d8 = lStack_2e0 + *(long *)(param_2 + 0x18) * 0x40;
    ppppppplVar15 = (long *******)&uStack_390;
    pcStack_2d0 = (char *)0x0;
    pppppplStack_2c8 = (long ******)0x0;
    lStack_1c8 = 0;
    pppppplStack_1c0 = (long ******)0x8;
    lStack_1b8 = 0;
    ppppppplVar10 = (long *******)0x8000000000000002;
    while( true ) {
      FUN_100f24408(&uStack_390,&lStack_2e0);
      pcVar6 = pcStack_2d0;
      ppppppplVar18 = ppppppplStack_388;
      ppppppplStack_210 = ppppppplVar10;
      ppppppplStack_208 = unaff_x19;
      if ((byte)uStack_390 == '\x18') break;
      uVar2 = *(undefined4 *)((long)((ulong)ppppppplVar15 | 1) + 3);
      uStack_198._0_3_ = (undefined3)*(undefined4 *)((ulong)ppppppplVar15 | 1);
      uStack_198._3_1_ = (undefined1)uVar2;
      uStack_194 = (undefined3)((uint)uVar2 >> 8);
      ppppppplStack_1a8 = ppppppplStack_378;
      pppppplStack_1b0 = pppppplStack_380;
      if ((byte)uStack_390 == '\x16') {
        if (ppppppplVar10 != (long *******)0x8000000000000002) {
          ppppppplStack_100 = (long *******)&UNK_108cadf95;
          ppppppplStack_f8 = (long *******)0x5;
          uStack_390 = (long *******)&ppppppplStack_100;
          ppppppplStack_388 = (long *******)&DAT_100c7b3a0;
          ppppppplVar18 = (long *******)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_390);
          break;
        }
        pcStack_2d0 = (char *)0x0;
        if (pcVar6 == (char *)0x0) {
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
          goto LAB_1014457f4;
        }
        cVar3 = *pcVar6;
        ppppppplVar18 = (long *******)0x8000000000000001;
        if (cVar3 != '\x10') {
          if (cVar3 == '\x11') {
            FUN_1004de164(&uStack_390,*(undefined8 *)(pcVar6 + 8));
          }
          else {
            if (cVar3 == '\x12') goto LAB_101444f2c;
            FUN_1004de164(&uStack_390);
          }
          ppppppplVar18 = ppppppplStack_388;
          if (uStack_390 == (long *******)0x8000000000000000) break;
          ppppppplStack_f8 = ppppppplStack_378;
          ppppppplStack_100 = (long *******)pppppplStack_380;
          ppppppplStack_e8 = ppppppplStack_368;
          pppppplStack_f0 = uStack_370;
          ppppppplStack_d8 = ppppppplStack_358;
          pppppplStack_e0 = pppppplStack_360;
          pppppplStack_d0 = pppppplStack_350;
          ppppppplVar18 = uStack_390;
          unaff_x19 = ppppppplStack_388;
        }
LAB_101444f2c:
        ppppppplStack_1f8 = ppppppplStack_f8;
        pppppplStack_200 = (long ******)ppppppplStack_100;
        ppppppplStack_1e8 = ppppppplStack_e8;
        pppppplStack_1f0 = pppppplStack_f0;
        ppppppplStack_1d8 = ppppppplStack_d8;
        pppppplStack_1e0 = pppppplStack_e0;
        pppppplStack_1d0 = pppppplStack_d0;
        ppppppplVar10 = ppppppplVar18;
      }
      else {
        if ((byte)uStack_390 == '\x17') {
          if (ppppppplVar10 == (long *******)0x8000000000000002) {
            ppppppplStack_190 = (long *******)0x8000000000000001;
          }
          else {
            ppppppplStack_168 = ppppppplStack_1e8;
            pppppplStack_170 = pppppplStack_1f0;
            ppppppplStack_158 = ppppppplStack_1d8;
            pppppplStack_160 = pppppplStack_1e0;
            pppppplStack_150 = pppppplStack_1d0;
            ppppppplStack_178 = ppppppplStack_1f8;
            pppppplStack_180 = pppppplStack_200;
            ppppppplStack_190 = ppppppplVar10;
            ppppppplStack_188 = unaff_x19;
          }
          pppppplVar16 = pppppplStack_1c0 + lStack_1b8 * 8;
          pppppplStack_120 = pppppplStack_1c0;
          pppppplStack_140 = (long ******)CONCAT71(pppppplStack_140._1_7_,0x16);
          puStack_110 = &UNK_10b236610;
          ppppppplStack_108 = (long *******)0x2;
          ppppppplStack_100 = (long *******)0x8000000000000001;
          pppppplStack_118 = pppppplVar16;
          if (lStack_1b8 == 0) {
            ppppppplVar18 = (long *******)0x8000000000000000;
            pppppplVar14 = (long ******)0x8000000000000000;
            goto LAB_101445550;
          }
          puVar13 = (undefined8 *)((ulong)&pppppplStack_140 | 1);
          puVar12 = (undefined8 *)((ulong)&uStack_390 | 1);
          ppppppplVar18 = (long *******)0x8000000000000001;
          pppppplVar19 = (long ******)0x8000000000000001;
          ppppppplStack_3b8 = (long *******)0x8000000000000001;
          pppppplVar17 = pppppplStack_1c0;
          ppppppplVar10 = ppppppplStack_108;
          puVar4 = puStack_110;
          goto LAB_1014450a0;
        }
        *(undefined4 *)((ulong)&ppppppplStack_190 | 1) = uStack_198;
        *(undefined4 *)((long)((ulong)&ppppppplStack_190 | 1) + 3) = uVar2;
        ppppppplStack_178 = ppppppplStack_378;
        pppppplStack_180 = pppppplStack_380;
        ppppppplStack_190 = (long *******)CONCAT71(ppppppplStack_190._1_7_,(byte)uStack_390);
        ppppppplStack_188 = ppppppplStack_388;
        pcStack_2d0 = (char *)0x0;
        if (pcVar6 == (char *)0x0) {
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_1014457f4:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1014457f8);
          (*pcVar9)();
        }
        __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&ppppppplStack_100);
        ppppppplVar18 = ppppppplStack_f8;
        lVar7 = lStack_1b8;
        if ((char)ppppppplStack_100 == '\x16') {
          FUN_100e077ec(&ppppppplStack_190);
          break;
        }
        uStack_370 = (long ******)
                     CONCAT44(*(undefined4 *)((long)((ulong)&ppppppplStack_100 | 1) + 3),
                              *(int *)((ulong)&ppppppplStack_100 | 1) << 8);
        ppppppplStack_368 = ppppppplStack_f8;
        ppppppplStack_358 = ppppppplStack_e8;
        pppppplStack_360 = pppppplStack_f0;
        ppppppplStack_388 = ppppppplStack_188;
        uStack_390 = ppppppplStack_190;
        ppppppplStack_378 = ppppppplStack_178;
        pppppplStack_380 = pppppplStack_180;
        uStack_370 = (long ******)CONCAT71(uStack_370._1_7_,(char)ppppppplStack_100);
        if (lStack_1b8 == lStack_1c8) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_1c8);
        }
        pppppplVar16 = pppppplStack_1c0 + lVar7 * 8;
        pppppplVar16[1] = (long *****)ppppppplStack_388;
        *pppppplVar16 = (long *****)uStack_390;
        pppppplVar16[3] = (long *****)ppppppplStack_378;
        pppppplVar16[2] = (long *****)pppppplStack_380;
        pppppplVar16[5] = (long *****)ppppppplStack_368;
        pppppplVar16[4] = (long *****)uStack_370;
        pppppplVar16[7] = (long *****)ppppppplStack_358;
        pppppplVar16[6] = (long *****)pppppplStack_360;
        lStack_1b8 = lVar7 + 1;
      }
    }
    FUN_100d5c778(&lStack_1c8);
    if ((ppppppplVar10 != (long *******)0x8000000000000002) &&
       (ppppppplVar10 != (long *******)0x8000000000000001)) {
      if ((pppppplStack_1f0 != (long ******)0x0) && ((long)pppppplStack_1f0 * 9 != -0x11)) {
        _free(ppppppplStack_1f8 + (-1 - (long)pppppplStack_1f0));
      }
      func_0x000100cd7284(&ppppppplStack_210);
    }
  }
  else {
    ppppppplVar18 = (long *******)FUN_108855c40(param_2,&pppppplStack_b0,&UNK_10b2134c8);
  }
  goto LAB_101444ff0;
  while (pppppplVar17 = pppppplVar8, ppppppplVar10 = ppppppplVar15, pppppplVar8 != pppppplVar16) {
LAB_1014450a0:
    ppppppplVar15 = ppppppplVar10;
    pppppplVar8 = pppppplVar17 + 8;
    __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E
              (&uStack_390,pppppplVar17,puVar4,ppppppplVar15);
    bVar5 = (byte)uStack_390;
    pppppplVar14 = (long ******)((ulong)uStack_390 & 0xff);
    if ((byte)uStack_390 != 0x16) {
      pppppplVar17 = pppppplVar17 + 8;
      pppppplStack_120 = pppppplVar17;
      if ((char)pppppplStack_140 != '\x16') {
        FUN_100e077ec(&pppppplStack_140);
      }
      ppppppplStack_138 = ppppppplStack_368;
      pppppplStack_140 = uStack_370;
      ppppppplStack_128 = ppppppplStack_358;
      pppppplStack_130 = pppppplStack_360;
      if (bVar5 < 0xd) {
        if (bVar5 == 1) {
          uVar11 = 1;
          if (uStack_390._1_1_ != '\x01') {
            uVar11 = 2;
          }
          uVar1 = 0;
          if (uStack_390._1_1_ != '\0') {
            uVar1 = uVar11;
          }
          pppppplVar14 = (long ******)(ulong)uVar1;
          goto LAB_1014453b8;
        }
        if (bVar5 == 4) {
          uVar11 = 1;
          if (ppppppplStack_388 != (long *******)0x1) {
            uVar11 = 2;
          }
          uVar1 = 0;
          if (ppppppplStack_388 != (long *******)0x0) {
            uVar1 = uVar11;
          }
          pppppplVar14 = (long ******)(ulong)uVar1;
          goto LAB_1014453b8;
        }
        if (bVar5 == 0xc) {
          if (ppppppplStack_378 == (long *******)0x6) {
            uVar11 = 1;
            if (*(int *)pppppplStack_380 != 0x73727563 ||
                *(short *)((long)pppppplStack_380 + 4) != 0x726f) {
              uVar11 = 2;
            }
          }
          else {
            if (ppppppplStack_378 != (long *******)0x5) goto LAB_1014452f0;
            uVar11 = 2;
            if (*(int *)pppppplStack_380 == 0x74656d5f &&
                *(char *)((long)pppppplStack_380 + 4) == 'a') {
              uVar11 = 0;
            }
          }
          pppppplVar14 = (long ******)(ulong)uVar11;
          goto joined_r0x0001014452e8;
        }
LAB_1014458bc:
        ppppppplStack_100 = ppppppplStack_3b8;
        ppppppplStack_f8 = ppppppplStack_3d0;
        ppppppplVar10 = (long *******)FUN_108855b04(&uStack_390,&pppppplStack_b0,&UNK_10b2124a0);
LAB_1014456a8:
        if ((-0x7fffffffffffffff < (long)pppppplVar19) && (pppppplVar19 != (long ******)0x0)) {
LAB_1014456c4:
          _free(ppppppplStack_3c0);
        }
      }
      else {
        if (bVar5 == 0xd) {
          if (pppppplStack_380 == (long ******)0x6) {
            uVar11 = 1;
            if (*(int *)ppppppplStack_388 != 0x73727563 ||
                *(short *)((long)ppppppplStack_388 + 4) != 0x726f) {
              uVar11 = 2;
            }
            pppppplVar14 = (long ******)(ulong)uVar11;
          }
          else {
            if (pppppplStack_380 != (long ******)0x5) goto LAB_101445384;
            uVar11 = 2;
            if (*(int *)ppppppplStack_388 == 0x74656d5f &&
                *(char *)((long)ppppppplStack_388 + 4) == 'a') {
              uVar11 = 0;
            }
            pppppplVar14 = (long ******)(ulong)uVar11;
          }
LAB_1014453b8:
          FUN_100e077ec(&uStack_390);
        }
        else {
          if (bVar5 != 0xe) {
            if (bVar5 != 0xf) goto LAB_1014458bc;
            if (pppppplStack_380 == (long ******)0x6) {
              if (((((*(char *)ppppppplStack_388 != 'c') ||
                    (*(char *)((long)ppppppplStack_388 + 1) != 'u')) ||
                   (*(char *)((long)ppppppplStack_388 + 2) != 'r')) ||
                  ((*(char *)((long)ppppppplStack_388 + 3) != 's' ||
                   (*(char *)((long)ppppppplStack_388 + 4) != 'o')))) ||
                 (*(char *)((long)ppppppplStack_388 + 5) != 'r')) goto LAB_101445384;
              pppppplVar14 = (long ******)0x1;
            }
            else if (((pppppplStack_380 == (long ******)0x5) && (*(char *)ppppppplStack_388 == '_'))
                    && ((*(char *)((long)ppppppplStack_388 + 1) == 'm' &&
                        (((*(char *)((long)ppppppplStack_388 + 2) == 'e' &&
                          (*(char *)((long)ppppppplStack_388 + 3) == 't')) &&
                         (*(char *)((long)ppppppplStack_388 + 4) == 'a')))))) {
              pppppplVar14 = (long ******)0x0;
            }
            else {
LAB_101445384:
              pppppplVar14 = (long ******)0x2;
            }
            goto LAB_1014453b8;
          }
          if (ppppppplStack_378 == (long *******)0x6) {
            if (((*(char *)pppppplStack_380 != 'c') ||
                (*(char *)((long)pppppplStack_380 + 1) != 'u')) ||
               (((*(char *)((long)pppppplStack_380 + 2) != 'r' ||
                 ((*(char *)((long)pppppplStack_380 + 3) != 's' ||
                  (*(char *)((long)pppppplStack_380 + 4) != 'o')))) ||
                (*(char *)((long)pppppplStack_380 + 5) != 'r')))) goto LAB_1014452f0;
            pppppplVar14 = (long ******)0x1;
          }
          else if ((((ppppppplStack_378 == (long *******)0x5) && (*(char *)pppppplStack_380 == '_'))
                   && (*(char *)((long)pppppplStack_380 + 1) == 'm')) &&
                  (((*(char *)((long)pppppplStack_380 + 2) == 'e' &&
                    (*(char *)((long)pppppplStack_380 + 3) == 't')) &&
                   (*(char *)((long)pppppplStack_380 + 4) == 'a')))) {
            pppppplVar14 = (long ******)0x0;
          }
          else {
LAB_1014452f0:
            pppppplVar14 = (long ******)0x2;
          }
joined_r0x0001014452e8:
          if (ppppppplStack_388 != (long *******)0x0) {
            _free();
          }
        }
        if ((int)pppppplVar14 == 0) {
          if (ppppppplVar18 == (long *******)0x8000000000000001) {
            FUN_100623670(&uStack_390,&pppppplStack_140);
            if (uStack_390 != (long *******)0x8000000000000001) {
              ppppppplStack_3d0 = ppppppplStack_388;
              ppppppplStack_e8 = ppppppplStack_378;
              pppppplStack_f0 = pppppplStack_380;
              ppppppplStack_d8 = ppppppplStack_368;
              pppppplStack_e0 = uStack_370;
              ppppppplStack_c8 = ppppppplStack_358;
              pppppplStack_d0 = pppppplStack_360;
              pppppplStack_c0 = pppppplStack_350;
              ppppppplStack_3b8 = uStack_390;
              pppppplVar16 = pppppplStack_118;
              pppppplVar17 = pppppplStack_120;
              ppppppplVar18 = uStack_390;
              goto LAB_1014454b8;
            }
            ppppppplStack_100 = ppppppplStack_3b8;
            ppppppplStack_f8 = ppppppplStack_3d0;
            ppppppplVar18 = (long *******)0x8000000000000001;
            ppppppplVar10 = ppppppplStack_388;
          }
          else {
            ppppppplStack_100 = ppppppplStack_3b8;
            ppppppplStack_f8 = ppppppplStack_3d0;
            pppppplStack_b0 = (long ******)&UNK_108cadf95;
            ppppppplStack_a8 = (long *******)0x5;
            uStack_390 = &pppppplStack_b0;
            ppppppplStack_388 = (long *******)&DAT_100c7b3a0;
            ppppppplVar10 = (long *******)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_390)
            ;
          }
          goto LAB_1014456a8;
        }
        cVar3 = (char)pppppplStack_140;
        if ((int)pppppplVar14 != 1) {
          pppppplStack_140 = (long ******)CONCAT71(pppppplStack_140._1_7_,0x16);
          if (cVar3 == '\x16') {
            ppppppplStack_100 = ppppppplStack_3b8;
            ppppppplStack_f8 = ppppppplStack_3d0;
            ppppppplVar10 = (long *******)FUN_1088561c0(&UNK_108cde170,0x10);
            goto LAB_1014456a8;
          }
          uVar20 = *puVar13;
          puVar12[1] = puVar13[1];
          *puVar12 = uVar20;
          uVar20 = *(undefined8 *)((long)puVar13 + 0xf);
          *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
          *(undefined8 *)((long)puVar12 + 0xf) = uVar20;
          uStack_390 = (long *******)CONCAT71(uStack_390._1_7_,cVar3);
          FUN_100e077ec(&uStack_390);
LAB_1014454b8:
          pppppplVar8 = pppppplStack_120;
          ppppppplVar10 = ppppppplStack_108;
          puVar4 = puStack_110;
          if (pppppplVar17 == pppppplVar16) break;
          goto LAB_1014450a0;
        }
        if (pppppplVar19 != (long ******)0x8000000000000001) {
          ppppppplStack_100 = ppppppplStack_3b8;
          ppppppplStack_f8 = ppppppplStack_3d0;
          pppppplStack_b0 = (long ******)&UNK_108cac7a9;
          ppppppplStack_a8 = (long *******)0x6;
          uStack_390 = &pppppplStack_b0;
          ppppppplStack_388 = (long *******)&DAT_100c7b3a0;
          ppppppplVar10 = (long *******)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_390);
          if (((ulong)pppppplVar19 & 0x7fffffffffffffff) == 0) goto LAB_1014456e0;
          goto LAB_1014456c4;
        }
        pppppplStack_140 = (long ******)CONCAT71(pppppplStack_140._1_7_,0x16);
        if (cVar3 == '\x16') {
          ppppppplStack_100 = ppppppplStack_3b8;
          ppppppplStack_f8 = ppppppplStack_3d0;
          ppppppplVar10 = (long *******)FUN_1088561c0(&UNK_108cde170,0x10);
        }
        else {
          uVar20 = *puVar13;
          puVar12[1] = puVar13[1];
          *puVar12 = uVar20;
          uVar20 = *(undefined8 *)((long)puVar13 + 0xf);
          *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
          *(undefined8 *)((long)puVar12 + 0xf) = uVar20;
          uStack_390 = (long *******)CONCAT71(uStack_390._1_7_,cVar3);
          FUN_1004b60cc(&pppppplStack_b0,&uStack_390);
          if (pppppplStack_b0 != (long ******)0x8000000000000001) {
            pppppplStack_3c8 = pppppplStack_a0;
            ppppppplStack_3c0 = ppppppplStack_a8;
            pppppplVar19 = pppppplStack_b0;
            goto LAB_1014454b8;
          }
          ppppppplStack_100 = ppppppplStack_3b8;
          ppppppplStack_f8 = ppppppplStack_3d0;
          ppppppplVar10 = ppppppplStack_a8;
        }
      }
LAB_1014456e0:
      if ((ppppppplVar18 != (long *******)0x8000000000000001) &&
         (ppppppplVar18 != (long *******)0x8000000000000000)) {
        if ((pppppplStack_e0 != (long ******)0x0) && ((long)pppppplStack_e0 * 9 != -0x11)) {
          _free(ppppppplStack_e8 + (-1 - (long)pppppplStack_e0));
        }
        func_0x000100cd7284(&ppppppplStack_100);
      }
      if ((char)pppppplStack_140 != '\x16') {
        FUN_100e077ec(&pppppplStack_140);
      }
      if (*ppppppplVar10 == (long ******)0x1) {
        FUN_100de21d4(ppppppplVar10 + 1);
      }
      else if ((*ppppppplVar10 == (long ******)0x0) && (ppppppplVar10[2] != (long ******)0x0)) {
        _free(ppppppplVar10[1]);
      }
      _free(ppppppplVar10);
      ppppppplVar18 = (long *******)0x8000000000000001;
      goto LAB_101445550;
    }
  }
  pppppplStack_120 = pppppplVar8;
  if (ppppppplVar18 == (long *******)0x8000000000000001) {
    ppppppplVar18 = (long *******)0x8000000000000000;
    ppppppplStack_3d0 = ppppppplVar15;
  }
  else {
    ppppppplStack_a8 = ppppppplStack_e8;
    pppppplStack_b0 = pppppplStack_f0;
    ppppppplStack_98 = ppppppplStack_d8;
    pppppplStack_a0 = pppppplStack_e0;
    ppppppplStack_88 = ppppppplStack_c8;
    pppppplStack_90 = pppppplStack_d0;
    pppppplStack_80 = pppppplStack_c0;
  }
  pppppplVar14 = (long ******)0x8000000000000000;
  if (pppppplVar19 != (long ******)0x8000000000000001) {
    pppppplVar14 = pppppplVar19;
  }
  ppppppplVar10 = ppppppplStack_3c0;
  ppppppplVar15 = ppppppplStack_3d0;
  pppppplVar16 = pppppplStack_3c8;
  if ((char)pppppplStack_140 != '\x16') {
    FUN_100e077ec(&pppppplStack_140);
  }
LAB_101445550:
  ppppppplStack_330 = ppppppplStack_a8;
  pppppplStack_338 = pppppplStack_b0;
  ppppppplStack_320 = ppppppplStack_98;
  pppppplStack_328 = pppppplStack_a0;
  ppppppplStack_310 = ppppppplStack_88;
  pppppplStack_318 = pppppplStack_90;
  ppppppplStack_368 = ppppppplStack_168;
  uStack_370 = pppppplStack_170;
  ppppppplStack_358 = ppppppplStack_158;
  pppppplStack_360 = pppppplStack_160;
  ppppppplStack_388 = ppppppplStack_188;
  uStack_390 = ppppppplStack_190;
  ppppppplStack_378 = ppppppplStack_178;
  pppppplStack_380 = pppppplStack_180;
  pppppplStack_350 = pppppplStack_150;
  pppppplStack_308 = pppppplStack_80;
  ppppppplStack_348 = ppppppplVar18;
  ppppppplStack_340 = ppppppplVar15;
  pppppplStack_300 = pppppplVar14;
  ppppppplStack_2f8 = ppppppplVar10;
  pppppplStack_2f0 = pppppplVar16;
  FUN_100d5c778(&lStack_1c8);
  ppppppplVar18 = ppppppplStack_388;
  if (uStack_390 != (long *******)0x8000000000000002) {
    pppppplStack_238 = pppppplStack_308;
    ppppppplStack_240 = ppppppplStack_310;
    ppppppplStack_228 = ppppppplStack_2f8;
    pppppplStack_230 = pppppplStack_300;
    pppppplStack_220 = pppppplStack_2f0;
    ppppppplStack_278 = ppppppplStack_348;
    pppppplStack_280 = pppppplStack_350;
    pppppplStack_268 = pppppplStack_338;
    ppppppplStack_270 = ppppppplStack_340;
    pppppplStack_258 = pppppplStack_328;
    ppppppplStack_260 = ppppppplStack_330;
    pppppplStack_248 = pppppplStack_318;
    ppppppplStack_250 = ppppppplStack_320;
    ppppppplStack_2b8 = ppppppplStack_388;
    ppppppplStack_2c0 = uStack_390;
    ppppppplStack_2a8 = ppppppplStack_378;
    pppppplStack_2b0 = pppppplStack_380;
    ppppppplStack_298 = ppppppplStack_368;
    pppppplStack_2a0 = uStack_370;
    ppppppplStack_288 = ppppppplStack_358;
    pppppplStack_290 = pppppplStack_360;
    if (lStack_2d8 - lStack_2e0 == 0) {
      param_1[0x11] = pppppplStack_308;
      param_1[0x10] = ppppppplStack_310;
      param_1[0x13] = ppppppplStack_2f8;
      param_1[0x12] = pppppplStack_300;
      param_1[0x14] = pppppplStack_2f0;
      param_1[9] = ppppppplStack_348;
      param_1[8] = pppppplStack_350;
      param_1[0xb] = pppppplStack_338;
      param_1[10] = ppppppplStack_340;
      param_1[0xd] = pppppplStack_328;
      param_1[0xc] = ppppppplStack_330;
      param_1[0xf] = pppppplStack_318;
      param_1[0xe] = ppppppplStack_320;
      param_1[1] = ppppppplStack_388;
      *param_1 = uStack_390;
      param_1[3] = ppppppplStack_378;
      param_1[2] = pppppplStack_380;
      param_1[5] = ppppppplStack_368;
      param_1[4] = uStack_370;
      param_1[7] = ppppppplStack_358;
      param_1[6] = pppppplStack_360;
      return;
    }
    ppppppplStack_100 = (long *******)pppppplStack_2c8;
    ppppppplVar18 =
         (long *******)
         FUN_1087e422c((long)pppppplStack_2c8 + ((ulong)(lStack_2d8 - lStack_2e0) >> 6),
                       &ppppppplStack_100,&UNK_10b23a190);
    FUN_100cf8fb4(&ppppppplStack_2c0);
  }
LAB_101444ff0:
  *param_1 = 0x8000000000000003;
  param_1[1] = ppppppplVar18;
  return;
}

