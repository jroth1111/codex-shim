
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006dd9c8(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined1 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  long lStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined1 auStack_218 [16];
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long **pplStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  char ***pppcStack_a0;
  undefined *puStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long **pplStack_80;
  long ***ppplStack_78;
  
  bVar2 = *(byte *)((long)param_2 + 0x11);
  if (bVar2 < 3) {
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        FUN_107c05cc0(&UNK_10b21e2a0);
      }
      FUN_107c05cc4();
LAB_1006de1fc:
      FUN_107c05cc0(&UNK_10b21e240);
      goto LAB_1006de218;
    }
    *(undefined1 *)(param_2 + 2) = 0;
    plVar12 = (long *)param_2[1];
    *param_2 = plVar12;
    param_2[3] = plVar12;
    *(undefined1 *)(param_2 + 8) = 0;
LAB_1006dda4c:
    auStack_218 = __ZN11codex_login4auth7manager11AuthManager13external_auth17h5e847c1ce8167e90E
                            (plVar12);
    plVar15 = auStack_218._0_8_;
    if (plVar15 != (long *)0x0) {
      cVar6 = (**(code **)(auStack_218._8_8_ + 0x18))
                        ((undefined *)
                         ((long)plVar15 +
                         (*(long *)(auStack_218._8_8_ + 0x10) - 1U & 0xfffffffffffffff0) + 0x10));
      lVar4 = *plVar15;
      *plVar15 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000103d03378(auStack_218);
      }
      if (cVar6 == '\0') {
        auVar16 = __ZN11codex_login4auth7manager11AuthManager13external_auth17h5e847c1ce8167e90E
                            (plVar12);
        if (auVar16._0_8_ != 0) {
          *(undefined1 (*) [16])(param_2 + 4) = auVar16;
          auVar16 = (**(code **)(auVar16._8_8_ + 0x20))
                              (auVar16._0_8_ +
                               (*(long *)(auVar16._8_8_ + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
          *(undefined1 (*) [16])(param_2 + 6) = auVar16;
          goto LAB_1006ddc64;
        }
      }
    }
    lVar4 = -0x7ffffffffffffffd;
LAB_1006ddaa4:
    *(undefined1 *)(param_2 + 8) = 1;
    lStack_2b0 = lVar4;
    plStack_2a8 = plVar12;
    plStack_2a0 = plVar15;
    plStack_298 = plVar12;
    FUN_100ce72d8(param_2 + 3);
    if (lVar4 == -0x7ffffffffffffffd) {
      __ZN11codex_login4auth7manager11AuthManager11auth_cached17h7baff12c9dcb2a10E
                (auStack_218,*param_2);
      if (auStack_218._0_8_ != -0x7ffffffffffffffd) {
        uStack_118 = uStack_1a8;
        uStack_120 = uStack_1b0;
        uStack_108 = uStack_198;
        uStack_110 = uStack_1a0;
        uStack_f8 = uStack_188;
        uStack_100 = uStack_190;
        plStack_158 = plStack_1e8;
        plStack_160 = plStack_1f0;
        plStack_148 = plStack_1d8;
        plStack_150 = plStack_1e0;
        uStack_138 = uStack_1c8;
        uStack_140 = uStack_1d0;
        uStack_128 = uStack_1b8;
        uStack_130 = uStack_1c0;
        plStack_178 = plStack_208;
        plStack_180 = (long *)auStack_218._8_8_;
        plStack_168 = plStack_1f8;
        plStack_170 = plStack_200;
        *(undefined1 *)(param_2 + 2) = 1;
        param_2[3] = auStack_218._0_8_;
        param_2[0x11] = uStack_1a8;
        param_2[0x10] = uStack_1b0;
        param_2[0x13] = uStack_198;
        param_2[0x12] = uStack_1a0;
        param_2[0x15] = uStack_188;
        param_2[0x14] = uStack_190;
        param_2[9] = plStack_1e8;
        param_2[8] = plStack_1f0;
        param_2[0xb] = plStack_1d8;
        param_2[10] = plStack_1e0;
        param_2[0xd] = uStack_1c8;
        param_2[0xc] = uStack_1d0;
        param_2[0xf] = uStack_1b8;
        param_2[0xe] = uStack_1c0;
        param_2[5] = plStack_208;
        param_2[4] = auStack_218._8_8_;
        param_2[7] = plStack_1f8;
        param_2[6] = plStack_200;
        uVar8 = __ZN11codex_login4auth7manager11AuthManager30is_stale_for_proactive_refresh17h15b153dd23bae8ddE
                          (param_2 + 3);
        if ((uVar8 & 1) != 0) {
          param_2[0x16] = *param_2;
          *(undefined1 *)(param_2 + 0x30) = 0;
          goto LAB_1006ddb6c;
        }
        goto LAB_1006ddbc4;
      }
      lStack_2b0 = -0x7ffffffffffffffd;
      goto LAB_1006ddbd8;
    }
  }
  else {
    if (bVar2 == 3) {
      bVar2 = *(byte *)(param_2 + 8);
      if (bVar2 < 2) {
        if (bVar2 != 0) goto LAB_1006de1fc;
        plVar12 = (long *)param_2[3];
        goto LAB_1006dda4c;
      }
      if (bVar2 != 3) {
        FUN_107c05cc4(&UNK_10b21e240);
        goto LAB_1006de218;
      }
      auVar16 = *(undefined1 (*) [16])(param_2 + 6);
LAB_1006ddc64:
      (**(code **)(auVar16._8_8_ + 0x18))(auStack_218,auVar16._0_8_,param_3);
      auVar16 = auStack_218;
      uVar3 = auStack_218._8_8_;
      uVar11 = auStack_218._0_8_;
      if (auStack_218._0_8_ == -0x7ffffffffffffffe) {
        uVar9 = 3;
        *(undefined1 *)(param_2 + 8) = 3;
        *param_1 = -0x7ffffffffffffffc;
        goto LAB_1006ddc10;
      }
      plStack_178 = plStack_200;
      plStack_180 = plStack_208;
      plStack_168 = plStack_1f0;
      plStack_170 = plStack_1f8;
      plStack_158 = plStack_1e0;
      plStack_160 = plStack_1e8;
      plStack_150 = plStack_1d8;
      plVar14 = (long *)param_2[6];
      plVar15 = (long *)param_2[7];
      if ((code *)*plVar15 != (code *)0x0) {
        (*(code *)*plVar15)(plVar14);
      }
      if (plVar15[1] != 0) {
        _free(plVar14);
      }
      plVar12 = plStack_180;
      if (uVar11 == -0x8000000000000000) {
LAB_1006de0b0:
        lVar4 = -0x7ffffffffffffffd;
        plVar12 = plVar14;
      }
      else {
        if (uVar11 == -0x7fffffffffffffff) {
          plStack_c0 = (long *)uVar3;
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
            if (1 < bRam000000010b62d598 - 1) {
              if (bRam000000010b62d598 != 0) {
                cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN11codex_login4auth7manager11AuthManager29resolve_external_api_key_auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd97567c3e3fc1babE
                                  );
                if (cVar6 != '\0') goto LAB_1006ddd24;
              }
              goto LAB_1006de060;
            }
LAB_1006ddd24:
            uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN11codex_login4auth7manager11AuthManager29resolve_external_api_key_auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd97567c3e3fc1babE
                              );
            if ((uVar8 & 1) == 0) goto LAB_1006de060;
            plStack_200 = (long *)(
                                  ___ZN11codex_login4auth7manager11AuthManager29resolve_external_api_key_auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd97567c3e3fc1babE
                                  + 0x30);
            pplStack_80 = &plStack_c0;
            ppplStack_78 = (long ***)
                           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            ppplStack_88 = &pplStack_80;
            ppplStack_90 = (long ***)s__Failed_to_resolve_external_API_k_108ac36d0;
            pppcStack_a0 = (char ***)&ppplStack_90;
            puStack_98 = &UNK_10b208fd0;
            auStack_218._8_8_ = &pppcStack_a0;
            auStack_218._0_8_ = 1;
            plStack_208 = (long *)0x1;
            FUN_1006dae40(auStack_218);
          }
          else {
LAB_1006de060:
            lVar4 = 
            ___ZN11codex_login4auth7manager11AuthManager29resolve_external_api_key_auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd97567c3e3fc1babE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
              puStack_b0 = *(undefined **)
                            (
                            ___ZN11codex_login4auth7manager11AuthManager29resolve_external_api_key_auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd97567c3e3fc1babE
                            + 0x20);
              uStack_a8 = *(undefined8 *)
                           (
                           ___ZN11codex_login4auth7manager11AuthManager29resolve_external_api_key_auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd97567c3e3fc1babE
                           + 0x28);
              pplStack_b8 = (long **)0x1;
              plVar15 = plRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                plVar15 = (long *)&UNK_10b3c24c8;
              }
              puVar1 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_109adfc03;
              }
              iVar7 = (*(code *)plVar15[3])(puVar1,&pplStack_b8);
              if (iVar7 != 0) {
                plStack_200 = (long *)(
                                      ___ZN11codex_login4auth7manager11AuthManager29resolve_external_api_key_auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd97567c3e3fc1babE
                                      + 0x30);
                pplStack_80 = &plStack_c0;
                ppplStack_78 = (long ***)
                               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                ;
                ppplStack_88 = &pplStack_80;
                ppplStack_90 = (long ***)s__Failed_to_resolve_external_API_k_108ac36d0;
                pppcStack_a0 = (char ***)&ppplStack_90;
                puStack_98 = &UNK_10b208fd0;
                auStack_218._8_8_ = &pppcStack_a0;
                auStack_218._0_8_ = 1;
                plStack_208 = (long *)0x1;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar4,puVar1,plVar15,&pplStack_b8,auStack_218);
              }
            }
          }
          plVar14 = plStack_c0;
          if (((ulong)plStack_c0 & 3) == 1) {
            plVar14 = (long *)((long)plStack_c0 + -1);
            plVar15 = (long *)*plVar14;
            puVar13 = *(undefined8 **)((long)plStack_c0 + 7);
            pcVar10 = (code *)*puVar13;
            if (pcVar10 != (code *)0x0) {
              (*pcVar10)(plVar15);
            }
            if (puVar13[1] != 0) {
              _free(plVar15);
            }
            _free(plVar14);
          }
          goto LAB_1006de0b0;
        }
        plStack_200 = plStack_178;
        plStack_208 = plStack_180;
        plStack_1f0 = plStack_168;
        plStack_1f8 = plStack_170;
        plStack_1e0 = plStack_158;
        plStack_1e8 = plStack_160;
        plStack_1d8 = plStack_150;
        if (plStack_180 == (long *)0x0) {
          plVar15 = (long *)0x1;
        }
        else {
          auStack_218 = auVar16;
          plVar15 = (long *)_malloc(plStack_180);
          auVar16 = auStack_218;
          if (plVar15 == (long *)0x0) {
            FUN_107c03c64(1,plVar12);
LAB_1006de218:
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1006de21c);
            (*pcVar10)();
          }
        }
        auStack_218 = auVar16;
        _memcpy(plVar15,uVar3,plVar12);
        if (uVar11 != 0) {
          _free(uVar3);
        }
        if (plStack_200 != (long *)0x8000000000000000) {
          if (plStack_200 != (long *)0x0) {
            _free(plStack_1f8);
          }
          if ((plStack_1e8 != (long *)0x8000000000000000) && (plStack_1e8 != (long *)0x0)) {
            _free(plStack_1e0);
          }
        }
        lVar4 = -0x8000000000000000;
      }
      lVar5 = *(long *)param_2[4];
      *(long *)param_2[4] = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000103d03378();
      }
      goto LAB_1006ddaa4;
    }
