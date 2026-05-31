
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dc838(long *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  byte bVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 *puVar16;
  byte bVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  ulong uVar22;
  char *pcVar23;
  char *pcVar24;
  byte bVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  long lVar29;
  undefined1 auVar36 [16];
  ulong uStack_238;
  undefined1 auStack_1f8 [32];
  char *pcStack_1d8;
  char *pcStack_1d0;
  undefined8 uStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long *plStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  undefined1 auStack_160 [16];
  char *pcStack_150;
  char *pcStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_118;
  char *pcStack_110;
  long lStack_108;
  char *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_c8;
  undefined1 uStack_c6;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined2 uStack_88;
  undefined1 uStack_86;
  
  if (*param_2 != '\x15') {
    lVar13 = FUN_108855b04(param_2,auStack_1f8,&UNK_10b209c40);
    *param_1 = 0;
    param_1[1] = lVar13;
    return;
  }
  uStack_1c8 = *(undefined8 *)(param_2 + 8);
  pcVar21 = *(char **)(param_2 + 0x10);
  uVar19 = *(ulong *)(param_2 + 0x18);
  pcVar2 = pcVar21 + uVar19 * 0x40;
  auStack_1f8[0] = 0x16;
  pcStack_1b8 = (char *)0x0;
  uVar11 = uVar19;
  if (0x38e2 < uVar19) {
    uVar11 = 0x38e3;
  }
  pcStack_1d8 = pcVar21;
  pcStack_1d0 = pcVar21;
  pcStack_1c0 = pcVar2;
  pauVar9 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar9[1][0] == '\x01') {
    auVar36 = *pauVar9;
    *(long *)*pauVar9 = *(long *)*pauVar9 + 1;
  }
  else {
    auVar36 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    pauVar9[1][0] = 1;
    *(long *)*pauVar9 = auVar36._0_8_ + 1;
    *(long *)(*pauVar9 + 8) = auVar36._8_8_;
  }
  auStack_160 = auVar36;
  if (uVar19 == 0) {
    plStack_180 = (long *)&UNK_108c56c70;
    uStack_178 = 0;
    uStack_170 = 0;
    lStack_168 = 0;
    pcVar14 = pcVar21;
    pcVar24 = (char *)0x0;
    pcVar6 = pcStack_1d0;
    pcVar7 = pcStack_1b8;
  }
  else {
    uVar18 = 4;
    if (3 < uVar19) {
      uVar18 = (uVar11 & 8) + 8;
    }
    if (0xe < uVar19) {
      uVar18 = (0xffffffffffffffffU >>
               (LZCOUNT(((ulong)(uint)((int)uVar11 << 3) * 0x92492493 >> 0x22) - 1) & 0x3fU)) + 1;
    }
    lVar20 = uVar18 * 0x48;
    lVar13 = uVar18 + 8;
    lVar10 = _malloc(lVar20 + lVar13);
    if (lVar10 == 0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,lVar20 + lVar13);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1013dcf54);
      (*pcVar8)();
    }
    plVar3 = (long *)(lVar10 + lVar20);
    uVar22 = uVar18 - 1;
    uVar11 = uVar22;
    if (7 < uVar22) {
      uVar11 = (uVar18 >> 3) * 7;
    }
    _memset(plVar3,0xff,lVar13);
    lStack_168 = 0;
    pcVar14 = pcVar21 + 0x40;
    cVar30 = *pcVar21;
    plStack_180 = plVar3;
    uStack_178 = uVar22;
    uStack_170 = uVar11;
    if (cVar30 != '\x16') {
      pcVar23 = (char *)0x0;
      puVar16 = (undefined8 *)((ulong)&pcStack_c0 | 1);
      pcVar1 = (char *)((uVar19 * 0x40 - 0x40 >> 6) + 1);
LAB_1013dc9b4:
      pcVar15 = pcVar14;
      uVar27 = *(undefined8 *)(pcVar21 + 9);
      uVar26 = *(undefined8 *)(pcVar21 + 1);
      uVar28 = *(undefined8 *)(pcVar21 + 0x10);
      lStack_f8 = *(long *)(pcVar21 + 0x28);
      pcStack_100 = *(char **)(pcVar21 + 0x20);
      uStack_e8 = *(undefined8 *)(pcVar21 + 0x38);
      uStack_f0 = *(undefined8 *)(pcVar21 + 0x30);
      pcVar23 = pcVar23 + 1;
      *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pcVar21 + 0x18);
      *(undefined8 *)((long)puVar16 + 0xf) = uVar28;
      puVar16[1] = uVar27;
      *puVar16 = uVar26;
      pcStack_c0 = (char *)CONCAT71(pcStack_c0._1_7_,cVar30);
      auStack_160 = auVar36;
      FUN_1004b64d4(&lStack_118,&pcStack_c0);
      lVar10 = lStack_108;
      pcVar21 = pcStack_110;
      lVar13 = lStack_118;
      if (lStack_118 != -0x8000000000000000) {
        func_0x0001007d95f0(&pcStack_c0,&pcStack_100);
        pcVar14 = pcStack_b8;
        if (pcStack_c0 == (char *)0x8000000000000002) {
          pcStack_1d0 = pcVar15;
          pcStack_1b8 = pcVar23;
          if (lVar13 != 0) {
            _free(pcVar21);
          }
          goto LAB_1013dce30;
        }
        lStack_140 = CONCAT71(uStack_af,uStack_b0);
        pcStack_148 = pcStack_b8;
        pcStack_150 = pcStack_c0;
        lStack_138 = lStack_a8;
        lStack_128 = lStack_98;
        lStack_130 = lStack_a0;
        uVar11 = FUN_100e8e860(auStack_160._0_8_,auStack_160._8_8_,pcVar21,lVar10);
        if (uStack_170 == 0) {
          func_0x0001088dde5c(&plStack_180,1,auStack_160,1);
        }
        uVar19 = uStack_178;
        plVar3 = plStack_180;
        bVar4 = (byte)(uVar11 >> 0x38);
        bVar17 = bVar4 >> 1;
        bVar5 = false;
        if (lVar10 == 0) {
          lVar20 = 0;
          uVar11 = uVar11 & uStack_178;
          lVar29 = *(long *)((long)plStack_180 + uVar11);
          uVar18 = CONCAT17(-((byte)((ulong)lVar29 >> 0x38) == bVar17),
                            CONCAT16(-((byte)((ulong)lVar29 >> 0x30) == bVar17),
                                     CONCAT15(-((byte)((ulong)lVar29 >> 0x28) == bVar17),
                                              CONCAT14(-((byte)((ulong)lVar29 >> 0x20) == bVar17),
                                                       CONCAT13(-((byte)((ulong)lVar29 >> 0x18) ==
                                                                 bVar17),CONCAT12(-((byte)((ulong)
                                                  lVar29 >> 0x10) == bVar17),
                                                  CONCAT11(-((byte)((ulong)lVar29 >> 8) == bVar17),
                                                           -((byte)lVar29 == bVar17)))))))) &
                   0x8080808080808080;
joined_r0x0001013dcba4:
          while (uVar18 == 0) {
            cVar30 = (char)((ulong)lVar29 >> 8);
            cVar31 = (char)((ulong)lVar29 >> 0x10);
            cVar32 = (char)((ulong)lVar29 >> 0x18);
            cVar33 = (char)((ulong)lVar29 >> 0x20);
            cVar34 = (char)((ulong)lVar29 >> 0x28);
            cVar35 = (char)((ulong)lVar29 >> 0x30);
            uVar18 = uStack_238;
            if (bVar5) {
LAB_1013dcc68:
              bVar25 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar29 >> 0x38) == -1),
                                           CONCAT16(-(cVar35 == -1),
                                                    CONCAT15(-(cVar34 == -1),
                                                             CONCAT14(-(cVar33 == -1),
                                                                      CONCAT13(-(cVar32 == -1),
                                                                               CONCAT12(-(cVar31 ==
                                                                                         -1),
                                                  CONCAT11(-(cVar30 == -1),-((char)lVar29 == -1)))))
                                                  ))),1);
              if ((bVar25 & 1) != 0) goto LAB_1013dcd1c;
              bVar5 = true;
              uStack_238 = uVar18;
            }
            else {
              uVar18 = CONCAT17(-(lVar29 < 0),
                                CONCAT16(-(cVar35 < '\0'),
                                         CONCAT15(-(cVar34 < '\0'),
                                                  CONCAT14(-(cVar33 < '\0'),
                                                           CONCAT13(-(cVar32 < '\0'),
                                                                    CONCAT12(-(cVar31 < '\0'),
                                                                             CONCAT11(-(cVar30 < 
                                                  '\0'),-((char)lVar29 < '\0'))))))));
              if (uVar18 != 0) {
                uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar18 = uVar11 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar19;
                goto LAB_1013dcc68;
              }
              bVar5 = false;
            }
            lVar20 = lVar20 + 8;
            uVar11 = lVar20 + uVar11 & uVar19;
            lVar29 = *(long *)((long)plVar3 + uVar11);
            uVar18 = CONCAT17(-((byte)((ulong)lVar29 >> 0x38) == bVar17),
                              CONCAT16(-((byte)((ulong)lVar29 >> 0x30) == bVar17),
                                       CONCAT15(-((byte)((ulong)lVar29 >> 0x28) == bVar17),
                                                CONCAT14(-((byte)((ulong)lVar29 >> 0x20) == bVar17),
                                                         CONCAT13(-((byte)((ulong)lVar29 >> 0x18) ==
                                                                   bVar17),CONCAT12(-((byte)((ulong)
                                                  lVar29 >> 0x10) == bVar17),
                                                  CONCAT11(-((byte)((ulong)lVar29 >> 8) == bVar17),
                                                           -((byte)lVar29 == bVar17)))))))) &
                     0x8080808080808080;
          }
          uVar22 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = uVar11 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar19;
          pcStack_c0 = (char *)plStack_180[uVar22 * -9 + -8];
          pcStack_b8 = (char *)plStack_180[uVar22 * -9 + -7];
          pcStack_100 = pcVar21;
          lStack_f8 = 0;
          uStack_f0._1_7_ = (undefined7)((ulong)uStack_f0 >> 8);
          uStack_f0 = CONCAT71(uStack_f0._1_7_,6);
          uStack_c6 = 0;
          uStack_c8 = 0x201;
          if (pcStack_b8 == (char *)0x0) {
            uStack_86 = false;
          }
          else {
            uStack_86 = *pcStack_c0 == '/';
          }
          uStack_b0 = 6;
          uStack_88 = 0x201;
          uVar12 = FUN_10112a6c0(&pcStack_100,&pcStack_c0);
          if ((uVar12 & 1) == 0) {
            uVar18 = uVar18 - 1 & uVar18;
            goto joined_r0x0001013dcba4;
          }
        }
        else {
          lVar20 = 0;
          uVar11 = uVar11 & uStack_178;
          lVar29 = *(long *)((long)plStack_180 + uVar11);
          uVar18 = CONCAT17(-((byte)((ulong)lVar29 >> 0x38) == bVar17),
                            CONCAT16(-((byte)((ulong)lVar29 >> 0x30) == bVar17),
                                     CONCAT15(-((byte)((ulong)lVar29 >> 0x28) == bVar17),
                                              CONCAT14(-((byte)((ulong)lVar29 >> 0x20) == bVar17),
                                                       CONCAT13(-((byte)((ulong)lVar29 >> 0x18) ==
                                                                 bVar17),CONCAT12(-((byte)((ulong)
                                                  lVar29 >> 0x10) == bVar17),
                                                  CONCAT11(-((byte)((ulong)lVar29 >> 8) == bVar17),
                                                           -((byte)lVar29 == bVar17)))))))) &
                   0x8080808080808080;
joined_r0x0001013dca74:
          while (uVar18 == 0) {
            cVar30 = (char)((ulong)lVar29 >> 8);
            cVar31 = (char)((ulong)lVar29 >> 0x10);
            cVar32 = (char)((ulong)lVar29 >> 0x18);
            cVar33 = (char)((ulong)lVar29 >> 0x20);
            cVar34 = (char)((ulong)lVar29 >> 0x28);
            cVar35 = (char)((ulong)lVar29 >> 0x30);
            uVar18 = uStack_238;
            if (bVar5) {
LAB_1013dcb44:
              bVar25 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar29 >> 0x38) == -1),
                                           CONCAT16(-(cVar35 == -1),
                                                    CONCAT15(-(cVar34 == -1),
                                                             CONCAT14(-(cVar33 == -1),
                                                                      CONCAT13(-(cVar32 == -1),
                                                                               CONCAT12(-(cVar31 ==
                                                                                         -1),
                                                  CONCAT11(-(cVar30 == -1),-((char)lVar29 == -1)))))
                                                  ))),1);
              if ((bVar25 & 1) != 0) goto LAB_1013dcd1c;
              bVar5 = true;
              uStack_238 = uVar18;
            }
            else {
              uVar18 = CONCAT17(-(lVar29 < 0),
                                CONCAT16(-(cVar35 < '\0'),
                                         CONCAT15(-(cVar34 < '\0'),
                                                  CONCAT14(-(cVar33 < '\0'),
                                                           CONCAT13(-(cVar32 < '\0'),
                                                                    CONCAT12(-(cVar31 < '\0'),
                                                                             CONCAT11(-(cVar30 < 
                                                  '\0'),-((char)lVar29 < '\0'))))))));
              if (uVar18 != 0) {
                uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar18 = uVar11 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar19;
                goto LAB_1013dcb44;
              }
              bVar5 = false;
            }
            lVar20 = lVar20 + 8;
            uVar11 = lVar20 + uVar11 & uVar19;
            lVar29 = *(long *)((long)plVar3 + uVar11);
            uVar18 = CONCAT17(-((byte)((ulong)lVar29 >> 0x38) == bVar17),
                              CONCAT16(-((byte)((ulong)lVar29 >> 0x30) == bVar17),
                                       CONCAT15(-((byte)((ulong)lVar29 >> 0x28) == bVar17),
                                                CONCAT14(-((byte)((ulong)lVar29 >> 0x20) == bVar17),
                                                         CONCAT13(-((byte)((ulong)lVar29 >> 0x18) ==
                                                                   bVar17),CONCAT12(-((byte)((ulong)
                                                  lVar29 >> 0x10) == bVar17),
                                                  CONCAT11(-((byte)((ulong)lVar29 >> 8) == bVar17),
                                                           -((byte)lVar29 == bVar17)))))))) &
                     0x8080808080808080;
          }
          uVar22 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar22 = uVar11 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar19;
          pcStack_c0 = (char *)plStack_180[uVar22 * -9 + -8];
          pcStack_b8 = (char *)plStack_180[uVar22 * -9 + -7];
          uStack_c6 = *pcVar21 == '/';
          pcStack_100 = pcVar21;
          lStack_f8 = lVar10;
          uStack_f0._1_7_ = (undefined7)((ulong)uStack_f0 >> 8);
          uStack_f0 = CONCAT71(uStack_f0._1_7_,6);
          uStack_c8 = 0x201;
          if (pcStack_b8 == (char *)0x0) {
            uStack_86 = false;
          }
          else {
            uStack_86 = *pcStack_c0 == '/';
          }
          uStack_b0 = 6;
          uStack_88 = 0x201;
          uVar12 = FUN_10112a6c0(&pcStack_100,&pcStack_c0);
          if ((uVar12 & 1) == 0) {
            uVar18 = uVar18 - 1 & uVar18;
            goto joined_r0x0001013dca74;
          }
        }
        uVar11 = plStack_180[uVar22 * -9 + -6];
        uVar19 = plStack_180[uVar22 * -9 + -5];
        lVar10 = plStack_180[uVar22 * -9 + -4];
        uVar18 = plStack_180[uVar22 * -9 + -3];
        lVar20 = plStack_180[uVar22 * -9 + -2];
        plStack_180[uVar22 * -9 + -5] = (long)pcStack_148;
        plStack_180[uVar22 * -9 + -6] = (long)pcStack_150;
        plStack_180[uVar22 * -9 + -3] = lStack_138;
        plStack_180[uVar22 * -9 + -4] = lStack_140;
        plStack_180[uVar22 * -9 + -1] = lStack_128;
        plStack_180[uVar22 * -9 + -2] = lStack_130;
        if (lVar13 != 0) {
          _free(pcVar21);
        }
        auVar36 = auStack_160;
        if (uVar11 != 0x8000000000000002) {
          uVar22 = uVar11 ^ 0x8000000000000000;
          if (-1 < (long)uVar11) {
            uVar22 = 2;
          }
          if ((uVar22 != 0) && (uVar22 != 1)) {
            if (uVar11 != 0) {
              _free(uVar19);
            }
            uVar19 = uVar18 & 0x7fffffffffffffff;
            lVar10 = lVar20;
            auVar36 = auStack_160;
          }
          if (uVar19 != 0) {
            auStack_160 = auVar36;
            _free(lVar10);
            auVar36 = auStack_160;
          }
        }
        goto LAB_1013dcda0;
      }
      pcStack_1d0 = pcVar15;
      pcStack_1b8 = pcVar23;
      FUN_100e077ec(&pcStack_100);
      pcVar14 = pcStack_110;
