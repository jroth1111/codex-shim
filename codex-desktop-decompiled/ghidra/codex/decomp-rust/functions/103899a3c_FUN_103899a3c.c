
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103899a3c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_180;
  char ***pppcStack_178;
  undefined8 uStack_170;
  long lStack_168;
  char **ppcStack_160;
  undefined *puStack_158;
  long *plStack_150;
  undefined *puStack_148;
  long **pplStack_140;
  undefined *puStack_138;
  char *pcStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char *pcStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  
  lVar10 = *(long *)(param_2 + 0x38);
  if (lVar10 != 0) {
    lVar16 = *(long *)(param_2 + 0x18);
    uVar9 = *(ulong *)(param_2 + 0x20);
    plVar14 = *(long **)(param_2 + 0x28);
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    do {
      plVar15 = plVar14;
      if (uVar9 == 0) {
        do {
          plVar14 = plVar15 + 1;
          lVar17 = *plVar15;
          lVar16 = lVar16 + -0x280;
          uVar9 = CONCAT17(-(-1 < lVar17),
                           CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar17 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar17
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar17 >> 8)),-(-1 < (char)lVar17)))))))) &
                  0x8080808080808080;
          plVar15 = plVar14;
        } while (uVar9 == 0);
        *(long **)(param_2 + 0x28) = plVar14;
        *(long *)(param_2 + 0x18) = lVar16;
      }
      uVar13 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 - 1 & uVar9;
      *(ulong *)(param_2 + 0x20) = uVar9;
      lVar17 = lVar16 + (long)-(int)((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) * 0x50;
      lVar10 = lVar10 + -1;
      *(long *)(param_2 + 0x38) = lVar10;
      lVar11 = *(long *)(lVar17 + -0x50);
      if (lVar11 == -0x8000000000000000) break;
      lVar20 = *(long *)(lVar17 + -0x40);
      uVar18 = *(undefined8 *)(lVar17 + -0x48);
      plVar15 = *(long **)(lVar17 + -0x38);
      lVar3 = *(long *)(lVar17 + -0x30);
      lVar17 = *(long *)(lVar17 + -0x20);
      uStack_f0 = uVar18;
      lStack_e8 = lVar20;
      if (lVar3 != 0) {
        if (lVar17 != 0) {
          plVar12 = plVar15 + 1;
          lVar19 = *plVar15;
          uVar13 = CONCAT17(-(-1 < lVar19),
                            CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar19 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar19 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar19 >> 8)),
                                                           -(-1 < (char)lVar19)))))))) &
                   0x8080808080808080;
          plVar5 = plVar15;
          do {
            while (uVar13 == 0) {
              lVar19 = *plVar12;
              plVar12 = plVar12 + 1;
              plVar5 = plVar5 + -0x80;
              uVar13 = CONCAT17(-(-1 < lVar19),
                                CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar19 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar19 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar19 >> 8)),
                                                           -(-1 < (char)lVar19)))))))) &
                       0x8080808080808080;
            }
            uVar4 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
            uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) & 0x78;
            if (plVar5[uVar4 * -2 + -0x10] != 0) {
              _free(plVar5[uVar4 * -2 + -0xf]);
            }
            uVar13 = uVar13 - 1 & uVar13;
            lVar17 = lVar17 + -1;
            FUN_10393ce9c(plVar5 + uVar4 * -2 + -0xd);
          } while (lVar17 != 0);
        }
        if (lVar3 * 0x81 != -0x89) {
          _free(plVar15 + lVar3 * -0x10 + -0x10);
        }
      }
      lStack_1e8 = lVar11;
      uStack_1e0 = uVar18;
      lStack_1d8 = lVar20;
      __ZN12codex_plugin9plugin_id8PluginId5parse17h2a2819ef7bfc1352E(&lStack_1d0,uVar18,lVar20);
      lVar17 = lStack_1d0;
      if (lStack_1d0 == -0x8000000000000000) {
        lStack_198 = lStack_1c0;
        lStack_1a0 = lStack_1c8;
        lStack_190 = lStack_1b8;
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
           (((bRam000000010b62b778 - 1 < 2 ||
             ((bRam000000010b62b778 != 0 &&
              (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (0x10b62b768), cVar6 != '\0')))) &&
            (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (lRam000000010b62b768), iVar7 != 0)))) {
          lStack_168 = lRam000000010b62b768 + 0x30;
          puStack_118 = &DAT_103925cd0;
          puStack_128 = &uStack_120;
          pcStack_130 = s__108af809e;
          plStack_110 = &lStack_1a0;
          ppcStack_160 = &pcStack_130;
          plStack_150 = &lStack_1e8;
          puStack_158 = &UNK_10b2d6420;
          pplStack_140 = &plStack_110;
          puStack_148 = &UNK_10b2d76f8;
          puStack_138 = &UNK_10b2d7fe0;
          uStack_180 = 1;
          pppcStack_178 = &ppcStack_160;
          uStack_170 = 3;
          uStack_120 = uVar8;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (lRam000000010b62b768,&uStack_180);
          lVar11 = lRam000000010b62b768;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_100 = *(undefined8 *)(lRam000000010b62b768 + 0x20);
            uStack_f8 = *(undefined8 *)(lRam000000010b62b768 + 0x28);
            uStack_108 = 2;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_108);
            if (iVar7 != 0) {
              lStack_d0 = *(long *)(lVar11 + 0x60);
              uStack_c8 = *(undefined8 *)(lVar11 + 0x68);
              lStack_e8 = *(long *)(lVar11 + 0x50);
              uStack_e0 = *(undefined8 *)(lVar11 + 0x58);
              uStack_f0 = 1;
              if (lStack_e8 == 0) {
                uStack_f0 = 2;
              }
              uStack_a8 = *(undefined4 *)(lVar11 + 8);
              uStack_a4 = *(undefined4 *)(lVar11 + 0xc);
              puStack_90 = &uStack_180;
              uStack_88 = 1;
              ppuStack_80 = &puStack_90;
              puStack_78 = &DAT_1061c2098;
              uStack_d8 = 1;
              if (lStack_d0 == 0) {
                uStack_d8 = 2;
              }
              uStack_b8 = uStack_100;
              uStack_c0 = uStack_108;
              uStack_b0 = uStack_f8;
              pppuStack_98 = &ppuStack_80;
              pcStack_a0 = s__108b39f4f;
              (**(code **)(puVar1 + 0x20))(puVar2,&uStack_f0);
            }
          }
        }
        else {
          lVar11 = lRam000000010b62b768;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_100 = *(undefined8 *)(lRam000000010b62b768 + 0x20);
            uStack_f8 = *(undefined8 *)(lRam000000010b62b768 + 0x28);
            uStack_108 = 2;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_108);
            if (iVar7 != 0) {
              lStack_168 = lRam000000010b62b768 + 0x30;
              puStack_118 = &DAT_103925cd0;
              puStack_128 = &uStack_120;
              plStack_150 = &lStack_1e8;
              puStack_158 = &UNK_10b2d6420;
              pplStack_140 = &plStack_110;
              puStack_148 = &UNK_10b2d76f8;
              puStack_138 = &UNK_10b2d7fe0;
              pppcStack_178 = &ppcStack_160;
              uStack_170 = 3;
              lStack_e8 = *(long *)(lVar11 + 0x50);
              uStack_e0 = *(undefined8 *)(lVar11 + 0x58);
              uStack_a8 = *(undefined4 *)(lVar11 + 8);
              uStack_a4 = *(undefined4 *)(lVar11 + 0xc);
              uStack_b0 = uStack_f8;
              uStack_f0 = 1;
              if (lStack_e8 == 0) {
                uStack_f0 = 2;
              }
              lStack_d0 = *(long *)(lVar11 + 0x60);
              uStack_c8 = *(undefined8 *)(lVar11 + 0x68);
              uStack_d8 = 1;
              if (lStack_d0 == 0) {
                uStack_d8 = 2;
              }
              pcStack_130 = s__108af809e;
              ppcStack_160 = &pcStack_130;
              uStack_180 = 1;
              plStack_110 = &lStack_1a0;
              puStack_90 = &uStack_180;
              uStack_88 = 1;
              ppuStack_80 = &puStack_90;
              puStack_78 = &DAT_1061c2098;
              uStack_b8 = uStack_100;
              uStack_c0 = uStack_108;
              pppuStack_98 = &ppuStack_80;
              pcStack_a0 = s__108b39f4f;
              uStack_120 = uVar8;
              (**(code **)(puVar1 + 0x20))(puVar2,&uStack_f0);
            }
          }
        }
        if (lStack_1a0 != 0) {
          _free(lStack_198);
        }
      }
      else {
        lStack_228 = lStack_1c0;
        lStack_220 = lStack_1c8;
        lStack_238 = lStack_1b0;
        lStack_230 = lStack_1b8;
        lStack_240 = lStack_1a8;
      }
      if (lStack_1e8 != 0) {
        _free(uStack_1e0);
      }
      if (lVar17 != -0x8000000000000000) {
        *param_1 = lVar17;
        param_1[1] = lStack_220;
        param_1[2] = lStack_228;
        param_1[3] = lStack_230;
        param_1[4] = lStack_238;
        param_1[5] = lStack_240;
        return;
      }
    } while (lVar10 != 0);
  }
  *param_1 = -0x8000000000000000;
  return;
}

