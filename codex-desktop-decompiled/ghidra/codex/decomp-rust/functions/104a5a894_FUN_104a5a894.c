
/* WARNING: Removing unreachable block (ram,0x000104a58d98) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a5a894(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  undefined1 (*pauVar10) [16];
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  bool bVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  undefined *puVar24;
  long *plVar25;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  undefined1 auStack_1e8 [24];
  long lStack_1d0;
  undefined1 uStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 auStack_188 [16];
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined1 auStack_d8 [16];
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  
  auVar8._8_8_ = uStack_230;
  auVar8._0_8_ = uStack_238;
  auVar7._8_8_ = uStack_230;
  auVar7._0_8_ = uStack_238;
  auVar6._8_8_ = uStack_230;
  auVar6._0_8_ = uStack_238;
  auVar5._8_8_ = uStack_230;
  auVar5._0_8_ = uStack_238;
  auVar4._8_8_ = uStack_230;
  auVar4._0_8_ = uStack_238;
  lVar16 = *param_2;
  uVar17 = *(ulong *)(lVar16 + 0x28);
  if (uVar17 < *(ulong *)(lVar16 + 0x20)) {
    do {
      bVar1 = *(byte *)(*(long *)(lVar16 + 0x18) + uVar17);
      if (0x3a < bVar1) break;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 == 0x3a) {
          *(ulong *)(lVar16 + 0x28) = uVar17 + 1;
          uVar17 = *(ulong *)(lVar16 + 0x20);
          if (uVar17 <= *(ulong *)(lVar16 + 0x28)) goto LAB_104a57db8;
          plVar23 = (long *)(lVar16 + 0x18);
          lVar19 = *plVar23;
          lVar12 = *(ulong *)(lVar16 + 0x28) + 5;
          goto LAB_104a57d84;
        }
        break;
      }
      uVar17 = uVar17 + 1;
      *(ulong *)(lVar16 + 0x28) = uVar17;
    } while (*(ulong *)(lVar16 + 0x20) != uVar17);
  }
  uVar15 = FUN_1089a7aec(lVar16,&stack0xffffffffffffffc8);
  *param_1 = 0x8000000000000005;
  param_1[1] = uVar15;
  return;
LAB_104a57d84:
  bVar1 = *(byte *)(lVar19 + lVar12 + -5);
  if (bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
    *(long *)(lVar16 + 0x28) = lVar12 + -4;
    lVar12 = lVar12 + 1;
    if (lVar12 - uVar17 == 5) goto LAB_104a57db8;
    goto LAB_104a57d84;
  }
  uVar21 = (uint)bVar1;
  if (bVar1 < 0x66) {
    if (bVar1 == 0x22) {
      *(long *)(lVar16 + 0x28) = lVar12 + -4;
      *(undefined8 *)(lVar16 + 0x10) = 0;
      __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                (&uStack_110,plVar23,lVar16);
      if (uStack_110 == (long *)0x2) {
        *param_1 = 0x8000000000000005;
        param_1[1] = plStack_108;
        return;
      }
      if (plStack_100 == (long *)0x0) {
        plVar23 = (long *)0x1;
      }
      else {
        plVar23 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_100,1);
        if (plVar23 == (long *)0x0) {
          func_0x0001087c9084(1,plStack_100);
          plVar25 = plStack_100;
          goto LAB_104a58d74;
        }
      }
      _memcpy(plVar23,plStack_108,plStack_100);
      uVar17 = (ulong)plStack_100 & 0xffffffffffffff00;
      plVar25 = (long *)0x8000000000000003;
      plVar13 = plStack_100;
      goto LAB_104a58c00;
    }
    if (bVar1 != 0x2d) {
      if (uVar21 != 0x5b) goto LAB_104a580d8;
      cVar2 = *(char *)(lVar16 + 0x38) + -1;
      *(char *)(lVar16 + 0x38) = cVar2;
      if (cVar2 == '\0') {
        uStack_110 = (long *)0x18;
        uVar15 = FUN_1089a7aec(lVar16,&uStack_110);
        *param_1 = 0x8000000000000005;
        param_1[1] = uVar15;
        return;
      }
      uVar18 = lVar12 - 4;
      *(ulong *)(lVar16 + 0x28) = uVar18;
      plStack_220 = (long *)0x0;
      plStack_218 = (long *)0x8;
      plStack_210 = (long *)0x0;
      if (uVar17 <= uVar18) goto LAB_104a58000;
      bVar20 = true;
      goto LAB_104a57ee4;
    }
    *(long *)(lVar16 + 0x28) = lVar12 + -4;
    FUN_104a564c0(&plStack_c0,lVar16,0);
    if (plStack_c0 == (long *)0x3) {
      *param_1 = 0x8000000000000005;
      param_1[1] = plStack_b8;
      return;
    }
    plVar25 = (long *)0x8000000000000002;
    plVar23 = plStack_b8;
    if (plStack_c0 == (long *)0x0) {
      plStack_100 = (long *)((ulong)plStack_b8 & 0x7fffffffffffffff);
      if (plStack_100 < (long *)0x7ff0000000000000) {
        uStack_110 = (long *)0x8000000000000000;
        FUN_104a59df8(&uStack_110);
        plStack_100 = extraout_x8;
        plVar13 = (long *)0x2;
      }
      else {
        plVar13 = (long *)0x3;
        plVar25 = (long *)0x8000000000000000;
      }
    }
    else {
      plStack_100 = plStack_c0;
      plVar13 = (long *)0x0;
      if (plStack_c0 != (long *)0x1) {
        plVar13 = (long *)((ulong)plStack_b8 >> 0x3f);
      }
    }
LAB_104a58678:
    uVar17 = 0;
    auVar8 = auVar5;
    goto LAB_104a58c00;
  }
  if (uVar21 == 0x73 || bVar1 < 0x73) {
    if (uVar21 == 0x66) {
      uVar22 = lVar12 - 4;
      *(ulong *)(lVar16 + 0x28) = uVar22;
      uVar18 = uVar22;
      if (uVar22 <= uVar17) {
        uVar18 = uVar17;
      }
      if (uVar17 <= uVar22) goto LAB_104a58330;
      cVar2 = *(char *)(lVar19 + lVar12 + -4);
      *(ulong *)(lVar16 + 0x28) = lVar12 - 3U;
      if (cVar2 == 'a') {
        if (lVar12 - 3U == uVar18) goto LAB_104a58330;
        cVar2 = *(char *)(lVar19 + lVar12 + -3);
        *(ulong *)(lVar16 + 0x28) = lVar12 - 2U;
        if (cVar2 == 'l') {
          if (lVar12 - 2U == uVar18) goto LAB_104a58330;
          cVar2 = *(char *)(lVar19 + lVar12 + -2);
          *(ulong *)(lVar16 + 0x28) = lVar12 - 1U;
          if (cVar2 == 's') {
            if (lVar12 - 1U == uVar18) goto LAB_104a58330;
            cVar2 = *(char *)(lVar19 + lVar12 + -1);
            *(long *)(lVar16 + 0x28) = lVar12;
            if (cVar2 == 'e') {
              uVar17 = 0;
              plVar25 = (long *)0x8000000000000001;
              plStack_100 = (long *)0x65;
              plVar13 = (long *)0x0;
              auVar8 = auVar6;
              goto LAB_104a58c00;
            }
          }
        }
      }
    }
    else {
      if (uVar21 != 0x6e) goto LAB_104a580d8;
      uVar22 = lVar12 - 4;
      *(ulong *)(lVar16 + 0x28) = uVar22;
      uVar18 = uVar22;
      if (uVar22 <= uVar17) {
        uVar18 = uVar17;
      }
      if (uVar17 <= uVar22) goto LAB_104a58330;
      cVar2 = *(char *)(lVar19 + lVar12 + -4);
      *(ulong *)(lVar16 + 0x28) = lVar12 - 3U;
      if (cVar2 != 'u') goto LAB_104a58990;
      if (lVar12 - 3U == uVar18) goto LAB_104a58330;
      cVar2 = *(char *)(lVar19 + lVar12 + -3);
      *(ulong *)(lVar16 + 0x28) = lVar12 - 2U;
      if (cVar2 == 'l') {
        if (lVar12 - 2U == uVar18) goto LAB_104a58330;
        cVar2 = *(char *)(lVar19 + lVar12 + -2);
        *(long *)(lVar16 + 0x28) = lVar12 + -1;
        if (cVar2 == 'l') {
          uVar17 = 0;
          plVar25 = (long *)0x8000000000000000;
          plStack_100 = (long *)0x6c;
          plVar13 = (long *)0x0;
          auVar8 = auVar4;
          goto LAB_104a58c00;
        }
      }
    }
  }
  else {
    if (uVar21 != 0x74) {
      if (uVar21 != 0x7b) {
LAB_104a580d8:
        if (uVar21 - 0x30 < 10) {
          FUN_104a564c0(&plStack_c0,lVar16,1);
          if (plStack_c0 == (long *)0x3) {
            *param_1 = 0x8000000000000005;
            param_1[1] = plStack_b8;
            return;
          }
          plVar25 = (long *)0x8000000000000002;
          plStack_100 = plStack_c0;
          plVar23 = plStack_b8;
          if (plStack_c0 == (long *)0x2) {
            plVar13 = (long *)((ulong)plStack_b8 >> 0x3f);
          }
          else if (plStack_c0 == (long *)0x1) {
            plVar13 = (long *)0x0;
          }
          else {
            plStack_100 = (long *)0x8000000000000000;
            if (((ulong)plStack_b8 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
              uStack_110 = (long *)0x8000000000000000;
              FUN_104a59df8(&uStack_110);
              plStack_100 = extraout_x8_00;
              plVar13 = (long *)0x2;
            }
            else {
              plVar13 = (long *)0x3;
              plVar25 = (long *)0x8000000000000000;
            }
          }
          goto LAB_104a58678;
        }
        uStack_110 = (long *)0xa;
        plVar13 = (long *)FUN_1089a7aec(lVar16,&uStack_110);
        plVar23 = plStack_100;
        goto LAB_104a58b54;
      }
      cVar2 = *(char *)(lVar16 + 0x38) + -1;
      *(char *)(lVar16 + 0x38) = cVar2;
      if (cVar2 == '\0') {
        uStack_110 = (long *)0x18;
        goto LAB_104a57dbc;
      }
      *(long *)(lVar16 + 0x28) = lVar12 + -4;
      uStack_1c8 = 1;
      lStack_1d0 = lVar16;
      FUN_104a5a524(&uStack_110,&lStack_1d0);
      lVar12 = lStack_1d0;
      plVar25 = plStack_108;
      if ((char)uStack_110 != '\x01') {
        if (uStack_110._1_1_ != '\x01') {
          pauVar10 = (undefined1 (*) [16])
                     (*
                     ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                     )();
          if (pauVar10[1][0] == '\x01') {
            auStack_1e8._0_16_ = *pauVar10;
          }
          else {
            auStack_1e8._0_16_ = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
            *(long *)(*pauVar10 + 8) = auStack_1e8._8_8_;
            pauVar10[1][0] = 1;
          }
          *(long *)*pauVar10 = auStack_1e8._0_8_ + 1;
          plStack_220 = (long *)0x0;
          plStack_218 = (long *)0x8;
          plStack_210 = (long *)0x0;
          plStack_200 = (long *)0x0;
          plStack_208 = (long *)&UNK_108c56c70;
          plStack_1f0 = (long *)0x0;
          plStack_1f8 = (long *)0x0;
          goto LAB_104a584fc;
        }
        *(long *)(lStack_1d0 + 0x28) = *(long *)(lStack_1d0 + 0x28) + 1;
        *(undefined8 *)(lStack_1d0 + 0x10) = 0;
        __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                  (&uStack_110,lStack_1d0 + 0x18,lStack_1d0);
        plVar25 = plStack_108;
        if ((uStack_110 != (long *)0x2) &&
           (func_0x000104a5a94c(&plStack_c0,plStack_108,plStack_100), plVar11 = plStack_b0,
           plVar25 = plStack_b8, plVar13 = plStack_c0, plStack_c0 != (long *)0x8000000000000001)) {
          if (plStack_c0 == (long *)0x8000000000000000) {
            uVar18 = *(ulong *)(lVar12 + 0x20);
            uVar17 = *(ulong *)(lVar12 + 0x28);
            if (uVar18 <= uVar17) goto LAB_104a586c4;
            goto LAB_104a5869c;
          }
          if (plStack_c0 != (long *)0x8000000000000002) {
            pauVar10 = (undefined1 (*) [16])
                       (*
                       ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                       )();
            if (pauVar10[1][0] == '\x01') {
              auStack_188 = *pauVar10;
            }
            else {
              auStack_188 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar10 + 8) = auStack_188._8_8_;
              pauVar10[1][0] = 1;
            }
            plStack_1a0 = (long *)0x0;
            plStack_1a8 = (long *)&UNK_108c56c70;
            *(long *)*pauVar10 = auStack_188._0_8_ + 1;
            plStack_1c0 = (long *)0x0;
            plStack_1b8 = (long *)0x8;
            plStack_190 = (long *)0x0;
            plStack_198 = (long *)0x0;
            plStack_1b0 = (long *)0x0;
            plStack_128 = plVar13;
            plStack_120 = plVar25;
            plStack_118 = plVar11;
            FUN_104a5a894(&plStack_220,&lStack_1d0);
            if (plStack_220 != (long *)0x8000000000000005) {
              func_0x000104a5aa60(&uStack_110,&plStack_1c0,&plStack_128,&plStack_220);
              plStack_b8 = plStack_100;
              plStack_c0 = plStack_108;
              plStack_a8 = plStack_f0;
              plStack_b0 = plStack_f8;
              plStack_98 = plStack_e0;
              plStack_a0 = plStack_e8;
              plStack_88 = (long *)auStack_d8._8_8_;
              plStack_90 = (long *)auStack_d8._0_8_;
              plStack_80 = plStack_c8;
              if (plStack_108 != (long *)0x8000000000000005) {
                FUN_104a59df8(&plStack_c0);
              }
              goto LAB_104a587bc;
            }
            if (plVar13 != (long *)0x0) {
              _free(plVar25);
            }
            goto LAB_104a589c4;
          }
        }
      }
      plStack_220 = (long *)0x8000000000000005;
      plStack_218 = plVar25;
      goto LAB_104a584fc;
    }
    uVar22 = lVar12 - 4;
    *(ulong *)(lVar16 + 0x28) = uVar22;
    uVar18 = uVar22;
    if (uVar22 <= uVar17) {
      uVar18 = uVar17;
    }
    if (uVar17 <= uVar22) {
LAB_104a58330:
      uStack_110 = (long *)0x5;
      goto LAB_104a58334;
    }
    cVar2 = *(char *)(lVar19 + lVar12 + -4);
    *(ulong *)(lVar16 + 0x28) = lVar12 - 3U;
    if (cVar2 != 'r') goto LAB_104a58990;
    if (lVar12 - 3U == uVar18) goto LAB_104a58330;
    cVar2 = *(char *)(lVar19 + lVar12 + -3);
    *(ulong *)(lVar16 + 0x28) = lVar12 - 2U;
    if (cVar2 == 'u') {
      if (lVar12 - 2U == uVar18) goto LAB_104a58330;
      cVar2 = *(char *)(lVar19 + lVar12 + -2);
      *(long *)(lVar16 + 0x28) = lVar12 + -1;
      if (cVar2 == 'e') {
        uVar17 = 0;
        plVar25 = (long *)0x8000000000000001;
        plStack_100 = (long *)0x65;
        plVar13 = (long *)0x1;
        auVar8 = auVar7;
        goto LAB_104a58c00;
      }
    }
  }
LAB_104a58990:
  uStack_110 = (long *)0x9;
LAB_104a58334:
  uVar15 = func_0x0001089a818c(lVar16,&uStack_110);
  goto LAB_104a57dcc;
LAB_104a57db8:
  uStack_110 = (long *)0x5;
LAB_104a57dbc:
  uVar15 = FUN_1089a7aec(lVar16,&uStack_110);
  goto LAB_104a57dcc;
LAB_104a57ee4:
  do {
    while (bVar1 = *(byte *)(*plVar23 + uVar18),
          bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
      uVar18 = uVar18 + 1;
      *(ulong *)(lVar16 + 0x28) = uVar18;
      if (uVar17 == uVar18) goto LAB_104a58000;
    }
    if (bVar1 == 0x5d) {
      plStack_1b8 = plStack_210;
      plStack_1c0 = plStack_218;
      plStack_c0 = (long *)0x8000000000000004;
      plStack_b8 = plStack_220;
      goto LAB_104a5827c;
    }
    if (!bVar20) {
      if (bVar1 != 0x2c) {
        uStack_110 = (long *)0x7;
        plVar25 = (long *)FUN_1089a7aec(lVar16,&uStack_110);
        goto LAB_104a58018;
      }
      uVar18 = uVar18 + 1;
      *(ulong *)(lVar16 + 0x28) = uVar18;
      if (uVar17 <= uVar18) {
LAB_104a58978:
        uStack_110 = (long *)0x5;
        plVar25 = (long *)FUN_1089a7aec(lVar16,&uStack_110);
        goto LAB_104a58018;
      }
      while (bVar1 = *(byte *)(*plVar23 + uVar18),
            bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
        uVar18 = uVar18 + 1;
        *(ulong *)(lVar16 + 0x28) = uVar18;
        if (uVar17 == uVar18) goto LAB_104a58978;
      }
      if (bVar1 == 0x5d) {
        uStack_110 = (long *)0x15;
        plVar25 = (long *)FUN_1089a7aec(lVar16,&uStack_110);
        goto LAB_104a58018;
      }
    }
    FUN_104a57d30(&uStack_110,lVar16);
    plVar13 = plStack_210;
    plVar25 = plStack_108;
    if (uStack_110 == (long *)0x8000000000000005) goto LAB_104a58018;
    plStack_a8 = plStack_f8;
    plStack_b0 = plStack_100;
    plStack_98 = plStack_e8;
    plStack_a0 = plStack_f0;
    plStack_88 = (long *)auStack_d8._0_8_;
    plStack_90 = plStack_e0;
    plStack_80 = (long *)auStack_d8._8_8_;
    plStack_c0 = uStack_110;
    plStack_b8 = plStack_108;
    if (plStack_210 == plStack_220) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&plStack_220);
    }
    bVar20 = false;
    plVar25 = plStack_218 + (long)plVar13 * 9;
    plVar25[1] = (long)plStack_b8;
    *plVar25 = (long)plStack_c0;
    plVar25[8] = (long)plStack_80;
    plVar25[7] = (long)plStack_88;
    plVar25[6] = (long)plStack_90;
    plVar25[5] = (long)plStack_98;
    plVar25[4] = (long)plStack_a0;
    plVar25[3] = (long)plStack_a8;
    plVar25[2] = (long)plStack_b0;
    plStack_210 = (long *)((long)plVar13 + 1);
    uVar17 = *(ulong *)(lVar16 + 0x20);
    uVar18 = *(ulong *)(lVar16 + 0x28);
  } while (uVar18 < uVar17);
LAB_104a58000:
  uStack_110 = (long *)0x2;
  plVar25 = (long *)FUN_1089a7aec(lVar16,&uStack_110);
LAB_104a58018:
  plVar13 = plStack_218;
  puVar24 = (undefined *)((long)plStack_210 + 1);
  plVar11 = plStack_218;
  while (puVar24 = puVar24 + -1, puVar24 != (undefined *)0x0) {
    FUN_104a59df8(plVar11);
    plVar11 = plVar11 + 9;
  }
  if (plStack_220 != (long *)0x0) {
    _free(plVar13);
  }
  uVar17 = *(ulong *)(lVar16 + 0x20);
  uVar18 = *(ulong *)(lVar16 + 0x28);
  plStack_c0 = (long *)0x8000000000000005;
  plStack_b8 = plVar25;
LAB_104a5827c:
  *(char *)(lVar16 + 0x38) = *(char *)(lVar16 + 0x38) + '\x01';
  plStack_a8 = plStack_1b8;
  plStack_b0 = plStack_1c0;
  plStack_98 = plStack_1a8;
  plStack_a0 = plStack_1b0;
  plStack_88 = plStack_198;
  plStack_90 = plStack_1a0;
  plStack_80 = plStack_190;
  if (uVar18 < uVar17) {
    do {
      bVar1 = *(byte *)(*plVar23 + uVar18);
      if (0x2c < bVar1) {
LAB_104a58bb4:
        if (bVar1 != 0x5d) {
          plStack_220 = (long *)0x16;
          plVar23 = (long *)FUN_1089a7aec(lVar16,&plStack_220);
          goto LAB_104a582f8;
        }
        *(ulong *)(lVar16 + 0x28) = uVar18 + 1;
        auStack_d8._8_8_ = plStack_190;
        auStack_d8._0_8_ = plStack_198;
        plVar25 = plStack_c0;
        plVar13 = plStack_b8;
        plVar23 = plStack_1c0;
        plStack_100 = plStack_1b8;
        plStack_250 = plStack_1b0;
        plStack_248 = plStack_1a8;
        plStack_240 = plStack_1a0;
        goto joined_r0x000104a58be4;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x2c) goto LAB_104a58bb4;
        uVar18 = uVar18 + 1;
        *(ulong *)(lVar16 + 0x28) = uVar18;
        if (uVar18 < uVar17) goto LAB_104a58b88;
        goto LAB_104a58cd4;
      }
      uVar18 = uVar18 + 1;
      *(ulong *)(lVar16 + 0x28) = uVar18;
    } while (uVar17 != uVar18);
  }
  plStack_220 = (long *)0x2;
  plVar23 = (long *)FUN_1089a7aec(lVar16,&plStack_220);
  goto LAB_104a582f8;
  while( true ) {
    uVar18 = uVar18 + 1;
    *(ulong *)(lVar16 + 0x28) = uVar18;
    if (uVar17 == uVar18) break;
LAB_104a58b88:
    bVar1 = *(byte *)(*plVar23 + uVar18);
    if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if (bVar1 == 0x5d) {
        plStack_220 = (long *)0x15;
        plVar23 = (long *)FUN_1089a7aec(lVar16,&plStack_220);
        goto LAB_104a582f8;
      }
      break;
    }
  }
LAB_104a58cd4:
  plStack_220 = (long *)0x16;
  plVar23 = (long *)FUN_1089a7aec(lVar16,&plStack_220);
LAB_104a582f8:
  plVar13 = plStack_b8;
  plStack_108 = plStack_b8;
  uStack_110 = plStack_c0;
  plStack_f8 = plStack_a8;
  plStack_100 = plStack_b0;
  plStack_e8 = plStack_98;
  plStack_f0 = plStack_a0;
  auStack_d8._0_8_ = plStack_88;
  plStack_e0 = plStack_90;
  auStack_d8._8_8_ = plStack_80;
  auVar3._8_8_ = plStack_80;
  auVar3._0_8_ = plStack_88;
  if (plStack_c0 != (long *)0x8000000000000005) goto LAB_104a585b4;
  plStack_c8 = plVar23;
  FUN_104a59f1c(plVar23);
  goto LAB_104a58594;
  while( true ) {
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x3a) goto LAB_104a58d48;
      uVar17 = uVar17 + 1;
      *(ulong *)(lVar12 + 0x28) = uVar17;
      if (uVar17 < uVar18) goto LAB_104a586f0;
      goto LAB_104a58718;
    }
    uVar17 = uVar17 + 1;
    *(ulong *)(lVar12 + 0x28) = uVar17;
    if (uVar18 == uVar17) break;
LAB_104a5869c:
    bVar1 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar17);
    if (0x3a < bVar1) {
LAB_104a58d48:
      uStack_110 = (long *)0x6;
      goto LAB_104a5871c;
    }
  }
LAB_104a586c4:
  uStack_110 = (long *)0x3;
  goto LAB_104a5871c;
LAB_104a587bc:
  FUN_104a5a524(&uStack_110,&lStack_1d0);
  lVar12 = lStack_1d0;
  plStack_218 = plStack_108;
  if ((char)uStack_110 != '\x01') {
    auVar8 = auStack_188;
    if (uStack_110._1_1_ != '\x01') {
LAB_104a58a60:
      auStack_1e8._0_16_ = auVar8;
      plStack_1f8 = plStack_198;
      plStack_200 = plStack_1a0;
      plStack_1f0 = plStack_190;
      plStack_220 = plStack_1c0;
      plStack_208 = plStack_1a8;
      plStack_210 = plStack_1b0;
      plStack_218 = plStack_1b8;
      auStack_188 = auStack_1e8._0_16_;
      goto LAB_104a584fc;
    }
    *(long *)(lStack_1d0 + 0x28) = *(long *)(lStack_1d0 + 0x28) + 1;
    *(undefined8 *)(lStack_1d0 + 0x10) = 0;
    __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
              (&uStack_110,lStack_1d0 + 0x18,lStack_1d0);
    plVar25 = plStack_100;
    plVar13 = plStack_108;
    plStack_218 = plStack_108;
    if (uStack_110 == (long *)0x2) goto LAB_104a589c0;
    if (plStack_100 == (long *)0x0) {
      _memcpy(1,plStack_108,0);
      plVar25 = (long *)0x0;
      plVar11 = (long *)0x1;
    }
    else {
      plVar11 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_100,1);
      if (plVar11 == (long *)0x0) {
LAB_104a58d74:
        func_0x0001087c9084(1,plVar25);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104a58d84);
        (*pcVar9)();
      }
      _memcpy(plVar11,plVar13,plVar25);
      plStack_218 = plVar11;
      if ((plVar25 == (long *)0x8000000000000001) || (plVar25 == (long *)0x8000000000000000))
      goto LAB_104a589c0;
    }
    uVar17 = *(ulong *)(lVar12 + 0x28);
    if (*(ulong *)(lVar12 + 0x20) <= uVar17) {
LAB_104a58998:
      plStack_c0 = (long *)0x3;
      plStack_108 = (long *)FUN_1089a7aec(lVar12,&plStack_c0);
joined_r0x000104a58aac:
      plStack_218 = plStack_108;
      if (plVar25 != (long *)0x0) {
        _free(plVar11);
      }
      goto LAB_104a589c0;
    }
    while( true ) {
      bVar1 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar17);
      if (0x3a < bVar1) goto LAB_104a58d1c;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar17 = uVar17 + 1;
      *(ulong *)(lVar12 + 0x28) = uVar17;
      if (*(ulong *)(lVar12 + 0x20) == uVar17) goto LAB_104a58998;
    }
    if ((ulong)bVar1 != 0x3a) {
LAB_104a58d1c:
      plStack_c0 = (long *)0x6;
      plStack_108 = (long *)FUN_1089a7aec(lVar12,&plStack_c0);
      goto joined_r0x000104a58aac;
    }
    *(ulong *)(lVar12 + 0x28) = uVar17 + 1;
    FUN_104a57d30(&uStack_110,lVar12);
    if (uStack_110 == (long *)0x8000000000000005) goto joined_r0x000104a58aac;
    plStack_148 = plStack_e8;
    plStack_150 = plStack_f0;
    plStack_138 = (long *)auStack_d8._0_8_;
    plStack_140 = plStack_e0;
    plStack_130 = (long *)auStack_d8._8_8_;
    plStack_168 = plStack_108;
    plStack_170 = uStack_110;
    plStack_158 = plStack_f8;
    plStack_160 = plStack_100;
    auVar8 = auStack_188;
    if (plVar25 == (long *)0x8000000000000000) goto LAB_104a58a60;
    plStack_218 = plVar11;
    if (plVar25 == (long *)0x8000000000000001) goto LAB_104a589c0;
    plStack_128 = plVar25;
    plStack_120 = plVar11;
    plStack_118 = plVar25;
    func_0x000104a5aa60(&uStack_110,&plStack_1c0,&plStack_128,&plStack_170);
    plStack_b8 = plStack_100;
    plStack_c0 = plStack_108;
    plStack_a8 = plStack_f0;
    plStack_b0 = plStack_f8;
    plStack_98 = plStack_e0;
    plStack_a0 = plStack_e8;
    plStack_88 = (long *)auStack_d8._8_8_;
    plStack_90 = (long *)auStack_d8._0_8_;
    plStack_80 = plStack_c8;
    if (plStack_108 != (long *)0x8000000000000005) {
      FUN_104a59df8(&plStack_c0);
    }
    goto LAB_104a587bc;
  }
LAB_104a589c0:
  plStack_220 = (long *)0x8000000000000005;
LAB_104a589c4:
  if ((plStack_1a0 != (long *)0x0) && ((long)plStack_1a0 * 9 != -0x11)) {
    _free(plStack_1a8 + (-1 - (long)plStack_1a0));
  }
  func_0x000104a59ce8(&plStack_1c0);
  goto LAB_104a584fc;
code_r0x000104a5853c:
  uVar17 = uVar17 + 1;
  *(ulong *)(lVar16 + 0x28) = uVar17;
  if (*(ulong *)(lVar16 + 0x20) == uVar17) goto LAB_104a5854c;
  goto LAB_104a58524;
  while( true ) {
    uVar17 = uVar17 + 1;
    *(ulong *)(lVar12 + 0x28) = uVar17;
    if (uVar18 == uVar17) break;
LAB_104a586f0:
    bVar1 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar17);
    if (0x22 < bVar1) {
LAB_104a58d50:
      uVar15 = func_0x0001089a7e6c(lVar12,&plStack_c0);
      plStack_108 = (long *)func_0x0001089a8294(uVar15,lVar12);
      goto LAB_104a58764;
    }
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x22) goto LAB_104a58d50;
      *(ulong *)(lVar12 + 0x28) = uVar17 + 1;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                (&uStack_110,lVar12 + 0x18,lVar12);
      plVar11 = plStack_100;
      plVar13 = plStack_108;
      if (uStack_110 == (long *)0x2) goto LAB_104a58764;
      if (plStack_100 == (long *)0x0) {
        lVar12 = 1;
      }
      else {
        lVar12 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_100,1);
        if (lVar12 == 0) {
          uVar15 = func_0x0001087c9084(1,plVar11);
          _free(plVar25);
          __Unwind_Resume(uVar15);
          puVar14 = (ulong *)func_0x000108a07bc4();
          lVar16 = 0;
          if (6 < *puVar14) {
            lVar16 = *puVar14 - 7;
          }
                    /* WARNING: Could not recover jumptable at 0x000104a58ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_104a58ec4 + (ulong)(byte)(&UNK_108e65ed4)[lVar16] * 4))();
          return;
        }
      }
      _memcpy(lVar12,plVar13,plVar11);
      FUN_104a56ab4(&uStack_110,lVar12,plVar11);
      if (uStack_110 == (long *)0x8000000000000005) {
        plStack_218 = (long *)func_0x0001089a84b4(plStack_108);
        plStack_220 = (long *)0x8000000000000005;
      }
      else {
        plStack_1f8 = plStack_e8;
        plStack_200 = plStack_f0;
        auStack_1e8._0_8_ = auStack_d8._0_8_;
        plStack_1f0 = plStack_e0;
        auStack_1e8._8_8_ = auStack_d8._8_8_;
        plStack_218 = plStack_108;
        plStack_220 = uStack_110;
        plStack_208 = plStack_f8;
        plStack_210 = plStack_100;
      }
      if (plVar11 != (long *)0x0) {
        _free(lVar12);
      }
      goto LAB_104a584fc;
    }
  }
LAB_104a58718:
  uStack_110 = (long *)0x5;
LAB_104a5871c:
  plStack_108 = (long *)FUN_1089a7aec(lVar12,&uStack_110);
LAB_104a58764:
  plStack_220 = (long *)0x8000000000000005;
  plStack_218 = plStack_108;
LAB_104a584fc:
  *(char *)(lVar16 + 0x38) = *(char *)(lVar16 + 0x38) + '\x01';
  uVar17 = *(ulong *)(lVar16 + 0x28);
  if (uVar17 < *(ulong *)(lVar16 + 0x20)) {
LAB_104a58524:
    bVar1 = *(byte *)(*plVar23 + uVar17);
    if (bVar1 < 0x2d) {
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) goto code_r0x000104a5853c;
      if ((ulong)bVar1 != 0x2c) goto LAB_104a58af8;
      plStack_c0 = (long *)0x15;
      plVar23 = (long *)FUN_1089a7aec(lVar16,&plStack_c0);
    }
    else {
LAB_104a58af8:
      if (bVar1 == 0x7d) {
        *(ulong *)(lVar16 + 0x28) = uVar17 + 1;
        plVar25 = plStack_220;
        plVar13 = plStack_218;
        plVar23 = plStack_210;
        plStack_100 = plStack_208;
        plStack_250 = plStack_200;
        plStack_248 = plStack_1f8;
        plStack_240 = plStack_1f0;
        auStack_d8 = auStack_1e8._0_16_;
joined_r0x000104a58be4:
        uStack_110 = plVar25;
        plStack_108 = plVar13;
        plStack_f8 = plStack_100;
        plStack_f0 = plStack_250;
        plStack_e8 = plStack_248;
        plStack_e0 = plStack_240;
        if ((plVar25 != (long *)0x8000000000000005) && (plVar25 != (long *)0x8000000000000005)) {
          uVar17 = (ulong)plVar13 & 0xffffffffffffff00;
          auVar8 = auStack_d8;
LAB_104a58c00:
          uStack_230 = auVar8._8_8_;
          uStack_238 = auVar8._0_8_;
          *param_1 = plVar25;
          param_1[1] = (ulong)plVar13 & 0xff | uVar17;
          param_1[2] = plVar23;
          param_1[3] = plStack_100;
          param_1[5] = plStack_248;
          param_1[4] = plStack_250;
          param_1[7] = uStack_238;
          param_1[6] = plStack_240;
          param_1[8] = uStack_230;
          return;
        }
        goto LAB_104a58b54;
      }
      plStack_c0 = (long *)0x16;
      plVar23 = (long *)FUN_1089a7aec(lVar16,&plStack_c0);
    }
    goto LAB_104a58560;
  }
LAB_104a5854c:
  plStack_c0 = (long *)0x3;
  plVar23 = (long *)FUN_1089a7aec(lVar16,&plStack_c0);
LAB_104a58560:
  plVar13 = plStack_218;
  plStack_108 = plStack_218;
  uStack_110 = plStack_220;
  plStack_f8 = plStack_208;
  plStack_100 = plStack_210;
  plStack_e8 = plStack_1f8;
  plStack_f0 = plStack_200;
  plStack_e0 = plStack_1f0;
  auVar3 = auStack_1e8._0_16_;
  if (plStack_220 == (long *)0x8000000000000005) {
    plStack_c8 = plVar23;
    auStack_d8 = auStack_1e8._0_16_;
    FUN_104a59f1c(plVar23);
LAB_104a58594:
    _free(plVar23);
    plVar23 = plStack_100;
  }
  else {
LAB_104a585b4:
    plVar13 = plVar23;
    plStack_c8 = plVar13;
    auStack_d8 = auVar3;
    FUN_104a59df8(&uStack_110);
    plVar23 = plStack_100;
  }
LAB_104a58b54:
  plStack_100 = plVar23;
  uVar15 = func_0x0001089a8294(plVar13,lVar16);
LAB_104a57dcc:
  *param_1 = 0x8000000000000005;
  param_1[1] = uVar15;
  return;
}

