
void FUN_1016e559c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  long lVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  long lVar29;
  ulong uStack_138;
  
  lVar7 = param_3[1];
  lVar11 = param_3[2];
  uVar6 = FUN_100e8dd9c(param_2[4],param_2[5],lVar7,lVar11);
  if (param_2[2] == 0) {
    func_0x00010891bab8(param_2,1,param_2 + 4,1);
  }
  bVar4 = false;
  lVar9 = 0;
  plVar1 = (long *)*param_2;
  uVar2 = param_2[1];
  bVar3 = (byte)(uVar6 >> 0x38);
  bVar10 = bVar3 >> 1;
  uVar6 = uVar6 & uVar2;
  lVar29 = *(long *)((long)plVar1 + uVar6);
  uVar13 = CONCAT17(-((byte)((ulong)lVar29 >> 0x38) == bVar10),
                    CONCAT16(-((byte)((ulong)lVar29 >> 0x30) == bVar10),
                             CONCAT15(-((byte)((ulong)lVar29 >> 0x28) == bVar10),
                                      CONCAT14(-((byte)((ulong)lVar29 >> 0x20) == bVar10),
                                               CONCAT13(-((byte)((ulong)lVar29 >> 0x18) == bVar10),
                                                        CONCAT12(-((byte)((ulong)lVar29 >> 0x10) ==
                                                                  bVar10),CONCAT11(-((byte)((ulong)
                                                  lVar29 >> 8) == bVar10),-((byte)lVar29 == bVar10))
                                                  )))))) & 0x8080808080808080;
  do {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar8 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar6 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      if ((lVar11 == plVar1[uVar8 * -0x13 + -0x11]) &&
         (iVar5 = _memcmp(lVar7,plVar1[uVar8 * -0x13 + -0x12],lVar11), iVar5 == 0)) {
        lVar11 = plVar1[uVar8 * -0x13 + -8];
        lVar29 = plVar1[uVar8 * -0x13 + -5];
        lVar9 = plVar1[uVar8 * -0x13 + -6];
        param_1[9] = plVar1[uVar8 * -0x13 + -7];
        param_1[8] = lVar11;
        param_1[0xb] = lVar29;
        param_1[10] = lVar9;
        lVar11 = plVar1[uVar8 * -0x13 + -4];
        lVar29 = plVar1[uVar8 * -0x13 + -1];
        lVar9 = plVar1[uVar8 * -0x13 + -2];
        param_1[0xd] = plVar1[uVar8 * -0x13 + -3];
        param_1[0xc] = lVar11;
        param_1[0xf] = lVar29;
        param_1[0xe] = lVar9;
        lVar11 = plVar1[uVar8 * -0x13 + -0x10];
        lVar29 = plVar1[uVar8 * -0x13 + -0xd];
        lVar9 = plVar1[uVar8 * -0x13 + -0xe];
        param_1[1] = plVar1[uVar8 * -0x13 + -0xf];
        *param_1 = lVar11;
        param_1[3] = lVar29;
        param_1[2] = lVar9;
        lVar11 = plVar1[uVar8 * -0x13 + -0xc];
        lVar29 = plVar1[uVar8 * -0x13 + -9];
        lVar9 = plVar1[uVar8 * -0x13 + -10];
        param_1[5] = plVar1[uVar8 * -0x13 + -0xb];
        param_1[4] = lVar11;
        param_1[7] = lVar29;
        param_1[6] = lVar9;
        lVar9 = param_4[1];
        lVar11 = *param_4;
        lVar14 = param_4[3];
        lVar29 = param_4[2];
        lVar15 = param_4[4];
        lVar17 = param_4[7];
        lVar16 = param_4[6];
        plVar1[uVar8 * -0x13 + -0xb] = param_4[5];
        plVar1[uVar8 * -0x13 + -0xc] = lVar15;
        plVar1[uVar8 * -0x13 + -9] = lVar17;
        plVar1[uVar8 * -0x13 + -10] = lVar16;
        plVar1[uVar8 * -0x13 + -0xf] = lVar9;
        plVar1[uVar8 * -0x13 + -0x10] = lVar11;
        plVar1[uVar8 * -0x13 + -0xd] = lVar14;
        plVar1[uVar8 * -0x13 + -0xe] = lVar29;
        lVar9 = param_4[9];
        lVar11 = param_4[8];
        lVar14 = param_4[0xb];
        lVar29 = param_4[10];
        lVar15 = param_4[0xc];
        lVar17 = param_4[0xf];
        lVar16 = param_4[0xe];
        plVar1[uVar8 * -0x13 + -3] = param_4[0xd];
        plVar1[uVar8 * -0x13 + -4] = lVar15;
        plVar1[uVar8 * -0x13 + -1] = lVar17;
        plVar1[uVar8 * -0x13 + -2] = lVar16;
        plVar1[uVar8 * -0x13 + -7] = lVar9;
        plVar1[uVar8 * -0x13 + -8] = lVar11;
        plVar1[uVar8 * -0x13 + -5] = lVar14;
        plVar1[uVar8 * -0x13 + -6] = lVar29;
        if (*param_3 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar7);
        return;
      }
    }
    cVar30 = (char)((ulong)lVar29 >> 8);
    cVar31 = (char)((ulong)lVar29 >> 0x10);
    cVar32 = (char)((ulong)lVar29 >> 0x18);
    cVar33 = (char)((ulong)lVar29 >> 0x20);
    cVar34 = (char)((ulong)lVar29 >> 0x28);
    cVar35 = (char)((ulong)lVar29 >> 0x30);
    if (bVar4) {
LAB_1016e56b0:
      bVar12 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar29 >> 0x38) == -1),
                                   CONCAT16(-(cVar35 == -1),
                                            CONCAT15(-(cVar34 == -1),
                                                     CONCAT14(-(cVar33 == -1),
                                                              CONCAT13(-(cVar32 == -1),
                                                                       CONCAT12(-(cVar31 == -1),
                                                                                CONCAT11(-(cVar30 ==
                                                                                          -1),-((
                                                  char)lVar29 == -1)))))))),1);
      if ((bVar12 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)plVar1 + uStack_138);
        if (-1 < *(char *)((long)plVar1 + uStack_138)) {
          lVar7 = *plVar1;
          uVar6 = CONCAT17(-(lVar7 < 0),
                           CONCAT16(-((char)((ulong)lVar7 >> 0x30) < '\0'),
                                    CONCAT15(-((char)((ulong)lVar7 >> 0x28) < '\0'),
                                             CONCAT14(-((char)((ulong)lVar7 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)((ulong)lVar7 >> 0x18) < '\0'
                                                                ),CONCAT12(-((char)((ulong)lVar7 >>
                                                                                   0x10) < '\0'),
                                                                           CONCAT11(-((char)((ulong)
                                                  lVar7 >> 8) < '\0'),-((char)lVar7 < '\0'))))))));
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uStack_138 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)plVar1 + uStack_138);
        }
        lVar16 = param_3[1];
        lVar11 = *param_3;
        lVar7 = param_3[2];
        lVar17 = param_4[9];
        lVar9 = param_4[8];
        lVar25 = param_4[0xb];
        lVar21 = param_4[10];
        lVar18 = param_4[0xd];
        lVar29 = param_4[0xc];
        lVar26 = param_4[0xf];
        lVar22 = param_4[0xe];
        lVar19 = param_4[1];
        lVar14 = *param_4;
        lVar27 = param_4[3];
        lVar23 = param_4[2];
        lVar20 = param_4[5];
        lVar15 = param_4[4];
        lVar28 = param_4[7];
        lVar24 = param_4[6];
        bVar3 = bVar3 >> 1;
        *(byte *)((long)plVar1 + uStack_138) = bVar3;
        *(byte *)((long)plVar1 + (uStack_138 - 8 & uVar2) + 8) = bVar3;
        param_2[3] = param_2[3] + 1;
        param_2[2] = param_2[2] - (uVar6 & 1);
        plVar1[uStack_138 * -0x13 + -6] = lVar21;
        plVar1[uStack_138 * -0x13 + -7] = lVar17;
        plVar1[uStack_138 * -0x13 + -4] = lVar29;
        plVar1[uStack_138 * -0x13 + -5] = lVar25;
        plVar1[uStack_138 * -0x13 + -2] = lVar22;
        plVar1[uStack_138 * -0x13 + -3] = lVar18;
        plVar1[uStack_138 * -0x13 + -1] = lVar26;
        plVar1[uStack_138 * -0x13 + -0xe] = lVar23;
        plVar1[uStack_138 * -0x13 + -0xf] = lVar19;
        plVar1[uStack_138 * -0x13 + -0xc] = lVar15;
        plVar1[uStack_138 * -0x13 + -0xd] = lVar27;
        plVar1[uStack_138 * -0x13 + -10] = lVar24;
        plVar1[uStack_138 * -0x13 + -0xb] = lVar20;
        plVar1[uStack_138 * -0x13 + -8] = lVar9;
        plVar1[uStack_138 * -0x13 + -9] = lVar28;
        plVar1[uStack_138 * -0x13 + -0x12] = lVar16;
        plVar1[uStack_138 * -0x13 + -0x13] = lVar11;
        plVar1[uStack_138 * -0x13 + -0x10] = lVar14;
        plVar1[uStack_138 * -0x13 + -0x11] = lVar7;
        *param_1 = -0x7fffffffffffffff;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar13 = CONCAT17(-(lVar29 < 0),
                        CONCAT16(-(cVar35 < '\0'),
                                 CONCAT15(-(cVar34 < '\0'),
                                          CONCAT14(-(cVar33 < '\0'),
                                                   CONCAT13(-(cVar32 < '\0'),
                                                            CONCAT12(-(cVar31 < '\0'),
                                                                     CONCAT11(-(cVar30 < '\0'),
                                                                              -((char)lVar29 < '\0')
                                                                             )))))));
      if (uVar13 != 0) {
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uStack_138 = uVar6 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar2;
        goto LAB_1016e56b0;
      }
      bVar4 = false;
    }
    lVar9 = lVar9 + 8;
    uVar6 = lVar9 + uVar6 & uVar2;
    lVar29 = *(long *)((long)plVar1 + uVar6);
    uVar13 = CONCAT17(-((byte)((ulong)lVar29 >> 0x38) == bVar10),
                      CONCAT16(-((byte)((ulong)lVar29 >> 0x30) == bVar10),
                               CONCAT15(-((byte)((ulong)lVar29 >> 0x28) == bVar10),
                                        CONCAT14(-((byte)((ulong)lVar29 >> 0x20) == bVar10),
                                                 CONCAT13(-((byte)((ulong)lVar29 >> 0x18) == bVar10)
                                                          ,CONCAT12(-((byte)((ulong)lVar29 >> 0x10)
                                                                     == bVar10),
                                                                    CONCAT11(-((byte)((ulong)lVar29
                                                                                     >> 8) == bVar10
                                                                              ),-((byte)lVar29 ==
                                                                                 bVar10)))))))) &
             0x8080808080808080;
  } while( true );
}

