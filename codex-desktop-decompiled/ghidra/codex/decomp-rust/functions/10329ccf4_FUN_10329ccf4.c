
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10329ccf4(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  float *pfVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  float fVar28;
  undefined4 uVar29;
  long lVar30;
  undefined8 uVar31;
  byte bVar32;
  byte bVar33;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined8 uVar34;
  byte bVar41;
  undefined8 uVar35;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float fVar47;
  undefined1 auVar48 [16];
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [16];
  int *piStack_78;
  uint *puVar17;
  
  __ZN88__LT_bm25__default_tokenizer__DefaultTokenizer_u20_as_u20_bm25__tokenizer__Tokenizer_GT_8tokenize17hea029f3ac9b6eaf8E
            (&lStack_c0,param_2,param_3,param_4);
  uVar26 = uStack_b0;
  lVar30 = lStack_b8;
  fVar28 = *(float *)(param_2 + 0x50);
  if (fVar28 <= 0.0) {
    fVar28 = 256.0;
  }
  lVar27 = uStack_b0 << 2;
  if (uStack_b0 == 0) {
    uVar6 = 4;
  }
  else {
    uVar6 = _malloc(lVar27);
    if (uVar6 == 0) {
      func_0x0001087c9084(4,lVar27);
      goto LAB_10329d38c;
    }
    uVar9 = 0;
    do {
      lVar22 = lVar30 + uVar9 * 0x18;
      puVar17 = *(uint **)(lVar22 + 8);
      uVar23 = *(ulong *)(lVar22 + 0x10);
      if (uVar23 < 4) {
        uVar24 = 0;
      }
      else {
        uVar24 = 0;
        puVar16 = puVar17;
        do {
          puVar17 = puVar16 + 1;
          uVar24 = (*puVar16 ^ (uVar24 >> 0x1b | uVar24 << 5)) * 0x27220a95;
          uVar23 = uVar23 - 4;
          puVar16 = puVar17;
        } while (3 < uVar23);
      }
      for (; uVar23 != 0; uVar23 = uVar23 - 1) {
        uVar24 = ((uint)(byte)*puVar17 ^ (uVar24 >> 0x1b | uVar24 << 5)) * 0x27220a95;
        puVar17 = (uint *)((long)puVar17 + 1);
      }
      *(uint *)(uVar6 + uVar9 * 4) = ((uVar24 >> 0x1b | uVar24 << 5) ^ 0xff) * 0x27220a95;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar26);
  }
  pauVar7 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar7[1][0] == '\x01') {
    auVar48 = *pauVar7;
    *(long *)*pauVar7 = *(long *)*pauVar7 + 1;
  }
  else {
    auVar48 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    pauVar7[1][0] = 1;
    *(long *)*pauVar7 = auVar48._0_8_ + 1;
    *(long *)(*pauVar7 + 8) = auVar48._8_8_;
  }
  if (uVar26 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    goto LAB_10329d33c;
  }
  lStack_90 = 0;
  uVar9 = 0;
  lVar30 = 0;
  plVar10 = (long *)&UNK_108d52778;
  uVar23 = 0;
  do {
    piVar1 = (int *)(uVar6 + uVar9 * 4);
    plStack_a8 = plVar10;
    uStack_a0 = uVar23;
    lStack_98 = lVar30;
    piStack_78 = piVar1;
    auStack_88 = auVar48;
    uVar8 = FUN_1033f7ee4(auVar48._0_8_,auVar48._8_8_,piVar1);
    lVar22 = 0;
    bVar12 = (byte)(uVar8 >> 0x38);
    bVar33 = bVar12 >> 1;
    uVar18 = uVar8;
    while( true ) {
      uVar18 = uVar18 & uVar23;
      uVar34 = *(undefined8 *)((long)plVar10 + uVar18);
      bVar32 = (byte)((ulong)uVar34 >> 8);
      bVar36 = (byte)((ulong)uVar34 >> 0x10);
      bVar37 = (byte)((ulong)uVar34 >> 0x18);
      bVar38 = (byte)((ulong)uVar34 >> 0x20);
      bVar39 = (byte)((ulong)uVar34 >> 0x28);
      bVar40 = (byte)((ulong)uVar34 >> 0x30);
      bVar41 = (byte)((ulong)uVar34 >> 0x38);
      for (uVar19 = CONCAT17(-(bVar41 == bVar33),
                             CONCAT16(-(bVar40 == bVar33),
                                      CONCAT15(-(bVar39 == bVar33),
                                               CONCAT14(-(bVar38 == bVar33),
                                                        CONCAT13(-(bVar37 == bVar33),
                                                                 CONCAT12(-(bVar36 == bVar33),
                                                                          CONCAT11(-(bVar32 ==
                                                                                    bVar33),-((byte)
                                                  uVar34 == bVar33)))))))) & 0x8080808080808080;
          uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
        uVar25 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
        uVar25 = uVar18 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) & uVar23;
        if (*(int *)plVar10[uVar25 * -2 + -2] == *piVar1) {
          plVar10 = plVar10 + uVar25 * -2;
          auVar48 = auStack_88;
          goto LAB_10329ceac;
        }
      }
      bVar32 = NEON_umaxv(CONCAT17(-(bVar41 == 0xff),
                                   CONCAT16(-(bVar40 == 0xff),
                                            CONCAT15(-(bVar39 == 0xff),
                                                     CONCAT14(-(bVar38 == 0xff),
                                                              CONCAT13(-(bVar37 == 0xff),
                                                                       CONCAT12(-(bVar36 == 0xff),
                                                                                CONCAT11(-(bVar32 ==
                                                                                          0xff),-((
                                                  byte)uVar34 == 0xff)))))))),1);
      if ((bVar32 & 1) != 0) break;
      lVar22 = lVar22 + 8;
      uVar18 = uVar18 + lVar22;
    }
    if (lVar30 == 0) {
      func_0x0001089434b4(&plStack_a8,1,auStack_88,1);
      uVar8 = uStack_a0 & uVar8;
      lVar30 = *(long *)((long)plStack_a8 + uVar8);
      uVar18 = CONCAT17(-(lVar30 < 0),
                        CONCAT16(-((char)((ulong)lVar30 >> 0x30) < '\0'),
                                 CONCAT15(-((char)((ulong)lVar30 >> 0x28) < '\0'),
                                          CONCAT14(-((char)((ulong)lVar30 >> 0x20) < '\0'),
                                                   CONCAT13(-((char)((ulong)lVar30 >> 0x18) < '\0'),
                                                            CONCAT12(-((char)((ulong)lVar30 >> 0x10)
                                                                      < '\0'),CONCAT11(-((char)((
                                                  ulong)lVar30 >> 8) < '\0'),-((char)lVar30 < '\0'))
                                                  ))))));
      plVar10 = plStack_a8;
      uVar23 = uStack_a0;
    }
    else {
      uVar8 = uVar23 & uVar8;
      lVar30 = *(long *)((long)plVar10 + uVar8);
      uVar18 = CONCAT17(-(lVar30 < 0),
                        CONCAT16(-((char)((ulong)lVar30 >> 0x30) < '\0'),
                                 CONCAT15(-((char)((ulong)lVar30 >> 0x28) < '\0'),
                                          CONCAT14(-((char)((ulong)lVar30 >> 0x20) < '\0'),
                                                   CONCAT13(-((char)((ulong)lVar30 >> 0x18) < '\0'),
                                                            CONCAT12(-((char)((ulong)lVar30 >> 0x10)
                                                                      < '\0'),CONCAT11(-((char)((
                                                  ulong)lVar30 >> 8) < '\0'),-((char)lVar30 < '\0'))
                                                  ))))));
    }
    if (uVar18 == 0) {
      lVar30 = 8;
      do {
        uVar8 = uVar8 + lVar30 & uVar23;
        lVar22 = *(long *)((long)plVar10 + uVar8);
        uVar18 = CONCAT17(-(lVar22 < 0),
                          CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar22 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar22 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar22 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar22 >> 8) < '\0'),-((char)lVar22 < '\0'))))))))
        ;
        lVar30 = lVar30 + 8;
      } while (uVar18 == 0);
    }
    uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
    uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar23;
    uVar18 = (ulong)*(char *)((long)plVar10 + uVar8);
    if (-1 < *(char *)((long)plVar10 + uVar8)) {
      lVar30 = *plVar10;
      uVar18 = CONCAT17(-(lVar30 < 0),
                        CONCAT16(-((char)((ulong)lVar30 >> 0x30) < '\0'),
                                 CONCAT15(-((char)((ulong)lVar30 >> 0x28) < '\0'),
                                          CONCAT14(-((char)((ulong)lVar30 >> 0x20) < '\0'),
                                                   CONCAT13(-((char)((ulong)lVar30 >> 0x18) < '\0'),
                                                            CONCAT12(-((char)((ulong)lVar30 >> 0x10)
                                                                      < '\0'),CONCAT11(-((char)((
                                                  ulong)lVar30 >> 8) < '\0'),-((char)lVar30 < '\0'))
                                                  ))))));
      uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar8 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
      uVar18 = (ulong)*(byte *)((long)plVar10 + uVar8);
    }
    *(byte *)((long)plVar10 + uVar8) = bVar12 >> 1;
    *(byte *)((long)plVar10 + (uVar8 - 8 & uVar23) + 8) = bVar12 >> 1;
    plVar10 = plVar10 + uVar8 * -2;
    plVar10[-2] = (long)piVar1;
    *(undefined4 *)(plVar10 + -1) = 0;
    lStack_98 = lStack_98 - (uVar18 & 1);
    lStack_90 = lStack_90 + 1;
    auVar48 = auStack_88;
