
/* WARNING: Removing unreachable block (ram,0x000101396a58) */
/* WARNING: Removing unreachable block (ram,0x000101396a14) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1013968b4(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  bool bVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
  byte bVar15;
  undefined **ppuVar16;
  undefined **extraout_x10;
  long lVar17;
  undefined *unaff_x21;
  undefined8 *puVar18;
  long *plVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined **ppuVar22;
  byte *pbVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  if (*param_2 == '\x14') {
    lVar21 = *(long *)(param_2 + 0x18);
    if (lVar21 == 0) {
      puStack_138 = (undefined *)FUN_1087e422c(0,&UNK_10b224370,&UNK_10b20a590);
    }
    else {
      lVar17 = *(long *)(param_2 + 0x10);
      FUN_1004e07f8(&uStack_140,lVar17);
      ppuVar24 = ppuStack_130;
      puStack_170 = puStack_138;
      ppuVar22 = uStack_140;
      if (uStack_140 != (undefined **)0x8000000000000000) {
        if (lVar21 == 1) {
          puVar10 = (undefined *)FUN_1087e422c(1,&UNK_10b224370,&UNK_10b20a590);
LAB_1013971a8:
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)puVar10;
        }
        else {
          cVar3 = *(char *)(lVar17 + 0x20);
          ppuVar20 = (undefined **)0x8000000000000000;
          ppuVar25 = extraout_x10;
          if (cVar3 != '\x10') {
            if (cVar3 == '\x11') {
              FUN_1004e07f8(&uStack_140,*(undefined8 *)(lVar17 + 0x28));
            }
            else {
              ppuVar25 = extraout_x10;
              if (cVar3 == '\x12') goto LAB_1013971b4;
              FUN_1004e07f8(&uStack_140,lVar17 + 0x20);
            }
            ppuVar20 = uStack_140;
            if ((long)uStack_140 < -0x7ffffffffffffffe) {
              ppuVar20 = (undefined **)0x8000000000000001;
            }
            ppuVar25 = ppuStack_130;
            puVar10 = puStack_138;
            unaff_x21 = puStack_138;
            if ((long)ppuVar20 + 0x7fffffffffffffffU < 2) goto LAB_1013971a8;
          }
LAB_1013971b4:
          if (lVar21 == 2) {
            puVar10 = (undefined *)FUN_1087e422c(2,&UNK_10b224370,&UNK_10b20a590);
LAB_1013971fc:
            *param_1 = 0x8000000000000000;
            param_1[1] = (ulong)puVar10;
          }
          else {
            puVar12 = (undefined *)FUN_1004e07f8(&uStack_140,lVar17 + 0x40);
            ppuVar16 = ppuStack_130;
            puVar10 = puStack_138;
            ppuVar2 = uStack_140;
            if (uStack_140 == (undefined **)0x8000000000000000) goto LAB_1013971fc;
            if (lVar21 == 3) {
              ppuStack_150 = (undefined **)FUN_1087e422c(3,&UNK_10b224370,&UNK_10b20a590);
LAB_1013973dc:
              *param_1 = 0x8000000000000000;
              param_1[1] = (ulong)ppuStack_150;
            }
            else {
              cVar3 = *(char *)(lVar17 + 0x60);
              ppuStack_158 = (undefined **)0x8000000000000000;
              if (cVar3 != '\x10') {
                if (cVar3 == '\x11') {
                  puVar12 = (undefined *)FUN_1004e07f8(&uStack_140,*(undefined8 *)(lVar17 + 0x68));
                }
                else {
                  if (cVar3 == '\x12') goto LAB_1013973ec;
                  puVar12 = (undefined *)FUN_1004e07f8(&uStack_140,lVar17 + 0x60);
                }
                ppuStack_168 = ppuStack_130;
                ppuStack_158 = uStack_140;
                if ((long)uStack_140 < -0x7ffffffffffffffe) {
                  ppuStack_158 = (undefined **)0x8000000000000001;
                }
                ppuStack_150 = (undefined **)puStack_138;
                if ((long)ppuStack_158 + 0x7fffffffffffffffU < 2) goto LAB_1013973dc;
              }
LAB_1013973ec:
              if (lVar21 == 4) {
                puVar12 = (undefined *)FUN_1087e422c(4,&UNK_10b224370,&UNK_10b20a590);
LAB_10139740c:
                *param_1 = 0x8000000000000000;
                param_1[1] = (ulong)puVar12;
              }
              else {
                cVar3 = *(char *)(lVar17 + 0x80);
                if ((cVar3 == '\x10') || (cVar3 == '\x12')) {
                  ppuStack_a8 = (undefined **)0x8000000000000000;
                  ppuVar14 = ppuStack_a8;
                  ppuVar8 = ppuStack_158;
                  puVar6 = puStack_138;
                  ppuVar7 = ppuStack_130;
                }
                else {
                  if (cVar3 == '\x11') {
                    lVar13 = *(long *)(lVar17 + 0x88);
                  }
                  else {
                    lVar13 = lVar17 + 0x80;
                  }
                  func_0x000101434cac(&uStack_140,lVar13);
                  puVar12 = puStack_138;
                  if ((uStack_140 == (undefined **)0x8000000000000001) ||
                     (ppuVar14 = uStack_140, ppuVar8 = ppuStack_130, puVar6 = puStack_138,
                     ppuVar7 = ppuStack_130, uStack_140 == (undefined **)0x8000000000000002))
                  goto LAB_10139740c;
                }
                ppuStack_130 = ppuVar8;
                puStack_138 = puVar12;
                ppuStack_a8 = ppuVar14;
                puStack_a0 = puStack_138;
                ppuStack_98 = ppuStack_130;
                if (lVar21 == 5) {
                  puVar12 = (undefined *)FUN_1087e422c(5,&UNK_10b224370,&UNK_10b20a590);
                  puStack_138 = puVar6;
                }
                else {
                  cVar3 = *(char *)(lVar17 + 0xa0);
                  ppuVar14 = (undefined **)0x8000000000000000;
                  if (cVar3 == '\x10') {
LAB_10139772c:
                    param_1[0xd] = (ulong)puStack_a0;
                    param_1[0xc] = (ulong)ppuStack_a8;
                    *param_1 = (ulong)ppuVar22;
                    param_1[1] = (ulong)puStack_170;
                    param_1[2] = (ulong)ppuVar24;
                    param_1[3] = (ulong)ppuVar2;
                    param_1[4] = (ulong)puVar10;
                    param_1[5] = (ulong)ppuVar16;
                    param_1[6] = (ulong)ppuVar20;
                    param_1[7] = (ulong)unaff_x21;
                    param_1[8] = (ulong)ppuVar25;
                    param_1[9] = (ulong)ppuStack_158;
                    param_1[10] = (ulong)ppuStack_150;
                    param_1[0xb] = (ulong)ppuStack_168;
                    param_1[0xe] = (ulong)ppuStack_98;
                    param_1[0xf] = (ulong)ppuVar14;
                    param_1[0x10] = (ulong)puStack_138;
                    param_1[0x11] = (ulong)ppuStack_130;
                    uStack_c8 = param_1[0xf];
                    uStack_d0 = param_1[0xe];
                    uStack_b8 = param_1[0x11];
                    uStack_c0 = param_1[0x10];
                    uStack_e8 = param_1[0xb];
                    uStack_f0 = param_1[10];
                    uStack_d8 = param_1[0xd];
                    uStack_e0 = param_1[0xc];
                    uStack_108 = param_1[7];
                    uStack_110 = param_1[6];
                    uStack_f8 = param_1[9];
                    uStack_100 = param_1[8];
                    uStack_128 = param_1[3];
                    ppuStack_130 = (undefined **)param_1[2];
                    uStack_118 = param_1[5];
                    uStack_120 = param_1[4];
                    puStack_138 = (undefined *)param_1[1];
                    uStack_140 = (undefined **)*param_1;
                    if (lVar21 == 6) {
                      return;
                    }
                    ppuStack_a8 = (undefined **)0x6;
                    uVar11 = FUN_1087e422c((lVar21 + 0x7fffffffffffffaU & 0x7ffffffffffffff) + 6,
                                           &ppuStack_a8,&UNK_10b23a1b0);
                    *param_1 = 0x8000000000000000;
                    param_1[1] = uVar11;
                    FUN_100ded1dc(&uStack_140);
                    return;
                  }
                  if (cVar3 == '\x11') {
                    FUN_1004e07f8(&uStack_140,*(undefined8 *)(lVar17 + 0xa8));
                    ppuStack_130 = ppuVar7;
                    puStack_138 = puVar6;
                  }
                  else {
                    if (cVar3 == '\x12') goto LAB_10139772c;
                    FUN_1004e07f8(&uStack_140,lVar17 + 0xa0);
                    ppuStack_130 = ppuVar7;
                    puStack_138 = puVar6;
                  }
                  ppuVar14 = uStack_140;
                  if ((long)uStack_140 < -0x7ffffffffffffffe) {
                    ppuVar14 = (undefined **)0x8000000000000001;
                  }
                  puVar12 = puStack_138;
                  if (1 < (long)ppuVar14 + 0x7fffffffffffffffU) goto LAB_10139772c;
                }
                *param_1 = 0x8000000000000000;
                param_1[1] = (ulong)puVar12;
                FUN_100e67030(&ppuStack_a8);
              }
              if (((ulong)ppuStack_158 & 0x7fffffffffffffff) != 0) {
                _free(ppuStack_150);
              }
            }
            if (ppuVar2 != (undefined **)0x0) {
              _free(puVar10);
            }
          }
          if (((ulong)ppuVar20 & 0x7fffffffffffffff) != 0) {
            _free(unaff_x21);
          }
        }
        if (ppuVar22 == (undefined **)0x0) {
          return;
        }
        goto LAB_10139721c;
      }
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = (ulong)puStack_138;
  }
  else {
    if (*param_2 != '\x15') {
      uVar11 = FUN_108855c40(param_2,&puStack_78,&UNK_10b20c7c0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar11;
      return;
    }
    puVar10 = *(undefined **)(param_2 + 0x10);
    lVar21 = *(long *)(param_2 + 0x18);
    ppuStack_a8 = (undefined **)0x8000000000000001;
    if (lVar21 == 0) {
      ppuStack_a8 = (undefined **)0x8000000000000001;
      ppuVar20 = (undefined **)0x8000000000000001;
      ppuStack_150 = (undefined **)0x8000000000000001;
      ppuStack_148 = (undefined **)0x0;
      ppuStack_158 = (undefined **)0x8000000000000001;
      ppuVar22 = (undefined **)0x8000000000000001;
      puStack_170 = puVar10;
LAB_101396e2c:
      puStack_78 = &UNK_108c61018;
      uStack_70 = 4;
      uStack_140 = &puStack_78;
      puStack_138 = &DAT_100c7b3a0;
      ppuVar24 = (undefined **)0x0;
      uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_140);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar11;
      bVar9 = true;
      bVar4 = true;
    }
    else {
      lVar17 = 0;
      ppuVar20 = (undefined **)0x8000000000000001;
      ppuVar24 = (undefined **)0x8000000000000000;
      ppuStack_150 = (undefined **)0x8000000000000001;
      ppuStack_148 = (undefined **)0x8000000000000000;
      ppuVar22 = (undefined **)0x8000000000000001;
      ppuStack_160 = (undefined **)0x8000000000000001;
      ppuStack_158 = (undefined **)0x8000000000000001;
      do {
        pbVar1 = puVar10 + lVar17;
        pbVar23 = pbVar1 + 0x20;
        bVar15 = *pbVar1;
        puStack_a0 = unaff_x21;
        if (0xc < bVar15) {
          if (bVar15 == 0xd) {
            FUN_1009e9400(&uStack_140,*(undefined8 *)(puVar10 + lVar17 + 8),
                          *(undefined8 *)(puVar10 + lVar17 + 0x10));
            if (((ulong)uStack_140 & 1) != 0) goto LAB_101396d88;
            goto LAB_101396a74;
          }
          if (bVar15 == 0xe) {
            FUN_1009e916c(&uStack_140,*(undefined8 *)(puVar10 + lVar17 + 0x10),
                          *(undefined8 *)(puVar10 + lVar17 + 0x18));
          }
          else {
            if (bVar15 != 0xf) goto LAB_101396d64;
            FUN_1009e916c(&uStack_140,*(undefined8 *)(puVar10 + lVar17 + 8),
                          *(undefined8 *)(puVar10 + lVar17 + 0x10));
          }
joined_r0x000101396a2c:
          if (((ulong)uStack_140 & 1) == 0) goto LAB_101396a74;
LAB_101396d88:
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)puStack_138;
joined_r0x000101397330:
          bVar9 = true;
          bVar4 = true;
          ppuStack_98 = ppuStack_168;
          ppuStack_a8 = ppuStack_160;
          goto joined_r0x000101397330;
        }
        if (bVar15 == 1) {
          bVar15 = puVar10[lVar17 + 1];
          if (5 < bVar15) {
            bVar15 = 6;
          }
          uStack_140 = (undefined **)((ulong)CONCAT61(uStack_140._2_6_,bVar15) << 8);
        }
        else {
          if (bVar15 != 4) {
            if (bVar15 != 0xc) {
LAB_101396d64:
              puStack_138 = (undefined *)FUN_108855c40(pbVar1,&puStack_78,&UNK_10b20d300);
              uStack_140 = (undefined **)CONCAT71(uStack_140._1_7_,1);
              goto LAB_101396d88;
            }
            FUN_1009e9400(&uStack_140,*(undefined8 *)(puVar10 + lVar17 + 0x10),
                          *(undefined8 *)(puVar10 + lVar17 + 0x18));
            goto joined_r0x000101396a2c;
          }
          uVar11 = *(ulong *)(puVar10 + lVar17 + 8);
          if (5 < uVar11) {
            uVar11 = 6;
          }
          uStack_140 = (undefined **)((ulong)CONCAT61(uStack_140._2_6_,(char)uVar11) << 8);
        }
LAB_101396a74:
        puVar12 = puStack_190;
        if (uStack_140._1_1_ < 3) {
          if (uStack_140._1_1_ == 0) {
            if (ppuVar24 == (undefined **)0x8000000000000000) {
              FUN_1004e07f8(&uStack_140,pbVar23);
              if (uStack_140 == (undefined **)0x8000000000000000) {
                ppuVar24 = (undefined **)0x0;
                *param_1 = 0x8000000000000000;
                param_1[1] = (ulong)puStack_138;
                goto joined_r0x000101397330;
              }
              puStack_170 = puStack_138;
              ppuStack_1b0 = ppuStack_130;
              ppuVar24 = uStack_140;
              goto LAB_101396968;
            }
            ppuStack_98 = ppuStack_168;
            ppuStack_a8 = ppuStack_160;
            puStack_78 = &UNK_108c61018;
            uStack_70 = 4;
            uStack_140 = &puStack_78;
            puStack_138 = &DAT_100c7b3a0;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_140);
          }
          else if (uStack_140._1_1_ == 1) {
            if (ppuStack_150 == (undefined **)0x8000000000000001) {
              bVar15 = *pbVar23;
              ppuStack_150 = (undefined **)0x8000000000000000;
              if (bVar15 == 0x10) {
LAB_101396960:
                puStack_190 = puStack_1c0;
                puVar12 = puStack_190;
              }
              else {
                if (bVar15 == 0x11) {
                  FUN_1004e07f8(&uStack_140,*(undefined8 *)(puVar10 + lVar17 + 0x28));
                }
                else {
                  if (bVar15 == 0x12) goto LAB_101396960;
                  FUN_1004e07f8(&uStack_140,pbVar23);
                }
                puStack_1c0 = puStack_138;
                if (uStack_140 != (undefined **)0x8000000000000000) {
                  ppuStack_1a0 = ppuStack_130;
                }
                ppuStack_150 = uStack_140;
                if ((long)uStack_140 < -0x7ffffffffffffffe) {
                  ppuStack_150 = (undefined **)0x8000000000000001;
                }
                puVar12 = puStack_1c0;
                if (ppuStack_150 == (undefined **)0x8000000000000001) {
                  ppuStack_150 = (undefined **)0x8000000000000001;
                  goto LAB_101397398;
                }
              }
              goto LAB_101396968;
            }
            ppuStack_98 = ppuStack_168;
            ppuStack_a8 = ppuStack_160;
            puStack_78 = &UNK_108ca1558;
            uStack_70 = 5;
            uStack_140 = &puStack_78;
            puStack_138 = &DAT_100c7b3a0;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_140);
          }
          else {
            if (ppuStack_148 == (undefined **)0x8000000000000000) {
              FUN_1004e07f8(&uStack_140,pbVar23);
              ppuStack_148 = uStack_140;
              if (uStack_140 == (undefined **)0x8000000000000000) {
                *param_1 = 0x8000000000000000;
                param_1[1] = (ulong)puStack_138;
                ppuStack_148 = (undefined **)0x0;
                goto joined_r0x000101397330;
              }
              ppuStack_1b8 = ppuStack_130;
              puStack_180 = puStack_138;
              goto LAB_101396968;
            }
            ppuStack_98 = ppuStack_168;
            ppuStack_a8 = ppuStack_160;
            puStack_78 = &UNK_108cab76f;
            uStack_70 = 7;
            uStack_140 = &puStack_78;
            puStack_138 = &DAT_100c7b3a0;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_140);
          }
LAB_1013976a4:
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar11;
          bVar9 = true;
          bVar4 = true;
          goto joined_r0x000101397330;
        }
        if (uStack_140._1_1_ < 5) {
          if (uStack_140._1_1_ == 3) {
            if (ppuStack_158 == (undefined **)0x8000000000000001) {
              bVar15 = *pbVar23;
              ppuStack_158 = (undefined **)0x8000000000000000;
              if (bVar15 == 0x10) {
LAB_101396ac0:
                puStack_188 = puStack_1c8;
              }
              else {
                if (bVar15 == 0x11) {
                  FUN_1004e07f8(&uStack_140,*(undefined8 *)(puVar10 + lVar17 + 0x28));
                }
                else {
                  if (bVar15 == 0x12) goto LAB_101396ac0;
                  FUN_1004e07f8(&uStack_140,pbVar23);
                }
                puStack_1c8 = puStack_138;
                if (uStack_140 != (undefined **)0x8000000000000000) {
                  ppuStack_1a8 = ppuStack_130;
                }
                ppuStack_158 = uStack_140;
                if ((long)uStack_140 < -0x7ffffffffffffffe) {
                  ppuStack_158 = (undefined **)0x8000000000000001;
                }
                if (ppuStack_158 == (undefined **)0x8000000000000001) {
                  ppuStack_158 = (undefined **)0x8000000000000001;
LAB_101397398:
                  *param_1 = 0x8000000000000000;
                  param_1[1] = (ulong)puStack_138;
                  goto joined_r0x000101397330;
                }
                puStack_188 = puStack_138;
              }
              goto LAB_101396968;
            }
            ppuStack_98 = ppuStack_168;
            ppuStack_a8 = ppuStack_160;
            puStack_78 = &UNK_108ca155d;
            uStack_70 = 0xb;
            uStack_140 = &puStack_78;
            puStack_138 = &DAT_100c7b3a0;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_140);
          }
          else {
            if (ppuVar20 == (undefined **)0x8000000000000001) {
              bVar15 = *pbVar23;
              if (bVar15 == 0x10) {
LAB_101396c0c:
                ppuStack_168 = ppuStack_130;
                ppuStack_160 = (undefined **)0x8000000000000000;
                unaff_x21 = puStack_138;
                ppuVar20 = (undefined **)0x8000000000000000;
              }
              else {
                if (bVar15 == 0x11) {
                  pbVar23 = *(byte **)(puVar10 + lVar17 + 0x28);
                }
                else if (bVar15 == 0x12) goto LAB_101396c0c;
                func_0x000101434cac(&uStack_140,pbVar23);
                if (uStack_140 == (undefined **)0x8000000000000001) {
                  ppuVar20 = (undefined **)0x8000000000000001;
                  *param_1 = 0x8000000000000000;
                  param_1[1] = (ulong)puStack_138;
                  goto joined_r0x000101397330;
                }
                ppuStack_168 = ppuStack_130;
                unaff_x21 = puStack_138;
                ppuVar20 = uStack_140;
                ppuStack_160 = uStack_140;
              }
              goto LAB_101396968;
            }
            ppuStack_98 = ppuStack_168;
            ppuStack_a8 = ppuStack_160;
            puStack_78 = &UNK_108cb1c3d;
            uStack_70 = 5;
            uStack_140 = &puStack_78;
            puStack_138 = &DAT_100c7b3a0;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_140);
          }
          goto LAB_1013976a4;
        }
        if (uStack_140._1_1_ == 5) {
          if (ppuVar22 != (undefined **)0x8000000000000001) {
            ppuStack_98 = ppuStack_168;
            ppuStack_a8 = ppuStack_160;
            puStack_78 = &UNK_108cb1c42;
            uStack_70 = 10;
            uStack_140 = &puStack_78;
            puStack_138 = &DAT_100c7b3a0;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_140);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar11;
            bVar4 = true;
            bVar9 = true;
            goto joined_r0x000101397538;
          }
          bVar15 = *pbVar23;
          ppuVar22 = (undefined **)0x8000000000000000;
          if (bVar15 != 0x10) {
            if (bVar15 == 0x11) {
              FUN_1004e07f8(&uStack_140,*(undefined8 *)(puVar10 + lVar17 + 0x28));
            }
            else {
              if (bVar15 == 0x12) goto LAB_101396968;
              FUN_1004e07f8(&uStack_140,pbVar23);
            }
            puStack_178 = puStack_138;
            if (uStack_140 != (undefined **)0x8000000000000000) {
              ppuStack_198 = ppuStack_130;
            }
            ppuVar22 = uStack_140;
            if ((long)uStack_140 < -0x7ffffffffffffffe) {
              ppuVar22 = (undefined **)0x8000000000000001;
            }
            if (ppuVar22 == (undefined **)0x8000000000000001) {
              ppuStack_98 = ppuStack_168;
              *param_1 = 0x8000000000000000;
              param_1[1] = (ulong)puStack_138;
              bVar4 = true;
              bVar9 = true;
              goto LAB_101396e88;
            }
          }
        }
LAB_101396968:
        puStack_190 = puVar12;
        lVar17 = lVar17 + 0x40;
      } while (lVar21 * 0x40 - lVar17 != 0);
      ppuStack_98 = ppuStack_168;
      ppuStack_a8 = ppuStack_160;
      puStack_a0 = unaff_x21;
      if (ppuVar24 == (undefined **)0x8000000000000000) goto LAB_101396e2c;
      bVar9 = ppuStack_150 == (undefined **)0x8000000000000001;
      ppuVar25 = (undefined **)0x8000000000000000;
      if (!bVar9) {
        ppuVar25 = ppuStack_150;
      }
      if (ppuStack_148 != (undefined **)0x8000000000000000) {
        ppuVar2 = (undefined **)0x8000000000000000;
        if (ppuStack_158 != (undefined **)0x8000000000000001) {
          ppuVar2 = ppuStack_158;
        }
        ppuVar16 = (undefined **)0x8000000000000000;
        if (ppuVar20 != (undefined **)0x8000000000000001) {
          ppuStack_88 = ppuStack_168;
          ppuVar16 = ppuVar20;
          puStack_90 = unaff_x21;
        }
        ppuVar20 = (undefined **)0x8000000000000000;
        if (ppuVar22 != (undefined **)0x8000000000000001) {
          ppuVar20 = ppuVar22;
        }
        *param_1 = (ulong)ppuVar24;
        param_1[1] = (ulong)puStack_170;
        param_1[2] = (ulong)ppuStack_1b0;
        param_1[3] = (ulong)ppuStack_148;
        param_1[4] = (ulong)puStack_180;
        param_1[5] = (ulong)ppuStack_1b8;
        param_1[6] = (ulong)ppuVar25;
        param_1[7] = (ulong)puStack_190;
        param_1[8] = (ulong)ppuStack_1a0;
        param_1[9] = (ulong)ppuVar2;
        param_1[10] = (ulong)puStack_188;
        param_1[0xb] = (ulong)ppuStack_1a8;
        param_1[0xc] = (ulong)ppuVar16;
        param_1[0xe] = (ulong)ppuStack_88;
        param_1[0xd] = (ulong)puStack_90;
        param_1[0xf] = (ulong)ppuVar20;
        param_1[0x10] = (ulong)puStack_178;
        param_1[0x11] = (ulong)ppuStack_198;
        return;
      }
      puStack_78 = &UNK_108cab76f;
      uStack_70 = 7;
      uStack_140 = &puStack_78;
      puStack_138 = &DAT_100c7b3a0;
      uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_140);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar11;
      if (((ulong)ppuVar25 & 0x7fffffffffffffff) != 0) {
        _free(puStack_190);
      }
      if (ppuVar24 != (undefined **)0x0) {
        _free(puStack_170);
      }
      bVar4 = false;
      ppuStack_148 = (undefined **)0x0;
    }
joined_r0x000101397330:
    if (ppuVar22 != (undefined **)0x8000000000000001) {
joined_r0x000101397538:
      if (((ulong)ppuVar22 & 0x7fffffffffffffff) != 0) {
        _free(puStack_178);
      }
    }
LAB_101396e88:
    ppuVar22 = ppuStack_98;
    puVar10 = puStack_a0;
    if ((ppuVar20 != (undefined **)0x8000000000000001) &&
       (ppuVar20 != (undefined **)0x8000000000000000)) {
      if (ppuStack_98 != (undefined **)0x0) {
        ppuVar25 = (undefined **)0x0;
        do {
          plVar19 = (long *)(puVar10 + (long)ppuVar25 * 0x48);
          if (*plVar19 != 0) {
            _free(plVar19[1]);
          }
          if (plVar19[3] == -0x8000000000000000 || plVar19[3] == 0) {
            lVar21 = plVar19[6];
          }
          else {
            _free(plVar19[4]);
            lVar21 = plVar19[6];
          }
          if (lVar21 != -0x8000000000000000) {
            lVar17 = plVar19[7];
            lVar13 = plVar19[8];
            if (lVar13 != 0) {
              puVar18 = (undefined8 *)(lVar17 + 8);
              do {
                if (puVar18[-1] != 0) {
                  _free(*puVar18);
                }
                puVar18 = puVar18 + 3;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
            if (lVar21 != 0) {
              _free(lVar17);
            }
          }
          ppuVar25 = (undefined **)((long)ppuVar25 + 1);
        } while (ppuVar25 != ppuVar22);
      }
      if (ppuVar20 != (undefined **)0x0) {
        _free(puVar10);
      }
    }
    if ((-0x7fffffffffffffff < (long)ppuStack_158) && (ppuStack_158 != (undefined **)0x0)) {
      _free(puStack_188);
    }
    if (((ulong)ppuStack_148 & 0x7fffffffffffffff) == 0) {
      bVar5 = false;
      if (ppuStack_150 != (undefined **)0x8000000000000001) {
        bVar5 = bVar9;
      }
      if (!bVar5) goto LAB_10139701c;
LAB_101397014:
      if (((ulong)ppuStack_150 & 0x7fffffffffffffff) == 0) goto LAB_10139701c;
      _free(puStack_190);
      bVar9 = false;
      if (((ulong)ppuVar24 & 0x7fffffffffffffff) != 0) {
        bVar9 = bVar4;
      }
    }
    else {
      _free(puStack_180);
      bVar5 = false;
      if (ppuStack_150 != (undefined **)0x8000000000000001) {
        bVar5 = bVar9;
      }
      if (bVar5) goto LAB_101397014;
LAB_10139701c:
      bVar9 = false;
      if (((ulong)ppuVar24 & 0x7fffffffffffffff) != 0) {
        bVar9 = bVar4;
      }
    }
    if (!bVar9) {
      return;
    }
LAB_10139721c:
    _free(puStack_170);
  }
  return;
}

