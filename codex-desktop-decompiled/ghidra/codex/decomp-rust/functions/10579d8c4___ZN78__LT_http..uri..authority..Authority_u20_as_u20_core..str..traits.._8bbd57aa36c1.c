
void __ZN78__LT_http__uri__authority__Authority_u20_as_u20_core__str__traits__FromStr_GT_8from_str17h5ce2d0edd6b07698E
               (undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *extraout_x8;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong unaff_x19;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  ulong *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [40];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  long *plVar13;
  
  if (param_3 == 0) {
    uVar23 = 9;
  }
  else {
    uVar20 = 0;
    bVar3 = false;
    bVar6 = false;
    bVar2 = 0;
    lVar18 = 0;
    lVar10 = param_3;
    do {
      bVar1 = (&UNK_109a9eacd)[*(byte *)(param_2 + lVar18)];
      if (bVar1 < 0x40) {
        lVar19 = lVar18;
        if (bVar1 < 0x2f) {
          if (bVar1 == 0) {
            if (*(byte *)(param_2 + lVar18) != 0x25) goto LAB_10579d624;
            bVar2 = 1;
          }
          else if (bVar1 == 0x23) break;
        }
        else if (bVar1 == 0x3a) {
          if (7 < uVar20) goto LAB_10579d5b0;
          uVar20 = uVar20 + 1;
        }
        else if ((bVar1 == 0x2f) || (bVar1 == 0x3f)) break;
      }
      else if (bVar1 == 0x40) {
        bVar2 = 0;
        uVar20 = 0;
        lVar10 = lVar18;
      }
      else if (bVar1 == 0x5b) {
        if ((bool)(bVar2 | bVar3)) goto LAB_10579d5b0;
        bVar2 = 0;
        bVar3 = true;
      }
      else if (bVar1 == 0x5d) {
        if (bVar6 || !bVar3) goto LAB_10579d5b0;
        bVar2 = 0;
        uVar20 = 0;
        bVar6 = true;
      }
      lVar18 = lVar18 + 1;
      lVar19 = param_3;
    } while (param_3 != lVar18);
    uVar23 = 2;
    if ((!(bool)(bVar6 ^ bVar3)) && (uVar20 < 2)) {
      if (!(bool)((lVar10 == lVar19 + -1 && lVar19 != 0) | bVar2)) {
        if (lVar19 == param_3) {
          uVar8 = _malloc(param_3);
          if (uVar8 != 0) {
            _memcpy(uVar8,param_2,param_3);
            puVar17 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
            uVar16 = uVar8;
            if ((uVar8 & 1) == 0) {
              puVar17 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
              uVar16 = uVar8 + 1;
            }
            *param_1 = puVar17;
            param_1[1] = uVar8;
            param_1[2] = param_3;
            param_1[3] = uVar16;
            return;
          }
          auVar29 = func_0x0001087c9084(1,param_3);
          plVar13 = auVar29._8_8_;
          puStack_98 = auVar29._0_8_;
          uStack_38 = 0x10579d638;
          uVar8 = plVar13[2];
          uVar16 = plVar13[3];
          uVar28 = plVar13[1];
          if (uVar8 <= uVar16 && uVar16 <= uVar28) {
            lVar18 = *plVar13;
            plVar27 = plVar13 + 4;
            uVar25 = (ulong)*(byte *)(plVar13 + 5);
            bVar2 = *(byte *)((long)plVar27 + (uVar25 - 1));
            uVar26 = (ulong)bVar2;
            puStack_40 = &stack0xfffffffffffffff0;
            uStack_a0 = uVar16;
            if (4 < uVar25) {
              do {
                uVar14 = uVar16 - uVar8;
                if (uVar14 < 0x10) {
                  uVar21 = 0;
                  if (uVar14 == 0) {
                    auVar29 = ZEXT816(0);
                  }
                  else {
                    do {
                      if (*(byte *)(lVar18 + uVar8 + uVar21) == bVar2) {
                        auVar29._8_8_ = uVar21;
                        auVar29._0_8_ = 1;
                        goto LAB_10579d87c;
                      }
                      uVar21 = uVar21 + 1;
                    } while (uVar14 != uVar21);
                    auVar4._8_8_ = 0;
                    auVar4._0_8_ = uVar14;
                    auVar29 = auVar4 << 0x40;
                  }
                }
                else {
                  auVar29 = __ZN4core5slice6memchr14memchr_aligned17h5505eeecba6e215aE
                                      (uVar26,lVar18 + uVar8);
                  unaff_x19 = uVar25;
                  plVar27 = plVar13;
                }
LAB_10579d87c:
                if ((auVar29._0_8_ & 1) == 0) goto LAB_10579d880;
                uVar8 = uVar8 + auVar29._8_8_ + 1;
                plVar13[2] = uVar8;
                if (uVar25 <= uVar8 && uVar8 <= uVar28) {
                  uVar15 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                     (0,uVar25,4,&UNK_10b3b3b40);
                  uStack_a8 = 0x10579d8c4;
                  uStack_e0 = uVar28;
                  uStack_d8 = uVar8;
                  uStack_d0 = uVar16;
                  plStack_c8 = plVar27;
                  uStack_c0 = uVar26;
                  uStack_b8 = unaff_x19;
                  ppuStack_b0 = &puStack_40;
                  puVar9 = (ulong *)_malloc(0x14);
                  if (puVar9 != (ulong *)0x0) {
                    uStack_118 = 0x14;
                    uStack_120 = 0;
                    uStack_110 = 1;
                    puStack_128 = puVar9;
                    lVar10 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                                       (uVar15,auStack_108);
                    lVar18 = 0x14 - lVar10;
                    _memcpy(puVar9,auStack_108 + lVar10,lVar18);
                    if (lVar10 == 0) {
                      bVar6 = ((ulong)puVar9 & 1) == 0;
                      puVar11 = puVar9;
                      if (bVar6) {
                        puVar11 = (ulong *)((ulong)puVar9 | 1);
                      }
                      lVar18 = 0x14;
                      puVar17 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
                      if (bVar6) {
                        puVar17 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
                      }
                    }
                    else {
                      puVar11 = (ulong *)_malloc(0x18);
                      if (puVar11 == (ulong *)0x0) {
                        func_0x0001087c906c(8,0x18);
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x10579d9c4);
                        (*pcVar5)();
                      }
                      *puVar11 = (ulong)puVar9;
                      puVar11[2] = 1;
                      puVar11[1] = 0x14;
                      puVar17 = &UNK_10b205b08;
                    }
                    *extraout_x8 = puVar17;
                    extraout_x8[1] = puVar9;
                    extraout_x8[2] = lVar18;
                    extraout_x8[3] = puVar11;
                    *(undefined1 *)(extraout_x8 + 4) = 0;
                    return;
                  }
                  uVar15 = func_0x0001087c9084(1,0x14);
                  __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                            (&puStack_128);
                  uVar15 = __Unwind_Resume(uVar15);
                  FUN_10038df58(unaff_x19,0x14);
                  __Unwind_Resume(uVar15);
                  auVar29 = func_0x000108a07bc4();
                  plVar13 = auVar29._8_8_;
                  puVar12 = auVar29._0_8_;
                  uVar16 = plVar13[1];
                  uVar28 = plVar13[2];
                  uVar8 = plVar13[3];
                  if (uVar8 < uVar28 || uVar16 < uVar8) {
                    uVar15 = 0;
                    goto LAB_10579db3c;
                  }
                  lVar18 = *plVar13;
                  plVar27 = plVar13 + 4;
                  uVar25 = (ulong)*(byte *)(plVar13 + 5);
                  uVar26 = uVar25 - 1;
                  if (uVar25 < 5) goto LAB_10579da70;
                  goto LAB_10579dae8;
                }
                uVar15 = 0;
              } while (uVar8 <= uVar16);
              goto LAB_10579d888;
            }
            do {
              uVar16 = uStack_a0 - uVar8;
              lVar10 = lVar18 + uVar8;
              if (0xf < uVar16) {
                uVar14 = (lVar10 + 7U & 0xfffffffffffffff8) - lVar10;
                if (uVar14 == 0) goto LAB_10579d71c;
                uVar21 = 0;
                do {
                  if (*(byte *)(lVar10 + uVar21) == bVar2) goto LAB_10579d778;
                  uVar21 = uVar21 + 1;
                } while (uVar14 != uVar21);
                for (; uVar21 = uVar14, uVar14 <= uVar16 - 0x10; uVar14 = uVar14 + 0x10) {
LAB_10579d71c:
                  uVar24 = *(ulong *)(lVar10 + uVar14) ^ uVar26 * 0x101010101010101;
                  uVar22 = ((ulong *)(lVar10 + uVar14))[1] ^ uVar26 * 0x101010101010101;
                  uVar21 = uVar14;
                  if ((((0x101010101010100 - uVar24 | uVar24) &
                        (0x101010101010100 - uVar22 | uVar22) ^ 0xffffffffffffffff) &
                      0x8080808080808080) != 0) break;
                }
                do {
                  if (uVar16 == uVar21) goto LAB_10579d880;
                  if (*(byte *)(lVar10 + uVar21) == bVar2) goto LAB_10579d778;
                  uVar21 = uVar21 + 1;
                } while( true );
              }
              if (uStack_a0 == uVar8) goto LAB_10579d880;
              uVar21 = 0;
              while (*(byte *)(lVar10 + uVar21) != bVar2) {
                uVar21 = uVar21 + 1;
                if (uVar16 == uVar21) goto LAB_10579d880;
              }
LAB_10579d778:
              uVar8 = uVar8 + uVar21 + 1;
              plVar13[2] = uVar8;
              if ((uVar25 <= uVar8 && uVar8 <= uVar28) &&
                 (iVar7 = _memcmp(lVar18 + (uVar8 - uVar25),plVar27,uVar25), iVar7 == 0)) {
                puStack_98[1] = uVar8 - uVar25;
                puStack_98[2] = uVar8;
                uVar15 = 1;
                goto LAB_10579d888;
              }
            } while (uVar8 <= uStack_a0);
          }
          uVar15 = 0;
          goto LAB_10579d888;
        }
LAB_10579d624:
        *(undefined1 *)(param_1 + 1) = 0;
        goto LAB_10579d5b8;
      }
LAB_10579d5b0:
      uVar23 = 2;
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar23;
LAB_10579d5b8:
  *param_1 = 0;
  return;
  while( true ) {
    uVar8 = auVar29._8_8_ + uVar28;
    if (((uVar26 <= uVar8) && (!CARRY8(uVar8 - uVar26,uVar25))) &&
       ((uVar8 - uVar26) + uVar25 <= uVar16)) {
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar25,4,&UNK_10b3b3b58);
      goto LAB_10579db30;
    }
    uVar15 = 0;
    plVar13[3] = uVar8;
    if (uVar8 < uVar28 || uVar16 < uVar8) break;
LAB_10579dae8:
    auVar29 = __ZN4core5slice6memchr7memrchr17hc08cad9d3b830a0dE
                        (*(undefined1 *)((long)plVar27 + uVar26),lVar18 + uVar28,uVar8 - uVar28);
    if ((auVar29._0_8_ & 1) == 0) goto LAB_10579db30;
  }
  goto LAB_10579db3c;
LAB_10579db30:
  plVar13[3] = uVar28;
  goto LAB_10579db38;
LAB_10579d880:
  uVar15 = 0;
  plVar13[2] = uStack_a0;
LAB_10579d888:
  *puStack_98 = uVar15;
  return;
  while( true ) {
    uVar8 = auVar29._8_8_ + uVar28;
    uVar14 = uVar8 - uVar26;
    if (((uVar26 <= uVar8) && (!CARRY8(uVar14,uVar25))) &&
       ((uVar14 + uVar25 <= uVar16 && (iVar7 = _memcmp(lVar18 + uVar14,plVar27,uVar25), iVar7 == 0))
       )) {
      plVar13[3] = uVar14;
      uVar15 = 1;
      puVar12[1] = uVar14;
      puVar12[2] = uVar14 + uVar25;
      goto LAB_10579db3c;
    }
    plVar13[3] = uVar8;
    if (uVar8 < uVar28 || uVar16 < uVar8) break;
LAB_10579da70:
    auVar29 = __ZN4core5slice6memchr7memrchr17hc08cad9d3b830a0dE
                        (*(undefined1 *)((long)plVar27 + uVar26),lVar18 + uVar28,uVar8 - uVar28);
    if ((auVar29._0_8_ & 1) == 0) goto LAB_10579db30;
  }
LAB_10579db38:
  uVar15 = 0;
LAB_10579db3c:
  *puVar12 = uVar15;
  return;
}

