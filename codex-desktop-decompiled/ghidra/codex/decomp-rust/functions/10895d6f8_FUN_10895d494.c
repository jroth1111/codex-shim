
undefined8 * FUN_10895d494(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 **ppuVar14;
  ulong *puVar15;
  ulong uVar16;
  long *plVar17;
  ulong *puVar18;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar22;
  undefined8 *unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *puVar23;
  ulong *unaff_x22;
  ulong *puVar24;
  ulong *unaff_x23;
  ulong uVar25;
  undefined8 *unaff_x24;
  long *plVar26;
  ulong unaff_x25;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined1 auVar35 [16];
  ulong uStack_130;
  ulong *puStack_128;
  ulong uStack_110;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  ppuVar14 = &puStack_50;
  puVar18 = (ulong *)param_1[0x39];
  puVar15 = puVar18;
  if ((puVar18 < (ulong *)0x9) ||
     (puVar15 = (ulong *)param_1[1], puVar15 != (ulong *)0xffffffffffffffff)) {
    uVar20 = 0;
    if (puVar15 != (ulong *)0x0) {
      uVar20 = 0xffffffffffffffff >> (LZCOUNT(puVar15) & 0x3fU);
    }
    if (uVar20 == 0xffffffffffffffff) goto LAB_10895d6bc;
    unaff_x23 = (ulong *)(uVar20 + 1);
    if (puVar18 < (ulong *)0x9) {
      unaff_x21 = (ulong *)0x8;
      unaff_x19 = param_1 + 1;
      unaff_x22 = puVar18;
    }
    else {
      unaff_x19 = (undefined8 *)param_1[2];
      unaff_x21 = puVar18;
      unaff_x22 = (ulong *)param_1[1];
    }
    if (unaff_x23 < unaff_x22) goto LAB_10895d6d4;
    if (uVar20 < 8) {
      if (puVar18 < (ulong *)0x9) {
        return param_1;
      }
      *param_1 = 0;
      _memcpy(param_1 + 1,unaff_x19,(long)unaff_x22 * 0x38);
      param_1[0x39] = unaff_x22;
      if (unaff_x21 < (ulong *)0x24924924924924a) goto code_r0x000108aa97c4;
      lStack_48 = (long)unaff_x21 * 0x38;
      puStack_50 = (undefined8 *)0x0;
      param_4 = 0xb2deb18;
      param_1 = (undefined8 *)
                func_0x000108a07a3c(&UNK_108d9f500,0x2b,&puStack_50,&UNK_10b2deb18,&UNK_10b2deec0);
      param_3 = ppuVar14;
      puVar18 = extraout_x9;
      uVar20 = extraout_x10;
    }
    if (unaff_x23 == unaff_x21) {
      return param_1;
    }
    if (0x249249249249248 < uVar20) {
LAB_10895d5b0:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d9eb6c,0x11,&UNK_10b2deed8);
      goto code_r0x000108aa97c4;
    }
    unaff_x20 = (ulong *)((long)unaff_x23 * 0x38);
    unaff_x24 = param_1;
    if (puVar18 < (ulong *)0x9) {
      if (unaff_x20 == (ulong *)0x0) {
        puStack_50 = (undefined8 *)0x0;
        param_3 = (undefined8 *)0x0;
        iVar7 = _posix_memalign(&puStack_50,8);
        puStack_68 = unaff_x19;
        puVar12 = puStack_50;
        if (iVar7 != 0) goto LAB_10895d6ec;
      }
      else {
        puVar12 = (undefined8 *)_malloc(unaff_x20);
      }
      unaff_x21 = (ulong *)0x0;
      puStack_68 = unaff_x19;
      if (puVar12 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)_memcpy(puVar12,unaff_x19,(long)unaff_x22 * 0x38);
LAB_10895d668:
        *param_1 = 1;
        param_1[1] = unaff_x22;
        param_1[2] = puVar12;
        param_1[0x39] = unaff_x23;
        return puVar8;
      }
    }
    else {
      if ((ulong *)0x249249249249249 < unaff_x21) goto LAB_10895d5b0;
      if (unaff_x20 == (ulong *)0x0) {
        puStack_50 = (undefined8 *)0x0;
        param_3 = (undefined8 *)0x0;
        iVar7 = _posix_memalign(&puStack_50,8);
        puVar12 = puStack_50;
        puStack_68 = unaff_x19;
        if ((iVar7 == 0) && (unaff_x21 = (ulong *)0x0, puStack_50 != (undefined8 *)0x0)) {
          puVar8 = (undefined8 *)_free(unaff_x19);
          goto LAB_10895d668;
        }
      }
      else {
        puVar8 = (undefined8 *)_realloc(unaff_x19,unaff_x20);
        puVar12 = puVar8;
        if (puVar8 != (undefined8 *)0x0) goto LAB_10895d668;
        unaff_x21 = (ulong *)0x0;
        puStack_68 = unaff_x19;
      }
    }
  }
  else {
LAB_10895d6bc:
    func_0x000108a079f0(&UNK_108d9eb6c,0x11,&UNK_10b2deef0);
LAB_10895d6d4:
    param_3 = (undefined8 *)&UNK_10b2def20;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108da011c,0x20);
    puStack_68 = unaff_x19;
  }