LAB_1006ddb6c:
    FUN_1006d8858(auStack_218,param_2 + 0x16,param_3);
    uVar11 = auStack_218._0_8_;
    if ((long *)auStack_218._0_8_ == (long *)0x8000000000000002) {
      *param_1 = -0x7ffffffffffffffc;
      uVar9 = 4;
      goto LAB_1006ddc10;
    }
    plStack_e8 = plStack_208;
    puStack_f0 = (undefined8 *)auStack_218._8_8_;
    plStack_e0 = plStack_200;
    FUN_100cab424(param_2 + 0x16);
    if ((long *)uVar11 == (long *)0x8000000000000001) {
LAB_1006ddbc4:
      __ZN11codex_login4auth7manager11AuthManager11auth_cached17h7baff12c9dcb2a10E
                (&lStack_2b0,*param_2);
      FUN_100e0609c(param_2 + 3);
      goto LAB_1006ddbd8;
    }
    plStack_170 = plStack_e8;
    plStack_178 = puStack_f0;
    plStack_180 = (long *)uVar11;
    plStack_168 = plStack_e0;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
      if (1 < bRam000000010b62d5c8 - 1) {
        if (bRam000000010b62d5c8 != 0) {
          cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
                            );
          if (cVar6 != '\0') goto LAB_1006dddc4;
        }
        goto LAB_1006dde6c;
      }
