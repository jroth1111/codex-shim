
ulong __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17ha18c7111e031a63fE
                (long *param_1,ulong param_2,undefined8 *param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  byte bVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong unaff_x20;
  ulong *unaff_x21;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x25;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plStack_a8;
  ulong uStack_a0;
  ulong uStack_88;
  long *plStack_80;
  ulong uStack_78;
  long lStack_70;
  
  uVar15 = param_1[3];
  uVar16 = uVar15 + param_2;
  if (CARRY8(uVar15,param_2)) {
    if (param_4 == 0) {
      return 0;
    }
    param_3 = (undefined8 *)&UNK_10b3ad9c8;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
  }
  else {
    unaff_x25 = param_1[1];
    unaff_x20 = unaff_x25 + 1;
    uVar13 = unaff_x20 >> 3;
    uStack_88 = unaff_x25;
    if (7 < unaff_x25) {
      uStack_88 = uVar13 * 7;
    }
    if (uStack_88 >> 1 < uVar16) {
      if (uVar16 < uStack_88 + 1) {
        uVar16 = uStack_88 + 1;
      }
      FUN_103b92c1c(&plStack_80,0x20,uVar16);
      if (plStack_80 != (long *)0x0) {
        plVar11 = (long *)*param_1;
        if (uVar15 != 0) {
          lVar17 = 0;
          lVar18 = *plVar11;
          uVar16 = CONCAT17(-(-1 < lVar18),
                            CONCAT16(-(-1 < (char)((ulong)lVar18 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar18 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar18 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar18 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar18 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar18 >> 8)),
                                                           -(-1 < (char)lVar18)))))))) &
                   0x8080808080808080;
          uVar4 = *param_3;
          uVar5 = param_3[1];
          plVar8 = plVar11;
          uVar13 = uVar15;
          do {
            while (uVar16 == 0) {
              lVar18 = plVar8[1];
              lVar17 = lVar17 + 8;
              plVar8 = plVar8 + 1;
              uVar16 = CONCAT17(-(-1 < lVar18),
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
            uVar10 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar10 = lVar17 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3);
            uVar9 = FUN_103b1b21c(uVar4,uVar5,plVar11[uVar10 * -4 + -3],plVar11[uVar10 * -4 + -2]);
            uVar12 = uVar9 & uStack_78;
            lVar18 = *(long *)((long)plStack_80 + uVar12);
            uVar21 = CONCAT17(-(lVar18 < 0),
                              CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar18 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
            if (uVar21 == 0) {
              lVar18 = 8;
              do {
                uVar12 = uVar12 + lVar18 & uStack_78;
                lVar19 = *(long *)((long)plStack_80 + uVar12);
                uVar21 = CONCAT17(-(lVar19 < 0),
                                  CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar19 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar19 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar19 >> 8) < '\0'),
                                                           -((char)lVar19 < '\0'))))))));
                lVar18 = lVar18 + 8;
              } while (uVar21 == 0);
            }
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar12 = uVar12 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uStack_78;
            if (-1 < *(char *)((long)plStack_80 + uVar12)) {
              lVar18 = *plStack_80;
              uVar12 = CONCAT17(-(lVar18 < 0),
                                CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar18 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
            }
            uVar16 = uVar16 - 1 & uVar16;
            bVar7 = (byte)(uVar9 >> 0x38);
            *(byte *)((long)plStack_80 + uVar12) = bVar7 >> 1;
            *(byte *)((long)plStack_80 + (uVar12 - 8 & uStack_78) + 8) = bVar7 >> 1;
            plVar1 = plVar11 + ~uVar10 * 4;
            lVar18 = *plVar1;
            lVar20 = plVar1[3];
            lVar19 = plVar1[2];
            plVar2 = plStack_80 + ~uVar12 * 4;
            plVar2[1] = plVar1[1];
            *plVar2 = lVar18;
            plVar2[3] = lVar20;
            plVar2[2] = lVar19;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        *param_1 = (long)plStack_80;
        param_1[1] = uStack_78;
        param_1[2] = lStack_70 - uVar15;
        if ((unaff_x25 != 0) && (lVar17 = unaff_x25 * 0x20 + 0x20, unaff_x25 + lVar17 != -9)) {
          _free((long)plVar11 - lVar17);
        }
        return 0x8000000000000001;
      }
      return uStack_78;
    }
    uStack_a0 = uVar15;
    if (unaff_x20 == 0) {
      uStack_88 = 0;
LAB_108966bb0:
      param_1[2] = uStack_88 - uStack_a0;
      return 0x8000000000000001;
    }
    unaff_x21 = (ulong *)*param_1;
    puVar14 = unaff_x21;
    if ((unaff_x20 & 7) != 0) {
      uVar13 = uVar13 + 1;
    }
    do {
      uVar16 = *puVar14;
      *puVar14 = CONCAT17(-((long)uVar16 < 0),
                          CONCAT16(-((char)(uVar16 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar16 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar16 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar16 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar16 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar16 >> 8) < '\0'),-((char)uVar16 < '\0'))))))))
                 | 0x8080808080808080;
      uVar13 = uVar13 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar13 != 0);
    plStack_a8 = param_1;
    if (7 < unaff_x20) {
      *(ulong *)((long)unaff_x21 + unaff_x20) = *unaff_x21;
      goto LAB_108966a00;
    }
  }
  _memmove(unaff_x21 + 1,unaff_x21,unaff_x20);
