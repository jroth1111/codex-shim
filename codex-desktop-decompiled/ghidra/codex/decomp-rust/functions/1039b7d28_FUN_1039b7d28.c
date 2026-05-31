
void FUN_1039b7d28(long *param_1,long *param_2,long *param_3,long *param_4)

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
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  long lVar18;
  ulong uStack_e8;
  
  lVar7 = param_3[1];
  lVar11 = param_3[2];
  uVar6 = FUN_103946c2c(param_2[4],param_2[5],lVar7,lVar11);
  if (param_2[2] == 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h5a805d50fafd416aE
              (param_2,1,param_2 + 4,1);
  }
  bVar4 = false;
  lVar9 = 0;
  plVar1 = (long *)*param_2;
  uVar2 = param_2[1];
  bVar3 = (byte)(uVar6 >> 0x38);
  bVar10 = bVar3 >> 1;
  uVar6 = uVar6 & uVar2;
  lVar18 = *(long *)((long)plVar1 + uVar6);
  uVar13 = CONCAT17(-((byte)((ulong)lVar18 >> 0x38) == bVar10),
                    CONCAT16(-((byte)((ulong)lVar18 >> 0x30) == bVar10),
                             CONCAT15(-((byte)((ulong)lVar18 >> 0x28) == bVar10),
                                      CONCAT14(-((byte)((ulong)lVar18 >> 0x20) == bVar10),
                                               CONCAT13(-((byte)((ulong)lVar18 >> 0x18) == bVar10),
                                                        CONCAT12(-((byte)((ulong)lVar18 >> 0x10) ==
                                                                  bVar10),CONCAT11(-((byte)((ulong)
                                                  lVar18 >> 8) == bVar10),-((byte)lVar18 == bVar10))
                                                  )))))) & 0x8080808080808080;
  do {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar8 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar6 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      if ((lVar11 == plVar1[uVar8 * -10 + -8]) &&
         (iVar5 = _memcmp(lVar7,plVar1[uVar8 * -10 + -9],lVar11), iVar5 == 0)) {
        lVar11 = plVar1[uVar8 * -10 + -7];
        lVar18 = plVar1[uVar8 * -10 + -4];
        lVar9 = plVar1[uVar8 * -10 + -5];
        param_1[1] = plVar1[uVar8 * -10 + -6];
        *param_1 = lVar11;
        param_1[3] = lVar18;
        param_1[2] = lVar9;
        lVar11 = plVar1[uVar8 * -10 + -3];
        param_1[5] = plVar1[uVar8 * -10 + -2];
        param_1[4] = lVar11;
        lVar11 = *param_4;
        lVar18 = param_4[3];
        lVar9 = param_4[2];
        plVar1[uVar8 * -10 + -6] = param_4[1];
        plVar1[uVar8 * -10 + -7] = lVar11;
        param_1[6] = plVar1[uVar8 * -10 + -1];
        plVar1[uVar8 * -10 + -4] = lVar18;
        plVar1[uVar8 * -10 + -5] = lVar9;
        lVar11 = param_4[4];
        plVar1[uVar8 * -10 + -2] = param_4[5];
        plVar1[uVar8 * -10 + -3] = lVar11;
        plVar1[uVar8 * -10 + -1] = param_4[6];
        if (*param_3 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar7);
        return;
      }
    }
    cVar19 = (char)((ulong)lVar18 >> 8);
    cVar20 = (char)((ulong)lVar18 >> 0x10);
    cVar21 = (char)((ulong)lVar18 >> 0x18);
    cVar22 = (char)((ulong)lVar18 >> 0x20);
    cVar23 = (char)((ulong)lVar18 >> 0x28);
    cVar24 = (char)((ulong)lVar18 >> 0x30);
    if (bVar4) {
LAB_1039b7e3c:
      bVar12 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar18 >> 0x38) == -1),
                                   CONCAT16(-(cVar24 == -1),
                                            CONCAT15(-(cVar23 == -1),
                                                     CONCAT14(-(cVar22 == -1),
                                                              CONCAT13(-(cVar21 == -1),
                                                                       CONCAT12(-(cVar20 == -1),
                                                                                CONCAT11(-(cVar19 ==
                                                                                          -1),-((
                                                  char)lVar18 == -1)))))))),1);
      if ((bVar12 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)plVar1 + uStack_e8);
        if (-1 < *(char *)((long)plVar1 + uStack_e8)) {
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
          uStack_e8 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)plVar1 + uStack_e8);
        }
        lVar7 = param_3[2];
        lVar14 = param_4[1];
        lVar9 = *param_4;
        lVar17 = param_4[3];
        lVar16 = param_4[2];
        lVar15 = param_4[5];
        lVar18 = param_4[4];
        lVar11 = param_4[6];
        bVar3 = bVar3 >> 1;
        *(byte *)((long)plVar1 + uStack_e8) = bVar3;
        *(byte *)((long)plVar1 + (uStack_e8 - 8 & uVar2) + 8) = bVar3;
        param_2[3] = param_2[3] + 1;
        param_2[2] = param_2[2] - (uVar6 & 1);
        plVar1[uStack_e8 * -10 + -5] = lVar16;
        plVar1[uStack_e8 * -10 + -6] = lVar14;
        plVar1[uStack_e8 * -10 + -3] = lVar18;
        plVar1[uStack_e8 * -10 + -4] = lVar17;
        lVar14 = param_3[1];
        lVar18 = *param_3;
        plVar1[uStack_e8 * -10 + -1] = lVar11;
        plVar1[uStack_e8 * -10 + -2] = lVar15;
        plVar1[uStack_e8 * -10 + -9] = lVar14;
        plVar1[uStack_e8 * -10 + -10] = lVar18;
        plVar1[uStack_e8 * -10 + -7] = lVar9;
        plVar1[uStack_e8 * -10 + -8] = lVar7;
        *(undefined1 *)(param_1 + 6) = 2;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar13 = CONCAT17(-(lVar18 < 0),
                        CONCAT16(-(cVar24 < '\0'),
                                 CONCAT15(-(cVar23 < '\0'),
                                          CONCAT14(-(cVar22 < '\0'),
                                                   CONCAT13(-(cVar21 < '\0'),
                                                            CONCAT12(-(cVar20 < '\0'),
                                                                     CONCAT11(-(cVar19 < '\0'),
                                                                              -((char)lVar18 < '\0')
                                                                             )))))));
      if (uVar13 != 0) {
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uStack_e8 = uVar6 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar2;
        goto LAB_1039b7e3c;
      }
      bVar4 = false;
    }
    lVar9 = lVar9 + 8;
    uVar6 = lVar9 + uVar6 & uVar2;
    lVar18 = *(long *)((long)plVar1 + uVar6);
    uVar13 = CONCAT17(-((byte)((ulong)lVar18 >> 0x38) == bVar10),
                      CONCAT16(-((byte)((ulong)lVar18 >> 0x30) == bVar10),
                               CONCAT15(-((byte)((ulong)lVar18 >> 0x28) == bVar10),
                                        CONCAT14(-((byte)((ulong)lVar18 >> 0x20) == bVar10),
                                                 CONCAT13(-((byte)((ulong)lVar18 >> 0x18) == bVar10)
                                                          ,CONCAT12(-((byte)((ulong)lVar18 >> 0x10)
                                                                     == bVar10),
                                                                    CONCAT11(-((byte)((ulong)lVar18
                                                                                     >> 8) == bVar10
                                                                              ),-((byte)lVar18 ==
                                                                                 bVar10)))))))) &
             0x8080808080808080;
  } while( true );
}

