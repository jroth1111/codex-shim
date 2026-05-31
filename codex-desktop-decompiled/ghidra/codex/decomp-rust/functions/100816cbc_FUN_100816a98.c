
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100816a98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *****ppppplVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *****ppppplStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *****ppppplStack_90;
  long ******pppppplStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long ******pppppplStack_70;
  undefined *puStack_68;
  long *****ppppplStack_60;
  long *****ppppplStack_58;
  long *****ppppplStack_50;
  code *pcStack_48;
  
  if (*(long *)(param_1 + 0xe8) != 0) {
    return;
  }
  if (*(ulong *)(param_1 + 0x168) < 0x8000000000000003) {
    return;
  }
  if ((*(byte *)(param_1 + 0xc1) & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    auVar11 = FUN_100815240(param_1);
    ppppplStack_b0 = auVar11._8_8_;
    if (auVar11._0_8_ == 2) {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bVar6 = bRam000000010b6373c8, bRam000000010b6373c8 - 1 < 2 ||
           ((bRam000000010b6373c8 != 0 &&
            (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17h4fa92a6e03c474daE
                               ), bVar6 != 0)))) &&
          (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17h4fa92a6e03c474daE
                              ,bVar6), iVar8 != 0)))) {
        lStack_78 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17h4fa92a6e03c474daE
                    + 0x30;
        ppppplStack_50 = (long *****)&UNK_108cb0c76;
        pcStack_48 = (code *)0x45;
        ppppplStack_60 = (long *****)&ppppplStack_50;
        ppppplStack_58 = (long *****)&UNK_10b208fd0;
        pppppplStack_88 = &ppppplStack_60;
        ppppplStack_90 = (long *****)0x1;
        uStack_80 = 1;
        FUN_1008178e8(&ppppplStack_90);
        return;
      }
      lVar3 = 
      ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17h4fa92a6e03c474daE
      ;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
        return;
      }
      if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
        return;
      }
      uStack_c0 = *(undefined8 *)
                   (
                   ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17h4fa92a6e03c474daE
                   + 0x20);
      uStack_b8 = *(undefined8 *)
                   (
                   ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17h4fa92a6e03c474daE
                   + 0x28);
      uStack_c8 = 5;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_c8);
      if (iVar8 == 0) {
        return;
      }
      lStack_78 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17h4fa92a6e03c474daE
                  + 0x30;
      ppppplStack_50 = (long *****)&UNK_108cb0c76;
      pcStack_48 = (code *)0x45;
      ppppplStack_60 = (long *****)&ppppplStack_50;
      ppppplStack_58 = (long *****)&UNK_10b208fd0;
      pppppplStack_88 = &ppppplStack_60;
      ppppplStack_90 = (long *****)0x1;
      uStack_80 = 1;
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar3,puVar2,puVar1,&uStack_c8,&ppppplStack_90);
      return;
    }
    if ((auVar11._0_8_ & 1) != 0) {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b6373e0 - 1 < 2 ||
           ((bRam000000010b6373e0 != 0 &&
            (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hd2c766cd65959d47E
                               ), cVar7 != '\0')))))) &&
         (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hd2c766cd65959d47E
                            ), iVar8 != 0)) {
        lStack_78 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hd2c766cd65959d47E
                    + 0x30;
        ppppplStack_50 = (long *****)&ppppplStack_b0;
        pcStack_48 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        ppppplStack_58 = (long *****)&ppppplStack_50;
        ppppplStack_60 = (long *****)s__maybe_notify__read_from_io_erro_108ac8b13;
        pppppplStack_70 = &ppppplStack_60;
        puStack_68 = &UNK_10b208fd0;
        pppppplStack_88 = (long ******)&pppppplStack_70;
        ppppplStack_90 = (long *****)0x1;
        uStack_80 = 1;
        FUN_100817670(&ppppplStack_90);
      }
      else {
        lVar3 = 
        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hd2c766cd65959d47E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_a0 = *(undefined8 *)
                       (
                       ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hd2c766cd65959d47E
                       + 0x20);
          uStack_98 = *(undefined8 *)
                       (
                       ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hd2c766cd65959d47E
                       + 0x28);
          pcStack_a8 = (char *)0x5;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&pcStack_a8);
          if (iVar8 != 0) {
            lStack_78 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hd2c766cd65959d47E
                        + 0x30;
            ppppplStack_50 = (long *****)&ppppplStack_b0;
            pcStack_48 = 
            __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
            ;
            ppppplStack_58 = (long *****)&ppppplStack_50;
            ppppplStack_60 = (long *****)s__maybe_notify__read_from_io_erro_108ac8b13;
            pppppplStack_70 = &ppppplStack_60;
            puStack_68 = &UNK_10b208fd0;
            pppppplStack_88 = (long ******)&pppppplStack_70;
            ppppplStack_90 = (long *****)0x1;
            uStack_80 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar3,puVar2,puVar1,&pcStack_a8,&ppppplStack_90);
          }
        }
      }
      __ZN14rama_http_core5proto2h14conn5State5close17h37e265bec3f1ce41E(param_1 + 200);
      ppppplVar4 = ppppplStack_b0;
      ppppplStack_60 = ppppplStack_b0;
      ppppplVar9 = (long *****)_malloc(0x18);
      if (ppppplVar9 == (long *****)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      }
      else {
        *ppppplVar9 = (long ****)0x0;
        *(undefined1 *)(ppppplVar9 + 2) = 6;
        ppppplStack_90 = ppppplVar4;
        ppppplStack_50 = ppppplVar9;
        pppplVar10 = (long ****)_malloc(8);
        if (pppplVar10 != (long ****)0x0) {
          *pppplVar10 = (long ***)ppppplVar4;
          *ppppplVar9 = pppplVar10;
          ppppplVar9[1] = (long ****)&UNK_10b212e38;
          FUN_100e25264(*(undefined8 *)(param_1 + 0x1b0));
          *(long ******)(param_1 + 0x1b0) = ppppplVar9;
          goto LAB_100816af4;
        }
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100817030);
      (*pcVar5)();
    }
    if (ppppplStack_b0 == (long *****)0x0) {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bVar6 = bRam000000010b6373f8, bRam000000010b6373f8 - 1 < 2 ||
           ((bRam000000010b6373f8 != 0 &&
            (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hecf815ce627d31efE
                               ), bVar6 != 0)))))) &&
         (iVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hecf815ce627d31efE
                             ,bVar6), iVar8 != 0)) {
        lStack_78 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hecf815ce627d31efE
                    + 0x30;
        ppppplStack_50 = (long *****)&UNK_108cb0c60;
        pcStack_48 = (code *)0x2d;
        ppppplStack_60 = (long *****)&ppppplStack_50;
        ppppplStack_58 = (long *****)&UNK_10b208fd0;
        pppppplStack_88 = &ppppplStack_60;
        ppppplStack_90 = (long *****)0x1;
        uStack_80 = 1;
        FUN_1008177ac(&ppppplStack_90);
      }
      else {
        lVar3 = 
        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hecf815ce627d31efE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_d8 = *(undefined8 *)
                       (
                       ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hecf815ce627d31efE
                       + 0x20);
          uStack_d0 = *(undefined8 *)
                       (
                       ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hecf815ce627d31efE
                       + 0x28);
          uStack_e0 = 5;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_e0);
          if (iVar8 != 0) {
            lStack_78 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_12maybe_notify10__CALLSITE17hecf815ce627d31efE
                        + 0x30;
            ppppplStack_50 = (long *****)&UNK_108cb0c60;
            pcStack_48 = (code *)0x2d;
            ppppplStack_60 = (long *****)&ppppplStack_50;
            ppppplStack_58 = (long *****)&UNK_10b208fd0;
            pppppplStack_88 = &ppppplStack_60;
            ppppplStack_90 = (long *****)0x1;
            uStack_80 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar3,puVar2,puVar1,&uStack_e0,&ppppplStack_90);
          }
        }
      }
      if (*(char *)(param_1 + 0x1de) != '\0') {
        __ZN14rama_http_core5proto2h14conn5State10close_read17h2bff39625ec394f6E(param_1 + 200);
        return;
      }
      __ZN14rama_http_core5proto2h14conn5State5close17h37e265bec3f1ce41E(param_1 + 200);
      return;
    }
  }
LAB_100816af4:
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  return;
}

