
undefined8 FUN_108a32978(long param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong unaff_x23;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  ulong uStack_98;
  ulong *puStack_90;
  ulong uStack_80;
  
  uVar7 = *(ulong *)(param_1 + 0x10);
  if ((uVar7 < 6) || (uVar7 = *(ulong *)(param_1 + 8), uVar7 != 0xffffffffffffffff)) {
    uVar18 = 0;
    if (uVar7 != 0) {
      uVar18 = 0xffffffffffffffff >> (LZCOUNT(uVar7) & 0x3fU);
    }
    if (uVar18 == 0xffffffffffffffff) goto LAB_108a329d0;
    lVar5 = func_0x000105aba5c8(param_1,uVar18 + 1);
    if (lVar5 == -0x7fffffffffffffff) {
      return 0x8000000000000001;
    }
  }
  else {
LAB_108a329d0:
    param_3 = &UNK_10b407598;
    lVar5 = func_0x000108a079f0(&UNK_109b16850,0x11);
  }
  if (lVar5 == 0) {
    param_3 = &UNK_10b407580;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b16850,0x11);
  }
  auVar23 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E();
  puVar12 = auVar23._0_8_;
  uVar18 = puVar12[3];
  uVar7 = uVar18 + auVar23._8_8_;
  if (CARRY8(uVar18,auVar23._8_8_)) goto LAB_108a32e64;
  unaff_x23 = puVar12[1];
  unaff_x21 = (ulong *)(unaff_x23 + 1);
  uVar11 = (ulong)unaff_x21 >> 3;
  uVar17 = unaff_x23;
  if (7 < unaff_x23) {
    uVar17 = uVar11 * 7;
  }
  if (uVar17 >> 1 < uVar7) {
    if (uVar7 < uVar17 + 1) {
      uVar7 = uVar17 + 1;
    }
    if (uVar7 < 0xf) {
      uVar11 = 4;
      if (3 < uVar7) {
        uVar11 = (uVar7 & 8) + 8;
      }
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_108a32e64;
      uVar11 = (0xffffffffffffffffU >> (LZCOUNT((uVar7 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar11;
    if (SUB168(auVar23 * ZEXT816(0x18),8) == 0) {
      unaff_x22 = (ulong *)(uVar11 + 8);
      unaff_x21 = unaff_x22 + uVar11 * 3;
      if ((CARRY8(uVar11 * 0x18,(ulong)unaff_x22)) || ((ulong *)0x7ffffffffffffff8 < unaff_x21))
      goto LAB_108a32e64;
      lVar5 = _malloc(unaff_x21);
      if (lVar5 != 0) {
        uVar17 = uVar11 - 1;
        uVar7 = uVar17;
        if (7 < uVar17) {
          uVar7 = (uVar11 >> 3) * 7;
        }
        plVar1 = (long *)(lVar5 + uVar11 * 0x18);
        _memset(plVar1,0xff,unaff_x22);
        if (uVar18 == 0) {
          plVar15 = (long *)*puVar12;
          *puVar12 = (ulong)plVar1;
          puVar12[1] = uVar17;
          puVar12[2] = uVar7;
        }
        else {
          lVar5 = 0;
          plVar15 = (long *)*puVar12;
          lVar20 = *plVar15;
          uVar11 = CONCAT17(-(-1 < lVar20),
                            CONCAT16(-(-1 < (char)((ulong)lVar20 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar20 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar20 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar20 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar20 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar20 >> 8)),
                                                           -(-1 < (char)lVar20)))))))) &
                   0x8080808080808080;
          plVar4 = plVar15;
          uVar19 = uVar18;
          do {
            while (uVar11 == 0) {
              lVar20 = plVar4[1];
              lVar5 = lVar5 + 8;
              plVar4 = plVar4 + 1;
              uVar11 = CONCAT17(-(-1 < lVar20),
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
            uVar6 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            lVar20 = lVar5 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
            uVar6 = FUN_105ab05a0(param_3,plVar15[lVar20 * -3 + -2],plVar15[lVar20 * -3 + -1]);
            uVar9 = uVar6 & uVar17;
            lVar21 = *(long *)((long)plVar1 + uVar9);
            uVar14 = CONCAT17(-(lVar21 < 0),
                              CONCAT16(-((char)((ulong)lVar21 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar21 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar21 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar21 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar21 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar21 >> 8) < '\0'),
                                                           -((char)lVar21 < '\0'))))))));
            if (uVar14 == 0) {
              lVar21 = 8;
              do {
                uVar9 = uVar9 + lVar21 & uVar17;
                lVar22 = *(long *)((long)plVar1 + uVar9);
                uVar14 = CONCAT17(-(lVar22 < 0),
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
              } while (uVar14 == 0);
            }
            uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
            uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
            uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar17;
            if (-1 < *(char *)((long)plVar1 + uVar9)) {
              lVar21 = *plVar1;
              uVar9 = CONCAT17(-(lVar21 < 0),
                               CONCAT16(-((char)((ulong)lVar21 >> 0x30) < '\0'),
                                        CONCAT15(-((char)((ulong)lVar21 >> 0x28) < '\0'),
                                                 CONCAT14(-((char)((ulong)lVar21 >> 0x20) < '\0'),
                                                          CONCAT13(-((char)((ulong)lVar21 >> 0x18) <
                                                                    '\0'),CONCAT12(-((char)((ulong)
                                                  lVar21 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar21 >> 8) < '\0'),
                                                           -((char)lVar21 < '\0'))))))));
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
            }
            uVar11 = uVar11 - 1 & uVar11;
            bVar3 = (byte)(uVar6 >> 0x38);
            *(byte *)((long)plVar1 + uVar9) = bVar3 >> 1;
            *(byte *)((long)plVar1 + (uVar9 - 8 & uVar17) + 8) = bVar3 >> 1;
            plVar13 = plVar15 + lVar20 * -3 + -3;
            lVar21 = plVar13[1];
            lVar20 = *plVar13;
            plVar10 = plVar1 + uVar9 * -3 + -3;
            plVar10[2] = plVar13[2];
            plVar10[1] = lVar21;
            *plVar10 = lVar20;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
          *puVar12 = (ulong)plVar1;
          puVar12[1] = uVar17;
          puVar12[2] = uVar7 - uVar18;
        }
        if ((unaff_x23 != 0) && (lVar5 = unaff_x23 * 0x18 + 0x18, unaff_x23 + lVar5 != -9)) {
          _free((long)plVar15 - lVar5);
        }
        return 0x8000000000000001;
      }
      if (param_4 == 0) {
        return 8;
      }
    }
    else {
LAB_108a32e64:
      if (param_4 == 0) {
        return 0;
      }
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39,&UNK_10b3ad9c8);
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,unaff_x21);
  }
  else {
    uStack_98 = uVar18;
    puStack_90 = puVar12;
    uStack_80 = uVar17;
    if (unaff_x21 == (ulong *)0x0) {
LAB_108a32c68:
      puStack_90[2] = uStack_80 - uStack_98;
      return 0x8000000000000001;
    }
    unaff_x22 = (ulong *)*puVar12;
    puVar12 = unaff_x22;
    if (((ulong)unaff_x21 & 7) != 0) {
      uVar11 = uVar11 + 1;
    }
    do {
      uVar7 = *puVar12;
      *puVar12 = CONCAT17(-((long)uVar7 < 0),
                          CONCAT16(-((char)(uVar7 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar7 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar7 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar7 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar7 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar7 >> 8) < '\0'),-((char)uVar7 < '\0')))))))) |
                 0x8080808080808080;
      uVar11 = uVar11 - 1;
      puVar12 = puVar12 + 1;
    } while (uVar11 != 0);
    if ((ulong *)0x7 < unaff_x21) {
      *(ulong *)((long)unaff_x22 + (long)unaff_x21) = *unaff_x22;
      goto LAB_108a32ad4;
    }
  }
  _memmove(unaff_x22 + 1,unaff_x22,unaff_x21);
