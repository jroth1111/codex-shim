
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10138b374(undefined8 *param_1,long *******param_2)

{
  long ******pppppplVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  long ******pppppplVar10;
  long ******pppppplVar11;
  ulong uVar12;
  long ******pppppplVar13;
  long ******pppppplVar14;
  ulong uVar15;
  long *****ppppplVar16;
  long lVar17;
  ulong uVar18;
  long ******pppppplVar19;
  byte bVar20;
  byte bVar21;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  long lVar22;
  ulong uStack_198;
  long ******pppppplStack_178;
  long *******ppppppplStack_168;
  long ******pppppplStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *******ppppppplStack_140;
  long ******pppppplStack_138;
  long ******pppppplStack_130;
  long lStack_128;
  undefined1 auStack_120 [16];
  long ******pppppplStack_110;
  undefined8 uStack_100;
  long ******pppppplStack_f8;
  long ******pppppplStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [16];
  long *******ppppppplStack_d0;
  undefined1 uStack_c8;
  long ******pppppplStack_c0;
  long ******pppppplStack_b8;
  long ******pppppplStack_b0;
  long *******ppppppplStack_a8;
  undefined1 uStack_a0;
  long *******ppppppplStack_98;
  long ******pppppplStack_90;
  long ******pppppplStack_88;
  undefined1 auStack_79 [9];
  
  auVar4._8_8_ = uStack_148;
  auVar4._0_8_ = uStack_150;
  pppppplVar14 = param_2[5];
  if (pppppplVar14 < param_2[4]) {
    do {
      bVar2 = *(byte *)((long)param_2[3] + (long)pppppplVar14);
      if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if (bVar2 != 0x7b) {
          pppppplVar14 = (long ******)FUN_108832208(param_2,auStack_79,&UNK_10b24eab8);
          goto LAB_10138bc74;
        }
        cVar23 = *(char *)(param_2 + 9);
        *(char *)(param_2 + 9) = cVar23 + -1;
        if ((char)(cVar23 + -1) == '\0') {
          ppppppplStack_140 = (long *******)0x18;
          goto LAB_10138b3e8;
        }
        param_2[5] = (long ******)((long)pppppplVar14 + 1);
        uStack_c8 = 1;
        ppppppplStack_d0 = param_2;
        pauVar9 = (undefined1 (*) [16])
                  (*
                  ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                  )();
        if (pauVar9[1][0] == '\x01') {
          auStack_120 = *pauVar9;
        }
        else {
          auStack_120 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar9 + 8) = auStack_120._8_8_;
          pauVar9[1][0] = 1;
        }
        *(long *)*pauVar9 = auStack_120._0_8_ + 1;
        ppppppplStack_140 = (long *******)&UNK_108c56c70;
        pppppplStack_138 = (long ******)0x0;
        pppppplStack_130 = (long ******)0x0;
        lStack_128 = 0;
        goto LAB_10138b484;
      }
      pppppplVar14 = (long ******)((long)pppppplVar14 + 1);
      param_2[5] = pppppplVar14;
    } while (param_2[4] != pppppplVar14);
  }
  ppppppplStack_140 = (long *******)0x5;
LAB_10138b3e8:
  uVar8 = FUN_108831e8c(param_2,&ppppppplStack_140);
  goto LAB_10138bc7c;
