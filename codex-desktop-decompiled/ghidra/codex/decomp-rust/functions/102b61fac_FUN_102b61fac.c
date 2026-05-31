
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_102b61fac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  byte bVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  long lVar14;
  ulong extraout_x10;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong extraout_x12;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  byte bVar29;
  undefined8 uVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  
  uVar18 = *(ulong *)(param_1 + 0x10);
  if (uVar18 == 0) {
    return (undefined8 *)0x0;
  }
  if (uVar18 == 1) {
    if (param_3 == *(undefined8 **)(*(long *)(param_1 + 8) + 0x10)) {
      iVar3 = _memcmp(param_2,*(undefined8 *)(*(long *)(param_1 + 8) + 8),param_3);
      return (undefined8 *)(ulong)(iVar3 == 0);
    }
    return (undefined8 *)0x0;
  }
  puVar22 = param_3;
  uVar4 = func_0x000102a241b4(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                              param_2);
  lVar23 = 0;
  lVar14 = *(long *)(param_1 + 8);
  lVar12 = *(long *)(param_1 + 0x18);
  uVar28 = *(ulong *)(param_1 + 0x20);
  bVar9 = (byte)(uVar4 >> 0x39);
  uVar4 = uVar4 & uVar28;
  uVar37 = *(undefined8 *)(lVar12 + uVar4);
  uVar16 = CONCAT17(-((byte)((ulong)uVar37 >> 0x38) == bVar9),
                    CONCAT16(-((byte)((ulong)uVar37 >> 0x30) == bVar9),
                             CONCAT15(-((byte)((ulong)uVar37 >> 0x28) == bVar9),
                                      CONCAT14(-((byte)((ulong)uVar37 >> 0x20) == bVar9),
                                               CONCAT13(-((byte)((ulong)uVar37 >> 0x18) == bVar9),
                                                        CONCAT12(-((byte)((ulong)uVar37 >> 0x10) ==
                                                                  bVar9),CONCAT11(-((byte)((ulong)
                                                  uVar37 >> 8) == bVar9),-((byte)uVar37 == bVar9))))
                                              )))) & 0x8080808080808080;
  while( true ) {
    while (uVar16 == 0) {
      bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar37 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar37 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar37 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar37 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar37 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar37 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar37 >> 8) == -1),
                                                           -((char)uVar37 == -1)))))))),1);
      if ((bVar29 & 1) != 0) {
        return (undefined8 *)0x0;
      }
      lVar23 = lVar23 + 8;
      uVar4 = uVar4 + lVar23 & uVar28;
      uVar37 = *(undefined8 *)(lVar12 + uVar4);
      uVar16 = CONCAT17(-((byte)((ulong)uVar37 >> 0x38) == bVar9),
                        CONCAT16(-((byte)((ulong)uVar37 >> 0x30) == bVar9),
                                 CONCAT15(-((byte)((ulong)uVar37 >> 0x28) == bVar9),
                                          CONCAT14(-((byte)((ulong)uVar37 >> 0x20) == bVar9),
                                                   CONCAT13(-((byte)((ulong)uVar37 >> 0x18) == bVar9
                                                             ),CONCAT12(-((byte)((ulong)uVar37 >>
                                                                                0x10) == bVar9),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar37 >> 8) == bVar9),-((byte)uVar37 == bVar9))))
                                                  )))) & 0x8080808080808080;
    }
    uVar21 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
    uVar21 = *(ulong *)(lVar12 + -8 +
                       (uVar4 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar28) *
                       -8);
    if (uVar18 <= uVar21) break;
    lVar10 = lVar14 + uVar21 * 0x70;
    if ((param_3 == *(undefined8 **)(lVar10 + 0x10)) &&
       (iVar3 = _memcmp(param_2,*(undefined8 *)(lVar10 + 8),param_3), iVar3 == 0)) {
      return (undefined8 *)0x1;
    }
    uVar16 = uVar16 - 1 & uVar16;
  }
  puVar24 = &UNK_10b2994d0;
  auVar38 = func_0x000108a07bdc(uVar21,uVar18);
  lVar23 = auVar38._8_8_;
  puVar27 = auVar38._0_8_;
  puVar19 = *(undefined8 **)(lVar23 + 0x10);
  puVar5 = puVar27;
  if (puVar19 != (undefined8 *)0x0) {
    puVar26 = (undefined8 *)((long)puVar19 + -1);
    if (puVar26 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)
               func_0x000102a241b4(*(undefined8 *)(lVar23 + 0x38),*(undefined8 *)(lVar23 + 0x40),
                                   puVar24,puVar22);
      lVar12 = 0;
      lVar14 = *(long *)(lVar23 + 8);
      plVar8 = *(long **)(lVar23 + 0x18);
      puVar17 = *(undefined8 **)(lVar23 + 0x20);
      bVar9 = (byte)((ulong)puVar5 >> 0x39);
      uVar16 = (ulong)puVar5 & (ulong)puVar17;
      uVar37 = *(undefined8 *)((long)plVar8 + uVar16);
      uVar18 = CONCAT17(-((byte)((ulong)uVar37 >> 0x38) == bVar9),
                        CONCAT16(-((byte)((ulong)uVar37 >> 0x30) == bVar9),
                                 CONCAT15(-((byte)((ulong)uVar37 >> 0x28) == bVar9),
                                          CONCAT14(-((byte)((ulong)uVar37 >> 0x20) == bVar9),
                                                   CONCAT13(-((byte)((ulong)uVar37 >> 0x18) == bVar9
                                                             ),CONCAT12(-((byte)((ulong)uVar37 >>
                                                                                0x10) == bVar9),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar37 >> 8) == bVar9),-((byte)uVar37 == bVar9))))
                                                  )))) & 0x8080808080808080;
      puVar20 = puVar27;
