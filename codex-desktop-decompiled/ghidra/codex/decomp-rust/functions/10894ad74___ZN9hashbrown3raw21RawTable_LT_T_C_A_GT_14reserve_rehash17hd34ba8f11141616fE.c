
ulong __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hd34ba8f11141616fE
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
  ulong uVar17;
  ulong unaff_x25;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long *plStack_b0;
  ulong uStack_a8;
  ulong uStack_98;
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
    unaff_x25 = param_1[1];
    unaff_x20 = unaff_x25 + 1;
    uVar12 = unaff_x20 >> 3;
    uStack_98 = unaff_x25;
    if (7 < unaff_x25) {
      uStack_98 = uVar12 * 7;
    }
    if (uStack_98 >> 1 < uVar17) {
      if (uVar17 < uStack_98 + 1) {
        uVar17 = uStack_98 + 1;
      }
      FUN_103878e48(&plStack_80,0x38,uVar17);
      if (plStack_80 != (long *)0x0) {
        plVar8 = (long *)*param_1;
        if (uVar16 != 0) {
          lVar15 = 0;
          lVar18 = *plVar8;
          uVar17 = CONCAT17(-(-1 < lVar18),
                            CONCAT16(-(-1 < (char)((ulong)lVar18 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar18 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar18 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar18 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar18 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar18 >> 8)),
                                                           -(-1 < (char)lVar18)))))))) &
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
            uVar6 = func_0x0001033f7530(uVar1,uVar2,(int)plVar8[uVar7 * -7 + -7]);
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
                                                    CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar19 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar19 >> 0x10) < '\0'),
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
            plVar13 = plVar8 + ~uVar7 * 7;
            plVar10 = plStack_80 + ~uVar9 * 7;
            lVar19 = plVar13[1];
            lVar18 = *plVar13;
            lVar21 = plVar13[3];
            lVar20 = plVar13[2];
            lVar23 = plVar13[5];
            lVar22 = plVar13[4];
            plVar10[6] = plVar13[6];
            plVar10[3] = lVar21;
            plVar10[2] = lVar20;
            plVar10[5] = lVar23;
            plVar10[4] = lVar22;
            plVar10[1] = lVar19;
            *plVar10 = lVar18;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        *param_1 = (long)plStack_80;
        param_1[1] = uStack_78;
        param_1[2] = lStack_70 - uVar16;
        if ((unaff_x25 != 0) && (lVar15 = unaff_x25 * 0x38 + 0x38, unaff_x25 + lVar15 != -9)) {
          _free((long)plVar8 - lVar15);
        }
        return 0x8000000000000001;
      }
      return uStack_78;
    }
    uStack_a8 = uVar16;
    if (unaff_x20 == 0) {
      uStack_98 = 0;
LAB_10894b1ac:
      param_1[2] = uStack_98 - uStack_a8;
      return 0x8000000000000001;
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
    plStack_b0 = param_1;
    if (7 < unaff_x20) {
      *(ulong *)((long)unaff_x21 + unaff_x20) = *unaff_x21;
      goto LAB_10894af7c;
    }
  }
  _memmove(unaff_x21 + 1,unaff_x21,unaff_x20);
LAB_10894af7c:
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar17 = 1;
  uVar16 = 0;
  do {
    uVar12 = uVar17;
    if (*(char *)((long)unaff_x21 + uVar16) == -0x80) {
      puVar14 = unaff_x21 + ~uVar16 * 7;
      while( true ) {
        uVar7 = func_0x0001033f7530(uVar1,uVar2,(int)unaff_x21[uVar16 * -7 + -7]);
        uVar6 = unaff_x25 & uVar7;
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
            uVar17 = uVar17 + lVar15 & unaff_x25;
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
        uVar17 = uVar17 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & unaff_x25;
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
        if ((uVar7 & unaff_x25) < 8) {
          *(byte *)((long)unaff_x21 + uVar16) = bVar4 >> 1;
          *(byte *)((long)unaff_x21 + (unaff_x25 & uVar16 - 8) + 8) = bVar4 >> 1;
          goto LAB_10894b0fc;
        }
        puVar11 = unaff_x21 + ~uVar17 * 7;
        cVar3 = *(char *)((long)unaff_x21 + uVar17);
        *(byte *)((long)unaff_x21 + uVar17) = bVar4 >> 1;
        *(byte *)((long)unaff_x21 + (uVar17 - 8 & unaff_x25) + 8) = bVar4 >> 1;
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
      }
      *(undefined1 *)((long)unaff_x21 + uVar16) = 0xff;
      *(undefined1 *)((long)unaff_x21 + (unaff_x25 & uVar16 - 8) + 8) = 0xff;
      uVar16 = puVar14[1];
      uVar17 = *puVar14;
      uVar6 = puVar14[3];
      uVar7 = puVar14[2];
      uVar24 = puVar14[5];
      uVar9 = puVar14[4];
      puVar11[6] = puVar14[6];
      puVar11[3] = uVar6;
      puVar11[2] = uVar7;
      puVar11[5] = uVar24;
      puVar11[4] = uVar9;
      puVar11[1] = uVar16;
      *puVar11 = uVar17;
    }
LAB_10894b0fc:
    param_1 = plStack_b0;
    if (unaff_x20 <= uVar12) goto LAB_10894b1ac;
    uVar17 = uVar12 + 1;
    uVar16 = uVar12;
  } while( true );
}