LAB_1013dce30:
      *param_1 = 0;
      param_1[1] = (long)pcVar14;
      FUN_100cdf624(&plStack_180);
      goto LAB_1013dcf18;
    }
    pcVar24 = (char *)0x0;
    pcVar6 = pcVar14;
    pcVar7 = (char *)0x0;
  }
LAB_1013dcea8:
  pcStack_1b8 = pcVar7;
  pcStack_1d0 = pcVar6;
  param_1[1] = uStack_178;
  *param_1 = (long)plStack_180;
  param_1[3] = lStack_168;
  param_1[2] = uStack_170;
  *(undefined1 (*) [16])(param_1 + 4) = auStack_160;
  if (*param_1 == 0) {
LAB_1013dcf18:
    FUN_100d34830(&pcStack_1d8);
  }
  else {
    lStack_1a8 = param_1[1];
    lStack_1b0 = *param_1;
    lStack_198 = param_1[3];
    lStack_1a0 = param_1[2];
    lStack_188 = param_1[5];
    lStack_190 = param_1[4];
    FUN_100d34830(&pcStack_1d8);
    if (pcVar2 != pcVar14) {
      pcStack_c0 = pcVar24;
      lVar13 = FUN_1087e422c(pcVar24 + ((ulong)((long)pcVar2 - (long)pcVar14) >> 6),&pcStack_c0,
                             &UNK_10b23a190);
      *param_1 = 0;
      param_1[1] = lVar13;
      FUN_100cdf624(&lStack_1b0);
    }
  }
  return;
