
/* WARNING: Removing unreachable block (ram,0x00010141b01c) */
/* WARNING: Removing unreachable block (ram,0x00010141aefc) */
/* WARNING: Removing unreachable block (ram,0x00010141afbc) */
/* WARNING: Removing unreachable block (ram,0x00010141af68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141aa4c(undefined8 *param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  long ***ppplVar10;
  code *pcVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  char *pcVar14;
  char *pcVar15;
  long ****pppplVar16;
  undefined1 uVar17;
  byte *extraout_x8;
  byte *pbVar18;
  byte *extraout_x8_00;
  long lVar19;
  long lVar20;
  long *plVar21;
  char *pcVar22;
  ulong uVar23;
  undefined8 uVar24;
  char cVar25;
  ulong uVar26;
  long ****unaff_x21;
  char cVar27;
  long ****unaff_x22;
  long *****ppppplVar28;
  long *****ppppplVar29;
  ulong uVar30;
  byte *pbVar31;
  undefined4 *puVar32;
  byte *pbVar33;
  byte bVar34;
  long lVar35;
  long lVar36;
  char *pcVar37;
  byte bVar38;
  long ****pppplVar39;
  long ****pppplVar40;
  long ****pppplVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  long **pplStack_1a0;
  ulong uStack_198;
  long ***ppplStack_158;
  char *pcStack_150;
  long ***ppplStack_148;
  long ****pppplStack_140;
  long ***ppplStack_138;
  long ***ppplStack_130;
  long ***ppplStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long ****pppplStack_100;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  undefined8 uStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_a8;
  undefined3 uStack_a4;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  undefined1 auStack_90 [16];
  
  if (*param_2 == '\x15') {
    pbVar31 = *(byte **)(param_2 + 0x10);
    lVar19 = *(long *)(param_2 + 0x18);
    lVar35 = lVar19 * 0x40;
    pbVar1 = pbVar31 + lVar35;
    ppplStack_158 = (long ***)0x0;
    pcStack_150 = (char *)0x8;
    ppplStack_148 = (long ***)0x0;
    if (lVar19 == 0) {
      pplStack_1a0 = (long **)0x0;
      pbVar18 = pbVar31;
      goto LAB_10141add8;
    }
    bVar5 = *pbVar31;
    pbVar18 = pbVar1;
    if (bVar5 < 0xd) {
      if (bVar5 == 1) {
        pbVar18 = (byte *)(ulong)pbVar31[1];
      }
      else if (bVar5 == 4) {
        unaff_x21 = *(long *****)(pbVar31 + 8);
      }
      else {
        if (bVar5 != 0xc) {
LAB_10141b634:
          pppplVar16 = (long ****)FUN_108855c40(pbVar31,&pppplStack_100,&UNK_10b214828);
          goto LAB_10141b64c;
        }
LAB_10141ab04:
        uVar24 = *(undefined8 *)(pbVar31 + 0x10);
        unaff_x21 = *(long *****)(pbVar31 + 0x18);
        if (unaff_x21 == (long ****)0x0) {
          unaff_x22 = (long ****)0x1;
        }
        else {
          unaff_x22 = (long ****)_malloc(unaff_x21);
          if (unaff_x22 == (long ****)0x0) {
LAB_10141ab28:
            func_0x0001087c9084(1,unaff_x21);
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10141ab38);
            (*pcVar11)();
          }
        }
        _memcpy(unaff_x22,uVar24,unaff_x21);
        pbVar18 = extraout_x8;
      }
    }
    else {
      if (bVar5 != 0xd) {
        if (bVar5 == 0xe) goto LAB_10141ab04;
        if (bVar5 != 0xf) goto LAB_10141b634;
      }
      unaff_x21 = *(long *****)(pbVar31 + 8);
      unaff_x22 = *(long *****)(pbVar31 + 0x10);
    }
    uStack_e0._0_2_ = CONCAT11((char)pbVar18,bVar5);
    ppplStack_d8 = (long ***)unaff_x21;
    ppplStack_d0 = (long ***)unaff_x22;
    ppplStack_c8 = (long ***)unaff_x21;
    __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&ppplStack_a0,pbVar31 + 0x20);
    unaff_x21 = (long ****)ppplStack_148;
    if ((char)ppplStack_a0 != '\x16') {
      puVar32 = (undefined4 *)((ulong)&ppplStack_a0 | 1);
      uVar4 = *(undefined4 *)((long)puVar32 + 3);
      uStack_a8._0_3_ = (undefined3)*puVar32;
      uStack_a8._3_1_ = (undefined1)uVar4;
      uStack_a4 = (undefined3)((uint)uVar4 >> 8);
      uStack_b8 = auStack_90._8_8_;
      uStack_c0 = auStack_90._0_8_;
      ppplStack_f8 = ppplStack_d8;
      pppplStack_100 = (long ****)uStack_e0;
      ppplStack_e8 = ppplStack_c8;
      ppplStack_f0 = ppplStack_d0;
      ppplStack_138 = ppplStack_d8;
      pppplStack_140 = (long ****)uStack_e0;
      ppplStack_128 = ppplStack_c8;
      ppplStack_130 = ppplStack_d0;
      auStack_120._0_8_ = CONCAT44(uVar4,(int)CONCAT41(uStack_a8,(char)ppplStack_a0));
      auStack_120._8_8_ = ppplStack_98;
      uStack_108 = auStack_90._8_8_;
      uStack_110 = auStack_90._0_8_;
      if (ppplStack_148 == ppplStack_158) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&ppplStack_158);
      }
      pcVar2 = pcStack_150 + (long)unaff_x21 * 0x40;
      *(long ****)(pcVar2 + 8) = ppplStack_138;
      *(long *****)pcVar2 = pppplStack_140;
      *(long ****)(pcVar2 + 0x18) = ppplStack_128;
      *(long ****)(pcVar2 + 0x10) = ppplStack_130;
      *(undefined8 *)(pcVar2 + 0x28) = auStack_120._8_8_;
      *(undefined8 *)(pcVar2 + 0x20) = auStack_120._0_8_;
      *(undefined8 *)(pcVar2 + 0x38) = uStack_108;
      *(undefined8 *)(pcVar2 + 0x30) = uStack_110;
      ppplStack_148 = (long ***)((long)unaff_x21 + 1);
      if (lVar19 == 1) {
        pplStack_1a0 = (long **)0x1;
        pbVar18 = pbVar31 + 0x40;
      }
      else {
        lVar19 = 0;
        pplStack_1a0 = (long **)((lVar35 - 0x80U >> 6) + 2);
        do {
          bVar5 = pbVar31[lVar19 + 0x40];
          if (bVar5 < 0xd) {
            if (bVar5 == 1) {
              pbVar18 = (byte *)(ulong)pbVar31[lVar19 + 0x41];
              ppplStack_d0 = ppplStack_148;
            }
            else if (bVar5 == 4) {
              pbVar18 = pbVar31 + lVar19;
              unaff_x21 = *(long *****)(pbVar18 + 0x48);
              ppplStack_d0 = ppplStack_148;
            }
            else {
              if (bVar5 != 0xc) {
LAB_10141b62c:
                pbVar31 = pbVar31 + lVar19 + 0x40;
                goto LAB_10141b634;
              }
LAB_10141acf8:
              uVar24 = *(undefined8 *)(pbVar31 + lVar19 + 0x50);
              unaff_x21 = *(long *****)(pbVar31 + lVar19 + 0x58);
              if (unaff_x21 == (long ****)0x0) {
                pppplVar16 = (long ****)0x1;
              }
              else {
                pppplVar16 = (long ****)_malloc(unaff_x21);
                if (pppplVar16 == (long ****)0x0) goto LAB_10141ab28;
              }
              _memcpy(pppplVar16,uVar24,unaff_x21);
              pbVar18 = extraout_x8_00;
              ppplStack_d0 = (long ***)pppplVar16;
            }
          }
          else {
            if (bVar5 != 0xd) {
              if (bVar5 == 0xe) goto LAB_10141acf8;
              if (bVar5 != 0xf) goto LAB_10141b62c;
            }
            pbVar18 = pbVar31 + lVar19;
            unaff_x21 = *(long *****)(pbVar18 + 0x48);
            ppplStack_d0 = *(long ****)(pbVar18 + 0x50);
          }
          uStack_e0._0_2_ = CONCAT11((char)pbVar18,bVar5);
          ppplStack_d8 = (long ***)unaff_x21;
          ppplStack_c8 = (long ***)unaff_x21;
          __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE
                    (&ppplStack_a0,pbVar31 + lVar19 + 0x60);
          unaff_x21 = (long ****)ppplStack_148;
          if ((char)ppplStack_a0 == '\x16') goto LAB_10141ab88;
          auStack_120._8_8_ = ppplStack_98;
          uVar4 = *(undefined4 *)((long)puVar32 + 3);
          uStack_a8._0_3_ = (undefined3)*puVar32;
          uStack_a8._3_1_ = (undefined1)uVar4;
          uStack_a4 = (undefined3)((uint)uVar4 >> 8);
          uStack_b8 = auStack_90._8_8_;
          uStack_c0 = auStack_90._0_8_;
          ppplStack_138 = ppplStack_d8;
          pppplStack_140 = (long ****)uStack_e0;
          ppplStack_128 = ppplStack_c8;
          ppplStack_130 = ppplStack_d0;
          uStack_108 = auStack_90._8_8_;
          uStack_110 = auStack_90._0_8_;
          ppplStack_f8 = ppplStack_d8;
          pppplStack_100 = (long ****)uStack_e0;
          ppplStack_e8 = ppplStack_c8;
          ppplStack_f0 = ppplStack_d0;
          auStack_120._0_8_ = CONCAT44(uVar4,(int)CONCAT41(uStack_a8,(char)ppplStack_a0));
          if (ppplStack_148 == ppplStack_158) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&ppplStack_158);
          }
          pcVar2 = pcStack_150 + (long)unaff_x21 * 0x40;
          *(long ****)(pcVar2 + 8) = ppplStack_138;
          *(long *****)pcVar2 = pppplStack_140;
          *(long ****)(pcVar2 + 0x18) = ppplStack_128;
          *(long ****)(pcVar2 + 0x10) = ppplStack_130;
          *(undefined8 *)(pcVar2 + 0x28) = auStack_120._8_8_;
          *(undefined8 *)(pcVar2 + 0x20) = auStack_120._0_8_;
          *(undefined8 *)(pcVar2 + 0x38) = uStack_108;
          *(undefined8 *)(pcVar2 + 0x30) = uStack_110;
          ppplStack_148 = (long ***)((long)unaff_x21 + 1);
          lVar19 = lVar19 + 0x40;
          pbVar18 = pbVar1;
        } while (lVar35 + -0x40 != lVar19);
      }
LAB_10141add8:
      ppplVar7 = ppplStack_148;
      pcVar2 = pcStack_150;
      pauVar13 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar13[1][0] == '\x01') {
        auStack_120 = *pauVar13;
      }
      else {
        auStack_120 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar13 + 8) = auStack_120._8_8_;
        pauVar13[1][0] = 1;
      }
      *(long *)*pauVar13 = auStack_120._0_8_ + 1;
      pppplStack_140 = (long ****)&UNK_108c56c70;
      ppplStack_138 = (long ***)0x0;
      ppplStack_130 = (long ***)0x0;
      ppplStack_128 = (long ***)0x0;
      pcVar37 = pcVar2;
LAB_10141ae20:
      do {
        pcVar14 = pcVar37;
        ppplVar8 = ppplStack_138;
        pppplVar39 = pppplStack_140;
        if (pcVar14 == pcVar2 + (long)ppplVar7 * 0x40) goto LAB_10141b4a4;
        pcVar37 = pcVar14 + 0x40;
        if (*pcVar14 != '\x16') {
          FUN_1004e07f8(&uStack_e0,pcVar14);
          ppplVar10 = ppplStack_d0;
          ppplVar8 = ppplStack_d8;
          ppppplVar29 = uStack_e0;
          pppplVar16 = (long ****)ppplStack_d8;
          if (uStack_e0 != (long *****)0x8000000000000000) {
            if (pcVar14[0x20] == '\x14') {
              lVar19 = *(long *)(pcVar14 + 0x38);
              if (lVar19 == 0) {
                uVar24 = 0;
              }
              else {
                pcVar22 = *(char **)(pcVar14 + 0x30);
                pcVar14 = pcVar22 + 0x20;
                cVar42 = *pcVar22;
                cVar27 = '\x02';
                if (cVar42 != '\x10') {
                  if (cVar42 == '\x11') {
                    pcVar15 = *(char **)(pcVar22 + 8);
                    if (*pcVar15 != '\0') goto LAB_10141b690;
LAB_10141b1cc:
                    cVar27 = pcVar15[1];
                  }
                  else if (cVar42 != '\x12') {
                    pcVar15 = pcVar22;
                    if (cVar42 == '\0') goto LAB_10141b1cc;
LAB_10141b690:
                    pppplVar16 = (long ****)FUN_108855c40(pcVar15,&pppplStack_100,&UNK_10b20a560);
                    goto LAB_10141b3f0;
                  }
                }
                if (lVar19 != 1) {
                  cVar42 = *pcVar14;
                  cVar25 = '\x03';
                  if (cVar42 != '\x10') {
                    if (cVar42 == '\x11') {
                      pcVar14 = *(char **)(pcVar22 + 0x28);
                    }
                    else if (cVar42 == '\x12') goto LAB_10141b214;
                    FUN_10142dffc(&uStack_e0,pcVar14);
                    pppplVar16 = (long ****)ppplStack_d8;
                    if (((ulong)uStack_e0 & 1) != 0) goto LAB_10141b3f0;
                    cVar25 = uStack_e0._1_1_;
                  }
LAB_10141b214:
                  if (lVar19 == 2) {
LAB_10141b21c:
                    uVar30 = FUN_100e8dd9c(auStack_120._0_8_,auStack_120._8_8_,ppplVar8,ppplVar10);
                    if ((long ****)ppplStack_130 == (long ****)0x0) {
                      __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hea55944fe8263250E
                                (&pppplStack_140,1,auStack_120,1);
                    }
                    ppplVar9 = ppplStack_138;
                    pppplVar16 = pppplStack_140;
                    bVar6 = false;
                    lVar19 = 0;
                    bVar5 = (byte)(uVar30 >> 0x38);
                    bVar34 = bVar5 >> 1;
                    uVar30 = uVar30 & (ulong)ppplStack_138;
                    lVar35 = *(long *)((long)pppplStack_140 + uVar30);
                    uVar26 = CONCAT17(-((byte)((ulong)lVar35 >> 0x38) == bVar34),
                                      CONCAT16(-((byte)((ulong)lVar35 >> 0x30) == bVar34),
                                               CONCAT15(-((byte)((ulong)lVar35 >> 0x28) == bVar34),
                                                        CONCAT14(-((byte)((ulong)lVar35 >> 0x20) ==
                                                                  bVar34),CONCAT13(-((byte)((ulong)
                                                  lVar35 >> 0x18) == bVar34),
                                                  CONCAT12(-((byte)((ulong)lVar35 >> 0x10) == bVar34
                                                            ),CONCAT11(-((byte)((ulong)lVar35 >> 8)
                                                                        == bVar34),
                                                                       -((byte)lVar35 == bVar34)))))
                                                  ))) & 0x8080808080808080;
joined_r0x00010141b270:
                    while (uVar26 == 0) {
                      cVar42 = (char)((ulong)lVar35 >> 8);
                      cVar43 = (char)((ulong)lVar35 >> 0x10);
                      cVar44 = (char)((ulong)lVar35 >> 0x18);
                      cVar45 = (char)((ulong)lVar35 >> 0x20);
                      cVar46 = (char)((ulong)lVar35 >> 0x28);
                      cVar47 = (char)((ulong)lVar35 >> 0x30);
                      uVar26 = uStack_198;
                      if (bVar6) {
LAB_10141b2e4:
                        bVar38 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar35 >> 0x38) == -1),
                                                     CONCAT16(-(cVar47 == -1),
                                                              CONCAT15(-(cVar46 == -1),
                                                                       CONCAT14(-(cVar45 == -1),
                                                                                CONCAT13(-(cVar44 ==
                                                                                          -1),
                                                  CONCAT12(-(cVar43 == -1),
                                                           CONCAT11(-(cVar42 == -1),
                                                                    -((char)lVar35 == -1)))))))),1);
                        if ((bVar38 & 1) != 0) {
                          uVar30 = (ulong)*(char *)((long)pppplVar16 + uVar26);
                          if (-1 < *(char *)((long)pppplVar16 + uVar26)) {
                            pppplVar39 = (long ****)*pppplVar16;
                            uVar30 = CONCAT17(-((long)pppplVar39 < 0),
                                              CONCAT16(-((char)((ulong)pppplVar39 >> 0x30) < '\0'),
                                                       CONCAT15(-((char)((ulong)pppplVar39 >> 0x28)
                                                                 < '\0'),CONCAT14(-((char)((ulong)
                                                  pppplVar39 >> 0x20) < '\0'),
                                                  CONCAT13(-((char)((ulong)pppplVar39 >> 0x18) <
                                                            '\0'),CONCAT12(-((char)((ulong)
                                                  pppplVar39 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)pppplVar39 >> 8) < '\0'),
                                                           -((char)pppplVar39 < '\0'))))))));
                            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar30 & 0x5555555555555555) << 1;
                            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 |
                                     (uVar30 & 0x3333333333333333) << 2;
                            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar30 & 0xff00ff00ff00ff) << 8;
                            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar30 & 0xffff0000ffff) << 0x10;
                            uVar26 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
                            uVar30 = (ulong)*(byte *)((long)pppplVar16 + uVar26);
                          }
                          *(byte *)((long)pppplVar16 + uVar26) = bVar5 >> 1;
                          *(byte *)((long)pppplVar16 + (uVar26 - 8 & (ulong)ppplVar9) + 8) =
                               bVar5 >> 1;
                          ppplStack_130 = (long ***)((long)ppplStack_130 - (uVar30 & 1));
                          ppplStack_128 = (long ***)((long)ppplStack_128 + 1);
                          pppplVar16[uVar26 * -4 + -4] = (long ***)ppppplVar29;
                          pppplVar16[uVar26 * -4 + -3] = ppplVar8;
                          pppplVar16[uVar26 * -4 + -2] = ppplVar10;
                          *(char *)(pppplVar16 + uVar26 * -4 + -1) = cVar27;
                          *(char *)((long)pppplVar16 + uVar26 * -0x20 + -7) = cVar25;
                          goto LAB_10141ae20;
                        }
                        bVar6 = true;
                        uStack_198 = uVar26;
                      }
                      else {
                        uVar26 = CONCAT17(-(lVar35 < 0),
                                          CONCAT16(-(cVar47 < '\0'),
                                                   CONCAT15(-(cVar46 < '\0'),
                                                            CONCAT14(-(cVar45 < '\0'),
                                                                     CONCAT13(-(cVar44 < '\0'),
                                                                              CONCAT12(-(cVar43 < 
                                                  '\0'),CONCAT11(-(cVar42 < '\0'),
                                                                 -((char)lVar35 < '\0'))))))));
                        if (uVar26 != 0) {
                          uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar26 & 0x5555555555555555) << 1;
                          uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 |
                                   (uVar26 & 0x3333333333333333) << 2;
                          uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar26 & 0xff00ff00ff00ff) << 8;
                          uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar26 & 0xffff0000ffff) << 0x10;
                          uVar26 = uVar30 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3) &
                                   (ulong)ppplVar9;
                          goto LAB_10141b2e4;
                        }
                        bVar6 = false;
                      }
                      lVar19 = lVar19 + 8;
                      uVar30 = lVar19 + uVar30 & (ulong)ppplVar9;
                      lVar35 = *(long *)((long)pppplVar16 + uVar30);
                      uVar26 = CONCAT17(-((byte)((ulong)lVar35 >> 0x38) == bVar34),
                                        CONCAT16(-((byte)((ulong)lVar35 >> 0x30) == bVar34),
                                                 CONCAT15(-((byte)((ulong)lVar35 >> 0x28) == bVar34)
                                                          ,CONCAT14(-((byte)((ulong)lVar35 >> 0x20)
                                                                     == bVar34),
                                                                    CONCAT13(-((byte)((ulong)lVar35
                                                                                     >> 0x18) ==
                                                                              bVar34),CONCAT12(-((
                                                  byte)((ulong)lVar35 >> 0x10) == bVar34),
                                                  CONCAT11(-((byte)((ulong)lVar35 >> 8) == bVar34),
                                                           -((byte)lVar35 == bVar34)))))))) &
                               0x8080808080808080;
                    }
                    uVar23 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                             (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
                    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar23 & 0xffff0000ffff) << 0x10;
                    uVar23 = uVar30 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) &
                             (ulong)ppplVar9;
                    if (ppplVar10 == pppplVar16[uVar23 * -4 + -2]) {
                      iVar12 = _memcmp(ppplVar8,pppplVar16[uVar23 * -4 + -3]);
                      if (iVar12 == 0) goto LAB_10141b32c;
                    }
                    uVar26 = uVar26 - 1 & uVar26;
                    goto joined_r0x00010141b270;
                  }
                  uStack_e0 = (long *****)0x2;
                  pppplVar16 = (long ****)
                               FUN_1087e422c((lVar19 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                                             &uStack_e0,&UNK_10b23a1b0);
                  goto LAB_10141b3f0;
                }
                uVar24 = 1;
              }
              pppplVar16 = (long ****)FUN_1087e422c(uVar24,&UNK_10b230878,&UNK_10b20a590);
            }
            else {
              if (pcVar14[0x20] == '\x15') {
                lVar19 = *(long *)(pcVar14 + 0x38);
                if (lVar19 == 0) {
                  cVar27 = '\x02';
                  cVar25 = '\x03';
                }
                else {
                  lVar35 = 0;
                  lVar36 = *(long *)(pcVar14 + 0x30);
                  cVar42 = '\x03';
                  cVar43 = '\x04';
                  do {
                    pbVar31 = (byte *)(lVar36 + lVar35);
                    pbVar33 = pbVar31 + 0x20;
                    bVar5 = *pbVar31;
                    if (bVar5 < 0xd) {
                      if (bVar5 == 1) {
                        cVar27 = *(char *)(lVar36 + lVar35 + 1);
                        uVar17 = 1;
                        if (cVar27 != '\x01') {
                          uVar17 = 2;
                        }
                        uVar3 = 0;
                        if (cVar27 != '\0') {
                          uVar3 = uVar17;
                        }
                        uStack_e0 = (long *****)((ulong)CONCAT61(uStack_e0._2_6_,uVar3) << 8);
                      }
                      else if (bVar5 == 4) {
                        lVar20 = *(long *)(lVar36 + lVar35 + 8);
                        uVar17 = 1;
                        if (lVar20 != 1) {
                          uVar17 = 2;
                        }
                        uVar3 = 0;
                        if (lVar20 != 0) {
                          uVar3 = uVar17;
                        }
                        uStack_e0 = (long *****)((ulong)CONCAT61(uStack_e0._2_6_,uVar3) << 8);
                      }
                      else {
                        if (bVar5 != 0xc) {
LAB_10141b124:
                          pppplVar16 = (long ****)
                                       FUN_108855c40(pbVar31,&pppplStack_100,&UNK_10b215148);
                          uStack_e0 = (long *****)CONCAT71(uStack_e0._1_7_,1);
                          ppplStack_d8 = (long ***)pppplVar16;
                          goto LAB_10141b3f0;
                        }
                        plVar21 = *(long **)(lVar36 + lVar35 + 0x10);
                        lVar20 = *(long *)(lVar36 + lVar35 + 0x18);
                        if (lVar20 != 0xd) goto joined_r0x00010141afd4;
LAB_10141b020:
                        uVar17 = 1;
                        if (*plVar21 != 0x6c61766f72707061 ||
                            *(long *)((long)plVar21 + 5) != 0x65646f6d5f6c6176) {
                          uVar17 = 2;
                        }
                        uStack_e0 = (long *****)((ulong)CONCAT61(uStack_e0._2_6_,uVar17) << 8);
                      }
                    }
                    else if (bVar5 == 0xd) {
                      plVar21 = *(long **)(lVar36 + lVar35 + 8);
                      lVar20 = *(long *)(lVar36 + lVar35 + 0x10);
                      if (lVar20 == 0xd) goto LAB_10141b020;
joined_r0x00010141afd4:
                      if (lVar20 == 7) {
                        uVar17 = 2;
                        if ((int)*plVar21 == 0x62616e65 && *(int *)((long)plVar21 + 3) == 0x64656c62
                           ) {
                          uVar17 = 0;
                        }
                        uStack_e0 = (long *****)((ulong)CONCAT61(uStack_e0._2_6_,uVar17) << 8);
                      }
                      else {
                        uStack_e0 = (long *****)CONCAT62(uStack_e0._2_6_,0x200);
                      }
                    }
                    else {
                      if (bVar5 == 0xe) {
                        FUN_100ba9194(&uStack_e0,*(undefined8 *)(lVar36 + lVar35 + 0x10),
                                      *(undefined8 *)(lVar36 + lVar35 + 0x18));
                        pppplVar16 = (long ****)ppplStack_d8;
                      }
                      else {
                        if (bVar5 != 0xf) goto LAB_10141b124;
                        FUN_100ba9194(&uStack_e0,*(undefined8 *)(lVar36 + lVar35 + 8),
                                      *(undefined8 *)(lVar36 + lVar35 + 0x10));
                        pppplVar16 = (long ****)ppplStack_d8;
                      }
                      ppplStack_d8 = (long ***)pppplVar16;
                      if ((char)uStack_e0 == '\x01') goto LAB_10141b3f0;
                    }
                    if (uStack_e0._1_1_ == '\0') {
                      if (cVar42 != '\x03') {
                        pppplStack_100 = (long ****)&UNK_108ca2209;
                        ppplStack_f8 = (long ***)0x7;
                        uStack_e0 = &pppplStack_100;
                        ppplStack_d8 = (long ***)&DAT_100c7b3a0;
                        pppplVar16 = (long ****)
                                     FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
                        goto LAB_10141b3f0;
                      }
                      bVar5 = *pbVar33;
                      cVar42 = '\x02';
                      if (bVar5 != 0x10) {
                        if (bVar5 == 0x11) {
                          pcVar14 = *(char **)(lVar36 + lVar35 + 0x28);
                          if (*pcVar14 != '\0') {
LAB_10141b600:
                            pppplVar16 = (long ****)
                                         FUN_108855c40(pcVar14,&pppplStack_100,&UNK_10b20a560);
                            goto LAB_10141b3f0;
                          }
                          cVar42 = pcVar14[1];
                        }
                        else if (bVar5 != 0x12) {
                          if (bVar5 != 0) {
                            pcVar14 = (char *)(lVar36 + lVar35 + 0x20);
                            goto LAB_10141b600;
                          }
                          cVar42 = *(char *)(lVar36 + lVar35 + 0x21);
                        }
                      }
                    }
                    else if (uStack_e0._1_1_ == '\x01') {
                      if (cVar43 != '\x04') {
                        pppplStack_100 = (long ****)&UNK_108cac0ec;
                        ppplStack_f8 = (long ***)0xd;
                        uStack_e0 = &pppplStack_100;
                        ppplStack_d8 = (long ***)&DAT_100c7b3a0;
                        pppplVar16 = (long ****)
                                     FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
                        goto LAB_10141b3f0;
                      }
                      bVar5 = *pbVar33;
                      cVar43 = '\x03';
                      if (bVar5 != 0x10) {
                        if (bVar5 == 0x11) {
                          pbVar33 = *(byte **)(lVar36 + lVar35 + 0x28);
                        }
                        else if (bVar5 == 0x12) goto LAB_10141ae94;
                        FUN_10142dffc(&uStack_e0,pbVar33);
                        pppplVar16 = (long ****)ppplStack_d8;
                        if (((ulong)uStack_e0 & 1) != 0) goto LAB_10141b3f0;
                        cVar43 = uStack_e0._1_1_;
                      }
                    }
LAB_10141ae94:
                    lVar35 = lVar35 + 0x40;
                  } while (lVar19 * 0x40 - lVar35 != 0);
                  cVar27 = '\x02';
                  if (cVar42 != '\x03') {
                    cVar27 = cVar42;
                  }
                  cVar25 = '\x03';
                  if (cVar43 != '\x04') {
                    cVar25 = cVar43;
                  }
                }
                goto LAB_10141b21c;
              }
              pppplVar16 = (long ****)FUN_108855c40(pcVar14 + 0x20,&pppplStack_100,&UNK_10b2140a8);
            }
LAB_10141b3f0:
            if (ppppplVar29 != (long *****)0x0) {
              _free(ppplVar8);
            }
          }
          ppplVar7 = ppplStack_138;
          if ((long ****)ppplStack_138 != (long ****)0x0) {
            if ((long ****)ppplStack_128 != (long ****)0x0) {
              ppppplVar28 = (long *****)(pppplStack_140 + 1);
              pppplVar39 = (long ****)*pppplStack_140;
              uVar30 = CONCAT17(-(-1 < (long)pppplVar39),
                                CONCAT16(-(-1 < (char)((ulong)pppplVar39 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)pppplVar39 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)pppplVar39 >> 0x20))
                                                           ,CONCAT13(-(-1 < (char)((ulong)pppplVar39
                                                                                  >> 0x18)),
                                                                     CONCAT12(-(-1 < (char)((ulong)
                                                  pppplVar39 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)pppplVar39 >> 8)),
                                                           -(-1 < (char)pppplVar39)))))))) &
                       0x8080808080808080;
              ppppplVar29 = (long *****)pppplStack_140;
              pppplVar39 = (long ****)ppplStack_128;
              do {
                while (uVar30 == 0) {
                  pppplVar40 = *ppppplVar28;
                  ppppplVar29 = ppppplVar29 + -0x20;
                  ppppplVar28 = ppppplVar28 + 1;
                  uVar30 = CONCAT17(-(-1 < (long)pppplVar40),
                                    CONCAT16(-(-1 < (char)((ulong)pppplVar40 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)pppplVar40 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)pppplVar40 >>
                                                                            0x20)),
                                                               CONCAT13(-(-1 < (char)((ulong)
                                                  pppplVar40 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)pppplVar40 >> 0x10))
                                                           ,CONCAT11(-(-1 < (char)((ulong)pppplVar40
                                                                                  >> 8)),
                                                                     -(-1 < (char)pppplVar40))))))))
                           & 0x8080808080808080;
                }
                uVar26 = (uVar30 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar30 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
                uVar26 = LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) & 0x78;
                if (*(long *)((long)ppppplVar29 + uVar26 * -4 + -0x20) != 0) {
                  _free(*(undefined8 *)((long)ppppplVar29 + uVar26 * -4 + -0x18));
                }
                uVar30 = uVar30 - 1 & uVar30;
                pppplVar39 = (long ****)((long)pppplVar39 + -1);
              } while (pppplVar39 != (long ****)0x0);
            }
            if ((long)ppplVar7 * 0x21 != -0x29) {
              _free(pppplStack_140 + (long)ppplVar7 * -4 + -4);
            }
          }
          goto LAB_10141b64c;
        }
      } while( true );
    }
LAB_10141ab88:
    FUN_100e077ec(&uStack_e0);
    FUN_100d5c778(&ppplStack_158);
    pppplVar16 = (long ****)ppplStack_98;
  }
  else {
    pppplVar16 = (long ****)FUN_108855c40(param_2,&pppplStack_100,&UNK_10b213228);
  }
  goto LAB_10141b658;
LAB_10141b32c:
  *(char *)(pppplVar16 + uVar23 * -4 + -1) = cVar27;
  *(char *)((long)pppplVar16 + uVar23 * -0x20 + -7) = cVar25;
  if (ppppplVar29 != (long *****)0x0) {
    _free(ppplVar8);
  }
  goto LAB_10141ae20;
LAB_10141b4a4:
  ppplStack_98 = ppplStack_128;
  ppplStack_a0 = ppplStack_130;
  pppplVar16 = (long ****)ppplStack_138;
  auStack_90 = auStack_120;
  if ((long *****)pppplStack_140 == (long *****)0x0) {
LAB_10141b64c:
    FUN_100d5c778(&ppplStack_158);
  }
  else {
    FUN_100d5c778(&ppplStack_158);
    pppplVar40 = (long ****)ppplStack_128;
    if ((long)pbVar1 - (long)pbVar18 == 0) {
      param_1[2] = ppplStack_138;
      param_1[1] = pppplStack_140;
      param_1[4] = ppplStack_128;
      param_1[3] = ppplStack_130;
      *(undefined1 (*) [16])(param_1 + 5) = auStack_120;
      uVar24 = 0;
      goto LAB_10141b664;
    }
    ppplStack_a0 = (long ***)pplStack_1a0;
    pppplVar16 = (long ****)
                 FUN_1087e422c((long)pplStack_1a0 + ((ulong)((long)pbVar1 - (long)pbVar18) >> 6),
                               &ppplStack_a0,&UNK_10b23a190);
    if ((long ****)ppplVar8 != (long ****)0x0) {
      if (pppplVar40 != (long ****)0x0) {
        ppppplVar29 = (long *****)(pppplVar39 + 1);
        pppplVar41 = (long ****)*pppplVar39;
        uVar30 = CONCAT17(-(-1 < (long)pppplVar41),
                          CONCAT16(-(-1 < (char)((ulong)pppplVar41 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)pppplVar41 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)pppplVar41 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)pppplVar41 >>
                                                                           0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)
                                                  pppplVar41 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)pppplVar41 >> 8)),
                                                           -(-1 < (char)pppplVar41)))))))) &
                 0x8080808080808080;
        ppppplVar28 = (long *****)pppplVar39;
        do {
          while (uVar30 == 0) {
            pppplVar41 = *ppppplVar29;
            ppppplVar29 = ppppplVar29 + 1;
            ppppplVar28 = ppppplVar28 + -0x20;
            uVar30 = CONCAT17(-(-1 < (long)pppplVar41),
                              CONCAT16(-(-1 < (char)((ulong)pppplVar41 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)pppplVar41 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)pppplVar41 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)pppplVar41 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  pppplVar41 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)pppplVar41 >> 8)),
                                                           -(-1 < (char)pppplVar41)))))))) &
                     0x8080808080808080;
          }
          uVar26 = (uVar30 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar30 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
          uVar26 = LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) & 0x78;
          if (*(long *)((long)ppppplVar28 + uVar26 * -4 + -0x20) != 0) {
            _free(*(undefined8 *)((long)ppppplVar28 + uVar26 * -4 + -0x18));
          }
          uVar30 = uVar30 - 1 & uVar30;
          pppplVar40 = (long ****)((long)pppplVar40 + -1);
        } while (pppplVar40 != (long ****)0x0);
      }
      if ((long)ppplVar8 * 0x21 != -0x29) {
        _free(pppplVar39 + (long)ppplVar8 * -4 + -4);
      }
    }
  }
LAB_10141b658:
  param_1[1] = pppplVar16;
  uVar24 = 1;
LAB_10141b664:
  *param_1 = uVar24;
  return;
}

