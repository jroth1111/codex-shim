
/* WARNING: Type propagation algorithm not settling */

void FUN_101384a4c(undefined8 *param_1,char *param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  char *pcVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  int *unaff_x24;
  int *******pppppppiVar17;
  int ******ppppppiVar18;
  undefined8 uStack_340;
  int *piStack_338;
  int *piStack_330;
  long lStack_310;
  long lStack_308;
  char *pcStack_300;
  int ******ppppppiStack_2f8;
  undefined8 uStack_2f0;
  int *piStack_2e8;
  int *******pppppppiStack_2e0;
  int *piStack_2d8;
  undefined8 uStack_2d0;
  int *piStack_2c8;
  int *******pppppppiStack_2c0;
  int *piStack_2b8;
  int *******pppppppiStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  int *******pppppppiStack_240;
  int *piStack_238;
  int *******pppppppiStack_230;
  int *piStack_228;
  int *******pppppppiStack_220;
  int *piStack_218;
  int *******pppppppiStack_210;
  int *piStack_208;
  int *******pppppppiStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  int *******pppppppiStack_1e0;
  int *piStack_1d8;
  undefined4 uStack_1c8;
  undefined3 uStack_1c4;
  int *******pppppppiStack_1c0;
  int *piStack_1b8;
  int *******pppppppiStack_1b0;
  int *piStack_1a8;
  int *******pppppppiStack_1a0;
  int *piStack_198;
  int *******pppppppiStack_190;
  int *piStack_188;
  int *******pppppppiStack_180;
  int *******pppppppiStack_170;
  int *piStack_168;
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
  long lStack_100;
  long lStack_f8;
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
  int ******ppppppiStack_98;
  int *piStack_90;
  undefined8 uStack_88;
  int *****pppppiStack_80;
  undefined8 uStack_78;
  
  if (*param_2 != '\x15') {
    uVar15 = FUN_108855c40(param_2,&ppppppiStack_98,&UNK_10b213328);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar15;
    return;
  }
  lStack_310 = *(long *)(param_2 + 0x10);
  lStack_308 = lStack_310 + *(long *)(param_2 + 0x18) * 0x40;
  pcStack_300 = (char *)0x0;
  ppppppiStack_2f8 = (int ******)0x0;
  lStack_1f8 = 0;
  lStack_1f0 = 8;
  lStack_1e8 = 0;
  pppppppiVar17 = (int *******)0x8000000000000002;
  while( true ) {
    FUN_100f24408(&uStack_2f0,&lStack_310);
    pcVar5 = pcStack_300;
    pppppppiStack_240 = pppppppiVar17;
    piStack_238 = unaff_x24;
    if ((byte)uStack_2f0 == '\x18') break;
    uVar2 = *(undefined4 *)((long)((ulong)&uStack_2f0 | 1) + 3);
    uStack_1c8._0_3_ = (undefined3)*(undefined4 *)((ulong)&uStack_2f0 | 1);
    uStack_1c8._3_1_ = (undefined1)uVar2;
    uStack_1c4 = (undefined3)((uint)uVar2 >> 8);
    piStack_1d8 = piStack_2d8;
    pppppppiStack_1e0 = pppppppiStack_2e0;
    if ((byte)uStack_2f0 == '\x16') {
      if (pppppppiVar17 != (int *******)0x8000000000000002) {
        pppppppiStack_e0 = (int *******)&UNK_108cadf95;
        piStack_d8 = (int *)0x5;
        uStack_2f0 = (int *******)&pppppppiStack_e0;
        piStack_2e8 = (int *)&DAT_100c7b3a0;
        bVar8 = true;
        uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2f0);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar15;
        goto LAB_101385310;
      }
      pcStack_300 = (char *)0x0;
      if (pcVar5 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
        goto LAB_101385578;
      }
      cVar3 = *pcVar5;
      pppppppiVar17 = (int *******)0x8000000000000001;
      if (cVar3 != '\x10') {
        if (cVar3 == '\x11') {
          FUN_1004de164(&uStack_2f0,*(undefined8 *)(pcVar5 + 8));
        }
        else {
          if (cVar3 == '\x12') goto LAB_101384c48;
          FUN_1004de164(&uStack_2f0);
        }
        if (uStack_2f0 == (int *******)0x8000000000000000) {
          *param_1 = 0x8000000000000000;
          param_1[1] = piStack_2e8;
          bVar8 = true;
          goto LAB_101385310;
        }
        piStack_d8 = piStack_2d8;
        pppppppiStack_e0 = pppppppiStack_2e0;
        piStack_c8 = piStack_2c8;
        pppppppiStack_d0 = uStack_2d0;
        piStack_b8 = piStack_2b8;
        pppppppiStack_c0 = pppppppiStack_2c0;
        pppppppiStack_b0 = pppppppiStack_2b0;
        pppppppiVar17 = uStack_2f0;
        unaff_x24 = piStack_2e8;
      }
LAB_101384c48:
      piStack_228 = piStack_d8;
      pppppppiStack_230 = pppppppiStack_e0;
      piStack_218 = piStack_c8;
      pppppppiStack_220 = pppppppiStack_d0;
      piStack_208 = piStack_b8;
      pppppppiStack_210 = pppppppiStack_c0;
      pppppppiStack_200 = pppppppiStack_b0;
    }
    else {
      if ((byte)uStack_2f0 == '\x17') {
        bVar8 = pppppppiVar17 == (int *******)0x8000000000000002;
        if (bVar8) {
          pppppppiStack_1c0 = (int *******)0x8000000000000001;
        }
        else {
          piStack_198 = piStack_218;
          pppppppiStack_1a0 = pppppppiStack_220;
          piStack_188 = piStack_208;
          pppppppiStack_190 = pppppppiStack_210;
          pppppppiStack_180 = pppppppiStack_200;
          piStack_1a8 = piStack_228;
          pppppppiStack_1b0 = pppppppiStack_230;
          pppppppiStack_1c0 = pppppppiVar17;
          piStack_1b8 = unaff_x24;
        }
        lStack_f8 = lStack_1f0 + lStack_1e8 * 0x40;
        lStack_100 = lStack_1f0;
        pppppppiStack_120 = (int *******)CONCAT71(pppppppiStack_120._1_7_,0x16);
        puStack_f0 = &UNK_10b236660;
        uStack_e8 = 2;
        pppppppiStack_e0 = (int *******)0x8000000000000001;
        if (lStack_1e8 != 0) {
          puVar13 = (undefined8 *)((ulong)&pppppppiStack_120 | 1);
          puVar11 = (undefined8 *)((ulong)&uStack_2f0 | 1);
          ppppppiVar18 = (int ******)0x8000000000000000;
          pppppppiVar17 = (int *******)0x8000000000000001;
          lVar16 = lStack_1f0;
          uVar15 = uStack_e8;
          puVar4 = puStack_f0;
          lVar14 = lStack_f8;
          goto LAB_101384d4c;
        }
        pppppppiStack_e0 = (int *******)0x8000000000000001;
        ppppppiVar18 = (int ******)0x8000000000000000;
        goto LAB_1013851a4;
      }
      *(undefined4 *)((ulong)&pppppppiStack_170 | 1) = uStack_1c8;
      *(undefined4 *)((long)((ulong)&pppppppiStack_170 | 1) + 3) = uVar2;
      piStack_158 = piStack_2d8;
      pppppppiStack_160 = pppppppiStack_2e0;
      pppppppiStack_170 = (int *******)CONCAT71(pppppppiStack_170._1_7_,(byte)uStack_2f0);
      piStack_168 = piStack_2e8;
      pcStack_300 = (char *)0x0;
      if (pcVar5 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_101385578:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10138557c);
        (*pcVar7)();
      }
      __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&pppppppiStack_e0);
      lVar16 = lStack_1e8;
      if ((char)pppppppiStack_e0 == '\x16') {
        *param_1 = 0x8000000000000000;
        param_1[1] = piStack_d8;
        bVar8 = true;
        FUN_100e077ec(&pppppppiStack_170);
        goto LAB_101385310;
      }
      uStack_2d0 = (int *******)
                   CONCAT44(*(undefined4 *)((long)((ulong)&pppppppiStack_e0 | 1) + 3),
                            *(int *)((ulong)&pppppppiStack_e0 | 1) << 8);
      piStack_2c8 = piStack_d8;
      piStack_2b8 = piStack_c8;
      pppppppiStack_2c0 = pppppppiStack_d0;
      piStack_2e8 = piStack_168;
      uStack_2f0 = pppppppiStack_170;
      piStack_2d8 = piStack_158;
      pppppppiStack_2e0 = pppppppiStack_160;
      uStack_2d0 = (int *******)CONCAT71(uStack_2d0._1_7_,(char)pppppppiStack_e0);
      if (lStack_1e8 == lStack_1f8) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_1f8);
      }
      puVar11 = (undefined8 *)(lStack_1f0 + lVar16 * 0x40);
      puVar11[1] = piStack_2e8;
      *puVar11 = uStack_2f0;
      puVar11[3] = piStack_2d8;
      puVar11[2] = pppppppiStack_2e0;
      puVar11[5] = piStack_2c8;
      puVar11[4] = uStack_2d0;
      puVar11[7] = piStack_2b8;
      puVar11[6] = pppppppiStack_2c0;
      lStack_1e8 = lVar16 + 1;
    }
  }
  *param_1 = 0x8000000000000000;
  param_1[1] = piStack_2e8;
  bVar8 = true;
  goto LAB_101385310;
  while (lVar16 = lVar1, lVar1 != lVar14) {
LAB_101384d4c:
    lVar1 = lVar16 + 0x40;
    __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E(&uStack_2f0,lVar16,puVar4,uVar15)
    ;
    bVar6 = (byte)uStack_2f0;
    if ((byte)uStack_2f0 != 0x16) {
      lVar16 = lVar16 + 0x40;
      lStack_100 = lVar16;
      if ((char)pppppppiStack_120 != '\x16') {
        FUN_100e077ec(&pppppppiStack_120);
      }
      piStack_118 = piStack_2c8;
      pppppppiStack_120 = uStack_2d0;
      piStack_108 = piStack_2b8;
      pppppppiStack_110 = pppppppiStack_2c0;
      if (bVar6 < 0xd) {
        if (bVar6 == 1) {
          iVar12 = 1;
          if (uStack_2f0._1_1_ != '\x01') {
            iVar12 = 2;
          }
          iVar10 = 0;
          if (uStack_2f0._1_1_ != '\0') {
            iVar10 = iVar12;
          }
          goto LAB_101385014;
        }
        if (bVar6 == 4) {
          iVar12 = 1;
          if (piStack_2e8 != (int *)0x1) {
            iVar12 = 2;
          }
          iVar10 = 0;
          if (piStack_2e8 != (int *)0x0) {
            iVar10 = iVar12;
          }
          goto LAB_101385014;
        }
        if (bVar6 == 0xc) {
          if (piStack_2d8 == (int *)0x3) {
            iVar10 = 1;
            if (*(short *)pppppppiStack_2e0 != 0x7275 ||
                *(char *)((long)pppppppiStack_2e0 + 2) != 'i') {
              iVar10 = 2;
            }
          }
          else {
            if (piStack_2d8 != (int *)0x5) goto LAB_101384f78;
            iVar10 = 2;
            if (*(int *)pppppppiStack_2e0 == 0x74656d5f &&
                *(char *)((long)pppppppiStack_2e0 + 4) == 'a') {
              iVar10 = 0;
            }
          }
          goto joined_r0x000101384ee4;
        }
LAB_101385680:
        piStack_d8 = piStack_330;
        pppppppiStack_e0 = pppppppiVar17;
        piVar9 = (int *)FUN_108855b04(&uStack_2f0,&ppppppiStack_98,&UNK_10b20efc0);
LAB_1013854bc:
        if (((ulong)ppppppiVar18 & 0x7fffffffffffffff) == 0) {
LAB_1013854e4:
          uVar15 = 1;
          goto LAB_101385238;
        }
      }
      else {
        if (bVar6 == 0xd) {
          if (pppppppiStack_2e0 == (int *******)0x3) {
            iVar10 = 1;
            if ((short)*piStack_2e8 != 0x7275 || *(char *)((long)piStack_2e8 + 2) != 'i') {
              iVar10 = 2;
            }
          }
          else {
            if (pppppppiStack_2e0 != (int *******)0x5) goto LAB_101384fe4;
            iVar10 = 2;
            if (*piStack_2e8 == 0x74656d5f && (char)piStack_2e8[1] == 'a') {
              iVar10 = 0;
            }
          }
LAB_101385014:
          FUN_100e077ec(&uStack_2f0);
        }
        else {
          if (bVar6 != 0xe) {
            if (bVar6 != 0xf) goto LAB_101385680;
            if (pppppppiStack_2e0 == (int *******)0x3) {
              if ((((char)*piStack_2e8 != 'u') || (*(char *)((long)piStack_2e8 + 1) != 'r')) ||
                 (*(char *)((long)piStack_2e8 + 2) != 'i')) goto LAB_101384fe4;
              iVar10 = 1;
            }
            else if ((((pppppppiStack_2e0 == (int *******)0x5) && ((char)*piStack_2e8 == '_')) &&
                     ((*(char *)((long)piStack_2e8 + 1) == 'm' &&
                      ((*(char *)((long)piStack_2e8 + 2) == 'e' &&
                       (*(char *)((long)piStack_2e8 + 3) == 't')))))) &&
                    ((char)piStack_2e8[1] == 'a')) {
              iVar10 = 0;
            }
            else {
LAB_101384fe4:
              iVar10 = 2;
            }
            goto LAB_101385014;
          }
          if (piStack_2d8 == (int *)0x3) {
            if (((*(char *)pppppppiStack_2e0 != 'u') ||
                (*(char *)((long)pppppppiStack_2e0 + 1) != 'r')) ||
               (*(char *)((long)pppppppiStack_2e0 + 2) != 'i')) goto LAB_101384f78;
            iVar10 = 1;
          }
          else if (((piStack_2d8 == (int *)0x5) && (*(char *)pppppppiStack_2e0 == '_')) &&
                  (((*(char *)((long)pppppppiStack_2e0 + 1) == 'm' &&
                    ((*(char *)((long)pppppppiStack_2e0 + 2) == 'e' &&
                     (*(char *)((long)pppppppiStack_2e0 + 3) == 't')))) &&
                   (*(char *)((long)pppppppiStack_2e0 + 4) == 'a')))) {
            iVar10 = 0;
          }
          else {
LAB_101384f78:
            iVar10 = 2;
          }
joined_r0x000101384ee4:
          if (piStack_2e8 != (int *)0x0) {
            _free();
          }
        }
        if (iVar10 == 0) {
          if (pppppppiVar17 == (int *******)0x8000000000000001) {
            FUN_100623670(&uStack_2f0,&pppppppiStack_120);
            if (uStack_2f0 != (int *******)0x8000000000000001) {
              piStack_330 = piStack_2e8;
              piStack_c8 = piStack_2d8;
              pppppppiStack_d0 = pppppppiStack_2e0;
              piStack_b8 = piStack_2c8;
              pppppppiStack_c0 = uStack_2d0;
              piStack_a8 = piStack_2b8;
              pppppppiStack_b0 = pppppppiStack_2c0;
              pppppppiStack_a0 = pppppppiStack_2b0;
              lVar14 = lStack_f8;
              lVar16 = lStack_100;
              pppppppiVar17 = uStack_2f0;
              goto LAB_101385120;
            }
            pppppppiVar17 = (int *******)0x8000000000000001;
            pppppppiStack_e0 = (int *******)0x8000000000000001;
            piStack_d8 = piStack_330;
            piVar9 = piStack_2e8;
          }
          else {
            piStack_d8 = piStack_330;
            ppppppiStack_98 = (int ******)&UNK_108cadf95;
            piStack_90 = (int *)0x5;
            uStack_2f0 = &ppppppiStack_98;
            piStack_2e8 = (int *)&DAT_100c7b3a0;
            pppppppiStack_e0 = pppppppiVar17;
            piVar9 = (int *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2f0);
          }
          goto LAB_1013854bc;
        }
        cVar3 = (char)pppppppiStack_120;
        if (iVar10 != 1) {
          pppppppiStack_120 = (int *******)CONCAT71(pppppppiStack_120._1_7_,0x16);
          if (cVar3 == '\x16') {
            piStack_d8 = piStack_330;
            pppppppiStack_e0 = pppppppiVar17;
            piVar9 = (int *)FUN_1088561c0(&UNK_108cde170,0x10);
            goto LAB_1013854bc;
          }
          uVar15 = *puVar13;
          puVar11[1] = puVar13[1];
          *puVar11 = uVar15;
          uVar15 = *(undefined8 *)((long)puVar13 + 0xf);
          *(undefined8 *)((long)puVar11 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
          *(undefined8 *)((long)puVar11 + 0xf) = uVar15;
          uStack_2f0 = (int *******)CONCAT71(uStack_2f0._1_7_,cVar3);
          FUN_100e077ec(&uStack_2f0);
LAB_101385120:
          lVar1 = lStack_100;
          uVar15 = uStack_e8;
          puVar4 = puStack_f0;
          if (lVar16 == lVar14) break;
          goto LAB_101384d4c;
        }
        if (ppppppiVar18 == (int ******)0x8000000000000000) {
          pppppppiStack_120 = (int *******)CONCAT71(pppppppiStack_120._1_7_,0x16);
          if (cVar3 == '\x16') {
            piStack_d8 = piStack_330;
            pppppppiStack_e0 = pppppppiVar17;
            piVar9 = (int *)FUN_1088561c0(&UNK_108cde170,0x10);
          }
          else {
            uVar15 = *puVar13;
            puVar11[1] = puVar13[1];
            *puVar11 = uVar15;
            uVar15 = *(undefined8 *)((long)puVar13 + 0xf);
            *(undefined8 *)((long)puVar11 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
            *(undefined8 *)((long)puVar11 + 0xf) = uVar15;
            uStack_2f0 = (int *******)CONCAT71(uStack_2f0._1_7_,cVar3);
            FUN_1004b62d4(&ppppppiStack_98,&uStack_2f0);
            if (ppppppiStack_98 != (int ******)0x8000000000000000) {
              uStack_340 = uStack_88;
              piStack_338 = piStack_90;
              ppppppiVar18 = ppppppiStack_98;
              goto LAB_101385120;
            }
            piStack_d8 = piStack_330;
            piVar9 = piStack_90;
            pppppppiStack_e0 = pppppppiVar17;
          }
          goto LAB_1013854e4;
        }
        piStack_d8 = piStack_330;
        ppppppiStack_98 = (int ******)&UNK_108cb4cd2;
        piStack_90 = (int *)0x3;
        uStack_2f0 = &ppppppiStack_98;
        piStack_2e8 = (int *)&DAT_100c7b3a0;
        uVar15 = 1;
        pppppppiStack_e0 = pppppppiVar17;
        piVar9 = (int *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_2f0);
        if (ppppppiVar18 == (int ******)0x0) goto LAB_101385238;
      }
      _free(piStack_338);
      uVar15 = 1;
      pppppppiVar17 = pppppppiStack_e0;
      goto LAB_101385238;
    }
  }
  lStack_100 = lVar1;
  piStack_d8 = piStack_330;
  pppppppiStack_e0 = pppppppiVar17;
  if (pppppppiVar17 == (int *******)0x8000000000000001) {
LAB_1013851a4:
    uStack_2f0 = (int *******)0x8000000000000000;
    pppppppiVar17 = (int *******)0x8000000000000001;
    uVar15 = 1;
    if (ppppppiVar18 == (int ******)0x8000000000000000) goto LAB_1013851c0;
LAB_10138516c:
    piStack_148 = piStack_2c8;
    pppppppiStack_150 = uStack_2d0;
    piStack_138 = piStack_2b8;
    pppppppiStack_140 = pppppppiStack_2c0;
    pppppppiStack_130 = pppppppiStack_2b0;
    piStack_168 = piStack_2e8;
    pppppppiStack_170 = uStack_2f0;
    piStack_158 = piStack_2d8;
    pppppppiStack_160 = pppppppiStack_2e0;
    if ((char)pppppppiStack_120 == '\x16') goto LAB_101385384;
LAB_1013852ac:
    FUN_100e077ec(&pppppppiStack_120);
    piVar9 = piStack_338;
    if (ppppppiVar18 != (int ******)0x8000000000000000) {
LAB_101385384:
      param_1[6] = piStack_158;
      param_1[5] = pppppppiStack_160;
      param_1[8] = piStack_148;
      param_1[7] = pppppppiStack_150;
      param_1[10] = piStack_138;
      param_1[9] = pppppppiStack_140;
      param_1[0xb] = pppppppiStack_130;
      param_1[4] = piStack_168;
      param_1[3] = pppppppiStack_170;
      param_1[0x11] = piStack_198;
      param_1[0x10] = pppppppiStack_1a0;
      param_1[0x13] = piStack_188;
      param_1[0x12] = pppppppiStack_190;
      param_1[0x14] = pppppppiStack_180;
      param_1[0xd] = piStack_1b8;
      param_1[0xc] = pppppppiStack_1c0;
      param_1[0xf] = piStack_1a8;
      param_1[0xe] = pppppppiStack_1b0;
      *param_1 = ppppppiVar18;
      param_1[1] = piStack_338;
      param_1[2] = uStack_340;
      FUN_100d5c778(&lStack_1f8);
      uStack_268 = param_1[0x11];
      lStack_270 = param_1[0x10];
      uStack_258 = param_1[0x13];
      uStack_260 = param_1[0x12];
      uStack_250 = param_1[0x14];
      uStack_2a8 = param_1[9];
      pppppppiStack_2b0 = (int *******)param_1[8];
      uStack_298 = param_1[0xb];
      uStack_2a0 = param_1[10];
      uStack_288 = param_1[0xd];
      lStack_290 = param_1[0xc];
      lStack_278 = param_1[0xf];
      uStack_280 = param_1[0xe];
      piStack_2e8 = (int *)param_1[1];
      uStack_2f0 = (int *******)*param_1;
      piStack_2d8 = (int *)param_1[3];
      pppppppiStack_2e0 = (int *******)param_1[2];
      piStack_2c8 = (int *)param_1[5];
      uStack_2d0 = (int *******)param_1[4];
      piStack_2b8 = (int *)param_1[7];
      pppppppiStack_2c0 = (int *******)param_1[6];
      if (lStack_308 - lStack_310 == 0) {
        return;
      }
      pppppppiStack_e0 = (int *******)ppppppiStack_2f8;
      uVar15 = FUN_1087e422c((long)ppppppiStack_2f8 + ((ulong)(lStack_308 - lStack_310) >> 6),
                             &pppppppiStack_e0,&UNK_10b23a190);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar15;
      if ((lStack_290 != -0x7fffffffffffffff) && (lStack_290 != -0x8000000000000000)) {
        if ((lStack_270 != 0) && (lStack_270 * 9 != -0x11)) {
          _free(lStack_278 + lStack_270 * -8 + -8);
        }
        func_0x000100cd7284(&lStack_290);
      }
      FUN_100df1aa4(&uStack_2f0);
      return;
    }
  }
  else {
    uVar15 = 0;
    piStack_2c8 = piStack_b8;
    uStack_2d0 = pppppppiStack_c0;
    piStack_2b8 = piStack_a8;
    pppppppiStack_2c0 = pppppppiStack_b0;
    pppppppiStack_2b0 = pppppppiStack_a0;
    piStack_2e8 = piStack_330;
    piStack_2d8 = piStack_c8;
    pppppppiStack_2e0 = pppppppiStack_d0;
    uStack_2f0 = pppppppiVar17;
    if (ppppppiVar18 != (int ******)0x8000000000000000) goto LAB_10138516c;
LAB_1013851c0:
    pppppiStack_80 = (int *****)&UNK_108cb4cd2;
    uStack_78 = 3;
    ppppppiStack_98 = &pppppiStack_80;
    piStack_90 = (int *)&DAT_100c7b3a0;
    piVar9 = (int *)FUN_108856088(s_missing_field_____108ac28f7,&ppppppiStack_98);
    if (uStack_2f0 != (int *******)0x8000000000000000) {
      if ((uStack_2d0 != (int *******)0x0) && ((long)uStack_2d0 * 9 != -0x11)) {
        _free(piStack_2d8 + (long)uStack_2d0 * -2 + -2);
      }
      func_0x000100cd7284(&uStack_2f0);
    }
LAB_101385238:
    if ((((int)uVar15 != 0) && (pppppppiVar17 != (int *******)0x8000000000000001)) &&
       (pppppppiVar17 != (int *******)0x8000000000000000)) {
      if ((pppppppiStack_c0 != (int *******)0x0) && ((long)pppppppiStack_c0 * 9 != -0x11)) {
        _free(piStack_c8 + (long)pppppppiStack_c0 * -2 + -2);
      }
      func_0x000100cd7284(&pppppppiStack_e0);
    }
    if ((char)pppppppiStack_120 != '\x16') {
      ppppppiVar18 = (int ******)0x8000000000000000;
      uStack_340 = uVar15;
      piStack_338 = piVar9;
      goto LAB_1013852ac;
    }
  }
  *param_1 = 0x8000000000000000;
  param_1[1] = piVar9;
  if ((pppppppiStack_1c0 != (int *******)0x8000000000000001) &&
     (pppppppiStack_1c0 != (int *******)0x8000000000000000)) {
    if ((pppppppiStack_1a0 != (int *******)0x0) && ((long)pppppppiStack_1a0 * 9 != -0x11)) {
      _free(piStack_1a8 + (long)pppppppiStack_1a0 * -2 + -2);
    }
    func_0x000100cd7284(&pppppppiStack_1c0);
  }
LAB_101385310:
  FUN_100d5c778(&lStack_1f8);
  bVar8 = (bool)(bVar8 ^ 1);
  if (pppppppiStack_240 == (int *******)0x8000000000000002) {
    bVar8 = true;
  }
  if (((!bVar8) && (pppppppiStack_240 != (int *******)0x8000000000000001)) &&
     (pppppppiStack_240 != (int *******)0x8000000000000000)) {
    if ((pppppppiStack_220 != (int *******)0x0) && ((long)pppppppiStack_220 * 9 != -0x11)) {
      _free(piStack_228 + (long)pppppppiStack_220 * -2 + -2);
    }
    func_0x000100cd7284(&pppppppiStack_240);
  }
  return;
}

