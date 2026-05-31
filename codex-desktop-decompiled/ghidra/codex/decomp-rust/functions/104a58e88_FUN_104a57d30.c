
/* WARNING: Removing unreachable block (ram,0x000104a58d98) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a57d30(undefined8 *param_1,long param_2)

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
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong *puVar15;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  bool bVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  undefined *puVar23;
  long *plVar24;
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
  uVar16 = *(ulong *)(param_2 + 0x20);
  if (*(ulong *)(param_2 + 0x28) < uVar16) {
    plVar22 = (long *)(param_2 + 0x18);
    lVar18 = *plVar22;
    lVar13 = *(ulong *)(param_2 + 0x28) + 5;
    while (bVar1 = *(byte *)(lVar18 + lVar13 + -5),
          bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
      *(long *)(param_2 + 0x28) = lVar13 + -4;
      lVar13 = lVar13 + 1;
      if (lVar13 - uVar16 == 5) goto LAB_104a57db8;
    }
    uVar20 = (uint)bVar1;
    if (bVar1 < 0x66) {
      if (bVar1 == 0x22) {
        *(long *)(param_2 + 0x28) = lVar13 + -4;
        *(undefined8 *)(param_2 + 0x10) = 0;
        __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                  (&uStack_110,plVar22,param_2);
        if (uStack_110 == (long *)0x2) {
          *param_1 = 0x8000000000000005;
          param_1[1] = plStack_108;
          return;
        }
        if (plStack_100 == (long *)0x0) {
          plVar22 = (long *)0x1;
        }
        else {
          plVar22 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_100,1);
          if (plVar22 == (long *)0x0) {
            func_0x0001087c9084(1,plStack_100);
            plVar24 = plStack_100;
            goto LAB_104a58d74;
          }
        }
        _memcpy(plVar22,plStack_108,plStack_100);
        uVar16 = (ulong)plStack_100 & 0xffffffffffffff00;
        plVar24 = (long *)0x8000000000000003;
        plVar14 = plStack_100;
        goto LAB_104a58c00;
      }
      if (bVar1 != 0x2d) {
        if (uVar20 != 0x5b) goto LAB_104a580d8;
        cVar2 = *(char *)(param_2 + 0x38) + -1;
        *(char *)(param_2 + 0x38) = cVar2;
        if (cVar2 == '\0') {
          uStack_110 = (long *)0x18;
          uVar10 = FUN_1089a7aec(param_2,&uStack_110);
          *param_1 = 0x8000000000000005;
          param_1[1] = uVar10;
          return;
        }
        uVar17 = lVar13 - 4;
        *(ulong *)(param_2 + 0x28) = uVar17;
        plStack_220 = (long *)0x0;
        plStack_218 = (long *)0x8;
        plStack_210 = (long *)0x0;
        if (uVar16 <= uVar17) goto LAB_104a58000;
        bVar19 = true;
        goto LAB_104a57ee4;
      }
      *(long *)(param_2 + 0x28) = lVar13 + -4;
      func_0x000104a564c0(&plStack_c0,param_2,0);
      if (plStack_c0 == (long *)0x3) {
        *param_1 = 0x8000000000000005;
        param_1[1] = plStack_b8;
        return;
      }
      plVar24 = (long *)0x8000000000000002;
      plVar22 = plStack_b8;
      if (plStack_c0 == (long *)0x0) {
        plStack_100 = (long *)((ulong)plStack_b8 & 0x7fffffffffffffff);
        if (plStack_100 < (long *)0x7ff0000000000000) {
          uStack_110 = (long *)0x8000000000000000;
          FUN_104a59df8(&uStack_110);
          plStack_100 = extraout_x8;
          plVar14 = (long *)0x2;
        }
        else {
          plVar14 = (long *)0x3;
          plVar24 = (long *)0x8000000000000000;
        }
      }
      else {
        plStack_100 = plStack_c0;
        plVar14 = (long *)0x0;
        if (plStack_c0 != (long *)0x1) {
          plVar14 = (long *)((ulong)plStack_b8 >> 0x3f);
        }
      }
LAB_104a58678:
      uVar16 = 0;
      auVar8 = auVar5;
      goto LAB_104a58c00;
    }
    if (uVar20 == 0x73 || bVar1 < 0x73) {
      if (uVar20 == 0x66) {
        uVar21 = lVar13 - 4;
        *(ulong *)(param_2 + 0x28) = uVar21;
        uVar17 = uVar21;
        if (uVar21 <= uVar16) {
          uVar17 = uVar16;
        }
        if (uVar16 <= uVar21) goto LAB_104a58330;
        cVar2 = *(char *)(lVar18 + lVar13 + -4);
        *(ulong *)(param_2 + 0x28) = lVar13 - 3U;
        if (cVar2 == 'a') {
          if (lVar13 - 3U == uVar17) goto LAB_104a58330;
          cVar2 = *(char *)(lVar18 + lVar13 + -3);
          *(ulong *)(param_2 + 0x28) = lVar13 - 2U;
          if (cVar2 == 'l') {
            if (lVar13 - 2U == uVar17) goto LAB_104a58330;
            cVar2 = *(char *)(lVar18 + lVar13 + -2);
            *(ulong *)(param_2 + 0x28) = lVar13 - 1U;
            if (cVar2 == 's') {
              if (lVar13 - 1U == uVar17) goto LAB_104a58330;
              cVar2 = *(char *)(lVar18 + lVar13 + -1);
              *(long *)(param_2 + 0x28) = lVar13;
              if (cVar2 == 'e') {
                uVar16 = 0;
                plVar24 = (long *)0x8000000000000001;
                plStack_100 = (long *)0x65;
                plVar14 = (long *)0x0;
                auVar8 = auVar6;
                goto LAB_104a58c00;
              }
            }
          }
        }
      }
      else {
        if (uVar20 != 0x6e) goto LAB_104a580d8;
        uVar21 = lVar13 - 4;
        *(ulong *)(param_2 + 0x28) = uVar21;
        uVar17 = uVar21;
        if (uVar21 <= uVar16) {
          uVar17 = uVar16;
        }
        if (uVar16 <= uVar21) goto LAB_104a58330;
        cVar2 = *(char *)(lVar18 + lVar13 + -4);
        *(ulong *)(param_2 + 0x28) = lVar13 - 3U;
        if (cVar2 != 'u') goto LAB_104a58990;
        if (lVar13 - 3U == uVar17) goto LAB_104a58330;
        cVar2 = *(char *)(lVar18 + lVar13 + -3);
        *(ulong *)(param_2 + 0x28) = lVar13 - 2U;
        if (cVar2 == 'l') {
          if (lVar13 - 2U == uVar17) goto LAB_104a58330;
          cVar2 = *(char *)(lVar18 + lVar13 + -2);
          *(long *)(param_2 + 0x28) = lVar13 + -1;
          if (cVar2 == 'l') {
            uVar16 = 0;
            plVar24 = (long *)0x8000000000000000;
            plStack_100 = (long *)0x6c;
            plVar14 = (long *)0x0;
            auVar8 = auVar4;
            goto LAB_104a58c00;
          }
        }
      }
    }
    else {
      if (uVar20 != 0x74) {
        if (uVar20 != 0x7b) {
LAB_104a580d8:
          if (uVar20 - 0x30 < 10) {
            func_0x000104a564c0(&plStack_c0,param_2,1);
            if (plStack_c0 == (long *)0x3) {
              *param_1 = 0x8000000000000005;
              param_1[1] = plStack_b8;
              return;
            }
            plVar24 = (long *)0x8000000000000002;
            plStack_100 = plStack_c0;
            plVar22 = plStack_b8;
            if (plStack_c0 == (long *)0x2) {
              plVar14 = (long *)((ulong)plStack_b8 >> 0x3f);
            }
            else if (plStack_c0 == (long *)0x1) {
              plVar14 = (long *)0x0;
            }
            else {
              plStack_100 = (long *)0x8000000000000000;
              if (((ulong)plStack_b8 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
                uStack_110 = (long *)0x8000000000000000;
                FUN_104a59df8(&uStack_110);
                plStack_100 = extraout_x8_00;
                plVar14 = (long *)0x2;
              }
              else {
                plVar14 = (long *)0x3;
                plVar24 = (long *)0x8000000000000000;
              }
            }
            goto LAB_104a58678;
          }
          uStack_110 = (long *)0xa;
          plVar14 = (long *)FUN_1089a7aec(param_2,&uStack_110);
          plVar22 = plStack_100;
          goto LAB_104a58b54;
        }
        cVar2 = *(char *)(param_2 + 0x38) + -1;
        *(char *)(param_2 + 0x38) = cVar2;
        if (cVar2 == '\0') {
          uStack_110 = (long *)0x18;
          goto LAB_104a57dbc;
        }
        *(long *)(param_2 + 0x28) = lVar13 + -4;
        uStack_1c8 = 1;
        lStack_1d0 = param_2;
        func_0x000104a5a524(&uStack_110,&lStack_1d0);
        lVar13 = lStack_1d0;
        plVar24 = plStack_108;
        if ((char)uStack_110 != '\x01') {
          if (uStack_110._1_1_ != '\x01') {
            pauVar11 = (undefined1 (*) [16])
                       (*
                       ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                       )();
            if (pauVar11[1][0] == '\x01') {
              auStack_1e8._0_16_ = *pauVar11;
            }
            else {
              auStack_1e8._0_16_ = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar11 + 8) = auStack_1e8._8_8_;
              pauVar11[1][0] = 1;
            }
            *(long *)*pauVar11 = auStack_1e8._0_8_ + 1;
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
          plVar24 = plStack_108;
          if ((uStack_110 != (long *)0x2) &&
             (func_0x000104a5a94c(&plStack_c0,plStack_108,plStack_100), plVar12 = plStack_b0,
             plVar24 = plStack_b8, plVar14 = plStack_c0, plStack_c0 != (long *)0x8000000000000001))
          {
            if (plStack_c0 == (long *)0x8000000000000000) {
              uVar17 = *(ulong *)(lVar13 + 0x20);
              uVar16 = *(ulong *)(lVar13 + 0x28);
              if (uVar17 <= uVar16) goto LAB_104a586c4;
              goto LAB_104a5869c;
            }
            if (plStack_c0 != (long *)0x8000000000000002) {
              pauVar11 = (undefined1 (*) [16])
                         (*
                         ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                         )();
              if (pauVar11[1][0] == '\x01') {
                auStack_188 = *pauVar11;
              }
              else {
                auStack_188 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                *(long *)(*pauVar11 + 8) = auStack_188._8_8_;
                pauVar11[1][0] = 1;
              }
              plStack_1a0 = (long *)0x0;
              plStack_1a8 = (long *)&UNK_108c56c70;
              *(long *)*pauVar11 = auStack_188._0_8_ + 1;
              plStack_1c0 = (long *)0x0;
              plStack_1b8 = (long *)0x8;
              plStack_190 = (long *)0x0;
              plStack_198 = (long *)0x0;
              plStack_1b0 = (long *)0x0;
              plStack_128 = plVar14;
              plStack_120 = plVar24;
              plStack_118 = plVar12;
              func_0x000104a5a894(&plStack_220,&lStack_1d0);
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
              if (plVar14 != (long *)0x0) {
                _free(plVar24);
              }
              goto LAB_104a589c4;
            }
          }
        }
        plStack_220 = (long *)0x8000000000000005;
        plStack_218 = plVar24;
        goto LAB_104a584fc;
      }
      uVar21 = lVar13 - 4;
      *(ulong *)(param_2 + 0x28) = uVar21;
      uVar17 = uVar21;
      if (uVar21 <= uVar16) {
        uVar17 = uVar16;
      }
      if (uVar16 <= uVar21) {
LAB_104a58330:
        uStack_110 = (long *)0x5;
        goto LAB_104a58334;
      }
      cVar2 = *(char *)(lVar18 + lVar13 + -4);
      *(ulong *)(param_2 + 0x28) = lVar13 - 3U;
      if (cVar2 != 'r') goto LAB_104a58990;
      if (lVar13 - 3U == uVar17) goto LAB_104a58330;
      cVar2 = *(char *)(lVar18 + lVar13 + -3);
      *(ulong *)(param_2 + 0x28) = lVar13 - 2U;
      if (cVar2 == 'u') {
        if (lVar13 - 2U == uVar17) goto LAB_104a58330;
        cVar2 = *(char *)(lVar18 + lVar13 + -2);
        *(long *)(param_2 + 0x28) = lVar13 + -1;
        if (cVar2 == 'e') {
          uVar16 = 0;
          plVar24 = (long *)0x8000000000000001;
          plStack_100 = (long *)0x65;
          plVar14 = (long *)0x1;
          auVar8 = auVar7;
          goto LAB_104a58c00;
        }
      }
    }
LAB_104a58990:
    uStack_110 = (long *)0x9;
LAB_104a58334:
    uVar10 = func_0x0001089a818c(param_2,&uStack_110);
    goto LAB_104a57dcc;
  }
LAB_104a57db8:
  uStack_110 = (long *)0x5;
LAB_104a57dbc:
  uVar10 = FUN_1089a7aec(param_2,&uStack_110);
  goto LAB_104a57dcc;
LAB_104a57ee4:
  do {
    while (bVar1 = *(byte *)(*plVar22 + uVar17),
          bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
      uVar17 = uVar17 + 1;
      *(ulong *)(param_2 + 0x28) = uVar17;
      if (uVar16 == uVar17) goto LAB_104a58000;
    }
    if (bVar1 == 0x5d) {
      plStack_1b8 = plStack_210;
      plStack_1c0 = plStack_218;
      plStack_c0 = (long *)0x8000000000000004;
      plStack_b8 = plStack_220;
      goto LAB_104a5827c;
    }
    if (!bVar19) {
      if (bVar1 != 0x2c) {
        uStack_110 = (long *)0x7;
        plVar24 = (long *)FUN_1089a7aec(param_2,&uStack_110);
        goto LAB_104a58018;
      }
      uVar17 = uVar17 + 1;
      *(ulong *)(param_2 + 0x28) = uVar17;
      if (uVar16 <= uVar17) {
LAB_104a58978:
        uStack_110 = (long *)0x5;
        plVar24 = (long *)FUN_1089a7aec(param_2,&uStack_110);
        goto LAB_104a58018;
      }
      while (bVar1 = *(byte *)(*plVar22 + uVar17),
            bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
        uVar17 = uVar17 + 1;
        *(ulong *)(param_2 + 0x28) = uVar17;
        if (uVar16 == uVar17) goto LAB_104a58978;
      }
      if (bVar1 == 0x5d) {
        uStack_110 = (long *)0x15;
        plVar24 = (long *)FUN_1089a7aec(param_2,&uStack_110);
        goto LAB_104a58018;
      }
    }
    FUN_104a57d30(&uStack_110,param_2);
    plVar14 = plStack_210;
    plVar24 = plStack_108;
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
    bVar19 = false;
    plVar24 = plStack_218 + (long)plVar14 * 9;
    plVar24[1] = (long)plStack_b8;
    *plVar24 = (long)plStack_c0;
    plVar24[8] = (long)plStack_80;
    plVar24[7] = (long)plStack_88;
    plVar24[6] = (long)plStack_90;
    plVar24[5] = (long)plStack_98;
    plVar24[4] = (long)plStack_a0;
    plVar24[3] = (long)plStack_a8;
    plVar24[2] = (long)plStack_b0;
    plStack_210 = (long *)((long)plVar14 + 1);
    uVar16 = *(ulong *)(param_2 + 0x20);
    uVar17 = *(ulong *)(param_2 + 0x28);
  } while (uVar17 < uVar16);
LAB_104a58000:
  uStack_110 = (long *)0x2;
  plVar24 = (long *)FUN_1089a7aec(param_2,&uStack_110);
LAB_104a58018:
  plVar14 = plStack_218;
  puVar23 = (undefined *)((long)plStack_210 + 1);
  plVar12 = plStack_218;
  while (puVar23 = puVar23 + -1, puVar23 != (undefined *)0x0) {
    FUN_104a59df8(plVar12);
    plVar12 = plVar12 + 9;
  }
  if (plStack_220 != (long *)0x0) {
    _free(plVar14);
  }
  uVar16 = *(ulong *)(param_2 + 0x20);
  uVar17 = *(ulong *)(param_2 + 0x28);
  plStack_c0 = (long *)0x8000000000000005;
  plStack_b8 = plVar24;
LAB_104a5827c:
  *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
  plStack_a8 = plStack_1b8;
  plStack_b0 = plStack_1c0;
  plStack_98 = plStack_1a8;
  plStack_a0 = plStack_1b0;
  plStack_88 = plStack_198;
  plStack_90 = plStack_1a0;
  plStack_80 = plStack_190;
  if (uVar17 < uVar16) {
    do {
      bVar1 = *(byte *)(*plVar22 + uVar17);
      if (0x2c < bVar1) {
LAB_104a58bb4:
        if (bVar1 != 0x5d) {
          plStack_220 = (long *)0x16;
          plVar22 = (long *)FUN_1089a7aec(param_2,&plStack_220);
          goto LAB_104a582f8;
        }
        *(ulong *)(param_2 + 0x28) = uVar17 + 1;
        auStack_d8._8_8_ = plStack_190;
        auStack_d8._0_8_ = plStack_198;
        plVar24 = plStack_c0;
        plVar14 = plStack_b8;
        plVar22 = plStack_1c0;
        plStack_100 = plStack_1b8;
        plStack_250 = plStack_1b0;
        plStack_248 = plStack_1a8;
        plStack_240 = plStack_1a0;
        goto joined_r0x000104a58be4;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x2c) goto LAB_104a58bb4;
        uVar17 = uVar17 + 1;
        *(ulong *)(param_2 + 0x28) = uVar17;
        if (uVar17 < uVar16) goto LAB_104a58b88;
        goto LAB_104a58cd4;
      }
      uVar17 = uVar17 + 1;
      *(ulong *)(param_2 + 0x28) = uVar17;
    } while (uVar16 != uVar17);
  }
  plStack_220 = (long *)0x2;
  plVar22 = (long *)FUN_1089a7aec(param_2,&plStack_220);
  goto LAB_104a582f8;
  while( true ) {
    uVar17 = uVar17 + 1;
    *(ulong *)(param_2 + 0x28) = uVar17;
    if (uVar16 == uVar17) break;
LAB_104a58b88:
    bVar1 = *(byte *)(*plVar22 + uVar17);
    if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if (bVar1 == 0x5d) {
        plStack_220 = (long *)0x15;
        plVar22 = (long *)FUN_1089a7aec(param_2,&plStack_220);
        goto LAB_104a582f8;
      }
      break;
    }
  }
LAB_104a58cd4:
  plStack_220 = (long *)0x16;
  plVar22 = (long *)FUN_1089a7aec(param_2,&plStack_220);
LAB_104a582f8:
  plVar14 = plStack_b8;
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
  plStack_c8 = plVar22;
  FUN_104a59f1c(plVar22);
  goto LAB_104a58594;
  while( true ) {
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x3a) goto LAB_104a58d48;
      uVar16 = uVar16 + 1;
      *(ulong *)(lVar13 + 0x28) = uVar16;
      if (uVar16 < uVar17) goto LAB_104a586f0;
      goto LAB_104a58718;
    }
    uVar16 = uVar16 + 1;
    *(ulong *)(lVar13 + 0x28) = uVar16;
    if (uVar17 == uVar16) break;
LAB_104a5869c:
    bVar1 = *(byte *)(*(long *)(lVar13 + 0x18) + uVar16);
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
  func_0x000104a5a524(&uStack_110,&lStack_1d0);
  lVar13 = lStack_1d0;
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
    plVar24 = plStack_100;
    plVar14 = plStack_108;
    plStack_218 = plStack_108;
    if (uStack_110 == (long *)0x2) goto LAB_104a589c0;
    if (plStack_100 == (long *)0x0) {
      _memcpy(1,plStack_108,0);
      plVar24 = (long *)0x0;
      plVar12 = (long *)0x1;
    }
    else {
      plVar12 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_100,1);
      if (plVar12 == (long *)0x0) {
LAB_104a58d74:
        func_0x0001087c9084(1,plVar24);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104a58d84);
        (*pcVar9)();
      }
      _memcpy(plVar12,plVar14,plVar24);
      plStack_218 = plVar12;
      if ((plVar24 == (long *)0x8000000000000001) || (plVar24 == (long *)0x8000000000000000))
      goto LAB_104a589c0;
    }
    uVar16 = *(ulong *)(lVar13 + 0x28);
    if (*(ulong *)(lVar13 + 0x20) <= uVar16) {
LAB_104a58998:
      plStack_c0 = (long *)0x3;
      plStack_108 = (long *)FUN_1089a7aec(lVar13,&plStack_c0);
joined_r0x000104a58aac:
      plStack_218 = plStack_108;
      if (plVar24 != (long *)0x0) {
        _free(plVar12);
      }
      goto LAB_104a589c0;
    }
    while( true ) {
      bVar1 = *(byte *)(*(long *)(lVar13 + 0x18) + uVar16);
      if (0x3a < bVar1) goto LAB_104a58d1c;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar16 = uVar16 + 1;
      *(ulong *)(lVar13 + 0x28) = uVar16;
      if (*(ulong *)(lVar13 + 0x20) == uVar16) goto LAB_104a58998;
    }
    if ((ulong)bVar1 != 0x3a) {
LAB_104a58d1c:
      plStack_c0 = (long *)0x6;
      plStack_108 = (long *)FUN_1089a7aec(lVar13,&plStack_c0);
      goto joined_r0x000104a58aac;
    }
    *(ulong *)(lVar13 + 0x28) = uVar16 + 1;
    FUN_104a57d30(&uStack_110,lVar13);
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
    if (plVar24 == (long *)0x8000000000000000) goto LAB_104a58a60;
    plStack_218 = plVar12;
    if (plVar24 == (long *)0x8000000000000001) goto LAB_104a589c0;
    plStack_128 = plVar24;
    plStack_120 = plVar12;
    plStack_118 = plVar24;
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
  uVar16 = uVar16 + 1;
  *(ulong *)(param_2 + 0x28) = uVar16;
  if (*(ulong *)(param_2 + 0x20) == uVar16) goto LAB_104a5854c;
  goto LAB_104a58524;
  while( true ) {
    uVar16 = uVar16 + 1;
    *(ulong *)(lVar13 + 0x28) = uVar16;
    if (uVar17 == uVar16) break;
LAB_104a586f0:
    bVar1 = *(byte *)(*(long *)(lVar13 + 0x18) + uVar16);
    if (0x22 < bVar1) {
LAB_104a58d50:
      uVar10 = func_0x0001089a7e6c(lVar13,&plStack_c0);
      plStack_108 = (long *)func_0x0001089a8294(uVar10,lVar13);
      goto LAB_104a58764;
    }
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x22) goto LAB_104a58d50;
      *(ulong *)(lVar13 + 0x28) = uVar16 + 1;
      *(undefined8 *)(lVar13 + 0x10) = 0;
      __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                (&uStack_110,lVar13 + 0x18,lVar13);
      plVar12 = plStack_100;
      plVar14 = plStack_108;
      if (uStack_110 == (long *)0x2) goto LAB_104a58764;
      if (plStack_100 == (long *)0x0) {
        lVar13 = 1;
      }
      else {
        lVar13 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_100,1);
        if (lVar13 == 0) {
          uVar10 = func_0x0001087c9084(1,plVar12);
          _free(plVar24);
          __Unwind_Resume(uVar10);
          puVar15 = (ulong *)func_0x000108a07bc4();
          lVar13 = 0;
          if (6 < *puVar15) {
            lVar13 = *puVar15 - 7;
          }
                    /* WARNING: Could not recover jumptable at 0x000104a58ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_104a58ec4 + (ulong)(byte)(&UNK_108e65ed4)[lVar13] * 4))();
          return;
        }
      }
      _memcpy(lVar13,plVar14,plVar12);
      func_0x000104a56ab4(&uStack_110,lVar13,plVar12);
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
      if (plVar12 != (long *)0x0) {
        _free(lVar13);
      }
      goto LAB_104a584fc;
    }
  }
LAB_104a58718:
  uStack_110 = (long *)0x5;
LAB_104a5871c:
  plStack_108 = (long *)FUN_1089a7aec(lVar13,&uStack_110);
LAB_104a58764:
  plStack_220 = (long *)0x8000000000000005;
  plStack_218 = plStack_108;
LAB_104a584fc:
  *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
  uVar16 = *(ulong *)(param_2 + 0x28);
  if (uVar16 < *(ulong *)(param_2 + 0x20)) {
LAB_104a58524:
    bVar1 = *(byte *)(*plVar22 + uVar16);
    if (bVar1 < 0x2d) {
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) goto code_r0x000104a5853c;
      if ((ulong)bVar1 != 0x2c) goto LAB_104a58af8;
      plStack_c0 = (long *)0x15;
      plVar22 = (long *)FUN_1089a7aec(param_2,&plStack_c0);
    }
    else {
LAB_104a58af8:
      if (bVar1 == 0x7d) {
        *(ulong *)(param_2 + 0x28) = uVar16 + 1;
        plVar24 = plStack_220;
        plVar14 = plStack_218;
        plVar22 = plStack_210;
        plStack_100 = plStack_208;
        plStack_250 = plStack_200;
        plStack_248 = plStack_1f8;
        plStack_240 = plStack_1f0;
        auStack_d8 = auStack_1e8._0_16_;
joined_r0x000104a58be4:
        uStack_110 = plVar24;
        plStack_108 = plVar14;
        plStack_f8 = plStack_100;
        plStack_f0 = plStack_250;
        plStack_e8 = plStack_248;
        plStack_e0 = plStack_240;
        if ((plVar24 != (long *)0x8000000000000005) && (plVar24 != (long *)0x8000000000000005)) {
          uVar16 = (ulong)plVar14 & 0xffffffffffffff00;
          auVar8 = auStack_d8;
LAB_104a58c00:
          uStack_230 = auVar8._8_8_;
          uStack_238 = auVar8._0_8_;
          *param_1 = plVar24;
          param_1[1] = (ulong)plVar14 & 0xff | uVar16;
          param_1[2] = plVar22;
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
      plVar22 = (long *)FUN_1089a7aec(param_2,&plStack_c0);
    }
    goto LAB_104a58560;
  }
LAB_104a5854c:
  plStack_c0 = (long *)0x3;
  plVar22 = (long *)FUN_1089a7aec(param_2,&plStack_c0);
LAB_104a58560:
  plVar14 = plStack_218;
  plStack_108 = plStack_218;
  uStack_110 = plStack_220;
  plStack_f8 = plStack_208;
  plStack_100 = plStack_210;
  plStack_e8 = plStack_1f8;
  plStack_f0 = plStack_200;
  plStack_e0 = plStack_1f0;
  auVar3 = auStack_1e8._0_16_;
  if (plStack_220 == (long *)0x8000000000000005) {
    plStack_c8 = plVar22;
    auStack_d8 = auStack_1e8._0_16_;
    FUN_104a59f1c(plVar22);
LAB_104a58594:
    _free(plVar22);
    plVar22 = plStack_100;
  }
  else {
LAB_104a585b4:
    plVar14 = plVar22;
    plStack_c8 = plVar14;
    auStack_d8 = auVar3;
    FUN_104a59df8(&uStack_110);
    plVar22 = plStack_100;
  }
LAB_104a58b54:
  plStack_100 = plVar22;
  uVar10 = func_0x0001089a8294(plVar14,param_2);
LAB_104a57dcc:
  *param_1 = 0x8000000000000005;
  param_1[1] = uVar10;
  return;
}

