
ulong __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h6d580482a7a70562E
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
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong unaff_x20;
  ulong *unaff_x21;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x25;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plStack_a8;
  ulong uStack_a0;
  ulong uStack_88;
  long *plStack_80;
  ulong uStack_78;
  long lStack_70;
  
  uVar12 = param_1[3];
  uVar13 = uVar12 + param_2;
  if (CARRY8(uVar12,param_2)) {
    if (param_4 == 0) {
      return 0;
    }
    param_3 = (undefined8 *)&UNK_10b3ad9c8;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
  }
  else {
    unaff_x25 = param_1[1];
    unaff_x20 = unaff_x25 + 1;
    uVar9 = unaff_x20 >> 3;
    uStack_88 = unaff_x25;
    if (7 < unaff_x25) {
      uStack_88 = uVar9 * 7;
    }
    if (uStack_88 >> 1 < uVar13) {
      if (uVar13 < uStack_88 + 1) {
        uVar13 = uStack_88 + 1;
      }
      FUN_10258c3bc(&plStack_80,0x10,uVar13);
      if (plStack_80 != (long *)0x0) {
        plVar7 = (long *)*param_1;
        if (uVar12 != 0) {
          lVar14 = 0;
          lVar15 = *plVar7;
          uVar13 = CONCAT17(-(-1 < lVar15),
                            CONCAT16(-(-1 < (char)((ulong)lVar15 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar15 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar15 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar15 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar15 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar15 >> 8)),
                                                           -(-1 < (char)lVar15)))))))) &
                   0x8080808080808080;
          uVar1 = *param_3;
          uVar2 = param_3[1];
          plVar5 = plVar7;
          uVar9 = uVar12;
          do {
            while (uVar13 == 0) {
              lVar15 = plVar5[1];
              lVar14 = lVar14 + 8;
              plVar5 = plVar5 + 1;
              uVar13 = CONCAT17(-(-1 < lVar15),
                                CONCAT16(-(-1 < (char)((ulong)lVar15 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar15 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar15 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar15 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar15 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar15 >> 8)),
                                                           -(-1 < (char)lVar15)))))))) &
                       0x8080808080808080;
            }
            uVar11 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = lVar14 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
            uVar6 = func_0x000102042f98(uVar1,uVar2,plVar7[uVar11 * -2 + -2],
                                        (plVar7 + uVar11 * -2 + -2)[1]);
            uVar8 = uVar6 & uStack_78;
            lVar15 = *(long *)((long)plStack_80 + uVar8);
            uVar17 = CONCAT17(-(lVar15 < 0),
                              CONCAT16(-((char)((ulong)lVar15 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar15 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar15 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar15 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar15 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar15 >> 8) < '\0'),
                                                           -((char)lVar15 < '\0'))))))));
            if (uVar17 == 0) {
              lVar15 = 8;
              do {
                uVar8 = uVar8 + lVar15 & uStack_78;
                lVar16 = *(long *)((long)plStack_80 + uVar8);
                uVar17 = CONCAT17(-(lVar16 < 0),
                                  CONCAT16(-((char)((ulong)lVar16 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar16 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar16 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar16 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar16 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar16 >> 8) < '\0'),
                                                           -((char)lVar16 < '\0'))))))));
                lVar15 = lVar15 + 8;
              } while (uVar17 == 0);
            }
            uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar8 = uVar8 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uStack_78;
            if (-1 < *(char *)((long)plStack_80 + uVar8)) {
              lVar15 = *plStack_80;
              uVar8 = CONCAT17(-(lVar15 < 0),
                               CONCAT16(-((char)((ulong)lVar15 >> 0x30) < '\0'),
                                        CONCAT15(-((char)((ulong)lVar15 >> 0x28) < '\0'),
                                                 CONCAT14(-((char)((ulong)lVar15 >> 0x20) < '\0'),
                                                          CONCAT13(-((char)((ulong)lVar15 >> 0x18) <
                                                                    '\0'),CONCAT12(-((char)((ulong)
                                                  lVar15 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar15 >> 8) < '\0'),
                                                           -((char)lVar15 < '\0'))))))));
              uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
              uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
              uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              uVar8 = (ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3;
            }
            uVar13 = uVar13 - 1 & uVar13;
            bVar4 = (byte)(uVar6 >> 0x38);
            *(byte *)((long)plStack_80 + uVar8) = bVar4 >> 1;
            *(byte *)((long)plStack_80 + (uVar8 - 8 & uStack_78) + 8) = bVar4 >> 1;
            lVar15 = plVar7[~uVar11 * 2];
            (plStack_80 + ~uVar8 * 2)[1] = (plVar7 + ~uVar11 * 2)[1];
            plStack_80[~uVar8 * 2] = lVar15;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        *param_1 = (long)plStack_80;
        param_1[1] = uStack_78;
        param_1[2] = lStack_70 - uVar12;
        if ((unaff_x25 != 0) && (lVar14 = unaff_x25 * 0x10 + 0x10, unaff_x25 + lVar14 != -9)) {
          _free((long)plVar7 - lVar14);
        }
        return 0x8000000000000001;
      }
      return uStack_78;
    }
    uStack_a0 = uVar12;
    if (unaff_x20 == 0) {
      uStack_88 = 0;
LAB_1088dd9e0:
      param_1[2] = uStack_88 - uStack_a0;
      return 0x8000000000000001;
    }
    unaff_x21 = (ulong *)*param_1;
    puVar10 = unaff_x21;
    if ((unaff_x20 & 7) != 0) {
      uVar9 = uVar9 + 1;
    }
    do {
      uVar13 = *puVar10;
      *puVar10 = CONCAT17(-((long)uVar13 < 0),
                          CONCAT16(-((char)(uVar13 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar13 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar13 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar13 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar13 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar13 >> 8) < '\0'),-((char)uVar13 < '\0'))))))))
                 | 0x8080808080808080;
      uVar9 = uVar9 - 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 != 0);
    plStack_a8 = param_1;
    if (7 < unaff_x20) {
      *(ulong *)((long)unaff_x21 + unaff_x20) = *unaff_x21;
      goto LAB_1088dd838;
    }
  }
  _memmove(unaff_x21 + 1,unaff_x21,unaff_x20);
