
ulong __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h46f77cb25521e3e1E
                (long *param_1,ulong param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  ulong *unaff_x25;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  ulong uStack_a0;
  long *plStack_80;
  ulong uStack_78;
  long lStack_70;
  
  uVar15 = param_1[3];
  uVar18 = uVar15 + param_2;
  if (CARRY8(uVar15,param_2)) {
    if (param_4 == 0) {
      return 0;
    }
    param_3 = (undefined8 *)&UNK_10b3ad9c8;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
  }
  else {
    uStack_a0 = param_1[1];
    unaff_x20 = uStack_a0 + 1;
    uVar12 = unaff_x20 >> 3;
    uStack_c8 = uStack_a0;
    if (7 < uStack_a0) {
      uStack_c8 = uVar12 * 7;
    }
    if (uStack_c8 >> 1 < uVar18) {
      if (uVar18 < uStack_c8 + 1) {
        uVar18 = uStack_c8 + 1;
      }
      FUN_102c3bb9c(&plStack_80,0x310,uVar18);
      if (plStack_80 != (long *)0x0) {
        plVar9 = (long *)*param_1;
        if (uVar15 != 0) {
          lVar17 = 0;
          lVar19 = *plVar9;
          uVar18 = CONCAT17(-(-1 < lVar19),
                            CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar19 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar19 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar19 >> 8)),
                                                           -(-1 < (char)lVar19)))))))) &
                   0x8080808080808080;
          uVar1 = *param_3;
          uVar2 = param_3[1];
          plVar5 = plVar9;
          uVar12 = uVar15;
          do {
            while (uVar18 == 0) {
              lVar19 = plVar5[1];
              lVar17 = lVar17 + 8;
              plVar5 = plVar5 + 1;
              uVar18 = CONCAT17(-(-1 < lVar19),
                                CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar19 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar19 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar19 >> 8)),
                                                           -(-1 < (char)lVar19)))))))) &
                       0x8080808080808080;
            }
            uVar7 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            uVar7 = lVar17 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3);
            uVar6 = FUN_102a2408c(uVar1,uVar2,plVar9[uVar7 * -0x62 + -0x61],
                                  plVar9[uVar7 * -0x62 + -0x60]);
            uVar10 = uVar6 & uStack_78;
            lVar19 = *(long *)((long)plStack_80 + uVar10);
            uVar21 = CONCAT17(-(lVar19 < 0),
                              CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar19 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar19 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar19 >> 8) < '\0'),
                                                           -((char)lVar19 < '\0'))))))));
            if (uVar21 == 0) {
              lVar19 = 8;
              do {
                uVar10 = uVar10 + lVar19 & uStack_78;
                lVar20 = *(long *)((long)plStack_80 + uVar10);
                uVar21 = CONCAT17(-(lVar20 < 0),
                                  CONCAT16(-((char)((ulong)lVar20 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar20 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar20 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar20 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar20 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar20 >> 8) < '\0'),
                                                           -((char)lVar20 < '\0'))))))));
                lVar19 = lVar19 + 8;
              } while (uVar21 == 0);
            }
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar10 = uVar10 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uStack_78;
            if (-1 < *(char *)((long)plStack_80 + uVar10)) {
              lVar19 = *plStack_80;
              uVar10 = CONCAT17(-(lVar19 < 0),
                                CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar19 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar19 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar19 >> 8) < '\0'),
                                                           -((char)lVar19 < '\0'))))))));
              uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar10 = (ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3;
            }
            uVar18 = uVar18 - 1 & uVar18;
            uVar12 = uVar12 - 1;
            bVar4 = (byte)(uVar6 >> 0x38);
            *(byte *)((long)plStack_80 + uVar10) = bVar4 >> 1;
            *(byte *)((long)plStack_80 + (uVar10 - 8 & uStack_78) + 8) = bVar4 >> 1;
            _memcpy(plStack_80 + ~uVar10 * 0x62,plVar9 + ~uVar7 * 0x62,0x310);
          } while (uVar12 != 0);
        }
        *param_1 = (long)plStack_80;
        param_1[1] = uStack_78;
        param_1[2] = lStack_70 - uVar15;
        if ((uStack_a0 != 0) && (lVar17 = uStack_a0 * 0x310 + 0x310, uStack_a0 + lVar17 != -9)) {
          _free((long)plVar9 - lVar17);
        }
        return 0x8000000000000001;
      }
      return uStack_78;
    }
    uStack_b8 = uVar15;
    if (unaff_x20 == 0) {
      uStack_c8 = 0;
LAB_10891ca58:
      param_1[2] = uStack_c8 - uStack_b8;
      return 0x8000000000000001;
    }
    unaff_x25 = (ulong *)*param_1;
    puVar13 = unaff_x25;
    if ((unaff_x20 & 7) != 0) {
      uVar12 = uVar12 + 1;
    }
    do {
      uVar18 = *puVar13;
      *puVar13 = CONCAT17(-((long)uVar18 < 0),
                          CONCAT16(-((char)(uVar18 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar18 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar18 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar18 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar18 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar18 >> 8) < '\0'),-((char)uVar18 < '\0'))))))))
                 | 0x8080808080808080;
      uVar12 = uVar12 - 1;
      puVar13 = puVar13 + 1;
    } while (uVar12 != 0);
    plStack_c0 = param_1;
    if (7 < unaff_x20) {
      *(ulong *)((long)unaff_x25 + unaff_x20) = *unaff_x25;
      goto LAB_10891c68c;
    }
  }
  _memmove(unaff_x25 + 1,unaff_x25,unaff_x20);
