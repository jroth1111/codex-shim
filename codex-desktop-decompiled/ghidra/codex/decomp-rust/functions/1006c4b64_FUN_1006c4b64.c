
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ******* FUN_1006c4b64(long *param_1,long *param_2)

{
  char ***pppcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  long *******ppppppplVar8;
  char *pcVar9;
  long *plVar10;
  long *extraout_x1;
  long lVar11;
  long ******pppppplVar12;
  undefined1 in_wzr;
  long *******ppppppplStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  long *****ppppplStack_3e0;
  undefined8 uStack_3d8;
  long *******ppppppplStack_3d0;
  char ***pppcStack_3c8;
  long ******pppppplStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  ulong uStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *****ppppplStack_2d0;
  long *****ppppplStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  char **ppcStack_2a0;
  undefined *puStack_298;
  char *pcStack_290;
  long ******pppppplStack_288;
  long ******pppppplStack_280;
  long *****ppppplStack_278;
  long lStack_270;
  long *******ppppppplStack_260;
  char ***pppcStack_258;
  long ******pppppplStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  ulong uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *******ppppppplStack_160;
  long ******pppppplStack_158;
  long ******pppppplStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *******ppppppplStack_60;
  long *****ppppplStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_2 == 3) {
    ppppppplStack_400 = (long *******)param_2[1];
    lStack_3f8 = *param_1;
    *param_1 = 2;
    if (lStack_3f8 == 2) {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        return ppppppplStack_400;
      }
      lVar11 = param_1[4];
      LOAcquire();
      ppppppplStack_260 = *(long ********)(lVar11 + 0x10);
      *(undefined8 *)(lVar11 + 0x10) = 3;
      LORelease();
      if ((long *******)0x1 < ppppppplStack_260) {
        if (ppppppplStack_260 == (long *******)0x2) {
          do {
            LOAcquire();
            cVar6 = *(char *)(lVar11 + 0x28);
            *(char *)(lVar11 + 0x28) = '\x01';
            LORelease();
          } while (cVar6 != '\0');
          lVar4 = *(long *)(lVar11 + 0x18);
          *(undefined8 *)(lVar11 + 0x18) = 0;
          *(undefined1 *)(lVar11 + 0x28) = in_wzr;
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar11 + 0x20));
            param_2 = extraout_x1;
          }
        }
        else if (ppppppplStack_260 != (long *******)0x3) {
          ppppppplStack_160 = (long *******)&ppppppplStack_260;
          pppppplStack_158 =
               (long ******)
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s_9internal_error__entered_unreach_108b3cbc2,&ppppppplStack_160,&UNK_10b4dc678)
          ;
          goto LAB_1006c5258;
        }
      }
      lVar11 = param_1[3];
      if ((*(byte *)(lVar11 + 0x1b8) & 1) == 0) {
        *(undefined1 *)(lVar11 + 0x1b8) = 1;
      }
      *(ulong *)(lVar11 + 0x1c0) = *(ulong *)(lVar11 + 0x1c0) | 1;
      LORelease();
      pppcVar1 = (char ***)(lVar11 + 0x188);
      if (*(char *)pppcVar1 == '\0') {
        *(char *)pppcVar1 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pppcVar1,param_2,1000000000);
      }
      ppppppplStack_160 = (long *******)(lVar11 + 0x180);
      pppppplStack_150 = *ppppppplStack_160;
      pppppplStack_158 = (long ******)pppcVar1;
      __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&ppppppplStack_160);
      func_0x000100fc6340(&ppppppplStack_160,param_1[3],&UNK_10b2525e0);
      if (ppppppplStack_60 == (long *******)0x3) {
        return ppppppplStack_400;
      }
      uStack_198 = uStack_98;
      uStack_1a0 = uStack_a0;
      uStack_188 = uStack_88;
      uStack_190 = uStack_90;
      uStack_178 = uStack_78;
      uStack_180 = uStack_80;
      uStack_168 = uStack_68;
      uStack_170 = uStack_70;
      lStack_1d8 = lStack_d8;
      lStack_1e0 = uStack_e0;
      lStack_1c8 = lStack_c8;
      lStack_1d0 = lStack_d0;
      uStack_1b8 = lStack_b8;
      lStack_1c0 = lStack_c0;
      uStack_1a8 = uStack_a8;
      uStack_1b0 = uStack_b0;
      lStack_218 = lStack_118;
      lStack_220 = lStack_120;
      uStack_208 = uStack_108;
      lStack_210 = lStack_110;
      lStack_1f8 = lStack_f8;
      lStack_200 = lStack_100;
      uStack_1e8 = lStack_e8;
      lStack_1f0 = lStack_f0;
      pppcStack_258 = (char ***)pppppplStack_158;
      ppppppplStack_260 = ppppppplStack_160;
      lStack_248 = lStack_148;
      pppppplStack_250 = pppppplStack_150;
      lStack_238 = lStack_138;
      lStack_240 = lStack_140;
      lStack_228 = lStack_128;
      lStack_230 = lStack_130;
      ppppplStack_278 = (long *****)uStack_50;
      pppppplStack_280 = (long ******)ppppplStack_58;
      lStack_270 = uStack_48;
      if (ppppppplStack_60 == (long *******)0x2) {
        return ppppppplStack_400;
      }
      uStack_308 = uStack_98;
      uStack_310 = uStack_a0;
      uStack_2f8 = uStack_88;
      uStack_300 = uStack_90;
      uStack_2e8 = uStack_78;
      uStack_2f0 = uStack_80;
      uStack_2d8 = uStack_68;
      uStack_2e0 = uStack_70;
      uStack_348 = lStack_d8;
      uStack_350 = uStack_e0;
      uStack_338 = lStack_c8;
      uStack_340 = lStack_d0;
      uStack_328 = lStack_b8;
      uStack_330 = lStack_c0;
      uStack_318 = uStack_a8;
      uStack_320 = uStack_b0;
      uStack_388 = lStack_118;
      uStack_390 = lStack_120;
      uStack_378 = uStack_108;
      uStack_380 = lStack_110;
      uStack_368 = lStack_f8;
      lStack_370 = lStack_100;
      uStack_358 = lStack_e8;
      uStack_360 = lStack_f0;
      pppcStack_3c8 = (char ***)pppppplStack_158;
      ppppppplStack_3d0 = ppppppplStack_160;
      lStack_3b8 = lStack_148;
      pppppplStack_3c0 = pppppplStack_150;
      uStack_3a8 = lStack_138;
      lStack_3b0 = lStack_140;
      uStack_398 = lStack_128;
      uStack_3a0 = lStack_130;
      uStack_48 = CONCAT71(uStack_48._1_7_,1);
      uStack_3d8 = uStack_50;
      ppppplStack_3e0 = ppppplStack_58;
      func_0x000100d89d24(&ppppppplStack_160);
      uStack_198 = uStack_308;
      uStack_1a0 = uStack_310;
      uStack_188 = uStack_2f8;
      uStack_190 = uStack_300;
      uStack_178 = uStack_2e8;
      uStack_180 = uStack_2f0;
      uStack_168 = uStack_2d8;
      uStack_170 = uStack_2e0;
      lStack_1d8 = uStack_348;
      lStack_1e0 = uStack_350;
      lStack_1c8 = uStack_338;
      lStack_1d0 = uStack_340;
      uStack_1b8 = uStack_328;
      lStack_1c0 = uStack_330;
      uStack_1a8 = uStack_318;
      uStack_1b0 = uStack_320;
      lStack_218 = uStack_388;
      lStack_220 = uStack_390;
      uStack_208 = uStack_378;
      lStack_210 = uStack_380;
      lStack_1f8 = uStack_368;
      lStack_200 = lStack_370;
      uStack_1e8 = uStack_358;
      lStack_1f0 = uStack_360;
      pppcStack_258 = pppcStack_3c8;
      ppppppplStack_260 = ppppppplStack_3d0;
      lStack_248 = lStack_3b8;
      pppppplStack_250 = pppppplStack_3c0;
      lStack_238 = uStack_3a8;
      lStack_240 = lStack_3b0;
      lStack_228 = uStack_398;
      lStack_230 = uStack_3a0;
      ppppplStack_2d0 = (long *****)ppppppplStack_60;
      uStack_2c0 = uStack_3d8;
      ppppplStack_2c8 = ppppplStack_3e0;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b6364c8 - 1 < 2 ||
           ((bRam000000010b6364c8 != 0 &&
            (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN118__LT_rama_http_core__proto__h1__dispatch__Client_LT_B_GT__u20_as_u20_rama_http_core__proto__h1__dispatch__Dispatch_GT_8recv_msg10__CALLSITE17h668ece4b81ecb870E
                               ), cVar6 != '\0')))) &&
          (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN118__LT_rama_http_core__proto__h1__dispatch__Client_LT_B_GT__u20_as_u20_rama_http_core__proto__h1__dispatch__Dispatch_GT_8recv_msg10__CALLSITE17h668ece4b81ecb870E
                             ), iVar7 != 0)))) {
        lStack_148 = ___ZN118__LT_rama_http_core__proto__h1__dispatch__Client_LT_B_GT__u20_as_u20_rama_http_core__proto__h1__dispatch__Dispatch_GT_8recv_msg10__CALLSITE17h668ece4b81ecb870E
                     + 0x30;
        ppppplStack_278 =
             (long *****)
             &
             __ZN67__LT_rama_http_core__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h2c1266dbf4e0fa0dE
        ;
        pppppplStack_288 = (long ******)&pppppplStack_280;
        pcStack_290 = s_0canceling_queued_request_with_c_108ac2e6c;
        ppcStack_2a0 = &pcStack_290;
        puStack_298 = &UNK_10b208fd0;
        pppppplStack_158 = (long ******)&ppcStack_2a0;
        ppppppplStack_160 = (long *******)0x1;
        pppppplStack_150 = (long ******)0x1;
        pppppplStack_280 = (long ******)&ppppppplStack_400;
        FUN_1006c5394(&ppppppplStack_160);
      }
      else {
        lVar11 = 
        ___ZN118__LT_rama_http_core__proto__h1__dispatch__Client_LT_B_GT__u20_as_u20_rama_http_core__proto__h1__dispatch__Dispatch_GT_8recv_msg10__CALLSITE17h668ece4b81ecb870E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_2b0 = *(undefined8 *)
                        (
                        ___ZN118__LT_rama_http_core__proto__h1__dispatch__Client_LT_B_GT__u20_as_u20_rama_http_core__proto__h1__dispatch__Dispatch_GT_8recv_msg10__CALLSITE17h668ece4b81ecb870E
                        + 0x20);
          uStack_2a8 = *(undefined8 *)
                        (
                        ___ZN118__LT_rama_http_core__proto__h1__dispatch__Client_LT_B_GT__u20_as_u20_rama_http_core__proto__h1__dispatch__Dispatch_GT_8recv_msg10__CALLSITE17h668ece4b81ecb870E
                        + 0x28);
          uStack_2b8 = 5;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_2b8);
          if (iVar7 != 0) {
            lStack_148 = ___ZN118__LT_rama_http_core__proto__h1__dispatch__Client_LT_B_GT__u20_as_u20_rama_http_core__proto__h1__dispatch__Dispatch_GT_8recv_msg10__CALLSITE17h668ece4b81ecb870E
                         + 0x30;
            ppppplStack_278 =
                 (long *****)
                 &
                 __ZN67__LT_rama_http_core__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h2c1266dbf4e0fa0dE
            ;
            pppppplStack_288 = (long ******)&pppppplStack_280;
            pcStack_290 = s_0canceling_queued_request_with_c_108ac2e6c;
            ppcStack_2a0 = &pcStack_290;
            puStack_298 = &UNK_10b208fd0;
            pppppplStack_158 = (long ******)&ppcStack_2a0;
            ppppppplStack_160 = (long *******)0x1;
            pppppplStack_150 = (long ******)0x1;
            pppppplStack_280 = (long ******)&ppppppplStack_400;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar11,puVar3,puVar2,&uStack_2b8,&ppppppplStack_160);
          }
        }
      }
      ppppplStack_278 = ppppplStack_2c8;
      pppppplStack_280 = (long ******)ppppplStack_2d0;
      lStack_270 = uStack_2c0;
      pcVar9 = (char *)_malloc(0x18);
      ppppppplVar8 = ppppppplStack_400;
      if (pcVar9 == (char *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      }
      else {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9[4] = '\0';
        pcVar9[5] = '\0';
        pcVar9[6] = '\0';
        pcVar9[7] = '\0';
        pcVar9[0x10] = '\x04';
        ppppppplStack_160 = ppppppplStack_400;
        pcStack_290 = pcVar9;
        plVar10 = (long *)_malloc(8);
        if (plVar10 != (long *)0x0) {
          *plVar10 = (long)ppppppplVar8;
          *(long **)pcVar9 = plVar10;
          *(undefined **)(pcVar9 + 8) = &UNK_10b21ddf8;
          uStack_98 = uStack_198;
          uStack_a0 = uStack_1a0;
          uStack_88 = uStack_188;
          uStack_90 = uStack_190;
          uStack_78 = uStack_178;
          uStack_80 = uStack_180;
          uStack_68 = uStack_168;
          uStack_70 = uStack_170;
          lStack_d8 = lStack_1d8;
          uStack_e0 = lStack_1e0;
          lStack_c8 = lStack_1c8;
          lStack_d0 = lStack_1d0;
          lStack_b8 = uStack_1b8;
          lStack_c0 = lStack_1c0;
          uStack_a8 = uStack_1a8;
          uStack_b0 = uStack_1b0;
          lStack_118 = lStack_218;
          lStack_120 = lStack_220;
          uStack_108 = uStack_208;
          lStack_110 = lStack_210;
          lStack_f8 = lStack_1f8;
          lStack_100 = lStack_200;
          lStack_e8 = uStack_1e8;
          lStack_f0 = lStack_1f0;
          pppppplStack_158 = (long ******)pppcStack_258;
          ppppppplStack_160 = ppppppplStack_260;
          lStack_148 = lStack_248;
          pppppplStack_150 = pppppplStack_250;
          lStack_138 = lStack_238;
          lStack_140 = lStack_240;
          lStack_128 = lStack_228;
          lStack_130 = lStack_230;
          lStack_270 = CONCAT71(lStack_270._1_7_,1);
          ppppppplStack_60 = (long *******)pcVar9;
          FUN_10084e7d8(pppppplStack_280,ppppplStack_278,&ppppppplStack_160);
          return (long *******)0x0;
        }
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      }
LAB_1006c5258:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006c525c);
      (*pcVar5)();
    }
    lStack_3f0 = param_1[1];
    ppppppplStack_160 = (long *******)0x3;
    _uStack_3e8 = CONCAT71((int7)((ulong)param_1[2] >> 8),1);
    ppppppplStack_60 = ppppppplStack_400;
    FUN_10084e7d8(lStack_3f8,lStack_3f0,&ppppppplStack_160);
  }
  else {
    pppcStack_3c8 = (char ***)param_2[0x11];
    ppppppplStack_3d0 = (long *******)param_2[0x10];
    lStack_3b8 = param_2[0x13];
    pppppplStack_3c0 = (long ******)param_2[0x12];
    lStack_3b0 = param_2[0x14];
    pppppplVar12 = (long ******)*param_1;
    *param_1 = 2;
    if (pppppplVar12 == (long ******)0x2) {
      ppppppplVar8 = (long *******)_malloc(0x18);
      if (ppppppplVar8 != (long *******)0x0) {
        *ppppppplVar8 = (long ******)0x0;
        *(undefined1 *)(ppppppplVar8 + 2) = 3;
        FUN_100e10ca8(&ppppppplStack_3d0);
        FUN_100def764(param_2);
        func_0x000100e3c8d4(param_2 + 0xc);
        return ppppppplVar8;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_1006c5258;
    }
    lStack_270 = param_1[2];
    ppppplStack_278 = (long *****)param_1[1];
    lStack_1d8 = param_2[0x11];
    lStack_1e0 = param_2[0x10];
    lStack_1c8 = param_2[0x13];
    lStack_1d0 = param_2[0x12];
    lStack_1c0 = param_2[0x14];
    ppppppplStack_260 = (long *******)0x0;
    lStack_238 = 0;
    lStack_230 = 0;
    lStack_248 = 0;
    lStack_240 = 8;
    lStack_228 = 8;
    lStack_220 = 0;
    lStack_218 = 2;
    lStack_210 = 0;
    uStack_208 = uStack_208 & 0xffffffffffff0000;
    lStack_200 = 0;
    lStack_1f8 = 8;
    lStack_1f0 = 0;
    uStack_1e8 = CONCAT53(uStack_1e8._3_5_,0x20000);
    uStack_1e8 = CONCAT62(uStack_1e8._2_6_,(short)param_2[0xf]);
    pppppplStack_280 = pppppplVar12;
    FUN_100def764(&ppppppplStack_260);
    lStack_238 = param_2[5];
    lStack_240 = param_2[4];
    lStack_228 = param_2[7];
    lStack_230 = param_2[6];
    lStack_218 = param_2[9];
    lStack_220 = param_2[8];
    uStack_208 = param_2[0xb];
    lStack_210 = param_2[10];
    pppcStack_258 = (char ***)param_2[1];
    ppppppplStack_260 = (long *******)*param_2;
    lStack_248 = param_2[3];
    pppppplStack_250 = (long ******)param_2[2];
    uStack_1e8._0_3_ = CONCAT12(*(undefined1 *)((long)param_2 + 0x7a),(undefined2)uStack_1e8);
    func_0x000100e3c8d4(&lStack_200);
    lStack_1f8 = param_2[0xd];
    lStack_200 = param_2[0xc];
    lStack_1f0 = param_2[0xe];
    uStack_e0 = uStack_1e8;
    lStack_d0 = lStack_1d8;
    lStack_d8 = lStack_1e0;
    lStack_c0 = lStack_1c8;
    lStack_c8 = lStack_1d0;
    lStack_120 = lStack_228;
    lStack_128 = lStack_230;
    lStack_110 = lStack_218;
    lStack_118 = lStack_220;
    lStack_100 = uStack_208;
    uStack_108 = lStack_210;
    pppppplStack_150 = (long ******)pppcStack_258;
    pppppplStack_158 = (long ******)ppppppplStack_260;
    lStack_140 = lStack_248;
    lStack_148 = (long)pppppplStack_250;
    lStack_130 = lStack_238;
    lStack_138 = lStack_240;
    pppcStack_258 = (char ***)ppppplStack_278;
    ppppppplStack_260 = (long *******)pppppplStack_280;
    lStack_b8 = lStack_1c0;
    ppppppplStack_160 = (long *******)0x4;
    pppppplStack_250 = (long ******)CONCAT71((int7)((ulong)lStack_270 >> 8),1);
    lStack_f8 = lStack_200;
    lStack_f0 = lStack_1f8;
    lStack_e8 = lStack_1f0;
    FUN_10084e7d8(pppppplStack_280,ppppplStack_278,&ppppppplStack_160);
  }
  return (long *******)0x0;
}

