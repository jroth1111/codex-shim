
/* WARNING: Removing unreachable block (ram,0x000104a57c40) */
/* WARNING: Removing unreachable block (ram,0x000104a58d98) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a56bd4(undefined8 *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  code *pcVar14;
  undefined8 uVar15;
  undefined1 (*pauVar16) [16];
  long *plVar17;
  long lVar18;
  long *plVar19;
  ulong *puVar21;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  bool bVar26;
  uint uVar27;
  ulong uVar28;
  long *plVar29;
  undefined *puVar30;
  long *plVar31;
  undefined1 auVar32 [16];
  long *plStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long *plStack_480;
  long *plStack_478;
  long *plStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  long *plStack_450;
  undefined1 auStack_448 [24];
  long lStack_430;
  undefined1 uStack_428;
  long *plStack_420;
  long *plStack_418;
  long *plStack_410;
  long *plStack_408;
  long *plStack_400;
  long *plStack_3f8;
  long *plStack_3f0;
  undefined1 auStack_3e8 [16];
  long *plStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  long *plStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined8 uStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined1 auStack_338 [16];
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  long *plStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  undefined1 auStack_1f8 [24];
  long lStack_1e0;
  undefined1 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 auStack_198 [16];
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined1 auStack_f8 [16];
  long *plStack_e8;
  long *plStack_d8;
  long *plStack_d0;
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
  undefined8 *puVar20;
  
  auVar13._8_8_ = uStack_490;
  auVar13._0_8_ = uStack_498;
  auVar12._8_8_ = uStack_490;
  auVar12._0_8_ = uStack_498;
  auVar11._8_8_ = uStack_490;
  auVar11._0_8_ = uStack_498;
  auVar10._8_8_ = uStack_490;
  auVar10._0_8_ = uStack_498;
  auVar9._8_8_ = uStack_490;
  auVar9._0_8_ = uStack_498;
  auVar32._8_8_ = uStack_240;
  auVar32._0_8_ = uStack_248;
  auVar8._8_8_ = uStack_240;
  auVar8._0_8_ = uStack_248;
  auVar7._8_8_ = uStack_240;
  auVar7._0_8_ = uStack_248;
  auVar6._8_8_ = uStack_240;
  auVar6._0_8_ = uStack_248;
  auVar5._8_8_ = uStack_240;
  auVar5._0_8_ = uStack_248;
  uVar22 = *(ulong *)(param_2 + 0x20);
  if (*(ulong *)(param_2 + 0x28) < uVar22) {
    plVar29 = (long *)(param_2 + 0x18);
    lVar24 = *plVar29;
    lVar18 = *(ulong *)(param_2 + 0x28) + 5;
    while (bVar1 = *(byte *)(lVar24 + lVar18 + -5),
          bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
      *(long *)(param_2 + 0x28) = lVar18 + -4;
      lVar18 = lVar18 + 1;
      if (lVar18 - uVar22 == 5) goto LAB_104a56c5c;
    }
    uVar27 = (uint)bVar1;
    if (bVar1 < 0x66) {
      if (bVar1 == 0x22) {
        *(long *)(param_2 + 0x28) = lVar18 + -4;
        *(undefined8 *)(param_2 + 0x10) = 0;
        __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                  (&uStack_130,plVar29,param_2);
        if (uStack_130 == (long *)0x2) {
          *param_1 = 0x8000000000000005;
          param_1[1] = plStack_128;
          return;
        }
        if (plStack_120 == (long *)0x0) {
          plVar29 = (long *)0x1;
        }
        else {
          plVar29 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_120,1);
          if (plVar29 == (long *)0x0) {
            func_0x0001087c9084(1,plStack_120);
            plVar31 = plStack_120;
            goto LAB_104a57c1c;
          }
        }
        _memcpy(plVar29,plStack_128,plStack_120);
        uVar22 = (ulong)plStack_120 & 0xffffffffffffff00;
        plVar31 = (long *)0x8000000000000003;
        plVar19 = plStack_120;
        goto LAB_104a57aa8;
      }
      if (bVar1 != 0x2d) {
        if (uVar27 != 0x5b) goto LAB_104a56f7c;
        cVar2 = *(char *)(param_2 + 0x48) + -1;
        *(char *)(param_2 + 0x48) = cVar2;
        if (cVar2 == '\0') {
          uStack_130 = (long *)0x18;
          uVar15 = func_0x0001089a7a8c(param_2,&uStack_130);
          *param_1 = 0x8000000000000005;
          param_1[1] = uVar15;
          return;
        }
        uVar23 = lVar18 - 4;
        *(ulong *)(param_2 + 0x28) = uVar23;
        plStack_d8 = (long *)0x0;
        plStack_d0 = (long *)0x8;
        plStack_c8 = (long *)0x0;
        if (uVar22 <= uVar23) goto LAB_104a56ea4;
        bVar26 = true;
        goto LAB_104a56d88;
      }
      *(long *)(param_2 + 0x28) = lVar18 + -4;
      func_0x000104a5634c(&plStack_c0,param_2,0);
      if (plStack_c0 == (long *)0x3) {
        *param_1 = 0x8000000000000005;
        param_1[1] = plStack_b8;
        return;
      }
      plVar31 = (long *)0x8000000000000002;
      plVar29 = plStack_b8;
      if (plStack_c0 == (long *)0x0) {
        plStack_120 = (long *)((ulong)plStack_b8 & 0x7fffffffffffffff);
        if (plStack_120 < (long *)0x7ff0000000000000) {
          uStack_130 = (long *)0x8000000000000000;
          FUN_104a59df8(&uStack_130);
          plStack_120 = extraout_x8;
          plVar19 = (long *)0x2;
        }
        else {
          plVar19 = (long *)0x3;
          plVar31 = (long *)0x8000000000000000;
        }
      }
      else {
        plStack_120 = plStack_c0;
        plVar19 = (long *)0x0;
        if (plStack_c0 != (long *)0x1) {
          plVar19 = (long *)((ulong)plStack_b8 >> 0x3f);
        }
      }
LAB_104a5751c:
      uVar22 = 0;
      auVar32 = auVar6;
      goto LAB_104a57aa8;
    }
    if (uVar27 == 0x73 || bVar1 < 0x73) {
      if (uVar27 == 0x66) {
        uVar28 = lVar18 - 4;
        *(ulong *)(param_2 + 0x28) = uVar28;
        uVar23 = uVar28;
        if (uVar28 <= uVar22) {
          uVar23 = uVar22;
        }
        if (uVar22 <= uVar28) goto LAB_104a571d4;
        cVar2 = *(char *)(lVar24 + lVar18 + -4);
        *(ulong *)(param_2 + 0x28) = lVar18 - 3U;
        if (cVar2 == 'a') {
          if (lVar18 - 3U == uVar23) goto LAB_104a571d4;
          cVar2 = *(char *)(lVar24 + lVar18 + -3);
          *(ulong *)(param_2 + 0x28) = lVar18 - 2U;
          if (cVar2 == 'l') {
            if (lVar18 - 2U == uVar23) goto LAB_104a571d4;
            cVar2 = *(char *)(lVar24 + lVar18 + -2);
            *(ulong *)(param_2 + 0x28) = lVar18 - 1U;
            if (cVar2 == 's') {
              if (lVar18 - 1U == uVar23) goto LAB_104a571d4;
              cVar2 = *(char *)(lVar24 + lVar18 + -1);
              *(long *)(param_2 + 0x28) = lVar18;
              if (cVar2 == 'e') {
                uVar22 = 0;
                plVar31 = (long *)0x8000000000000001;
                plStack_120 = (long *)0x65;
                plVar19 = (long *)0x0;
                auVar32 = auVar7;
                goto LAB_104a57aa8;
              }
            }
          }
        }
      }
      else {
        if (uVar27 != 0x6e) goto LAB_104a56f7c;
        uVar28 = lVar18 - 4;
        *(ulong *)(param_2 + 0x28) = uVar28;
        uVar23 = uVar28;
        if (uVar28 <= uVar22) {
          uVar23 = uVar22;
        }
        if (uVar22 <= uVar28) goto LAB_104a571d4;
        cVar2 = *(char *)(lVar24 + lVar18 + -4);
        *(ulong *)(param_2 + 0x28) = lVar18 - 3U;
        if (cVar2 != 'u') goto LAB_104a57838;
        if (lVar18 - 3U == uVar23) goto LAB_104a571d4;
        cVar2 = *(char *)(lVar24 + lVar18 + -3);
        *(ulong *)(param_2 + 0x28) = lVar18 - 2U;
        if (cVar2 == 'l') {
          if (lVar18 - 2U == uVar23) goto LAB_104a571d4;
          cVar2 = *(char *)(lVar24 + lVar18 + -2);
          *(long *)(param_2 + 0x28) = lVar18 + -1;
          if (cVar2 == 'l') {
            uVar22 = 0;
            plVar31 = (long *)0x8000000000000000;
            plStack_120 = (long *)0x6c;
            plVar19 = (long *)0x0;
            auVar32 = auVar5;
            goto LAB_104a57aa8;
          }
        }
      }
    }
    else {
      if (uVar27 != 0x74) {
        if (uVar27 != 0x7b) {
LAB_104a56f7c:
          if (uVar27 - 0x30 < 10) {
            func_0x000104a5634c(&plStack_c0,param_2,1);
            if (plStack_c0 == (long *)0x3) {
              *param_1 = 0x8000000000000005;
              param_1[1] = plStack_b8;
              return;
            }
            plVar31 = (long *)0x8000000000000002;
            plStack_120 = plStack_c0;
            plVar29 = plStack_b8;
            if (plStack_c0 == (long *)0x2) {
              plVar19 = (long *)((ulong)plStack_b8 >> 0x3f);
            }
            else if (plStack_c0 == (long *)0x1) {
              plVar19 = (long *)0x0;
            }
            else {
              plStack_120 = (long *)0x8000000000000000;
              if (((ulong)plStack_b8 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
                uStack_130 = (long *)0x8000000000000000;
                FUN_104a59df8(&uStack_130);
                plStack_120 = extraout_x8_00;
                plVar19 = (long *)0x2;
              }
              else {
                plVar19 = (long *)0x3;
                plVar31 = (long *)0x8000000000000000;
              }
            }
            goto LAB_104a5751c;
          }
          uStack_130 = (long *)0xa;
          plVar19 = (long *)func_0x0001089a7a8c(param_2,&uStack_130);
          plVar29 = plStack_120;
          goto LAB_104a579fc;
        }
        cVar2 = *(char *)(param_2 + 0x48) + -1;
        *(char *)(param_2 + 0x48) = cVar2;
        if (cVar2 == '\0') {
          uStack_130 = (long *)0x18;
          goto LAB_104a56c60;
        }
        *(long *)(param_2 + 0x28) = lVar18 + -4;
        uStack_1d8 = 1;
        lStack_1e0 = param_2;
        func_0x000104a5a680(&uStack_130,&lStack_1e0);
        lVar18 = lStack_1e0;
        plVar31 = plStack_128;
        if ((char)uStack_130 != '\x01') {
          if (uStack_130._1_1_ != '\x01') {
            pauVar16 = (undefined1 (*) [16])
                       (*
                       ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                       )();
            if (pauVar16[1][0] == '\x01') {
              auStack_1f8._0_16_ = *pauVar16;
            }
            else {
              auStack_1f8._0_16_ = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar16 + 8) = auStack_1f8._8_8_;
              pauVar16[1][0] = 1;
            }
            *(long *)*pauVar16 = auStack_1f8._0_8_ + 1;
            plStack_230 = (long *)0x0;
            plStack_228 = (long *)0x8;
            plStack_220 = (long *)0x0;
            plStack_210 = (long *)0x0;
            plStack_218 = (long *)&UNK_108c56c70;
            plStack_200 = (long *)0x0;
            plStack_208 = (long *)0x0;
            goto LAB_104a573a0;
          }
          *(long *)(lStack_1e0 + 0x28) = *(long *)(lStack_1e0 + 0x28) + 1;
          *(undefined8 *)(lStack_1e0 + 0x10) = 0;
          __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                    (&uStack_130,lStack_1e0 + 0x18,lStack_1e0);
          plVar31 = plStack_128;
          if ((uStack_130 != (long *)0x2) &&
             (FUN_104a5a94c(&plStack_c0,plStack_128,plStack_120), plVar17 = plStack_b0,
             plVar31 = plStack_b8, plVar19 = plStack_c0, plStack_c0 != (long *)0x8000000000000001))
          {
            if (plStack_c0 == (long *)0x8000000000000000) {
              uVar23 = *(ulong *)(lVar18 + 0x20);
              uVar22 = *(ulong *)(lVar18 + 0x28);
              if (uVar23 <= uVar22) goto LAB_104a57568;
              goto LAB_104a57540;
            }
            if (plStack_c0 != (long *)0x8000000000000002) {
              pauVar16 = (undefined1 (*) [16])
                         (*
                         ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                         )();
              if (pauVar16[1][0] == '\x01') {
                auStack_198 = *pauVar16;
              }
              else {
                auStack_198 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                *(long *)(*pauVar16 + 8) = auStack_198._8_8_;
                pauVar16[1][0] = 1;
              }
              plStack_1b0 = (long *)0x0;
              plStack_1b8 = (long *)&UNK_108c56c70;
              *(long *)*pauVar16 = auStack_198._0_8_ + 1;
              plStack_1d0 = (long *)0x0;
              plStack_1c8 = (long *)0x8;
              plStack_1a0 = (long *)0x0;
              plStack_1a8 = (long *)0x0;
              plStack_1c0 = (long *)0x0;
              plStack_d8 = plVar19;
              plStack_d0 = plVar31;
              plStack_c8 = plVar17;
              func_0x000104a5a7dc(&plStack_230,&lStack_1e0);
              if (plStack_230 != (long *)0x8000000000000005) {
                func_0x000104a5aa60(&uStack_130,&plStack_1d0,&plStack_d8,&plStack_230);
                plStack_b8 = plStack_120;
                plStack_c0 = plStack_128;
                plStack_a8 = plStack_110;
                plStack_b0 = plStack_118;
                plStack_98 = plStack_100;
                plStack_a0 = plStack_108;
                plStack_88 = (long *)auStack_f8._8_8_;
                plStack_90 = (long *)auStack_f8._0_8_;
                plStack_80 = plStack_e8;
                if (plStack_128 != (long *)0x8000000000000005) {
                  FUN_104a59df8(&plStack_c0);
                }
                goto LAB_104a57664;
              }
              if (plVar19 != (long *)0x0) {
                _free(plVar31);
              }
              goto LAB_104a5786c;
            }
          }
        }
        plStack_230 = (long *)0x8000000000000005;
        plStack_228 = plVar31;
        goto LAB_104a573a0;
      }
      uVar28 = lVar18 - 4;
      *(ulong *)(param_2 + 0x28) = uVar28;
      uVar23 = uVar28;
      if (uVar28 <= uVar22) {
        uVar23 = uVar22;
      }
      if (uVar22 <= uVar28) {
LAB_104a571d4:
        uStack_130 = (long *)0x5;
        goto LAB_104a571d8;
      }
      cVar2 = *(char *)(lVar24 + lVar18 + -4);
      *(ulong *)(param_2 + 0x28) = lVar18 - 3U;
      if (cVar2 != 'r') goto LAB_104a57838;
      if (lVar18 - 3U == uVar23) goto LAB_104a571d4;
      cVar2 = *(char *)(lVar24 + lVar18 + -3);
      *(ulong *)(param_2 + 0x28) = lVar18 - 2U;
      if (cVar2 == 'u') {
        if (lVar18 - 2U == uVar23) goto LAB_104a571d4;
        cVar2 = *(char *)(lVar24 + lVar18 + -2);
        *(long *)(param_2 + 0x28) = lVar18 + -1;
        if (cVar2 == 'e') {
          uVar22 = 0;
          plVar31 = (long *)0x8000000000000001;
          plStack_120 = (long *)0x65;
          plVar19 = (long *)0x1;
          auVar32 = auVar8;
          goto LAB_104a57aa8;
        }
      }
    }
LAB_104a57838:
    uStack_130 = (long *)0x9;
LAB_104a571d8:
    uVar15 = func_0x0001089a81e4(param_2,&uStack_130);
    goto LAB_104a56c70;
  }
LAB_104a56c5c:
  uStack_130 = (long *)0x5;
LAB_104a56c60:
  uVar15 = func_0x0001089a7a8c(param_2,&uStack_130);
  goto LAB_104a56c70;
LAB_104a56d88:
  do {
    while (bVar1 = *(byte *)(*plVar29 + uVar23),
          bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
      uVar23 = uVar23 + 1;
      *(ulong *)(param_2 + 0x28) = uVar23;
      if (uVar22 == uVar23) goto LAB_104a56ea4;
    }
    if (bVar1 == 0x5d) {
      plStack_1c8 = plStack_c8;
      plStack_1d0 = plStack_d0;
      plStack_c0 = (long *)0x8000000000000004;
      plStack_b8 = plStack_d8;
      goto LAB_104a57120;
    }
    if (!bVar26) {
      if (bVar1 != 0x2c) {
        uStack_130 = (long *)0x7;
        plVar31 = (long *)func_0x0001089a7a8c(param_2,&uStack_130);
        goto LAB_104a56ebc;
      }
      uVar23 = uVar23 + 1;
      *(ulong *)(param_2 + 0x28) = uVar23;
      if (uVar22 <= uVar23) {
LAB_104a57820:
        uStack_130 = (long *)0x5;
        plVar31 = (long *)func_0x0001089a7a8c(param_2,&uStack_130);
        goto LAB_104a56ebc;
      }
      while (bVar1 = *(byte *)(*plVar29 + uVar23),
            bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
        uVar23 = uVar23 + 1;
        *(ulong *)(param_2 + 0x28) = uVar23;
        if (uVar22 == uVar23) goto LAB_104a57820;
      }
      if (bVar1 == 0x5d) {
        uStack_130 = (long *)0x15;
        plVar31 = (long *)func_0x0001089a7a8c(param_2,&uStack_130);
        goto LAB_104a56ebc;
      }
    }
    FUN_104a56bd4(&uStack_130,param_2);
    plVar19 = plStack_c8;
    plVar31 = plStack_128;
    if (uStack_130 == (long *)0x8000000000000005) goto LAB_104a56ebc;
    plStack_a8 = plStack_118;
    plStack_b0 = plStack_120;
    plStack_98 = plStack_108;
    plStack_a0 = plStack_110;
    plStack_88 = (long *)auStack_f8._0_8_;
    plStack_90 = plStack_100;
    plStack_80 = (long *)auStack_f8._8_8_;
    plStack_c0 = uStack_130;
    plStack_b8 = plStack_128;
    if (plStack_c8 == plStack_d8) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&plStack_d8);
    }
    bVar26 = false;
    plVar31 = plStack_d0 + (long)plVar19 * 9;
    plVar31[1] = (long)plStack_b8;
    *plVar31 = (long)plStack_c0;
    plVar31[8] = (long)plStack_80;
    plVar31[7] = (long)plStack_88;
    plVar31[6] = (long)plStack_90;
    plVar31[5] = (long)plStack_98;
    plVar31[4] = (long)plStack_a0;
    plVar31[3] = (long)plStack_a8;
    plVar31[2] = (long)plStack_b0;
    plStack_c8 = (long *)((long)plVar19 + 1);
    uVar22 = *(ulong *)(param_2 + 0x20);
    uVar23 = *(ulong *)(param_2 + 0x28);
  } while (uVar23 < uVar22);
LAB_104a56ea4:
  uStack_130 = (long *)0x2;
  plVar31 = (long *)func_0x0001089a7a8c(param_2,&uStack_130);
LAB_104a56ebc:
  plVar19 = plStack_d0;
  puVar30 = (undefined *)((long)plStack_c8 + 1);
  plVar17 = plStack_d0;
  while (puVar30 = puVar30 + -1, puVar30 != (undefined *)0x0) {
    FUN_104a59df8(plVar17);
    plVar17 = plVar17 + 9;
  }
  if (plStack_d8 != (long *)0x0) {
    _free(plVar19);
  }
  uVar22 = *(ulong *)(param_2 + 0x20);
  uVar23 = *(ulong *)(param_2 + 0x28);
  plStack_c0 = (long *)0x8000000000000005;
  plStack_b8 = plVar31;
LAB_104a57120:
  *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
  plStack_a8 = plStack_1c8;
  plStack_b0 = plStack_1d0;
  plStack_98 = plStack_1b8;
  plStack_a0 = plStack_1c0;
  plStack_88 = plStack_1a8;
  plStack_90 = plStack_1b0;
  plStack_80 = plStack_1a0;
  if (uVar23 < uVar22) {
    do {
      bVar1 = *(byte *)(*plVar29 + uVar23);
      if (0x2c < bVar1) {
LAB_104a57a5c:
        if (bVar1 != 0x5d) {
          plStack_d8 = (long *)0x16;
          plVar29 = (long *)func_0x0001089a7a8c(param_2,&plStack_d8);
          goto LAB_104a5719c;
        }
        *(ulong *)(param_2 + 0x28) = uVar23 + 1;
        auStack_f8._8_8_ = plStack_1a0;
        auStack_f8._0_8_ = plStack_1a8;
        plVar31 = plStack_c0;
        plVar19 = plStack_b8;
        plVar29 = plStack_1d0;
        plStack_120 = plStack_1c8;
        plStack_260 = plStack_1c0;
        plStack_258 = plStack_1b8;
        plStack_250 = plStack_1b0;
        goto joined_r0x000104a57a8c;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x2c) goto LAB_104a57a5c;
        uVar23 = uVar23 + 1;
        *(ulong *)(param_2 + 0x28) = uVar23;
        if (uVar23 < uVar22) goto LAB_104a57a30;
        goto LAB_104a57b7c;
      }
      uVar23 = uVar23 + 1;
      *(ulong *)(param_2 + 0x28) = uVar23;
    } while (uVar22 != uVar23);
  }
  plStack_d8 = (long *)0x2;
  plVar29 = (long *)func_0x0001089a7a8c(param_2,&plStack_d8);
  goto LAB_104a5719c;
  while( true ) {
    uVar23 = uVar23 + 1;
    *(ulong *)(param_2 + 0x28) = uVar23;
    if (uVar22 == uVar23) break;
LAB_104a57a30:
    bVar1 = *(byte *)(*plVar29 + uVar23);
    if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if (bVar1 == 0x5d) {
        plStack_d8 = (long *)0x15;
        plVar29 = (long *)func_0x0001089a7a8c(param_2,&plStack_d8);
        goto LAB_104a5719c;
      }
      break;
    }
  }
LAB_104a57b7c:
  plStack_d8 = (long *)0x16;
  plVar29 = (long *)func_0x0001089a7a8c(param_2,&plStack_d8);
LAB_104a5719c:
  plVar19 = plStack_b8;
  plStack_128 = plStack_b8;
  uStack_130 = plStack_c0;
  plStack_118 = plStack_a8;
  plStack_120 = plStack_b0;
  plStack_108 = plStack_98;
  plStack_110 = plStack_a0;
  auStack_f8._0_8_ = plStack_88;
  plStack_100 = plStack_90;
  auStack_f8._8_8_ = plStack_80;
  auVar3._8_8_ = plStack_80;
  auVar3._0_8_ = plStack_88;
  if (plStack_c0 != (long *)0x8000000000000005) goto LAB_104a57458;
  plStack_e8 = plVar29;
  FUN_104a59f1c(plVar29);
  goto LAB_104a57438;
  while( true ) {
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x3a) goto LAB_104a57bf0;
      uVar22 = uVar22 + 1;
      *(ulong *)(lVar18 + 0x28) = uVar22;
      if (uVar22 < uVar23) goto LAB_104a57594;
      goto LAB_104a575bc;
    }
    uVar22 = uVar22 + 1;
    *(ulong *)(lVar18 + 0x28) = uVar22;
    if (uVar23 == uVar22) break;
LAB_104a57540:
    bVar1 = *(byte *)(*(long *)(lVar18 + 0x18) + uVar22);
    if (0x3a < bVar1) {
LAB_104a57bf0:
      uStack_130 = (long *)0x6;
      goto LAB_104a575c0;
    }
  }
LAB_104a57568:
  uStack_130 = (long *)0x3;
  goto LAB_104a575c0;
LAB_104a57d84:
  bVar1 = *(byte *)(lVar25 + lVar24 + -5);
  if (bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
    *(long *)(lVar18 + 0x28) = lVar24 + -4;
    lVar24 = lVar24 + 1;
    if (lVar24 - uVar22 == 5) goto LAB_104a57db8;
    goto LAB_104a57d84;
  }
  uVar27 = (uint)bVar1;
  if (bVar1 < 0x66) {
    if (bVar1 == 0x22) {
      *(long *)(lVar18 + 0x28) = lVar24 + -4;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                (&uStack_370,plVar29,lVar18);
      if (uStack_370 == (long *)0x2) {
        *puVar20 = 0x8000000000000005;
        puVar20[1] = plStack_368;
        return;
      }
      if (plStack_360 == (long *)0x0) {
        plVar29 = (long *)0x1;
      }
      else {
        plVar29 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_360,1);
        if (plVar29 == (long *)0x0) {
          func_0x0001087c9084(1,plStack_360);
          plVar31 = plStack_360;
          goto LAB_104a58d74;
        }
      }
      _memcpy(plVar29,plStack_368,plStack_360);
      uVar22 = (ulong)plStack_360 & 0xffffffffffffff00;
      plVar31 = (long *)0x8000000000000003;
      plVar19 = plStack_360;
      goto LAB_104a58c00;
    }
    if (bVar1 != 0x2d) {
      if (uVar27 != 0x5b) goto LAB_104a580d8;
      cVar2 = *(char *)(lVar18 + 0x38) + -1;
      *(char *)(lVar18 + 0x38) = cVar2;
      if (cVar2 == '\0') {
        uStack_370 = (long *)0x18;
        uVar15 = FUN_1089a7aec(lVar18,&uStack_370);
        *puVar20 = 0x8000000000000005;
        puVar20[1] = uVar15;
        return;
      }
      uVar23 = lVar24 - 4;
      *(ulong *)(lVar18 + 0x28) = uVar23;
      plStack_480 = (long *)0x0;
      plStack_478 = (long *)0x8;
      plStack_470 = (long *)0x0;
      if (uVar22 <= uVar23) goto LAB_104a58000;
      bVar26 = true;
      goto LAB_104a57ee4;
    }
    *(long *)(lVar18 + 0x28) = lVar24 + -4;
    FUN_104a564c0(&plStack_320,lVar18,0);
    if (plStack_320 == (long *)0x3) {
      *puVar20 = 0x8000000000000005;
      puVar20[1] = plStack_318;
      return;
    }
    plVar31 = (long *)0x8000000000000002;
    plVar29 = plStack_318;
    if (plStack_320 == (long *)0x0) {
      plStack_360 = (long *)((ulong)plStack_318 & 0x7fffffffffffffff);
      if (plStack_360 < (long *)0x7ff0000000000000) {
        uStack_370 = (long *)0x8000000000000000;
        FUN_104a59df8(&uStack_370);
        plStack_360 = extraout_x8_01;
        plVar19 = (long *)0x2;
      }
      else {
        plVar19 = (long *)0x3;
        plVar31 = (long *)0x8000000000000000;
      }
    }
    else {
      plStack_360 = plStack_320;
      plVar19 = (long *)0x0;
      if (plStack_320 != (long *)0x1) {
        plVar19 = (long *)((ulong)plStack_318 >> 0x3f);
      }
    }
LAB_104a58678:
    uVar22 = 0;
    auVar13 = auVar10;
    goto LAB_104a58c00;
  }
  if (uVar27 == 0x73 || bVar1 < 0x73) {
    if (uVar27 == 0x66) {
      uVar28 = lVar24 - 4;
      *(ulong *)(lVar18 + 0x28) = uVar28;
      uVar23 = uVar28;
      if (uVar28 <= uVar22) {
        uVar23 = uVar22;
      }
      if (uVar22 <= uVar28) goto LAB_104a58330;
      cVar2 = *(char *)(lVar25 + lVar24 + -4);
      *(ulong *)(lVar18 + 0x28) = lVar24 - 3U;
      if (cVar2 == 'a') {
        if (lVar24 - 3U == uVar23) goto LAB_104a58330;
        cVar2 = *(char *)(lVar25 + lVar24 + -3);
        *(ulong *)(lVar18 + 0x28) = lVar24 - 2U;
        if (cVar2 == 'l') {
          if (lVar24 - 2U == uVar23) goto LAB_104a58330;
          cVar2 = *(char *)(lVar25 + lVar24 + -2);
          *(ulong *)(lVar18 + 0x28) = lVar24 - 1U;
          if (cVar2 == 's') {
            if (lVar24 - 1U == uVar23) goto LAB_104a58330;
            cVar2 = *(char *)(lVar25 + lVar24 + -1);
            *(long *)(lVar18 + 0x28) = lVar24;
            if (cVar2 == 'e') {
              uVar22 = 0;
              plVar31 = (long *)0x8000000000000001;
              plStack_360 = (long *)0x65;
              plVar19 = (long *)0x0;
              auVar13 = auVar11;
              goto LAB_104a58c00;
            }
          }
        }
      }
    }
    else {
      if (uVar27 != 0x6e) goto LAB_104a580d8;
      uVar28 = lVar24 - 4;
      *(ulong *)(lVar18 + 0x28) = uVar28;
      uVar23 = uVar28;
      if (uVar28 <= uVar22) {
        uVar23 = uVar22;
      }
      if (uVar22 <= uVar28) goto LAB_104a58330;
      cVar2 = *(char *)(lVar25 + lVar24 + -4);
      *(ulong *)(lVar18 + 0x28) = lVar24 - 3U;
      if (cVar2 != 'u') goto LAB_104a58990;
      if (lVar24 - 3U == uVar23) goto LAB_104a58330;
      cVar2 = *(char *)(lVar25 + lVar24 + -3);
      *(ulong *)(lVar18 + 0x28) = lVar24 - 2U;
      if (cVar2 == 'l') {
        if (lVar24 - 2U == uVar23) goto LAB_104a58330;
        cVar2 = *(char *)(lVar25 + lVar24 + -2);
        *(long *)(lVar18 + 0x28) = lVar24 + -1;
        if (cVar2 == 'l') {
          uVar22 = 0;
          plVar31 = (long *)0x8000000000000000;
          plStack_360 = (long *)0x6c;
          plVar19 = (long *)0x0;
          auVar13 = auVar9;
          goto LAB_104a58c00;
        }
      }
    }
  }
  else {
    if (uVar27 != 0x74) {
      if (uVar27 != 0x7b) {
LAB_104a580d8:
        if (uVar27 - 0x30 < 10) {
          FUN_104a564c0(&plStack_320,lVar18,1);
          if (plStack_320 == (long *)0x3) {
            *puVar20 = 0x8000000000000005;
            puVar20[1] = plStack_318;
            return;
          }
          plVar31 = (long *)0x8000000000000002;
          plStack_360 = plStack_320;
          plVar29 = plStack_318;
          if (plStack_320 == (long *)0x2) {
            plVar19 = (long *)((ulong)plStack_318 >> 0x3f);
          }
          else if (plStack_320 == (long *)0x1) {
            plVar19 = (long *)0x0;
          }
          else {
            plStack_360 = (long *)0x8000000000000000;
            if (((ulong)plStack_318 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
              uStack_370 = (long *)0x8000000000000000;
              FUN_104a59df8(&uStack_370);
              plStack_360 = extraout_x8_02;
              plVar19 = (long *)0x2;
            }
            else {
              plVar19 = (long *)0x3;
              plVar31 = (long *)0x8000000000000000;
            }
          }
          goto LAB_104a58678;
        }
        uStack_370 = (long *)0xa;
        plVar19 = (long *)FUN_1089a7aec(lVar18,&uStack_370);
        plVar29 = plStack_360;
        goto LAB_104a58b54;
      }
      cVar2 = *(char *)(lVar18 + 0x38) + -1;
      *(char *)(lVar18 + 0x38) = cVar2;
      if (cVar2 == '\0') {
        uStack_370 = (long *)0x18;
        goto LAB_104a57dbc;
      }
      *(long *)(lVar18 + 0x28) = lVar24 + -4;
      uStack_428 = 1;
      lStack_430 = lVar18;
      FUN_104a5a524(&uStack_370,&lStack_430);
      lVar24 = lStack_430;
      plVar31 = plStack_368;
      if ((char)uStack_370 != '\x01') {
        if (uStack_370._1_1_ != '\x01') {
          pauVar16 = (undefined1 (*) [16])
                     (*
                     ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                     )();
          if (pauVar16[1][0] == '\x01') {
            auStack_448._0_16_ = *pauVar16;
          }
          else {
            auStack_448._0_16_ = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
            *(long *)(*pauVar16 + 8) = auStack_448._8_8_;
            pauVar16[1][0] = 1;
          }
          *(long *)*pauVar16 = auStack_448._0_8_ + 1;
          plStack_480 = (long *)0x0;
          plStack_478 = (long *)0x8;
          plStack_470 = (long *)0x0;
          plStack_460 = (long *)0x0;
          plStack_468 = (long *)&UNK_108c56c70;
          plStack_450 = (long *)0x0;
          plStack_458 = (long *)0x0;
          goto LAB_104a584fc;
        }
        *(long *)(lStack_430 + 0x28) = *(long *)(lStack_430 + 0x28) + 1;
        *(undefined8 *)(lStack_430 + 0x10) = 0;
        __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                  (&uStack_370,lStack_430 + 0x18,lStack_430);
        plVar31 = plStack_368;
        if ((uStack_370 != (long *)0x2) &&
           (FUN_104a5a94c(&plStack_320,plStack_368,plStack_360), plVar17 = plStack_310,
           plVar31 = plStack_318, plVar19 = plStack_320, plStack_320 != (long *)0x8000000000000001))
        {
          if (plStack_320 == (long *)0x8000000000000000) {
            uVar23 = *(ulong *)(lVar24 + 0x20);
            uVar22 = *(ulong *)(lVar24 + 0x28);
            if (uVar23 <= uVar22) goto LAB_104a586c4;
            goto LAB_104a5869c;
          }
          if (plStack_320 != (long *)0x8000000000000002) {
            pauVar16 = (undefined1 (*) [16])
                       (*
                       ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                       )();
            if (pauVar16[1][0] == '\x01') {
              auStack_3e8 = *pauVar16;
            }
            else {
              auStack_3e8 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar16 + 8) = auStack_3e8._8_8_;
              pauVar16[1][0] = 1;
            }
            plStack_400 = (long *)0x0;
            plStack_408 = (long *)&UNK_108c56c70;
            *(long *)*pauVar16 = auStack_3e8._0_8_ + 1;
            plStack_420 = (long *)0x0;
            plStack_418 = (long *)0x8;
            plStack_3f0 = (long *)0x0;
            plStack_3f8 = (long *)0x0;
            plStack_410 = (long *)0x0;
            plStack_388 = plVar19;
            plStack_380 = plVar31;
            plStack_378 = plVar17;
            FUN_104a5a894(&plStack_480,&lStack_430);
            if (plStack_480 != (long *)0x8000000000000005) {
              func_0x000104a5aa60(&uStack_370,&plStack_420,&plStack_388,&plStack_480);
              plStack_318 = plStack_360;
              plStack_320 = plStack_368;
              plStack_308 = plStack_350;
              plStack_310 = plStack_358;
              plStack_2f8 = plStack_340;
              plStack_300 = plStack_348;
              plStack_2e8 = (long *)auStack_338._8_8_;
              plStack_2f0 = (long *)auStack_338._0_8_;
              plStack_2e0 = plStack_328;
              if (plStack_368 != (long *)0x8000000000000005) {
                FUN_104a59df8(&plStack_320);
              }
              goto LAB_104a587bc;
            }
            if (plVar19 != (long *)0x0) {
              _free(plVar31);
            }
            goto LAB_104a589c4;
          }
        }
      }
      plStack_480 = (long *)0x8000000000000005;
      plStack_478 = plVar31;
      goto LAB_104a584fc;
    }
    uVar28 = lVar24 - 4;
    *(ulong *)(lVar18 + 0x28) = uVar28;
    uVar23 = uVar28;
    if (uVar28 <= uVar22) {
      uVar23 = uVar22;
    }
    if (uVar22 <= uVar28) {
LAB_104a58330:
      uStack_370 = (long *)0x5;
      goto LAB_104a58334;
    }
    cVar2 = *(char *)(lVar25 + lVar24 + -4);
    *(ulong *)(lVar18 + 0x28) = lVar24 - 3U;
    if (cVar2 != 'r') goto LAB_104a58990;
    if (lVar24 - 3U == uVar23) goto LAB_104a58330;
    cVar2 = *(char *)(lVar25 + lVar24 + -3);
    *(ulong *)(lVar18 + 0x28) = lVar24 - 2U;
    if (cVar2 == 'u') {
      if (lVar24 - 2U == uVar23) goto LAB_104a58330;
      cVar2 = *(char *)(lVar25 + lVar24 + -2);
      *(long *)(lVar18 + 0x28) = lVar24 + -1;
      if (cVar2 == 'e') {
        uVar22 = 0;
        plVar31 = (long *)0x8000000000000001;
        plStack_360 = (long *)0x65;
        plVar19 = (long *)0x1;
        auVar13 = auVar12;
        goto LAB_104a58c00;
      }
    }
  }
LAB_104a58990:
  uStack_370 = (long *)0x9;
LAB_104a58334:
  uVar15 = FUN_1089a818c(lVar18,&uStack_370);
  goto LAB_104a57dcc;
LAB_104a57db8:
  uStack_370 = (long *)0x5;
LAB_104a57dbc:
  uVar15 = FUN_1089a7aec(lVar18,&uStack_370);
  goto LAB_104a57dcc;
LAB_104a57ee4:
  do {
    while (bVar1 = *(byte *)(*plVar29 + uVar23),
          bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
      uVar23 = uVar23 + 1;
      *(ulong *)(lVar18 + 0x28) = uVar23;
      if (uVar22 == uVar23) goto LAB_104a58000;
    }
    if (bVar1 == 0x5d) {
      plStack_418 = plStack_470;
      plStack_420 = plStack_478;
      plStack_320 = (long *)0x8000000000000004;
      plStack_318 = plStack_480;
      goto LAB_104a5827c;
    }
    if (!bVar26) {
      if (bVar1 != 0x2c) {
        uStack_370 = (long *)0x7;
        plVar31 = (long *)FUN_1089a7aec(lVar18,&uStack_370);
        goto LAB_104a58018;
      }
      uVar23 = uVar23 + 1;
      *(ulong *)(lVar18 + 0x28) = uVar23;
      if (uVar22 <= uVar23) {
LAB_104a58978:
        uStack_370 = (long *)0x5;
        plVar31 = (long *)FUN_1089a7aec(lVar18,&uStack_370);
        goto LAB_104a58018;
      }
      while (bVar1 = *(byte *)(*plVar29 + uVar23),
            bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
        uVar23 = uVar23 + 1;
        *(ulong *)(lVar18 + 0x28) = uVar23;
        if (uVar22 == uVar23) goto LAB_104a58978;
      }
      if (bVar1 == 0x5d) {
        uStack_370 = (long *)0x15;
        plVar31 = (long *)FUN_1089a7aec(lVar18,&uStack_370);
        goto LAB_104a58018;
      }
    }
    FUN_104a57d30(&uStack_370,lVar18);
    plVar19 = plStack_470;
    plVar31 = plStack_368;
    if (uStack_370 == (long *)0x8000000000000005) goto LAB_104a58018;
    plStack_308 = plStack_358;
    plStack_310 = plStack_360;
    plStack_2f8 = plStack_348;
    plStack_300 = plStack_350;
    plStack_2e8 = (long *)auStack_338._0_8_;
    plStack_2f0 = plStack_340;
    plStack_2e0 = (long *)auStack_338._8_8_;
    plStack_320 = uStack_370;
    plStack_318 = plStack_368;
    if (plStack_470 == plStack_480) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&plStack_480);
    }
    bVar26 = false;
    plVar31 = plStack_478 + (long)plVar19 * 9;
    plVar31[1] = (long)plStack_318;
    *plVar31 = (long)plStack_320;
    plVar31[8] = (long)plStack_2e0;
    plVar31[7] = (long)plStack_2e8;
    plVar31[6] = (long)plStack_2f0;
    plVar31[5] = (long)plStack_2f8;
    plVar31[4] = (long)plStack_300;
    plVar31[3] = (long)plStack_308;
    plVar31[2] = (long)plStack_310;
    plStack_470 = (long *)((long)plVar19 + 1);
    uVar22 = *(ulong *)(lVar18 + 0x20);
    uVar23 = *(ulong *)(lVar18 + 0x28);
  } while (uVar23 < uVar22);
LAB_104a58000:
  uStack_370 = (long *)0x2;
  plVar31 = (long *)FUN_1089a7aec(lVar18,&uStack_370);
LAB_104a58018:
  plVar19 = plStack_478;
  puVar30 = (undefined *)((long)plStack_470 + 1);
  plVar17 = plStack_478;
  while (puVar30 = puVar30 + -1, puVar30 != (undefined *)0x0) {
    FUN_104a59df8(plVar17);
    plVar17 = plVar17 + 9;
  }
  if (plStack_480 != (long *)0x0) {
    _free(plVar19);
  }
  uVar22 = *(ulong *)(lVar18 + 0x20);
  uVar23 = *(ulong *)(lVar18 + 0x28);
  plStack_320 = (long *)0x8000000000000005;
  plStack_318 = plVar31;
LAB_104a5827c:
  *(char *)(lVar18 + 0x38) = *(char *)(lVar18 + 0x38) + '\x01';
  plStack_308 = plStack_418;
  plStack_310 = plStack_420;
  plStack_2f8 = plStack_408;
  plStack_300 = plStack_410;
  plStack_2e8 = plStack_3f8;
  plStack_2f0 = plStack_400;
  plStack_2e0 = plStack_3f0;
  if (uVar23 < uVar22) {
    do {
      bVar1 = *(byte *)(*plVar29 + uVar23);
      if (0x2c < bVar1) {
LAB_104a58bb4:
        if (bVar1 != 0x5d) {
          plStack_480 = (long *)0x16;
          plVar29 = (long *)FUN_1089a7aec(lVar18,&plStack_480);
          goto LAB_104a582f8;
        }
        *(ulong *)(lVar18 + 0x28) = uVar23 + 1;
        auStack_338._8_8_ = plStack_3f0;
        auStack_338._0_8_ = plStack_3f8;
        plVar31 = plStack_320;
        plVar19 = plStack_318;
        plVar29 = plStack_420;
        plStack_360 = plStack_418;
        plStack_4b0 = plStack_410;
        plStack_4a8 = plStack_408;
        plStack_4a0 = plStack_400;
        goto joined_r0x000104a58be4;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x2c) goto LAB_104a58bb4;
        uVar23 = uVar23 + 1;
        *(ulong *)(lVar18 + 0x28) = uVar23;
        if (uVar23 < uVar22) goto LAB_104a58b88;
        goto LAB_104a58cd4;
      }
      uVar23 = uVar23 + 1;
      *(ulong *)(lVar18 + 0x28) = uVar23;
    } while (uVar22 != uVar23);
  }
  plStack_480 = (long *)0x2;
  plVar29 = (long *)FUN_1089a7aec(lVar18,&plStack_480);
  goto LAB_104a582f8;
  while( true ) {
    uVar23 = uVar23 + 1;
    *(ulong *)(lVar18 + 0x28) = uVar23;
    if (uVar22 == uVar23) break;
LAB_104a58b88:
    bVar1 = *(byte *)(*plVar29 + uVar23);
    if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if (bVar1 == 0x5d) {
        plStack_480 = (long *)0x15;
        plVar29 = (long *)FUN_1089a7aec(lVar18,&plStack_480);
        goto LAB_104a582f8;
      }
      break;
    }
  }
LAB_104a58cd4:
  plStack_480 = (long *)0x16;
  plVar29 = (long *)FUN_1089a7aec(lVar18,&plStack_480);
LAB_104a582f8:
  plVar19 = plStack_318;
  plStack_368 = plStack_318;
  uStack_370 = plStack_320;
  plStack_358 = plStack_308;
  plStack_360 = plStack_310;
  plStack_348 = plStack_2f8;
  plStack_350 = plStack_300;
  auStack_338._0_8_ = plStack_2e8;
  plStack_340 = plStack_2f0;
  auStack_338._8_8_ = plStack_2e0;
  auVar4._8_8_ = plStack_2e0;
  auVar4._0_8_ = plStack_2e8;
  if (plStack_320 != (long *)0x8000000000000005) goto LAB_104a585b4;
  plStack_328 = plVar29;
  FUN_104a59f1c(plVar29);
  goto LAB_104a58594;
  while( true ) {
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x3a) goto LAB_104a58d48;
      uVar22 = uVar22 + 1;
      *(ulong *)(lVar24 + 0x28) = uVar22;
      if (uVar22 < uVar23) goto LAB_104a586f0;
      goto LAB_104a58718;
    }
    uVar22 = uVar22 + 1;
    *(ulong *)(lVar24 + 0x28) = uVar22;
    if (uVar23 == uVar22) break;
LAB_104a5869c:
    bVar1 = *(byte *)(*(long *)(lVar24 + 0x18) + uVar22);
    if (0x3a < bVar1) {
LAB_104a58d48:
      uStack_370 = (long *)0x6;
      goto LAB_104a5871c;
    }
  }
LAB_104a586c4:
  uStack_370 = (long *)0x3;
  goto LAB_104a5871c;
LAB_104a587bc:
  FUN_104a5a524(&uStack_370,&lStack_430);
  lVar24 = lStack_430;
  plStack_478 = plStack_368;
  if ((char)uStack_370 != '\x01') {
    auVar32 = auStack_3e8;
    if (uStack_370._1_1_ != '\x01') {
LAB_104a58a60:
      auStack_448._0_16_ = auVar32;
      plStack_458 = plStack_3f8;
      plStack_460 = plStack_400;
      plStack_450 = plStack_3f0;
      plStack_480 = plStack_420;
      plStack_468 = plStack_408;
      plStack_470 = plStack_410;
      plStack_478 = plStack_418;
      auStack_3e8 = auStack_448._0_16_;
      goto LAB_104a584fc;
    }
    *(long *)(lStack_430 + 0x28) = *(long *)(lStack_430 + 0x28) + 1;
    *(undefined8 *)(lStack_430 + 0x10) = 0;
    __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
              (&uStack_370,lStack_430 + 0x18,lStack_430);
    plVar31 = plStack_360;
    plVar19 = plStack_368;
    plStack_478 = plStack_368;
    if (uStack_370 == (long *)0x2) goto LAB_104a589c0;
    if (plStack_360 == (long *)0x0) {
      _memcpy(1,plStack_368,0);
      plVar31 = (long *)0x0;
      plVar17 = (long *)0x1;
    }
    else {
      plVar17 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_360,1);
      if (plVar17 == (long *)0x0) {
LAB_104a58d74:
        func_0x0001087c9084(1,plVar31);
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x104a58d84);
        (*pcVar14)();
      }
      _memcpy(plVar17,plVar19,plVar31);
      plStack_478 = plVar17;
      if ((plVar31 == (long *)0x8000000000000001) || (plVar31 == (long *)0x8000000000000000))
      goto LAB_104a589c0;
    }
    uVar22 = *(ulong *)(lVar24 + 0x28);
    if (*(ulong *)(lVar24 + 0x20) <= uVar22) {
LAB_104a58998:
      plStack_320 = (long *)0x3;
      plStack_368 = (long *)FUN_1089a7aec(lVar24,&plStack_320);
joined_r0x000104a58aac:
      plStack_478 = plStack_368;
      if (plVar31 != (long *)0x0) {
        _free(plVar17);
      }
      goto LAB_104a589c0;
    }
    while( true ) {
      bVar1 = *(byte *)(*(long *)(lVar24 + 0x18) + uVar22);
      if (0x3a < bVar1) goto LAB_104a58d1c;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar22 = uVar22 + 1;
      *(ulong *)(lVar24 + 0x28) = uVar22;
      if (*(ulong *)(lVar24 + 0x20) == uVar22) goto LAB_104a58998;
    }
    if ((ulong)bVar1 != 0x3a) {
LAB_104a58d1c:
      plStack_320 = (long *)0x6;
      plStack_368 = (long *)FUN_1089a7aec(lVar24,&plStack_320);
      goto joined_r0x000104a58aac;
    }
    *(ulong *)(lVar24 + 0x28) = uVar22 + 1;
    FUN_104a57d30(&uStack_370,lVar24);
    if (uStack_370 == (long *)0x8000000000000005) goto joined_r0x000104a58aac;
    plStack_3a8 = plStack_348;
    plStack_3b0 = plStack_350;
    plStack_398 = (long *)auStack_338._0_8_;
    plStack_3a0 = plStack_340;
    plStack_390 = (long *)auStack_338._8_8_;
    plStack_3c8 = plStack_368;
    plStack_3d0 = uStack_370;
    plStack_3b8 = plStack_358;
    plStack_3c0 = plStack_360;
    auVar32 = auStack_3e8;
    if (plVar31 == (long *)0x8000000000000000) goto LAB_104a58a60;
    plStack_478 = plVar17;
    if (plVar31 == (long *)0x8000000000000001) goto LAB_104a589c0;
    plStack_388 = plVar31;
    plStack_380 = plVar17;
    plStack_378 = plVar31;
    func_0x000104a5aa60(&uStack_370,&plStack_420,&plStack_388,&plStack_3d0);
    plStack_318 = plStack_360;
    plStack_320 = plStack_368;
    plStack_308 = plStack_350;
    plStack_310 = plStack_358;
    plStack_2f8 = plStack_340;
    plStack_300 = plStack_348;
    plStack_2e8 = (long *)auStack_338._8_8_;
    plStack_2f0 = (long *)auStack_338._0_8_;
    plStack_2e0 = plStack_328;
    if (plStack_368 != (long *)0x8000000000000005) {
      FUN_104a59df8(&plStack_320);
    }
    goto LAB_104a587bc;
  }
LAB_104a589c0:
  plStack_480 = (long *)0x8000000000000005;
LAB_104a589c4:
  if ((plStack_400 != (long *)0x0) && ((long)plStack_400 * 9 != -0x11)) {
    _free(plStack_408 + (-1 - (long)plStack_400));
  }
  func_0x000104a59ce8(&plStack_420);
  goto LAB_104a584fc;
code_r0x000104a5853c:
  uVar22 = uVar22 + 1;
  *(ulong *)(lVar18 + 0x28) = uVar22;
  if (*(ulong *)(lVar18 + 0x20) == uVar22) goto LAB_104a5854c;
  goto LAB_104a58524;
LAB_104a57664:
  func_0x000104a5a680(&uStack_130,&lStack_1e0);
  lVar18 = lStack_1e0;
  plStack_228 = plStack_128;
  if ((char)uStack_130 != '\x01') {
    auVar32 = auStack_198;
    if (uStack_130._1_1_ != '\x01') {
LAB_104a57908:
      auStack_1f8._0_16_ = auVar32;
      plStack_208 = plStack_1a8;
      plStack_210 = plStack_1b0;
      plStack_200 = plStack_1a0;
      plStack_230 = plStack_1d0;
      plStack_218 = plStack_1b8;
      plStack_220 = plStack_1c0;
      plStack_228 = plStack_1c8;
      auStack_198 = auStack_1f8._0_16_;
      goto LAB_104a573a0;
    }
    *(long *)(lStack_1e0 + 0x28) = *(long *)(lStack_1e0 + 0x28) + 1;
    *(undefined8 *)(lStack_1e0 + 0x10) = 0;
    __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
              (&uStack_130,lStack_1e0 + 0x18,lStack_1e0);
    plVar31 = plStack_120;
    plVar19 = plStack_128;
    plStack_228 = plStack_128;
    if (uStack_130 == (long *)0x2) goto LAB_104a57868;
    if (plStack_120 == (long *)0x0) {
      _memcpy(1,plStack_128,0);
      plVar31 = (long *)0x0;
      plVar17 = (long *)0x1;
    }
    else {
      plVar17 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_120,1);
      if (plVar17 == (long *)0x0) {
LAB_104a57c1c:
        func_0x0001087c9084(1,plVar31);
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x104a57c2c);
        (*pcVar14)();
      }
      _memcpy(plVar17,plVar19,plVar31);
      plStack_228 = plVar17;
      if ((plVar31 == (long *)0x8000000000000001) || (plVar31 == (long *)0x8000000000000000))
      goto LAB_104a57868;
    }
    uVar22 = *(ulong *)(lVar18 + 0x28);
    if (*(ulong *)(lVar18 + 0x20) <= uVar22) {
LAB_104a57840:
      plStack_c0 = (long *)0x3;
      plStack_128 = (long *)func_0x0001089a7a8c(lVar18,&plStack_c0);
joined_r0x000104a57954:
      plStack_228 = plStack_128;
      if (plVar31 != (long *)0x0) {
        _free(plVar17);
      }
      goto LAB_104a57868;
    }
    while( true ) {
      bVar1 = *(byte *)(*(long *)(lVar18 + 0x18) + uVar22);
      if (0x3a < bVar1) goto LAB_104a57bc4;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar22 = uVar22 + 1;
      *(ulong *)(lVar18 + 0x28) = uVar22;
      if (*(ulong *)(lVar18 + 0x20) == uVar22) goto LAB_104a57840;
    }
    if ((ulong)bVar1 != 0x3a) {
LAB_104a57bc4:
      plStack_c0 = (long *)0x6;
      plStack_128 = (long *)func_0x0001089a7a8c(lVar18,&plStack_c0);
      goto joined_r0x000104a57954;
    }
    *(ulong *)(lVar18 + 0x28) = uVar22 + 1;
    FUN_104a56bd4(&uStack_130,lVar18);
    if (uStack_130 == (long *)0x8000000000000005) goto joined_r0x000104a57954;
    plStack_158 = plStack_108;
    plStack_160 = plStack_110;
    plStack_148 = (long *)auStack_f8._0_8_;
    plStack_150 = plStack_100;
    plStack_140 = (long *)auStack_f8._8_8_;
    plStack_178 = plStack_128;
    plStack_180 = uStack_130;
    plStack_168 = plStack_118;
    plStack_170 = plStack_120;
    auVar32 = auStack_198;
    if (plVar31 == (long *)0x8000000000000000) goto LAB_104a57908;
    plStack_228 = plVar17;
    if (plVar31 == (long *)0x8000000000000001) goto LAB_104a57868;
    plStack_d8 = plVar31;
    plStack_d0 = plVar17;
    plStack_c8 = plVar31;
    func_0x000104a5aa60(&uStack_130,&plStack_1d0,&plStack_d8,&plStack_180);
    plStack_b8 = plStack_120;
    plStack_c0 = plStack_128;
    plStack_a8 = plStack_110;
    plStack_b0 = plStack_118;
    plStack_98 = plStack_100;
    plStack_a0 = plStack_108;
    plStack_88 = (long *)auStack_f8._8_8_;
    plStack_90 = (long *)auStack_f8._0_8_;
    plStack_80 = plStack_e8;
    if (plStack_128 != (long *)0x8000000000000005) {
      FUN_104a59df8(&plStack_c0);
    }
    goto LAB_104a57664;
  }
LAB_104a57868:
  plStack_230 = (long *)0x8000000000000005;
LAB_104a5786c:
  if ((plStack_1b0 != (long *)0x0) && ((long)plStack_1b0 * 9 != -0x11)) {
    _free(plStack_1b8 + (-1 - (long)plStack_1b0));
  }
  func_0x000104a59ce8(&plStack_1d0);
  goto LAB_104a573a0;
code_r0x000104a573e0:
  uVar22 = uVar22 + 1;
  *(ulong *)(param_2 + 0x28) = uVar22;
  if (*(ulong *)(param_2 + 0x20) == uVar22) goto LAB_104a573f0;
  goto LAB_104a573c8;
  while( true ) {
    uVar22 = uVar22 + 1;
    *(ulong *)(lVar24 + 0x28) = uVar22;
    if (uVar23 == uVar22) break;
LAB_104a586f0:
    bVar1 = *(byte *)(*(long *)(lVar24 + 0x18) + uVar22);
    if (0x22 < bVar1) {
LAB_104a58d50:
      uVar15 = FUN_1089a7e6c(lVar24,&plStack_320);
      plStack_368 = (long *)FUN_1089a8294(uVar15,lVar24);
      goto LAB_104a58764;
    }
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x22) goto LAB_104a58d50;
      *(ulong *)(lVar24 + 0x28) = uVar22 + 1;
      *(undefined8 *)(lVar24 + 0x10) = 0;
      __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                (&uStack_370,lVar24 + 0x18,lVar24);
      plVar17 = plStack_360;
      plVar19 = plStack_368;
      if (uStack_370 == (long *)0x2) goto LAB_104a58764;
      if (plStack_360 == (long *)0x0) {
        lVar24 = 1;
      }
      else {
        lVar24 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_360,1);
        if (lVar24 == 0) {
          uVar15 = func_0x0001087c9084(1,plVar17);
          _free(plVar31);
          __Unwind_Resume(uVar15);
          puVar21 = (ulong *)func_0x000108a07bc4();
          lVar18 = 0;
          if (6 < *puVar21) {
            lVar18 = *puVar21 - 7;
          }
                    /* WARNING: Could not recover jumptable at 0x000104a58ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_104a58ec4 + (ulong)(byte)(&UNK_108e65ed4)[lVar18] * 4))();
          return;
        }
      }
      _memcpy(lVar24,plVar19,plVar17);
      FUN_104a56ab4(&uStack_370,lVar24,plVar17);
      if (uStack_370 == (long *)0x8000000000000005) {
        plStack_478 = (long *)FUN_1089a84b4(plStack_368);
        plStack_480 = (long *)0x8000000000000005;
      }
      else {
        plStack_458 = plStack_348;
        plStack_460 = plStack_350;
        auStack_448._0_8_ = auStack_338._0_8_;
        plStack_450 = plStack_340;
        auStack_448._8_8_ = auStack_338._8_8_;
        plStack_478 = plStack_368;
        plStack_480 = uStack_370;
        plStack_468 = plStack_358;
        plStack_470 = plStack_360;
      }
      if (plVar17 != (long *)0x0) {
        _free(lVar24);
      }
      goto LAB_104a584fc;
    }
  }
LAB_104a58718:
  uStack_370 = (long *)0x5;
LAB_104a5871c:
  plStack_368 = (long *)FUN_1089a7aec(lVar24,&uStack_370);
LAB_104a58764:
  plStack_480 = (long *)0x8000000000000005;
  plStack_478 = plStack_368;
LAB_104a584fc:
  *(char *)(lVar18 + 0x38) = *(char *)(lVar18 + 0x38) + '\x01';
  uVar22 = *(ulong *)(lVar18 + 0x28);
  if (uVar22 < *(ulong *)(lVar18 + 0x20)) {
LAB_104a58524:
    bVar1 = *(byte *)(*plVar29 + uVar22);
    if (bVar1 < 0x2d) {
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) goto code_r0x000104a5853c;
      if ((ulong)bVar1 != 0x2c) goto LAB_104a58af8;
      plStack_320 = (long *)0x15;
      plVar29 = (long *)FUN_1089a7aec(lVar18,&plStack_320);
    }
    else {
LAB_104a58af8:
      if (bVar1 == 0x7d) {
        *(ulong *)(lVar18 + 0x28) = uVar22 + 1;
        plVar31 = plStack_480;
        plVar19 = plStack_478;
        plVar29 = plStack_470;
        plStack_360 = plStack_468;
        plStack_4b0 = plStack_460;
        plStack_4a8 = plStack_458;
        plStack_4a0 = plStack_450;
        auStack_338 = auStack_448._0_16_;
joined_r0x000104a58be4:
        uStack_370 = plVar31;
        plStack_368 = plVar19;
        plStack_358 = plStack_360;
        plStack_350 = plStack_4b0;
        plStack_348 = plStack_4a8;
        plStack_340 = plStack_4a0;
        if ((plVar31 != (long *)0x8000000000000005) && (plVar31 != (long *)0x8000000000000005)) {
          uVar22 = (ulong)plVar19 & 0xffffffffffffff00;
          auVar13 = auStack_338;
LAB_104a58c00:
          uStack_490 = auVar13._8_8_;
          uStack_498 = auVar13._0_8_;
          *puVar20 = plVar31;
          puVar20[1] = (ulong)plVar19 & 0xff | uVar22;
          puVar20[2] = plVar29;
          puVar20[3] = plStack_360;
          puVar20[5] = plStack_4a8;
          puVar20[4] = plStack_4b0;
          puVar20[7] = uStack_498;
          puVar20[6] = plStack_4a0;
          puVar20[8] = uStack_490;
          return;
        }
        goto LAB_104a58b54;
      }
      plStack_320 = (long *)0x16;
      plVar29 = (long *)FUN_1089a7aec(lVar18,&plStack_320);
    }
    goto LAB_104a58560;
  }
LAB_104a5854c:
  plStack_320 = (long *)0x3;
  plVar29 = (long *)FUN_1089a7aec(lVar18,&plStack_320);
LAB_104a58560:
  plVar19 = plStack_478;
  plStack_368 = plStack_478;
  uStack_370 = plStack_480;
  plStack_358 = plStack_468;
  plStack_360 = plStack_470;
  plStack_348 = plStack_458;
  plStack_350 = plStack_460;
  plStack_340 = plStack_450;
  auVar4 = auStack_448._0_16_;
  if (plStack_480 == (long *)0x8000000000000005) {
    plStack_328 = plVar29;
    auStack_338 = auStack_448._0_16_;
    FUN_104a59f1c(plVar29);
LAB_104a58594:
    _free(plVar29);
    plVar29 = plStack_360;
  }
  else {
LAB_104a585b4:
    plVar19 = plVar29;
    plStack_328 = plVar19;
    auStack_338 = auVar4;
    FUN_104a59df8(&uStack_370);
    plVar29 = plStack_360;
  }
LAB_104a58b54:
  plStack_360 = plVar29;
  uVar15 = FUN_1089a8294(plVar19,lVar18);
LAB_104a57dcc:
  *puVar20 = 0x8000000000000005;
  puVar20[1] = uVar15;
  return;
  while( true ) {
    uVar22 = uVar22 + 1;
    *(ulong *)(lVar18 + 0x28) = uVar22;
    if (uVar23 == uVar22) break;
LAB_104a57594:
    bVar1 = *(byte *)(*(long *)(lVar18 + 0x18) + uVar22);
    if (0x22 < bVar1) {
LAB_104a57bf8:
      uVar15 = func_0x0001089a7b4c(lVar18,&plStack_c0);
      plStack_128 = (long *)func_0x0001089a823c(uVar15,lVar18);
      goto LAB_104a57608;
    }
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x22) goto LAB_104a57bf8;
      *(ulong *)(lVar18 + 0x28) = uVar22 + 1;
      *(undefined8 *)(lVar18 + 0x10) = 0;
      __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                (&uStack_130,lVar18 + 0x18,lVar18);
      plVar17 = plStack_120;
      plVar19 = plStack_128;
      if (uStack_130 == (long *)0x2) goto LAB_104a57608;
      if (plStack_120 == (long *)0x0) {
        lVar18 = 1;
      }
      else {
        lVar18 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(plStack_120,1);
        if (lVar18 == 0) {
          uVar15 = func_0x0001087c9084(1,plVar17);
          _free(plVar31);
          __Unwind_Resume(uVar15);
          auVar32 = func_0x000108a07bc4();
          lVar18 = auVar32._8_8_;
          puVar20 = auVar32._0_8_;
          uVar22 = *(ulong *)(lVar18 + 0x20);
          if (uVar22 <= *(ulong *)(lVar18 + 0x28)) goto LAB_104a57db8;
          plVar29 = (long *)(lVar18 + 0x18);
          lVar25 = *plVar29;
          lVar24 = *(ulong *)(lVar18 + 0x28) + 5;
          goto LAB_104a57d84;
        }
      }
      _memcpy(lVar18,plVar19,plVar17);
      FUN_104a56ab4(&uStack_130,lVar18,plVar17);
      if (uStack_130 == (long *)0x8000000000000005) {
        plStack_228 = (long *)FUN_1089a84b4(plStack_128);
        plStack_230 = (long *)0x8000000000000005;
      }
      else {
        plStack_208 = plStack_108;
        plStack_210 = plStack_110;
        auStack_1f8._0_8_ = auStack_f8._0_8_;
        plStack_200 = plStack_100;
        auStack_1f8._8_8_ = auStack_f8._8_8_;
        plStack_228 = plStack_128;
        plStack_230 = uStack_130;
        plStack_218 = plStack_118;
        plStack_220 = plStack_120;
      }
      if (plVar17 != (long *)0x0) {
        _free(lVar18);
      }
      goto LAB_104a573a0;
    }
  }
LAB_104a575bc:
  uStack_130 = (long *)0x5;
LAB_104a575c0:
  plStack_128 = (long *)func_0x0001089a7a8c(lVar18,&uStack_130);
LAB_104a57608:
  plStack_230 = (long *)0x8000000000000005;
  plStack_228 = plStack_128;
LAB_104a573a0:
  *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
  uVar22 = *(ulong *)(param_2 + 0x28);
  if (uVar22 < *(ulong *)(param_2 + 0x20)) {
LAB_104a573c8:
    bVar1 = *(byte *)(*plVar29 + uVar22);
    if (bVar1 < 0x2d) {
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) goto code_r0x000104a573e0;
      if ((ulong)bVar1 != 0x2c) goto LAB_104a579a0;
      plStack_c0 = (long *)0x15;
      plVar29 = (long *)func_0x0001089a7a8c(param_2,&plStack_c0);
    }
    else {
LAB_104a579a0:
      if (bVar1 == 0x7d) {
        *(ulong *)(param_2 + 0x28) = uVar22 + 1;
        plVar31 = plStack_230;
        plVar19 = plStack_228;
        plVar29 = plStack_220;
        plStack_120 = plStack_218;
        plStack_260 = plStack_210;
        plStack_258 = plStack_208;
        plStack_250 = plStack_200;
        auStack_f8 = auStack_1f8._0_16_;
joined_r0x000104a57a8c:
        uStack_130 = plVar31;
        plStack_128 = plVar19;
        plStack_118 = plStack_120;
        plStack_110 = plStack_260;
        plStack_108 = plStack_258;
        plStack_100 = plStack_250;
        if ((plVar31 != (long *)0x8000000000000005) && (plVar31 != (long *)0x8000000000000005)) {
          uVar22 = (ulong)plVar19 & 0xffffffffffffff00;
          auVar32 = auStack_f8;
LAB_104a57aa8:
          uStack_240 = auVar32._8_8_;
          uStack_248 = auVar32._0_8_;
          *param_1 = plVar31;
          param_1[1] = (ulong)plVar19 & 0xff | uVar22;
          param_1[2] = plVar29;
          param_1[3] = plStack_120;
          param_1[5] = plStack_258;
          param_1[4] = plStack_260;
          param_1[7] = uStack_248;
          param_1[6] = plStack_250;
          param_1[8] = uStack_240;
          return;
        }
        goto LAB_104a579fc;
      }
      plStack_c0 = (long *)0x16;
      plVar29 = (long *)func_0x0001089a7a8c(param_2,&plStack_c0);
    }
    goto LAB_104a57404;
  }
LAB_104a573f0:
  plStack_c0 = (long *)0x3;
  plVar29 = (long *)func_0x0001089a7a8c(param_2,&plStack_c0);
LAB_104a57404:
  plVar19 = plStack_228;
  plStack_128 = plStack_228;
  uStack_130 = plStack_230;
  plStack_118 = plStack_218;
  plStack_120 = plStack_220;
  plStack_108 = plStack_208;
  plStack_110 = plStack_210;
  plStack_100 = plStack_200;
  auVar3 = auStack_1f8._0_16_;
  if (plStack_230 == (long *)0x8000000000000005) {
    plStack_e8 = plVar29;
    auStack_f8 = auStack_1f8._0_16_;
    FUN_104a59f1c(plVar29);
LAB_104a57438:
    _free(plVar29);
    plVar29 = plStack_120;
  }
  else {
LAB_104a57458:
    plVar19 = plVar29;
    plStack_e8 = plVar19;
    auStack_f8 = auVar3;
    FUN_104a59df8(&uStack_130);
    plVar29 = plStack_120;
  }
LAB_104a579fc:
  plStack_120 = plVar29;
  uVar15 = func_0x0001089a823c(plVar19,param_2);
LAB_104a56c70:
  *param_1 = 0x8000000000000005;
  param_1[1] = uVar15;
  return;
}

