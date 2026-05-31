
/* WARNING: Removing unreachable block (ram,0x000101435b8c) */
/* WARNING: Removing unreachable block (ram,0x000101435bdc) */

void FUN_101434cac(ulong *param_1,char *param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined **ppuVar13;
  ulong uVar14;
  int *piVar15;
  char *pcVar16;
  undefined *extraout_x9;
  undefined *extraout_x11;
  undefined **ppuVar17;
  byte *pbVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  char *pcVar23;
  long lVar24;
  ulong unaff_x24;
  undefined **ppuVar25;
  undefined **unaff_x26;
  undefined *unaff_x27;
  long *plVar26;
  undefined **ppuVar27;
  undefined1 auVar28 [16];
  long lStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  undefined4 uStack_288;
  undefined4 uStack_284;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined1 uStack_231;
  long lStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  ulong *puStack_208;
  char *pcStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  char *pcStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if (*param_2 != '\x14') {
    puVar5 = (undefined *)FUN_108855c40(param_2,&ppuStack_e0,&UNK_10b209fe0);
    goto LAB_101435794;
  }
  pcVar23 = *(char **)(param_2 + 0x10);
  ppuVar22 = *(undefined ***)(param_2 + 0x18);
  pcVar16 = pcVar23 + (long)ppuVar22 * 0x20;
  ppuVar20 = ppuVar22;
  if ((undefined **)0x38e2 < ppuVar22) {
    ppuVar20 = (undefined **)0x38e3;
  }
  if (ppuVar22 == (undefined **)0x0) {
    ppuStack_1c8 = (undefined **)0x0;
    puStack_1c0 = (undefined *)0x8;
    ppuStack_1b8 = (undefined **)0x0;
    ppuVar20 = (undefined **)0x0;
  }
  else {
    lVar19 = (long)ppuVar20 * 0x48;
    puStack_208 = param_1;
    puStack_1c0 = (undefined *)_malloc(lVar19);
    if (puStack_1c0 == (undefined *)0x0) {
      uVar6 = func_0x0001087c9084(8,lVar19);
      FUN_100e0e6a8(&ppuStack_e0);
      uVar6 = __Unwind_Resume(uVar6);
      FUN_100dda168(&ppuStack_128);
      FUN_100e0e6a8(&ppuStack_1c8);
      uVar6 = __Unwind_Resume(uVar6);
      FUN_100e0e6a8(&ppuStack_1c8);
      uVar6 = __Unwind_Resume(uVar6);
      FUN_100e75348(&ppuStack_98);
      if ((-0x7fffffffffffffff < (long)pcVar23) && (pcVar23 != (char *)0x0)) {
        _free(puStack_1e0);
      }
      if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
        _free(puStack_1d8);
      }
      FUN_100e0e6a8(&ppuStack_1c8);
      auVar28 = __Unwind_Resume(uVar6);
      pbVar7 = auVar28._8_8_;
      plVar26 = auVar28._0_8_;
      uStack_218 = 0x101435970;
      bVar2 = *pbVar7;
      lStack_230 = lVar19;
      uStack_228 = uVar6;
      puStack_220 = &stack0xfffffffffffffff0;
      if (bVar2 - 0xc < 2) {
        pbVar18 = (byte *)0x0;
joined_r0x000101435a10:
        if (bVar2 < 0xd) {
          if (bVar2 == 1) {
            uVar14 = (ulong)pbVar7[1];
            if (2 < pbVar7[1]) {
LAB_101435be0:
              lStack_2f0 = CONCAT71(lStack_2f0._1_7_,1);
              uStack_2e8 = uVar14;
              FUN_1087e3ee8(&uStack_290,&lStack_2f0,&UNK_10b229e80,&UNK_10b20a590);
              goto LAB_101435a74;
            }
LAB_101435afc:
            iVar9 = (int)uVar14;
          }
          else {
            if (bVar2 != 4) {
              if (bVar2 != 0xc) {
LAB_101435d50:
                FUN_108855bf0(&uStack_290,pbVar7,&uStack_231,&UNK_10b214b68);
                goto LAB_101435a74;
              }
              piVar15 = *(int **)(pbVar7 + 0x10);
              lVar19 = *(long *)(pbVar7 + 0x18);
              if (lVar19 == 3) goto LAB_101435b90;
              if (lVar19 == 6) goto LAB_101435b64;
              if ((lVar19 != 4) || (*piVar15 != 0x68676968)) goto LAB_101435c10;
              uVar14 = 2;
              goto LAB_101435afc;
            }
            uVar14 = *(ulong *)(pbVar7 + 8);
            if (2 < uVar14) goto LAB_101435be0;
            iVar9 = (int)uVar14;
          }
          iVar10 = (int)uVar14;
          if (iVar9 == 0) goto LAB_101435a48;
LAB_101435b00:
          if (iVar10 == 1) {
            if (((pbVar18 == (byte *)0x0) || (*pbVar18 == 0x12)) ||
               (FUN_108855bf0(&uStack_290,pbVar18,&uStack_231,&UNK_10b20a5c0),
               CONCAT71(uStack_28f,uStack_290) == 2)) {
              uStack_2e8._0_1_ = 1;
              goto LAB_101435b34;
            }
          }
          else if (((pbVar18 == (byte *)0x0) || (*pbVar18 == 0x12)) ||
                  (FUN_108855bf0(&uStack_290,pbVar18,&uStack_231,&UNK_10b20a5c0),
                  CONCAT71(uStack_28f,uStack_290) == 2)) {
            uStack_2e8._0_1_ = 2;
            goto LAB_101435b34;
          }
        }
        else {
          if (bVar2 != 0xd) {
            if (bVar2 == 0xe) {
              uVar6 = *(undefined8 *)(pbVar7 + 0x10);
              uVar8 = *(undefined8 *)(pbVar7 + 0x18);
            }
            else {
              if (bVar2 != 0xf) goto LAB_101435d50;
              uVar6 = *(undefined8 *)(pbVar7 + 8);
              uVar8 = *(undefined8 *)(pbVar7 + 0x10);
            }
            FUN_100b43678(&uStack_290,uVar6,uVar8);
LAB_101435a74:
            uVar14 = (ulong)(byte)uStack_288;
            if (CONCAT71(uStack_28f,uStack_290) != 2) {
              lStack_2d0 = lStack_270;
              lStack_2d8 = lStack_278;
              lStack_2c0 = lStack_260;
              lStack_2c8 = lStack_268;
              lStack_2b0 = lStack_250;
              lStack_2b8 = lStack_258;
              lStack_2a0 = lStack_240;
              lStack_2a8 = lStack_248;
              uStack_2e8 = CONCAT71((int7)(CONCAT44(uStack_284,uStack_288) >> 8),(byte)uStack_288);
              lStack_2e0 = lStack_280;
              lStack_2f0 = CONCAT71(uStack_28f,uStack_290);
              goto LAB_101435acc;
            }
            goto LAB_101435afc;
          }
          piVar15 = *(int **)(pbVar7 + 8);
          lVar19 = *(long *)(pbVar7 + 0x10);
          if (lVar19 != 3) {
            if (lVar19 == 6) {
LAB_101435b64:
              if (*piVar15 != 0x6964656d || (short)piVar15[1] != 0x6d75) {
LAB_101435c10:
                FUN_1087e44e4(&uStack_290,piVar15,lVar19,&UNK_10b222318,3);
                goto LAB_101435a74;
              }
              iVar10 = 1;
            }
            else {
              if ((lVar19 != 4) || (*piVar15 != 0x68676968)) goto LAB_101435c10;
              iVar10 = 2;
            }
            goto LAB_101435b00;
          }
LAB_101435b90:
          if ((short)*piVar15 != 0x6f6c || *(char *)((long)piVar15 + 2) != 'w') goto LAB_101435c10;
LAB_101435a48:
          if (((pbVar18 == (byte *)0x0) || (*pbVar18 == 0x12)) ||
             (FUN_108855bf0(&uStack_290,pbVar18,&uStack_231,&UNK_10b20a5c0),
             CONCAT71(uStack_28f,uStack_290) == 2)) {
            uStack_2e8._0_1_ = 0;
            goto LAB_101435b34;
          }
        }
        lStack_2c8 = lStack_268;
        lStack_2d0 = lStack_270;
        lStack_2b8 = lStack_258;
        lStack_2c0 = lStack_260;
        lStack_2a8 = lStack_248;
        lStack_2b0 = lStack_250;
        lStack_2a0 = lStack_240;
        uStack_2e8 = CONCAT44(uStack_284,uStack_288);
        lStack_2f0 = CONCAT71(uStack_28f,uStack_290);
        lStack_2d8 = lStack_278;
        lStack_2e0 = lStack_280;
      }
      else if (bVar2 == 0x15) {
        if (*(long *)(pbVar7 + 0x18) == 1) {
          pbVar7 = *(byte **)(pbVar7 + 0x10);
          pbVar18 = pbVar7 + 0x20;
          bVar2 = *pbVar7;
          goto joined_r0x000101435a10;
        }
        uStack_290 = 0xb;
        FUN_1087e3ee8(&lStack_2f0,&uStack_290,&UNK_10b20a580,&UNK_10b20a590);
      }
      else {
        FUN_1088556a8(&uStack_290);
        FUN_1087e3db0(&lStack_2f0,&uStack_290,&UNK_10b20a5b0,&UNK_10b20a590);
      }
      if (lStack_2f0 != 2) {
LAB_101435acc:
        plVar26[5] = lStack_2c8;
        plVar26[4] = lStack_2d0;
        plVar26[7] = lStack_2b8;
        plVar26[6] = lStack_2c0;
        plVar26[9] = lStack_2a8;
        plVar26[8] = lStack_2b0;
        plVar26[10] = lStack_2a0;
        plVar26[1] = uStack_2e8;
        *plVar26 = lStack_2f0;
        plVar26[3] = lStack_2d8;
        plVar26[2] = lStack_2e0;
        return;
      }
LAB_101435b34:
      *(undefined1 *)(plVar26 + 1) = (undefined1)uStack_2e8;
      *plVar26 = 2;
      return;
    }
    ppuStack_1b8 = (undefined **)0x0;
    ppuStack_210 = (undefined **)(((long)ppuVar22 * 0x20 - 0x20U >> 5) + 1);
    pcStack_1d0 = pcVar23;
    pcVar23 = pcVar16;
    pcStack_200 = pcVar16;
    ppuStack_1c8 = ppuVar20;
    do {
      pcVar16 = pcStack_1d0 + 0x20;
      if (*pcStack_1d0 != '\x14') {
        if (*pcStack_1d0 == '\x15') {
          lVar19 = *(long *)(pcStack_1d0 + 0x10);
          lVar1 = *(long *)(pcStack_1d0 + 0x18);
          ppuStack_98 = (undefined **)0x8000000000000001;
          if (lVar1 == 0) {
            ppuVar27 = (undefined **)0x8000000000000001;
            ppuStack_98 = (undefined **)0x8000000000000001;
            ppuVar22 = (undefined **)0x8000000000000001;
            pcStack_1d0 = pcVar16;
          }
          else {
            lVar24 = 0;
            ppuVar25 = (undefined **)0x8000000000000000;
            ppuVar27 = (undefined **)0x8000000000000001;
            ppuVar22 = (undefined **)0x8000000000000001;
            ppuVar20 = (undefined **)0x8000000000000001;
            pcStack_1d0 = pcVar16;
            do {
              pbVar7 = (byte *)(lVar19 + lVar24) + 0x20;
              bVar2 = *(byte *)(lVar19 + lVar24);
              puVar5 = puStack_1e0;
              if (bVar2 < 0xd) {
                if (bVar2 == 1) {
                  cVar3 = *(char *)(lVar19 + lVar24 + 1);
                  if (cVar3 == '\0') {
LAB_101434fe4:
                    if (ppuVar25 != (undefined **)0x8000000000000000) {
                      puStack_90 = puStack_1f8;
                      puStack_80 = &UNK_108cb16c3;
                      uStack_78 = 3;
                      ppuStack_e0 = &puStack_80;
                      puStack_d8 = &DAT_100c7b3a0;
                      ppuStack_98 = ppuVar20;
                      puStack_88 = (undefined *)unaff_x26;
                      puStack_120 = (undefined *)
                                    FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_e0);
                      goto joined_r0x000101435460;
                    }
                    FUN_1004e07f8(&ppuStack_e0);
                    if (ppuStack_e0 == (undefined **)0x8000000000000000) {
                      ppuVar25 = (undefined **)0x0;
                      ppuStack_98 = ppuVar20;
                      puStack_88 = (undefined *)unaff_x26;
                      puStack_120 = puStack_d8;
                      puStack_90 = puStack_1f8;
                      unaff_x27 = puStack_d8;
                      goto joined_r0x000101435460;
                    }
                    puStack_1d8 = puStack_d8;
                    puStack_1e8 = (undefined *)ppuStack_d0;
                    ppuVar25 = ppuStack_e0;
                    puVar5 = puStack_1e0;
                  }
                  else {
                    if (cVar3 == '\x01') goto LAB_101434fac;
                    if (cVar3 != '\x02') goto LAB_101434df8;
LAB_10143507c:
                    if (ppuVar27 != (undefined **)0x8000000000000001) {
                      puStack_90 = puStack_1f8;
                      puStack_80 = &UNK_108cb16c6;
                      uStack_78 = 5;
                      ppuStack_e0 = &puStack_80;
                      puStack_d8 = &DAT_100c7b3a0;
                      ppuStack_98 = ppuVar20;
                      puStack_88 = (undefined *)unaff_x26;
                      puStack_120 = (undefined *)
                                    FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_e0);
                      ppuStack_128 = (undefined **)0x8000000000000000;
                      if (ppuVar27 != (undefined **)0x8000000000000000) goto LAB_1014351e0;
                      goto LAB_10143521c;
                    }
                    bVar2 = *pbVar7;
                    if (bVar2 == 0x10) {
LAB_101434df4:
                      ppuVar20 = (undefined **)0x8000000000000000;
                      ppuVar27 = (undefined **)0x8000000000000000;
                    }
                    else {
                      if (bVar2 == 0x11) {
                        FUN_1004e02c0(&ppuStack_e0,*(undefined8 *)(lVar19 + lVar24 + 0x28));
                      }
                      else {
                        if (bVar2 == 0x12) goto LAB_101434df4;
                        FUN_1004e02c0(&ppuStack_e0);
                      }
                      puStack_1f8 = puStack_d8;
                      if (ppuStack_e0 != (undefined **)0x8000000000000000) {
                        unaff_x26 = ppuStack_d0;
                      }
                      ppuVar20 = ppuStack_e0;
                      if ((long)ppuStack_e0 < -0x7ffffffffffffffe) {
                        ppuVar20 = (undefined **)0x8000000000000001;
                      }
                      ppuVar27 = ppuVar20;
                      puVar5 = puStack_1e0;
                      if (ppuVar20 == (undefined **)0x8000000000000001) {
                        ppuStack_128 = (undefined **)0x8000000000000000;
                        puStack_120 = puStack_d8;
                        goto LAB_10143521c;
                      }
                    }
                  }
                }
                else {
                  if (bVar2 != 4) {
                    if (bVar2 != 0xc) goto LAB_10143553c;
                    plVar26 = *(long **)(lVar19 + lVar24 + 0x10);
                    lVar12 = *(long *)(lVar19 + lVar24 + 0x18);
                    goto joined_r0x000101434e38;
                  }
                  lVar12 = *(long *)(lVar19 + lVar24 + 8);
                  if (lVar12 == 0) goto LAB_101434fe4;
                  if (lVar12 != 1) {
                    if (lVar12 == 2) goto LAB_10143507c;
                    goto LAB_101434df8;
                  }
LAB_101434fac:
                  if (ppuVar22 != (undefined **)0x8000000000000001) {
                    puStack_90 = puStack_1f8;
                    puStack_80 = &UNK_108c98350;
                    uStack_78 = 8;
                    ppuStack_e0 = &puStack_80;
                    puStack_d8 = &DAT_100c7b3a0;
                    ppuStack_98 = ppuVar20;
                    puStack_88 = (undefined *)unaff_x26;
                    puStack_120 = (undefined *)
                                  FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_e0);
                    goto joined_r0x000101435460;
                  }
                  bVar2 = *pbVar7;
                  ppuVar22 = (undefined **)0x8000000000000000;
                  puVar5 = unaff_x27;
                  if (bVar2 != 0x10) {
                    if (bVar2 == 0x11) {
                      FUN_1004e07f8(&ppuStack_e0,*(undefined8 *)(lVar19 + lVar24 + 0x28));
                    }
                    else {
                      puVar5 = unaff_x27;
                      if (bVar2 == 0x12) goto LAB_101434df8;
                      FUN_1004e07f8(&ppuStack_e0);
                    }
                    if (ppuStack_e0 != (undefined **)0x8000000000000000) {
                      puStack_1f0 = (undefined *)ppuStack_d0;
                    }
                    ppuVar22 = ppuStack_e0;
                    if ((long)ppuStack_e0 < -0x7ffffffffffffffe) {
                      ppuVar22 = (undefined **)0x8000000000000001;
                    }
                    unaff_x27 = puStack_d8;
                    puVar5 = puStack_d8;
                    if (ppuVar22 == (undefined **)0x8000000000000001) {
                      ppuVar22 = (undefined **)0x8000000000000001;
                      ppuStack_98 = ppuVar20;
                      puStack_88 = (undefined *)unaff_x26;
                      puStack_120 = puStack_d8;
                      puStack_90 = puStack_1f8;
                      goto joined_r0x000101435460;
                    }
                  }
                }
              }
              else if (bVar2 == 0xd) {
                plVar26 = *(long **)(lVar19 + lVar24 + 8);
                lVar12 = *(long *)(lVar19 + lVar24 + 0x10);
joined_r0x000101434e38:
                if (lVar12 == 8) {
                  if (*plVar26 == 0x65707954656d696d) goto LAB_101434fac;
                }
                else if (lVar12 == 5) {
                  if ((int)*plVar26 == 0x657a6973 && *(char *)((long)plVar26 + 4) == 's')
                  goto LAB_10143507c;
                }
                else if ((lVar12 == 3) &&
                        ((short)*plVar26 == 0x7273 && *(char *)((long)plVar26 + 2) == 'c'))
                goto LAB_101434fe4;
              }
              else {
                if (bVar2 == 0xe) {
                  pcVar16 = *(char **)(lVar19 + lVar24 + 0x10);
                  lVar12 = *(long *)(lVar19 + lVar24 + 0x18);
                }
                else {
                  if (bVar2 != 0xf) {
LAB_10143553c:
                    puStack_90 = puStack_1f8;
                    ppuStack_98 = ppuVar20;
                    puStack_88 = (undefined *)unaff_x26;
                    puStack_120 = (undefined *)
                                  FUN_108855c40(lVar19 + lVar24,&ppuStack_e0,&UNK_10b20d5a0);
                    goto joined_r0x000101435460;
                  }
                  pcVar16 = *(char **)(lVar19 + lVar24 + 8);
                  lVar12 = *(long *)(lVar19 + lVar24 + 0x10);
                }
                if (lVar12 == 8) {
                  if (((((*pcVar16 == 'm') && (pcVar16[1] == 'i')) && (pcVar16[2] == 'm')) &&
                      ((pcVar16[3] == 'e' && (pcVar16[4] == 'T')))) &&
                     ((pcVar16[5] == 'y' && ((pcVar16[6] == 'p' && (pcVar16[7] == 'e'))))))
                  goto LAB_101434fac;
                }
                else if (lVar12 == 5) {
                  if (((*pcVar16 == 's') && (pcVar16[1] == 'i')) &&
                     ((pcVar16[2] == 'z' && ((pcVar16[3] == 'e' && (pcVar16[4] == 's'))))))
                  goto LAB_10143507c;
                }
                else if ((((lVar12 == 3) && (*pcVar16 == 's')) && (pcVar16[1] == 'r')) &&
                        (pcVar16[2] == 'c')) goto LAB_101434fe4;
              }
LAB_101434df8:
              puStack_1e0 = puVar5;
              lVar24 = lVar24 + 0x40;
            } while (lVar1 * 0x40 - lVar24 != 0);
            puStack_90 = puStack_1f8;
            ppuStack_98 = ppuVar20;
            puStack_88 = (undefined *)unaff_x26;
            if (ppuVar25 != (undefined **)0x8000000000000000) {
              ppuStack_110 = (undefined **)0x8000000000000000;
              if (ppuVar22 != (undefined **)0x8000000000000001) {
                ppuStack_110 = ppuVar22;
              }
              puStack_120 = puStack_1d8;
              ppuStack_f8 = (undefined **)0x8000000000000000;
              if (ppuVar27 != (undefined **)0x8000000000000001) {
                ppuStack_f8 = ppuVar27;
              }
              puStack_118 = puStack_1e8;
              puStack_108 = puStack_1e0;
              puStack_100 = puStack_1f0;
              puStack_f0 = puStack_1f8;
              pcVar23 = pcStack_200;
              ppuStack_128 = ppuVar25;
              puStack_e8 = (undefined *)unaff_x26;
              goto LAB_101435360;
            }
          }
          puStack_80 = &UNK_108cb16c3;
          uStack_78 = 3;
          ppuVar25 = (undefined **)0x0;
          ppuStack_e0 = &puStack_80;
          puStack_d8 = &DAT_100c7b3a0;
          puStack_120 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_e0);
