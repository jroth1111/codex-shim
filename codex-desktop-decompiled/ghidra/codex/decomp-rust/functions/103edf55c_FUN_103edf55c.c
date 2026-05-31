
long FUN_103edf55c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
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
  ulong uStack_90;
  
  lVar13 = param_2[1];
  lVar10 = param_2[2];
  uVar6 = FUN_103dc2338(param_1[4],param_1[5],lVar13,lVar10);
  if (param_1[2] == 0) {
    func_0x00010897e4bc(param_1,1,param_1 + 4,1);
  }
  bVar4 = false;
  lVar8 = 0;
  plVar1 = (long *)*param_1;
  uVar2 = param_1[1];
  bVar3 = (byte)(uVar6 >> 0x38);
  bVar9 = bVar3 >> 1;
  uVar6 = uVar6 & uVar2;
  lVar14 = *(long *)((long)plVar1 + uVar6);
  uVar12 = CONCAT17(-((byte)((ulong)lVar14 >> 0x38) == bVar9),
                    CONCAT16(-((byte)((ulong)lVar14 >> 0x30) == bVar9),
                             CONCAT15(-((byte)((ulong)lVar14 >> 0x28) == bVar9),
                                      CONCAT14(-((byte)((ulong)lVar14 >> 0x20) == bVar9),
                                               CONCAT13(-((byte)((ulong)lVar14 >> 0x18) == bVar9),
                                                        CONCAT12(-((byte)((ulong)lVar14 >> 0x10) ==
                                                                  bVar9),CONCAT11(-((byte)((ulong)
                                                  lVar14 >> 8) == bVar9),-((byte)lVar14 == bVar9))))
                                              )))) & 0x8080808080808080;
  do {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar7 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
      if ((lVar10 == plVar1[uVar7 * -4 + -2]) &&
         (iVar5 = _memcmp(lVar13,plVar1[uVar7 * -4 + -3],lVar10), iVar5 == 0)) {
        lVar10 = plVar1[uVar7 * -4 + -1];
        plVar1[uVar7 * -4 + -1] = param_3;
        if (*param_2 != 0) {
          _free(lVar13);
        }
        return lVar10;
      }
    }
    cVar15 = (char)((ulong)lVar14 >> 8);
    cVar16 = (char)((ulong)lVar14 >> 0x10);
    cVar17 = (char)((ulong)lVar14 >> 0x18);
    cVar18 = (char)((ulong)lVar14 >> 0x20);
    cVar19 = (char)((ulong)lVar14 >> 0x28);
    cVar20 = (char)((ulong)lVar14 >> 0x30);
    if (bVar4) {
LAB_103edf65c:
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
        uVar6 = (ulong)*(char *)((long)plVar1 + uStack_90);
        if (-1 < *(char *)((long)plVar1 + uStack_90)) {
          lVar13 = *plVar1;
          uVar6 = CONCAT17(-(lVar13 < 0),
                           CONCAT16(-((char)((ulong)lVar13 >> 0x30) < '\0'),
                                    CONCAT15(-((char)((ulong)lVar13 >> 0x28) < '\0'),
                                             CONCAT14(-((char)((ulong)lVar13 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)((ulong)lVar13 >> 0x18) <
                                                                '\0'),CONCAT12(-((char)((ulong)
                                                  lVar13 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar13 >> 8) < '\0'),
                                                           -((char)lVar13 < '\0'))))))));
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uStack_90 = (ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3;
          uVar6 = (ulong)*(byte *)((long)plVar1 + uStack_90);
        }
        bVar3 = bVar3 >> 1;
        *(byte *)((long)plVar1 + uStack_90) = bVar3;
        *(byte *)((long)plVar1 + (uStack_90 - 8 & uVar2) + 8) = bVar3;
        param_1[3] = param_1[3] + 1;
        param_1[2] = param_1[2] - (uVar6 & 1);
        lVar13 = *param_2;
        plVar1[uStack_90 * -4 + -3] = param_2[1];
        plVar1[uStack_90 * -4 + -4] = lVar13;
        plVar1[uStack_90 * -4 + -2] = param_2[2];
        plVar1[uStack_90 * -4 + -1] = param_3;
        return 0;
      }
      bVar4 = true;
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
        uStack_90 = uVar6 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar2;
        goto LAB_103edf65c;
      }
      bVar4 = false;
    }
    lVar8 = lVar8 + 8;
    uVar6 = lVar8 + uVar6 & uVar2;
    lVar14 = *(long *)((long)plVar1 + uVar6);
    uVar12 = CONCAT17(-((byte)((ulong)lVar14 >> 0x38) == bVar9),
                      CONCAT16(-((byte)((ulong)lVar14 >> 0x30) == bVar9),
                               CONCAT15(-((byte)((ulong)lVar14 >> 0x28) == bVar9),
                                        CONCAT14(-((byte)((ulong)lVar14 >> 0x20) == bVar9),
                                                 CONCAT13(-((byte)((ulong)lVar14 >> 0x18) == bVar9),
                                                          CONCAT12(-((byte)((ulong)lVar14 >> 0x10)
                                                                    == bVar9),
                                                                   CONCAT11(-((byte)((ulong)lVar14
                                                                                    >> 8) == bVar9),
                                                                            -((byte)lVar14 == bVar9)
                                                                           ))))))) &
             0x8080808080808080;
  } while( true );
}

