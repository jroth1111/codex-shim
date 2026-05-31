
ulong __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h102af480e088183cE
                (long *param_1,ulong param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  ulong unaff_x20;
  ulong *unaff_x21;
  ulong uVar16;
  ulong unaff_x24;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long *plStack_a8;
  long *plStack_80;
  ulong uStack_78;
  long lStack_70;
  
  uVar16 = param_1[3];
  uVar17 = uVar16 + param_2;
  if (CARRY8(uVar16,param_2)) {
    if (param_4 == 0) {
      return 0;
    }
    param_3 = (undefined8 *)&UNK_10b3ad9c8;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
  }
  else {
    unaff_x24 = param_1[1];
    unaff_x20 = unaff_x24 + 1;
    uVar12 = unaff_x20 >> 3;
    uVar7 = unaff_x24;
    if (7 < unaff_x24) {
      uVar7 = uVar12 * 7;
    }
    if (uVar7 >> 1 < uVar17) {
      if (uVar17 < uVar7 + 1) {
        uVar17 = uVar7 + 1;
      }
      FUN_1039b8064(&plStack_80,0x78,uVar17);
      if (plStack_80 == (long *)0x0) {
        return uStack_78;
      }
      plVar8 = (long *)*param_1;
      if (uVar16 != 0) {
        lVar15 = 0;
        lVar18 = *plVar8;
        uVar17 = CONCAT17(-(-1 < lVar18),
                          CONCAT16(-(-1 < (char)((ulong)lVar18 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar18 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar18 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar18 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar18
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar18 >> 8)),-(-1 < (char)lVar18)))))))) &
                 0x8080808080808080;
        uVar1 = *param_3;
        uVar2 = param_3[1];
        plVar5 = plVar8;
        uVar12 = uVar16;
        do {
          while (uVar17 == 0) {
            lVar18 = plVar5[1];
            lVar15 = lVar15 + 8;
            plVar5 = plVar5 + 1;
            uVar17 = CONCAT17(-(-1 < lVar18),
                              CONCAT16(-(-1 < (char)((ulong)lVar18 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar18 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar18 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar18 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar18 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar18 >> 8)),
                                                           -(-1 < (char)lVar18)))))))) &
                     0x8080808080808080;
          }
          uVar7 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = lVar15 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3);
          uVar6 = FUN_103946c2c(uVar1,uVar2,plVar8[uVar7 * -0xf + -0xe],plVar8[uVar7 * -0xf + -0xd])
          ;
          uVar9 = uVar6 & uStack_78;
          lVar18 = *(long *)((long)plStack_80 + uVar9);
          uVar24 = CONCAT17(-(lVar18 < 0),
                            CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar18 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
          if (uVar24 == 0) {
            lVar18 = 8;
            do {
              uVar9 = uVar9 + lVar18 & uStack_78;
              lVar19 = *(long *)((long)plStack_80 + uVar9);
              uVar24 = CONCAT17(-(lVar19 < 0),
                                CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar19 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar19 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar19 >> 8) < '\0'),
                                                           -((char)lVar19 < '\0'))))))));
              lVar18 = lVar18 + 8;
            } while (uVar24 == 0);
          }
          uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
          uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
          uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
          uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
          uVar9 = uVar9 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) & uStack_78;
          if (-1 < *(char *)((long)plStack_80 + uVar9)) {
            lVar18 = *plStack_80;
            uVar9 = CONCAT17(-(lVar18 < 0),
                             CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                      CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                               CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                        CONCAT13(-((char)((ulong)lVar18 >> 0x18) <
                                                                  '\0'),CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
            uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
          }
          uVar17 = uVar17 - 1 & uVar17;
          bVar4 = (byte)(uVar6 >> 0x38);
          *(byte *)((long)plStack_80 + uVar9) = bVar4 >> 1;
          *(byte *)((long)plStack_80 + (uVar9 - 8 & uStack_78) + 8) = bVar4 >> 1;
          plVar13 = plVar8 + ~uVar7 * 0xf;
          plVar10 = plStack_80 + ~uVar9 * 0xf;
          lVar19 = plVar13[1];
          lVar18 = *plVar13;
          lVar21 = plVar13[3];
          lVar20 = plVar13[2];
          lVar22 = plVar13[4];
          lVar25 = plVar13[7];
          lVar23 = plVar13[6];
          plVar10[5] = plVar13[5];
          plVar10[4] = lVar22;
          plVar10[7] = lVar25;
          plVar10[6] = lVar23;
          plVar10[1] = lVar19;
          *plVar10 = lVar18;
          plVar10[3] = lVar21;
          plVar10[2] = lVar20;
          lVar19 = plVar13[9];
          lVar18 = plVar13[8];
          lVar21 = plVar13[0xb];
          lVar20 = plVar13[10];
          lVar23 = plVar13[0xd];
          lVar22 = plVar13[0xc];
          plVar10[0xe] = plVar13[0xe];
          plVar10[0xb] = lVar21;
          plVar10[10] = lVar20;
          plVar10[0xd] = lVar23;
          plVar10[0xc] = lVar22;
          plVar10[9] = lVar19;
          plVar10[8] = lVar18;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      *param_1 = (long)plStack_80;
      param_1[1] = uStack_78;
      param_1[2] = lStack_70 - uVar16;
      if (unaff_x24 == 0) {
        return 0x8000000000000001;
      }
      lVar15 = unaff_x24 * 0x78 + 0x78;
      if (unaff_x24 + lVar15 == -9) {
        return 0x8000000000000001;
      }
      _free((long)plVar8 - lVar15);
      return 0x8000000000000001;
    }
    plStack_a8 = param_1;
    if (unaff_x20 == 0) {
      uVar17 = 0;
      goto LAB_108951fe4;
    }
    unaff_x21 = (ulong *)*param_1;
    puVar14 = unaff_x21;
    if ((unaff_x20 & 7) != 0) {
      uVar12 = uVar12 + 1;
    }
    do {
      uVar17 = *puVar14;
      *puVar14 = CONCAT17(-((long)uVar17 < 0),
                          CONCAT16(-((char)(uVar17 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar17 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar17 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar17 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar17 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar17 >> 8) < '\0'),-((char)uVar17 < '\0'))))))))
                 | 0x8080808080808080;
      uVar12 = uVar12 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar12 != 0);
    if (7 < unaff_x20) {
      *(ulong *)((long)unaff_x21 + unaff_x20) = *unaff_x21;
      goto LAB_108951d08;
    }
  }
  _memmove(unaff_x21 + 1,unaff_x21,unaff_x20);
