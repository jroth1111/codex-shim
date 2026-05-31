
ulong __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hdff4458ee391b7a8E
                (long *param_1,ulong param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x20;
  ulong *puVar12;
  ulong *puVar13;
  ulong unaff_x25;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plStack_a8;
  long *plStack_80;
  ulong uStack_78;
  long lStack_70;
  
  puVar12 = (ulong *)param_1[3];
  uVar15 = (long)puVar12 + param_2;
  if (CARRY8((ulong)puVar12,param_2)) {
    if (param_4 == 0) {
      return 0;
    }
    param_3 = (undefined8 *)&UNK_10b3ad9c8;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
  }
  else {
    unaff_x25 = param_1[1];
    unaff_x20 = unaff_x25 + 1;
    uVar11 = unaff_x20 >> 3;
    uVar6 = unaff_x25;
    if (7 < unaff_x25) {
      uVar6 = uVar11 * 7;
    }
    if (uVar6 >> 1 < uVar15) {
      if (uVar15 < uVar6 + 1) {
        uVar15 = uVar6 + 1;
      }
      FUN_103878e48(&plStack_80,0x1b8,uVar15);
      if (plStack_80 == (long *)0x0) {
        return uStack_78;
      }
      plVar8 = (long *)*param_1;
      if (puVar12 != (ulong *)0x0) {
        lVar14 = 0;
        lVar16 = *plVar8;
        uVar15 = CONCAT17(-(-1 < lVar16),
                          CONCAT16(-(-1 < (char)((ulong)lVar16 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar16 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar16 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar16 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar16
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar16 >> 8)),-(-1 < (char)lVar16)))))))) &
                 0x8080808080808080;
        uVar1 = *param_3;
        uVar2 = param_3[1];
        plVar5 = plVar8;
        puVar13 = puVar12;
        do {
          while (uVar15 == 0) {
            lVar16 = plVar5[1];
            lVar14 = lVar14 + 8;
            plVar5 = plVar5 + 1;
            uVar15 = CONCAT17(-(-1 < lVar16),
                              CONCAT16(-(-1 < (char)((ulong)lVar16 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar16 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar16 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar16 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar16 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar16 >> 8)),
                                                           -(-1 < (char)lVar16)))))))) &
                     0x8080808080808080;
          }
          uVar11 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = lVar14 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
          uVar6 = FUN_1033f72f8(uVar1,uVar2,plVar8[uVar11 * -0x37 + -0x36],
                                plVar8[uVar11 * -0x37 + -0x35]);
          uVar9 = uVar6 & uStack_78;
          lVar16 = *(long *)((long)plStack_80 + uVar9);
          uVar10 = CONCAT17(-(lVar16 < 0),
                            CONCAT16(-((char)((ulong)lVar16 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar16 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar16 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar16 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar16 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar16 >> 8) < '\0'),
                                                           -((char)lVar16 < '\0'))))))));
          if (uVar10 == 0) {
            lVar16 = 8;
            do {
              uVar9 = uVar9 + lVar16 & uStack_78;
              lVar17 = *(long *)((long)plStack_80 + uVar9);
              uVar10 = CONCAT17(-(lVar17 < 0),
                                CONCAT16(-((char)((ulong)lVar17 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar17 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar17 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar17 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar17 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar17 >> 8) < '\0'),
                                                           -((char)lVar17 < '\0'))))))));
              lVar16 = lVar16 + 8;
            } while (uVar10 == 0);
          }
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar9 = uVar9 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uStack_78;
          if (-1 < *(char *)((long)plStack_80 + uVar9)) {
            lVar16 = *plStack_80;
            uVar9 = CONCAT17(-(lVar16 < 0),
                             CONCAT16(-((char)((ulong)lVar16 >> 0x30) < '\0'),
                                      CONCAT15(-((char)((ulong)lVar16 >> 0x28) < '\0'),
                                               CONCAT14(-((char)((ulong)lVar16 >> 0x20) < '\0'),
                                                        CONCAT13(-((char)((ulong)lVar16 >> 0x18) <
                                                                  '\0'),CONCAT12(-((char)((ulong)
                                                  lVar16 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar16 >> 8) < '\0'),
                                                           -((char)lVar16 < '\0'))))))));
            uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
          }
          uVar15 = uVar15 - 1 & uVar15;
          puVar13 = (ulong *)((long)puVar13 + -1);
          bVar4 = (byte)(uVar6 >> 0x38);
          *(byte *)((long)plStack_80 + uVar9) = bVar4 >> 1;
          *(byte *)((long)plStack_80 + (uVar9 - 8 & uStack_78) + 8) = bVar4 >> 1;
          _memcpy(plStack_80 + ~uVar9 * 0x37,plVar8 + ~uVar11 * 0x37,0x1b8);
        } while (puVar13 != (ulong *)0x0);
      }
      *param_1 = (long)plStack_80;
      param_1[1] = uStack_78;
      param_1[2] = lStack_70 - (long)puVar12;
      if (unaff_x25 == 0) {
        return 0x8000000000000001;
      }
      lVar14 = unaff_x25 * 0x1b8 + 0x1b8;
      if (unaff_x25 + lVar14 == -9) {
        return 0x8000000000000001;
      }
      _free((long)plVar8 - lVar14);
      return 0x8000000000000001;
    }
    plStack_a8 = param_1;
    if (unaff_x20 == 0) {
      uVar15 = 0;
      goto LAB_10894b970;
    }
    puVar12 = (ulong *)*param_1;
    puVar13 = puVar12;
    if ((unaff_x20 & 7) != 0) {
      uVar11 = uVar11 + 1;
    }
    do {
      uVar15 = *puVar13;
      *puVar13 = CONCAT17(-((long)uVar15 < 0),
                          CONCAT16(-((char)(uVar15 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar15 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar15 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar15 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar15 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar15 >> 8) < '\0'),-((char)uVar15 < '\0'))))))))
                 | 0x8080808080808080;
      uVar11 = uVar11 - 1;
      puVar13 = puVar13 + 1;
    } while (uVar11 != 0);
    if (7 < unaff_x20) {
      *(ulong *)((long)puVar12 + unaff_x20) = *puVar12;
      goto LAB_10894b418;
    }
  }
  _memmove(puVar12 + 1,puVar12,unaff_x20);
