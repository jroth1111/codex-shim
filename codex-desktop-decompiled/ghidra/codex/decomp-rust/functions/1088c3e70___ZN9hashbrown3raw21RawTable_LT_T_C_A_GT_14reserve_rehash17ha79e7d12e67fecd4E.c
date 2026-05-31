
ulong __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17ha79e7d12e67fecd4E
                (long *param_1,ulong param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong unaff_x25;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 auVar28 [16];
  long *plStack_158;
  long *plStack_130;
  ulong uStack_128;
  long lStack_120;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  ulong uStack_78;
  long lStack_70;
  
  puStack_88 = &uStack_90;
  uVar18 = param_1[3];
  uVar20 = uVar18 + param_2;
  uStack_90 = param_3;
  if (!CARRY8(uVar18,param_2)) {
    uVar15 = param_1[1];
    uVar19 = uVar15;
    if (7 < uVar15) {
      uVar19 = (uVar15 + 1 >> 3) * 7;
    }
    if (uVar19 >> 1 < uVar20) {
      if (uVar20 < uVar19 + 1) {
        uVar20 = uVar19 + 1;
      }
      FUN_101ba87e4(&plStack_80,0x48,uVar20);
      if (plStack_80 == (long *)0x0) {
        return uStack_78;
      }
      plVar8 = (long *)*param_1;
      if (uVar18 != 0) {
        lVar21 = 0;
        lVar22 = *plVar8;
        uVar20 = CONCAT17(-(-1 < lVar22),
                          CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar22 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar22
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar22 >> 8)),-(-1 < (char)lVar22)))))))) &
                 0x8080808080808080;
        plVar11 = plVar8;
        uVar19 = uVar18;
        do {
          while (uVar20 == 0) {
            lVar22 = plVar11[1];
            lVar21 = lVar21 + 8;
            plVar11 = plVar11 + 1;
            uVar20 = CONCAT17(-(-1 < lVar22),
                              CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar22 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                     0x8080808080808080;
          }
          uVar12 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = lVar21 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
          uVar5 = FUN_101ba8cf4(&puStack_88,param_1,uVar12);
          uVar9 = uVar5 & uStack_78;
          lVar22 = *(long *)((long)plStack_80 + uVar9);
          uVar14 = CONCAT17(-(lVar22 < 0),
                            CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar22 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar22 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar22 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar22 >> 8) < '\0'),
                                                           -((char)lVar22 < '\0'))))))));
          if (uVar14 == 0) {
            lVar22 = 8;
            do {
              uVar9 = uVar9 + lVar22 & uStack_78;
              lVar23 = *(long *)((long)plStack_80 + uVar9);
              uVar14 = CONCAT17(-(lVar23 < 0),
                                CONCAT16(-((char)((ulong)lVar23 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar23 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar23 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar23 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar23 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar23 >> 8) < '\0'),
                                                           -((char)lVar23 < '\0'))))))));
              lVar22 = lVar22 + 8;
            } while (uVar14 == 0);
          }
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar9 = uVar9 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uStack_78;
          if (-1 < *(char *)((long)plStack_80 + uVar9)) {
            lVar22 = *plStack_80;
            uVar9 = CONCAT17(-(lVar22 < 0),
                             CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                      CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                               CONCAT14(-((char)((ulong)lVar22 >> 0x20) < '\0'),
                                                        CONCAT13(-((char)((ulong)lVar22 >> 0x18) <
                                                                  '\0'),CONCAT12(-((char)((ulong)
                                                  lVar22 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar22 >> 8) < '\0'),
                                                           -((char)lVar22 < '\0'))))))));
            uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
          }
          uVar20 = uVar20 - 1 & uVar20;
          bVar4 = (byte)(uVar5 >> 0x38);
          *(byte *)((long)plStack_80 + uVar9) = bVar4 >> 1;
          *(byte *)((long)plStack_80 + (uVar9 - 8 & uStack_78) + 8) = bVar4 >> 1;
          plVar13 = plVar8 + ~uVar12 * 9;
          plVar10 = plStack_80 + ~uVar9 * 9;
          lVar22 = *plVar13;
          plVar10[1] = plVar13[1];
          *plVar10 = lVar22;
          lVar23 = plVar13[3];
          lVar22 = plVar13[2];
          lVar25 = plVar13[5];
          lVar24 = plVar13[4];
          lVar27 = plVar13[7];
          lVar26 = plVar13[6];
          plVar10[8] = plVar13[8];
          plVar10[5] = lVar25;
          plVar10[4] = lVar24;
          plVar10[7] = lVar27;
          plVar10[6] = lVar26;
          plVar10[3] = lVar23;
          plVar10[2] = lVar22;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      *param_1 = (long)plStack_80;
      param_1[1] = uStack_78;
      param_1[2] = lStack_70 - uVar18;
      if ((uVar15 != 0) && (lVar21 = uVar15 * 0x48 + 0x48, uVar15 + lVar21 != -9)) {
        _free((long)plVar8 - lVar21);
      }
    }
    else {
      FUN_101ba84e8(param_1,&puStack_88,FUN_101ba8cf4,0x48,&DAT_10192f220);
    }
    return 0x8000000000000001;
  }
  if (param_4 == 0) {
    return 0;
  }
  puVar7 = (undefined8 *)&UNK_10b3ad9c8;
  auVar28 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
  plVar8 = auVar28._0_8_;
  puVar16 = (ulong *)plVar8[3];
  uVar20 = (long)puVar16 + auVar28._8_8_;
  if (CARRY8((ulong)puVar16,auVar28._8_8_)) {
    if (param_4 == 0) {
      return 0;
    }
    puVar7 = (undefined8 *)&UNK_10b3ad9c8;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
  }
  else {
    unaff_x25 = plVar8[1];
    unaff_x20 = unaff_x25 + 1;
    uVar18 = unaff_x20 >> 3;
    uVar19 = unaff_x25;
    if (7 < unaff_x25) {
      uVar19 = uVar18 * 7;
    }
    if (uVar19 >> 1 < uVar20) {
      if (uVar20 < uVar19 + 1) {
        uVar20 = uVar19 + 1;
      }
      FUN_101ba87e4(&plStack_130,0x138,uVar20);
      if (plStack_130 == (long *)0x0) {
        return uStack_128;
      }
      plVar11 = (long *)*plVar8;
      if (puVar16 != (ulong *)0x0) {
        lVar21 = 0;
        lVar22 = *plVar11;
        uVar20 = CONCAT17(-(-1 < lVar22),
                          CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar22 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar22
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar22 >> 8)),-(-1 < (char)lVar22)))))))) &
                 0x8080808080808080;
        uVar1 = *puVar7;
        uVar2 = puVar7[1];
        plVar10 = plVar11;
        puVar17 = puVar16;
        do {
          while (uVar20 == 0) {
            lVar22 = plVar10[1];
            lVar21 = lVar21 + 8;
            plVar10 = plVar10 + 1;
            uVar20 = CONCAT17(-(-1 < lVar22),
                              CONCAT16(-(-1 < (char)((ulong)lVar22 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar22 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar22 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar22 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar22 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar22 >> 8)),
                                                           -(-1 < (char)lVar22)))))))) &
                     0x8080808080808080;
          }
          uVar18 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
          uVar18 = lVar21 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
          uVar19 = FUN_10196fc70(uVar1,uVar2,plVar11[uVar18 * -0x27 + -0x26],
                                 plVar11[uVar18 * -0x27 + -0x25]);
          uVar15 = uVar19 & uStack_128;
          lVar22 = *(long *)((long)plStack_130 + uVar15);
          uVar12 = CONCAT17(-(lVar22 < 0),
                            CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar22 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar22 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar22 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar22 >> 8) < '\0'),
                                                           -((char)lVar22 < '\0'))))))));
          if (uVar12 == 0) {
            lVar22 = 8;
            do {
              uVar15 = uVar15 + lVar22 & uStack_128;
              lVar23 = *(long *)((long)plStack_130 + uVar15);
              uVar12 = CONCAT17(-(lVar23 < 0),
                                CONCAT16(-((char)((ulong)lVar23 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar23 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar23 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar23 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar23 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar23 >> 8) < '\0'),
                                                           -((char)lVar23 < '\0'))))))));
              lVar22 = lVar22 + 8;
            } while (uVar12 == 0);
          }
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar15 = uVar15 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uStack_128;
          if (-1 < *(char *)((long)plStack_130 + uVar15)) {
            lVar22 = *plStack_130;
            uVar15 = CONCAT17(-(lVar22 < 0),
                              CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar22 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar22 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar22 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar22 >> 8) < '\0'),
                                                           -((char)lVar22 < '\0'))))))));
            uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
            uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
            uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar15 = (ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3;
          }
          uVar20 = uVar20 - 1 & uVar20;
          puVar17 = (ulong *)((long)puVar17 + -1);
          bVar4 = (byte)(uVar19 >> 0x38);
          *(byte *)((long)plStack_130 + uVar15) = bVar4 >> 1;
          *(byte *)((long)plStack_130 + (uVar15 - 8 & uStack_128) + 8) = bVar4 >> 1;
          _memcpy(plStack_130 + ~uVar15 * 0x27,plVar11 + ~uVar18 * 0x27,0x138);
        } while (puVar17 != (ulong *)0x0);
      }
      *plVar8 = (long)plStack_130;
      plVar8[1] = uStack_128;
      plVar8[2] = lStack_120 - (long)puVar16;
      if (unaff_x25 == 0) {
        return 0x8000000000000001;
      }
      lVar21 = unaff_x25 * 0x138 + 0x138;
      if (unaff_x25 + lVar21 == -9) {
        return 0x8000000000000001;
      }
      _free((long)plVar11 - lVar21);
      return 0x8000000000000001;
    }
    if (unaff_x20 == 0) {
      uVar20 = 0;
      goto LAB_1088c44c4;
    }
    puVar16 = (ulong *)*plVar8;
    puVar17 = puVar16;
    if ((unaff_x20 & 7) != 0) {
      uVar18 = uVar18 + 1;
    }
    do {
      uVar20 = *puVar17;
      *puVar17 = CONCAT17(-((long)uVar20 < 0),
                          CONCAT16(-((char)(uVar20 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar20 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar20 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar20 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar20 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar20 >> 8) < '\0'),-((char)uVar20 < '\0'))))))))
                 | 0x8080808080808080;
      uVar18 = uVar18 - 1;
      puVar17 = puVar17 + 1;
    } while (uVar18 != 0);
    plStack_158 = plVar8;
    if (7 < unaff_x20) {
      *(ulong *)((long)puVar16 + unaff_x20) = *puVar16;
      goto LAB_1088c406c;
    }
  }
  _memmove(puVar16 + 1,puVar16,unaff_x20);