LAB_1013dcd1c:
  if (-1 < *(char *)((long)plVar3 + uVar18)) {
    lVar20 = *plVar3;
    uVar11 = CONCAT17(-(lVar20 < 0),
                      CONCAT16(-((char)((ulong)lVar20 >> 0x30) < '\0'),
                               CONCAT15(-((char)((ulong)lVar20 >> 0x28) < '\0'),
                                        CONCAT14(-((char)((ulong)lVar20 >> 0x20) < '\0'),
                                                 CONCAT13(-((char)((ulong)lVar20 >> 0x18) < '\0'),
                                                          CONCAT12(-((char)((ulong)lVar20 >> 0x10) <
                                                                    '\0'),CONCAT11(-((char)((ulong)
                                                  lVar20 >> 8) < '\0'),-((char)lVar20 < '\0'))))))))
    ;
    uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar18 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
  }
  bVar17 = *(byte *)((long)plStack_180 + uVar18);
  bVar4 = bVar4 >> 1;
  *(byte *)((long)plStack_180 + uVar18) = bVar4;
  *(byte *)((long)plStack_180 + (uStack_178 & uVar18 - 8) + 8) = bVar4;
  uStack_170 = uStack_170 - ((ulong)bVar17 & 1);
  lStack_168 = lStack_168 + 1;
  plStack_180[uVar18 * -9 + -9] = lVar13;
  plStack_180[uVar18 * -9 + -8] = (long)pcVar21;
  plStack_180[uVar18 * -9 + -7] = lVar10;
  plStack_180[uVar18 * -9 + -5] = (long)pcStack_148;
  plStack_180[uVar18 * -9 + -6] = (long)pcStack_150;
  plStack_180[uVar18 * -9 + -3] = lStack_138;
  plStack_180[uVar18 * -9 + -4] = lStack_140;
  plStack_180[uVar18 * -9 + -1] = lStack_128;
  plStack_180[uVar18 * -9 + -2] = lStack_130;
  auVar36 = auStack_160;
LAB_1013dcda0:
  pcVar14 = pcVar2;
  pcVar24 = pcVar1;
  pcVar6 = pcVar2;
  pcVar7 = pcVar1;
  auStack_160 = auVar36;
  if (pcVar15 == pcVar2) goto LAB_1013dcea8;
  pcVar14 = pcVar15 + 0x40;
  cVar30 = *pcVar15;
  pcVar21 = pcVar15;
  pcVar24 = pcVar23;
  pcVar6 = pcVar14;
  pcVar7 = pcVar23;
  if (cVar30 == '\x16') goto LAB_1013dcea8;
  goto LAB_1013dc9b4;
}

