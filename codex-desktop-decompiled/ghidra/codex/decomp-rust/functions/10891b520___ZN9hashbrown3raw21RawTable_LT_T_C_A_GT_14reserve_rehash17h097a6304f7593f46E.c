
undefined1  [16]
__ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h097a6304f7593f46E
          (ulong *param_1,ulong param_2,long param_3,ulong param_4,uint param_5)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x20;
  long *unaff_x22;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined1 auVar23 [16];
  
  uVar17 = param_1[3];
  uVar13 = uVar17 + param_2;
  if (CARRY8(uVar17,param_2)) {
    param_5 = param_5 & 1;
    param_4 = unaff_x20;
joined_r0x00010891ba3c:
    if (param_5 != 0) {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108d4d4ca,0x39,&UNK_10b299828);
LAB_10891ba58:
      uVar9 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,unaff_x22);
LAB_10891ba64:
      func_0x000108a07bdc(uVar9,param_4,&UNK_10b299560);
LAB_10891ba88:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10891ba8c);
      (*pcVar3)();
    }
    uVar6 = 0;
    goto LAB_10891b9d8;
  }
  uVar16 = param_1[1];
  uVar11 = uVar16 + 1;
  uVar9 = uVar11 >> 3;
  uVar14 = uVar16;
  if (7 < uVar16) {
    uVar14 = uVar9 * 7;
  }
  if (uVar13 <= uVar14 >> 1) {
    puVar7 = (ulong *)*param_1;
    if (uVar11 == 0) {
LAB_10891b7e4:
      _memmove(puVar7 + 1);
    }
    else {
      puVar10 = puVar7;
      if ((uVar11 & 7) != 0) {
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
      if (uVar11 < 8) goto LAB_10891b7e4;
      *(ulong *)((long)puVar7 + uVar11) = *puVar7;
    }
    uVar17 = param_1[1];
    uVar13 = 0;
    if (uVar17 != 0xffffffffffffffff) {
      uVar13 = 0;
      uVar11 = 1;
      do {
        plVar8 = (long *)*param_1;
        if (*(char *)((long)plVar8 + uVar13) == -0x80) {
          uVar9 = plVar8[-1 - uVar13];
          if (param_4 <= uVar9) goto LAB_10891ba64;
          uVar14 = uVar13 * 8 ^ 0xfffffffffffffff8;
          plVar12 = plVar8;
          while( true ) {
            uVar16 = *(ulong *)(param_3 + uVar9 * 0x50 + 0x48);
            uVar15 = param_1[1];
            uVar18 = uVar15 & uVar16;
            lVar5 = *(long *)((long)plVar12 + uVar18);
            uVar21 = CONCAT17(-(lVar5 < 0),
                              CONCAT16(-((char)((ulong)lVar5 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar5 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar5 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar5 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar5 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar5 >> 8) < '\0'),
                                                           -((char)lVar5 < '\0'))))))));
            uVar9 = uVar18;
            if (uVar21 == 0) {
              lVar5 = 8;
              do {
                uVar9 = uVar9 + lVar5 & uVar15;
                lVar19 = *(long *)((long)plVar12 + uVar9);
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
                lVar5 = lVar5 + 8;
              } while (uVar21 == 0);
            }
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar15;
            bVar2 = (byte)(uVar16 >> 0x38);
            if (*(char *)((long)plVar12 + uVar9) < '\0') {
              uVar16 = uVar9 - uVar18 ^ uVar13 - uVar18;
            }
            else {
              lVar5 = *plVar12;
              uVar9 = CONCAT17(-(lVar5 < 0),
                               CONCAT16(-((char)((ulong)lVar5 >> 0x30) < '\0'),
                                        CONCAT15(-((char)((ulong)lVar5 >> 0x28) < '\0'),
                                                 CONCAT14(-((char)((ulong)lVar5 >> 0x20) < '\0'),
                                                          CONCAT13(-((char)((ulong)lVar5 >> 0x18) <
                                                                    '\0'),CONCAT12(-((char)((ulong)
                                                  lVar5 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar5 >> 8) < '\0'),
                                                           -((char)lVar5 < '\0'))))))));
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
              uVar16 = uVar9 - uVar18 ^ uVar13 - uVar18;
            }
            if ((uVar16 & uVar15) < 8) {
              *(byte *)((long)plVar12 + uVar13) = bVar2 >> 1;
              *(byte *)(*param_1 + (uVar15 & uVar13 - 8) + 8) = bVar2 >> 1;
              goto LAB_10891b93c;
            }
            uVar16 = ~uVar9;
            cVar1 = *(char *)((long)plVar12 + uVar9);
            *(byte *)((long)plVar12 + uVar9) = bVar2 >> 1;
            *(byte *)(*param_1 + (uVar9 - 8 & uVar15) + 8) = bVar2 >> 1;
            if (cVar1 == -1) break;
            lVar5 = *(long *)((long)plVar8 + uVar14);
            *(long *)((long)plVar8 + uVar14) = plVar12[uVar16];
            plVar12[uVar16] = lVar5;
            plVar12 = (long *)*param_1;
            uVar9 = plVar12[-1 - uVar13];
            if (param_4 <= uVar9) goto LAB_10891ba64;
          }
          uVar9 = param_1[1];
          *(undefined1 *)(*param_1 + uVar13) = 0xff;
          *(undefined1 *)(*param_1 + (uVar9 & uVar13 - 8) + 8) = 0xff;
          plVar12[uVar16] = *(long *)((long)plVar8 + uVar14);
        }
