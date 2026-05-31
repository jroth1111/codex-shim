
undefined8 FUN_103877ac4(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
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
  long lVar14;
  long lVar15;
  char cVar18;
  byte bVar19;
  char cVar20;
  byte bVar21;
  char cVar22;
  byte bVar23;
  char cVar24;
  byte bVar25;
  char cVar26;
  byte bVar27;
  char cVar28;
  byte bVar29;
  long lVar16;
  long lVar17;
  byte bVar30;
  ulong uStack_a0;
  
  uVar7 = FUN_1033f7174(param_1[4],param_1[5],param_2);
  if (param_1[2] == 0) {
    func_0x000108942718(param_1,1,param_1 + 4,1);
  }
  plVar1 = (long *)*param_1;
  uVar3 = param_1[1];
  bVar4 = (byte)(uVar7 >> 0x38);
  bVar10 = bVar4 >> 1;
  lVar13 = param_2[1];
  lVar14 = param_2[2];
  uVar2 = param_2[3];
  lVar15 = param_2[4];
  if (uVar2 != 0x8000000000000000) {
    bVar5 = false;
    lVar9 = 0;
    lVar16 = param_2[5];
    do {
      uVar7 = uVar7 & uVar3;
      lVar17 = *(long *)((long)plVar1 + uVar7);
      bVar11 = (byte)lVar17;
      bVar19 = (byte)((ulong)lVar17 >> 8);
      bVar21 = (byte)((ulong)lVar17 >> 0x10);
      bVar23 = (byte)((ulong)lVar17 >> 0x18);
      bVar25 = (byte)((ulong)lVar17 >> 0x20);
      bVar27 = (byte)((ulong)lVar17 >> 0x28);
      bVar29 = (byte)((ulong)lVar17 >> 0x30);
      bVar30 = (byte)((ulong)lVar17 >> 0x38);
      for (uVar12 = CONCAT17(-(bVar30 == bVar10),
                             CONCAT16(-(bVar29 == bVar10),
                                      CONCAT15(-(bVar27 == bVar10),
                                               CONCAT14(-(bVar25 == bVar10),
                                                        CONCAT13(-(bVar23 == bVar10),
                                                                 CONCAT12(-(bVar21 == bVar10),
                                                                          CONCAT11(-(bVar19 ==
                                                                                    bVar10),-(bVar11
                                                                                             == 
                                                  bVar10)))))))) & 0x8080808080808080; uVar12 != 0;
          uVar12 = uVar12 - 1 & uVar12) {
        uVar8 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3;
        if ((((lVar14 == plVar1[uVar8 * -6 + -4]) &&
             (iVar6 = _memcmp(lVar13,plVar1[uVar8 * -6 + -5],lVar14), iVar6 == 0)) &&
            (plVar1[uVar8 * -6 + -3] != -0x8000000000000000)) &&
           ((lVar16 == plVar1[uVar8 * -6 + -1] &&
            (iVar6 = _memcmp(lVar15,plVar1[uVar8 * -6 + -2],lVar16), iVar6 == 0))))
        goto LAB_103877d3c;
      }
      if (bVar5) {
LAB_103877d0c:
        bVar11 = NEON_umaxv(CONCAT17(-(bVar30 == 0xff),
                                     CONCAT16(-(bVar29 == 0xff),
                                              CONCAT15(-(bVar27 == 0xff),
                                                       CONCAT14(-(bVar25 == 0xff),
                                                                CONCAT13(-(bVar23 == 0xff),
                                                                         CONCAT12(-(bVar21 == 0xff),
                                                                                  CONCAT11(-(bVar19 
                                                  == 0xff),-(bVar11 == 0xff)))))))),1);
        if ((bVar11 & 1) != 0) goto LAB_103877d68;
        bVar5 = true;
      }
      else {
        uVar12 = CONCAT17(-(lVar17 < 0),
                          CONCAT16(-((char)bVar29 < '\0'),
                                   CONCAT15(-((char)bVar27 < '\0'),
                                            CONCAT14(-((char)bVar25 < '\0'),
                                                     CONCAT13(-((char)bVar23 < '\0'),
                                                              CONCAT12(-((char)bVar21 < '\0'),
                                                                       CONCAT11(-((char)bVar19 <
                                                                                 '\0'),-((char)
                                                  bVar11 < '\0'))))))));
        if (uVar12 != 0) {
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uStack_a0 = uVar7 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar3;
          goto LAB_103877d0c;
        }
        bVar5 = false;
      }
      lVar9 = lVar9 + 8;
      uVar7 = lVar9 + uVar7;
    } while( true );
  }
  bVar5 = false;
  lVar9 = 0;
  uVar7 = uVar7 & uVar3;
  lVar16 = *(long *)((long)plVar1 + uVar7);
  uVar12 = CONCAT17(-((byte)((ulong)lVar16 >> 0x38) == bVar10),
                    CONCAT16(-((byte)((ulong)lVar16 >> 0x30) == bVar10),
                             CONCAT15(-((byte)((ulong)lVar16 >> 0x28) == bVar10),
                                      CONCAT14(-((byte)((ulong)lVar16 >> 0x20) == bVar10),
                                               CONCAT13(-((byte)((ulong)lVar16 >> 0x18) == bVar10),
                                                        CONCAT12(-((byte)((ulong)lVar16 >> 0x10) ==
                                                                  bVar10),CONCAT11(-((byte)((ulong)
                                                  lVar16 >> 8) == bVar10),-((byte)lVar16 == bVar10))
                                                  )))))) & 0x8080808080808080;
  do {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar8 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar3;
      if (((lVar14 == plVar1[uVar8 * -6 + -4]) &&
          (iVar6 = _memcmp(lVar13,plVar1[uVar8 * -6 + -5],lVar14), iVar6 == 0)) &&
         (plVar1[uVar8 * -6 + -3] == -0x8000000000000000)) {
LAB_103877d3c:
        if (*param_2 != 0) {
          _free(lVar13);
        }
        if ((uVar2 & 0x7fffffffffffffff) != 0) {
          _free(lVar15);
        }
        return 1;
      }
    }
    cVar18 = (char)((ulong)lVar16 >> 8);
    cVar20 = (char)((ulong)lVar16 >> 0x10);
    cVar22 = (char)((ulong)lVar16 >> 0x18);
    cVar24 = (char)((ulong)lVar16 >> 0x20);
    cVar26 = (char)((ulong)lVar16 >> 0x28);
    cVar28 = (char)((ulong)lVar16 >> 0x30);
    if (bVar5) {
LAB_103877bec:
      bVar11 = NEON_umaxv(CONCAT17(-((char)((ulong)lVar16 >> 0x38) == -1),
                                   CONCAT16(-(cVar28 == -1),
                                            CONCAT15(-(cVar26 == -1),
                                                     CONCAT14(-(cVar24 == -1),
                                                              CONCAT13(-(cVar22 == -1),
                                                                       CONCAT12(-(cVar20 == -1),
                                                                                CONCAT11(-(cVar18 ==
                                                                                          -1),-((
                                                  char)lVar16 == -1)))))))),1);
      if ((bVar11 & 1) != 0) {
LAB_103877d68:
        uVar7 = (ulong)*(char *)((long)plVar1 + uStack_a0);
        if (-1 < *(char *)((long)plVar1 + uStack_a0)) {
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
          uStack_a0 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
          uVar7 = (ulong)*(byte *)((long)plVar1 + uStack_a0);
        }
        bVar4 = bVar4 >> 1;
        *(byte *)((long)plVar1 + uStack_a0) = bVar4;
        *(byte *)((long)plVar1 + (uStack_a0 - 8 & uVar3) + 8) = bVar4;
        param_1[3] = param_1[3] + 1;
        param_1[2] = param_1[2] - (uVar7 & 1);
        lVar13 = *param_2;
        lVar15 = param_2[3];
        lVar14 = param_2[2];
        plVar1[uStack_a0 * -6 + -5] = param_2[1];
        plVar1[uStack_a0 * -6 + -6] = lVar13;
        plVar1[uStack_a0 * -6 + -3] = lVar15;
        plVar1[uStack_a0 * -6 + -4] = lVar14;
        lVar13 = param_2[4];
        plVar1[uStack_a0 * -6 + -1] = param_2[5];
        plVar1[uStack_a0 * -6 + -2] = lVar13;
        return 0;
      }
      bVar5 = true;
    }
    else {
      uVar12 = CONCAT17(-(lVar16 < 0),
                        CONCAT16(-(cVar28 < '\0'),
                                 CONCAT15(-(cVar26 < '\0'),
                                          CONCAT14(-(cVar24 < '\0'),
                                                   CONCAT13(-(cVar22 < '\0'),
                                                            CONCAT12(-(cVar20 < '\0'),
                                                                     CONCAT11(-(cVar18 < '\0'),
                                                                              -((char)lVar16 < '\0')
                                                                             )))))));
      if (uVar12 != 0) {
        uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uStack_a0 = uVar7 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar3;
        goto LAB_103877bec;
      }
      bVar5 = false;
    }
    lVar9 = lVar9 + 8;
    uVar7 = lVar9 + uVar7 & uVar3;
    lVar16 = *(long *)((long)plVar1 + uVar7);
    uVar12 = CONCAT17(-((byte)((ulong)lVar16 >> 0x38) == bVar10),
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