LAB_108a32ad4:
  puVar12 = (ulong *)0x1;
  puVar16 = (ulong *)0x0;
  do {
    puVar8 = puVar12;
    if (*(char *)((long)unaff_x22 + (long)puVar16) == -0x80) {
      while( true ) {
        uVar18 = FUN_105ab05a0(param_3,unaff_x22[(long)puVar16 * -3 + -2],
                               unaff_x22[(long)puVar16 * -3 + -1]);
        uVar11 = uVar18 & unaff_x23;
        lVar5 = *(long *)((long)unaff_x22 + uVar11);
        uVar17 = CONCAT17(-(lVar5 < 0),
                          CONCAT16(-((char)((ulong)lVar5 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar5 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar5 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar5 >> 0x18) < '\0')
                                                              ,CONCAT12(-((char)((ulong)lVar5 >>
                                                                                0x10) < '\0'),
                                                                        CONCAT11(-((char)((ulong)
                                                  lVar5 >> 8) < '\0'),-((char)lVar5 < '\0'))))))));
        uVar7 = uVar11;
        if (uVar17 == 0) {
          lVar5 = 8;
          do {
            uVar7 = uVar7 + lVar5 & unaff_x23;
            lVar20 = *(long *)((long)unaff_x22 + uVar7);
            uVar17 = CONCAT17(-(lVar20 < 0),
                              CONCAT16(-((char)((ulong)lVar20 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar20 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar20 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar20 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar20 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar20 >> 8) < '\0'),
                                                           -((char)lVar20 < '\0'))))))));
            lVar5 = lVar5 + 8;
          } while (uVar17 == 0);
        }
        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & unaff_x23;
        bVar3 = (byte)(uVar18 >> 0x38);
        if (*(char *)((long)unaff_x22 + uVar7) < '\0') {
          uVar18 = uVar7 - uVar11 ^ (long)puVar16 - uVar11;
        }
        else {
          uVar7 = *unaff_x22;
          uVar7 = CONCAT17(-((long)uVar7 < 0),
                           CONCAT16(-((char)(uVar7 >> 0x30) < '\0'),
                                    CONCAT15(-((char)(uVar7 >> 0x28) < '\0'),
                                             CONCAT14(-((char)(uVar7 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)(uVar7 >> 0x18) < '\0'),
                                                               CONCAT12(-((char)(uVar7 >> 0x10) <
                                                                         '\0'),CONCAT11(-((char)(
                                                  uVar7 >> 8) < '\0'),-((char)uVar7 < '\0'))))))));
          uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = (ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3;
          uVar18 = uVar7 - uVar11 ^ (long)puVar16 - uVar11;
        }
        if ((uVar18 & unaff_x23) < 8) {
          *(byte *)((long)unaff_x22 + (long)puVar16) = bVar3 >> 1;
          *(byte *)((long)unaff_x22 + ((ulong)(puVar16 + -1) & unaff_x23) + 8) = bVar3 >> 1;
          goto LAB_108a32c04;
        }
        cVar2 = *(char *)((long)unaff_x22 + uVar7);
        *(byte *)((long)unaff_x22 + uVar7) = bVar3 >> 1;
        *(byte *)((long)unaff_x22 + (uVar7 - 8 & unaff_x23) + 8) = bVar3 >> 1;
        if (cVar2 == -1) break;
        uVar18 = unaff_x22[(long)puVar16 * -3 + -3];
        unaff_x22[(long)puVar16 * -3 + -3] = unaff_x22[uVar7 * -3 + -3];
        unaff_x22[uVar7 * -3 + -3] = uVar18;
        uVar18 = unaff_x22[(long)puVar16 * -3 + -2];
        unaff_x22[(long)puVar16 * -3 + -2] = unaff_x22[uVar7 * -3 + -2];
        unaff_x22[uVar7 * -3 + -2] = uVar18;
        uVar18 = unaff_x22[(long)puVar16 * -3 + -1];
        unaff_x22[(long)puVar16 * -3 + -1] = unaff_x22[uVar7 * -3 + -1];
        unaff_x22[uVar7 * -3 + -1] = uVar18;
      }
      *(undefined1 *)((long)unaff_x22 + (long)puVar16) = 0xff;
      *(undefined1 *)((long)unaff_x22 + ((ulong)(puVar16 + -1) & unaff_x23) + 8) = 0xff;
      uVar11 = unaff_x22[(long)puVar16 * -3 + -2];
      uVar18 = unaff_x22[(long)puVar16 * -3 + -3];
      unaff_x22[uVar7 * -3 + -1] = unaff_x22[(long)puVar16 * -3 + -1];
      unaff_x22[uVar7 * -3 + -2] = uVar11;
      unaff_x22[uVar7 * -3 + -3] = uVar18;
    }
LAB_108a32c04:
    if (unaff_x21 <= puVar8) goto LAB_108a32c68;
    puVar12 = (ulong *)((long)puVar8 + 1);
    puVar16 = puVar8;
  } while( true );
}