LAB_10891b93c:
        if (uVar17 + 1 <= uVar11) goto LAB_10891b9ac;
        uVar13 = uVar11;
        uVar11 = uVar11 + 1;
      } while( true );
    }
    goto LAB_10891b9c8;
  }
  if (uVar13 < uVar14 + 1) {
    uVar13 = uVar14 + 1;
  }
  if (uVar13 < 0xf) {
    uVar11 = 4;
    if (3 < uVar13) {
      uVar11 = (uVar13 & 8) + 8;
    }
    uVar9 = uVar11 * 8;
    uVar13 = uVar11 + 8;
    bVar4 = CARRY8(uVar13,uVar9);
    unaff_x22 = (long *)(uVar13 + uVar9);
  }
  else {
    if ((uVar13 >> 0x3d != 0) ||
       (uVar13 = 0xffffffffffffffff >> (LZCOUNT((uVar13 * 8) / 7 - 1) & 0x3fU),
       0x1ffffffffffffffe < uVar13)) goto joined_r0x00010891ba3c;
    uVar11 = uVar13 + 1;
    uVar9 = uVar11 * 8;
    uVar13 = uVar13 + 9;
    bVar4 = CARRY8(uVar13,uVar9);
    unaff_x22 = (long *)(uVar13 + uVar9);
  }
  if ((bVar4) || ((long *)0x7ffffffffffffff8 < unaff_x22)) goto joined_r0x00010891ba3c;
  lVar5 = _malloc(unaff_x22);
  if (lVar5 == 0) {
    if (param_5 != 0) goto LAB_10891ba58;
    uVar6 = 8;
    goto LAB_10891b9d8;
  }
  uVar18 = uVar11 - 1;
  uVar14 = uVar18;
  if (7 < uVar18) {
    uVar14 = (uVar11 >> 3) * 7;
  }
  unaff_x22 = (long *)(lVar5 + uVar9);
  _memset(unaff_x22,0xff,uVar13);
  plVar8 = (long *)*param_1;
  if (uVar17 != 0) {
    lVar5 = 0;
    lVar19 = *plVar8;
    uVar13 = CONCAT17(-(-1 < lVar19),
                      CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar19 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar19 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar19 >> 8)),-(-1 < (char)lVar19)))))))) &
             0x8080808080808080;
    plVar12 = plVar8;
    uVar11 = uVar17;
    do {
      while (uVar13 == 0) {
        lVar19 = plVar12[1];
        lVar5 = lVar5 + 8;
        plVar12 = plVar12 + 1;
        uVar13 = CONCAT17(-(-1 < lVar19),
                          CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar19 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar19
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar19 >> 8)),-(-1 < (char)lVar19)))))))) &
                 0x8080808080808080;
      }
      uVar9 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      lVar19 = lVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
      uVar9 = plVar8[-1 - lVar19];
      if (param_4 <= uVar9) {
        func_0x000108a07bdc(uVar9,param_4,&UNK_10b299560);
        goto LAB_10891ba88;
      }
      uVar15 = *(ulong *)(param_3 + uVar9 * 0x50 + 0x48);
      uVar9 = uVar15 & uVar18;
      lVar20 = *(long *)((long)unaff_x22 + uVar9);
      uVar21 = CONCAT17(-(lVar20 < 0),
                        CONCAT16(-((char)((ulong)lVar20 >> 0x30) < '\0'),
                                 CONCAT15(-((char)((ulong)lVar20 >> 0x28) < '\0'),
                                          CONCAT14(-((char)((ulong)lVar20 >> 0x20) < '\0'),
                                                   CONCAT13(-((char)((ulong)lVar20 >> 0x18) < '\0'),
                                                            CONCAT12(-((char)((ulong)lVar20 >> 0x10)
                                                                      < '\0'),CONCAT11(-((char)((
                                                  ulong)lVar20 >> 8) < '\0'),-((char)lVar20 < '\0'))
                                                  ))))));
      if (uVar21 == 0) {
        lVar20 = 8;
        do {
          uVar9 = uVar9 + lVar20 & uVar18;
          lVar22 = *(long *)((long)unaff_x22 + uVar9);
          uVar21 = CONCAT17(-(lVar22 < 0),
                            CONCAT16(-((char)((ulong)lVar22 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar22 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar22 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar22 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar22 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar22 >> 8) < '\0'),
                                                           -((char)lVar22 < '\0'))))))));
          lVar20 = lVar20 + 8;
        } while (uVar21 == 0);
      }
      uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
      uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
      uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar18;
      if (-1 < *(char *)((long)unaff_x22 + uVar9)) {
        lVar20 = *unaff_x22;
        uVar9 = CONCAT17(-(lVar20 < 0),
                         CONCAT16(-((char)((ulong)lVar20 >> 0x30) < '\0'),
                                  CONCAT15(-((char)((ulong)lVar20 >> 0x28) < '\0'),
                                           CONCAT14(-((char)((ulong)lVar20 >> 0x20) < '\0'),
                                                    CONCAT13(-((char)((ulong)lVar20 >> 0x18) < '\0')
                                                             ,CONCAT12(-((char)((ulong)lVar20 >>
                                                                               0x10) < '\0'),
                                                                       CONCAT11(-((char)((ulong)
                                                  lVar20 >> 8) < '\0'),-((char)lVar20 < '\0'))))))))
        ;
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = (ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3;
      }
      bVar2 = (byte)(uVar15 >> 0x38);
      *(byte *)((long)unaff_x22 + uVar9) = bVar2 >> 1;
      *(byte *)((long)unaff_x22 + (uVar9 - 8 & uVar18) + 8) = bVar2 >> 1;
      uVar13 = uVar13 - 1 & uVar13;
      unaff_x22[-1 - uVar9] = plVar8[-1 - lVar19];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  *param_1 = (ulong)unaff_x22;
  param_1[1] = uVar18;
  param_1[2] = uVar14 - uVar17;
  if ((uVar16 != 0) && (lVar5 = uVar16 * 8 + 8, uVar16 + lVar5 != -9)) {
    _free((long)plVar8 - lVar5);
  }
  goto LAB_10891b9d4;
LAB_10891b9ac:
  uVar13 = param_1[1];
  if (7 < uVar13) {
    uVar13 = (uVar13 + 1 >> 3) * 7;
  }
LAB_10891b9c8:
  param_1[2] = uVar13 - param_1[3];
LAB_10891b9d4:
  uVar6 = 0x8000000000000001;
LAB_10891b9d8:
  auVar23._8_8_ = unaff_x22;
  auVar23._0_8_ = uVar6;
  return auVar23;
}