LAB_108966a00:
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar16 = 1;
  uVar15 = 0;
  do {
    uVar13 = uVar16;
    if (*(char *)((long)unaff_x21 + uVar15) == -0x80) {
      puVar14 = unaff_x21 + ~uVar15 * 4;
      while( true ) {
        uVar10 = FUN_103b1b21c(uVar4,uVar5,unaff_x21[uVar15 * -4 + -3],unaff_x21[uVar15 * -4 + -2]);
        uVar9 = unaff_x25 & uVar10;
        lVar17 = *(long *)((long)unaff_x21 + uVar9);
        uVar12 = CONCAT17(-(lVar17 < 0),
                          CONCAT16(-((char)((ulong)lVar17 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar17 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar17 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar17 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar17 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar17 >> 8) < '\0'),-((char)lVar17 < '\0'))))))))
        ;
        uVar16 = uVar9;
        if (uVar12 == 0) {
          lVar17 = 8;
          do {
            uVar16 = uVar16 + lVar17 & unaff_x25;
            lVar18 = *(long *)((long)unaff_x21 + uVar16);
            uVar12 = CONCAT17(-(lVar18 < 0),
                              CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar18 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
            lVar17 = lVar17 + 8;
          } while (uVar12 == 0);
        }
        uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar16 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & unaff_x25;
        bVar7 = (byte)(uVar10 >> 0x38);
        if (*(char *)((long)unaff_x21 + uVar16) < '\0') {
          uVar10 = uVar16 - uVar9 ^ uVar15 - uVar9;
        }
        else {
          uVar16 = *unaff_x21;
          uVar16 = CONCAT17(-((long)uVar16 < 0),
                            CONCAT16(-((char)(uVar16 >> 0x30) < '\0'),
                                     CONCAT15(-((char)(uVar16 >> 0x28) < '\0'),
                                              CONCAT14(-((char)(uVar16 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)(uVar16 >> 0x18) < '\0'),
                                                                CONCAT12(-((char)(uVar16 >> 0x10) <
                                                                          '\0'),CONCAT11(-((char)(
                                                  uVar16 >> 8) < '\0'),-((char)uVar16 < '\0'))))))))
          ;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
          uVar10 = uVar16 - uVar9 ^ uVar15 - uVar9;
        }
        if ((uVar10 & unaff_x25) < 8) {
          *(byte *)((long)unaff_x21 + uVar15) = bVar7 >> 1;
          *(byte *)((long)unaff_x21 + (unaff_x25 & uVar15 - 8) + 8) = bVar7 >> 1;
          goto LAB_108966b14;
        }
        puVar3 = unaff_x21 + ~uVar16 * 4;
        cVar6 = *(char *)((long)unaff_x21 + uVar16);
        *(byte *)((long)unaff_x21 + uVar16) = bVar7 >> 1;
        *(byte *)((long)unaff_x21 + (uVar16 - 8 & unaff_x25) + 8) = bVar7 >> 1;
        if (cVar6 == -1) break;
        uVar10 = puVar14[1];
        uVar16 = *puVar14;
        uVar12 = puVar14[3];
        uVar9 = puVar14[2];
        uVar21 = *puVar3;
        uVar23 = puVar3[3];
        uVar22 = puVar3[2];
        puVar14[1] = puVar3[1];
        *puVar14 = uVar21;
        puVar14[3] = uVar23;
        puVar14[2] = uVar22;
        puVar3[1] = uVar10;
        *puVar3 = uVar16;
        puVar3[3] = uVar12;
        puVar3[2] = uVar9;
      }
      *(undefined1 *)((long)unaff_x21 + uVar15) = 0xff;
      *(undefined1 *)((long)unaff_x21 + (unaff_x25 & uVar15 - 8) + 8) = 0xff;
      uVar16 = *puVar14;
      uVar10 = puVar14[3];
      uVar15 = puVar14[2];
      puVar3[1] = puVar14[1];
      *puVar3 = uVar16;
      puVar3[3] = uVar10;
      puVar3[2] = uVar15;
    }
LAB_108966b14:
    param_1 = plStack_a8;
    if (unaff_x20 <= uVar13) goto LAB_108966bb0;
    uVar16 = uVar13 + 1;
    uVar15 = uVar13;
  } while( true );
}