LAB_108951d08:
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar17 = 1;
  uVar16 = 0;
  do {
    uVar12 = uVar17;
    if (*(char *)((long)unaff_x21 + uVar16) == -0x80) {
      puVar14 = unaff_x21 + ~uVar16 * 0xf;
      while( true ) {
        uVar7 = FUN_103946c2c(uVar1,uVar2,unaff_x21[uVar16 * -0xf + -0xe],
                              unaff_x21[uVar16 * -0xf + -0xd]);
        uVar6 = unaff_x24 & uVar7;
        lVar15 = *(long *)((long)unaff_x21 + uVar6);
        uVar9 = CONCAT17(-(lVar15 < 0),
                         CONCAT16(-((char)((ulong)lVar15 >> 0x30) < '\0'),
                                  CONCAT15(-((char)((ulong)lVar15 >> 0x28) < '\0'),
                                           CONCAT14(-((char)((ulong)lVar15 >> 0x20) < '\0'),
                                                    CONCAT13(-((char)((ulong)lVar15 >> 0x18) < '\0')
                                                             ,CONCAT12(-((char)((ulong)lVar15 >>
                                                                               0x10) < '\0'),
                                                                       CONCAT11(-((char)((ulong)
                                                  lVar15 >> 8) < '\0'),-((char)lVar15 < '\0'))))))))
        ;
        uVar17 = uVar6;
        if (uVar9 == 0) {
          lVar15 = 8;
          do {
            uVar17 = uVar17 + lVar15 & unaff_x24;
            lVar18 = *(long *)((long)unaff_x21 + uVar17);
            uVar9 = CONCAT17(-(lVar18 < 0),
                             CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                      CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                               CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                        CONCAT13(-((char)((ulong)lVar18 >> 0x18) <
                                                                  '\0'),CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
            lVar15 = lVar15 + 8;
          } while (uVar9 == 0);
        }
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar17 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & unaff_x24;
        bVar4 = (byte)(uVar7 >> 0x38);
        if (*(char *)((long)unaff_x21 + uVar17) < '\0') {
          uVar7 = uVar17 - uVar6 ^ uVar16 - uVar6;
        }
        else {
          uVar17 = *unaff_x21;
          uVar17 = CONCAT17(-((long)uVar17 < 0),
                            CONCAT16(-((char)(uVar17 >> 0x30) < '\0'),
                                     CONCAT15(-((char)(uVar17 >> 0x28) < '\0'),
                                              CONCAT14(-((char)(uVar17 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)(uVar17 >> 0x18) < '\0'),
                                                                CONCAT12(-((char)(uVar17 >> 0x10) <
                                                                          '\0'),CONCAT11(-((char)(
                                                  uVar17 >> 8) < '\0'),-((char)uVar17 < '\0'))))))))
          ;
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
          uVar7 = uVar17 - uVar6 ^ uVar16 - uVar6;
        }
        if ((uVar7 & unaff_x24) < 8) {
          *(byte *)((long)unaff_x21 + uVar16) = bVar4 >> 1;
          *(byte *)((long)unaff_x21 + (unaff_x24 & uVar16 - 8) + 8) = bVar4 >> 1;
          goto LAB_108951f04;
        }
        puVar11 = unaff_x21 + ~uVar17 * 0xf;
        cVar3 = *(char *)((long)unaff_x21 + uVar17);
        *(byte *)((long)unaff_x21 + uVar17) = bVar4 >> 1;
        *(byte *)((long)unaff_x21 + (uVar17 - 8 & unaff_x24) + 8) = bVar4 >> 1;
        if (cVar3 == -1) break;
        uVar17 = *puVar14;
        *puVar14 = *puVar11;
        *puVar11 = uVar17;
        uVar17 = puVar14[1];
        puVar14[1] = puVar11[1];
        puVar11[1] = uVar17;
        uVar17 = puVar14[2];
        puVar14[2] = puVar11[2];
        puVar11[2] = uVar17;
        uVar17 = puVar14[3];
        puVar14[3] = puVar11[3];
        puVar11[3] = uVar17;
        uVar17 = puVar14[4];
        puVar14[4] = puVar11[4];
        puVar11[4] = uVar17;
        uVar17 = puVar14[5];
        puVar14[5] = puVar11[5];
        puVar11[5] = uVar17;
        uVar17 = puVar14[6];
        puVar14[6] = puVar11[6];
        puVar11[6] = uVar17;
        uVar17 = puVar14[7];
        puVar14[7] = puVar11[7];
        puVar11[7] = uVar17;
        uVar17 = puVar14[8];
        puVar14[8] = puVar11[8];
        puVar11[8] = uVar17;
        uVar17 = puVar14[9];
        puVar14[9] = puVar11[9];
        puVar11[9] = uVar17;
        uVar17 = puVar14[10];
        puVar14[10] = puVar11[10];
        puVar11[10] = uVar17;
        uVar17 = puVar14[0xb];
        puVar14[0xb] = puVar11[0xb];
        puVar11[0xb] = uVar17;
        uVar17 = puVar14[0xc];
        puVar14[0xc] = puVar11[0xc];
        puVar11[0xc] = uVar17;
        uVar17 = puVar14[0xd];
        puVar14[0xd] = puVar11[0xd];
        puVar11[0xd] = uVar17;
        uVar17 = puVar14[0xe];
        puVar14[0xe] = puVar11[0xe];
        puVar11[0xe] = uVar17;
      }
      *(undefined1 *)((long)unaff_x21 + uVar16) = 0xff;
      *(undefined1 *)((long)unaff_x21 + (unaff_x24 & uVar16 - 8) + 8) = 0xff;
      uVar16 = puVar14[1];
      uVar17 = *puVar14;
      uVar6 = puVar14[3];
      uVar7 = puVar14[2];
      uVar9 = puVar14[4];
      uVar26 = puVar14[7];
      uVar24 = puVar14[6];
      puVar11[5] = puVar14[5];
      puVar11[4] = uVar9;
      puVar11[7] = uVar26;
      puVar11[6] = uVar24;
      puVar11[1] = uVar16;
      *puVar11 = uVar17;
      puVar11[3] = uVar6;
      puVar11[2] = uVar7;
      uVar16 = puVar14[9];
      uVar17 = puVar14[8];
      uVar6 = puVar14[0xb];
      uVar7 = puVar14[10];
      uVar24 = puVar14[0xd];
      uVar9 = puVar14[0xc];
      puVar11[0xe] = puVar14[0xe];
      puVar11[0xb] = uVar6;
      puVar11[10] = uVar7;
      puVar11[0xd] = uVar24;
      puVar11[0xc] = uVar9;
      puVar11[9] = uVar16;
      puVar11[8] = uVar17;
    }
LAB_108951f04:
    if (unaff_x20 <= uVar12) break;
    uVar17 = uVar12 + 1;
    uVar16 = uVar12;
  } while( true );
  uVar17 = plStack_a8[1];
  if (7 < uVar17) {
    uVar17 = (uVar17 + 1 >> 3) * 7;
  }
  uVar16 = plStack_a8[3];
LAB_108951fe4:
  plStack_a8[2] = uVar17 - uVar16;
  return 0x8000000000000001;
}

