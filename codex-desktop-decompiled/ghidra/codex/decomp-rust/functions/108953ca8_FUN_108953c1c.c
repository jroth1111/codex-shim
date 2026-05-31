
ulong FUN_108953c1c(long *param_1,ulong param_2,undefined8 *param_3,int param_4,long param_5)

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
  long *plVar10;
  ulong uVar11;
  undefined *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong *puVar17;
  undefined *unaff_x20;
  ulong *unaff_x21;
  ulong uVar18;
  undefined *puVar19;
  ulong unaff_x25;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  long *plStack_e8;
  ulong uStack_e0;
  ulong uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  int aiStack_38 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar12 = (undefined *)((long)param_3 + param_2);
  if (CARRY8((ulong)param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    param_3 = (undefined8 *)param_1[1];
    if (puVar12 <= (undefined *)(*param_1 * 2)) {
      puVar12 = (undefined *)(*param_1 * 2);
    }
    puVar19 = (undefined *)0x8;
    if (param_5 != 1) {
      puVar19 = (undefined *)0x4;
    }
    unaff_x20 = puVar12;
    if (puVar12 <= puVar19) {
      unaff_x20 = puVar19;
    }
    puVar12 = unaff_x20;
    uVar9 = func_0x000108953ad4(aiStack_38);
    param_4 = (int)puVar12;
    if (aiStack_38[0] != 1) {
      *param_1 = (long)unaff_x20;
      param_1[1] = lStack_30;
      return uVar9;
    }
  }
  auVar26 = func_0x0001087c9084(lStack_30,uStack_28);
  plVar10 = auVar26._0_8_;
  uVar18 = plVar10[3];
  uVar9 = uVar18 + auVar26._8_8_;
  if (CARRY8(uVar18,auVar26._8_8_)) {
    if (param_4 == 0) {
      return 0;
    }
    param_3 = (undefined8 *)&UNK_10b3ad9c8;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
  }
  else {
    unaff_x25 = plVar10[1];
    unaff_x20 = (undefined *)(unaff_x25 + 1);
    uVar16 = (ulong)unaff_x20 >> 3;
    uStack_c8 = unaff_x25;
    if (7 < unaff_x25) {
      uStack_c8 = uVar16 * 7;
    }
    if (uStack_c8 >> 1 < uVar9) {
      if (uVar9 < uStack_c8 + 1) {
        uVar9 = uStack_c8 + 1;
      }
      FUN_1039d9c14(&plStack_c0,0x20,uVar9);
      if (plStack_c0 != (long *)0x0) {
        plVar13 = (long *)*plVar10;
        if (uVar18 != 0) {
          lVar20 = 0;
          lVar21 = *plVar13;
          uVar9 = CONCAT17(-(-1 < lVar21),
                           CONCAT16(-(-1 < (char)((ulong)lVar21 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar21 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar21 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar21 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar21
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar21 >> 8)),-(-1 < (char)lVar21)))))))) &
                  0x8080808080808080;
          uVar4 = *param_3;
          uVar5 = param_3[1];
          plVar8 = plVar13;
          uVar16 = uVar18;
          do {
            while (uVar9 == 0) {
              lVar21 = plVar8[1];
              lVar20 = lVar20 + 8;
              plVar8 = plVar8 + 1;
              uVar9 = CONCAT17(-(-1 < lVar21),
                               CONCAT16(-(-1 < (char)((ulong)lVar21 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar21 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar21 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar21 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar21 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar21 >> 8)),
                                                           -(-1 < (char)lVar21)))))))) &
                      0x8080808080808080;
            }
            uVar24 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
            uVar24 = lVar20 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
            uVar11 = FUN_1039cf2e0(uVar4,uVar5,plVar13[uVar24 * -4 + -3],plVar13[uVar24 * -4 + -2]);
            uVar14 = uVar11 & uStack_b8;
            lVar21 = *(long *)((long)plStack_c0 + uVar14);
            uVar25 = CONCAT17(-(lVar21 < 0),
                              CONCAT16(-((char)((ulong)lVar21 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar21 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar21 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar21 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar21 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar21 >> 8) < '\0'),
                                                           -((char)lVar21 < '\0'))))))));
            if (uVar25 == 0) {
              lVar21 = 8;
              do {
                uVar14 = uVar14 + lVar21 & uStack_b8;
                lVar22 = *(long *)((long)plStack_c0 + uVar14);
                uVar25 = CONCAT17(-(lVar22 < 0),
                                  CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar22 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar22 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar22 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar22 >> 8) < '\0'),
                                                           -((char)lVar22 < '\0'))))))));
                lVar21 = lVar21 + 8;
              } while (uVar25 == 0);
            }
            uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
            uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
            uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
            uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar14 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) & uStack_b8;
            if (-1 < *(char *)((long)plStack_c0 + uVar14)) {
              lVar21 = *plStack_c0;
              uVar14 = CONCAT17(-(lVar21 < 0),
                                CONCAT16(-((char)((ulong)lVar21 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar21 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar21 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar21 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar21 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar21 >> 8) < '\0'),
                                                           -((char)lVar21 < '\0'))))))));
              uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
              uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
              uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
            }
            uVar9 = uVar9 - 1 & uVar9;
            bVar7 = (byte)(uVar11 >> 0x38);
            *(byte *)((long)plStack_c0 + uVar14) = bVar7 >> 1;
            *(byte *)((long)plStack_c0 + (uVar14 - 8 & uStack_b8) + 8) = bVar7 >> 1;
            plVar1 = plVar13 + ~uVar24 * 4;
            lVar21 = *plVar1;
            lVar23 = plVar1[3];
            lVar22 = plVar1[2];
            plVar2 = plStack_c0 + ~uVar14 * 4;
            plVar2[1] = plVar1[1];
            *plVar2 = lVar21;
            plVar2[3] = lVar23;
            plVar2[2] = lVar22;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        *plVar10 = (long)plStack_c0;
        plVar10[1] = uStack_b8;
        plVar10[2] = lStack_b0 - uVar18;
        if ((unaff_x25 != 0) && (lVar20 = unaff_x25 * 0x20 + 0x20, unaff_x25 + lVar20 != -9)) {
          _free((long)plVar13 - lVar20);
        }
        return 0x8000000000000001;
      }
      return uStack_b8;
    }
    plStack_e8 = plVar10;
    uStack_e0 = uVar18;
    if (unaff_x20 == (undefined *)0x0) {
      uStack_c8 = 0;
LAB_10895404c:
      plStack_e8[2] = uStack_c8 - uStack_e0;
      return 0x8000000000000001;
    }
    unaff_x21 = (ulong *)*plVar10;
    puVar17 = unaff_x21;
    if (((ulong)unaff_x20 & 7) != 0) {
      uVar16 = uVar16 + 1;
    }
    do {
      uVar9 = *puVar17;
      *puVar17 = CONCAT17(-((long)uVar9 < 0),
                          CONCAT16(-((char)(uVar9 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar9 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar9 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar9 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar9 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar9 >> 8) < '\0'),-((char)uVar9 < '\0')))))))) |
                 0x8080808080808080;
      uVar16 = uVar16 - 1;
      puVar17 = puVar17 + 1;
    } while (uVar16 != 0);
    if ((undefined *)0x7 < unaff_x20) {
      *(ulong *)((long)unaff_x21 + (long)unaff_x20) = *unaff_x21;
      goto LAB_108953e9c;
    }
  }
  _memmove(unaff_x21 + 1,unaff_x21,unaff_x20);
