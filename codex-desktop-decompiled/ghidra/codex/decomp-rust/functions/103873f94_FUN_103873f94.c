
undefined8 FUN_103873f94(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  long lVar15;
  ulong uStack_88;
  
  uVar7 = func_0x0001033f7880(param_1[4],param_1[5],param_2);
  if (param_1[2] == 0) {
    func_0x0001089422f8(param_1,1,param_1 + 4,1);
  }
  bVar4 = false;
  lVar9 = 0;
  plVar1 = (long *)*param_1;
  uVar2 = param_1[1];
  bVar3 = (byte)(uVar7 >> 0x38);
  bVar10 = bVar3 >> 1;
  lVar5 = param_2[3];
  lVar13 = param_2[1];
  lVar14 = param_2[2];
  uVar7 = uVar7 & uVar2;
  lVar15 = *(long *)((long)plVar1 + uVar7);
  uVar12 = CONCAT17(-((byte)((ulong)lVar15 >> 0x38) == bVar10),
                    CONCAT16(-((byte)((ulong)lVar15 >> 0x30) == bVar10),
                             CONCAT15(-((byte)((ulong)lVar15 >> 0x28) == bVar10),
                                      CONCAT14(-((byte)((ulong)lVar15 >> 0x20) == bVar10),
                                               CONCAT13(-((byte)((ulong)lVar15 >> 0x18) == bVar10),
                                                        CONCAT12(-((byte)((ulong)lVar15 >> 0x10) ==
                                                                  bVar10),CONCAT11(-((byte)((ulong)
                                                  lVar15 >> 8) == bVar10),-((byte)lVar15 == bVar10))
                                                  )))))) & 0x8080808080808080;
  do {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar8 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      if ((((char)lVar5 == (char)plVar1[uVar8 * -4 + -1]) && (lVar14 == plVar1[uVar8 * -4 + -2])) &&
         (iVar6 = _memcmp(lVar13,plVar1[uVar8 * -4 + -3],lVar14), iVar6 == 0)) {
        if (*param_2 != 0) {
          _free(lVar13);
        }
        return 1;
      }
    }
    cVar16 = (char)((ulong)lVar15 >> 8);
    cVar17 = (char)((ulong)lVar15 >> 0x10);
    cVar18 = (char)((ulong)lVar15 >> 0x18);
    cVar19 = (char)((ulong)lVar15 >> 0x20);
    cVar20 = (char)((ulong)lVar15 >> 0x28);
    cVar21 = (char)((ulong)lVar15 >> 0x30);
    if (bVar4) {
LAB_10387409c:
      bVar11 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar15 >> 0x38) == -1),
                                   CONCAT16(-(cVar21 == -1),
                                            CONCAT15(-(cVar20 == -1),
                                                     CONCAT14(-(cVar19 == -1),
                                                              CONCAT13(-(cVar18 == -1),
                                                                       CONCAT12(-(cVar17 == -1),
                                                                                CONCAT11(-(cVar16 ==
                                                                                          -1),-((
                                                  char)lVar15 == -1)))))))),1);
      if ((bVar11 & 1) != 0) {
        uVar7 = (ulong)*(char *)((long)plVar1 + uStack_88);
        if (-1 < *(char *)((long)plVar1 + uStack_88)) {
          lVar9 = *plVar1;
          uVar7 = CONCAT17(-(lVar9 < 0),
                           CONCAT16(-((char)((ulong)lVar9 >> 0x30) < '\0'),
                                    CONCAT15(-((char)((ulong)lVar9 >> 0x28) < '\0'),
                                             CONCAT14(-((char)((ulong)lVar9 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)((ulong)lVar9 >> 0x18) < '\0'
                                                                ),CONCAT12(-((char)((ulong)lVar9 >>
                                                                                   0x10) < '\0'),
                                                                           CONCAT11(-((char)((ulong)
                                                  lVar9 >> 8) < '\0'),-((char)lVar9 < '\0'))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uStack_88 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
          uVar7 = (ulong)*(byte *)((long)plVar1 + uStack_88);
        }
        *(byte *)((long)plVar1 + uStack_88) = bVar3 >> 1;
        *(byte *)((long)plVar1 + (uStack_88 - 8 & uVar2) + 8) = bVar3 >> 1;
        param_1[3] = param_1[3] + 1;
        param_1[2] = param_1[2] - (uVar7 & 1);
        lVar9 = *param_2;
        lVar14 = param_2[3];
        lVar13 = param_2[2];
        plVar1[uStack_88 * -4 + -3] = param_2[1];
        plVar1[uStack_88 * -4 + -4] = lVar9;
        plVar1[uStack_88 * -4 + -1] = lVar14;
        plVar1[uStack_88 * -4 + -2] = lVar13;
        return 0;
      }
      bVar4 = true;
    }
    else {
      uVar12 = CONCAT17(-(lVar15 < 0),
                        CONCAT16(-(cVar21 < '\0'),
                                 CONCAT15(-(cVar20 < '\0'),
                                          CONCAT14(-(cVar19 < '\0'),
                                                   CONCAT13(-(cVar18 < '\0'),
                                                            CONCAT12(-(cVar17 < '\0'),
                                                                     CONCAT11(-(cVar16 < '\0'),
                                                                              -((char)lVar15 < '\0')
                                                                             )))))));
      if (uVar12 != 0) {
        uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uStack_88 = uVar7 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar2;
        goto LAB_10387409c;
      }
      bVar4 = false;
    }
    lVar9 = lVar9 + 8;
    uVar7 = lVar9 + uVar7 & uVar2;
    lVar15 = *(long *)((long)plVar1 + uVar7);
    uVar12 = CONCAT17(-((byte)((ulong)lVar15 >> 0x38) == bVar10),
                      CONCAT16(-((byte)((ulong)lVar15 >> 0x30) == bVar10),
                               CONCAT15(-((byte)((ulong)lVar15 >> 0x28) == bVar10),
                                        CONCAT14(-((byte)((ulong)lVar15 >> 0x20) == bVar10),
                                                 CONCAT13(-((byte)((ulong)lVar15 >> 0x18) == bVar10)
                                                          ,CONCAT12(-((byte)((ulong)lVar15 >> 0x10)
                                                                     == bVar10),
                                                                    CONCAT11(-((byte)((ulong)lVar15
                                                                                     >> 8) == bVar10
                                                                              ),-((byte)lVar15 ==
                                                                                 bVar10)))))))) &
             0x8080808080808080;
  } while( true );
}