LAB_10138b484:
  FUN_1011ddd20(&pppppplStack_c0,&ppppppplStack_d0);
  pppppplVar1 = pppppplStack_b0;
  pppppplVar13 = pppppplStack_b8;
  pppppplVar14 = pppppplStack_c0;
  ppppppplVar5 = ppppppplStack_d0;
  if (pppppplStack_c0 != (long ******)0x8000000000000001) {
    if (pppppplStack_c0 == (long ******)0x8000000000000000) {
      lStack_158 = lStack_128;
      pppppplStack_160 = pppppplStack_130;
      uStack_100 = ppppppplStack_140;
      pppppplStack_f8 = pppppplStack_138;
      auStack_e0 = auStack_120;
      goto LAB_10138bba4;
    }
    pppppplVar11 = ppppppplStack_d0[4];
    pppppplVar10 = ppppppplStack_d0[5];
    if (pppppplVar10 < pppppplVar11) {
      while( true ) {
        bVar2 = *(byte *)((long)ppppppplStack_d0[3] + (long)pppppplVar10);
        if (0x3a < bVar2) goto LAB_10138bc84;
        if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
        pppppplVar10 = (long ******)((long)pppppplVar10 + 1);
        ppppppplStack_d0[5] = pppppplVar10;
        if (pppppplVar11 == pppppplVar10) goto LAB_10138baa4;
      }
      if ((ulong)bVar2 != 0x3a) {
LAB_10138bc84:
        uStack_100 = (long *******)0x6;
        pppppplStack_b8 = (long ******)FUN_108831e8c(ppppppplStack_d0,&uStack_100);
        goto LAB_10138bb88;
      }
      pppppplVar10 = (long ******)((long)pppppplVar10 + 1);
      ppppppplStack_d0[5] = pppppplVar10;
      if (pppppplVar11 <= pppppplVar10) {
LAB_10138babc:
        uStack_100 = (long *******)0x5;
        pppppplStack_b8 = (long ******)FUN_108831e8c(ppppppplStack_d0,&uStack_100);
        goto LAB_10138bb88;
      }
      while (bVar2 = *(byte *)((long)ppppppplStack_d0[3] + (long)pppppplVar10),
            bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0) {
        pppppplVar10 = (long ******)((long)pppppplVar10 + 1);
        ppppppplStack_d0[5] = pppppplVar10;
        if (pppppplVar11 == pppppplVar10) goto LAB_10138babc;
      }
      if (bVar2 == 0x5b) {
        cVar23 = *(char *)(ppppppplStack_d0 + 9);
        *(char *)(ppppppplStack_d0 + 9) = cVar23 + -1;
        if ((char)(cVar23 + -1) == '\0') {
          uStack_100 = (long *******)0x18;
          pppppplStack_b8 = (long ******)FUN_108831e8c(ppppppplStack_d0,&uStack_100);
          goto LAB_10138bb88;
        }
        ppppppplStack_d0[5] = (long ******)((long)pppppplVar10 + 1);
        ppppppplStack_98 = ppppppplStack_d0;
        pppppplStack_90 = (long ******)CONCAT71(pppppplStack_90._1_7_,1);
        FUN_1011de3f0(&uStack_100,&ppppppplStack_98);
        pppppplVar10 = pppppplStack_f8;
        if ((char)uStack_100 == '\x01') {
LAB_10138b728:
          ppppppplStack_168 = (long *******)0x8000000000000000;
        }
        else {
          if (uStack_100._1_1_ != '\x01') {
            pppppplVar10 = (long ******)FUN_1087e422c(0,&UNK_10b22d8a0,&UNK_10b20a590);
            goto LAB_10138b728;
          }
          FUN_10160c7b0(&uStack_100,ppppppplStack_98);
          ppppppplStack_168 = uStack_100;
          pppppplVar10 = pppppplStack_f8;
          if (uStack_100 == (long *******)0x8000000000000000) goto LAB_10138b728;
          pppppplStack_178 = pppppplStack_f0;
        }
        *(char *)(ppppppplVar5 + 9) = *(char *)(ppppppplVar5 + 9) + '\x01';
        pppppplVar11 = (long ******)FUN_10065474c(ppppppplVar5);
        pppppplVar19 = pppppplVar10;
        if (ppppppplStack_168 != (long *******)0x8000000000000000) goto LAB_10138b7ec;
        if (pppppplVar11 == (long ******)0x0) goto LAB_10138bb80;
        ppppplVar16 = *pppppplVar11;
        if (ppppplVar16 == (long *****)0x1) {
          FUN_100de21d4(pppppplVar11 + 1);
        }
        else {
LAB_10138bb30:
          if ((ppppplVar16 == (long *****)0x0) && (pppppplVar11[2] != (long *****)0x0)) {
            _free(pppppplVar11[1]);
          }
        }
        goto LAB_10138bb70;
      }
      if (bVar2 == 0x7b) {
        cVar23 = *(char *)(ppppppplStack_d0 + 9);
        *(char *)(ppppppplStack_d0 + 9) = cVar23 + -1;
        if ((char)(cVar23 + -1) == '\0') {
          uStack_100 = (long *******)0x18;
          pppppplStack_b8 = (long ******)FUN_108831e8c(ppppppplStack_d0,&uStack_100);
          goto LAB_10138bb88;
        }
        ppppppplStack_d0[5] = (long ******)((long)pppppplVar10 + 1);
        ppppppplStack_a8 = ppppppplStack_d0;
        uStack_a0 = 1;
        ppppppplStack_168 = (long *******)0x8000000000000000;
        pppppplVar11 = (long ******)0x8000000000000001;
LAB_10138b56c:
        do {
          FUN_1011ddbc4(&uStack_100,&ppppppplStack_a8);
          ppppppplVar6 = ppppppplStack_a8;
          pppppplVar10 = pppppplStack_f8;
          if ((char)uStack_100 == '\x01') break;
          if (uStack_100._1_1_ != '\x01') {
            pppppplVar10 = pppppplVar11;
            if (ppppppplStack_168 != (long *******)0x8000000000000000) goto LAB_10138b7cc;
            ppppppplStack_98 = (long *******)&UNK_108ca26b0;
            pppppplStack_90 = (long ******)0x2;
            uStack_100 = (long *******)&ppppppplStack_98;
            pppppplStack_f8 = (long ******)&DAT_100c7b3a0;
            pppppplVar10 = (long ******)FUN_108856088(s_missing_field_____108ac28f7,&uStack_100);
            pppppplStack_178 = pppppplVar11;
            goto LAB_10138b7b4;
          }
          ppppppplStack_a8[5] = (long ******)((long)ppppppplStack_a8[5] + 1);
          ppppppplStack_a8[2] = (long ******)0x0;
          __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                    (&uStack_100,ppppppplStack_a8 + 3,ppppppplStack_a8);
          pppppplVar10 = pppppplStack_f8;
          if (uStack_100 == (long *******)0x2) break;
          if ((pppppplStack_f0 == (long ******)0x2) && (*(short *)pppppplStack_f8 == 0x6469)) {
            if (ppppppplStack_168 != (long *******)0x8000000000000000) {
              ppppppplStack_98 = (long *******)&UNK_108ca26b0;
              pppppplStack_90 = (long ******)0x2;
              uStack_100 = (long *******)&ppppppplStack_98;
              pppppplStack_f8 = (long ******)&DAT_100c7b3a0;
              pppppplVar10 = (long ******)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_100)
              ;
              pppppplStack_178 = pppppplVar11;
              if (ppppppplStack_168 != (long *******)0x0) goto LAB_10138b7ac;
              ppppppplStack_168 = (long *******)0x8000000000000000;
              goto LAB_10138b7cc;
            }
            pppppplVar10 = ppppppplVar6[5];
            if (pppppplVar10 < ppppppplVar6[4]) {
              while( true ) {
                bVar2 = *(byte *)((long)ppppppplVar6[3] + (long)pppppplVar10);
                if (0x3a < bVar2) goto LAB_10138ba74;
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
                pppppplVar10 = (long ******)((long)pppppplVar10 + 1);
                ppppppplVar6[5] = pppppplVar10;
                if (ppppppplVar6[4] == pppppplVar10) goto LAB_10138b9b8;
              }
              if ((ulong)bVar2 == 0x3a) {
                ppppppplVar6[5] = (long ******)((long)pppppplVar10 + 1);
                FUN_10160c7b0(&ppppppplStack_98,ppppppplVar6);
                ppppppplStack_168 = ppppppplStack_98;
                pppppplVar10 = pppppplStack_90;
                if (ppppppplStack_98 != (long *******)0x8000000000000000) {
                  pppppplStack_178 = pppppplStack_88;
                  pppppplVar11 = pppppplStack_90;
                  goto LAB_10138b56c;
                }
              }
              else {
LAB_10138ba74:
                uStack_100 = (long *******)0x6;
                pppppplVar10 = (long ******)FUN_108831e8c(ppppppplVar6,&uStack_100);
              }
            }
            else {
LAB_10138b9b8:
              uStack_100 = (long *******)0x3;
              pppppplVar10 = (long ******)FUN_108831e8c(ppppppplVar6,&uStack_100);
            }
            ppppppplStack_168 = (long *******)0x8000000000000000;
            pppppplStack_178 = pppppplVar11;
            goto LAB_10138b7cc;
          }
          pppppplVar10 = (long ******)FUN_10062a8ec(ppppppplVar6);
        } while (pppppplVar10 == (long ******)0x0);
        if (((ulong)ppppppplStack_168 & 0x7fffffffffffffff) == 0) {
          ppppppplStack_168 = (long *******)0x8000000000000000;
        }
        else {
LAB_10138b7ac:
          _free(pppppplVar11);
LAB_10138b7b4:
          ppppppplStack_168 = (long *******)0x8000000000000000;
        }
LAB_10138b7cc:
        *(char *)(ppppppplVar5 + 9) = *(char *)(ppppppplVar5 + 9) + '\x01';
        pppppplVar11 = (long ******)FUN_100654604(ppppppplVar5);
        pppppplVar19 = pppppplVar10;
        if (ppppppplStack_168 == (long *******)0x8000000000000000) {
          if (pppppplVar11 == (long ******)0x0) goto LAB_10138bb80;
          ppppplVar16 = *pppppplVar11;
          if (ppppplVar16 != (long *****)0x1) goto LAB_10138bb30;
          FUN_100de21d4(pppppplVar11 + 1);
          goto LAB_10138bb70;
        }
LAB_10138b7ec:
        if (pppppplVar11 == (long ******)0x0) {
          uVar12 = FUN_100e8dd9c(auStack_120._0_8_,auStack_120._8_8_,pppppplVar13,pppppplVar1);
          if (pppppplStack_130 == (long ******)0x0) {
            __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h3dcfdf2762f77a02E
                      (&ppppppplStack_140,1,auStack_120,1);
          }
          pppppplVar10 = pppppplStack_138;
          ppppppplVar5 = ppppppplStack_140;
          bVar3 = false;
          lVar17 = 0;
          bVar2 = (byte)(uVar12 >> 0x38);
          bVar20 = bVar2 >> 1;
          uVar12 = uVar12 & (ulong)pppppplStack_138;
          lVar22 = *(long *)((long)ppppppplStack_140 + uVar12);
          uVar18 = CONCAT17(-((byte)((ulong)lVar22 >> 0x38) == bVar20),
                            CONCAT16(-((byte)((ulong)lVar22 >> 0x30) == bVar20),
                                     CONCAT15(-((byte)((ulong)lVar22 >> 0x28) == bVar20),
                                              CONCAT14(-((byte)((ulong)lVar22 >> 0x20) == bVar20),
                                                       CONCAT13(-((byte)((ulong)lVar22 >> 0x18) ==
                                                                 bVar20),CONCAT12(-((byte)((ulong)
                                                  lVar22 >> 0x10) == bVar20),
                                                  CONCAT11(-((byte)((ulong)lVar22 >> 8) == bVar20),
                                                           -((byte)lVar22 == bVar20)))))))) &
                   0x8080808080808080;
joined_r0x00010138b834:
          while (uVar18 == 0) {
            cVar23 = (char)((ulong)lVar22 >> 8);
            cVar24 = (char)((ulong)lVar22 >> 0x10);
            cVar25 = (char)((ulong)lVar22 >> 0x18);
            cVar26 = (char)((ulong)lVar22 >> 0x20);
            cVar27 = (char)((ulong)lVar22 >> 0x28);
            cVar28 = (char)((ulong)lVar22 >> 0x30);
            uVar18 = uStack_198;
            if (bVar3) {
LAB_10138b8bc:
              bVar21 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar22 >> 0x38) == -1),
                                           CONCAT16(-(cVar28 == -1),
                                                    CONCAT15(-(cVar27 == -1),
                                                             CONCAT14(-(cVar26 == -1),
                                                                      CONCAT13(-(cVar25 == -1),
                                                                               CONCAT12(-(cVar24 ==
                                                                                         -1),
                                                  CONCAT11(-(cVar23 == -1),-((char)lVar22 == -1)))))
                                                  ))),1);
              if ((bVar21 & 1) != 0) {
                uVar12 = (ulong)*(char *)((long)ppppppplVar5 + uVar18);
                if (-1 < *(char *)((long)ppppppplVar5 + uVar18)) {
                  pppppplVar11 = *ppppppplVar5;
                  uVar12 = CONCAT17(-((long)pppppplVar11 < 0),
                                    CONCAT16(-((char)((ulong)pppppplVar11 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)pppppplVar11 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)pppppplVar11 >> 0x20)
                                                                < '\0'),CONCAT13(-((char)((ulong)
                                                  pppppplVar11 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)pppppplVar11 >> 0x10) <
                                                            '\0'),CONCAT11(-((char)((ulong)
                                                  pppppplVar11 >> 8) < '\0'),
                                                  -((char)pppppplVar11 < '\0'))))))));
                  uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
                  uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
                  uVar12 = (ulong)*(byte *)((long)ppppppplVar5 + uVar18);
                }
                *(byte *)((long)ppppppplVar5 + uVar18) = bVar2 >> 1;
                *(byte *)((long)ppppppplVar5 + (uVar18 - 8 & (ulong)pppppplVar10) + 8) = bVar2 >> 1;
                pppppplStack_130 = (long ******)((long)pppppplStack_130 - (uVar12 & 1));
                lStack_128 = lStack_128 + 1;
                ppppppplVar5[uVar18 * -6 + -6] = pppppplVar14;
                ppppppplVar5[uVar18 * -6 + -5] = pppppplVar13;
                ppppppplVar5[uVar18 * -6 + -4] = pppppplVar1;
                ppppppplVar5[uVar18 * -6 + -3] = (long ******)ppppppplStack_168;
                ppppppplVar5[uVar18 * -6 + -2] = pppppplVar19;
                ppppppplVar5[uVar18 * -6 + -1] = pppppplStack_178;
                goto LAB_10138b484;
              }
              bVar3 = true;
              uStack_198 = uVar18;
            }
            else {
              uVar18 = CONCAT17(-(lVar22 < 0),
                                CONCAT16(-(cVar28 < '\0'),
                                         CONCAT15(-(cVar27 < '\0'),
                                                  CONCAT14(-(cVar26 < '\0'),
                                                           CONCAT13(-(cVar25 < '\0'),
                                                                    CONCAT12(-(cVar24 < '\0'),
                                                                             CONCAT11(-(cVar23 < 
                                                  '\0'),-((char)lVar22 < '\0'))))))));
              if (uVar18 != 0) {
                uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar18 = uVar12 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) &
                         (ulong)pppppplVar10;
                goto LAB_10138b8bc;
              }
              bVar3 = false;
            }
            lVar17 = lVar17 + 8;
            uVar12 = lVar17 + uVar12 & (ulong)pppppplVar10;
            lVar22 = *(long *)((long)ppppppplVar5 + uVar12);
            uVar18 = CONCAT17(-((byte)((ulong)lVar22 >> 0x38) == bVar20),
                              CONCAT16(-((byte)((ulong)lVar22 >> 0x30) == bVar20),
                                       CONCAT15(-((byte)((ulong)lVar22 >> 0x28) == bVar20),
                                                CONCAT14(-((byte)((ulong)lVar22 >> 0x20) == bVar20),
                                                         CONCAT13(-((byte)((ulong)lVar22 >> 0x18) ==
                                                                   bVar20),CONCAT12(-((byte)((ulong)
                                                  lVar22 >> 0x10) == bVar20),
                                                  CONCAT11(-((byte)((ulong)lVar22 >> 8) == bVar20),
                                                           -((byte)lVar22 == bVar20)))))))) &
                     0x8080808080808080;
          }
          uVar15 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar15 = uVar12 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) &
                   (ulong)pppppplVar10;
          if (pppppplVar1 == ppppppplVar5[uVar15 * -6 + -4]) {
            iVar7 = _memcmp(pppppplVar13,ppppppplVar5[uVar15 * -6 + -5]);
            if (iVar7 == 0) goto LAB_10138b904;
          }
          uVar18 = uVar18 - 1 & uVar18;
          goto joined_r0x00010138b834;
        }
        pppppplVar10 = pppppplVar11;
        pppppplVar11 = pppppplVar19;
        if (ppppppplStack_168 != (long *******)0x0) {
LAB_10138bb70:
          _free(pppppplVar11);
        }
      }
      else {
        pppppplVar10 = (long ******)FUN_108832208(ppppppplStack_d0,auStack_79,&UNK_10b24f038);
      }