LAB_108953e9c:
  uVar4 = *param_3;
  uVar5 = param_3[1];
  puVar12 = (undefined *)0x1;
  puVar19 = (undefined *)0x0;
  do {
    puVar15 = puVar12;
    if (*(char *)((long)unaff_x21 + (long)puVar19) == -0x80) {
      puVar17 = unaff_x21 + ~(ulong)puVar19 * 4;
      while( true ) {
        uVar18 = FUN_1039cf2e0(uVar4,uVar5,unaff_x21[(long)puVar19 * -4 + -3],
                               unaff_x21[(long)puVar19 * -4 + -2]);
        uVar16 = unaff_x25 & uVar18;
        lVar20 = *(long *)((long)unaff_x21 + uVar16);
        uVar24 = CONCAT17(-(lVar20 < 0),
                          CONCAT16(-((char)((ulong)lVar20 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar20 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar20 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar20 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar20 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar20 >> 8) < '\0'),-((char)lVar20 < '\0'))))))))
        ;
        uVar9 = uVar16;
        if (uVar24 == 0) {
          lVar20 = 8;
          do {
            uVar9 = uVar9 + lVar20 & unaff_x25;
            lVar21 = *(long *)((long)unaff_x21 + uVar9);
            uVar24 = CONCAT17(-(lVar21 < 0),
                              CONCAT16(-((char)((ulong)lVar21 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar21 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar21 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar21 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar21 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar21 >> 8) < '\0'),
                                                           -((char)lVar21 < '\0'))))))));
            lVar20 = lVar20 + 8;
          } while (uVar24 == 0);
        }
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) & unaff_x25;
        bVar7 = (byte)(uVar18 >> 0x38);
        if (*(char *)((long)unaff_x21 + uVar9) < '\0') {
          uVar18 = uVar9 - uVar16 ^ (long)puVar19 - uVar16;
        }
        else {
          uVar9 = *unaff_x21;
          uVar9 = CONCAT17(-((long)uVar9 < 0),
                           CONCAT16(-((char)(uVar9 >> 0x30) < '\0'),
                                    CONCAT15(-((char)(uVar9 >> 0x28) < '\0'),
                                             CONCAT14(-((char)(uVar9 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)(uVar9 >> 0x18) < '\0'),
                                                               CONCAT12(-((char)(uVar9 >> 0x10) <
                                                                         '\0'),CONCAT11(-((char)(
                                                  uVar9 >> 8) < '\0'),-((char)uVar9 < '\0'))))))));
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
          uVar18 = uVar9 - uVar16 ^ (long)puVar19 - uVar16;
        }
        if ((uVar18 & unaff_x25) < 8) {
          *(byte *)((long)unaff_x21 + (long)puVar19) = bVar7 >> 1;
          *(byte *)((long)unaff_x21 + (unaff_x25 & (ulong)(puVar19 + -8)) + 8) = bVar7 >> 1;
          goto LAB_108953fb0;
        }
        puVar3 = unaff_x21 + ~uVar9 * 4;
        cVar6 = *(char *)((long)unaff_x21 + uVar9);
        *(byte *)((long)unaff_x21 + uVar9) = bVar7 >> 1;
        *(byte *)((long)unaff_x21 + (uVar9 - 8 & unaff_x25) + 8) = bVar7 >> 1;
        if (cVar6 == -1) break;
        uVar18 = puVar17[1];
        uVar9 = *puVar17;
        uVar24 = puVar17[3];
        uVar16 = puVar17[2];
        uVar11 = *puVar3;
        uVar25 = puVar3[3];
        uVar14 = puVar3[2];
        puVar17[1] = puVar3[1];
        *puVar17 = uVar11;
        puVar17[3] = uVar25;
        puVar17[2] = uVar14;
        puVar3[1] = uVar18;
        *puVar3 = uVar9;
        puVar3[3] = uVar24;
        puVar3[2] = uVar16;
      }
      *(undefined1 *)((long)unaff_x21 + (long)puVar19) = 0xff;
      *(undefined1 *)((long)unaff_x21 + (unaff_x25 & (ulong)(puVar19 + -8)) + 8) = 0xff;
      uVar9 = *puVar17;
      uVar16 = puVar17[3];
      uVar18 = puVar17[2];
      puVar3[1] = puVar17[1];
      *puVar3 = uVar9;
      puVar3[3] = uVar16;
      puVar3[2] = uVar18;
    }
LAB_108953fb0:
    if (unaff_x20 <= puVar15) goto LAB_10895404c;
    puVar12 = puVar15 + 1;
    puVar19 = puVar15;
  } while( true );
}

