
/* WARNING: Type propagation algorithm not settling */

void FUN_101232994(undefined8 *param_1,char *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *puVar4;
  char *pcVar5;
  byte bVar6;
  long lVar7;
  char cVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  int *piVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int ******ppppppiVar18;
  int *piVar19;
  char cVar20;
  int *unaff_x24;
  int ******ppppppiVar21;
  int *******pppppppiVar22;
  int *piStack_350;
  int *piStack_348;
  int *piStack_338;
  int *******pppppppiStack_320;
  long lStack_300;
  long lStack_2f8;
  char *pcStack_2f0;
  int ******ppppppiStack_2e8;
  undefined8 uStack_2e0;
  int *piStack_2d8;
  int *******pppppppiStack_2d0;
  int *piStack_2c8;
  undefined8 uStack_2c0;
  int *piStack_2b8;
  int *******pppppppiStack_2b0;
  int *piStack_2a8;
  int *******pppppppiStack_2a0;
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
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  int *******pppppppiStack_230;
  int *piStack_228;
  int *******pppppppiStack_220;
  int *piStack_218;
  int *******pppppppiStack_210;
  int *piStack_208;
  int *******pppppppiStack_200;
  int *piStack_1f8;
  int *******pppppppiStack_1f0;
  long lStack_1e8;
  int *piStack_1e0;
  long lStack_1d8;
  int *******pppppppiStack_1d0;
  int *piStack_1c8;
  undefined4 uStack_1b8;
  undefined3 uStack_1b4;
  int *******pppppppiStack_1b0;
  int *piStack_1a8;
  int *******pppppppiStack_1a0;
  int *piStack_198;
  int *******pppppppiStack_190;
  int *piStack_188;
  int *******pppppppiStack_180;
  int *piStack_178;
  int *******pppppppiStack_170;
  int *******pppppppiStack_160;
  int *piStack_158;
  int *******pppppppiStack_150;
  int *piStack_148;
  int *******pppppppiStack_140;
  int *piStack_138;
  int *******pppppppiStack_130;
  int *******pppppppiStack_120;
  int *piStack_118;
  int *******pppppppiStack_110;
  int *piStack_108;
  int *piStack_100;
  int *piStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  int *******pppppppiStack_e0;
  int *piStack_d8;
  int *******pppppppiStack_d0;
  int *piStack_c8;
  int *******pppppppiStack_c0;
  int *piStack_b8;
  int *******pppppppiStack_b0;
  int *piStack_a8;
  int *******pppppppiStack_a0;
  int ******ppppppiStack_90;
  int *piStack_88;
  int *piStack_80;
  
  if (*param_2 != '\x15') {
    uVar13 = FUN_108855c40(param_2,&ppppppiStack_90,&UNK_10b213408);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar13;
    return;
  }
  lStack_300 = *(long *)(param_2 + 0x10);
  lStack_2f8 = lStack_300 + *(long *)(param_2 + 0x18) * 0x40;
  pcStack_2f0 = (char *)0x0;
  ppppppiStack_2e8 = (int ******)0x0;
  lStack_1e8 = 0;
  piStack_1e0 = (int *)0x8;
  lStack_1d8 = 0;
  pppppppiVar22 = (int *******)0x8000000000000002;
  while( true ) {
    FUN_100f24408(&uStack_2e0,&lStack_300);
    pcVar5 = pcStack_2f0;
    pppppppiStack_230 = pppppppiVar22;
    piStack_228 = unaff_x24;
    if ((byte)uStack_2e0 == '\x18') break;
    uVar2 = *(undefined4 *)((long)((ulong)&uStack_2e0 | 1) + 3);
    uStack_1b8._0_3_ = (undefined3)*(undefined4 *)((ulong)&uStack_2e0 | 1);
    uStack_1b8._3_1_ = (undefined1)uVar2;
    uStack_1b4 = (undefined3)((uint)uVar2 >> 8);
    piStack_1c8 = piStack_2c8;
    pppppppiStack_1d0 = pppppppiStack_2d0;
    if ((byte)uStack_2e0 == '\x16') {
      if (pppppppiVar22 != (int *******)0x8000000000000002) {
        pppppppiStack_e0 = (int *******)&UNK_108cadf95;
        piStack_d8 = (int *)0x5;
        uStack_2e0 = (int *******)&pppppppiStack_e0;
        piStack_2d8 = (int *)&DAT_100c7b3a0;
        bVar10 = true;
        uVar13 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2e0);
        *param_1 = 0x8000000000000001;
        param_1[1] = uVar13;
        goto LAB_101233490;
      }
      pcStack_2f0 = (char *)0x0;
      if (pcVar5 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
        goto LAB_1012336a8;
      }
      cVar20 = *pcVar5;
      pppppppiVar22 = (int *******)0x8000000000000001;
      if (cVar20 != '\x10') {
        if (cVar20 == '\x11') {
          FUN_1004de164(&uStack_2e0,*(undefined8 *)(pcVar5 + 8));
        }
        else {
          if (cVar20 == '\x12') goto LAB_101232b88;
          FUN_1004de164(&uStack_2e0);
        }
        if (uStack_2e0 == (int *******)0x8000000000000000) {
          *param_1 = 0x8000000000000001;
          param_1[1] = piStack_2d8;
          bVar10 = true;
          goto LAB_101233490;
        }
        piStack_d8 = piStack_2c8;
        pppppppiStack_e0 = pppppppiStack_2d0;
        piStack_c8 = piStack_2b8;
        pppppppiStack_d0 = uStack_2c0;
        piStack_b8 = piStack_2a8;
        pppppppiStack_c0 = pppppppiStack_2b0;
        pppppppiStack_b0 = pppppppiStack_2a0;
        pppppppiVar22 = uStack_2e0;
        unaff_x24 = piStack_2d8;
      }
LAB_101232b88:
      piStack_218 = piStack_d8;
      pppppppiStack_220 = pppppppiStack_e0;
      piStack_208 = piStack_c8;
      pppppppiStack_210 = pppppppiStack_d0;
      piStack_1f8 = piStack_b8;
      pppppppiStack_200 = pppppppiStack_c0;
      pppppppiStack_1f0 = pppppppiStack_b0;
    }
    else {
      if ((byte)uStack_2e0 == '\x17') {
        bVar10 = pppppppiVar22 == (int *******)0x8000000000000002;
        if (bVar10) {
          pppppppiStack_1b0 = (int *******)0x8000000000000001;
        }
        else {
          piStack_188 = piStack_208;
          pppppppiStack_190 = pppppppiStack_210;
          piStack_178 = piStack_1f8;
          pppppppiStack_180 = pppppppiStack_200;
          pppppppiStack_170 = pppppppiStack_1f0;
          piStack_198 = piStack_218;
          pppppppiStack_1a0 = pppppppiStack_220;
          pppppppiStack_1b0 = pppppppiVar22;
          piStack_1a8 = unaff_x24;
        }
        piStack_f8 = piStack_1e0 + lStack_1d8 * 0x10;
        piStack_100 = piStack_1e0;
        pppppppiStack_120 = (int *******)CONCAT71(pppppppiStack_120._1_7_,0x16);
        puStack_f0 = &UNK_10b2364d0;
        uStack_e8 = 3;
        pppppppiStack_e0 = (int *******)0x8000000000000005;
        if (lStack_1d8 == 0) {
          pppppppiStack_e0 = (int *******)0x8000000000000005;
          ppppppiVar21 = (int ******)0x8000000000000001;
          pppppppiVar22 = (int *******)0x8000000000000005;
          goto LAB_101233288;
        }
        puVar17 = (undefined8 *)((ulong)&pppppppiStack_120 | 1);
        puVar15 = (undefined8 *)((ulong)&ppppppiStack_90 | 1);
        puVar16 = (undefined8 *)((ulong)&uStack_2e0 | 1);
        cVar20 = '\b';
        pppppppiVar22 = (int *******)0x8000000000000005;
        ppppppiVar21 = (int ******)0x8000000000000001;
        pppppppiStack_320 = (int *******)0x8000000000000005;
        piVar12 = piStack_1e0;
        uVar13 = uStack_e8;
        puVar4 = puStack_f0;
        piVar19 = piStack_f8;
        goto LAB_101232cb4;
      }
      *(undefined4 *)((ulong)&pppppppiStack_1b0 | 1) = uStack_1b8;
      *(undefined4 *)((long)((ulong)&pppppppiStack_1b0 | 1) + 3) = uVar2;
      piStack_198 = piStack_2c8;
      pppppppiStack_1a0 = pppppppiStack_2d0;
      pppppppiStack_1b0 = (int *******)CONCAT71(pppppppiStack_1b0._1_7_,(byte)uStack_2e0);
      piStack_1a8 = piStack_2d8;
      pcStack_2f0 = (char *)0x0;
      if (pcVar5 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_1012336a8:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1012336ac);
        (*pcVar9)();
      }
      __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&pppppppiStack_e0);
      lVar7 = lStack_1d8;
      if ((char)pppppppiStack_e0 == '\x16') {
        *param_1 = 0x8000000000000001;
        param_1[1] = piStack_d8;
        bVar10 = true;
        FUN_100e077ec(&pppppppiStack_1b0);
        goto LAB_101233490;
      }
      uStack_2c0 = (int *******)
                   CONCAT44(*(undefined4 *)((long)((ulong)&pppppppiStack_e0 | 1) + 3),
                            *(int *)((ulong)&pppppppiStack_e0 | 1) << 8);
      piStack_2b8 = piStack_d8;
      piStack_2a8 = piStack_c8;
      pppppppiStack_2b0 = pppppppiStack_d0;
      piStack_2d8 = piStack_1a8;
      uStack_2e0 = pppppppiStack_1b0;
      piStack_2c8 = piStack_198;
      pppppppiStack_2d0 = pppppppiStack_1a0;
      uStack_2c0 = (int *******)CONCAT71(uStack_2c0._1_7_,(char)pppppppiStack_e0);
      if (lStack_1d8 == lStack_1e8) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_1e8);
      }
      piVar12 = piStack_1e0 + lVar7 * 0x10;
      *(int **)(piVar12 + 2) = piStack_2d8;
      *(int ********)piVar12 = uStack_2e0;
      *(int **)(piVar12 + 6) = piStack_2c8;
      *(int ********)(piVar12 + 4) = pppppppiStack_2d0;
      *(int **)(piVar12 + 10) = piStack_2b8;
      *(int ********)(piVar12 + 8) = uStack_2c0;
      *(int **)(piVar12 + 0xe) = piStack_2a8;
      *(int ********)(piVar12 + 0xc) = pppppppiStack_2b0;
      lStack_1d8 = lVar7 + 1;
    }
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = piStack_2d8;
  bVar10 = true;
  goto LAB_101233490;
  while (piVar12 = unaff_x24, piVar1 = unaff_x24, unaff_x24 != piVar19) {
LAB_101232cb4:
    unaff_x24 = piVar12 + 0x10;
    __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E
              (&uStack_2e0,piVar12,puVar4,uVar13);
    bVar6 = (byte)uStack_2e0;
    if ((byte)uStack_2e0 != 0x16) {
      piVar12 = piVar12 + 0x10;
      piStack_100 = piVar12;
      if ((char)pppppppiStack_120 != '\x16') {
        FUN_100e077ec(&pppppppiStack_120);
      }
      piStack_118 = piStack_2b8;
      pppppppiStack_120 = uStack_2c0;
      piStack_108 = piStack_2a8;
      pppppppiStack_110 = pppppppiStack_2b0;
      if (bVar6 < 0xd) {
        if (bVar6 == 1) {
          uVar14 = (uint)uStack_2e0._1_1_;
          if (2 < uVar14) {
            uVar14 = 3;
          }
        }
        else {
          if (bVar6 != 4) {
            if (bVar6 == 0xc) {
              if (piStack_2c8 == (int *)0x4) {
                if (*(int *)pppppppiStack_2d0 != 0x61746164) goto LAB_101232fd4;
                uVar14 = 2;
              }
              else if (piStack_2c8 == (int *)0x6) {
                if (*(int *)pppppppiStack_2d0 != 0x67676f6c ||
                    *(short *)((long)pppppppiStack_2d0 + 4) != 0x7265) goto LAB_101232fd4;
                uVar14 = 1;
              }
              else if ((piStack_2c8 == (int *)0x5) &&
                      (*(int *)pppppppiStack_2d0 == 0x6576656c &&
                       *(char *)((long)pppppppiStack_2d0 + 4) == 'l')) {
                uVar14 = 0;
              }
              else {
LAB_101232fd4:
                uVar14 = 3;
              }
              goto joined_r0x0001012331e8;
            }
LAB_101233770:
            pppppppiStack_e0 = pppppppiStack_320;
            piStack_d8 = piStack_338;
            piVar12 = (int *)FUN_108855b04(&uStack_2e0,&ppppppiStack_90,&UNK_10b210240);
            goto LAB_1012332bc;
          }
          piVar1 = piStack_2d8;
          if ((int *)0x2 < piStack_2d8) {
            piVar1 = (int *)0x3;
          }
          uVar14 = (uint)piVar1;
        }
LAB_101233058:
        FUN_100e077ec(&uStack_2e0);
      }
      else {
        if (bVar6 == 0xd) {
          if (pppppppiStack_2d0 == (int *******)0x4) {
            if (*piStack_2d8 != 0x61746164) goto LAB_101233054;
LAB_1012331dc:
            uVar14 = 2;
          }
          else if (pppppppiStack_2d0 == (int *******)0x6) {
            if (*piStack_2d8 != 0x67676f6c || (short)piStack_2d8[1] != 0x7265) goto LAB_101233054;
LAB_101233038:
            uVar14 = 1;
          }
          else if ((pppppppiStack_2d0 == (int *******)0x5) &&
                  (*piStack_2d8 == 0x6576656c && (char)piStack_2d8[1] == 'l')) {
LAB_101232eac:
            uVar14 = 0;
          }
          else {
LAB_101233054:
            uVar14 = 3;
          }
          goto LAB_101233058;
        }
        if (bVar6 != 0xe) {
          if (bVar6 != 0xf) goto LAB_101233770;
          if (pppppppiStack_2d0 == (int *******)0x4) {
            if (((((char)*piStack_2d8 == 'd') && (*(char *)((long)piStack_2d8 + 1) == 'a')) &&
                (*(char *)((long)piStack_2d8 + 2) == 't')) &&
               (*(char *)((long)piStack_2d8 + 3) == 'a')) goto LAB_1012331dc;
          }
          else if (pppppppiStack_2d0 == (int *******)0x6) {
            if (((((char)*piStack_2d8 == 'l') && (*(char *)((long)piStack_2d8 + 1) == 'o')) &&
                ((*(char *)((long)piStack_2d8 + 2) == 'g' &&
                 ((*(char *)((long)piStack_2d8 + 3) == 'g' && ((char)piStack_2d8[1] == 'e')))))) &&
               (*(char *)((long)piStack_2d8 + 5) == 'r')) goto LAB_101233038;
          }
          else if (((((pppppppiStack_2d0 == (int *******)0x5) && ((char)*piStack_2d8 == 'l')) &&
                    (*(char *)((long)piStack_2d8 + 1) == 'e')) &&
                   ((*(char *)((long)piStack_2d8 + 2) == 'v' &&
                    (*(char *)((long)piStack_2d8 + 3) == 'e')))) && ((char)piStack_2d8[1] == 'l'))
          goto LAB_101232eac;
          goto LAB_101233054;
        }
        if (piStack_2c8 == (int *)0x4) {
          if (((*(char *)pppppppiStack_2d0 != 'd') ||
              (*(char *)((long)pppppppiStack_2d0 + 1) != 'a')) ||
             ((*(char *)((long)pppppppiStack_2d0 + 2) != 't' ||
              (*(char *)((long)pppppppiStack_2d0 + 3) != 'a')))) goto LAB_101232fb4;
          uVar14 = 2;
        }
        else if (piStack_2c8 == (int *)0x6) {
          if ((((*(char *)pppppppiStack_2d0 != 'l') ||
               (*(char *)((long)pppppppiStack_2d0 + 1) != 'o')) ||
              (*(char *)((long)pppppppiStack_2d0 + 2) != 'g')) ||
             (((*(char *)((long)pppppppiStack_2d0 + 3) != 'g' ||
               (*(char *)((long)pppppppiStack_2d0 + 4) != 'e')) ||
              (*(char *)((long)pppppppiStack_2d0 + 5) != 'r')))) goto LAB_101232fb4;
          uVar14 = 1;
        }
        else if (((piStack_2c8 == (int *)0x5) && (*(char *)pppppppiStack_2d0 == 'l')) &&
                ((*(char *)((long)pppppppiStack_2d0 + 1) == 'e' &&
                 (((*(char *)((long)pppppppiStack_2d0 + 2) == 'v' &&
                   (*(char *)((long)pppppppiStack_2d0 + 3) == 'e')) &&
                  (*(char *)((long)pppppppiStack_2d0 + 4) == 'l')))))) {
          uVar14 = 0;
        }
        else {
LAB_101232fb4:
          uVar14 = 3;
        }
joined_r0x0001012331e8:
        if (piStack_2d8 != (int *)0x0) {
          _free();
        }
      }
      uVar14 = uVar14 & 0xff;
      cVar8 = (char)pppppppiStack_120;
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          if (cVar20 != '\b') {
            pppppppiStack_e0 = pppppppiStack_320;
            piStack_d8 = piStack_338;
            ppppppiStack_90 = (int ******)&UNK_108ca13ad;
            piStack_88 = (int *)0x5;
            uStack_2e0 = &ppppppiStack_90;
            piStack_2d8 = (int *)&DAT_100c7b3a0;
            piVar12 = (int *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2e0);
            goto LAB_1012332bc;
          }
          FUN_100621104(&uStack_2e0,&pppppppiStack_120);
          if ((byte)uStack_2e0 == '\x01') {
            piStack_d8 = piStack_338;
            pppppppiStack_e0 = pppppppiStack_320;
            piVar12 = piStack_2d8;
            goto LAB_1012332bc;
          }
          piVar19 = piStack_f8;
          piVar12 = piStack_100;
          cVar20 = uStack_2e0._1_1_;
        }
        else {
          if (ppppppiVar21 != (int ******)0x8000000000000001) {
            pppppppiStack_e0 = pppppppiStack_320;
            piStack_d8 = piStack_338;
            ppppppiStack_90 = (int ******)&UNK_108cb6063;
            piStack_88 = (int *)0x6;
            uStack_2e0 = &ppppppiStack_90;
            piStack_2d8 = (int *)&DAT_100c7b3a0;
            piVar12 = (int *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2e0);
            goto LAB_1012332bc;
          }
          pppppppiStack_120 = (int *******)CONCAT71(pppppppiStack_120._1_7_,0x16);
          if (cVar8 == '\x16') {
            pppppppiStack_e0 = pppppppiStack_320;
            piStack_d8 = piStack_338;
            piVar12 = (int *)FUN_1088561c0(&UNK_108cde170,0x10);
            ppppppiVar21 = (int ******)0x8000000000000001;
            goto LAB_1012332bc;
          }
          uVar13 = *puVar17;
          puVar16[1] = puVar17[1];
          *puVar16 = uVar13;
          uVar13 = *(undefined8 *)((long)puVar17 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar13;
          uStack_2e0 = (int *******)CONCAT71(uStack_2e0._1_7_,cVar8);
          FUN_1004b60cc(&ppppppiStack_90,&uStack_2e0);
          if (ppppppiStack_90 == (int ******)0x8000000000000001) {
            pppppppiStack_e0 = pppppppiStack_320;
            piStack_d8 = piStack_338;
            ppppppiVar21 = (int ******)0x8000000000000001;
            piVar12 = piStack_88;
            goto LAB_1012332bc;
          }
          piStack_350 = piStack_80;
          piStack_348 = piStack_88;
          ppppppiVar21 = ppppppiStack_90;
        }
      }
      else if (uVar14 == 2) {
        if (pppppppiVar22 != (int *******)0x8000000000000005) {
          pppppppiStack_e0 = pppppppiStack_320;
          piStack_d8 = piStack_338;
          ppppppiStack_90 = (int ******)&UNK_108c61024;
          piStack_88 = (int *)0x4;
          uStack_2e0 = &ppppppiStack_90;
          piStack_2d8 = (int *)&DAT_100c7b3a0;
          piVar12 = (int *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2e0);
          goto LAB_1012332c4;
        }
        pppppppiStack_120 = (int *******)CONCAT71(pppppppiStack_120._1_7_,0x16);
        if (cVar8 == '\x16') {
          pppppppiStack_e0 = pppppppiStack_320;
          piStack_d8 = piStack_338;
          pppppppiVar22 = (int *******)0x8000000000000005;
          piVar12 = (int *)FUN_1088561c0(&UNK_108cde170,0x10);
          goto LAB_1012332cc;
        }
        uVar13 = *puVar17;
        puVar15[1] = puVar17[1];
        *puVar15 = uVar13;
        uVar13 = *(undefined8 *)((long)puVar17 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar13;
        ppppppiStack_90 = (int ******)CONCAT71(ppppppiStack_90._1_7_,cVar8);
        FUN_1004aa788(&uStack_2e0,&ppppppiStack_90);
        pppppppiVar22 = uStack_2e0;
        if (uStack_2e0 == (int *******)0x8000000000000005) {
          piStack_d8 = piStack_338;
          pppppppiStack_e0 = pppppppiStack_320;
          piVar12 = piStack_2d8;
          goto LAB_1012332cc;
        }
        piStack_338 = piStack_2d8;
        piStack_c8 = piStack_2c8;
        pppppppiStack_d0 = pppppppiStack_2d0;
        piStack_b8 = piStack_2b8;
        pppppppiStack_c0 = uStack_2c0;
        piStack_a8 = piStack_2a8;
        pppppppiStack_b0 = pppppppiStack_2b0;
        pppppppiStack_a0 = pppppppiStack_2a0;
        pppppppiStack_320 = uStack_2e0;
      }
      else {
        pppppppiStack_120 = (int *******)CONCAT71(pppppppiStack_120._1_7_,0x16);
        if (cVar8 == '\x16') {
          pppppppiStack_e0 = pppppppiStack_320;
          piStack_d8 = piStack_338;
          piVar12 = (int *)FUN_1088561c0(&UNK_108cde170,0x10);
          goto LAB_1012332bc;
        }
        uVar13 = *puVar17;
        puVar16[1] = puVar17[1];
        *puVar16 = uVar13;
        uVar13 = *(undefined8 *)((long)puVar17 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar13;
        uStack_2e0 = (int *******)CONCAT71(uStack_2e0._1_7_,cVar8);
        FUN_100e077ec(&uStack_2e0);
      }
      piVar1 = piStack_100;
      uVar13 = uStack_e8;
      puVar4 = puStack_f0;
      if (piVar12 == piVar19) break;
      goto LAB_101232cb4;
    }
  }
  piStack_100 = piVar1;
  pppppppiStack_e0 = pppppppiStack_320;
  piStack_d8 = piStack_338;
  if (cVar20 == '\b') {
LAB_101233288:
    ppppppiStack_90 = (int ******)&UNK_108ca13ad;
    piStack_88 = (int *)0x5;
    uStack_2e0 = &ppppppiStack_90;
    piStack_2d8 = (int *)&DAT_100c7b3a0;
    piVar12 = (int *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_2e0);
LAB_1012332bc:
    if (pppppppiVar22 != (int *******)0x8000000000000005) {
LAB_1012332c4:
      FUN_100de6690(&pppppppiStack_e0);
    }
LAB_1012332cc:
    bVar11 = true;
    piStack_350 = unaff_x24;
LAB_1012332d0:
    piStack_338 = (int *)0x8000000000000005;
    bVar3 = false;
    if (ppppppiVar21 != (int ******)0x8000000000000001) {
      bVar3 = bVar11;
    }
    if ((bVar3) && (((ulong)ppppppiVar21 & 0x7fffffffffffffff) != 0)) {
      _free(piStack_348);
    }
    else {
    }
    piStack_348 = piVar12;
    if ((char)pppppppiStack_120 != '\x16') {
      cVar20 = '\0';
      ppppppiVar18 = (int ******)0x8000000000000001;
      goto LAB_101233304;
    }
  }
  else {
    bVar11 = ppppppiVar21 == (int ******)0x8000000000000001;
    ppppppiVar18 = (int ******)0x8000000000000000;
    if (!bVar11) {
      ppppppiVar18 = ppppppiVar21;
    }
    if (pppppppiVar22 == (int *******)0x8000000000000005) {
      ppppppiStack_90 = (int ******)&UNK_108c61024;
      piStack_88 = (int *)0x4;
      uStack_2e0 = &ppppppiStack_90;
      piStack_2d8 = (int *)&DAT_100c7b3a0;
      piVar12 = (int *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_2e0);
      piStack_350 = unaff_x24;
      if (((ulong)ppppppiVar18 & 0x7fffffffffffffff) != 0) {
        _free(piStack_348);
      }
      goto LAB_1012332d0;
    }
    piStack_158 = piStack_c8;
    pppppppiStack_160 = pppppppiStack_d0;
    piStack_148 = piStack_b8;
    pppppppiStack_150 = pppppppiStack_c0;
    piStack_138 = piStack_a8;
    pppppppiStack_140 = pppppppiStack_b0;
    pppppppiStack_130 = pppppppiStack_a0;
    if ((char)pppppppiStack_120 == '\x16') goto LAB_101233358;
LAB_101233304:
    FUN_100e077ec(&pppppppiStack_120);
    if (ppppppiVar18 != (int ******)0x8000000000000001) {
LAB_101233358:
      param_1[6] = piStack_158;
      param_1[5] = pppppppiStack_160;
      param_1[8] = piStack_148;
      param_1[7] = pppppppiStack_150;
      param_1[10] = piStack_138;
      param_1[9] = pppppppiStack_140;
      param_1[0x10] = piStack_198;
      param_1[0xf] = pppppppiStack_1a0;
      param_1[0x12] = piStack_188;
      param_1[0x11] = pppppppiStack_190;
      param_1[0x14] = piStack_178;
      param_1[0x13] = pppppppiStack_180;
      param_1[0xb] = pppppppiStack_130;
      param_1[0x15] = pppppppiStack_170;
      param_1[0xe] = piStack_1a8;
      param_1[0xd] = pppppppiStack_1b0;
      *param_1 = ppppppiVar18;
      param_1[1] = piStack_348;
      param_1[2] = piStack_350;
      param_1[3] = pppppppiVar22;
      param_1[4] = piStack_338;
      *(char *)(param_1 + 0xc) = cVar20;
      FUN_100d5c778(&lStack_1e8);
      if (ppppppiVar18 == (int ******)0x8000000000000001) {
        return;
      }
      uStack_258 = param_1[0x11];
      uStack_260 = param_1[0x10];
      uStack_248 = param_1[0x13];
      uStack_250 = param_1[0x12];
      uStack_238 = param_1[0x15];
      uStack_240 = param_1[0x14];
      uStack_298 = param_1[9];
      pppppppiStack_2a0 = (int *******)param_1[8];
      uStack_288 = param_1[0xb];
      uStack_290 = param_1[10];
      uStack_278 = param_1[0xd];
      uStack_280 = param_1[0xc];
      uStack_268 = param_1[0xf];
      uStack_270 = param_1[0xe];
      piStack_2d8 = (int *)param_1[1];
      uStack_2e0 = (int *******)*param_1;
      piStack_2c8 = (int *)param_1[3];
      pppppppiStack_2d0 = (int *******)param_1[2];
      piStack_2b8 = (int *)param_1[5];
      uStack_2c0 = (int *******)param_1[4];
      piStack_2a8 = (int *)param_1[7];
      pppppppiStack_2b0 = (int *******)param_1[6];
      if (lStack_2f8 - lStack_300 == 0) {
        return;
      }
      pppppppiStack_e0 = (int *******)ppppppiStack_2e8;
      uVar13 = FUN_1087e422c((long)ppppppiStack_2e8 + ((ulong)(lStack_2f8 - lStack_300) >> 6),
                             &pppppppiStack_e0,&UNK_10b23a190);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar13;
      FUN_100cb5924(&uStack_2e0);
      return;
    }
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = piStack_348;
  if ((pppppppiStack_1b0 != (int *******)0x8000000000000001) &&
     (pppppppiStack_1b0 != (int *******)0x8000000000000000)) {
    if ((pppppppiStack_190 != (int *******)0x0) && ((long)pppppppiStack_190 * 9 != -0x11)) {
      _free(piStack_198 + (long)pppppppiStack_190 * -2 + -2);
    }
    func_0x000100cd7284(&pppppppiStack_1b0);
  }
LAB_101233490:
  FUN_100d5c778(&lStack_1e8);
  bVar10 = (bool)(bVar10 ^ 1);
  if (pppppppiStack_230 == (int *******)0x8000000000000002) {
    bVar10 = true;
  }
  if (((!bVar10) && (pppppppiStack_230 != (int *******)0x8000000000000001)) &&
     (pppppppiStack_230 != (int *******)0x8000000000000000)) {
    if ((pppppppiStack_210 != (int *******)0x0) && ((long)pppppppiStack_210 * 9 != -0x11)) {
      _free(piStack_218 + (long)pppppppiStack_210 * -2 + -2);
    }
    func_0x000100cd7284(&pppppppiStack_230);
  }
  return;
}