LAB_10138bb80:
      pppppplStack_b8 = (long ******)FUN_108832da4(pppppplVar10,ppppppplVar5);
    }
    else {
LAB_10138baa4:
      uStack_100 = (long *******)0x3;
      pppppplStack_b8 = (long ******)FUN_108831e8c(ppppppplStack_d0,&uStack_100);
    }
LAB_10138bb88:
    if (pppppplVar14 != (long ******)0x0) {
      _free(pppppplVar13);
    }
  }
  goto LAB_10138bb98;
LAB_10138b904:
  pppppplVar1 = ppppppplVar5[uVar15 * -6 + -3];
  pppppplVar10 = ppppppplVar5[uVar15 * -6 + -2];
  ppppppplVar5[uVar15 * -6 + -3] = (long ******)ppppppplStack_168;
  ppppppplVar5[uVar15 * -6 + -2] = pppppplVar19;
  ppppppplVar5[uVar15 * -6 + -1] = pppppplStack_178;
  if (pppppplVar14 != (long ******)0x0) {
    _free(pppppplVar13);
  }
  if (((ulong)pppppplVar1 & 0x7fffffffffffffff) != 0) {
    _free(pppppplVar10);
  }
  goto LAB_10138b484;
LAB_10138bb98:
  FUN_100d0265c(&ppppppplStack_140);
  uStack_100 = (long *******)0x0;
  pppppplStack_f8 = pppppplStack_b8;
  auStack_e0 = auVar4;
