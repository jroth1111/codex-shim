
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN90__LT_tracing_subscriber__registry__sharded__Registry_u20_as_u20_core__default__Default_GT_7default17h310ae85e486ce566E
               (long *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong extraout_x1;
  undefined8 *puVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  ulong *extraout_x8;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  ulong unaff_x24;
  ulong uVar28;
  undefined1 auVar29 [16];
  long lStack_1a0;
  long lStack_188;
  long lStack_178;
  ulong uStack_170;
  long lStack_160;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  long lStack_140;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  ulong uStack_38;
  long lStack_30;
  ulong uStack_28;
  
  lVar6 = _malloc(0x8000);
  if (lVar6 != 0) {
    uStack_38 = 0x1000;
    uStack_28 = 0;
    lStack_30 = lVar6;
    do {
      uVar20 = uStack_28;
      if (uStack_28 == uStack_38) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h209165677b9cc5baE(&uStack_38);
        lVar6 = lStack_30;
      }
      *(undefined8 *)(lVar6 + uVar20 * 8) = 0;
      uStack_28 = uVar20 + 1;
    } while (uStack_28 != 0x1000);
    lVar6 = lStack_30;
    if ((0x1000 < uStack_38) && (lVar6 = _realloc(lStack_30,0x8000), lVar6 == 0)) {
      func_0x0001087c9084(8,0x8000);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1061e5788);
      (*pcVar5)();
    }
    param_1[0x41] = 0;
    param_1[0x20] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[0x3e] = 0;
    param_1[0x3d] = 0;
    param_1[0x40] = 0;
    param_1[0x3f] = 0;
    param_1[0x3a] = 0;
    param_1[0x39] = 0;
    param_1[0x3c] = 0;
    param_1[0x3b] = 0;
    param_1[0x36] = 0;
    param_1[0x35] = 0;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x32] = 0;
    param_1[0x31] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2a] = 0;
    param_1[0x29] = 0;
    param_1[0x2c] = 0;
    param_1[0x2b] = 0;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    param_1[0x28] = 0;
    param_1[0x27] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    *param_1 = lVar6;
    param_1[2] = 0;
    param_1[1] = 0x1000;
    param_1[0x42] = 0;
    *(undefined1 *)(param_1 + 0x43) = 0;
    return;
  }
  uVar7 = func_0x0001087c9084(8,0x8000);
  _free();
  uVar7 = __Unwind_Resume(uVar7);
  plVar8 = (long *)(*pcRam000000010b66ce00)(uVar7);
  lVar6 = *plVar8;
  *plVar8 = lVar6 + -1;
  if (lVar6 + -1 != 0) {
    return;
  }
  if ((extraout_x8[2] & 1) == 0) {
    return;
  }
  uVar20 = *extraout_x8;
  uVar25 = uVar20 - 1;
  uVar22 = uVar25 >> 0x26 & 0x1fff;
  if (uVar22 < (ulong)((long *)extraout_x8[1])[1]) {
    plVar8 = *(long **)(*(long *)extraout_x8[1] + uVar22 * 8);
  }
  else {
    plVar8 = (long *)0x0;
  }
  piVar9 = (int *)(*
                  ___ZN12sharded_slab3tid12REGISTRATION29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h2229902fa1c5e077E
                  )();
  uVar4 = (uint)(uVar25 >> 0x20);
  if (((char)piVar9[4] != '\x01') && (piVar9 = (int *)FUN_108a90734(), piVar9 == (int *)0x0)) {
LAB_1061e5a84:
    if (plVar8 != (long *)0x0) {
      uVar22 = 0x40 - LZCOUNT((uVar25 & 0x3fffffffff) + 0x20 >> 6);
      if (uVar22 < (ulong)plVar8[3]) {
        plVar8 = (long *)(plVar8[2] + (uVar22 & 0xffffffff) * 0x28);
        if ((*plVar8 != 0) &&
           (uVar10 = (uVar25 & 0x3fffffffff) - plVar8[4], uVar10 < (ulong)plVar8[1])) {
          uVar25 = uVar25 >> 0x33;
          uVar22 = *plVar8 + uVar10 * 0x60;
          uVar28 = *(ulong *)(uVar22 + 0x50);
          do {
            uVar19 = uVar28;
            if (uVar25 != uVar19 >> 0x33) {
              return;
            }
            uVar18 = uVar19 & 3;
            if (1 < uVar18) goto LAB_1061e5bcc;
            if (uVar18 != 0) goto LAB_1061e5b1c;
            uVar28 = *(ulong *)(uVar22 + 0x50);
          } while (uVar28 != uVar19);
          *(ulong *)(uVar22 + 0x50) = uVar19 & 0xfffffffffffffffc | 1;
LAB_1061e5b1c:
          if (((uVar19 & 0x7fffffffffffc) == 0) && (uVar25 == *(ulong *)(uVar22 + 0x50) >> 0x33)) {
            bVar14 = false;
            uVar28 = 0;
            iVar17 = -0x1ffe;
            if (uVar20 < 0xfff0000000000001) {
              iVar17 = 1;
            }
            uVar20 = *(ulong *)(uVar22 + 0x50);
            do {
              uVar18 = *(ulong *)(uVar22 + 0x50);
              if (uVar18 == uVar20) {
                *(ulong *)(uVar22 + 0x50) =
                     uVar20 & 0x7ffffffffffff | (ulong)(iVar17 + (uVar4 >> 0x13)) << 0x33;
                if ((uVar18 & 0x7fffffffffffc) == 0) {
                  __ZN95__LT_tracing_subscriber__registry__sharded__DataInner_u20_as_u20_sharded_slab__clear__Clear_GT_5clear17h489622b4c3023405E
                            (uVar22);
                  uVar20 = plVar8[2];
                  do {
                    *(ulong *)(uVar22 + 0x58) = uVar20;
                    uVar25 = plVar8[2];
                    bVar14 = uVar25 != uVar20;
                    uVar20 = uVar25;
                  } while (bVar14);
                  plVar8[2] = uVar10;
                  return;
                }
                uVar2 = (uint)uVar28 & 0x1f;
                if (uVar2 != 0x1f) {
                  iVar16 = 1 << (ulong)uVar2;
                  do {
                    InstructionSynchronizationBarrier();
                    iVar16 = iVar16 + -1;
                  } while (iVar16 != 0);
                }
                if (uVar28 < 8) {
                  uVar28 = uVar28 + 1;
                }
                else {
                  _sched_yield();
                }
                bVar14 = true;
                uVar18 = uVar20;
              }
              else {
                uVar28 = 0;
              }
              uVar20 = uVar18;
            } while ((bVar14) || (uVar25 == uVar18 >> 0x33));
          }
        }
      }
    }
    return;
  }
  if (*piVar9 == 1) {
    uVar10 = *(ulong *)(piVar9 + 2);
  }
  else {
    uVar10 = FUN_108a90148();
  }
  if (uVar22 != uVar10) goto LAB_1061e5a84;
  if (plVar8 == (long *)0x0) {
    return;
  }
  uVar22 = 0x40 - LZCOUNT((uVar25 & 0x3fffffffff) + 0x20 >> 6);
  if ((ulong)plVar8[3] <= uVar22) {
    return;
  }
  uVar10 = plVar8[1];
  if (uVar22 < uVar10) {
    plVar21 = (long *)(plVar8[2] + (uVar22 & 0xffffffff) * 0x28);
    if (*plVar21 == 0) {
      return;
    }
    uVar10 = (uVar25 & 0x3fffffffff) - plVar21[4];
    if ((ulong)plVar21[1] <= uVar10) {
      return;
    }
    unaff_x24 = uVar25 >> 0x33;
    lVar26 = *plVar8;
    lVar6 = *plVar21 + uVar10 * 0x60;
    uVar25 = *(ulong *)(lVar6 + 0x50);
    while( true ) {
      uVar28 = uVar25;
      if (unaff_x24 != uVar28 >> 0x33) {
        return;
      }
      uVar18 = uVar28 & 3;
      if (1 < uVar18) break;
      if (uVar18 != 0) goto LAB_1061e59a4;
      uVar25 = *(ulong *)(lVar6 + 0x50);
      if (uVar25 == uVar28) {
        *(ulong *)(lVar6 + 0x50) = uVar28 & 0xfffffffffffffffc | 1;
LAB_1061e59a4:
        if ((uVar28 & 0x7fffffffffffc) != 0) {
          return;
        }
        if (unaff_x24 != *(ulong *)(lVar6 + 0x50) >> 0x33) {
          return;
        }
        bVar14 = false;
        uVar25 = 0;
        iVar17 = -0x1ffe;
        if (uVar20 < 0xfff0000000000001) {
          iVar17 = 1;
        }
        uVar20 = *(ulong *)(lVar6 + 0x50);
        do {
          uVar28 = *(ulong *)(lVar6 + 0x50);
          if (uVar28 == uVar20) {
            *(ulong *)(lVar6 + 0x50) =
                 uVar20 & 0x7ffffffffffff | (ulong)(iVar17 + (uVar4 >> 0x13)) << 0x33;
            if ((uVar28 & 0x7fffffffffffc) == 0) {
              __ZN95__LT_tracing_subscriber__registry__sharded__DataInner_u20_as_u20_sharded_slab__clear__Clear_GT_5clear17h489622b4c3023405E
                        (lVar6);
              *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(lVar26 + uVar22 * 8);
              *(ulong *)(lVar26 + uVar22 * 8) = uVar10;
              return;
            }
            uVar2 = (uint)uVar25 & 0x1f;
            if (uVar2 != 0x1f) {
              iVar16 = 1 << (ulong)uVar2;
              do {
                InstructionSynchronizationBarrier();
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
            if (uVar25 < 8) {
              uVar25 = uVar25 + 1;
            }
            else {
              _sched_yield();
            }
            bVar14 = true;
            uVar28 = uVar20;
          }
          else {
            uVar25 = 0;
          }
          uVar20 = uVar28;
        } while ((bVar14) || (unaff_x24 == uVar28 >> 0x33));
        return;
      }
    }
LAB_1061e5bcc:
    if (uVar18 == 3) {
      return;
    }
    uStack_b8 = 2;
    puStack_b0 = &uStack_b8;
    puStack_a8 = &
                 __ZN4core3fmt3num53__LT_impl_u20_core__fmt__Binary_u20_for_u20_usize_GT_3fmt17hb54e0e9a7f0c0768E
    ;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bf64ad,&puStack_b0,&UNK_10b4d90a0);
    uVar10 = extraout_x1;
  }
  auVar29 = func_0x000108a07bdc(uVar22,uVar10,&UNK_10b4d8330);
  puVar13 = auVar29._8_8_;
  puVar11 = auVar29._0_8_;
  if (puVar13[4] == -0x8000000000000000) {
    lStack_188 = -0x8000000000000000;
    lVar6 = puVar13[3];
    if (lVar6 != 0) goto LAB_1061e5ca8;
LAB_1061e5dd4:
    lStack_178 = 0;
    uStack_170 = 8;
  }
  else {
    uVar7 = puVar13[5];
    lStack_188 = puVar13[6];
    if (lStack_188 == 0) {
LAB_1061e5db0:
      lStack_1a0 = 1;
    }
    else {
      lStack_1a0 = _malloc(lStack_188);
      if (lStack_1a0 == 0) {
        func_0x0001087c9084(1,lStack_188);
        goto LAB_1061e5db0;
      }
    }
    _memcpy(lStack_1a0,uVar7,lStack_188);
    lVar6 = puVar13[3];
    if (lVar6 == 0) goto LAB_1061e5dd4;
LAB_1061e5ca8:
    lVar26 = puVar13[2];
    lVar27 = lVar6 * 0x30;
    unaff_x24 = _malloc(lVar27);
    if (unaff_x24 == 0) {
      func_0x0001087c9084(8,lVar27);
      goto LAB_1061e5ea8;
    }
    lVar24 = 0;
    lVar23 = 0;
    plVar8 = (long *)((ulong)&lStack_140 | 1);
    do {
      lStack_178 = lVar6;
      uStack_170 = unaff_x24;
      if (lVar27 - lVar24 == 0) break;
      lVar1 = lVar26 + lVar24;
      uVar7 = *(undefined8 *)(lVar1 + 8);
      lVar3 = *(long *)(lVar1 + 0x10);
      if (lVar3 == 0) {
        lVar12 = 1;
      }
      else {
        lVar12 = _malloc(lVar3);
        if (lVar12 == 0) {
          func_0x0001087c9084(1,lVar3);
          goto LAB_1061e5ea8;
        }
      }
      _memcpy(lVar12,uVar7,lVar3);
      cVar15 = *(char *)(lVar1 + 0x18);
      if (cVar15 != '\a') {
        FUN_1061e4a98(&lStack_140,(char *)(lVar1 + 0x18));
        lStack_160 = *plVar8;
        uStack_158 = (undefined7)plVar8[1];
        uStack_151 = (undefined1)*(undefined8 *)((long)plVar8 + 0xf);
        uStack_150 = (undefined7)((ulong)*(undefined8 *)((long)plVar8 + 0xf) >> 8);
        cVar15 = (char)lStack_140;
      }
      lVar23 = lVar23 + 1;
      uStack_138 = uStack_158;
      lStack_140 = lStack_160;
      uStack_131 = uStack_151;
      uStack_130 = uStack_150;
      plVar21 = (long *)(unaff_x24 + lVar24);
      *plVar21 = lVar3;
      plVar21[1] = lVar12;
      plVar21[2] = lVar3;
      *(char *)(plVar21 + 3) = cVar15;
      *(ulong *)((long)plVar21 + 0x21) = CONCAT17(uStack_151,uStack_158);
      *(long *)((long)plVar21 + 0x19) = lStack_160;
      plVar21[5] = CONCAT71(uStack_150,uStack_151);
      lVar24 = lVar24 + 0x30;
    } while (lVar6 != lVar23);
  }
  uStack_138 = (undefined7)uStack_170;
  uStack_131 = (undefined1)(uStack_170 >> 0x38);
  lStack_140 = lStack_178;
  uStack_130 = (undefined7)lVar6;
  uStack_129 = (undefined1)((ulong)lVar6 >> 0x38);
  lVar6 = -0x8000000000000000;
  if (puVar13[7] != -0x8000000000000000) {
    uVar7 = puVar13[8];
    lVar6 = puVar13[9];
    if (lVar6 == 0) {
      unaff_x24 = 1;
    }
    else {
      unaff_x24 = _malloc(lVar6);
      if (unaff_x24 == 0) {
        func_0x0001087c9084(1,lVar6);
LAB_1061e5ea8:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1061e5eac);
        (*pcVar5)();
      }
    }
    _memcpy(unaff_x24,uVar7,lVar6);
  }
  uVar7 = *puVar13;
  puVar11[5] = lStack_1a0;
  puVar11[6] = lStack_188;
  puVar11[2] = CONCAT17(uStack_131,uStack_138);
  puVar11[1] = lStack_140;
  puVar11[3] = CONCAT17(uStack_129,uStack_130);
  puVar11[4] = lStack_188;
  puVar11[7] = lVar6;
  puVar11[8] = unaff_x24;
  puVar11[9] = lVar6;
  *puVar11 = uVar7;
  return;
}