joined_r0x000101435460:
          ppuStack_128 = (undefined **)0x8000000000000000;
          if (-0x7fffffffffffffff < (long)ppuVar27) {
LAB_1014351e0:
            puVar5 = puStack_1f8;
            ppuStack_128 = (undefined **)0x8000000000000000;
            if (unaff_x26 != (undefined **)0x0) {
              puVar11 = (undefined8 *)(puStack_1f8 + 8);
              do {
                if (puVar11[-1] != 0) {
                  _free(*puVar11);
                }
                puVar11 = puVar11 + 3;
                unaff_x26 = (undefined **)((long)unaff_x26 + -1);
              } while (unaff_x26 != (undefined **)0x0);
            }
            if (ppuVar27 != (undefined **)0x0) {
              _free(puVar5);
            }
          }
LAB_10143521c:
          if ((-0x7fffffffffffffff < (long)ppuVar22) && (ppuVar22 != (undefined **)0x0)) {
            _free(puStack_1e0);
          }
          pcVar23 = pcStack_200;
          if (((ulong)ppuVar25 & 0x7fffffffffffffff) != 0) {
            _free(puStack_1d8);
          }
          goto LAB_101435360;
        }
        pcVar23 = pcStack_1d0;
        pcStack_1d0 = pcVar16;
        puVar5 = (undefined *)FUN_108855c40(pcVar23,&ppuStack_e0,&UNK_10b20b4c0);