LAB_10329ceac:
    lVar22 = lStack_90;
    uVar23 = uStack_a0;
    plVar4 = plStack_a8;
    auStack_88._8_8_ = auVar48._8_8_;
    uVar31 = auStack_88._8_8_;
    auStack_88._0_8_ = auVar48._0_8_;
    uVar34 = auStack_88._0_8_;
    *(int *)(plVar10 + -1) = (int)plVar10[-1] + 1;
    uVar9 = uVar9 + 1;
    lVar30 = lStack_98;
    plVar10 = plStack_a8;
  } while (uVar9 != uVar26);
  auStack_88 = auVar48;
  lVar30 = _malloc(lVar27);
  if (lVar30 == 0) {
    func_0x0001087c9084(4,lVar27);
    goto LAB_10329d38c;
  }
  fVar47 = *(float *)(param_2 + 0x48) + 1.0;
  fVar28 = *(float *)(param_2 + 0x48) *
           ((1.0 - *(float *)(param_2 + 0x4c)) +
           *(float *)(param_2 + 0x4c) * ((float)uStack_b0 / fVar28));
  if (lVar22 == 0) {
    fVar28 = (fVar47 * 0.0) / (fVar28 + 0.0);
    if (uVar26 < 4) {
      uVar18 = 0;
    }
    else {
      if (uVar26 < 0x10) {
        uVar9 = 0;
      }
      else {
        uVar18 = uVar26 & 0xfffffffffffffff0;
        uVar34 = CONCAT44(fVar28,fVar28);
        uVar31 = CONCAT44(fVar28,fVar28);
        puVar13 = (undefined8 *)(lVar30 + 0x20);
        uVar9 = uVar18;
        do {
          puVar13[-3] = uVar31;
          puVar13[-4] = uVar34;
          puVar13[-1] = uVar31;
          puVar13[-2] = uVar34;
          puVar13[1] = uVar31;
          *puVar13 = uVar34;
          puVar13[3] = uVar31;
          puVar13[2] = uVar34;
          uVar9 = uVar9 - 0x10;
          puVar13 = puVar13 + 8;
        } while (uVar9 != 0);
        if (uVar26 == uVar18) goto LAB_10329d1c4;
        uVar9 = uVar18;
        if ((uVar26 & 0xc) == 0) goto LAB_10329d1ac;
      }
      uVar18 = uVar26 & 0xfffffffffffffffc;
      lVar27 = uVar9 - uVar18;
      puVar13 = (undefined8 *)(lVar30 + uVar9 * 4);
      do {
        puVar13[1] = CONCAT44(fVar28,fVar28);
        *puVar13 = CONCAT44(fVar28,fVar28);
        lVar27 = lVar27 + 4;
        puVar13 = puVar13 + 2;
      } while (lVar27 != 0);
      if (uVar26 == uVar18) goto LAB_10329d1c4;
    }
LAB_10329d1ac:
    lVar27 = uVar26 - uVar18;
    pfVar11 = (float *)(lVar30 + uVar18 * 4);
    do {
      *pfVar11 = fVar28;
      lVar27 = lVar27 + -1;
      pfVar11 = pfVar11 + 1;
    } while (lVar27 != 0);
  }
  else {
    uVar9 = 0;
    do {
      iVar3 = *(int *)(uVar6 + uVar9 * 4);
      uVar18 = func_0x0001033f7530(uVar34,uVar31,iVar3);
      lVar27 = 0;
      bVar12 = (byte)(uVar18 >> 0x39);
      while( true ) {
        uVar18 = uVar18 & uVar23;
        uVar35 = *(undefined8 *)((long)plVar4 + uVar18);
        bVar33 = (byte)((ulong)uVar35 >> 8);
        bVar32 = (byte)((ulong)uVar35 >> 0x10);
        bVar36 = (byte)((ulong)uVar35 >> 0x18);
        bVar37 = (byte)((ulong)uVar35 >> 0x20);
        bVar38 = (byte)((ulong)uVar35 >> 0x28);
        bVar39 = (byte)((ulong)uVar35 >> 0x30);
        bVar40 = (byte)((ulong)uVar35 >> 0x38);
        for (uVar8 = CONCAT17(-(bVar40 == bVar12),
                              CONCAT16(-(bVar39 == bVar12),
                                       CONCAT15(-(bVar38 == bVar12),
                                                CONCAT14(-(bVar37 == bVar12),
                                                         CONCAT13(-(bVar36 == bVar12),
                                                                  CONCAT12(-(bVar32 == bVar12),
                                                                           CONCAT11(-(bVar33 ==
                                                                                     bVar12),-((byte
                                                  )uVar35 == bVar12)))))))) & 0x8080808080808080;
            uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
          uVar19 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar19 = uVar18 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3) & uVar23;
          if (iVar3 == *(int *)plVar4[uVar19 * -2 + -2]) {
            plVar10 = plVar4 + uVar19 * -2;
            goto LAB_10329d0bc;
          }
        }
        bVar33 = NEON_umaxv(CONCAT17(-(bVar40 == 0xff),
                                     CONCAT16(-(bVar39 == 0xff),
                                              CONCAT15(-(bVar38 == 0xff),
                                                       CONCAT14(-(bVar37 == 0xff),
                                                                CONCAT13(-(bVar36 == 0xff),
                                                                         CONCAT12(-(bVar32 == 0xff),
                                                                                  CONCAT11(-(bVar33 
                                                  == 0xff),-((byte)uVar35 == 0xff)))))))),1);
        if ((bVar33 & 1) != 0) break;
        lVar27 = lVar27 + 8;
        uVar18 = uVar18 + lVar27;
      }
      plVar10 = (long *)0x0;
LAB_10329d0bc:
      plVar2 = (long *)&UNK_108c51868;
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + -1;
      }
      *(float *)(lVar30 + uVar9 * 4) =
           (fVar47 * (float)(int)*plVar2) / (fVar28 + (float)(int)*plVar2);
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar26);
  }
