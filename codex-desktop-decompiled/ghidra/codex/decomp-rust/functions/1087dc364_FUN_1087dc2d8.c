
undefined8 FUN_1087dc2d8(long *param_1,ulong param_2,undefined8 *param_3,int param_4,long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x25;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined1 auVar24 [16];
  ulong uStack_d0;
  ulong *puStack_c8;
  ulong uStack_b0;
  int aiStack_38 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar10 = (ulong *)((long)param_3 + param_2);
  if (CARRY8((ulong)param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    param_3 = (undefined8 *)param_1[1];
    if (puVar10 <= (ulong *)(*param_1 * 2)) {
      puVar10 = (ulong *)(*param_1 * 2);
    }
    puVar19 = (ulong *)0x8;
    if (param_5 != 1) {
      puVar19 = (ulong *)0x4;
    }
    unaff_x20 = puVar10;
    if (puVar10 <= puVar19) {
      unaff_x20 = puVar19;
    }
    puVar10 = unaff_x20;
    uVar6 = func_0x0001087dc190(aiStack_38);
    param_4 = (int)puVar10;
    if (aiStack_38[0] != 1) {
      *param_1 = (long)unaff_x20;
      param_1[1] = lStack_30;
      return uVar6;
    }
  }
  auVar24 = func_0x0001087c9084(lStack_30,uStack_28);
  puVar10 = auVar24._0_8_;
  uVar18 = puVar10[3];
  uVar14 = uVar18 + auVar24._8_8_;
  if (CARRY8(uVar18,auVar24._8_8_)) goto LAB_1087dc7b0;
  unaff_x25 = puVar10[1];
  unaff_x20 = (ulong *)(unaff_x25 + 1);
  uVar13 = (ulong)unaff_x20 >> 3;
  uVar17 = unaff_x25;
  if (7 < unaff_x25) {
    uVar17 = uVar13 * 7;
  }
  if (uVar17 >> 1 < uVar14) {
    if (uVar14 < uVar17 + 1) {
      uVar14 = uVar17 + 1;
    }
    if (uVar14 < 0xf) {
      uVar13 = 4;
      if (3 < uVar14) {
        uVar13 = (uVar14 & 8) + 8;
      }
    }
    else {
      if (uVar14 >> 0x3d != 0) goto LAB_1087dc7b0;
      uVar13 = (0xffffffffffffffffU >> (LZCOUNT((uVar14 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar13;
    if (SUB168(auVar24 * ZEXT816(0x120),8) == 0) {
      unaff_x21 = (ulong *)(uVar13 + 8);
      unaff_x20 = unaff_x21 + uVar13 * 0x24;
      if ((CARRY8(uVar13 * 0x120,(ulong)unaff_x21)) || ((ulong *)0x7ffffffffffffff8 < unaff_x20))
      goto LAB_1087dc7b0;
      puVar9 = param_3;
      lVar7 = _malloc(unaff_x20);
      if (lVar7 != 0) {
        uVar17 = uVar13 - 1;
        uVar14 = uVar17;
        if (7 < uVar17) {
          uVar14 = (uVar13 >> 3) * 7;
        }
        plVar1 = (long *)(lVar7 + uVar13 * 0x120);
        _memset(plVar1,0xff,unaff_x21);
        if (uVar18 == 0) {
          plVar15 = (long *)*puVar10;
          *puVar10 = (ulong)plVar1;
          puVar10[1] = uVar17;
          puVar10[2] = uVar14;
        }
        else {
          lVar7 = 0;
          plVar15 = (long *)*puVar10;
          lVar20 = *plVar15;
          uVar13 = CONCAT17(-(-1 < lVar20),
                            CONCAT16(-(-1 < (char)((ulong)lVar20 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar20 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar20 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar20 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar20 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar20 >> 8)),
                                                           -(-1 < (char)lVar20)))))))) &
                   0x8080808080808080;
          uVar6 = *param_3;
          uVar2 = param_3[1];
          plVar5 = plVar15;
          uVar16 = uVar18;
          do {
            while (uVar13 == 0) {
              lVar20 = plVar5[1];
              lVar7 = lVar7 + 8;
              plVar5 = plVar5 + 1;
              uVar13 = CONCAT17(-(-1 < lVar20),
                                CONCAT16(-(-1 < (char)((ulong)lVar20 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar20 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar20 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar20 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar20 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar20 >> 8)),
                                                           -(-1 < (char)lVar20)))))))) &
                       0x8080808080808080;
            }
            uVar8 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            lVar20 = lVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
            uVar8 = func_0x000107c04004(uVar6,uVar2,(int)plVar15[lVar20 * -0x24 + -0x24]);
            uVar12 = uVar8 & uVar17;
            lVar21 = *(long *)((long)plVar1 + uVar12);
            uVar22 = CONCAT17(-(lVar21 < 0),
                              CONCAT16(-((char)((ulong)lVar21 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar21 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar21 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar21 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar21 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar21 >> 8) < '\0'),
                                                           -((char)lVar21 < '\0'))))))));
            if (uVar22 == 0) {
              lVar21 = 8;
              do {
                uVar12 = uVar12 + lVar21 & uVar17;
                lVar23 = *(long *)((long)plVar1 + uVar12);
                uVar22 = CONCAT17(-(lVar23 < 0),
                                  CONCAT16(-((char)((ulong)lVar23 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar23 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar23 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar23 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar23 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar23 >> 8) < '\0'),
                                                           -((char)lVar23 < '\0'))))))));
                lVar21 = lVar21 + 8;
              } while (uVar22 == 0);
            }
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar12 = uVar12 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar17;
            if (-1 < *(char *)((long)plVar1 + uVar12)) {
              lVar21 = *plVar1;
              uVar12 = CONCAT17(-(lVar21 < 0),
                                CONCAT16(-((char)((ulong)lVar21 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar21 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar21 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar21 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar21 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar21 >> 8) < '\0'),
                                                           -((char)lVar21 < '\0'))))))));
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
            }
            uVar13 = uVar13 - 1 & uVar13;
            uVar16 = uVar16 - 1;
            bVar4 = (byte)(uVar8 >> 0x38);
            *(byte *)((long)plVar1 + uVar12) = bVar4 >> 1;
            *(byte *)((long)plVar1 + (uVar12 - 8 & uVar17) + 8) = bVar4 >> 1;
            _memcpy(plVar1 + uVar12 * -0x24 + -0x24,plVar15 + lVar20 * -0x24 + -0x24,0x120);
          } while (uVar16 != 0);
          *puVar10 = (ulong)plVar1;
          puVar10[1] = uVar17;
          puVar10[2] = uVar14 - uVar18;
        }
        if ((unaff_x25 != 0) && (lVar7 = unaff_x25 * 0x120 + 0x120, unaff_x25 + lVar7 != -9)) {
          _free((long)plVar15 - lVar7);
        }
        return 0x8000000000000001;
      }
      if (param_4 == 0) {
        return 8;
      }
    }
    else {
LAB_1087dc7b0:
      if (param_4 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)&UNK_10b3ad9c8;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
    }
    func_0x0001087c906c(8,unaff_x20);
    param_3 = puVar9;
  }
  else {
    uStack_d0 = uVar18;
    puStack_c8 = puVar10;
    uStack_b0 = uVar17;
    if (unaff_x20 == (ulong *)0x0) {
LAB_1087dc5a8:
      puStack_c8[2] = uStack_b0 - uStack_d0;
      return 0x8000000000000001;
    }
    unaff_x21 = (ulong *)*puVar10;
    puVar10 = unaff_x21;
    if (((ulong)unaff_x20 & 7) != 0) {
      uVar13 = uVar13 + 1;
    }
    do {
      uVar14 = *puVar10;
      *puVar10 = CONCAT17(-((long)uVar14 < 0),
                          CONCAT16(-((char)(uVar14 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar14 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar14 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar14 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar14 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar14 >> 8) < '\0'),-((char)uVar14 < '\0'))))))))
                 | 0x8080808080808080;
      uVar13 = uVar13 - 1;
      puVar10 = puVar10 + 1;
    } while (uVar13 != 0);
    if ((ulong *)0x7 < unaff_x20) {
      *(ulong *)((long)unaff_x21 + (long)unaff_x20) = *unaff_x21;
      goto LAB_1087dc42c;
    }
  }
  _memmove(unaff_x21 + 1,unaff_x21,unaff_x20);
