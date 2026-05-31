
/* WARNING: Type propagation algorithm not settling */

long * FUN_103878e48(long *param_1,ulong param_2,undefined *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  byte bVar13;
  ulong uVar14;
  undefined *unaff_x19;
  undefined *puVar15;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar16;
  long lVar17;
  long *unaff_x22;
  ulong unaff_x23;
  ulong uVar18;
  ulong uVar19;
  undefined8 unaff_x24;
  ulong uVar20;
  long lVar21;
  byte bVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  long lStack_120;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long *plStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  iVar9 = (int)param_4;
  if (param_3 == (undefined *)0x0) {
    param_1[1] = 0;
    *param_1 = (long)&UNK_108d52778;
    param_1[3] = 0;
    param_1[2] = 0;
    return param_1;
  }
  if (param_3 < (undefined *)0xf) {
    unaff_x21 = 4;
    if ((undefined *)0x3 < param_3) {
      unaff_x21 = ((ulong)param_3 & 8) + 8;
    }
LAB_103878ed8:
    auVar25._8_8_ = 0;
    auVar25._0_8_ = param_2;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = unaff_x21;
    if ((SUB168(auVar25 * auVar5,8) != 0) || (0xfffffffffffffff8 < param_2 * unaff_x21)) {
LAB_103878f34:
      if (iVar9 == 0) {
        lVar10 = 0;
LAB_103878fa4:
        param_1[1] = lVar10;
        param_1[2] = (long)unaff_x19;
        *param_1 = 0;
        return param_1;
      }
      goto LAB_103878fdc;
    }
    unaff_x23 = param_2 * unaff_x21 + 7 & 0xfffffffffffffff8;
    unaff_x20 = unaff_x21 + 8;
    unaff_x19 = (undefined *)(unaff_x23 + unaff_x20);
    if ((CARRY8(unaff_x23,unaff_x20)) || ((undefined *)0x7ffffffffffffff8 < unaff_x19))
    goto LAB_103878f34;
    if (unaff_x19 == (undefined *)0x0) {
      lVar10 = 8;
      goto LAB_103878f48;
    }
    iVar8 = iVar9;
    if (unaff_x19 < (undefined *)0x8) {
      lStack_48 = 0;
      param_3 = unaff_x19;
      iVar7 = _posix_memalign(&lStack_48,8);
      lVar10 = lStack_48;
      if (iVar7 == 0) goto joined_r0x000103878fc8;
    }
    else {
      lVar10 = _malloc(unaff_x19);
joined_r0x000103878fc8:
      if (lVar10 != 0) {
LAB_103878f48:
        uVar14 = unaff_x21 - 1;
        uVar16 = uVar14;
        if (7 < uVar14) {
          uVar16 = (unaff_x21 >> 3) * 7;
        }
        plVar11 = (long *)_memset(lVar10 + unaff_x23,0xff,unaff_x20);
        *param_1 = lVar10 + unaff_x23;
        param_1[1] = uVar14;
        param_1[2] = uVar16;
        param_1[3] = 0;
        return plVar11;
      }
    }
    bVar1 = iVar9 == 0;
    iVar9 = iVar8;
    unaff_x22 = param_1;
    unaff_x24 = param_4;
    if (bVar1) {
      lVar10 = 8;
      goto LAB_103878fa4;
    }
  }
  else {
    if ((ulong)param_3 >> 0x3d == 0) {
      unaff_x21 = (0xffffffffffffffffU >> (LZCOUNT((ulong)((long)param_3 * 8) / 7 - 1) & 0x3fU)) + 1
      ;
      goto LAB_103878ed8;
    }
    if (iVar9 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
LAB_103878fdc:
    param_3 = &UNK_10b3ad9c8;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
  }
  auVar25 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,unaff_x19);
  plVar11 = auVar25._0_8_;
  uStack_58 = 0x103879000;
  if (param_3 == (undefined *)0x0) {
    plVar11[1] = 0;
    *plVar11 = (long)&UNK_108d52778;
    plVar11[3] = 0;
    plVar11[2] = 0;
    return plVar11;
  }
  puVar15 = unaff_x19;
  uStack_90 = unaff_x24;
  uStack_88 = unaff_x23;
  plStack_80 = unaff_x22;
  uStack_78 = unaff_x21;
  uStack_70 = unaff_x20;
  puStack_68 = unaff_x19;
  puStack_60 = &stack0xfffffffffffffff0;
  if (param_3 < (undefined *)0xf) {
    uVar16 = 4;
    if ((undefined *)0x3 < param_3) {
      uVar16 = ((ulong)param_3 & 8) + 8;
    }
LAB_103879090:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auVar25._8_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar16;
    if ((SUB168(auVar4 * auVar6,8) == 0) &&
       (uVar14 = auVar25._8_8_ * uVar16, uVar14 < 0xfffffffffffffff9)) {
      uVar18 = uVar14 + 7 & 0xfffffffffffffff8;
      uVar14 = uVar16 + 8;
      puVar15 = (undefined *)(uVar18 + uVar14);
      if ((!CARRY8(uVar18,uVar14)) && (puVar15 < (undefined *)0x7ffffffffffffff9)) {
        if (puVar15 == (undefined *)0x0) {
          lVar10 = 8;
          goto LAB_103879100;
        }
        if (puVar15 < (undefined *)0x8) {
          lStack_98 = 0;
          param_3 = puVar15;
          iVar8 = _posix_memalign(&lStack_98,8);
          lVar10 = lStack_98;
          if (iVar8 == 0) goto joined_r0x000103879180;
        }
        else {
          lVar10 = _malloc(puVar15);
joined_r0x000103879180:
          if (lVar10 != 0) {
LAB_103879100:
            uVar19 = uVar16 - 1;
            uVar20 = uVar19;
            if (7 < uVar19) {
              uVar20 = (uVar16 >> 3) * 7;
            }
            plVar12 = (long *)_memset(lVar10 + uVar18,0xff,uVar14);
            *plVar11 = lVar10 + uVar18;
            plVar11[1] = uVar19;
            plVar11[2] = uVar20;
            plVar11[3] = 0;
            return plVar12;
          }
        }
        if (iVar9 == 0) {
          lVar10 = 8;
          goto LAB_10387915c;
        }
        goto LAB_1038791ac;
      }
    }
    if (iVar9 == 0) {
      lVar10 = 0;
LAB_10387915c:
      plVar11[1] = lVar10;
      plVar11[2] = (long)puVar15;
      *plVar11 = 0;
      return plVar11;
    }
  }
  else {
    if ((ulong)param_3 >> 0x3d == 0) {
      uVar16 = (0xffffffffffffffffU >> (LZCOUNT((ulong)((long)param_3 * 8) / 7 - 1) & 0x3fU)) + 1;
      goto LAB_103879090;
    }
    if (iVar9 == 0) {
      *plVar11 = 0;
      plVar11[1] = 0;
      return plVar11;
    }
  }
  param_3 = &UNK_10b2d3448;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108d92af3,0x39);