joined_r0x000102b622c0:
      if (uVar18 == 0) {
        bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar37 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar37 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar37 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar37 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar37
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar37 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar37 >> 8) == -1),
                                                           -((char)uVar37 == -1)))))))),1);
        if ((bVar29 & 1) == 0) goto code_r0x000102b62364;
        goto LAB_102b6268c;
      }
      uVar28 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
      uVar28 = uVar16 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3) & (ulong)puVar17;
      puVar5 = (undefined8 *)plVar8[-1 - uVar28];
      if (puVar19 <= puVar5) {
LAB_102b626f0:
        func_0x000108a07bdc(puVar5,puVar19,&UNK_10b2994d0);
        goto LAB_102b62704;
      }
      lVar10 = lVar14 + (long)puVar5 * 0x70;
      if ((puVar22 != *(undefined8 **)(lVar10 + 0x10)) ||
         (puVar5 = (undefined8 *)_memcmp(puVar24,*(undefined8 *)(lVar10 + 8),puVar22),
         puVar20 = puVar17, (int)puVar5 != 0)) {
        uVar18 = uVar18 - 1 & uVar18;
        goto joined_r0x000102b622c0;
      }
      puVar22 = (undefined8 *)((long)plVar8 + (uVar28 - 8 & (ulong)puVar17));
      uVar37 = *puVar22;
      uVar30 = *(undefined8 *)((long)plVar8 + uVar28);
      uVar18 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                        CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                 CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1),
                                          CONCAT14(-((char)((ulong)uVar30 >> 0x20) == -1),
                                                   CONCAT13(-((char)((ulong)uVar30 >> 0x18) == -1),
                                                            CONCAT12(-((char)((ulong)uVar30 >> 0x10)
                                                                      == -1),CONCAT11(-((char)((
                                                  ulong)uVar30 >> 8) == -1),-((char)uVar30 == -1))))
                                                  ))));
      uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      if (((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) +
          ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar37 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar37 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar37 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar37 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar37 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar37 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar37 >> 8) == -1),
                                                           -((char)uVar37 == -1))))))))) >> 3) < 8)
      {
        *(long *)(lVar23 + 0x28) = *(long *)(lVar23 + 0x28) + 1;
        uVar13 = 0xff;
      }
      else {
        uVar13 = 0x80;
      }
      *(undefined1 *)((long)plVar8 + uVar28) = uVar13;
      *(undefined1 *)(puVar22 + 1) = uVar13;
      lVar12 = *(long *)(lVar23 + 0x30) + -1;
      *(long *)(lVar23 + 0x30) = lVar12;
      puVar22 = (undefined8 *)plVar8[-1 - uVar28];
      puVar5 = (undefined8 *)((long)puVar22 + 1);
      if (puVar19 < puVar5) {
        puVar5 = (undefined8 *)func_0x000108a07904(puVar5,puVar19,puVar19,&UNK_10b299530);
        goto LAB_102b626f0;
      }
      if ((ulong)(*(long *)(lVar23 + 0x28) + lVar12) >> 1 < (ulong)((long)puVar19 - (long)puVar5)) {
        if (lVar12 != 0) {
          plVar6 = plVar8 + 1;
          lVar10 = *plVar8;
          uVar18 = CONCAT17(-(-1 < lVar10),
                            CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar10 >> 8)),
                                                           -(-1 < (char)lVar10)))))))) &
                   0x8080808080808080;
          do {
            while (uVar18 == 0) {
              lVar10 = *plVar6;
              plVar8 = plVar8 + -8;
              plVar6 = plVar6 + 1;
              uVar18 = CONCAT17(-(-1 < lVar10),
                                CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar10 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar10 >> 8)),
                                                           -(-1 < (char)lVar10)))))))) &
                       0x8080808080808080;
            }
            uVar16 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) & 0x78;
            puVar17 = *(undefined8 **)((long)plVar8 + (-8 - uVar16));
            if (puVar5 <= puVar17 && puVar17 < puVar19) {
              *(long *)((long)plVar8 + (-8 - uVar16)) = (long)puVar17 + -1;
            }
            uVar18 = uVar18 - 1 & uVar18;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
      }
      else {
        uVar18 = 0;
        if (puVar5 <= puVar19) {
          uVar18 = (long)puVar19 - (long)puVar5;
        }
        if (puVar5 <= puVar19 && (long)puVar19 - (long)puVar5 != 0) {
          uVar16 = 0;
LAB_102b62530:
          lVar12 = 0;
          lVar10 = uVar16 + (long)puVar5;
          lVar7 = uVar16 * 0x70;
          lVar1 = uVar16 + (long)puVar22;
          uVar16 = uVar16 + 1;
          uVar28 = *(ulong *)(lVar14 + (long)puVar5 * 0x70 + lVar7 + 0x68);
          bVar9 = (byte)(uVar28 >> 0x39);
          while( true ) {
            uVar28 = uVar28 & (ulong)puVar17;
            uVar37 = *(undefined8 *)((long)plVar8 + uVar28);
            bVar29 = (byte)((ulong)uVar37 >> 8);
            bVar31 = (byte)((ulong)uVar37 >> 0x10);
            bVar32 = (byte)((ulong)uVar37 >> 0x18);
            bVar33 = (byte)((ulong)uVar37 >> 0x20);
            bVar34 = (byte)((ulong)uVar37 >> 0x28);
            bVar35 = (byte)((ulong)uVar37 >> 0x30);
            bVar36 = (byte)((ulong)uVar37 >> 0x38);
            for (uVar4 = CONCAT17(-(bVar36 == bVar9),
                                  CONCAT16(-(bVar35 == bVar9),
                                           CONCAT15(-(bVar34 == bVar9),
                                                    CONCAT14(-(bVar33 == bVar9),
                                                             CONCAT13(-(bVar32 == bVar9),
                                                                      CONCAT12(-(bVar31 == bVar9),
                                                                               CONCAT11(-(bVar29 ==
                                                                                         bVar9),-((
                                                  byte)uVar37 == bVar9)))))))) & 0x8080808080808080;
                uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
              uVar21 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8
              ;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              uVar21 = uVar28 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) &
                       (ulong)puVar17;
              if (plVar8[-1 - uVar21] == lVar10) {
                plVar8[-1 - uVar21] = lVar1;
                if (uVar18 <= uVar16) goto LAB_102b62554;
                goto LAB_102b62530;
              }
            }
            bVar29 = NEON_umaxv(CONCAT17(-(bVar36 == 0xff),
                                         CONCAT16(-(bVar35 == 0xff),
                                                  CONCAT15(-(bVar34 == 0xff),
                                                           CONCAT14(-(bVar33 == 0xff),
                                                                    CONCAT13(-(bVar32 == 0xff),
                                                                             CONCAT12(-(bVar31 ==
                                                                                       0xff),
                                                  CONCAT11(-(bVar29 == 0xff),-((byte)uVar37 == 0xff)
                                                          ))))))),1);
            if ((bVar29 & 1) != 0) break;
            lVar12 = lVar12 + 8;
            uVar28 = uVar28 + lVar12;
          }
          puVar5 = (undefined8 *)func_0x000108a079f0(&UNK_108d4d1ee,0xf,&UNK_10b2994e8);
          lVar12 = extraout_x8;
          uVar18 = extraout_x10;
          uVar16 = extraout_x12;
          lVar14 = lVar23;
          goto LAB_102b62610;
        }
      }