LAB_10895d6ec:
  puVar12 = (undefined8 *)__ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,unaff_x20);
  ppuVar14 = &puStack_a0;
  uStack_58 = 0x10895d6f8;
  puVar18 = (ulong *)puVar12[0x51];
  puVar15 = puVar18;
  puStack_90 = unaff_x24;
  puStack_88 = unaff_x23;
  puStack_80 = unaff_x22;
  puStack_78 = unaff_x21;
  puStack_70 = unaff_x20;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((puVar18 < (ulong *)0x9) ||
     (puVar15 = (ulong *)puVar12[1], puVar15 != (ulong *)0xffffffffffffffff)) {
    uVar20 = 0;
    if (puVar15 != (ulong *)0x0) {
      uVar20 = 0xffffffffffffffff >> (LZCOUNT(puVar15) & 0x3fU);
    }
    if (uVar20 == 0xffffffffffffffff) goto LAB_10895d910;
    puVar15 = (ulong *)(uVar20 + 1);
    if (puVar18 < (ulong *)0x9) {
      puVar23 = (ulong *)0x8;
      unaff_x19 = puVar12 + 1;
      puVar24 = puVar18;
    }
    else {
      unaff_x19 = (undefined8 *)puVar12[2];
      puVar23 = puVar18;
      puVar24 = (ulong *)puVar12[1];
    }
    if (puVar15 < puVar24) goto LAB_10895d928;
    if (uVar20 < 8) {
      if (puVar18 < (ulong *)0x9) {
        return puVar12;
      }
      *puVar12 = 0;
      _memcpy(puVar12 + 1,unaff_x19,(long)puVar24 * 0x50);
      puVar12[0x51] = puVar24;
      if (puVar23 < (ulong *)0x19999999999999a) goto code_r0x000108aa97c4;
      lStack_98 = (long)puVar23 * 0x50;
      puStack_a0 = (undefined8 *)0x0;
      param_4 = 0xb2deb18;
      puVar12 = (undefined8 *)
                func_0x000108a07a3c(&UNK_108d9f500,0x2b,&puStack_a0,&UNK_10b2deb18,&UNK_10b2deec0);
      param_3 = ppuVar14;
      puVar18 = extraout_x9_00;
      uVar20 = extraout_x10_00;
    }
    if (puVar15 == puVar23) {
      return puVar12;
    }
    if (0x199999999999998 < uVar20) {
LAB_10895d804:
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d9eb6c,0x11,&UNK_10b2deed8);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar12 = (undefined8 *)(*(code *)PTR__free_10b61b0a8)(unaff_x19);
      return puVar12;
    }
    unaff_x20 = (ulong *)((long)puVar15 * 0x50);
    if (puVar18 < (ulong *)0x9) {
      if (unaff_x20 == (ulong *)0x0) {
        puStack_a0 = (undefined8 *)0x0;
        param_3 = (undefined8 *)0x0;
        iVar7 = _posix_memalign(&puStack_a0,8);
        puVar8 = puStack_a0;
        if (iVar7 != 0) goto LAB_10895d940;
      }
      else {
        puVar8 = (undefined8 *)_malloc(unaff_x20);
      }
      puVar23 = (ulong *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)_memcpy(puVar8,unaff_x19,(long)puVar24 * 0x50);
LAB_10895d8bc:
        *puVar12 = 1;
        puVar12[1] = puVar24;
        puVar12[2] = puVar8;
        puVar12[0x51] = puVar15;
        return puVar9;
      }
    }
    else {
      if ((ulong *)0x199999999999999 < puVar23) goto LAB_10895d804;
      if (unaff_x20 == (ulong *)0x0) {
        puStack_a0 = (undefined8 *)0x0;
        param_3 = (undefined8 *)0x0;
        iVar7 = _posix_memalign(&puStack_a0,8);
        puVar8 = puStack_a0;
        if ((iVar7 == 0) && (puVar23 = (ulong *)0x0, puStack_a0 != (undefined8 *)0x0)) {
          puVar9 = (undefined8 *)_free(unaff_x19);
          goto LAB_10895d8bc;
        }
      }
      else {
        puVar9 = (undefined8 *)_realloc(unaff_x19,unaff_x20);
        puVar8 = puVar9;
        if (puVar9 != (undefined8 *)0x0) goto LAB_10895d8bc;
        puVar23 = (ulong *)0x0;
      }
    }
  }
  else {
LAB_10895d910:
    func_0x000108a079f0(&UNK_108d9eb6c,0x11,&UNK_10b2deef0);
    puVar23 = unaff_x21;
LAB_10895d928:
    param_3 = (undefined8 *)&UNK_10b2def20;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108da011c,0x20);
  }
