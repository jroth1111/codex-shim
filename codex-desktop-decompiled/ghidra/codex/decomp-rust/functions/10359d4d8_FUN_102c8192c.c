
void FUN_102c8192c(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long unaff_x24;
  long lVar26;
  long lVar27;
  ulong uVar28;
  byte bVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  undefined8 uVar32;
  byte bVar38;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  ulong uStack_210;
  long lStack_208;
  long lStack_1f8;
  ulong uStack_1f0;
  long lStack_1d0;
  ulong uStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  undefined *puStack_198;
  ulong uStack_190;
  long lStack_188;
  long *plStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  long lStack_140;
  long *plStack_138;
  undefined1 auStack_130 [16];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  long *plStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  long lStack_80;
  long *plStack_78;
  
  lVar1 = param_2[1];
  plStack_78 = param_1;
  if (*param_2 != lVar1) {
    plVar24 = (long *)param_2[2];
    lStack_80 = param_2[3];
    lVar23 = *param_2;
    do {
      lVar13 = lVar23 + 0x1a8;
      *param_2 = lVar13;
      puVar7 = puStack_90;
      if ((((*(long *)(lVar23 + 0x10) == 10) &&
           (**(long **)(lVar23 + 8) == 0x70615f7865646f63 &&
            (short)(*(long **)(lVar23 + 8))[1] == 0x7370)) &&
          (*(long *)(lVar23 + 0x170) != -0x8000000000000000)) && (plVar24[3] != 0)) {
        uVar21 = *(undefined8 *)(lVar23 + 0x178);
        lVar14 = *(long *)(lVar23 + 0x180);
        puVar12 = (undefined *)FUN_1033f7644(plVar24[4],plVar24[5],uVar21,lVar14);
        puVar20 = (undefined *)0x0;
        lVar26 = *plVar24;
        uVar11 = plVar24[1];
        bVar16 = (byte)((ulong)puVar12 >> 0x39);
        do {
          uVar28 = (ulong)puVar12 & uVar11;
          uVar32 = *(undefined8 *)(lVar26 + uVar28);
          bVar29 = (byte)((ulong)uVar32 >> 8);
          bVar33 = (byte)((ulong)uVar32 >> 0x10);
          bVar34 = (byte)((ulong)uVar32 >> 0x18);
          bVar35 = (byte)((ulong)uVar32 >> 0x20);
          bVar36 = (byte)((ulong)uVar32 >> 0x28);
          bVar37 = (byte)((ulong)uVar32 >> 0x30);
          bVar38 = (byte)((ulong)uVar32 >> 0x38);
          uVar8 = CONCAT17(-(bVar38 == bVar16),
                           CONCAT16(-(bVar37 == bVar16),
                                    CONCAT15(-(bVar36 == bVar16),
                                             CONCAT14(-(bVar35 == bVar16),
                                                      CONCAT13(-(bVar34 == bVar16),
                                                               CONCAT12(-(bVar33 == bVar16),
                                                                        CONCAT11(-(bVar29 == bVar16)
                                                                                 ,-((byte)uVar32 ==
                                                                                   bVar16)))))))) &
                  0x8080808080808080;
          puVar7 = puStack_90;
          uVar4 = uStack_88;
          while (puStack_90 = puVar20, uStack_88 = uVar8, uStack_88 != 0) {
            uVar4 = (uStack_88 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_88 & 0x5555555555555555) << 1;
            uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
            uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
            uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
            lVar17 = lVar26 + (uVar28 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) &
                              uVar11) * -0x10;
            if ((lVar14 == *(long *)(lVar17 + -8)) &&
               (iVar10 = _memcmp(uVar21,*(undefined8 *)(lVar17 + -0x10),lVar14), iVar10 == 0)) {
              uVar32 = 0;
              if (*(long *)(lVar23 + 0xa8) != -0x8000000000000000) {
                uVar32 = *(undefined8 *)(lVar23 + 0xb0);
              }
              lVar26 = 0;
              if (*(long *)(lVar23 + 0x138) != -0x7fffffffffffffff) {
                lVar26 = lVar23 + 0x138;
              }
              uVar11 = func_0x000102cd6944(lStack_80,uVar21,lVar14,*(undefined8 *)(lVar23 + 0x98),
                                           *(undefined8 *)(lVar23 + 0xa0),uVar32,
                                           *(undefined8 *)(lVar23 + 0xb8),lVar26);
              plVar6 = plStack_78;
              puVar7 = puStack_90;
              if ((uVar11 & 1) != 0) {
                uVar21 = *(undefined8 *)(lVar23 + 8);
                lVar1 = *(long *)(lVar23 + 0x10);
                if (lVar1 != 0) {
                  lVar13 = _malloc(lVar1);
                  if (lVar13 != 0) goto LAB_10359d520;
                  func_0x0001087c9084(1,lVar1);
LAB_10359dadc:
                  func_0x0001087c9084(1,unaff_x24);
                  goto LAB_10359db14;
                }
                lVar13 = 1;
LAB_10359d520:
                _memcpy(lVar13,uVar21,lVar1);
                uVar2 = *(undefined1 *)(lVar23 + 0x1a0);
                if (*(long *)(lVar23 + 0x60) == -0x8000000000000000) {
                  uVar21 = *(undefined8 *)(lVar23 + 0x20);
                  lVar26 = *(long *)(lVar23 + 0x28);
                  lStack_1d0 = -0x8000000000000000;
                  if (lVar26 == 0) goto LAB_10359d5c4;
LAB_10359d558:
                  lVar14 = _malloc(lVar26);
                  if (lVar14 == 0) {
                    func_0x0001087c9084(1,lVar26);
                    goto LAB_10359db14;
                  }
                }
                else {
                  uVar21 = *(undefined8 *)(lVar23 + 0x68);
                  lStack_1d0 = *(long *)(lVar23 + 0x70);
                  if (lStack_1d0 == 0) {
                    lStack_228 = 1;
                  }
                  else {
                    lStack_228 = _malloc(lStack_1d0);
                    if (lStack_228 == 0) {
                      func_0x0001087c9084(1,lStack_1d0);
                      goto LAB_10359db14;
                    }
                  }
                  _memcpy(lStack_228,uVar21,lStack_1d0);
                  uVar21 = *(undefined8 *)(lVar23 + 0x20);
                  lVar26 = *(long *)(lVar23 + 0x28);
                  if (lVar26 != 0) goto LAB_10359d558;
LAB_10359d5c4:
                  lVar14 = 1;
                }
                _memcpy(lVar14,uVar21,lVar26);
                uVar21 = *(undefined8 *)(lVar23 + 0x38);
                lVar17 = *(long *)(lVar23 + 0x40);
                if (lVar17 == 0) {
                  lVar15 = 1;
                }
                else {
                  lVar15 = _malloc(lVar17);
                  if (lVar15 == 0) {
                    func_0x0001087c9084(1,lVar17);
                    goto LAB_10359db14;
                  }
                }
                auVar31 = _memcpy(lVar15,uVar21,lVar17);
                if (*(long *)(lVar23 + 0x78) == -0x8000000000000000) {
                  lStack_1f8 = -0x8000000000000000;
                  lVar19 = *(long *)(lVar23 + 0x98);
                  uStack_210 = *(ulong *)(lVar23 + 0xa0);
                  if (*(long *)(lVar23 + 0x90) != -0x8000000000000000) goto LAB_10359d6c8;
LAB_10359d648:
                  uStack_1f0 = 0x8000000000000000;
                  lStack_208 = lVar19;
                  if (*(long *)(lVar23 + 0xa8) != -0x8000000000000000) goto LAB_10359d720;
LAB_10359d664:
                  lVar19 = -0x8000000000000000;
                  lVar18 = *(long *)(lVar23 + 0x120);
                  if (lVar18 != -0x7fffffffffffffff) goto LAB_10359d76c;
LAB_10359d674:
                  lVar22 = -0x7fffffffffffffff;
                }
                else {
                  uVar21 = *(undefined8 *)(lVar23 + 0x80);
                  unaff_x24 = *(long *)(lVar23 + 0x88);
                  if (unaff_x24 == 0) {
                    lStack_240 = 1;
                  }
                  else {
                    lStack_240 = _malloc(unaff_x24);
                    if (lStack_240 == 0) goto LAB_10359dadc;
                  }
                  auVar31 = _memcpy(lStack_240,uVar21,unaff_x24);
                  lVar19 = *(long *)(lVar23 + 0x98);
                  uStack_210 = *(ulong *)(lVar23 + 0xa0);
                  lStack_1f8 = unaff_x24;
                  if (*(long *)(lVar23 + 0x90) == -0x8000000000000000) goto LAB_10359d648;
LAB_10359d6c8:
                  if (uStack_210 == 0) {
                    lStack_208 = 1;
                  }
                  else {
                    lStack_208 = _malloc(uStack_210);
                    if (lStack_208 == 0) {
                      func_0x0001087c9084(1,uStack_210);
                      goto LAB_10359db14;
                    }
                  }
                  auVar31 = _memcpy(lStack_208,lVar19,uStack_210);
                  uStack_1f0 = uStack_210;
                  if (*(long *)(lVar23 + 0xa8) == -0x8000000000000000) goto LAB_10359d664;
LAB_10359d720:
                  uVar21 = *(undefined8 *)(lVar23 + 0xb0);
                  lVar19 = *(long *)(lVar23 + 0xb8);
                  if (lVar19 == 0) {
                    lStack_230 = 1;
                  }
                  else {
                    lStack_230 = _malloc(lVar19);
                    if (lStack_230 == 0) {
                      func_0x0001087c9084(1,lVar19);
                      goto LAB_10359db14;
                    }
                  }
                  auVar31 = _memcpy(lStack_230,uVar21,lVar19);
                  lVar18 = *(long *)(lVar23 + 0x120);
                  if (lVar18 == -0x7fffffffffffffff) goto LAB_10359d674;
LAB_10359d76c:
                  lVar27 = *(long *)(lVar23 + 0x128);
                  lStack_238 = *(long *)(lVar23 + 0x130);
                  lVar22 = -0x8000000000000000;
                  lStack_220 = lVar27;
                  if (lVar18 != -0x8000000000000000) {
                    if (lStack_238 == 0) {
                      lStack_220 = 1;
                    }
                    else {
                      lStack_220 = _malloc(lStack_238);
                      if (lStack_220 == 0) {
                        func_0x0001087c9084(1,lStack_238);
                        goto LAB_10359db14;
                      }
                    }
                    auVar31 = _memcpy(lStack_220,lVar27,lStack_238);
                    lVar22 = lStack_238;
                  }
                }
                auVar5._8_8_ = auStack_130._8_8_;
                auVar5._0_8_ = auStack_130._0_8_;
                plVar24 = *(long **)(lVar23 + 0x158);
                lVar18 = *plVar24;
                *plVar24 = lVar18 + 1;
                if ((lVar18 < 0) ||
                   ((plVar25 = *(long **)(lVar23 + 0x160), plStack_d0 = plVar24,
                    plVar25 != (long *)0x0 &&
                    (lVar18 = *plVar25, *plVar25 = lVar18 + 1, auStack_130 = auVar5, lVar18 < 0))))
                goto LAB_10359db14;
                lVar18 = *(long *)(lVar23 + 0x138);
                plStack_c8 = plVar25;
                if (lVar18 == -0x8000000000000000) {
LAB_10359d854:
                  uVar30 = *(undefined4 *)(lVar23 + 0x150);
                  auVar31 = ZEXT716(CONCAT16((char)((uint)uVar30 >> 0x18),
                                             (uint6)CONCAT14((char)((uint)uVar30 >> 0x10),
                                                             (uint)CONCAT12((char)((uint)uVar30 >> 8
                                                                                  ),(ushort)(byte)
                                                  uVar30))));
                }
                else if (lVar18 != -0x7fffffffffffffff) {
                  uVar21 = *(undefined8 *)(lVar23 + 0x140);
                  lVar18 = *(long *)(lVar23 + 0x148);
                  if (lVar18 == 0) {
                    lStack_248 = 1;
                  }
                  else {
                    lStack_248 = _malloc(lVar18);
                    if (lStack_248 == 0) {
                      func_0x0001087c9084(1,lVar18);
                      goto LAB_10359db14;
                    }
                  }
                  _memcpy(lStack_248,uVar21,lVar18);
                  goto LAB_10359d854;
                }
                uVar3 = *(undefined1 *)(lVar23 + 0x168);
                if (*(long *)(lVar23 + 0xc0) == -0x8000000000000000) {
                  uStack_c0 = 0x8000000000000000;
                  auStack_130 = auVar31;
                  if (*(long *)(lVar23 + 0xd8) != -0x8000000000000000) goto LAB_10359d8c4;
LAB_10359d88c:
                  uStack_168 = 0x8000000000000000;
                }
                else {
                  func_0x0001035af814(&uStack_1b0,*(undefined8 *)(lVar23 + 200),
                                      *(undefined8 *)(lVar23 + 0xd0));
                  auStack_130._8_8_ = lStack_1a8;
                  auStack_130._0_8_ = uStack_1b0;
                  lStack_b8 = lStack_1a8;
                  uStack_c0 = uStack_1b0;
                  uStack_b0 = uStack_1a0;
                  if (*(long *)(lVar23 + 0xd8) == -0x8000000000000000) goto LAB_10359d88c;
LAB_10359d8c4:
                  uStack_190 = 0;
                  puStack_198 = &UNK_108d52778;
                  plStack_180 = (long *)0x0;
                  lStack_188 = 0;
                  uStack_1b0 = 0;
                  lStack_1a8 = 8;
                  uStack_1a0 = 0;
                  FUN_1036006bc(&uStack_1b0);
                  lStack_98 = uStack_1a0;
                  lStack_a0 = lStack_1a8;
                  uStack_88 = uStack_190;
                  puStack_90 = puStack_198;
                  plStack_78 = plStack_180;
                  lStack_80 = lStack_188;
                  auStack_130 = *(undefined1 (*) [16])(lVar23 + 0x110);
                  uStack_168 = uStack_1b0;
                }
                lVar27 = -0x8000000000000000;
                uStack_1b0 = uStack_1f0;
                lStack_1a8 = lStack_208;
                uStack_1a0 = uStack_210;
                uStack_190 = lStack_230;
                lStack_118 = lStack_220;
                lStack_110 = lStack_238;
                lStack_100 = lStack_248;
                uStack_f0 = CONCAT13(auVar31[6],CONCAT12(auVar31[4],CONCAT11(auVar31[2],auVar31[0]))
                                    );
                lStack_178 = lStack_b8;
                plStack_180 = (long *)uStack_c0;
                uStack_170 = uStack_b0;
                lStack_158 = lStack_98;
                lStack_160 = lStack_a0;
                uStack_148 = uStack_88;
                puStack_150 = puStack_90;
                plStack_138 = plStack_78;
                lStack_140 = lStack_80;
                puStack_198 = (undefined *)lVar19;
                lStack_188 = lVar19;
                lStack_120 = lVar22;
                lStack_108 = lVar18;
                lStack_f8 = lVar18;
                plStack_e8 = plVar24;
                plStack_e0 = plVar25;
                uStack_d8 = uVar3;
                if (*(long *)(lVar23 + 0x170) == -0x8000000000000000) {
                  lVar19 = *(long *)(lVar23 + 0x188);
                }
                else {
                  uVar21 = *(undefined8 *)(lVar23 + 0x178);
                  lVar27 = *(long *)(lVar23 + 0x180);
                  if (lVar27 == 0) {
                    lVar18 = 1;
                  }
                  else {
                    lVar18 = _malloc(lVar27);
                    if (lVar18 == 0) {
                      func_0x0001087c9084(1,lVar27);
                      goto LAB_10359db14;
                    }
                  }
                  _memcpy(lVar18,uVar21,lVar27);
                  lVar19 = *(long *)(lVar23 + 0x188);
                }
                if (lVar19 == -0x8000000000000000) {
                  lVar19 = -0x8000000000000000;
                }
                else {
                  uVar21 = *(undefined8 *)(lVar23 + 400);
                  lVar19 = *(long *)(lVar23 + 0x198);
                  if (lVar19 == 0) {
                    plVar24 = (long *)0x1;
                  }
                  else {
                    plVar24 = (long *)_malloc(lVar19);
                    if (plVar24 == (long *)0x0) {
                      func_0x0001087c9084(1,lVar19);
LAB_10359db14:
                    /* WARNING: Does not return */
                      pcVar9 = (code *)SoftwareBreakpoint(1,0x10359db18);
                      (*pcVar9)();
                    }
                  }
                  _memcpy(plVar24,uVar21,lVar19);
                }
                func_0x0001035ad330(&lStack_a0,*(undefined8 *)(lVar23 + 0x50),
                                    *(undefined8 *)(lVar23 + 0x58));
                *plVar6 = lVar1;
                plVar6[1] = lVar13;
                *(undefined1 *)(plVar6 + 0x34) = uVar2;
                plVar6[0xd] = lStack_228;
                plVar6[0xe] = lStack_1d0;
                plVar6[2] = lVar1;
                plVar6[3] = lVar26;
                plVar6[4] = lVar14;
                plVar6[5] = lVar26;
                plVar6[6] = lVar17;
                plVar6[7] = lVar15;
                plVar6[8] = lVar17;
                plVar6[0xf] = lStack_1f8;
                plVar6[0x10] = lStack_240;
                plVar6[0x11] = lStack_1f8;
                plVar6[0x13] = lStack_1a8;
                plVar6[0x12] = uStack_1b0;
                plVar6[0x15] = (long)puStack_198;
                plVar6[0x14] = uStack_1a0;
                plVar6[0x1b] = uStack_168;
                plVar6[0x1a] = uStack_170;
                plVar6[0x1d] = lStack_158;
                plVar6[0x1c] = lStack_160;
                plVar6[0x17] = lStack_188;
                plVar6[0x16] = uStack_190;
                plVar6[0x19] = lStack_178;
                plVar6[0x18] = (long)plStack_180;
                *(undefined1 (*) [16])(plVar6 + 0x22) = auStack_130;
                plVar6[0x25] = lStack_118;
                plVar6[0x24] = lStack_120;
                plVar6[0x1f] = uStack_148;
                plVar6[0x1e] = (long)puStack_150;
                plVar6[0x21] = (long)plStack_138;
                plVar6[0x20] = lStack_140;
                plVar6[0x2b] = (long)plStack_e8;
                plVar6[0x2a] = CONCAT44(uStack_ec,uStack_f0);
                plVar6[0x2d] = CONCAT71(uStack_d7,uStack_d8);
                plVar6[0x2c] = (long)plStack_e0;
                plVar6[0x27] = lStack_108;
                plVar6[0x26] = lStack_110;
                plVar6[0x29] = lStack_f8;
                plVar6[0x28] = lStack_100;
                plVar6[0x2e] = lVar27;
                plVar6[0x2f] = lVar18;
                plVar6[0x30] = lVar27;
                plVar6[0x31] = lVar19;
                plVar6[0x32] = (long)plVar24;
                plVar6[0x33] = lVar19;
                plVar6[10] = lStack_98;
                plVar6[9] = lStack_a0;
                plVar6[0xb] = (long)puStack_90;
                plVar6[0xc] = lStack_1d0;
                return;
              }
              goto LAB_102c81a80;
            }
            puVar20 = puStack_90;
            puVar7 = puStack_90;
            uVar4 = uStack_88;
            uVar8 = uStack_88 - 1 & uStack_88;
          }
          bVar29 = NEON_umaxv(CONCAT17(-(bVar38 == 0xff),
                                       CONCAT16(-(bVar37 == 0xff),
                                                CONCAT15(-(bVar36 == 0xff),
                                                         CONCAT14(-(bVar35 == 0xff),
                                                                  CONCAT13(-(bVar34 == 0xff),
                                                                           CONCAT12(-(bVar33 == 0xff
                                                                                     ),CONCAT11(-(
                                                  bVar29 == 0xff),-((byte)uVar32 == 0xff)))))))),1);
          uStack_88 = uVar4;
          if ((bVar29 & 1) != 0) break;
          puVar20 = puStack_90 + 8;
          puVar12 = puVar20 + uVar28;
          puStack_90 = puVar7;
        } while( true );
      }
LAB_102c81a80:
      puStack_90 = puVar7;
      lVar23 = lVar13;
    } while (lVar13 != lVar1);
  }
  *plStack_78 = -0x8000000000000000;
  return;
}