LAB_10329d1c4:
  if (uVar26 >> 0x3c == 0) {
    uVar9 = _malloc(uVar26 << 3);
    if (uVar9 != 0) {
      if (uVar26 < 8) {
        uVar18 = 0;
LAB_10329d270:
        lVar27 = uVar26 - uVar18;
        puVar14 = (undefined4 *)(uVar9 + uVar18 * 8 + 4);
        puVar15 = (undefined4 *)(lVar30 + uVar18 * 4);
        puVar21 = (undefined4 *)(uVar6 + uVar18 * 4);
        do {
          uVar29 = *puVar15;
          puVar14[-1] = *puVar21;
          *puVar14 = uVar29;
          lVar27 = lVar27 + -1;
          puVar14 = puVar14 + 2;
          puVar15 = puVar15 + 1;
          puVar21 = puVar21 + 1;
        } while (lVar27 != 0);
      }
      else {
        if ((uVar9 < uVar6 + uVar26 * 4) && (uVar6 < uVar9 + uVar26 * 8)) {
          uVar18 = 0;
          goto LAB_10329d270;
        }
        uVar18 = uVar26 & 0xffffffffffffff8;
        puVar14 = (undefined4 *)(uVar9 + 0x20);
        puVar13 = (undefined8 *)(lVar30 + 0x10);
        puVar20 = (undefined8 *)(uVar6 + 0x10);
        uVar8 = uVar18;
        do {
          uVar31 = puVar20[-1];
          uVar34 = puVar20[-2];
          uVar44 = puVar20[1];
          uVar43 = *puVar20;
          uVar42 = puVar13[-1];
          uVar35 = puVar13[-2];
          uVar46 = puVar13[1];
          uVar45 = *puVar13;
          puVar14[-8] = (int)uVar34;
          puVar14[-7] = (int)uVar35;
          puVar14[-6] = (int)((ulong)uVar34 >> 0x20);
          puVar14[-5] = (int)((ulong)uVar35 >> 0x20);
          puVar14[-4] = (int)uVar31;
          puVar14[-3] = (int)uVar42;
          puVar14[-2] = (int)((ulong)uVar31 >> 0x20);
          puVar14[-1] = (int)((ulong)uVar42 >> 0x20);
          *puVar14 = (int)uVar43;
          puVar14[1] = (int)uVar45;
          puVar14[2] = (int)((ulong)uVar43 >> 0x20);
          puVar14[3] = (int)((ulong)uVar45 >> 0x20);
          puVar14[4] = (int)uVar44;
          puVar14[5] = (int)uVar46;
          puVar14[6] = (int)((ulong)uVar44 >> 0x20);
          puVar14[7] = (int)((ulong)uVar46 >> 0x20);
          puVar14 = puVar14 + 0x10;
          puVar13 = puVar13 + 4;
          puVar20 = puVar20 + 4;
          uVar8 = uVar8 - 8;
        } while (uVar8 != 0);
        if (uVar26 != uVar18) goto LAB_10329d270;
      }
      _free(uVar6);
      _free(lVar30);
      *param_1 = uVar26;
      param_1[1] = uVar9;
      param_1[2] = uVar26;
      if ((uVar23 != 0) && (uVar23 * 0x11 != -0x19)) {
        _free(plVar4 + uVar23 * -2 + -2);
      }
      lVar30 = lStack_b8;
      if (uStack_b0 != 0) {
        puVar13 = (undefined8 *)(lStack_b8 + 8);
        uVar26 = uStack_b0;
        do {
          if (puVar13[-1] != 0) {
            _free(*puVar13);
          }
          puVar13 = puVar13 + 3;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
LAB_10329d33c:
      if (lStack_c0 != 0) {
        _free(lVar30);
      }
      return;
    }
    uVar34 = 4;
  }
  else {
    uVar34 = 0;
  }
  func_0x0001087c9084(uVar34,uVar26 << 3);
LAB_10329d38c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10329d390);
  (*pcVar5)();
}

