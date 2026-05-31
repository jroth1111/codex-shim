
ulong __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h9ab04e14df767669E
                (long *param_1,ulong param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong unaff_x20;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong unaff_x24;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long *plStack_a8;
  long *plStack_80;
  ulong uStack_78;
  long lStack_70;
  
  puVar14 = (ulong *)param_1[3];
  uVar15 = (long)puVar14 + param_2;
  if (CARRY8((ulong)puVar14,param_2)) {
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
    uVar6 = unaff_x24;
    if (7 < unaff_x24) {
      uVar6 = uVar12 * 7;
    }
    if (uVar6 >> 1 < uVar15) {
      if (uVar15 < uVar6 + 1) {
        uVar15 = uVar6 + 1;
      }
      FUN_103878e48(&plStack_80,0xb0,uVar15);
      if (plStack_80 == (long *)0x0) {
        return uStack_78;
      }
      plVar7 = (long *)*param_1;
      if (puVar14 != (ulong *)0x0) {
        lVar17 = 0;
        lVar18 = *plVar7;
        uVar15 = CONCAT17(-(-1 < lVar18),
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
        plVar5 = plVar7;
        puVar16 = puVar14;
        do {
          while (uVar15 == 0) {
            lVar18 = plVar5[1];
            lVar17 = lVar17 + 8;
            plVar5 = plVar5 + 1;
            uVar15 = CONCAT17(-(-1 < lVar18),
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
          uVar12 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = lVar17 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
          uVar6 = FUN_1033f72f8(uVar1,uVar2,plVar7[uVar12 * -0x16 + -0x15],
                                plVar7[uVar12 * -0x16 + -0x14]);
          uVar8 = uVar6 & uStack_78;
          lVar18 = *(long *)((long)plStack_80 + uVar8);
          uVar10 = CONCAT17(-(lVar18 < 0),
                            CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar18 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
          if (uVar10 == 0) {
            lVar18 = 8;
            do {
              uVar8 = uVar8 + lVar18 & uStack_78;
              lVar19 = *(long *)((long)plStack_80 + uVar8);
              uVar10 = CONCAT17(-(lVar19 < 0),
                                CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar19 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar19 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar19 >> 8) < '\0'),
                                                           -((char)lVar19 < '\0'))))))));
              lVar18 = lVar18 + 8;
            } while (uVar10 == 0);
          }
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uStack_78;
          if (-1 < *(char *)((long)plStack_80 + uVar8)) {
            lVar18 = *plStack_80;
            uVar8 = CONCAT17(-(lVar18 < 0),
                             CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                      CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                               CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                        CONCAT13(-((char)((ulong)lVar18 >> 0x18) <
                                                                  '\0'),CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
            uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
            uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar8 = (ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3;
          }
          uVar15 = uVar15 - 1 & uVar15;
          bVar4 = (byte)(uVar6 >> 0x38);
          *(byte *)((long)plStack_80 + uVar8) = bVar4 >> 1;
          *(byte *)((long)plStack_80 + (uVar8 - 8 & uStack_78) + 8) = bVar4 >> 1;
          plVar13 = plVar7 + ~uVar12 * 0x16;
          plVar9 = plStack_80 + ~uVar8 * 0x16;
          lVar19 = plVar13[1];
          lVar18 = *plVar13;
          lVar20 = plVar13[2];
          lVar22 = plVar13[5];
          lVar21 = plVar13[4];
          plVar9[3] = plVar13[3];
          plVar9[2] = lVar20;
          plVar9[5] = lVar22;
          plVar9[4] = lVar21;
          plVar9[1] = lVar19;
          *plVar9 = lVar18;
          lVar19 = plVar13[7];
          lVar18 = plVar13[6];
          lVar21 = plVar13[9];
          lVar20 = plVar13[8];
          lVar22 = plVar13[10];
          lVar26 = plVar13[0xd];
          lVar24 = plVar13[0xc];
          plVar9[0xb] = plVar13[0xb];
          plVar9[10] = lVar22;
          plVar9[0xd] = lVar26;
          plVar9[0xc] = lVar24;
          plVar9[7] = lVar19;
          plVar9[6] = lVar18;
          plVar9[9] = lVar21;
          plVar9[8] = lVar20;
          lVar19 = plVar13[0xf];
          lVar18 = plVar13[0xe];
          lVar21 = plVar13[0x11];
          lVar20 = plVar13[0x10];
          lVar22 = plVar13[0x12];
          lVar26 = plVar13[0x15];
          lVar24 = plVar13[0x14];
          plVar9[0x13] = plVar13[0x13];
          plVar9[0x12] = lVar22;
          plVar9[0x15] = lVar26;
          plVar9[0x14] = lVar24;
          plVar9[0xf] = lVar19;
          plVar9[0xe] = lVar18;
          plVar9[0x11] = lVar21;
          plVar9[0x10] = lVar20;
          puVar16 = (ulong *)((long)puVar16 + -1);
        } while (puVar16 != (ulong *)0x0);
      }
      *param_1 = (long)plStack_80;
      param_1[1] = uStack_78;
      param_1[2] = lStack_70 - (long)puVar14;
      if (unaff_x24 == 0) {
        return 0x8000000000000001;
      }
      lVar17 = unaff_x24 * 0xb0 + 0xb0;
      if (unaff_x24 + lVar17 == -9) {
        return 0x8000000000000001;
      }
      _free((long)plVar7 - lVar17);
      return 0x8000000000000001;
    }
    plStack_a8 = param_1;
    if (unaff_x20 == 0) {
      uVar15 = 0;
      goto LAB_108949040;
    }
    puVar14 = (ulong *)*param_1;
    puVar16 = puVar14;
    if ((unaff_x20 & 7) != 0) {
      uVar12 = uVar12 + 1;
    }
    do {
      uVar15 = *puVar16;
      *puVar16 = CONCAT17(-((long)uVar15 < 0),
                          CONCAT16(-((char)(uVar15 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar15 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar15 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar15 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar15 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar15 >> 8) < '\0'),-((char)uVar15 < '\0'))))))))
                 | 0x8080808080808080;
      uVar12 = uVar12 - 1;
      puVar16 = puVar16 + 1;
    } while (uVar12 != 0);
    if (7 < unaff_x20) {
      *(ulong *)((long)puVar14 + unaff_x20) = *puVar14;
      goto LAB_108948d9c;
    }
  }
  _memmove(puVar14 + 1,puVar14,unaff_x20);