LAB_102b62554:
      puVar20 = puVar19;
      if (puVar22 < puVar19) {
        puVar5 = (undefined8 *)(lVar14 + (long)puVar22 * 0x70);
        puVar24 = (undefined *)*puVar5;
        lVar14 = puVar5[1];
        uStack_138 = puVar5[6];
        uStack_140 = puVar5[5];
        uStack_128 = puVar5[8];
        uStack_130 = puVar5[7];
        uStack_118 = puVar5[10];
        uStack_120 = puVar5[9];
        uStack_108 = puVar5[0xc];
        uStack_110 = puVar5[0xb];
        uStack_148 = puVar5[4];
        uStack_150 = puVar5[3];
        puVar5 = (undefined8 *)
                 _memmove(puVar5,puVar5 + 0xe,((long)puVar19 + ~(ulong)puVar22) * 0x70);
        *(undefined8 **)(lVar23 + 0x10) = puVar26;
        puVar20 = puVar26;
        if (puVar24 != (undefined *)0x8000000000000000) {
joined_r0x000102b625d0:
          if (puVar24 != (undefined *)0x0) {
            puVar5 = (undefined8 *)_free(lVar14);
          }
          puVar27[5] = uStack_128;
          puVar27[4] = uStack_130;
          puVar27[7] = uStack_118;
          puVar27[6] = uStack_120;
          puVar27[9] = uStack_108;
          puVar27[8] = uStack_110;
          puVar27[1] = uStack_148;
          *puVar27 = uStack_150;
          puVar27[3] = uStack_138;
          puVar27[2] = uStack_140;
          return puVar5;
        }
      }