LAB_1038791ac:
  auVar25 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,puVar15);
  bVar13 = auVar25[0xf] >> 1;
  lVar10 = *auVar25._0_8_;
  uVar16 = auVar25._0_8_[1];
  uVar2 = *(undefined8 *)(param_3 + 8);
  lVar3 = *(long *)(param_3 + 0x10);
  if (*(long *)(param_3 + 0x18) == -0x8000000000000000) {
    lVar17 = 0;
    uVar18 = auVar25._8_8_ & uVar16;
    uVar23 = *(undefined8 *)(lVar10 + uVar18);
    uVar14 = CONCAT17(-((byte)((ulong)uVar23 >> 0x38) == bVar13),
                      CONCAT16(-((byte)((ulong)uVar23 >> 0x30) == bVar13),
                               CONCAT15(-((byte)((ulong)uVar23 >> 0x28) == bVar13),
                                        CONCAT14(-((byte)((ulong)uVar23 >> 0x20) == bVar13),
                                                 CONCAT13(-((byte)((ulong)uVar23 >> 0x18) == bVar13)
                                                          ,CONCAT12(-((byte)((ulong)uVar23 >> 0x10)
                                                                     == bVar13),
                                                                    CONCAT11(-((byte)((ulong)uVar23
                                                                                     >> 8) == bVar13
                                                                              ),-((byte)uVar23 ==
                                                                                 bVar13)))))))) &
             0x8080808080808080;
    while( true ) {
      while (uVar14 == 0) {
        bVar22 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar23 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar23 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar23 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar23 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar23
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar23 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar23 >> 8) == -1),
                                                           -((char)uVar23 == -1)))))))),1);
        if ((bVar22 & 1) != 0) {
          return (long *)0x0;
        }
        lVar17 = lVar17 + 8;
        uVar18 = uVar18 + lVar17 & uVar16;
        uVar23 = *(undefined8 *)(lVar10 + uVar18);
        uVar14 = CONCAT17(-((byte)((ulong)uVar23 >> 0x38) == bVar13),
                          CONCAT16(-((byte)((ulong)uVar23 >> 0x30) == bVar13),
                                   CONCAT15(-((byte)((ulong)uVar23 >> 0x28) == bVar13),
                                            CONCAT14(-((byte)((ulong)uVar23 >> 0x20) == bVar13),
                                                     CONCAT13(-((byte)((ulong)uVar23 >> 0x18) ==
                                                               bVar13),CONCAT12(-((byte)((ulong)
                                                  uVar23 >> 0x10) == bVar13),
                                                  CONCAT11(-((byte)((ulong)uVar23 >> 8) == bVar13),
                                                           -((byte)uVar23 == bVar13)))))))) &
                 0x8080808080808080;
      }
      uVar20 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = uVar18 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) & uVar16;
      lVar21 = lVar10 + uVar20 * -0x40;
      if (((lVar3 == *(long *)(lVar21 + -0x30)) &&
          (iVar9 = _memcmp(uVar2,*(undefined8 *)(lVar21 + -0x38),lVar3), iVar9 == 0)) &&
         (*(long *)(lVar21 + -0x28) == -0x8000000000000000)) break;
      uVar14 = uVar14 - 1 & uVar14;
    }
  }
  else {
    uVar23 = *(undefined8 *)(param_3 + 0x20);
    lVar17 = *(long *)(param_3 + 0x28);
    lStack_120 = 0;
    uVar18 = auVar25._8_8_ & uVar16;
    uVar24 = *(undefined8 *)(lVar10 + uVar18);
    uVar14 = CONCAT17(-((byte)((ulong)uVar24 >> 0x38) == bVar13),
                      CONCAT16(-((byte)((ulong)uVar24 >> 0x30) == bVar13),
                               CONCAT15(-((byte)((ulong)uVar24 >> 0x28) == bVar13),
                                        CONCAT14(-((byte)((ulong)uVar24 >> 0x20) == bVar13),
                                                 CONCAT13(-((byte)((ulong)uVar24 >> 0x18) == bVar13)
                                                          ,CONCAT12(-((byte)((ulong)uVar24 >> 0x10)
                                                                     == bVar13),
                                                                    CONCAT11(-((byte)((ulong)uVar24
                                                                                     >> 8) == bVar13
                                                                              ),-((byte)uVar24 ==
                                                                                 bVar13)))))))) &
             0x8080808080808080;
    while( true ) {
      while (uVar14 == 0) {
        bVar22 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar24 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar24 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar24 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar24 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar24
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar24 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar24 >> 8) == -1),
                                                           -((char)uVar24 == -1)))))))),1);
        if ((bVar22 & 1) != 0) {
          return (long *)0x0;
        }
        lStack_120 = lStack_120 + 8;
        uVar18 = uVar18 + lStack_120 & uVar16;
        uVar24 = *(undefined8 *)(lVar10 + uVar18);
        uVar14 = CONCAT17(-((byte)((ulong)uVar24 >> 0x38) == bVar13),
                          CONCAT16(-((byte)((ulong)uVar24 >> 0x30) == bVar13),
                                   CONCAT15(-((byte)((ulong)uVar24 >> 0x28) == bVar13),
                                            CONCAT14(-((byte)((ulong)uVar24 >> 0x20) == bVar13),
                                                     CONCAT13(-((byte)((ulong)uVar24 >> 0x18) ==
                                                               bVar13),CONCAT12(-((byte)((ulong)
                                                  uVar24 >> 0x10) == bVar13),
                                                  CONCAT11(-((byte)((ulong)uVar24 >> 8) == bVar13),
                                                           -((byte)uVar24 == bVar13)))))))) &
                 0x8080808080808080;
      }
      uVar20 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = uVar18 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) & uVar16;
      lVar21 = lVar10 + uVar20 * -0x40;
      if (((lVar3 == *(long *)(lVar21 + -0x30)) &&
          (iVar9 = _memcmp(uVar2,*(undefined8 *)(lVar21 + -0x38),lVar3), iVar9 == 0)) &&
         ((*(long *)(lVar21 + -0x28) != -0x8000000000000000 &&
          ((lVar17 == *(long *)(lVar21 + -0x18) &&
           (iVar9 = _memcmp(uVar23,*(undefined8 *)(lVar21 + -0x20),lVar17), iVar9 == 0)))))) break;
      uVar14 = uVar14 - 1 & uVar14;
    }
  }
  return (long *)(lVar10 + uVar20 * -0x40);
}

