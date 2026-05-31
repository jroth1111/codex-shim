
undefined8 FUN_1039b78c4(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  long lVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  long lVar14;
  ulong uStack_80;
  
  lVar13 = param_2[1];
  lVar2 = param_2[2];
  uVar7 = FUN_103946c2c(param_1[4],param_1[5],lVar13,lVar2);
  if (param_1[2] == 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h237b9c2a934c5d59E
              (param_1,1,param_1 + 4,1);
  }
  bVar5 = false;
  lVar9 = 0;
  plVar1 = (long *)*param_1;
  uVar3 = param_1[1];
  bVar4 = (byte)(uVar7 >> 0x38);
  bVar10 = bVar4 >> 1;
  uVar7 = uVar7 & uVar3;
  lVar14 = *(long *)((long)plVar1 + uVar7);
  uVar12 = CONCAT17(-((byte)((ulong)lVar14 >> 0x38) == bVar10),
                    CONCAT16(-((byte)((ulong)lVar14 >> 0x30) == bVar10),
                             CONCAT15(-((byte)((ulong)lVar14 >> 0x28) == bVar10),
                                      CONCAT14(-((byte)((ulong)lVar14 >> 0x20) == bVar10),
                                               CONCAT13(-((byte)((ulong)lVar14 >> 0x18) == bVar10),
                                                        CONCAT12(-((byte)((ulong)lVar14 >> 0x10) ==
                                                                  bVar10),CONCAT11(-((byte)((ulong)
                                                  lVar14 >> 8) == bVar10),-((byte)lVar14 == bVar10))
                                                  )))))) & 0x8080808080808080;
  do {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar8 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3;
      if ((lVar2 == plVar1[uVar8 * -3 + -1]) &&
         (iVar6 = _memcmp(lVar13,plVar1[uVar8 * -3 + -2],lVar2), iVar6 == 0)) {
        if (*param_2 != 0) {
          _free(lVar13);
        }
        return 1;
      }
    }
    cVar15 = (char)((ulong)lVar14 >> 8);
    cVar16 = (char)((ulong)lVar14 >> 0x10);
    cVar17 = (char)((ulong)lVar14 >> 0x18);
    cVar18 = (char)((ulong)lVar14 >> 0x20);
    cVar19 = (char)((ulong)lVar14 >> 0x28);
    cVar20 = (char)((ulong)lVar14 >> 0x30);
    if (bVar5) {
LAB_1039b79c4:
      bVar11 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar14 >> 0x38) == -1),
                                   CONCAT16(-(cVar20 == -1),
                                            CONCAT15(-(cVar19 == -1),
                                                     CONCAT14(-(cVar18 == -1),
                                                              CONCAT13(-(cVar17 == -1),
                                                                       CONCAT12(-(cVar16 == -1),
                                                                                CONCAT11(-(cVar15 ==
                                                                                          -1),-((
                                                  char)lVar14 == -1)))))))),1);
      if ((bVar11 & 1) != 0) {
        uVar7 = (ulong)*(char *)((long)plVar1 + uStack_80);
        if (-1 < *(char *)((long)plVar1 + uStack_80)) {
          lVar13 = *plVar1;
          uVar7 = CONCAT17(-(lVar13 < 0),
                           CONCAT16(-((char)((ulong)lVar13 >> 0x30) < '\0'),
                                    CONCAT15(-((char)((ulong)lVar13 >> 0x28) < '\0'),
                                             CONCAT14(-((char)((ulong)lVar13 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)((ulong)lVar13 >> 0x18) <
                                                                '\0'),CONCAT12(-((char)((ulong)
                                                  lVar13 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar13 >> 8) < '\0'),
                                                           -((char)lVar13 < '\0'))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uStack_80 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
          uVar7 = (ulong)*(byte *)((long)plVar1 + uStack_80);
        }
        *(byte *)((long)plVar1 + uStack_80) = bVar4 >> 1;
        *(byte *)((long)plVar1 + (uStack_80 - 8 & uVar3) + 8) = bVar4 >> 1;
        param_1[3] = param_1[3] + 1;
        param_1[2] = param_1[2] - (uVar7 & 1);
        lVar13 = *param_2;
        plVar1[uStack_80 * -3 + -2] = param_2[1];
        plVar1[uStack_80 * -3 + -3] = lVar13;
        plVar1[uStack_80 * -3 + -1] = param_2[2];
        return 0;
      }
      bVar5 = true;
    }
    else {
      uVar12 = CONCAT17(-(lVar14 < 0),
                        CONCAT16(-(cVar20 < '\0'),
                                 CONCAT15(-(cVar19 < '\0'),
                                          CONCAT14(-(cVar18 < '\0'),
                                                   CONCAT13(-(cVar17 < '\0'),
                                                            CONCAT12(-(cVar16 < '\0'),
                                                                     CONCAT11(-(cVar15 < '\0'),
                                                                              -((char)lVar14 < '\0')
                                                                             )))))));
      if (uVar12 != 0) {
        uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uStack_80 = uVar7 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar3;
        goto LAB_1039b79c4;
      }
      bVar5 = false;
    }
    lVar9 = lVar9 + 8;
    uVar7 = lVar9 + uVar7 & uVar3;
    lVar14 = *(long *)((long)plVar1 + uVar7);
    uVar12 = CONCAT17(-((byte)((ulong)lVar14 >> 0x38) == bVar10),
                      CONCAT16(-((byte)((ulong)lVar14 >> 0x30) == bVar10),
                               CONCAT15(-((byte)((ulong)lVar14 >> 0x28) == bVar10),
                                        CONCAT14(-((byte)((ulong)lVar14 >> 0x20) == bVar10),
                                                 CONCAT13(-((byte)((ulong)lVar14 >> 0x18) == bVar10)
                                                          ,CONCAT12(-((byte)((ulong)lVar14 >> 0x10)
                                                                     == bVar10),
                                                                    CONCAT11(-((byte)((ulong)lVar14
                                                                                     >> 8) == bVar10
                                                                              ),-((byte)lVar14 ==
                                                                                 bVar10)))))))) &
             0x8080808080808080;
  } while( true );
}