LAB_102b62704:
      plVar8 = (long *)&UNK_10b299548;
      auVar38 = func_0x0001087c9024(puVar22,puVar20);
      lVar7 = auVar38._8_8_;
      plVar6 = auVar38._0_8_;
      lVar12 = plVar8[1];
      lVar1 = plVar8[2];
      puVar22 = (undefined8 *)
                FUN_102a2408c(*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(lVar7 + 0x40),lVar12,
                              lVar1);
      lVar23 = 0;
      lVar15 = *plVar8;
      lVar14 = *(long *)(lVar7 + 8);
      uVar16 = *(ulong *)(lVar7 + 0x10);
      lVar10 = *(long *)(lVar7 + 0x18);
      uVar28 = *(ulong *)(lVar7 + 0x20);
      bVar9 = (byte)((ulong)puVar22 >> 0x39);
      uVar4 = (ulong)puVar22 & uVar28;
      uVar37 = *(undefined8 *)(lVar10 + uVar4);
      uVar18 = CONCAT17(-((byte)((ulong)uVar37 >> 0x38) == bVar9),
                        CONCAT16(-((byte)((ulong)uVar37 >> 0x30) == bVar9),
                                 CONCAT15(-((byte)((ulong)uVar37 >> 0x28) == bVar9),
                                          CONCAT14(-((byte)((ulong)uVar37 >> 0x20) == bVar9),
                                                   CONCAT13(-((byte)((ulong)uVar37 >> 0x18) == bVar9
                                                             ),CONCAT12(-((byte)((ulong)uVar37 >>
                                                                                0x10) == bVar9),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar37 >> 8) == bVar9),-((byte)uVar37 == bVar9))))
                                                  )))) & 0x8080808080808080;
      while( true ) {
        while (uVar18 == 0) {
          bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar37 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar37 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar37 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar37 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar37 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar37 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar37 >> 8) ==
                                                                     -1),-((char)uVar37 == -1)))))))
                                      ),1);
          if ((bVar29 & 1) != 0) {
            *plVar6 = lVar15;
            plVar6[1] = lVar12;
            plVar6[2] = lVar1;
            plVar6[3] = lVar7;
            plVar6[4] = (long)puVar22;
            return puVar22;
          }
          lVar23 = lVar23 + 8;
          uVar4 = uVar4 + lVar23 & uVar28;
          uVar37 = *(undefined8 *)(lVar10 + uVar4);
          uVar18 = CONCAT17(-((byte)((ulong)uVar37 >> 0x38) == bVar9),
                            CONCAT16(-((byte)((ulong)uVar37 >> 0x30) == bVar9),
                                     CONCAT15(-((byte)((ulong)uVar37 >> 0x28) == bVar9),
                                              CONCAT14(-((byte)((ulong)uVar37 >> 0x20) == bVar9),
                                                       CONCAT13(-((byte)((ulong)uVar37 >> 0x18) ==
                                                                 bVar9),CONCAT12(-((byte)((ulong)
                                                  uVar37 >> 0x10) == bVar9),
                                                  CONCAT11(-((byte)((ulong)uVar37 >> 8) == bVar9),
                                                           -((byte)uVar37 == bVar9)))))))) &
                   0x8080808080808080;
        }
        uVar21 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar4 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar28;
        uVar25 = *(ulong *)(lVar10 + -8 + uVar21 * -8);
        if (uVar16 <= uVar25) break;
        lVar11 = lVar14 + uVar25 * 0x70;
        if ((lVar1 == *(long *)(lVar11 + 0x10)) &&
           (puVar5 = (undefined8 *)_memcmp(lVar12,*(undefined8 *)(lVar11 + 8),lVar1),
           (int)puVar5 == 0)) {
          plVar6[2] = uVar25;
          plVar6[3] = uVar21;
          *plVar6 = -0x8000000000000000;
          plVar6[1] = lVar7;
          if (lVar15 == 0) {
            return puVar5;
          }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar22 = (undefined8 *)(*(code *)PTR__free_10b61b0a8)(lVar12);
          return puVar22;
        }
        uVar18 = uVar18 - 1 & uVar18;
      }
      func_0x000108a07bdc(uVar25,uVar16,&UNK_10b2994d0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b628e8);
      (*pcVar2)();
    }
    puVar19 = *(undefined8 **)(lVar23 + 8);
    if (puVar22 == (undefined8 *)puVar19[2]) {
      lVar14 = puVar19[1];
      puVar5 = (undefined8 *)_memcmp(puVar24,lVar14,puVar22);
      if ((int)puVar5 == 0) {
        lVar10 = 0;
        *(undefined8 *)(lVar23 + 0x10) = 0;
        uStack_138 = puVar19[6];
        uStack_140 = puVar19[5];
        uStack_128 = puVar19[8];
        uStack_130 = puVar19[7];
        uStack_118 = puVar19[10];
        uStack_120 = puVar19[9];
        uStack_108 = puVar19[0xc];
        uStack_110 = puVar19[0xb];
        uStack_148 = puVar19[4];
        uStack_150 = puVar19[3];
        lVar12 = *(long *)(lVar23 + 0x18);
        uVar18 = *(ulong *)(lVar23 + 0x20);
        bVar9 = (byte)((ulong)puVar19[0xd] >> 0x39);
        puVar24 = (undefined *)*puVar19;
        uVar4 = puVar19[0xd] & uVar18;
        uVar37 = *(undefined8 *)(lVar12 + uVar4);
        uVar28 = CONCAT17(-((byte)((ulong)uVar37 >> 0x38) == bVar9),
                          CONCAT16(-((byte)((ulong)uVar37 >> 0x30) == bVar9),
                                   CONCAT15(-((byte)((ulong)uVar37 >> 0x28) == bVar9),
                                            CONCAT14(-((byte)((ulong)uVar37 >> 0x20) == bVar9),
                                                     CONCAT13(-((byte)((ulong)uVar37 >> 0x18) ==
                                                               bVar9),CONCAT12(-((byte)((ulong)
                                                  uVar37 >> 0x10) == bVar9),
                                                  CONCAT11(-((byte)((ulong)uVar37 >> 8) == bVar9),
                                                           -((byte)uVar37 == bVar9)))))))) &
                 0x8080808080808080;
        while( true ) {
          while (uVar28 == 0) {
            bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar37 >> 0x38) == -1),
                                         CONCAT16(-((char)((ulong)uVar37 >> 0x30) == -1),
                                                  CONCAT15(-((char)((ulong)uVar37 >> 0x28) == -1),
                                                           CONCAT14(-((char)((ulong)uVar37 >> 0x20)
                                                                     == -1),CONCAT13(-((char)((ulong
                                                  )uVar37 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar37 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar37 >> 8) ==
                                                                     -1),-((char)uVar37 == -1)))))))
                                        ),1);
            if ((bVar29 & 1) != 0) goto LAB_102b62680;
            lVar10 = lVar10 + 8;
            uVar4 = uVar4 + lVar10 & uVar18;
            uVar37 = *(undefined8 *)(lVar12 + uVar4);
            uVar28 = CONCAT17(-((byte)((ulong)uVar37 >> 0x38) == bVar9),
                              CONCAT16(-((byte)((ulong)uVar37 >> 0x30) == bVar9),
                                       CONCAT15(-((byte)((ulong)uVar37 >> 0x28) == bVar9),
                                                CONCAT14(-((byte)((ulong)uVar37 >> 0x20) == bVar9),
                                                         CONCAT13(-((byte)((ulong)uVar37 >> 0x18) ==
                                                                   bVar9),CONCAT12(-((byte)((ulong)
                                                  uVar37 >> 0x10) == bVar9),
                                                  CONCAT11(-((byte)((ulong)uVar37 >> 8) == bVar9),
                                                           -((byte)uVar37 == bVar9)))))))) &
                     0x8080808080808080;
          }
          uVar16 = (uVar28 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar28 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = uVar4 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar18;
          puVar26 = puVar27;
          if (*(long *)(lVar12 + -8 + uVar16 * -8) == 0) break;
          uVar28 = uVar28 - 1 & uVar28;
        }
