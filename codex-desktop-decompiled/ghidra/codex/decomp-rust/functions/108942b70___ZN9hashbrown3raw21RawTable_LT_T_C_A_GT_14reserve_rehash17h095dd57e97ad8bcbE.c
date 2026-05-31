
ulong __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h095dd57e97ad8bcbE
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
  long lVar15;
  ulong unaff_x20;
  ulong *unaff_x21;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x26;
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
  ulong uStack_a0;
  ulong uStack_90;
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
    unaff_x26 = param_1[1];
    unaff_x20 = unaff_x26 + 1;
    uVar13 = unaff_x20 >> 3;
    uStack_90 = unaff_x26;
    if (7 < unaff_x26) {
      uStack_90 = uVar13 * 7;
    }
    if (uStack_90 >> 1 < uVar17) {
      if (uVar17 < uStack_90 + 1) {
        uVar17 = uStack_90 + 1;
      }
      FUN_103878e48(&plStack_80,0x40,uVar17);
      if (plStack_80 != (long *)0x0) {
        plVar11 = (long *)*param_1;
        if (uVar16 != 0) {
          lVar15 = 0;
          lVar18 = *plVar11;
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
          uVar4 = *param_3;
          uVar5 = param_3[1];
          plVar8 = plVar11;
          uVar13 = uVar16;
          do {
            while (uVar17 == 0) {
              lVar18 = plVar8[1];
              lVar15 = lVar15 + 8;
              plVar8 = plVar8 + 1;
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
            uVar10 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar10 = lVar15 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3);
            uVar9 = FUN_1033f7174(uVar4,uVar5,plVar11 + uVar10 * -8 + -8);
            uVar12 = uVar9 & uStack_78;
            lVar18 = *(long *)((long)plStack_80 + uVar12);
            uVar23 = CONCAT17(-(lVar18 < 0),
                              CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar18 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
            if (uVar23 == 0) {
              lVar18 = 8;
              do {
                uVar12 = uVar12 + lVar18 & uStack_78;
                lVar19 = *(long *)((long)plStack_80 + uVar12);
                uVar23 = CONCAT17(-(lVar19 < 0),
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
              } while (uVar23 == 0);
            }
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar12 = uVar12 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & uStack_78;
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
            uVar17 = uVar17 - 1 & uVar17;
            bVar7 = (byte)(uVar9 >> 0x38);
            *(byte *)((long)plStack_80 + uVar12) = bVar7 >> 1;
            *(byte *)((long)plStack_80 + (uVar12 - 8 & uStack_78) + 8) = bVar7 >> 1;
            plVar1 = plVar11 + ~uVar10 * 8;
            lVar19 = plVar1[1];
            lVar18 = *plVar1;
            lVar21 = plVar1[3];
            lVar20 = plVar1[2];
            lVar22 = plVar1[4];
            lVar26 = plVar1[7];
            lVar24 = plVar1[6];
            plVar2 = plStack_80 + ~uVar12 * 8;
            plVar2[5] = plVar1[5];
            plVar2[4] = lVar22;
            plVar2[7] = lVar26;
            plVar2[6] = lVar24;
            plVar2[1] = lVar19;
            *plVar2 = lVar18;
            plVar2[3] = lVar21;
            plVar2[2] = lVar20;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        *param_1 = (long)plStack_80;
        param_1[1] = uStack_78;
        param_1[2] = lStack_70 - uVar16;
        if ((unaff_x26 != 0) && (lVar15 = unaff_x26 * 0x40 + 0x40, unaff_x26 + lVar15 != -9)) {
          _free((long)plVar11 - lVar15);
        }
        return 0x8000000000000001;
      }
      return uStack_78;
    }
    uStack_a0 = uVar16;
    if (unaff_x20 == 0) {
      uStack_90 = 0;
LAB_108942f3c:
      param_1[2] = uStack_90 - uStack_a0;
      return 0x8000000000000001;
    }
    unaff_x21 = (ulong *)*param_1;
    puVar14 = unaff_x21;
    if ((unaff_x20 & 7) != 0) {
      uVar13 = uVar13 + 1;
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
      uVar13 = uVar13 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar13 != 0);
    plStack_a8 = param_1;
    if (7 < unaff_x20) {
      *(ulong *)((long)unaff_x21 + unaff_x20) = *unaff_x21;
      goto LAB_108942d68;
    }
  }
  _memmove(unaff_x21 + 1,unaff_x21,unaff_x20);
LAB_108942d68:
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar17 = 1;
  uVar16 = 0;
  do {
    uVar13 = uVar17;
    if (*(char *)((long)unaff_x21 + uVar16) == -0x80) {
      puVar14 = unaff_x21 + ~uVar16 * 8;
      while( true ) {
        uVar10 = FUN_1033f7174(uVar4,uVar5,unaff_x21 + uVar16 * -8 + -8);
        uVar9 = unaff_x26 & uVar10;
        lVar15 = *(long *)((long)unaff_x21 + uVar9);
        uVar12 = CONCAT17(-(lVar15 < 0),
                          CONCAT16(-((char)((ulong)lVar15 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar15 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar15 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar15 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar15 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar15 >> 8) < '\0'),-((char)lVar15 < '\0'))))))))
        ;
        uVar17 = uVar9;
        if (uVar12 == 0) {
          lVar15 = 8;
          do {
            uVar17 = uVar17 + lVar15 & unaff_x26;
            lVar18 = *(long *)((long)unaff_x21 + uVar17);
            uVar12 = CONCAT17(-(lVar18 < 0),
                              CONCAT16(-((char)((ulong)lVar18 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar18 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar18 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar18 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar18 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar18 >> 8) < '\0'),
                                                           -((char)lVar18 < '\0'))))))));
            lVar15 = lVar15 + 8;
          } while (uVar12 == 0);
        }
        uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar17 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & unaff_x26;
        bVar7 = (byte)(uVar10 >> 0x38);
        if (*(char *)((long)unaff_x21 + uVar17) < '\0') {
          uVar10 = uVar17 - uVar9 ^ uVar16 - uVar9;
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
          uVar10 = uVar17 - uVar9 ^ uVar16 - uVar9;
        }
        if ((uVar10 & unaff_x26) < 8) {
          *(byte *)((long)unaff_x21 + uVar16) = bVar7 >> 1;
          *(byte *)((long)unaff_x21 + (unaff_x26 & uVar16 - 8) + 8) = bVar7 >> 1;
          goto LAB_108942e94;
        }
        puVar3 = unaff_x21 + ~uVar17 * 8;
        cVar6 = *(char *)((long)unaff_x21 + uVar17);
        *(byte *)((long)unaff_x21 + uVar17) = bVar7 >> 1;
        *(byte *)((long)unaff_x21 + (uVar17 - 8 & unaff_x26) + 8) = bVar7 >> 1;
        if (cVar6 == -1) break;
        uVar10 = puVar14[1];
        uVar17 = *puVar14;
        uVar12 = puVar14[3];
        uVar9 = puVar14[2];
        uVar23 = *puVar3;
        uVar27 = puVar3[3];
        uVar25 = puVar3[2];
        puVar14[1] = puVar3[1];
        *puVar14 = uVar23;
        puVar14[3] = uVar27;
        puVar14[2] = uVar25;
        puVar3[1] = uVar10;
        *puVar3 = uVar17;
        puVar3[3] = uVar12;
        puVar3[2] = uVar9;
        uVar10 = puVar14[5];
        uVar17 = puVar14[4];
        uVar12 = puVar14[7];
        uVar9 = puVar14[6];
        uVar23 = puVar3[4];
        uVar27 = puVar3[7];
        uVar25 = puVar3[6];
        puVar14[5] = puVar3[5];
        puVar14[4] = uVar23;
        puVar14[7] = uVar27;
        puVar14[6] = uVar25;
        puVar3[5] = uVar10;
        puVar3[4] = uVar17;
        puVar3[7] = uVar12;
        puVar3[6] = uVar9;
      }
      *(undefined1 *)((long)unaff_x21 + uVar16) = 0xff;
      *(undefined1 *)((long)unaff_x21 + (unaff_x26 & uVar16 - 8) + 8) = 0xff;
      uVar16 = puVar14[1];
      uVar17 = *puVar14;
      uVar9 = puVar14[3];
      uVar10 = puVar14[2];
      uVar12 = puVar14[4];
      uVar25 = puVar14[7];
      uVar23 = puVar14[6];
      puVar3[5] = puVar14[5];
      puVar3[4] = uVar12;
      puVar3[7] = uVar25;
      puVar3[6] = uVar23;
      puVar3[1] = uVar16;
      *puVar3 = uVar17;
      puVar3[3] = uVar9;
      puVar3[2] = uVar10;
    }
LAB_108942e94:
    param_1 = plStack_a8;
    if (unaff_x20 <= uVar13) goto LAB_108942f3c;
    uVar17 = uVar13 + 1;
    uVar16 = uVar13;
  } while( true );
}