LAB_1087dc42c:
  uVar6 = *param_3;
  uVar2 = param_3[1];
  puVar10 = (ulong *)0x1;
  puVar19 = (ulong *)0x0;
  do {
    puVar11 = puVar10;
    if (*(char *)((long)unaff_x21 + (long)puVar19) == -0x80) {
      while( true ) {
        uVar18 = func_0x000107c04004(uVar6,uVar2,(int)unaff_x21[(long)puVar19 * -0x24 + -0x24]);
        uVar13 = uVar18 & unaff_x25;
        lVar7 = *(long *)((long)unaff_x21 + uVar13);
        uVar17 = CONCAT17(-(lVar7 < 0),
                          CONCAT16(-((char)((ulong)lVar7 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar7 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar7 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar7 >> 0x18) < '\0')
                                                              ,CONCAT12(-((char)((ulong)lVar7 >>
                                                                                0x10) < '\0'),
                                                                        CONCAT11(-((char)((ulong)
                                                  lVar7 >> 8) < '\0'),-((char)lVar7 < '\0'))))))));
        uVar14 = uVar13;
        if (uVar17 == 0) {
          lVar7 = 8;
          do {
            uVar14 = uVar14 + lVar7 & unaff_x25;
            lVar20 = *(long *)((long)unaff_x21 + uVar14);
            uVar17 = CONCAT17(-(lVar20 < 0),
                              CONCAT16(-((char)((ulong)lVar20 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar20 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar20 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar20 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar20 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar20 >> 8) < '\0'),
                                                           -((char)lVar20 < '\0'))))))));
            lVar7 = lVar7 + 8;
          } while (uVar17 == 0);
        }
        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & unaff_x25;
        bVar4 = (byte)(uVar18 >> 0x38);
        if (*(char *)((long)unaff_x21 + uVar14) < '\0') {
          uVar18 = uVar14 - uVar13 ^ (long)puVar19 - uVar13;
        }
        else {
          uVar14 = *unaff_x21;
          uVar14 = CONCAT17(-((long)uVar14 < 0),
                            CONCAT16(-((char)(uVar14 >> 0x30) < '\0'),
                                     CONCAT15(-((char)(uVar14 >> 0x28) < '\0'),
                                              CONCAT14(-((char)(uVar14 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)(uVar14 >> 0x18) < '\0'),
                                                                CONCAT12(-((char)(uVar14 >> 0x10) <
                                                                          '\0'),CONCAT11(-((char)(
                                                  uVar14 >> 8) < '\0'),-((char)uVar14 < '\0'))))))))
          ;
          uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
          uVar18 = uVar14 - uVar13 ^ (long)puVar19 - uVar13;
        }
        if ((uVar18 & unaff_x25) < 8) {
          *(byte *)((long)unaff_x21 + (long)puVar19) = bVar4 >> 1;
          *(byte *)((long)unaff_x21 + ((ulong)(puVar19 + -1) & unaff_x25) + 8) = bVar4 >> 1;
          goto LAB_1087dc548;
        }
        cVar3 = *(char *)((long)unaff_x21 + uVar14);
        *(byte *)((long)unaff_x21 + uVar14) = bVar4 >> 1;
        *(byte *)((long)unaff_x21 + (uVar14 - 8 & unaff_x25) + 8) = bVar4 >> 1;
        if (cVar3 == -1) break;
        func_0x000107c03ffc(unaff_x21 + (long)puVar19 * -0x24 + -0x24);
      }
      *(undefined1 *)((long)unaff_x21 + (long)puVar19) = 0xff;
      *(undefined1 *)((long)unaff_x21 + ((ulong)(puVar19 + -1) & unaff_x25) + 8) = 0xff;
      _memcpy(unaff_x21 + uVar14 * -0x24 + -0x24,unaff_x21 + (long)puVar19 * -0x24 + -0x24,0x120);
    }
LAB_1087dc548:
    if (unaff_x20 <= puVar11) goto LAB_1087dc5a8;
    puVar10 = (ulong *)((long)puVar11 + 1);
    puVar19 = puVar11;
  } while( true );
}

