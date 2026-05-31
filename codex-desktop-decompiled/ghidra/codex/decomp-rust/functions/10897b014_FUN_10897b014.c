
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10897b014(undefined8 *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  ulong uVar17;
  long lVar18;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  long lVar19;
  ulong uStack_168;
  long *plStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 auStack_110 [16];
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  pauVar11 = (undefined1 (*) [16])
             (*
             ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
             )();
  if (pauVar11[1][0] == '\x01') {
    auStack_110 = *pauVar11;
  }
  else {
    auStack_110 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar11 + 8) = auStack_110._8_8_;
    pauVar11[1][0] = 1;
  }
  *(long *)*pauVar11 = auStack_110._0_8_ + 1;
  uStack_128 = 0;
  plStack_130 = (long *)&UNK_108c56c70;
  lStack_118 = 0;
  lStack_120 = 0;
  lStack_e8 = param_2[1];
  lStack_f0 = *param_2;
  lStack_d8 = param_2[3];
  lStack_e0 = param_2[2];
  lStack_f8 = 1;
  lStack_100 = 0;
  lStack_c8 = param_2[5];
  lStack_d0 = param_2[4];
  __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hcc8ccd6d5aea7487E
            (&plStack_130,1,auStack_110,1);
  lVar9 = lStack_c8;
  lVar8 = lStack_d0;
  lVar7 = lStack_d8;
  lVar1 = lStack_e0;
  lVar6 = lStack_e8;
  lVar18 = lStack_f0;
  lStack_b8 = lStack_f8;
  lStack_a8 = lStack_e8;
  lStack_b0 = lStack_f0;
  lStack_98 = lStack_d8;
  lStack_a0 = lStack_e0;
  lStack_88 = lStack_c8;
  lStack_90 = lStack_d0;
  if (lStack_100 != lStack_f8) {
    uStack_c0 = 1;
    uVar12 = FUN_103dc2338(auStack_110._0_8_,auStack_110._8_8_,lStack_e8,lStack_e0);
    if (lStack_120 == 0) {
      __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hcc8ccd6d5aea7487E
                (&plStack_130,1,auStack_110,1);
    }
    uVar5 = uStack_128;
    plVar4 = plStack_130;
    bVar3 = false;
    lVar14 = 0;
    bVar2 = (byte)(uVar12 >> 0x38);
    bVar15 = bVar2 >> 1;
    uVar12 = uVar12 & uStack_128;
    lVar19 = *(long *)((long)plStack_130 + uVar12);
    uVar17 = CONCAT17(-((byte)((ulong)lVar19 >> 0x38) == bVar15),
                      CONCAT16(-((byte)((ulong)lVar19 >> 0x30) == bVar15),
                               CONCAT15(-((byte)((ulong)lVar19 >> 0x28) == bVar15),
                                        CONCAT14(-((byte)((ulong)lVar19 >> 0x20) == bVar15),
                                                 CONCAT13(-((byte)((ulong)lVar19 >> 0x18) == bVar15)
                                                          ,CONCAT12(-((byte)((ulong)lVar19 >> 0x10)
                                                                     == bVar15),
                                                                    CONCAT11(-((byte)((ulong)lVar19
                                                                                     >> 8) == bVar15
                                                                              ),-((byte)lVar19 ==
                                                                                 bVar15)))))))) &
             0x8080808080808080;
joined_r0x00010897b134:
    while (uVar17 == 0) {
      cVar20 = (char)((ulong)lVar19 >> 8);
      cVar21 = (char)((ulong)lVar19 >> 0x10);
      cVar22 = (char)((ulong)lVar19 >> 0x18);
      cVar23 = (char)((ulong)lVar19 >> 0x20);
      cVar24 = (char)((ulong)lVar19 >> 0x28);
      cVar25 = (char)((ulong)lVar19 >> 0x30);
      if (bVar3) {
LAB_10897b1c4:
        bVar16 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar19 >> 0x38) == -1),
                                     CONCAT16(-(cVar25 == -1),
                                              CONCAT15(-(cVar24 == -1),
                                                       CONCAT14(-(cVar23 == -1),
                                                                CONCAT13(-(cVar22 == -1),
                                                                         CONCAT12(-(cVar21 == -1),
                                                                                  CONCAT11(-(cVar20 
                                                  == -1),-((char)lVar19 == -1)))))))),1);
        if ((bVar16 & 1) != 0) {
          uVar12 = (ulong)*(char *)((long)plVar4 + uStack_168);
          if (-1 < *(char *)((long)plVar4 + uStack_168)) {
            lVar18 = *plVar4;
            uVar12 = CONCAT17(-(lVar18 < 0),
                              CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar18 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
            uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uStack_168 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
            uVar12 = (ulong)*(byte *)((long)plVar4 + uStack_168);
          }
          bVar2 = bVar2 >> 1;
          *(byte *)((long)plVar4 + uStack_168) = bVar2;
          *(byte *)((long)plVar4 + (uStack_168 - 8 & uVar5) + 8) = bVar2;
          lStack_120 = lStack_120 - (uVar12 & 1);
          lStack_118 = lStack_118 + 1;
          lVar18 = *param_2;
          plVar4[uStack_168 * -6 + -5] = param_2[1];
          plVar4[uStack_168 * -6 + -6] = lVar18;
          plVar4[uStack_168 * -6 + -4] = param_2[2];
          plVar4[uStack_168 * -6 + -3] = lVar7;
          plVar4[uStack_168 * -6 + -2] = lVar8;
          plVar4[uStack_168 * -6 + -1] = lVar9;
          goto LAB_10897b290;
        }
        bVar3 = true;
      }
      else {
        uVar17 = CONCAT17(-(lVar19 < 0),
                          CONCAT16(-(cVar25 < '\0'),
                                   CONCAT15(-(cVar24 < '\0'),
                                            CONCAT14(-(cVar23 < '\0'),
                                                     CONCAT13(-(cVar22 < '\0'),
                                                              CONCAT12(-(cVar21 < '\0'),
                                                                       CONCAT11(-(cVar20 < '\0'),
                                                                                -((char)lVar19 <
                                                                                 '\0'))))))));
        if (uVar17 != 0) {
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uStack_168 = uVar12 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar5;
          goto LAB_10897b1c4;
        }
        bVar3 = false;
      }
      lVar14 = lVar14 + 8;
      uVar12 = lVar14 + uVar12 & uVar5;
      lVar19 = *(long *)((long)plVar4 + uVar12);
      uVar17 = CONCAT17(-((byte)((ulong)lVar19 >> 0x38) == bVar15),
                        CONCAT16(-((byte)((ulong)lVar19 >> 0x30) == bVar15),
                                 CONCAT15(-((byte)((ulong)lVar19 >> 0x28) == bVar15),
                                          CONCAT14(-((byte)((ulong)lVar19 >> 0x20) == bVar15),
                                                   CONCAT13(-((byte)((ulong)lVar19 >> 0x18) ==
                                                             bVar15),CONCAT12(-((byte)((ulong)lVar19
                                                                                      >> 0x10) ==
                                                                               bVar15),CONCAT11(-((
                                                  byte)((ulong)lVar19 >> 8) == bVar15),
                                                  -((byte)lVar19 == bVar15)))))))) &
               0x8080808080808080;
    }
    uVar13 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uVar13 = uVar12 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar5;
    if (lVar1 == plVar4[uVar13 * -6 + -4]) {
      iVar10 = _memcmp(lVar6,plVar4[uVar13 * -6 + -5],lVar1);
      if (iVar10 == 0) goto LAB_10897b208;
    }
    uVar17 = uVar17 - 1 & uVar17;
    goto joined_r0x00010897b134;
  }
LAB_10897b290:
  param_1[1] = uStack_128;
  *param_1 = plStack_130;
  param_1[3] = lStack_118;
  param_1[2] = lStack_120;
  *(undefined1 (*) [16])(param_1 + 4) = auStack_110;
  return;
LAB_10897b208:
  uVar12 = plVar4[uVar13 * -6 + -3];
  lVar1 = plVar4[uVar13 * -6 + -2];
  plVar4[uVar13 * -6 + -3] = lVar7;
  plVar4[uVar13 * -6 + -2] = lVar8;
  plVar4[uVar13 * -6 + -1] = lVar9;
  if (lVar18 != 0) {
    _free(lVar6);
  }
  if ((uVar12 & 0x7fffffffffffffff) != 0) {
    _free(lVar1);
  }
  goto LAB_10897b290;
}