LAB_10138bba4:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  lStack_e8 = lStack_158;
  pppppplStack_f0 = pppppplStack_160;
  pppppplVar13 = (long ******)FUN_100654604(param_2);
  pppppplVar14 = pppppplStack_f8;
  pppppplStack_138 = pppppplStack_f8;
  ppppppplStack_140 = uStack_100;
  lStack_128 = lStack_e8;
  pppppplStack_130 = pppppplStack_f0;
  pppppplStack_110 = pppppplVar13;
  auStack_120 = auStack_e0;
  if (uStack_100 == (long *******)0x0) {
    if (pppppplVar13 != (long ******)0x0) {
      if (*pppppplVar13 == (long *****)0x1) {
        FUN_100de21d4(pppppplVar13 + 1);
      }
      else if ((*pppppplVar13 == (long *****)0x0) && (pppppplVar13[2] != (long *****)0x0)) {
        _free(pppppplVar13[1]);
      }
      _free(pppppplVar13);
    }
  }
  else {
    if (pppppplVar13 == (long ******)0x0) {
      param_1[3] = lStack_e8;
      param_1[2] = pppppplStack_f0;
      *(undefined1 (*) [16])(param_1 + 4) = auStack_e0;
      *param_1 = uStack_100;
      param_1[1] = pppppplStack_f8;
      return;
    }
    FUN_100d0265c(&ppppppplStack_140);
    pppppplVar14 = pppppplVar13;
  }
LAB_10138bc74:
  uVar8 = FUN_108832da4(pppppplVar14,param_2);
LAB_10138bc7c:
  *param_1 = 0;
  param_1[1] = uVar8;
  return;
}