LAB_1014356d4:
        ppuVar20 = ppuStack_1b8;
        puVar4 = puStack_1c0;
        if (ppuStack_1b8 != (undefined **)0x0) {
          ppuVar22 = (undefined **)0x0;
          do {
            plVar26 = (long *)(puVar4 + (long)ppuVar22 * 0x48);
            if (*plVar26 != 0) {
              _free(plVar26[1]);
            }
            if (plVar26[3] == -0x8000000000000000 || plVar26[3] == 0) {
              lVar19 = plVar26[6];
            }
            else {
              _free(plVar26[4]);
              lVar19 = plVar26[6];
            }
            if (lVar19 != -0x8000000000000000) {
              lVar1 = plVar26[7];
              lVar24 = plVar26[8];
              if (lVar24 != 0) {
                puVar11 = (undefined8 *)(lVar1 + 8);
                do {
                  if (puVar11[-1] != 0) {
                    _free(*puVar11);
                  }
                  puVar11 = puVar11 + 3;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
              }
              if (lVar19 != 0) {
                _free(lVar1);
              }
            }
            ppuVar22 = (undefined **)((long)ppuVar22 + 1);
          } while (ppuVar22 != ppuVar20);
        }
        param_1 = puStack_208;
        if (ppuStack_1c8 != (undefined **)0x0) {
          _free(puVar4);
          param_1 = puStack_208;
        }
        goto LAB_101435794;
      }
      lVar19 = *(long *)(pcStack_1d0 + 0x18);
      if (lVar19 == 0) {
        pcStack_1d0 = pcVar16;
        puVar5 = (undefined *)FUN_1087e422c(0,&UNK_10b2237d8,&UNK_10b20a590);
      }
      else {
        unaff_x27 = *(undefined **)(pcStack_1d0 + 0x10);
        pcStack_1d0 = pcVar16;
        puVar4 = (undefined *)FUN_1004e07f8(&ppuStack_e0,unaff_x27);
        ppuVar22 = ppuStack_d0;
        puVar5 = puStack_d8;
        ppuVar20 = ppuStack_e0;
        if (ppuStack_e0 != (undefined **)0x8000000000000000) {
          if (lVar19 == 1) {
            unaff_x26 = (undefined **)FUN_1087e422c(1,&UNK_10b2237d8,&UNK_10b20a590);
LAB_101435344:
            ppuStack_128 = (undefined **)0x8000000000000000;
            puStack_120 = (undefined *)unaff_x26;
          }
          else {
            puVar21 = (undefined *)ppuStack_d0;
            cVar3 = unaff_x27[0x20];
            ppuVar25 = (undefined **)0x8000000000000000;
            ppuVar27 = (undefined **)extraout_x9;
            ppuVar17 = (undefined **)extraout_x11;
            if (cVar3 != '\x10') {
              if (cVar3 == '\x11') {
                puVar4 = (undefined *)FUN_1004e07f8(&ppuStack_e0,*(undefined8 *)(unaff_x27 + 0x28));
              }
              else {
                ppuVar17 = (undefined **)extraout_x11;
                if (cVar3 == '\x12') goto LAB_1014353cc;
                puVar4 = (undefined *)FUN_1004e07f8(&ppuStack_e0,unaff_x27 + 0x20);
              }
              ppuVar27 = (undefined **)0x8000000000000001;
              ppuVar25 = ppuStack_e0;
              if ((long)ppuStack_e0 < -0x7ffffffffffffffe) {
                ppuVar25 = (undefined **)0x8000000000000001;
              }
              ppuVar17 = ppuStack_d0;
              unaff_x26 = (undefined **)puStack_d8;
              if ((long)ppuVar25 + 0x7fffffffffffffffU < 2) goto LAB_101435344;
            }
LAB_1014353cc:
            if (lVar19 != 2) {
              cVar3 = unaff_x27[0x40];
              ppuVar13 = (undefined **)0x8000000000000000;
              puStack_1d8 = (undefined *)ppuVar17;
              if (cVar3 != '\x10') {
                if (cVar3 == '\x11') {
                  FUN_1004e02c0(&ppuStack_e0,*(undefined8 *)(unaff_x27 + 0x48));
                }
                else {
                  if (cVar3 == '\x12') goto LAB_1014354b0;
                  FUN_1004e02c0(&ppuStack_e0,unaff_x27 + 0x40);
                }
                ppuVar13 = ppuStack_e0;
                if ((long)ppuStack_e0 < -0x7ffffffffffffffe) {
                  ppuVar13 = (undefined **)0x8000000000000001;
                }
                puStack_120 = puStack_d8;
                puVar4 = puStack_d8;
                ppuVar27 = ppuStack_d0;
                if ((long)ppuVar13 + 0x7fffffffffffffffU < 2) goto LAB_101435498;
              }
LAB_1014354b0:
              ppuStack_128 = ppuVar20;
              puStack_120 = puVar5;
              puStack_118 = (undefined *)ppuVar22;
              puStack_100 = puStack_1d8;
              puStack_b8 = puStack_1d8;
              ppuStack_110 = ppuVar25;
              puStack_108 = (undefined *)unaff_x26;
              ppuStack_f8 = ppuVar13;
              puStack_f0 = puVar4;
              puStack_e8 = (undefined *)ppuVar27;
              ppuStack_e0 = ppuVar20;
              puStack_d8 = puVar5;
              ppuStack_d0 = ppuVar22;
              ppuStack_c8 = ppuVar25;
              puStack_c0 = (undefined *)unaff_x26;
              ppuStack_b0 = ppuVar13;
              puStack_a8 = puVar4;
              puStack_a0 = (undefined *)ppuVar27;
              if (lVar19 != 3) {
                ppuStack_98 = (undefined **)0x3;
                puStack_120 = (undefined *)
                              FUN_1087e422c((lVar19 + 0x7fffffffffffffdU & 0x7ffffffffffffff) + 3,
                                            &ppuStack_98,&UNK_10b23a1b0);
                ppuStack_128 = (undefined **)0x8000000000000000;
                FUN_100dda168(&ppuStack_e0);
              }
              goto LAB_101435360;
            }
            puStack_120 = (undefined *)FUN_1087e422c(2,&UNK_10b2237d8,&UNK_10b20a590);
LAB_101435498:
            ppuStack_128 = (undefined **)0x8000000000000000;
            if (((ulong)ppuVar25 & 0x7fffffffffffffff) != 0) {
              _free(unaff_x26);
            }
          }
          if (ppuVar20 != (undefined **)0x0) {
            _free(puVar5);
          }
          goto LAB_101435360;
        }
      }
      ppuStack_128 = (undefined **)0x8000000000000000;
      puStack_120 = puVar5;