LAB_1006dddc4:
      uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
                        );
      if ((uVar8 & 1) == 0) goto LAB_1006dde6c;
      plStack_200 = (long *)(
                            ___ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
                            + 0x30);
      pplStack_b8 = &plStack_180;
      puStack_b0 = &
                   __ZN84__LT_codex_login__auth__manager__RefreshTokenError_u20_as_u20_core__fmt__Display_GT_3fmt17h878187654c644b55E
      ;
      ppplStack_78 = &pplStack_b8;
      pplStack_80 = (long **)s_Failed_to_refresh_token__108ac36fc;
      ppplStack_90 = &pplStack_80;
      ppplStack_88 = (long ***)&UNK_10b208fd0;
      auStack_218._8_8_ = &ppplStack_90;
      auStack_218._0_8_ = 1;
      plStack_208 = (long *)0x1;
      FUN_1006de3b8(auStack_218);
    }
    else {
LAB_1006dde6c:
      lVar4 = 
      ___ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uStack_d0 = *(undefined8 *)
                     (
                     ___ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
                     + 0x20);
        uStack_c8 = *(undefined8 *)
                     (
                     ___ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
                     + 0x28);
        uStack_d8 = 1;
        plVar12 = plRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          plVar12 = (long *)&UNK_10b3c24c8;
        }
        puVar1 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_109adfc03;
        }
        iVar7 = (*(code *)plVar12[3])(puVar1,&uStack_d8);
        if (iVar7 != 0) {
          plStack_200 = (long *)(
                                ___ZN11codex_login4auth7manager11AuthManager4auth28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h59d0beff08ec4ccfE
                                + 0x30);
          pplStack_b8 = &plStack_180;
          puStack_b0 = &
                       __ZN84__LT_codex_login__auth__manager__RefreshTokenError_u20_as_u20_core__fmt__Display_GT_3fmt17h878187654c644b55E
          ;
          ppplStack_78 = &pplStack_b8;
          pplStack_80 = (long **)s_Failed_to_refresh_token__108ac36fc;
          ppplStack_90 = &pplStack_80;
          ppplStack_88 = (long ***)&UNK_10b208fd0;
          auStack_218._8_8_ = &ppplStack_90;
          auStack_218._0_8_ = 1;
          plStack_208 = (long *)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar4,puVar1,plVar12,&uStack_d8,auStack_218);
        }
      }
    }
    *(undefined1 *)(param_2 + 2) = 0;
    lStack_248 = param_2[0x10];
    lStack_250 = param_2[0xf];
    lStack_238 = param_2[0x12];
    lStack_240 = param_2[0x11];
    lStack_228 = param_2[0x14];
    lStack_230 = param_2[0x13];
    lStack_220 = param_2[0x15];
    lStack_288 = param_2[8];
    lStack_290 = param_2[7];
    lStack_278 = param_2[10];
    lStack_280 = param_2[9];
    lStack_268 = param_2[0xc];
    lStack_270 = param_2[0xb];
    lStack_258 = param_2[0xe];
    lStack_260 = param_2[0xd];
    plStack_2a8 = (long *)param_2[4];
    lStack_2b0 = param_2[3];
    plStack_298 = (long *)param_2[6];
    plStack_2a0 = (long *)param_2[5];
    if (plStack_180 == (long *)0x8000000000000000) {
      if (((ulong)plStack_178 & 3) == 1) {
        plVar12 = (long *)((long)plStack_178 + -1);
        uVar11 = *plVar12;
        puVar13 = *(undefined8 **)((long)plStack_178 + 7);
        pcVar10 = (code *)*puVar13;
        if (pcVar10 != (code *)0x0) {
          (*pcVar10)(uVar11);
        }
        if (puVar13[1] != 0) {
          _free(uVar11);
        }
        goto LAB_1006dded8;
      }
    }
    else {
      plVar12 = plStack_178;
      if (plStack_180 != (long *)0x0) {
LAB_1006dded8:
        _free(plVar12);
      }
    }
LAB_1006ddbd8:
    *(undefined1 *)(param_2 + 2) = 0;
  }
  param_1[0xd] = lStack_248;
  param_1[0xc] = lStack_250;
  param_1[0xf] = lStack_238;
  param_1[0xe] = lStack_240;
  param_1[0x11] = lStack_228;
  param_1[0x10] = lStack_230;
  param_1[0x12] = lStack_220;
  param_1[5] = lStack_288;
  param_1[4] = lStack_290;
  param_1[7] = lStack_278;
  param_1[6] = lStack_280;
  param_1[9] = lStack_268;
  param_1[8] = lStack_270;
  param_1[0xb] = lStack_258;
  param_1[10] = lStack_260;
  uVar9 = 1;
  param_1[1] = (long)plStack_2a8;
  *param_1 = lStack_2b0;
  param_1[3] = (long)plStack_298;
  param_1[2] = (long)plStack_2a0;
LAB_1006ddc10:
  *(undefined1 *)((long)param_2 + 0x11) = uVar9;
  return;
}