LAB_102b62610:
        puVar22 = (undefined8 *)(lVar12 + (uVar16 - 8 & uVar18));
        uVar37 = *puVar22;
        uVar30 = *(undefined8 *)(lVar12 + uVar16);
        uVar18 = CONCAT17(-((char)((ulong)uVar30 >> 0x38) == -1),
                          CONCAT16(-((char)((ulong)uVar30 >> 0x30) == -1),
                                   CONCAT15(-((char)((ulong)uVar30 >> 0x28) == -1),
                                            CONCAT14(-((char)((ulong)uVar30 >> 0x20) == -1),
                                                     CONCAT13(-((char)((ulong)uVar30 >> 0x18) == -1)
                                                              ,CONCAT12(-((char)((ulong)uVar30 >>
                                                                                0x10) == -1),
                                                                        CONCAT11(-((char)((ulong)
                                                  uVar30 >> 8) == -1),-((char)uVar30 == -1))))))));
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) +
            ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar37 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar37 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar37 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar37 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar37
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar37 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar37 >> 8) == -1),
                                                           -((char)uVar37 == -1))))))))) >> 3) < 8)
        {
          *(long *)(lVar23 + 0x28) = *(long *)(lVar23 + 0x28) + 1;
          uVar13 = 0xff;
        }
        else {
          uVar13 = 0x80;
        }
        *(undefined1 *)(lVar12 + uVar16) = uVar13;
        *(undefined1 *)(puVar22 + 1) = uVar13;
        *(long *)(lVar23 + 0x30) = *(long *)(lVar23 + 0x30) + -1;
        puVar27 = puVar26;