LAB_10891c68c:
  uVar18 = 0;
  uVar15 = 1;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  puVar13 = unaff_x25;
  do {
    if (*(char *)((long)unaff_x25 + uVar18) == -0x80) {
      puVar16 = unaff_x25 + ~uVar18 * 0x62;
      while( true ) {
        uVar7 = FUN_102a2408c(uVar1,uVar2,unaff_x25[uVar18 * -0x62 + -0x61],
                              unaff_x25[uVar18 * -0x62 + -0x60]);
        uVar6 = uStack_a0 & uVar7;
        lVar17 = *(long *)((long)unaff_x25 + uVar6);
        uVar10 = CONCAT17(-(lVar17 < 0),
                          CONCAT16(-((char)((ulong)lVar17 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar17 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar17 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar17 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar17 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar17 >> 8) < '\0'),-((char)lVar17 < '\0'))))))))
        ;
        uVar12 = uVar6;
        if (uVar10 == 0) {
          lVar17 = 8;
          do {
            uVar12 = uVar12 + lVar17 & uStack_a0;
            lVar19 = *(long *)((long)unaff_x25 + uVar12);
            uVar10 = CONCAT17(-(lVar19 < 0),
                              CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar19 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar19 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar19 >> 8) < '\0'),
                                                           -((char)lVar19 < '\0'))))))));
            lVar17 = lVar17 + 8;
          } while (uVar10 == 0);
        }
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uStack_a0;
        bVar4 = (byte)(uVar7 >> 0x38);
        if (*(char *)((long)unaff_x25 + uVar12) < '\0') {
          uVar7 = uVar12 - uVar6 ^ uVar18 - uVar6;
        }
        else {
          uVar12 = *unaff_x25;
          uVar12 = CONCAT17(-((long)uVar12 < 0),
                            CONCAT16(-((char)(uVar12 >> 0x30) < '\0'),
                                     CONCAT15(-((char)(uVar12 >> 0x28) < '\0'),
                                              CONCAT14(-((char)(uVar12 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)(uVar12 >> 0x18) < '\0'),
                                                                CONCAT12(-((char)(uVar12 >> 0x10) <
                                                                          '\0'),CONCAT11(-((char)(
                                                  uVar12 >> 8) < '\0'),-((char)uVar12 < '\0'))))))))
          ;
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
          uVar7 = uVar12 - uVar6 ^ uVar18 - uVar6;
        }
        if ((uVar7 & uStack_a0) < 8) {
          *(byte *)((long)unaff_x25 + uVar18) = bVar4 >> 1;
          *(byte *)((long)unaff_x25 + (uStack_a0 & uVar18 - 8) + 8) = bVar4 >> 1;
          goto LAB_10891c97c;
        }
        puVar8 = unaff_x25 + ~uVar12 * 0x62;
        cVar3 = *(char *)((long)unaff_x25 + uVar12);
        *(byte *)((long)unaff_x25 + uVar12) = bVar4 >> 1;
        *(byte *)((long)unaff_x25 + (uVar12 - 8 & uStack_a0) + 8) = bVar4 >> 1;
        if (cVar3 == -1) break;
        puVar11 = unaff_x25 + uVar12 * -0x62;
        if (unaff_x25 + uVar18 * -0x62 + -0x62 < puVar11 && puVar8 < unaff_x25 + uVar18 * -0x62) {
          lVar17 = 0;
        }
        else {
          uVar7 = puVar16[1];
          uVar12 = *puVar16;
          uVar10 = puVar16[3];
          uVar6 = puVar16[2];
          uVar21 = *puVar8;
          uVar23 = puVar8[3];
          uVar22 = puVar8[2];
          puVar16[1] = puVar8[1];
          *puVar16 = uVar21;
          puVar16[3] = uVar23;
          puVar16[2] = uVar22;
          puVar8[1] = uVar7;
          *puVar8 = uVar12;
          puVar8[3] = uVar10;
          puVar8[2] = uVar6;
          uVar7 = puVar16[5];
          uVar12 = puVar16[4];
          uVar10 = puVar16[7];
          uVar6 = puVar16[6];
          uVar21 = puVar8[4];
          uVar23 = puVar8[7];
          uVar22 = puVar8[6];
          puVar16[5] = puVar8[5];
          puVar16[4] = uVar21;
          puVar16[7] = uVar23;
          puVar16[6] = uVar22;
          puVar8[5] = uVar7;
          puVar8[4] = uVar12;
          puVar8[7] = uVar10;
          puVar8[6] = uVar6;
          uVar7 = puVar16[9];
          uVar12 = puVar16[8];
          uVar10 = puVar16[0xb];
          uVar6 = puVar16[10];
          uVar21 = puVar8[8];
          uVar23 = puVar8[0xb];
          uVar22 = puVar8[10];
          puVar16[9] = puVar8[9];
          puVar16[8] = uVar21;
          puVar16[0xb] = uVar23;
          puVar16[10] = uVar22;
          puVar8[9] = uVar7;
          puVar8[8] = uVar12;
          puVar8[0xb] = uVar10;
          puVar8[10] = uVar6;
          uVar7 = puVar16[0xd];
          uVar12 = puVar16[0xc];
          uVar10 = puVar16[0xf];
          uVar6 = puVar16[0xe];
          uVar21 = puVar8[0xc];
          uVar23 = puVar8[0xf];
          uVar22 = puVar8[0xe];
          puVar16[0xd] = puVar8[0xd];
          puVar16[0xc] = uVar21;
          puVar16[0xf] = uVar23;
          puVar16[0xe] = uVar22;
          puVar8[0xd] = uVar7;
          puVar8[0xc] = uVar12;
          puVar8[0xf] = uVar10;
          puVar8[0xe] = uVar6;
          uVar7 = puVar16[0x11];
          uVar12 = puVar16[0x10];
          uVar10 = puVar16[0x13];
          uVar6 = puVar16[0x12];
          uVar21 = puVar8[0x10];
          uVar23 = puVar8[0x13];
          uVar22 = puVar8[0x12];
          puVar16[0x11] = puVar8[0x11];
          puVar16[0x10] = uVar21;
          puVar16[0x13] = uVar23;
          puVar16[0x12] = uVar22;
          puVar8[0x11] = uVar7;
          puVar8[0x10] = uVar12;
          puVar8[0x13] = uVar10;
          puVar8[0x12] = uVar6;
          uVar7 = puVar16[0x15];
          uVar12 = puVar16[0x14];
          uVar10 = puVar16[0x17];
          uVar6 = puVar16[0x16];
          uVar21 = puVar8[0x14];
          uVar23 = puVar8[0x17];
          uVar22 = puVar8[0x16];
          puVar16[0x15] = puVar8[0x15];
          puVar16[0x14] = uVar21;
          puVar16[0x17] = uVar23;
          puVar16[0x16] = uVar22;
          puVar8[0x15] = uVar7;
          puVar8[0x14] = uVar12;
          puVar8[0x17] = uVar10;
          puVar8[0x16] = uVar6;
          uVar7 = puVar16[0x19];
          uVar12 = puVar16[0x18];
          uVar10 = puVar16[0x1b];
          uVar6 = puVar16[0x1a];
          uVar21 = puVar8[0x18];
          uVar23 = puVar8[0x1b];
          uVar22 = puVar8[0x1a];
          puVar16[0x19] = puVar8[0x19];
          puVar16[0x18] = uVar21;
          puVar16[0x1b] = uVar23;
          puVar16[0x1a] = uVar22;
          puVar8[0x19] = uVar7;
          puVar8[0x18] = uVar12;
          puVar8[0x1b] = uVar10;
          puVar8[0x1a] = uVar6;
          uVar7 = puVar16[0x1d];
          uVar12 = puVar16[0x1c];
          uVar10 = puVar16[0x1f];
          uVar6 = puVar16[0x1e];
          uVar21 = puVar8[0x1c];
          uVar23 = puVar8[0x1f];
          uVar22 = puVar8[0x1e];
          puVar16[0x1d] = puVar8[0x1d];
          puVar16[0x1c] = uVar21;
          puVar16[0x1f] = uVar23;
          puVar16[0x1e] = uVar22;
          puVar8[0x1d] = uVar7;
          puVar8[0x1c] = uVar12;
          puVar8[0x1f] = uVar10;
          puVar8[0x1e] = uVar6;
          uVar7 = puVar16[0x21];
          uVar12 = puVar16[0x20];
          uVar10 = puVar16[0x23];
          uVar6 = puVar16[0x22];
          uVar21 = puVar8[0x20];
          uVar23 = puVar8[0x23];
          uVar22 = puVar8[0x22];
          puVar16[0x21] = puVar8[0x21];
          puVar16[0x20] = uVar21;
          puVar16[0x23] = uVar23;
          puVar16[0x22] = uVar22;
          puVar8[0x21] = uVar7;
          puVar8[0x20] = uVar12;
          puVar8[0x23] = uVar10;
          puVar8[0x22] = uVar6;
          uVar7 = puVar16[0x25];
          uVar12 = puVar16[0x24];
          uVar10 = puVar16[0x27];
          uVar6 = puVar16[0x26];
          uVar21 = puVar8[0x24];
          uVar23 = puVar8[0x27];
          uVar22 = puVar8[0x26];
          puVar16[0x25] = puVar8[0x25];
          puVar16[0x24] = uVar21;
          puVar16[0x27] = uVar23;
          puVar16[0x26] = uVar22;
          puVar8[0x25] = uVar7;
          puVar8[0x24] = uVar12;
          puVar8[0x27] = uVar10;
          puVar8[0x26] = uVar6;
          uVar7 = puVar16[0x29];
          uVar12 = puVar16[0x28];
          uVar10 = puVar16[0x2b];
          uVar6 = puVar16[0x2a];
          uVar21 = puVar8[0x28];
          uVar23 = puVar8[0x2b];
          uVar22 = puVar8[0x2a];
          puVar16[0x29] = puVar8[0x29];
          puVar16[0x28] = uVar21;
          puVar16[0x2b] = uVar23;
          puVar16[0x2a] = uVar22;
          puVar8[0x29] = uVar7;
          puVar8[0x28] = uVar12;
          puVar8[0x2b] = uVar10;
          puVar8[0x2a] = uVar6;
          uVar7 = puVar16[0x2d];
          uVar12 = puVar16[0x2c];
          uVar10 = puVar16[0x2f];
          uVar6 = puVar16[0x2e];
          uVar21 = puVar8[0x2c];
          uVar23 = puVar8[0x2f];
          uVar22 = puVar8[0x2e];
          puVar16[0x2d] = puVar8[0x2d];
          puVar16[0x2c] = uVar21;
          puVar16[0x2f] = uVar23;
          puVar16[0x2e] = uVar22;
          puVar8[0x2d] = uVar7;
          puVar8[0x2c] = uVar12;
          puVar8[0x2f] = uVar10;
          puVar8[0x2e] = uVar6;
          uVar7 = puVar16[0x31];
          uVar12 = puVar16[0x30];
          uVar10 = puVar16[0x33];
          uVar6 = puVar16[0x32];
          uVar21 = puVar8[0x30];
          uVar23 = puVar8[0x33];
          uVar22 = puVar8[0x32];
          puVar16[0x31] = puVar8[0x31];
          puVar16[0x30] = uVar21;
          puVar16[0x33] = uVar23;
          puVar16[0x32] = uVar22;
          puVar8[0x31] = uVar7;
          puVar8[0x30] = uVar12;
          puVar8[0x33] = uVar10;
          puVar8[0x32] = uVar6;
          uVar7 = puVar16[0x35];
          uVar12 = puVar16[0x34];
          uVar10 = puVar16[0x37];
          uVar6 = puVar16[0x36];
          uVar21 = puVar8[0x34];
          uVar23 = puVar8[0x37];
          uVar22 = puVar8[0x36];
          puVar16[0x35] = puVar8[0x35];
          puVar16[0x34] = uVar21;
          puVar16[0x37] = uVar23;
          puVar16[0x36] = uVar22;
          puVar8[0x35] = uVar7;
          puVar8[0x34] = uVar12;
          puVar8[0x37] = uVar10;
          puVar8[0x36] = uVar6;
          uVar7 = puVar16[0x39];
          uVar12 = puVar16[0x38];
          uVar10 = puVar16[0x3b];
          uVar6 = puVar16[0x3a];
          uVar21 = puVar8[0x38];
          uVar23 = puVar8[0x3b];
          uVar22 = puVar8[0x3a];
          puVar16[0x39] = puVar8[0x39];
          puVar16[0x38] = uVar21;
          puVar16[0x3b] = uVar23;
          puVar16[0x3a] = uVar22;
          puVar8[0x39] = uVar7;
          puVar8[0x38] = uVar12;
          puVar8[0x3b] = uVar10;
          puVar8[0x3a] = uVar6;
          uVar7 = puVar16[0x3d];
          uVar12 = puVar16[0x3c];
          uVar10 = puVar16[0x3f];
          uVar6 = puVar16[0x3e];
          uVar21 = puVar8[0x3c];
          uVar23 = puVar8[0x3f];
          uVar22 = puVar8[0x3e];
          puVar16[0x3d] = puVar8[0x3d];
          puVar16[0x3c] = uVar21;
          puVar16[0x3f] = uVar23;
          puVar16[0x3e] = uVar22;
          puVar8[0x3d] = uVar7;
          puVar8[0x3c] = uVar12;
          puVar8[0x3f] = uVar10;
          puVar8[0x3e] = uVar6;
          uVar7 = puVar16[0x41];
          uVar12 = puVar16[0x40];
          uVar10 = puVar16[0x43];
          uVar6 = puVar16[0x42];
          uVar21 = puVar8[0x40];
          uVar23 = puVar8[0x43];
          uVar22 = puVar8[0x42];
          puVar16[0x41] = puVar8[0x41];
          puVar16[0x40] = uVar21;
          puVar16[0x43] = uVar23;
          puVar16[0x42] = uVar22;
          puVar8[0x41] = uVar7;
          puVar8[0x40] = uVar12;
          puVar8[0x43] = uVar10;
          puVar8[0x42] = uVar6;
          uVar7 = puVar16[0x45];
          uVar12 = puVar16[0x44];
          uVar10 = puVar16[0x47];
          uVar6 = puVar16[0x46];
          uVar21 = puVar8[0x44];
          uVar23 = puVar8[0x47];
          uVar22 = puVar8[0x46];
          puVar16[0x45] = puVar8[0x45];
          puVar16[0x44] = uVar21;
          puVar16[0x47] = uVar23;
          puVar16[0x46] = uVar22;
          puVar8[0x45] = uVar7;
          puVar8[0x44] = uVar12;
          puVar8[0x47] = uVar10;
          puVar8[0x46] = uVar6;
          uVar7 = puVar16[0x49];
          uVar12 = puVar16[0x48];
          uVar10 = puVar16[0x4b];
          uVar6 = puVar16[0x4a];
          uVar21 = puVar8[0x48];
          uVar23 = puVar8[0x4b];
          uVar22 = puVar8[0x4a];
          puVar16[0x49] = puVar8[0x49];
          puVar16[0x48] = uVar21;
          puVar16[0x4b] = uVar23;
          puVar16[0x4a] = uVar22;
          puVar8[0x49] = uVar7;
          puVar8[0x48] = uVar12;
          puVar8[0x4b] = uVar10;
          puVar8[0x4a] = uVar6;
          uVar7 = puVar16[0x4d];
          uVar12 = puVar16[0x4c];
          uVar10 = puVar16[0x4f];
          uVar6 = puVar16[0x4e];
          uVar21 = puVar8[0x4c];
          uVar23 = puVar8[0x4f];
          uVar22 = puVar8[0x4e];
          puVar16[0x4d] = puVar8[0x4d];
          puVar16[0x4c] = uVar21;
          puVar16[0x4f] = uVar23;
          puVar16[0x4e] = uVar22;
          puVar8[0x4d] = uVar7;
          puVar8[0x4c] = uVar12;
          puVar8[0x4f] = uVar10;
          puVar8[0x4e] = uVar6;
          uVar7 = puVar16[0x51];
          uVar12 = puVar16[0x50];
          uVar10 = puVar16[0x53];
          uVar6 = puVar16[0x52];
          uVar21 = puVar8[0x50];
          uVar23 = puVar8[0x53];
          uVar22 = puVar8[0x52];
          puVar16[0x51] = puVar8[0x51];
          puVar16[0x50] = uVar21;
          puVar16[0x53] = uVar23;
          puVar16[0x52] = uVar22;
          puVar8[0x51] = uVar7;
          puVar8[0x50] = uVar12;
          puVar8[0x53] = uVar10;
          puVar8[0x52] = uVar6;
          uVar7 = puVar16[0x55];
          uVar12 = puVar16[0x54];
          uVar10 = puVar16[0x57];
          uVar6 = puVar16[0x56];
          uVar21 = puVar8[0x54];
          uVar23 = puVar8[0x57];
          uVar22 = puVar8[0x56];
          puVar16[0x55] = puVar8[0x55];
          puVar16[0x54] = uVar21;
          puVar16[0x57] = uVar23;
          puVar16[0x56] = uVar22;
          puVar8[0x55] = uVar7;
          puVar8[0x54] = uVar12;
          puVar8[0x57] = uVar10;
          puVar8[0x56] = uVar6;
          uVar7 = puVar16[0x59];
          uVar12 = puVar16[0x58];
          uVar10 = puVar16[0x5b];
          uVar6 = puVar16[0x5a];
          uVar21 = puVar8[0x58];
          uVar23 = puVar8[0x5b];
          uVar22 = puVar8[0x5a];
          puVar16[0x59] = puVar8[0x59];
          puVar16[0x58] = uVar21;
          puVar16[0x5b] = uVar23;
          puVar16[0x5a] = uVar22;
          puVar8[0x59] = uVar7;
          puVar8[0x58] = uVar12;
          puVar8[0x5b] = uVar10;
          puVar8[0x5a] = uVar6;
          uVar12 = puVar16[0x5c];
          uVar6 = puVar16[0x5f];
          uVar7 = puVar16[0x5e];
          uVar21 = puVar8[0x5d];
          uVar10 = puVar8[0x5c];
          uVar23 = puVar8[0x5f];
          uVar22 = puVar8[0x5e];
          puVar8[0x5d] = puVar16[0x5d];
          puVar8[0x5c] = uVar12;
          puVar8[0x5f] = uVar6;
          puVar8[0x5e] = uVar7;
          lVar17 = 0x60;
          puVar16[0x5d] = uVar21;
          puVar16[0x5c] = uVar10;
          puVar16[0x5f] = uVar23;
          puVar16[0x5e] = uVar22;
        }
        lVar17 = lVar17 * 8 + -0x310;
        do {
          uVar14 = *(undefined8 *)((long)puVar13 + lVar17);
          *(undefined8 *)((long)puVar13 + lVar17) = *(undefined8 *)((long)puVar11 + lVar17);
          *(undefined8 *)((long)puVar11 + lVar17) = uVar14;
          lVar17 = lVar17 + 8;
        } while (lVar17 != 0);
      }
      *(undefined1 *)((long)unaff_x25 + uVar18) = 0xff;
      *(undefined1 *)((long)unaff_x25 + (uStack_a0 & uVar18 - 8) + 8) = 0xff;
      _memcpy(puVar8,puVar16,0x310);
    }
LAB_10891c97c:
    puVar13 = puVar13 + -0x62;
    uVar18 = uVar18 + 1;
    param_1 = plStack_c0;
    if (unaff_x20 <= uVar15) goto LAB_10891ca58;
    uVar15 = uVar15 + 1;
  } while( true );
}

