
void FUN_10042b4f0(long *param_1,int *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ushort uVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  ushort *puVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long unaff_x24;
  ulong *puVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  long lStack_298;
  long lStack_290;
  long lStack_288;
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
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  int *piStack_120;
  ulong *puStack_118;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  int *piStack_f0;
  ulong uStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  long *plStack_c8;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long *plVar14;
  
  uVar17 = *(undefined8 *)(param_2 + 0x28);
  plStack_c8 = param_1;
  if ((*param_2 == 0x110000) ||
     (FUN_1006c2f08(&lStack_90,uVar17,param_2), lStack_90 == -0x7fffffffffffffff)) {
    *param_2 = 0x110000;
    if ((*(long *)(param_2 + 0x24) != 0) &&
       ((puVar19 = *(ulong **)(*(long *)(param_2 + 0x24) + 0x30), puVar19 != (ulong *)0x0 &&
        (uVar9 = *puVar19, uVar9 != 2)))) {
      piVar20 = *(int **)(param_2 + 0x26);
      uVar12 = puVar19[4];
      uVar2 = puVar19[5];
      uVar16 = puVar19[2];
      uVar3 = puVar19[3];
      uVar18 = puVar19[1];
      do {
        if ((uVar9 & 1) == 0) {
          uVar9 = *(ulong *)(uVar12 + 0x28);
          if (uVar9 <= uVar2) goto LAB_10042b7f4;
          piVar11 = (int *)(*(long *)(uVar12 + 0x20) + uVar2 * 0x68);
          if (uVar16 == 0) {
            *puVar19 = 2;
            puVar19[2] = 2;
            uVar16 = 2;
            unaff_x24 = 2;
            pbVar1 = *(byte **)(piVar11 + 8);
            lVar10 = *(long *)(piVar11 + 10);
            pbVar5 = pbVar1;
            lVar21 = lVar10;
          }
          else {
            if (*piVar11 != 1) {
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24e7e8);
              uVar9 = extraout_x1;
              goto LAB_10042b7e4;
            }
            uVar18 = *(ulong *)(piVar11 + 2);
            *puVar19 = 1;
            puVar19[1] = uVar18;
            unaff_x24 = 1;
            pbVar1 = *(byte **)(piVar11 + 8);
            lVar10 = *(long *)(piVar11 + 10);
            pbVar5 = pbVar1;
            lVar21 = lVar10;
          }
        }
        else {
          uVar9 = *(ulong *)(uVar12 + 0x40);
          if (uVar9 <= uVar18) {
LAB_10042b7e4:
            FUN_107c05cd0(uVar18,uVar9,&UNK_10b24e800);
            uVar9 = extraout_x1_00;
LAB_10042b7f4:
            auVar23 = FUN_107c05cd0(uVar2,uVar9,&UNK_10b24e7d0);
            plVar15 = auVar23._8_8_;
            plVar6 = auVar23._0_8_;
            uStack_d8 = 0x10042b804;
            lVar10 = plVar15[8];
            piStack_120 = piVar20;
            puStack_118 = puVar19;
            lStack_110 = unaff_x24;
            uStack_108 = uVar18;
            uStack_100 = uVar2;
            uStack_f8 = uVar17;
            piStack_f0 = param_2;
            uStack_e8 = uVar16;
            puStack_e0 = &stack0xfffffffffffffff0;
            if (lVar10 == 0) {
              lVar10 = *plVar15;
            }
            else {
              if (lVar10 != plVar15[9]) {
                plVar15[8] = lVar10 + 0x68;
                uVar17 = *(undefined8 *)(lVar10 + 8);
                lVar21 = *(long *)(lVar10 + 0x10);
                if (lVar21 == 0) {
                  lVar7 = 1;
                }
                else {
                  lVar7 = _malloc(lVar21);
                  if (lVar7 == 0) {
                    uVar17 = FUN_107c03c64(1,lVar21);
                    if (lVar21 != 0) {
                      _free(plVar15);
                    }
                    FUN_100e8ceac(&lStack_298);
                    auVar23 = __Unwind_Resume(uVar17);
                    puVar19 = auVar23._8_8_;
                    plVar6 = auVar23._0_8_;
                    uVar9 = *puVar19;
                    if (uVar9 == 3) goto LAB_10042bd9c;
                    if (uVar9 == 2) goto LAB_10042bcf4;
                    if ((uVar9 & 1) == 0) goto LAB_10042bc4c;
                    uVar9 = puVar19[1];
                    if (uVar9 == 0) goto LAB_10042bba8;
                    if (puVar19[5] == 0) goto LAB_10042bba4;
                    uVar12 = puVar19[2];
                    if (uVar12 == 0) {
                      plVar15 = (long *)puVar19[3];
                      do {
                        plVar13 = plVar15 + 1;
                        lVar10 = *plVar15;
                        uVar9 = uVar9 - 0xe40;
                        uVar12 = CONCAT17(-(-1 < lVar10),
                                          CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                                   CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                                            CONCAT14(-(-1 < (char)((ulong)lVar10 >>
                                                                                  0x20)),
                                                                     CONCAT13(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)lVar10 >> 0x10)),
                                                           CONCAT11(-(-1 < (char)((ulong)lVar10 >> 8
                                                                                 )),
                                                                    -(-1 < (char)lVar10)))))))) &
                                 0x8080808080808080;
                        plVar15 = plVar13;
                      } while (uVar12 == 0);
                      puVar19[3] = (ulong)plVar13;
                      puVar19[1] = uVar9;
                    }
                    uVar16 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1
                    ;
                    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2
                    ;
                    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    puVar19[2] = uVar12 - 1 & uVar12;
                    lVar21 = uVar9 + (long)-(int)((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >>
                                                 3) * 0x1c8;
                    puVar19[5] = puVar19[5] - 1;
                    lVar10 = *(long *)(lVar21 + -0x1b8);
                    if (lVar10 == 0) {
LAB_10042be28:
                      lVar21 = 1;
                    }
                    else {
                      uVar17 = *(undefined8 *)(lVar21 + -0x1c0);
                      lVar21 = _malloc(lVar10);
                      if (lVar21 == 0) goto LAB_10042be64;
                      _memcpy(lVar21,uVar17,lVar10);
                      if (lVar10 == -0x8000000000000000) {
LAB_10042bba4:
                        puVar19[1] = 0;
LAB_10042bba8:
                        uVar9 = puVar19[6];
                        if ((uVar9 != 0) && (puVar19[10] != 0)) {
                          uVar12 = puVar19[7];
                          if (uVar12 == 0) {
                            plVar15 = (long *)puVar19[8];
                            do {
                              plVar13 = plVar15 + 1;
                              lVar10 = *plVar15;
                              uVar9 = uVar9 - 0x100;
                              uVar12 = CONCAT17(-(-1 < lVar10),
                                                CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                                         CONCAT15(-(-1 < (char)((ulong)lVar10 >>
                                                                               0x28)),
                                                                  CONCAT14(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
                                       0x8080808080808080;
                              plVar15 = plVar13;
                            } while (uVar12 == 0);
                            puVar19[8] = (ulong)plVar13;
                            puVar19[6] = uVar9;
                          }
                          uVar16 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar12 & 0x5555555555555555) << 1;
                          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 |
                                   (uVar16 & 0x3333333333333333) << 2;
                          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar16 & 0xff00ff00ff00ff) << 8;
                          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar16 & 0xffff0000ffff) << 0x10;
                          puVar19[7] = uVar12 - 1 & uVar12;
                          lVar21 = uVar9 + (LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) & 0x78U) * -4;
                          puVar19[10] = puVar19[10] - 1;
                          lVar10 = *(long *)(lVar21 + -0x10);
                          if (lVar10 == 0) goto LAB_10042be28;
                          uVar17 = *(undefined8 *)(lVar21 + -0x18);
                          lVar21 = _malloc(lVar10);
                          if (lVar21 == 0) goto LAB_10042be64;
                          _memcpy(lVar21,uVar17,lVar10);
                          if (lVar10 != -0x8000000000000000) goto LAB_10042be2c;
                        }
                        *puVar19 = 0;
LAB_10042bc4c:
                        uVar9 = puVar19[0xb];
                        if ((uVar9 != 0) && (puVar19[0xf] != 0)) {
                          uVar12 = puVar19[0xc];
                          if (uVar12 == 0) {
                            plVar15 = (long *)puVar19[0xd];
                            do {
                              plVar13 = plVar15 + 1;
                              lVar10 = *plVar15;
                              uVar9 = uVar9 - 0x100;
                              uVar12 = CONCAT17(-(-1 < lVar10),
                                                CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                                         CONCAT15(-(-1 < (char)((ulong)lVar10 >>
                                                                               0x28)),
                                                                  CONCAT14(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
                                       0x8080808080808080;
                              plVar15 = plVar13;
                            } while (uVar12 == 0);
                            puVar19[0xd] = (ulong)plVar13;
                            puVar19[0xb] = uVar9;
                          }
                          uVar16 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar12 & 0x5555555555555555) << 1;
                          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 |
                                   (uVar16 & 0x3333333333333333) << 2;
                          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar16 & 0xff00ff00ff00ff) << 8;
                          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar16 & 0xffff0000ffff) << 0x10;
                          puVar19[0xc] = uVar12 - 1 & uVar12;
                          lVar21 = uVar9 + (LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) & 0x78U) * -4;
                          puVar19[0xf] = puVar19[0xf] - 1;
                          lVar10 = *(long *)(lVar21 + -0x10);
                          if (lVar10 == 0) goto LAB_10042be28;
                          uVar17 = *(undefined8 *)(lVar21 + -0x18);
                          lVar21 = _malloc(lVar10);
                          if (lVar21 == 0) goto LAB_10042be64;
                          _memcpy(lVar21,uVar17,lVar10);
                          if (lVar10 != -0x8000000000000000) goto LAB_10042be2c;
                        }
                        *puVar19 = 2;
LAB_10042bcf4:
                        uVar9 = puVar19[0x10];
                        if ((uVar9 != 0) && (puVar19[0x14] != 0)) {
                          uVar12 = puVar19[0x11];
                          if (uVar12 == 0) {
                            plVar15 = (long *)puVar19[0x12];
                            do {
                              plVar13 = plVar15 + 1;
                              lVar10 = *plVar15;
                              uVar9 = uVar9 - 0x180;
                              uVar12 = CONCAT17(-(-1 < lVar10),
                                                CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                                         CONCAT15(-(-1 < (char)((ulong)lVar10 >>
                                                                               0x28)),
                                                                  CONCAT14(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
                                       0x8080808080808080;
                              plVar15 = plVar13;
                            } while (uVar12 == 0);
                            puVar19[0x12] = (ulong)plVar13;
                            puVar19[0x10] = uVar9;
                          }
                          uVar16 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar12 & 0x5555555555555555) << 1;
                          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 |
                                   (uVar16 & 0x3333333333333333) << 2;
                          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar16 & 0xff00ff00ff00ff) << 8;
                          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar16 & 0xffff0000ffff) << 0x10;
                          puVar19[0x11] = uVar12 - 1 & uVar12;
                          lVar21 = uVar9 + (long)-(int)((ulong)LZCOUNT(uVar16 >> 0x20 |
                                                                       uVar16 << 0x20) >> 3) * 0x30;
                          puVar19[0x14] = puVar19[0x14] - 1;
                          lVar10 = *(long *)(lVar21 + -0x20);
                          if (lVar10 == 0) goto LAB_10042be28;
                          uVar17 = *(undefined8 *)(lVar21 + -0x28);
                          lVar21 = _malloc(lVar10);
                          if (lVar21 == 0) goto LAB_10042be64;
                          _memcpy(lVar21,uVar17,lVar10);
                          if (lVar10 != -0x8000000000000000) goto LAB_10042be2c;
                        }
                        *puVar19 = 3;
LAB_10042bd9c:
                        uVar9 = puVar19[0x15];
                        if ((uVar9 == 0) || (puVar19[0x19] == 0)) {
                          *plVar6 = -0x8000000000000000;
                          return;
                        }
                        uVar12 = puVar19[0x16];
                        if (uVar12 == 0) {
                          plVar15 = (long *)puVar19[0x17];
                          do {
                            plVar13 = plVar15 + 1;
                            lVar10 = *plVar15;
                            uVar9 = uVar9 - 0x180;
                            uVar12 = CONCAT17(-(-1 < lVar10),
                                              CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                                       CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)
                                                                 ),CONCAT14(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
                                     0x8080808080808080;
                            plVar15 = plVar13;
                          } while (uVar12 == 0);
                          puVar19[0x17] = (ulong)plVar13;
                          puVar19[0x15] = uVar9;
                        }
                        uVar16 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar12 & 0x5555555555555555) << 1;
                        uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 |
                                 (uVar16 & 0x3333333333333333) << 2;
                        uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar16 & 0xff00ff00ff00ff) << 8;
                        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar16 & 0xffff0000ffff) << 0x10;
                        puVar19[0x16] = uVar12 - 1 & uVar12;
                        lVar10 = uVar9 + (long)-(int)((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20
                                                                    ) >> 3) * 0x30;
                        puVar19[0x19] = puVar19[0x19] - 1;
                        uVar17 = *(undefined8 *)(lVar10 + -0x28);
                        lVar10 = *(long *)(lVar10 + -0x20);
                        if (lVar10 == 0) {
                          lVar21 = 1;
                        }
                        else {
                          lVar21 = _malloc(lVar10);
                          if (lVar21 == 0) {
LAB_10042be64:
                            puVar8 = (ushort *)FUN_107c03c64(1,lVar10);
                            uVar4 = *puVar8 - 0x11;
                            if (*puVar8 < 0x11) {
                              uVar4 = 2;
                            }
                    /* WARNING: Could not recover jumptable at 0x00010042beb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*(code *)(&UNK_10042bebc + (ulong)(byte)(&UNK_108c98897)[uVar4] * 4))()
                            ;
                            return;
                          }
                        }
                        _memcpy(lVar21,uVar17,lVar10);
                        *plVar6 = lVar10;
                        plVar6[1] = lVar21;
                        goto LAB_10042be4c;
                      }
                    }
LAB_10042be2c:
                    *plVar6 = lVar10;
                    plVar6[1] = lVar21;
LAB_10042be4c:
                    plVar6[2] = lVar10;
                    return;
                  }
                }
                _memcpy(lVar7,uVar17,lVar21);
                lStack_298 = lVar21;
                lStack_290 = lVar7;
                lStack_288 = lVar21;
                FUN_100f19a3c(&lStack_280,lVar10 + 0x18);
                lStack_1a8 = lStack_268;
                lStack_1b0 = lStack_270;
                lStack_198 = lStack_258;
                lStack_1a0 = lStack_260;
                lStack_188 = lStack_248;
                lStack_190 = lStack_250;
                lStack_178 = lStack_238;
                lStack_180 = lStack_240;
                lStack_1c8 = lStack_288;
                lStack_1d0 = lStack_290;
                lStack_1b8 = lStack_278;
                lStack_1c0 = lStack_280;
                if (lStack_298 != -0x8000000000000000) {
                  plVar6[9] = lStack_250;
                  plVar6[8] = lStack_258;
                  plVar6[0xb] = lStack_240;
                  plVar6[10] = lStack_248;
                  plVar6[0xc] = lStack_238;
                  plVar6[1] = lStack_290;
                  *plVar6 = lStack_298;
                  plVar6[3] = lStack_280;
                  plVar6[2] = lStack_288;
                  plVar6[5] = lStack_270;
                  plVar6[4] = lStack_278;
                  plVar6[7] = lStack_260;
                  plVar6[6] = lStack_268;
                  return;
                }
              }
              plVar15[8] = 0;
              lVar10 = *plVar15;
              lStack_290 = lStack_1d0;
              lStack_288 = lStack_1c8;
              lStack_280 = lStack_1c0;
              lStack_278 = lStack_1b8;
              lStack_270 = lStack_1b0;
              lStack_268 = lStack_1a8;
              lStack_260 = lStack_1a0;
              lStack_258 = lStack_198;
              lStack_250 = lStack_190;
              lStack_248 = lStack_188;
              lStack_240 = lStack_180;
              lStack_238 = lStack_178;
            }
            if (lVar10 == -0x7fffffffffffffff) goto LAB_10042b9a8;
            lStack_298 = -0x8000000000000000;
            if (plVar15[7] == 0) goto LAB_10042b9a8;
            lVar10 = plVar15[3];
            uVar9 = plVar15[4];
            if (uVar9 == 0) {
              plVar13 = (long *)plVar15[5];
              do {
                plVar14 = plVar13 + 1;
                lVar21 = *plVar13;
                lVar10 = lVar10 + -0x300;
                uVar9 = CONCAT17(-(-1 < lVar21),
                                 CONCAT16(-(-1 < (char)((ulong)lVar21 >> 0x30)),
                                          CONCAT15(-(-1 < (char)((ulong)lVar21 >> 0x28)),
                                                   CONCAT14(-(-1 < (char)((ulong)lVar21 >> 0x20)),
                                                            CONCAT13(-(-1 < (char)((ulong)lVar21 >>
                                                                                  0x18)),
                                                                     CONCAT12(-(-1 < (char)((ulong)
                                                  lVar21 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar21 >> 8)),
                                                           -(-1 < (char)lVar21)))))))) &
                        0x8080808080808080;
                plVar13 = plVar14;
              } while (uVar9 == 0);
              plVar15[5] = (long)plVar14;
              plVar15[3] = lVar10;
            }
            uVar12 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            plVar15[4] = uVar9 - 1 & uVar9;
            lVar10 = lVar10 + (long)-(int)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) *
                              0x60;
            plVar15[7] = plVar15[7] + -1;
            lVar21 = *(long *)(lVar10 + -0x60);
            lVar22 = *(long *)(lVar10 + -0x50);
            lVar7 = *(long *)(lVar10 + -0x58);
            uStack_218 = *(undefined8 *)(lVar10 + -0x40);
            lStack_220 = *(long *)(lVar10 + -0x48);
            uStack_208 = *(undefined8 *)(lVar10 + -0x30);
            uStack_210 = *(undefined8 *)(lVar10 + -0x38);
            uStack_1f8 = *(undefined8 *)(lVar10 + -0x20);
            uStack_200 = *(undefined8 *)(lVar10 + -0x28);
            uStack_1e8 = *(undefined8 *)(lVar10 + -0x10);
            uStack_1f0 = *(undefined8 *)(lVar10 + -0x18);
            uStack_1e0 = *(undefined8 *)(lVar10 + -8);
            if (lVar21 == -0x8000000000000000) {
LAB_10042b9a8:
              *plVar6 = -0x8000000000000000;
            }
            else {
              lStack_230 = lVar7;
              lStack_228 = lVar22;
              lStack_1d0 = lVar21;
              lStack_1c8 = lVar7;
              lStack_1c0 = lVar22;
              lStack_1b8 = lStack_220;
              lStack_1b0 = uStack_218;
              lStack_1a8 = uStack_210;
              lStack_1a0 = uStack_208;
              lStack_198 = uStack_200;
              lStack_190 = uStack_1f8;
              lStack_188 = uStack_1f0;
              lStack_180 = uStack_1e8;
              lStack_178 = uStack_1e0;
              __ZN24codex_utils_json_to_toml12json_to_toml17h68efbf28eda21052E
                        (&lStack_170,&lStack_1b8);
              plVar6[6] = lStack_158;
              plVar6[5] = lStack_160;
              plVar6[8] = lStack_148;
              plVar6[7] = lStack_150;
              plVar6[10] = lStack_138;
              plVar6[9] = lStack_140;
              plVar6[0xc] = lStack_128;
              plVar6[0xb] = lStack_130;
              plVar6[4] = lStack_168;
              plVar6[3] = lStack_170;
              *plVar6 = lVar21;
              plVar6[1] = lVar7;
              plVar6[2] = lVar22;
            }
            return;
          }
          lVar10 = *(long *)(uVar12 + 0x38) + uVar18 * 0x48;
          if ((uVar16 == 1) && (uVar18 == uVar3)) {
            *puVar19 = 2;
            puVar19[2] = 2;
            uVar16 = 2;
            uVar18 = uVar3;
LAB_10042b760:
            unaff_x24 = 2;
          }
          else {
            if ((*(uint *)(lVar10 + 0x10) & 1) == 0) {
              *puVar19 = 2;
              goto LAB_10042b760;
            }
            uVar18 = *(ulong *)(lVar10 + 0x18);
            *puVar19 = 1;
            puVar19[1] = uVar18;
            unaff_x24 = 1;
          }
          pbVar1 = *(byte **)(lVar10 + 0x28);
          lVar10 = *(long *)(lVar10 + 0x30);
          pbVar5 = pbVar1;
          lVar21 = lVar10;
        }
        for (; lVar10 != 0; lVar10 = lVar10 + -1) {
          if ((*pbVar1 != 9) && (0x5e < *pbVar1 - 0x20)) goto LAB_10042b670;
          pbVar1 = pbVar1 + 1;
        }
        *param_2 = *piVar20;
        *(undefined1 *)(param_2 + 1) = 0;
        *(byte **)(param_2 + 2) = pbVar5;
        *(long *)(param_2 + 4) = lVar21;
        *(byte **)(param_2 + 6) = pbVar5;
        *(byte **)(param_2 + 8) = pbVar5 + lVar21;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        *(long *)(param_2 + 0xe) = lVar21;
        *(undefined2 *)(param_2 + 0x10) = 1;
        FUN_1006c2f08(&lStack_90,uVar17,param_2);
        if (lStack_90 != -0x7fffffffffffffff) goto joined_r0x00010042b7c4;
LAB_10042b670:
        uVar9 = 1;
      } while (unaff_x24 != 2);
    }
    *param_2 = 0x110000;
    param_2 = param_2 + 0x12;
    if ((*param_2 == 0x110000) ||
       (FUN_1006c2f08(&lStack_90,uVar17,param_2), lStack_90 == -0x7fffffffffffffff)) {
      *param_2 = 0x110000;
      lVar10 = -0x8000000000000000;
      goto LAB_10042b5f0;
    }
  }
joined_r0x00010042b7c4:
  lVar10 = -0x8000000000000000;
  if (lStack_90 != -0x8000000000000000) {
    plStack_c8[2] = lStack_80;
    plStack_c8[1] = lStack_88;
    plStack_c8[4] = lStack_70;
    plStack_c8[3] = lStack_78;
    plStack_c8[5] = lStack_68;
    lVar10 = lStack_90;
  }
LAB_10042b5f0:
  *plStack_c8 = lVar10;
  return;
}