LAB_10895d940:
  auVar35 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,unaff_x20);
  puVar15 = auVar35._0_8_;
  uVar27 = puVar15[3];
  uVar20 = uVar27 + auVar35._8_8_;
  if (CARRY8(uVar27,auVar35._8_8_)) goto LAB_10895ddac;
  unaff_x25 = puVar15[1];
  unaff_x20 = (ulong *)(unaff_x25 + 1);
  uVar19 = (ulong)unaff_x20 >> 3;
  uVar25 = unaff_x25;
  if (7 < unaff_x25) {
    uVar25 = uVar19 * 7;
  }
  if (uVar25 >> 1 < uVar20) {
    if (uVar20 < uVar25 + 1) {
      uVar20 = uVar25 + 1;
    }
    if (uVar20 < 0xf) {
      uVar19 = 4;
      if (3 < uVar20) {
        uVar19 = (uVar20 & 8) + 8;
      }
    }
    else {
      if (uVar20 >> 0x3d != 0) goto LAB_10895ddac;
      uVar19 = (0xffffffffffffffffU >> (LZCOUNT((uVar20 * 8) / 7 - 1) & 0x3fU)) + 1;
    }
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar19;
    if (SUB168(auVar35 * ZEXT816(0x38),8) == 0) {
      puVar23 = (ulong *)(uVar19 + 8);
      unaff_x20 = puVar23 + uVar19 * 7;
      if ((CARRY8(uVar19 * 0x38,(ulong)puVar23)) || ((ulong *)0x7ffffffffffffff8 < unaff_x20))
      goto LAB_10895ddac;
      puVar12 = param_3;
      lVar10 = _malloc(unaff_x20);
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + uVar19 * 0x38);
        uVar25 = uVar19 - 1;
        uVar20 = uVar25;
        if (7 < uVar25) {
          uVar20 = (uVar19 >> 3) * 7;
        }
        _memset(plVar1,0xff,puVar23);
        if (uVar27 == 0) {
          plVar26 = (long *)*puVar15;
          *puVar15 = (ulong)plVar1;
          puVar15[1] = uVar25;
          puVar15[2] = uVar20;
        }
        else {
          lVar10 = 0;
          plVar26 = (long *)*puVar15;
          lVar29 = *plVar26;
          uVar19 = CONCAT17(-(-1 < lVar29),
                            CONCAT16(-(-1 < (char)((ulong)lVar29 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar29 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar29 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar29 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar29 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar29 >> 8)),
                                                           -(-1 < (char)lVar29)))))))) &
                   0x8080808080808080;
          uVar2 = *param_3;
          uVar3 = param_3[1];
          plVar6 = plVar26;
          uVar28 = uVar27;
          do {
            while (uVar19 == 0) {
              lVar29 = plVar6[1];
              lVar10 = lVar10 + 8;
              plVar6 = plVar6 + 1;
              uVar19 = CONCAT17(-(-1 < lVar29),
                                CONCAT16(-(-1 < (char)((ulong)lVar29 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar29 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar29 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar29 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar29 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar29 >> 8)),
                                                           -(-1 < (char)lVar29)))))))) &
                       0x8080808080808080;
            }
            uVar11 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            lVar29 = lVar10 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3);
            uVar11 = func_0x0001039ff660(uVar2,uVar3,plVar26[lVar29 * -7 + -6],
                                         plVar26[lVar29 * -7 + -5]);
            uVar16 = uVar11 & uVar25;
            lVar30 = *(long *)((long)plVar1 + uVar16);
            uVar22 = CONCAT17(-(lVar30 < 0),
                              CONCAT16(-((char)((ulong)lVar30 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar30 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar30 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar30 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar30 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar30 >> 8) < '\0'),
                                                           -((char)lVar30 < '\0'))))))));
            if (uVar22 == 0) {
              lVar30 = 8;
              do {
                uVar16 = uVar16 + lVar30 & uVar25;
                lVar31 = *(long *)((long)plVar1 + uVar16);
                uVar22 = CONCAT17(-(lVar31 < 0),
                                  CONCAT16(-((char)((ulong)lVar31 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar31 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar31 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar31 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar31 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar31 >> 8) < '\0'),
                                                           -((char)lVar31 < '\0'))))))));
                lVar30 = lVar30 + 8;
              } while (uVar22 == 0);
            }
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar16 = uVar16 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) & uVar25;
            if (-1 < *(char *)((long)plVar1 + uVar16)) {
              lVar30 = *plVar1;
              uVar16 = CONCAT17(-(lVar30 < 0),
                                CONCAT16(-((char)((ulong)lVar30 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar30 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar30 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar30 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar30 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar30 >> 8) < '\0'),
                                                           -((char)lVar30 < '\0'))))))));
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
            }
            bVar5 = (byte)(uVar11 >> 0x38);
            *(byte *)((long)plVar1 + uVar16) = bVar5 >> 1;
            *(byte *)((long)plVar1 + (uVar16 - 8 & uVar25) + 8) = bVar5 >> 1;
            uVar19 = uVar19 - 1 & uVar19;
            plVar21 = plVar26 + lVar29 * -7 + -7;
            plVar17 = plVar1 + uVar16 * -7 + -7;
            lVar30 = plVar21[1];
            lVar29 = *plVar21;
            lVar32 = plVar21[3];
            lVar31 = plVar21[2];
            lVar34 = plVar21[5];
            lVar33 = plVar21[4];
            plVar17[6] = plVar21[6];
            plVar17[3] = lVar32;
            plVar17[2] = lVar31;
            plVar17[5] = lVar34;
            plVar17[4] = lVar33;
            plVar17[1] = lVar30;
            *plVar17 = lVar29;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
          *puVar15 = (ulong)plVar1;
          puVar15[1] = uVar25;
          puVar15[2] = uVar20 - uVar27;
        }
        if ((unaff_x25 != 0) && (lVar10 = unaff_x25 * 0x38 + 0x38, unaff_x25 + lVar10 != -9)) {
          _free((long)plVar26 - lVar10);
        }
        return (undefined8 *)0x8000000000000001;
      }
      if (param_4 == 0) {
        return (undefined8 *)0x8;
      }
    }
    else {
LAB_10895ddac:
      if (param_4 == 0) {
        return (undefined8 *)0x0;
      }
      puVar12 = (undefined8 *)&UNK_10b3ad9c8;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,unaff_x20);
    param_3 = puVar12;
  }
  else {
    uStack_130 = uVar27;
    puStack_128 = puVar15;
    uStack_110 = uVar25;
    if (unaff_x20 == (ulong *)0x0) {
LAB_10895db9c:
      puStack_128[2] = uStack_110 - uStack_130;
      return (undefined8 *)0x8000000000000001;
    }
    puVar23 = (ulong *)*puVar15;
    puVar15 = puVar23;
    if (((ulong)unaff_x20 & 7) != 0) {
      uVar19 = uVar19 + 1;
    }
    do {
      uVar20 = *puVar15;
      *puVar15 = CONCAT17(-((long)uVar20 < 0),
                          CONCAT16(-((char)(uVar20 >> 0x30) < '\0'),
                                   CONCAT15(-((char)(uVar20 >> 0x28) < '\0'),
                                            CONCAT14(-((char)(uVar20 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)(uVar20 >> 0x18) < '\0'),
                                                              CONCAT12(-((char)(uVar20 >> 0x10) <
                                                                        '\0'),CONCAT11(-((char)(
                                                  uVar20 >> 8) < '\0'),-((char)uVar20 < '\0'))))))))
                 | 0x8080808080808080;
      uVar19 = uVar19 - 1;
      puVar15 = puVar15 + 1;
    } while (uVar19 != 0);
    if ((ulong *)0x7 < unaff_x20) {
      *(ulong *)((long)puVar23 + (long)unaff_x20) = *puVar23;
      goto LAB_10895da14;
    }
  }
  _memmove(puVar23 + 1,puVar23,unaff_x20);