LAB_1088dd838:
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar13 = 1;
  uVar12 = 0;
  do {
    uVar9 = uVar13;
    if (*(char *)((long)unaff_x21 + uVar12) == -0x80) {
      uVar13 = ~uVar12;
      while( true ) {
        uVar6 = func_0x000102042f98(uVar1,uVar2,unaff_x21[uVar12 * -2 + -2],
                                    unaff_x21[uVar12 * -2 + -1]);
        uVar8 = unaff_x25 & uVar6;
        lVar14 = *(long *)((long)unaff_x21 + uVar8);
        uVar17 = CONCAT17(-(lVar14 < 0),
                          CONCAT16(-((char)((ulong)lVar14 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar14 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar14 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar14 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar14 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar14 >> 8) < '\0'),-((char)lVar14 < '\0'))))))))
        ;
        uVar11 = uVar8;
        if (uVar17 == 0) {
          lVar14 = 8;
          do {
            uVar11 = uVar11 + lVar14 & unaff_x25;
            lVar15 = *(long *)((long)unaff_x21 + uVar11);
            uVar17 = CONCAT17(-(lVar15 < 0),
                              CONCAT16(-((char)((ulong)lVar15 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar15 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar15 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar15 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar15 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar15 >> 8) < '\0'),
                                                           -((char)lVar15 < '\0'))))))));
            lVar14 = lVar14 + 8;
          } while (uVar17 == 0);
        }
        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & unaff_x25;
        bVar4 = (byte)(uVar6 >> 0x38);
        if (*(char *)((long)unaff_x21 + uVar11) < '\0') {
          uVar6 = uVar11 - uVar8 ^ uVar12 - uVar8;
        }
        else {
          uVar11 = *unaff_x21;
          uVar11 = CONCAT17(-((long)uVar11 < 0),
                            CONCAT16(-((char)(uVar11 >> 0x30) < '\0'),
                                     CONCAT15(-((char)(uVar11 >> 0x28) < '\0'),
                                              CONCAT14(-((char)(uVar11 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)(uVar11 >> 0x18) < '\0'),
                                                                CONCAT12(-((char)(uVar11 >> 0x10) <
                                                                          '\0'),CONCAT11(-((char)(
                                                  uVar11 >> 8) < '\0'),-((char)uVar11 < '\0'))))))))
          ;
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = (ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3;
          uVar6 = uVar11 - uVar8 ^ uVar12 - uVar8;
        }
        if ((uVar6 & unaff_x25) < 8) {
          *(byte *)((long)unaff_x21 + uVar12) = bVar4 >> 1;
          *(byte *)((long)unaff_x21 + (unaff_x25 & uVar12 - 8) + 8) = bVar4 >> 1;
          goto LAB_1088dd948;
        }
        uVar6 = ~uVar11;
        cVar3 = *(char *)((long)unaff_x21 + uVar11);
        *(byte *)((long)unaff_x21 + uVar11) = bVar4 >> 1;
        *(byte *)((long)unaff_x21 + (uVar11 - 8 & unaff_x25) + 8) = bVar4 >> 1;
        if (cVar3 == -1) break;
        uVar8 = (unaff_x21 + uVar13 * 2)[1];
        uVar11 = unaff_x21[uVar13 * 2];
        uVar17 = unaff_x21[uVar6 * 2];
        (unaff_x21 + uVar13 * 2)[1] = (unaff_x21 + uVar6 * 2)[1];
        unaff_x21[uVar13 * 2] = uVar17;
        (unaff_x21 + uVar6 * 2)[1] = uVar8;
        unaff_x21[uVar6 * 2] = uVar11;
      }
      *(undefined1 *)((long)unaff_x21 + uVar12) = 0xff;
      *(undefined1 *)((long)unaff_x21 + (unaff_x25 & uVar12 - 8) + 8) = 0xff;
      uVar12 = unaff_x21[uVar13 * 2];
      (unaff_x21 + uVar6 * 2)[1] = (unaff_x21 + uVar13 * 2)[1];
      unaff_x21[uVar6 * 2] = uVar12;
    }
LAB_1088dd948:
    param_1 = plStack_a8;
    if (unaff_x20 <= uVar9) goto LAB_1088dd9e0;
    uVar13 = uVar9 + 1;
    uVar12 = uVar9;
  } while( true );
}