LAB_10894b418:
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar15 = 1;
  uVar11 = 0;
  do {
    uVar6 = uVar15;
    if (*(char *)((long)puVar12 + uVar11) == -0x80) {
      puVar13 = puVar12 + ~uVar11 * 0x37;
      while( true ) {
        uVar9 = FUN_1033f72f8(uVar1,uVar2,puVar12[uVar11 * -0x37 + -0x36],
                              puVar12[uVar11 * -0x37 + -0x35]);
        uVar10 = unaff_x25 & uVar9;
        lVar14 = *(long *)((long)puVar12 + uVar10);
        uVar18 = CONCAT17(-(lVar14 < 0),
                          CONCAT16(-((char)((ulong)lVar14 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar14 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar14 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar14 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar14 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar14 >> 8) < '\0'),-((char)lVar14 < '\0'))))))))
        ;
        uVar15 = uVar10;
        if (uVar18 == 0) {
          lVar14 = 8;
          do {
            uVar15 = uVar15 + lVar14 & unaff_x25;
            lVar16 = *(long *)((long)puVar12 + uVar15);
            uVar18 = CONCAT17(-(lVar16 < 0),
                              CONCAT16(-((char)((ulong)lVar16 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar16 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar16 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar16 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar16 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar16 >> 8) < '\0'),
                                                           -((char)lVar16 < '\0'))))))));
            lVar14 = lVar14 + 8;
          } while (uVar18 == 0);
        }
        uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & unaff_x25;
        bVar4 = (byte)(uVar9 >> 0x38);
        if (*(char *)((long)puVar12 + uVar15) < '\0') {
          uVar9 = uVar15 - uVar10 ^ uVar11 - uVar10;
        }
        else {
          uVar15 = *puVar12;
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
          uVar9 = uVar15 - uVar10 ^ uVar11 - uVar10;
        }
        if ((uVar9 & unaff_x25) < 8) {
          *(byte *)((long)puVar12 + uVar11) = bVar4 >> 1;
          *(byte *)((long)puVar12 + (unaff_x25 & uVar11 - 8) + 8) = bVar4 >> 1;
          goto LAB_10894b89c;
        }
        puVar7 = puVar12 + ~uVar15 * 0x37;
        cVar3 = *(char *)((long)puVar12 + uVar15);
        *(byte *)((long)puVar12 + uVar15) = bVar4 >> 1;
        *(byte *)((long)puVar12 + (uVar15 - 8 & unaff_x25) + 8) = bVar4 >> 1;
        if (cVar3 == -1) break;
        uVar15 = *puVar13;
        *puVar13 = *puVar7;
        *puVar7 = uVar15;
        uVar15 = puVar13[1];
        puVar13[1] = puVar7[1];
        puVar7[1] = uVar15;
        uVar15 = puVar13[2];
        puVar13[2] = puVar7[2];
        puVar7[2] = uVar15;
        uVar15 = puVar13[3];
        puVar13[3] = puVar7[3];
        puVar7[3] = uVar15;
        uVar15 = puVar13[4];
        puVar13[4] = puVar7[4];
        puVar7[4] = uVar15;
        uVar15 = puVar13[5];
        puVar13[5] = puVar7[5];
        puVar7[5] = uVar15;
        uVar15 = puVar13[6];
        puVar13[6] = puVar7[6];
        puVar7[6] = uVar15;
        uVar15 = puVar13[7];
        puVar13[7] = puVar7[7];
        puVar7[7] = uVar15;
        uVar15 = puVar13[8];
        puVar13[8] = puVar7[8];
        puVar7[8] = uVar15;
        uVar15 = puVar13[9];
        puVar13[9] = puVar7[9];
        puVar7[9] = uVar15;
        uVar15 = puVar13[10];
        puVar13[10] = puVar7[10];
        puVar7[10] = uVar15;
        uVar15 = puVar13[0xb];
        puVar13[0xb] = puVar7[0xb];
        puVar7[0xb] = uVar15;
        uVar15 = puVar13[0xc];
        puVar13[0xc] = puVar7[0xc];
        puVar7[0xc] = uVar15;
        uVar15 = puVar13[0xd];
        puVar13[0xd] = puVar7[0xd];
        puVar7[0xd] = uVar15;
        uVar15 = puVar13[0xe];
        puVar13[0xe] = puVar7[0xe];
        puVar7[0xe] = uVar15;
        uVar15 = puVar13[0xf];
        puVar13[0xf] = puVar7[0xf];
        puVar7[0xf] = uVar15;
        uVar15 = puVar13[0x10];
        puVar13[0x10] = puVar7[0x10];
        puVar7[0x10] = uVar15;
        uVar15 = puVar13[0x11];
        puVar13[0x11] = puVar7[0x11];
        puVar7[0x11] = uVar15;
        uVar15 = puVar13[0x12];
        puVar13[0x12] = puVar7[0x12];
        puVar7[0x12] = uVar15;
        uVar15 = puVar13[0x13];
        puVar13[0x13] = puVar7[0x13];
        puVar7[0x13] = uVar15;
        uVar15 = puVar13[0x14];
        puVar13[0x14] = puVar7[0x14];
        puVar7[0x14] = uVar15;
        uVar15 = puVar13[0x15];
        puVar13[0x15] = puVar7[0x15];
        puVar7[0x15] = uVar15;
        uVar15 = puVar13[0x16];
        puVar13[0x16] = puVar7[0x16];
        puVar7[0x16] = uVar15;
        uVar15 = puVar13[0x17];
        puVar13[0x17] = puVar7[0x17];
        puVar7[0x17] = uVar15;
        uVar15 = puVar13[0x18];
        puVar13[0x18] = puVar7[0x18];
        puVar7[0x18] = uVar15;
        uVar15 = puVar13[0x19];
        puVar13[0x19] = puVar7[0x19];
        puVar7[0x19] = uVar15;
        uVar15 = puVar13[0x1a];
        puVar13[0x1a] = puVar7[0x1a];
        puVar7[0x1a] = uVar15;
        uVar15 = puVar13[0x1b];
        puVar13[0x1b] = puVar7[0x1b];
        puVar7[0x1b] = uVar15;
        uVar15 = puVar13[0x1c];
        puVar13[0x1c] = puVar7[0x1c];
        puVar7[0x1c] = uVar15;
        uVar15 = puVar13[0x1d];
        puVar13[0x1d] = puVar7[0x1d];
        puVar7[0x1d] = uVar15;
        uVar15 = puVar13[0x1e];
        puVar13[0x1e] = puVar7[0x1e];
        puVar7[0x1e] = uVar15;
        uVar15 = puVar13[0x1f];
        puVar13[0x1f] = puVar7[0x1f];
        puVar7[0x1f] = uVar15;
        uVar15 = puVar13[0x20];
        puVar13[0x20] = puVar7[0x20];
        puVar7[0x20] = uVar15;
        uVar15 = puVar13[0x21];
        puVar13[0x21] = puVar7[0x21];
        puVar7[0x21] = uVar15;
        uVar15 = puVar13[0x22];
        puVar13[0x22] = puVar7[0x22];
        puVar7[0x22] = uVar15;
        uVar15 = puVar13[0x23];
        puVar13[0x23] = puVar7[0x23];
        puVar7[0x23] = uVar15;
        uVar15 = puVar13[0x24];
        puVar13[0x24] = puVar7[0x24];
        puVar7[0x24] = uVar15;
        uVar15 = puVar13[0x25];
        puVar13[0x25] = puVar7[0x25];
        puVar7[0x25] = uVar15;
        uVar15 = puVar13[0x26];
        puVar13[0x26] = puVar7[0x26];
        puVar7[0x26] = uVar15;
        uVar15 = puVar13[0x27];
        puVar13[0x27] = puVar7[0x27];
        puVar7[0x27] = uVar15;
        uVar15 = puVar13[0x28];
        puVar13[0x28] = puVar7[0x28];
        puVar7[0x28] = uVar15;
        uVar15 = puVar13[0x29];
        puVar13[0x29] = puVar7[0x29];
        puVar7[0x29] = uVar15;
        uVar15 = puVar13[0x2a];
        puVar13[0x2a] = puVar7[0x2a];
        puVar7[0x2a] = uVar15;
        uVar15 = puVar13[0x2b];
        puVar13[0x2b] = puVar7[0x2b];
        puVar7[0x2b] = uVar15;
        uVar15 = puVar13[0x2c];
        puVar13[0x2c] = puVar7[0x2c];
        puVar7[0x2c] = uVar15;
        uVar15 = puVar13[0x2d];
        puVar13[0x2d] = puVar7[0x2d];
        puVar7[0x2d] = uVar15;
        uVar15 = puVar13[0x2e];
        puVar13[0x2e] = puVar7[0x2e];
        puVar7[0x2e] = uVar15;
        uVar15 = puVar13[0x2f];
        puVar13[0x2f] = puVar7[0x2f];
        puVar7[0x2f] = uVar15;
        uVar15 = puVar13[0x30];
        puVar13[0x30] = puVar7[0x30];
        puVar7[0x30] = uVar15;
        uVar15 = puVar13[0x31];
        puVar13[0x31] = puVar7[0x31];
        puVar7[0x31] = uVar15;
        uVar15 = puVar13[0x32];
        puVar13[0x32] = puVar7[0x32];
        puVar7[0x32] = uVar15;
        uVar15 = puVar13[0x33];
        puVar13[0x33] = puVar7[0x33];
        puVar7[0x33] = uVar15;
        uVar15 = puVar13[0x34];
        puVar13[0x34] = puVar7[0x34];
        puVar7[0x34] = uVar15;
        uVar15 = puVar13[0x35];
        puVar13[0x35] = puVar7[0x35];
        puVar7[0x35] = uVar15;
        uVar15 = puVar13[0x36];
        puVar13[0x36] = puVar7[0x36];
        puVar7[0x36] = uVar15;
      }
      *(undefined1 *)((long)puVar12 + uVar11) = 0xff;
      *(undefined1 *)((long)puVar12 + (unaff_x25 & uVar11 - 8) + 8) = 0xff;
      _memcpy(puVar7,puVar13,0x1b8);
    }
LAB_10894b89c:
    if (unaff_x20 <= uVar6) break;
    uVar15 = uVar6 + 1;
    uVar11 = uVar6;
  } while( true );
  uVar15 = plStack_a8[1];
  if (7 < uVar15) {
    uVar15 = (uVar15 + 1 >> 3) * 7;
  }
  puVar12 = (ulong *)plStack_a8[3];
LAB_10894b970:
  plStack_a8[2] = uVar15 - (long)puVar12;
  return 0x8000000000000001;
}

