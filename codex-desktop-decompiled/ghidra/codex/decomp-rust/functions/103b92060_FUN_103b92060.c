
void FUN_103b92060(long *param_1,long *param_2,long *param_3,long *param_4)

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
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  long lVar16;
  ulong uStack_c8;
  
  lVar7 = param_3[1];
  lVar11 = param_3[2];
  uVar6 = FUN_103b1b21c(param_2[4],param_2[5],lVar7,lVar11);
  if (param_2[2] == 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hdf79b93462fd1eb8E
              (param_2,1,param_2 + 4,1);
  }
  bVar4 = false;
  lVar9 = 0;
  plVar1 = (long *)*param_2;
  uVar2 = param_2[1];
  bVar3 = (byte)(uVar6 >> 0x38);
  bVar10 = bVar3 >> 1;
  uVar6 = uVar6 & uVar2;
  lVar16 = *(long *)((long)plVar1 + uVar6);
  uVar13 = CONCAT17(-((byte)((ulong)lVar16 >> 0x38) == bVar10),
                    CONCAT16(-((byte)((ulong)lVar16 >> 0x30) == bVar10),
                             CONCAT15(-((byte)((ulong)lVar16 >> 0x28) == bVar10),
                                      CONCAT14(-((byte)((ulong)lVar16 >> 0x20) == bVar10),
                                               CONCAT13(-((byte)((ulong)lVar16 >> 0x18) == bVar10),
                                                        CONCAT12(-((byte)((ulong)lVar16 >> 0x10) ==
                                                                  bVar10),CONCAT11(-((byte)((ulong)
                                                  lVar16 >> 8) == bVar10),-((byte)lVar16 == bVar10))
                                                  )))))) & 0x8080808080808080;
  do {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar8 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar6 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      if ((lVar11 == plVar1[uVar8 * -6 + -4]) &&
         (iVar5 = _memcmp(lVar7,plVar1[uVar8 * -6 + -5],lVar11), iVar5 == 0)) {
        lVar11 = plVar1[uVar8 * -6 + -3];
        param_1[1] = plVar1[uVar8 * -6 + -2];
        *param_1 = lVar11;
        param_1[2] = plVar1[uVar8 * -6 + -1];
        lVar11 = *param_4;
        plVar1[uVar8 * -6 + -2] = param_4[1];
        plVar1[uVar8 * -6 + -3] = lVar11;
        plVar1[uVar8 * -6 + -1] = param_4[2];
        if (*param_3 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar7);
        return;
      }
    }
    cVar17 = (char)((ulong)lVar16 >> 8);
    cVar18 = (char)((ulong)lVar16 >> 0x10);
    cVar19 = (char)((ulong)lVar16 >> 0x18);
    cVar20 = (char)((ulong)lVar16 >> 0x20);
    cVar21 = (char)((ulong)lVar16 >> 0x28);
    cVar22 = (char)((ulong)lVar16 >> 0x30);
    if (bVar4) {
LAB_103b9217c:
      bVar12 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar16 >> 0x38) == -1),
                                   CONCAT16(-(cVar22 == -1),
                                            CONCAT15(-(cVar21 == -1),
                                                     CONCAT14(-(cVar20 == -1),
                                                              CONCAT13(-(cVar19 == -1),
                                                                       CONCAT12(-(cVar18 == -1),
                                                                                CONCAT11(-(cVar17 ==
                                                                                          -1),-((
                                                  char)lVar16 == -1)))))))),1);
      if ((bVar12 & 1) != 0) {
        uVar6 = (ulong)*(char *)((long)plVar1 + uStack_c8);
        if (-1 < *(char *)((long)plVar1 + uStack_c8)) {
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
          uStack_c8 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)plVar1 + uStack_c8);
        }
        lVar7 = param_3[2];
        lVar16 = param_3[1];
        lVar9 = *param_3;
        lVar15 = param_4[1];
        lVar14 = *param_4;
        lVar11 = param_4[2];
        bVar3 = bVar3 >> 1;
        *(byte *)((long)plVar1 + uStack_c8) = bVar3;
        *(byte *)((long)plVar1 + (uStack_c8 - 8 & uVar2) + 8) = bVar3;
        param_2[3] = param_2[3] + 1;
        param_2[2] = param_2[2] - (uVar6 & 1);
        plVar1[uStack_c8 * -6 + -5] = lVar16;
        plVar1[uStack_c8 * -6 + -6] = lVar9;
        plVar1[uStack_c8 * -6 + -3] = lVar14;
        plVar1[uStack_c8 * -6 + -4] = lVar7;
        plVar1[uStack_c8 * -6 + -1] = lVar11;
        plVar1[uStack_c8 * -6 + -2] = lVar15;
        *param_1 = -0x8000000000000000;
        return;
      }
      bVar4 = true;
    }
    else {
      uVar13 = CONCAT17(-(lVar16 < 0),
                        CONCAT16(-(cVar22 < '\0'),
                                 CONCAT15(-(cVar21 < '\0'),
                                          CONCAT14(-(cVar20 < '\0'),
                                                   CONCAT13(-(cVar19 < '\0'),
                                                            CONCAT12(-(cVar18 < '\0'),
                                                                     CONCAT11(-(cVar17 < '\0'),
                                                                              -((char)lVar16 < '\0')
                                                                             )))))));
      if (uVar13 != 0) {
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uStack_c8 = uVar6 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar2;
        goto LAB_103b9217c;
      }
      bVar4 = false;
    }
    lVar9 = lVar9 + 8;
    uVar6 = lVar9 + uVar6 & uVar2;
    lVar16 = *(long *)((long)plVar1 + uVar6);
    uVar13 = CONCAT17(-((byte)((ulong)lVar16 >> 0x38) == bVar10),
                      CONCAT16(-((byte)((ulong)lVar16 >> 0x30) == bVar10),
                               CONCAT15(-((byte)((ulong)lVar16 >> 0x28) == bVar10),
                                        CONCAT14(-((byte)((ulong)lVar16 >> 0x20) == bVar10),
                                                 CONCAT13(-((byte)((ulong)lVar16 >> 0x18) == bVar10)
                                                          ,CONCAT12(-((byte)((ulong)lVar16 >> 0x10)
                                                                     == bVar10),
                                                                    CONCAT11(-((byte)((ulong)lVar16
                                                                                     >> 8) == bVar10
                                                                              ),-((byte)lVar16 ==
                                                                                 bVar10)))))))) &
             0x8080808080808080;
  } while( true );
}