LAB_102b62680:
        if (puVar24 != (undefined *)0x8000000000000000) goto joined_r0x000102b625d0;
      }
    }
  }
LAB_102b6268c:
  *puVar27 = 0x8000000000000006;
  return puVar5;
code_r0x000102b62364:
  lVar12 = lVar12 + 8;
  puVar5 = (undefined8 *)(uVar16 + lVar12);
  uVar16 = (ulong)puVar5 & (ulong)puVar17;
  uVar37 = *(undefined8 *)((long)plVar8 + uVar16);
  uVar18 = CONCAT17(-((byte)((ulong)uVar37 >> 0x38) == bVar9),
                    CONCAT16(-((byte)((ulong)uVar37 >> 0x30) == bVar9),
                             CONCAT15(-((byte)((ulong)uVar37 >> 0x28) == bVar9),
                                      CONCAT14(-((byte)((ulong)uVar37 >> 0x20) == bVar9),
                                               CONCAT13(-((byte)((ulong)uVar37 >> 0x18) == bVar9),
                                                        CONCAT12(-((byte)((ulong)uVar37 >> 0x10) ==
                                                                  bVar9),CONCAT11(-((byte)((ulong)
                                                  uVar37 >> 8) == bVar9),-((byte)uVar37 == bVar9))))
                                              )))) & 0x8080808080808080;
  puVar20 = puVar27;
  goto joined_r0x000102b622c0;
}