LAB_10895da14:
  uVar2 = *param_3;
  uVar3 = param_3[1];
  puVar15 = (ulong *)0x1;
  puVar18 = (ulong *)0x0;
  do {
    puVar24 = puVar15;
    if (*(char *)((long)puVar23 + (long)puVar18) == -0x80) {
      puVar15 = puVar23 + (long)puVar18 * -7 + -7;
      while( true ) {
        uVar27 = func_0x0001039ff660(uVar2,uVar3,puVar23[(long)puVar18 * -7 + -6],
                                     puVar23[(long)puVar18 * -7 + -5]);
        uVar19 = uVar27 & unaff_x25;
        lVar10 = *(long *)((long)puVar23 + uVar19);
        uVar25 = CONCAT17(-(lVar10 < 0),
                          CONCAT16(-((char)((ulong)lVar10 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar10 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar10 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar10 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar10 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar10 >> 8) < '\0'),-((char)lVar10 < '\0'))))))))
        ;
        uVar20 = uVar19;
        if (uVar25 == 0) {
          lVar10 = 8;
          do {
            uVar20 = uVar20 + lVar10 & unaff_x25;
            lVar29 = *(long *)((long)puVar23 + uVar20);
            uVar25 = CONCAT17(-(lVar29 < 0),
                              CONCAT16(-((char)((ulong)lVar29 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar29 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar29 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar29 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar29 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar29 >> 8) < '\0'),
                                                           -((char)lVar29 < '\0'))))))));
            lVar10 = lVar10 + 8;
          } while (uVar25 == 0);
        }
        uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
        uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
        uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
        uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
        uVar20 = uVar20 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) & unaff_x25;
        bVar5 = (byte)(uVar27 >> 0x38);
        if (*(char *)((long)puVar23 + uVar20) < '\0') {
          uVar27 = uVar20 - uVar19 ^ (long)puVar18 - uVar19;
        }
        else {
          uVar20 = *puVar23;
          uVar20 = CONCAT17(-((long)uVar20 < 0),
                            CONCAT16(-((char)(uVar20 >> 0x30) < '\0'),
                                     CONCAT15(-((char)(uVar20 >> 0x28) < '\0'),
                                              CONCAT14(-((char)(uVar20 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)(uVar20 >> 0x18) < '\0'),
                                                                CONCAT12(-((char)(uVar20 >> 0x10) <
                                                                          '\0'),CONCAT11(-((char)(
                                                  uVar20 >> 8) < '\0'),-((char)uVar20 < '\0'))))))))
          ;
          uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
          uVar27 = uVar20 - uVar19 ^ (long)puVar18 - uVar19;
        }
        if ((uVar27 & unaff_x25) < 8) {
          *(byte *)((long)puVar23 + (long)puVar18) = bVar5 >> 1;
          *(byte *)((long)puVar23 + ((ulong)(puVar18 + -1) & unaff_x25) + 8) = bVar5 >> 1;
          goto LAB_10895db30;
        }
        puVar13 = puVar23 + uVar20 * -7 + -7;
        cVar4 = *(char *)((long)puVar23 + uVar20);
        *(byte *)((long)puVar23 + uVar20) = bVar5 >> 1;
        *(byte *)((long)puVar23 + (uVar20 - 8 & unaff_x25) + 8) = bVar5 >> 1;
        if (cVar4 == -1) break;
        func_0x0001039f99a8(puVar15);
      }
      *(undefined1 *)((long)puVar23 + (long)puVar18) = 0xff;
      *(undefined1 *)((long)puVar23 + ((ulong)(puVar18 + -1) & unaff_x25) + 8) = 0xff;
      uVar27 = puVar15[1];
      uVar20 = *puVar15;
      uVar25 = puVar15[3];
      uVar19 = puVar15[2];
      uVar11 = puVar15[5];
      uVar28 = puVar15[4];
      puVar13[6] = puVar15[6];
      puVar13[3] = uVar25;
      puVar13[2] = uVar19;
      puVar13[5] = uVar11;
      puVar13[4] = uVar28;
      puVar13[1] = uVar27;
      *puVar13 = uVar20;
    }
LAB_10895db30:
    if (unaff_x20 <= puVar24) goto LAB_10895db9c;
    puVar15 = (ulong *)((long)puVar24 + 1);
    puVar18 = puVar24;
  } while( true );
}