LAB_1088c406c:
  uVar1 = *puVar7;
  uVar2 = puVar7[1];
  uVar20 = 1;
  uVar18 = 0;
  do {
    uVar19 = uVar20;
    if (*(char *)((long)puVar16 + uVar18) == -0x80) {
      puVar17 = puVar16 + ~uVar18 * 0x27;
      while( true ) {
        uVar15 = FUN_10196fc70(uVar1,uVar2,puVar16[uVar18 * -0x27 + -0x26],
                               puVar16[uVar18 * -0x27 + -0x25]);
        uVar12 = unaff_x25 & uVar15;
        lVar21 = *(long *)((long)puVar16 + uVar12);
        uVar5 = CONCAT17(-(lVar21 < 0),
                         CONCAT16(-((char)((ulong)lVar21 >> 0x30) < '\0'),
                                  CONCAT15(-((char)((ulong)lVar21 >> 0x28) < '\0'),
                                           CONCAT14(-((char)((ulong)lVar21 >> 0x20) < '\0'),
                                                    CONCAT13(-((char)((ulong)lVar21 >> 0x18) < '\0')
                                                             ,CONCAT12(-((char)((ulong)lVar21 >>
                                                                               0x10) < '\0'),
                                                                       CONCAT11(-((char)((ulong)
                                                  lVar21 >> 8) < '\0'),-((char)lVar21 < '\0'))))))))
        ;
        uVar20 = uVar12;
        if (uVar5 == 0) {
          lVar21 = 8;
          do {
            uVar20 = uVar20 + lVar21 & unaff_x25;
            lVar22 = *(long *)((long)puVar16 + uVar20);
            uVar5 = CONCAT17(-(lVar22 < 0),
                             CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                      CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                               CONCAT14(-((char)((ulong)lVar22 >> 0x20) < '\0'),
                                                        CONCAT13(-((char)((ulong)lVar22 >> 0x18) <
                                                                  '\0'),CONCAT12(-((char)((ulong)
                                                  lVar22 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar22 >> 8) < '\0'),
                                                           -((char)lVar22 < '\0'))))))));
            lVar21 = lVar21 + 8;
          } while (uVar5 == 0);
        }
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar20 = uVar20 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & unaff_x25;
        bVar4 = (byte)(uVar15 >> 0x38);
        if (*(char *)((long)puVar16 + uVar20) < '\0') {
          uVar15 = uVar20 - uVar12 ^ uVar18 - uVar12;
        }
        else {
          uVar20 = *puVar16;
          uVar20 = CONCAT17(-((long)uVar20 < 0),
                            CONCAT16(-((char)(uVar20 >> 0x30) < '\0'),
                                     CONCAT15(-((char)(uVar20 >> 0x28) < '\0'),
                                              CONCAT14(-((char)(uVar20 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)(uVar20 >> 0x18) < '\0'),
                                                                CONCAT12(-((char)(uVar20 >> 0x10) <
                                                                          '\0'),CONCAT11(-((char)(
                                                  uVar20 >> 8) < '\0'),-((char)uVar20 < '\0'))))))))
          ;
          uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
          uVar15 = uVar20 - uVar12 ^ uVar18 - uVar12;
        }
        if ((uVar15 & unaff_x25) < 8) {
          *(byte *)((long)puVar16 + uVar18) = bVar4 >> 1;
          *(byte *)((long)puVar16 + (unaff_x25 & uVar18 - 8) + 8) = bVar4 >> 1;
          goto LAB_1088c43f0;
        }
        puVar6 = puVar16 + ~uVar20 * 0x27;
        cVar3 = *(char *)((long)puVar16 + uVar20);
        *(byte *)((long)puVar16 + uVar20) = bVar4 >> 1;
        *(byte *)((long)puVar16 + (uVar20 - 8 & unaff_x25) + 8) = bVar4 >> 1;
        if (cVar3 == -1) break;
        uVar20 = *puVar17;
        *puVar17 = *puVar6;
        *puVar6 = uVar20;
        uVar20 = puVar17[1];
        puVar17[1] = puVar6[1];
        puVar6[1] = uVar20;
        uVar20 = puVar17[2];
        puVar17[2] = puVar6[2];
        puVar6[2] = uVar20;
        uVar20 = puVar17[3];
        puVar17[3] = puVar6[3];
        puVar6[3] = uVar20;
        uVar20 = puVar17[4];
        puVar17[4] = puVar6[4];
        puVar6[4] = uVar20;
        uVar20 = puVar17[5];
        puVar17[5] = puVar6[5];
        puVar6[5] = uVar20;
        uVar20 = puVar17[6];
        puVar17[6] = puVar6[6];
        puVar6[6] = uVar20;
        uVar20 = puVar17[7];
        puVar17[7] = puVar6[7];
        puVar6[7] = uVar20;
        uVar20 = puVar17[8];
        puVar17[8] = puVar6[8];
        puVar6[8] = uVar20;
        uVar20 = puVar17[9];
        puVar17[9] = puVar6[9];
        puVar6[9] = uVar20;
        uVar20 = puVar17[10];
        puVar17[10] = puVar6[10];
        puVar6[10] = uVar20;
        uVar20 = puVar17[0xb];
        puVar17[0xb] = puVar6[0xb];
        puVar6[0xb] = uVar20;
        uVar20 = puVar17[0xc];
        puVar17[0xc] = puVar6[0xc];
        puVar6[0xc] = uVar20;
        uVar20 = puVar17[0xd];
        puVar17[0xd] = puVar6[0xd];
        puVar6[0xd] = uVar20;
        uVar20 = puVar17[0xe];
        puVar17[0xe] = puVar6[0xe];
        puVar6[0xe] = uVar20;
        uVar20 = puVar17[0xf];
        puVar17[0xf] = puVar6[0xf];
        puVar6[0xf] = uVar20;
        uVar20 = puVar17[0x10];
        puVar17[0x10] = puVar6[0x10];
        puVar6[0x10] = uVar20;
        uVar20 = puVar17[0x11];
        puVar17[0x11] = puVar6[0x11];
        puVar6[0x11] = uVar20;
        uVar20 = puVar17[0x12];
        puVar17[0x12] = puVar6[0x12];
        puVar6[0x12] = uVar20;
        uVar20 = puVar17[0x13];
        puVar17[0x13] = puVar6[0x13];
        puVar6[0x13] = uVar20;
        uVar20 = puVar17[0x14];
        puVar17[0x14] = puVar6[0x14];
        puVar6[0x14] = uVar20;
        uVar20 = puVar17[0x15];
        puVar17[0x15] = puVar6[0x15];
        puVar6[0x15] = uVar20;
        uVar20 = puVar17[0x16];
        puVar17[0x16] = puVar6[0x16];
        puVar6[0x16] = uVar20;
        uVar20 = puVar17[0x17];
        puVar17[0x17] = puVar6[0x17];
        puVar6[0x17] = uVar20;
        uVar20 = puVar17[0x18];
        puVar17[0x18] = puVar6[0x18];
        puVar6[0x18] = uVar20;
        uVar20 = puVar17[0x19];
        puVar17[0x19] = puVar6[0x19];
        puVar6[0x19] = uVar20;
        uVar20 = puVar17[0x1a];
        puVar17[0x1a] = puVar6[0x1a];
        puVar6[0x1a] = uVar20;
        uVar20 = puVar17[0x1b];
        puVar17[0x1b] = puVar6[0x1b];
        puVar6[0x1b] = uVar20;
        uVar20 = puVar17[0x1c];
        puVar17[0x1c] = puVar6[0x1c];
        puVar6[0x1c] = uVar20;
        uVar20 = puVar17[0x1d];
        puVar17[0x1d] = puVar6[0x1d];
        puVar6[0x1d] = uVar20;
        uVar20 = puVar17[0x1e];
        puVar17[0x1e] = puVar6[0x1e];
        puVar6[0x1e] = uVar20;
        uVar20 = puVar17[0x1f];
        puVar17[0x1f] = puVar6[0x1f];
        puVar6[0x1f] = uVar20;
        uVar20 = puVar17[0x20];
        puVar17[0x20] = puVar6[0x20];
        puVar6[0x20] = uVar20;
        uVar20 = puVar17[0x21];
        puVar17[0x21] = puVar6[0x21];
        puVar6[0x21] = uVar20;
        uVar20 = puVar17[0x22];
        puVar17[0x22] = puVar6[0x22];
        puVar6[0x22] = uVar20;
        uVar20 = puVar17[0x23];
        puVar17[0x23] = puVar6[0x23];
        puVar6[0x23] = uVar20;
        uVar20 = puVar17[0x24];
        puVar17[0x24] = puVar6[0x24];
        puVar6[0x24] = uVar20;
        uVar20 = puVar17[0x25];
        puVar17[0x25] = puVar6[0x25];
        puVar6[0x25] = uVar20;
        uVar20 = puVar17[0x26];
        puVar17[0x26] = puVar6[0x26];
        puVar6[0x26] = uVar20;
      }
      *(undefined1 *)((long)puVar16 + uVar18) = 0xff;
      *(undefined1 *)((long)puVar16 + (unaff_x25 & uVar18 - 8) + 8) = 0xff;
      _memcpy(puVar6,puVar17,0x138);
    }
LAB_1088c43f0:
    if (unaff_x20 <= uVar19) break;
    uVar20 = uVar19 + 1;
    uVar18 = uVar19;
  } while( true );
  uVar20 = plStack_158[1];
  if (7 < uVar20) {
    uVar20 = (uVar20 + 1 >> 3) * 7;
  }
  puVar16 = (ulong *)plStack_158[3];
  plVar8 = plStack_158;
LAB_1088c44c4:
  plVar8[2] = uVar20 - (long)puVar16;
  return 0x8000000000000001;
}