LAB_101435360:
      ppuVar20 = ppuStack_1b8;
      puVar5 = puStack_120;
      if (ppuStack_128 == (undefined **)0x8000000000000000) goto LAB_1014356d4;
      ppuStack_1a8 = ppuStack_110;
      puStack_1b0 = puStack_118;
      puStack_198 = puStack_100;
      puStack_1a0 = puStack_108;
      puStack_188 = puStack_f0;
      ppuStack_190 = ppuStack_f8;
      puStack_180 = puStack_e8;
      if (ppuStack_128 == (undefined **)0x8000000000000001) goto LAB_1014356d4;
      ppuStack_170 = ppuStack_128;
      puStack_168 = puStack_120;
      ppuStack_158 = ppuStack_110;
      puStack_160 = puStack_118;
      puStack_148 = puStack_100;
      puStack_150 = puStack_108;
      puStack_138 = puStack_f0;
      ppuStack_140 = ppuStack_f8;
      puStack_130 = puStack_e8;
      if (ppuStack_1b8 == ppuStack_1c8) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17he0f273de780c5358E(&ppuStack_1c8);
      }
      puVar11 = (undefined8 *)(puStack_1c0 + (long)ppuVar20 * 0x48);
      puVar11[1] = puStack_168;
      *puVar11 = ppuStack_170;
      puVar11[3] = ppuStack_158;
      puVar11[2] = puStack_160;
      puVar11[5] = puStack_148;
      puVar11[4] = puStack_150;
      puVar11[7] = puStack_138;
      puVar11[6] = ppuStack_140;
      puVar11[8] = puStack_130;
      ppuStack_1b8 = (undefined **)((long)ppuVar20 + 1);
      param_1 = puStack_208;
      ppuVar20 = ppuStack_210;
      pcVar16 = pcVar23;
    } while (pcStack_1d0 != pcVar23);
  }
  ppuVar22 = ppuStack_1b8;
  puVar4 = puStack_1c0;
  ppuVar25 = ppuStack_1c8;
  puStack_d8 = puStack_1c0;
  ppuStack_e0 = ppuStack_1c8;
  ppuStack_d0 = ppuStack_1b8;
  puVar5 = puStack_1c0;
  if (ppuStack_1c8 != (undefined **)0x8000000000000000) {
    if ((long)pcVar16 - (long)pcVar23 == 0) {
      param_1[1] = (ulong)puStack_1c0;
      *param_1 = (ulong)ppuStack_1c8;
      param_1[2] = (ulong)ppuStack_1b8;
      return;
    }
    ppuStack_128 = ppuVar20;
    puVar5 = (undefined *)
             FUN_1087e422c((long)ppuVar20 + ((ulong)((long)pcVar16 - (long)pcVar23) >> 5),
                           &ppuStack_128,&UNK_10b23a1b0);
    puVar21 = puVar4;
    for (; ppuVar22 != (undefined **)0x0; ppuVar22 = (undefined **)((long)ppuVar22 - 1)) {
      FUN_100dda168(puVar21);
      puVar21 = puVar21 + 0x48;
    }
    if (ppuVar25 != (undefined **)0x0) {
      _free(puVar4);
    }
  }
LAB_101435794:
  *param_1 = 0x8000000000000001;
  param_1[1] = (ulong)puVar5;
  return;
}