LAB_108948d9c:
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar15 = 1;
  uVar12 = 0;
  do {
    uVar6 = uVar15;
    if (*(char *)((long)puVar14 + uVar12) == -0x80) {
      puVar16 = puVar14 + ~uVar12 * 0x16;
      while( true ) {
        uVar8 = FUN_1033f72f8(uVar1,uVar2,puVar14[uVar12 * -0x16 + -0x15],
                              puVar14[uVar12 * -0x16 + -0x14]);
        uVar10 = unaff_x24 & uVar8;
        lVar17 = *(long *)((long)puVar14 + uVar10);
        uVar23 = CONCAT17(-(lVar17 < 0),
                          CONCAT16(-((char)((ulong)lVar17 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar17 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar17 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar17 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar17 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar17 >> 8) < '\0'),-((char)lVar17 < '\0'))))))))
        ;
        uVar15 = uVar10;
        if (uVar23 == 0) {
          lVar17 = 8;
          do {
            uVar15 = uVar15 + lVar17 & unaff_x24;
            lVar18 = *(long *)((long)puVar14 + uVar15);
            uVar23 = CONCAT17(-(lVar18 < 0),
                              CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar18 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
            lVar17 = lVar17 + 8;
          } while (uVar23 == 0);
        }
        uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
        uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
        uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & unaff_x24;
        bVar4 = (byte)(uVar8 >> 0x38);
        if (*(char *)((long)puVar14 + uVar15) < '\0') {
          uVar8 = uVar15 - uVar10 ^ uVar12 - uVar10;
        }
        else {
          uVar15 = *puVar14;
          uVar15 = CONCAT17(-((long)uVar15 < 0),
                            CONCAT16(-((char)(uVar15 >> 0x30) < '\0'),
                                     CONCAT15(-((char)(uVar15 >> 0x28) < '\0'),
                                              CONCAT14(-((char)(uVar15 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)(uVar15 >> 0x18) < '\0'),
                                                                CONCAT12(-((char)(uVar15 >> 0x10) <
                                                                          '\0'),CONCAT11(-((char)(
                                                  uVar15 >> 8) < '\0'),-((char)uVar15 < '\0'))))))))
          ;
          uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar15 = (ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3;
          uVar8 = uVar15 - uVar10 ^ uVar12 - uVar10;
        }
        if ((uVar8 & unaff_x24) < 8) {
          *(byte *)((long)puVar14 + uVar12) = bVar4 >> 1;
          *(byte *)((long)puVar14 + (unaff_x24 & uVar12 - 8) + 8) = bVar4 >> 1;
          goto LAB_108948f58;
        }
        puVar11 = puVar14 + ~uVar15 * 0x16;
        cVar3 = *(char *)((long)puVar14 + uVar15);
        *(byte *)((long)puVar14 + uVar15) = bVar4 >> 1;
        *(byte *)((long)puVar14 + (uVar15 - 8 & unaff_x24) + 8) = bVar4 >> 1;
        if (cVar3 == -1) break;
        uVar8 = puVar16[1];
        uVar15 = *puVar16;
        uVar10 = *puVar11;
        puVar16[1] = puVar11[1];
        *puVar16 = uVar10;
        puVar11[1] = uVar8;
        *puVar11 = uVar15;
        uVar8 = puVar16[3];
        uVar15 = puVar16[2];
        uVar10 = puVar11[2];
        puVar16[3] = puVar11[3];
        puVar16[2] = uVar10;
        puVar11[3] = uVar8;
        puVar11[2] = uVar15;
        uVar8 = puVar16[5];
        uVar15 = puVar16[4];
        uVar10 = puVar11[4];
        puVar16[5] = puVar11[5];
        puVar16[4] = uVar10;
        puVar11[5] = uVar8;
        puVar11[4] = uVar15;
        uVar8 = puVar16[7];
        uVar15 = puVar16[6];
        uVar10 = puVar11[6];
        puVar16[7] = puVar11[7];
        puVar16[6] = uVar10;
        puVar11[7] = uVar8;
        puVar11[6] = uVar15;
        uVar8 = puVar16[9];
        uVar15 = puVar16[8];
        uVar10 = puVar11[8];
        puVar16[9] = puVar11[9];
        puVar16[8] = uVar10;
        puVar11[9] = uVar8;
        puVar11[8] = uVar15;
        uVar8 = puVar16[0xb];
        uVar15 = puVar16[10];
        uVar10 = puVar11[10];
        puVar16[0xb] = puVar11[0xb];
        puVar16[10] = uVar10;
        puVar11[0xb] = uVar8;
        puVar11[10] = uVar15;
        uVar8 = puVar16[0xd];
        uVar15 = puVar16[0xc];
        uVar10 = puVar11[0xc];
        puVar16[0xd] = puVar11[0xd];
        puVar16[0xc] = uVar10;
        puVar11[0xd] = uVar8;
        puVar11[0xc] = uVar15;
        uVar8 = puVar16[0xf];
        uVar15 = puVar16[0xe];
        uVar10 = puVar11[0xe];
        puVar16[0xf] = puVar11[0xf];
        puVar16[0xe] = uVar10;
        puVar11[0xf] = uVar8;
        puVar11[0xe] = uVar15;
        uVar8 = puVar16[0x11];
        uVar15 = puVar16[0x10];
        uVar10 = puVar11[0x10];
        puVar16[0x11] = puVar11[0x11];
        puVar16[0x10] = uVar10;
        puVar11[0x11] = uVar8;
        puVar11[0x10] = uVar15;
        uVar8 = puVar16[0x13];
        uVar15 = puVar16[0x12];
        uVar10 = puVar11[0x12];
        puVar16[0x13] = puVar11[0x13];
        puVar16[0x12] = uVar10;
        puVar11[0x13] = uVar8;
        puVar11[0x12] = uVar15;
        uVar8 = puVar16[0x15];
        uVar15 = puVar16[0x14];
        uVar10 = puVar11[0x14];
        puVar16[0x15] = puVar11[0x15];
        puVar16[0x14] = uVar10;
        puVar11[0x15] = uVar8;
        puVar11[0x14] = uVar15;
      }
      *(undefined1 *)((long)puVar14 + uVar12) = 0xff;
      *(undefined1 *)((long)puVar14 + (unaff_x24 & uVar12 - 8) + 8) = 0xff;
      uVar12 = puVar16[1];
      uVar15 = *puVar16;
      uVar8 = puVar16[2];
      uVar23 = puVar16[5];
      uVar10 = puVar16[4];
      puVar11[3] = puVar16[3];
      puVar11[2] = uVar8;
      puVar11[5] = uVar23;
      puVar11[4] = uVar10;
      puVar11[1] = uVar12;
      *puVar11 = uVar15;
      uVar12 = puVar16[7];
      uVar15 = puVar16[6];
      uVar10 = puVar16[9];
      uVar8 = puVar16[8];
      uVar23 = puVar16[10];
      uVar27 = puVar16[0xd];
      uVar25 = puVar16[0xc];
      puVar11[0xb] = puVar16[0xb];
      puVar11[10] = uVar23;
      puVar11[0xd] = uVar27;
      puVar11[0xc] = uVar25;
      puVar11[7] = uVar12;
      puVar11[6] = uVar15;
      puVar11[9] = uVar10;
      puVar11[8] = uVar8;
      uVar12 = puVar16[0xf];
      uVar15 = puVar16[0xe];
      uVar10 = puVar16[0x11];
      uVar8 = puVar16[0x10];
      uVar23 = puVar16[0x12];
      uVar27 = puVar16[0x15];
      uVar25 = puVar16[0x14];
      puVar11[0x13] = puVar16[0x13];
      puVar11[0x12] = uVar23;
      puVar11[0x15] = uVar27;
      puVar11[0x14] = uVar25;
      puVar11[0xf] = uVar12;
      puVar11[0xe] = uVar15;
      puVar11[0x11] = uVar10;
      puVar11[0x10] = uVar8;
    }
LAB_108948f58:
    if (unaff_x20 <= uVar6) break;
    uVar15 = uVar6 + 1;
    uVar12 = uVar6;
  } while( true );
  uVar15 = plStack_a8[1];
  if (7 < uVar15) {
    uVar15 = (uVar15 + 1 >> 3) * 7;
  }
  puVar14 = (ulong *)plStack_a8[3];
LAB_108949040:
  plStack_a8[2] = uVar15 - (long)puVar14;
  return 0x8000000000000001;
}

