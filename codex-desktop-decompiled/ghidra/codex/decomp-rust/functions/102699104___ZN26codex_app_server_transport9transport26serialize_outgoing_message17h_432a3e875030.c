
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN26codex_app_server_transport9transport26serialize_outgoing_message17haaf988d4e41b6066E
               (long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  long *******ppppppplVar7;
  code *pcVar8;
  long lVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  long *******ppppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long *******ppppppplStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *******ppppppplStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long ******pppppplStack_240;
  undefined *puStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  long *****ppppplStack_180;
  long *******ppppppplStack_178;
  undefined8 uStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long *******ppppppplStack_70;
  long *******ppppppplStack_68;
  
  lVar9 = *param_2 + 0x7fffffffffffffbf;
  if (*param_2 < 0x8000000000000041) {
    lVar9 = 1;
  }
  if (lVar9 < 2) {
    if (lVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102699188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_10269918c +
                (ulong)*(ushort *)
                        (&UNK_108d32e9e +
                        (param_2[1] + 0x8000000000000001 & (long)param_2[1] >> 0x3f) * 2) * 4))();
      return;
    }
    func_0x0001026886f4(&ppppppplStack_2c0,param_2);
    goto LAB_10269a154;
  }
  if (lVar9 == 2) {
    pauVar6 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar6[1][0] == '\x01') {
      auVar17 = *pauVar6;
    }
    else {
      auVar17 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar6 + 8) = auVar17._8_8_;
      pauVar6[1][0] = 1;
    }
    *(long *)*pauVar6 = auVar17._0_8_ + 1;
    FUN_105dc99f8(&ppppppplStack_c0,2,auVar17._0_8_,auVar17._8_8_);
    uStack_78 = 0x8000000000000000;
    if (ppppppplStack_c0 == (long *******)0x8000000000000001) {
      ppppppplStack_2c0 = (long *******)0x8000000000000005;
      ppppppplStack_2b8 = ppppppplStack_b8;
    }
    else {
      uStack_e8 = uStack_88;
      uStack_f0 = uStack_90;
      uStack_d8 = 0x8000000000000000;
      uStack_e0 = uStack_80;
      ppppppplStack_c8 = ppppppplStack_68;
      ppppppplStack_d0 = ppppppplStack_70;
      lStack_108 = lStack_a8;
      ppppppplStack_110 = ppppppplStack_b0;
      uStack_f8 = uStack_98;
      lStack_100 = lStack_a0;
      ppppppplStack_120 = ppppppplStack_c0;
      ppppppplStack_118 = ppppppplStack_b8;
      ppppppplVar7 = (long *******)
                     func_0x0001026e5220(&ppppppplStack_120,&UNK_108d33ae9,2,param_2 + 1);
      if (ppppppplVar7 == (long *******)0x0) {
        if (ppppppplStack_120 == (long *******)0x8000000000000000) {
          ppppppplStack_c0 = (long *******)0xa;
          ppppppplVar7 = (long *******)func_0x000108a4a0f8(&ppppppplStack_c0,0,0);
        }
        else {
          ppppppplVar7 = (long *******)_malloc(6);
          if (ppppppplVar7 == (long *******)0x0) {
            func_0x0001087c9084(1,6);
            goto LAB_10269ab78;
          }
          *(undefined2 *)((long)ppppppplVar7 + 4) = 0x746c;
          *(undefined4 *)ppppppplVar7 = 0x75736572;
          if ((uStack_d8 & 0x7fffffffffffffff) != 0) {
            _free(ppppppplStack_d0);
          }
          uStack_d8 = 6;
          ppppppplStack_c8 = (long *******)0x6;
          ppppppplStack_d0 = ppppppplVar7;
          ppppppplVar7 = (long *******)FUN_1026bb9b0(&ppppppplStack_120,param_2 + 4);
          if (ppppppplVar7 == (long *******)0x0) {
            uStack_98 = uStack_f8;
            lStack_a0 = lStack_100;
            uStack_88 = uStack_e8;
            uStack_90 = uStack_f0;
            uStack_78 = uStack_d8;
            uStack_80 = uStack_e0;
            ppppppplStack_68 = ppppppplStack_c8;
            ppppppplStack_70 = ppppppplStack_d0;
            ppppppplStack_b8 = ppppppplStack_118;
            ppppppplStack_c0 = ppppppplStack_120;
            lStack_a8 = lStack_108;
            ppppppplStack_b0 = ppppppplStack_110;
            __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                      (&ppppppplStack_2c0,&ppppppplStack_c0);
            goto LAB_10269a154;
          }
        }
      }
      ppppppplStack_2c0 = (long *******)0x8000000000000005;
      ppppppplStack_2b8 = ppppppplVar7;
      if (ppppppplStack_120 != (long *******)0x8000000000000000) {
        FUN_1026af7cc(&ppppppplStack_120);
        ppppppplVar7 = ppppppplStack_d0;
        uVar16 = uStack_d8;
        goto joined_r0x00010269a148;
      }
      if (ppppppplStack_118 != (long *******)0x8000000000000005) {
        func_0x0001026a9020(&ppppppplStack_118);
      }
    }
  }
  else {
    pauVar6 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar6[1][0] == '\x01') {
      auVar17 = *pauVar6;
    }
    else {
      auVar17 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar6 + 8) = auVar17._8_8_;
      pauVar6[1][0] = 1;
    }
    *(long *)*pauVar6 = auVar17._0_8_ + 1;
    FUN_105dc99f8(&ppppppplStack_c0,2,auVar17._0_8_,auVar17._8_8_);
    uStack_78 = 0x8000000000000000;
    if (ppppppplStack_c0 == (long *******)0x8000000000000001) {
      ppppppplStack_2c0 = (long *******)0x8000000000000005;
      ppppppplStack_2b8 = ppppppplStack_b8;
      goto LAB_10269a154;
    }
    uStack_1f8 = uStack_88;
    uStack_200 = uStack_90;
    uStack_1e8 = 0x8000000000000000;
    uStack_1f0 = uStack_80;
    ppppppplStack_1d8 = ppppppplStack_68;
    ppppppplStack_1e0 = ppppppplStack_70;
    lStack_218 = lStack_a8;
    ppppppplStack_220 = ppppppplStack_b0;
    uStack_208 = uStack_98;
    lStack_210 = lStack_a0;
    ppppppplStack_230 = ppppppplStack_c0;
    ppppppplStack_228 = ppppppplStack_b8;
    if (ppppppplStack_c0 == (long *******)0x8000000000000000) {
      ppppppplStack_c0 = (long *******)0xa;
      ppppppplVar7 = (long *******)func_0x000108a4a0f8(&ppppppplStack_c0,0,0);
    }
    else {
      ppppppplVar7 = (long *******)_malloc(5);
      if (ppppppplVar7 == (long *******)0x0) {
        func_0x0001087c9084(1,5);
        goto LAB_10269ab78;
      }
      *(undefined1 *)((long)ppppppplVar7 + 4) = 0x72;
      *(undefined4 *)ppppppplVar7 = 0x6f727265;
      if ((uStack_1e8 & 0x7fffffffffffffff) != 0) {
        _free(ppppppplStack_1e0);
      }
      ppppppplStack_1d8 = (long *******)0x5;
      uStack_1e8 = 0x8000000000000000;
      uStack_170 = 5;
      uVar16 = param_2[4];
      ppppplStack_180 = (long *****)0x5;
      uVar1 = 2;
      if (uVar16 != 0x8000000000000005) {
        uVar1 = 3;
      }
      ppppppplStack_1e0 = ppppppplVar7;
      ppppppplStack_178 = ppppppplVar7;
      if (pauVar6[1][0] == '\x01') {
        auVar17 = *pauVar6;
      }
      else {
        auVar17 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar6 + 8) = auVar17._8_8_;
        pauVar6[1][0] = 1;
      }
      *(long *)*pauVar6 = auVar17._0_8_ + 1;
      FUN_105dc99f8(&ppppppplStack_c0,uVar1,auVar17._0_8_,auVar17._8_8_);
      ppppppplVar7 = ppppppplStack_b8;
      uStack_78 = 0x8000000000000000;
      if (ppppppplStack_c0 == (long *******)0x8000000000000001) {
        _free(ppppppplStack_178);
joined_r0x00010269953c:
        if (ppppppplVar7 == (long *******)0x0) {
LAB_102699448:
          ppppppplVar7 = (long *******)
                         func_0x0001026e5220(&ppppppplStack_230,&UNK_108d33ae9,2,param_2 + 0xe);
          if (ppppppplVar7 == (long *******)0x0) {
            uStack_98 = uStack_208;
            lStack_a0 = lStack_210;
            uStack_88 = uStack_1f8;
            uStack_90 = uStack_200;
            uStack_78 = uStack_1e8;
            uStack_80 = uStack_1f0;
            ppppppplStack_68 = ppppppplStack_1d8;
            ppppppplStack_70 = ppppppplStack_1e0;
            ppppppplStack_b8 = ppppppplStack_228;
            ppppppplStack_c0 = ppppppplStack_230;
            lStack_a8 = lStack_218;
            ppppppplStack_b0 = ppppppplStack_220;
            __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                      (&ppppppplStack_2c0,&ppppppplStack_c0);
            goto LAB_10269a154;
          }
        }
      }
      else {
        uStack_e8 = uStack_88;
        uStack_f0 = uStack_90;
        uStack_d8 = 0x8000000000000000;
        uStack_e0 = uStack_80;
        ppppppplStack_c8 = ppppppplStack_68;
        ppppppplStack_d0 = ppppppplStack_70;
        lStack_108 = lStack_a8;
        ppppppplStack_110 = ppppppplStack_b0;
        uStack_f8 = uStack_98;
        lStack_100 = lStack_a0;
        ppppppplStack_120 = ppppppplStack_c0;
        ppppppplStack_118 = ppppppplStack_b8;
        ppppppplVar7 = (long *******)
                       func_0x0001026c1ae8(&ppppppplStack_120,&UNK_108c520a8,4,param_2[0xd]);
        if (ppppppplVar7 == (long *******)0x0) {
          if (uVar16 == 0x8000000000000005) {
LAB_1026994d8:
            if (ppppppplStack_120 != (long *******)0x8000000000000000) {
              func_0x00010266afa8(&ppppppplStack_120,&UNK_108d33233,7,param_2[2],param_2[3]);
              uStack_98 = uStack_f8;
              lStack_a0 = lStack_100;
              uStack_88 = uStack_e8;
              uStack_90 = uStack_f0;
              uStack_78 = uStack_d8;
              uStack_80 = uStack_e0;
              ppppppplStack_68 = ppppppplStack_c8;
              ppppppplStack_70 = ppppppplStack_d0;
              ppppppplStack_b8 = ppppppplStack_118;
              ppppppplStack_c0 = ppppppplStack_120;
              lStack_a8 = lStack_108;
              ppppppplStack_b0 = ppppppplStack_110;
              __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                        (&ppppppplStack_168,&ppppppplStack_c0);
              ppppppplVar7 = ppppppplStack_160;
              if (ppppppplStack_168 == (long *******)0x8000000000000005) {
                _free(ppppppplStack_178);
                goto joined_r0x00010269953c;
              }
              func_0x0001026ea188(&ppppppplStack_c0,&ppppppplStack_230,&ppppplStack_180,
                                  &ppppppplStack_168);
              ppppppplStack_1c8 = ppppppplStack_b0;
              ppppppplStack_1d0 = ppppppplStack_b8;
              lStack_1b8 = lStack_a0;
              lStack_1c0 = lStack_a8;
              uStack_1a8 = uStack_90;
              uStack_1b0 = uStack_98;
              uStack_198 = uStack_80;
              uStack_1a0 = uStack_88;
              uStack_190 = uStack_78;
              if (ppppppplStack_b8 != (long *******)0x8000000000000005) {
                func_0x0001026a9020(&ppppppplStack_1d0);
              }
              goto LAB_102699448;
            }
          }
          else if (ppppppplStack_120 != (long *******)0x8000000000000000) {
            ppppppplVar7 = (long *******)
                           func_0x00010266b2ac(&ppppppplStack_120,&UNK_108c61024,4,param_2 + 4);
            if (ppppppplVar7 != (long *******)0x0) goto LAB_10269a0bc;
            goto LAB_1026994d8;
          }
          ppppppplStack_c0 = (long *******)0xa;
          ppppppplVar7 = (long *******)func_0x000108a4a0f8(&ppppppplStack_c0,0,0);
        }
LAB_10269a0bc:
        if (ppppppplStack_120 == (long *******)0x8000000000000000) {
          if (ppppppplStack_118 != (long *******)0x8000000000000005) {
            func_0x0001026a9020(&ppppppplStack_118);
          }
        }
        else {
          FUN_1026af7cc(&ppppppplStack_120);
          if ((uStack_d8 & 0x7fffffffffffffff) != 0) {
            _free(ppppppplStack_d0);
          }
        }
        _free(ppppppplStack_178);
      }
    }
    ppppppplStack_2c0 = (long *******)0x8000000000000005;
    ppppppplStack_2b8 = ppppppplVar7;
    if (ppppppplStack_230 == (long *******)0x8000000000000000) {
      if (ppppppplStack_228 != (long *******)0x8000000000000005) {
        func_0x0001026a9020(&ppppppplStack_228);
      }
    }
    else {
      FUN_1026af7cc(&ppppppplStack_230);
      ppppppplVar7 = ppppppplStack_1e0;
      uVar16 = uStack_1e8;
joined_r0x00010269a148:
      if ((uVar16 & 0x7fffffffffffffff) != 0) {
        _free(ppppppplVar7);
      }
    }
  }
LAB_10269a154:
  FUN_1026ace6c(param_2);
  if (ppppppplStack_2c0 == (long *******)0x8000000000000005) {
    ppppppplStack_260 = ppppppplStack_2b8;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
        ((bRam000000010b628f38 - 1 < 2 ||
         ((bRam000000010b628f38 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b628f28), cVar4 != '\0')))))) &&
       (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (lRam000000010b628f28), iVar5 != 0)) {
      lStack_a8 = lRam000000010b628f28 + 0x30;
      ppppppplStack_230 = (long *******)&ppppppplStack_260;
      ppppppplStack_228 =
           (long *******)
           __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
      ;
      ppppppplStack_160 = (long *******)&ppppppplStack_230;
      ppppppplStack_168 = (long *******)s_1Failed_to_convert_OutgoingMessa_108aec45f;
      ppppppplStack_1d0 = (long *******)&ppppppplStack_168;
      ppppppplStack_1c8 = (long *******)&UNK_10b280228;
      ppppppplStack_b8 = (long *******)&ppppppplStack_1d0;
      ppppppplStack_c0 = (long *******)0x1;
      ppppppplStack_b0 = (long *******)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (lRam000000010b628f28,&ppppppplStack_c0);
      lVar9 = lRam000000010b628f28;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        ppppppplStack_118 = *(long ********)(lRam000000010b628f28 + 0x20);
        ppppppplStack_110 = *(long ********)(lRam000000010b628f28 + 0x28);
        ppppppplStack_120 = (long *******)0x1;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppppplStack_120);
        if (iVar5 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar9,puVar3,puVar2,&ppppppplStack_120,&ppppppplStack_c0);
        }
      }
    }
    else {
      lVar9 = lRam000000010b628f28;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uStack_270 = *(undefined8 *)(lRam000000010b628f28 + 0x20);
        uStack_268 = *(undefined8 *)(lRam000000010b628f28 + 0x28);
        uStack_278 = 1;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_278);
        if (iVar5 != 0) {
          lStack_108 = lRam000000010b628f28 + 0x30;
          ppppppplStack_1d0 = (long *******)&ppppppplStack_260;
          ppppppplStack_1c8 =
               (long *******)
               __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
          ;
          ppppppplStack_178 = (long *******)&ppppppplStack_1d0;
          ppppplStack_180 = (long *****)s_1Failed_to_convert_OutgoingMessa_108aec45f;
          pppppplStack_240 = &ppppplStack_180;
          puStack_238 = &UNK_10b280228;
          ppppppplStack_118 = &pppppplStack_240;
          ppppppplStack_120 = (long *******)0x1;
          ppppppplStack_110 = (long *******)0x1;
          lStack_a0 = *(long *)(lVar9 + 0x60);
          uStack_98 = *(undefined8 *)(lVar9 + 0x68);
          ppppppplStack_b8 = *(long ********)(lVar9 + 0x50);
          ppppppplStack_b0 = *(long ********)(lVar9 + 0x58);
          ppppppplStack_c0 = (long *******)0x1;
          if (ppppppplStack_b8 == (long *******)0x0) {
            ppppppplStack_c0 = (long *******)0x2;
          }
          uStack_78 = *(ulong *)(lVar9 + 8);
          ppppppplStack_168 = (long *******)&ppppppplStack_120;
          ppppppplStack_160 = (long *******)CONCAT71(ppppppplStack_160._1_7_,1);
          ppppppplStack_230 = (long *******)&ppppppplStack_168;
          ppppppplStack_228 = (long *******)&DAT_1061c2098;
          lStack_a8 = 1;
          if (lStack_a0 == 0) {
            lStack_a8 = 2;
          }
          uStack_88 = uStack_270;
          uStack_90 = uStack_278;
          uStack_80 = uStack_268;
          ppppppplStack_68 = (long *******)&ppppppplStack_230;
          ppppppplStack_70 = (long *******)s__108b39f4f;
          (**(code **)(puVar2 + 0x20))(puVar3,&ppppppplStack_c0);
        }
      }
    }
    ppppppplVar7 = ppppppplStack_260;
    *param_1 = -0x8000000000000000;
    if (*ppppppplStack_260 == (long ******)0x1) {
      pppppplVar11 = ppppppplStack_260[1];
      if (((ulong)pppppplVar11 & 3) != 1) goto LAB_10269a478;
      pppppplVar10 = (long ******)((long)pppppplVar11 + -1);
      ppppplVar13 = *pppppplVar10;
      puVar15 = *(undefined8 **)((long)pppppplVar11 + 7);
      pcVar8 = (code *)*puVar15;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(ppppplVar13);
      }
      if (puVar15[1] != 0) {
        _free(ppppplVar13);
      }
    }
    else {
      if ((*ppppppplStack_260 != (long ******)0x0) || (ppppppplStack_260[2] == (long ******)0x0))
      goto LAB_10269a478;
      pppppplVar10 = ppppppplStack_260[1];
    }
    _free(pppppplVar10);
LAB_10269a478:
    _free(ppppppplVar7);
    return;
  }
  uStack_f8 = uStack_298;
  lStack_100 = lStack_2a0;
  uStack_e8 = uStack_288;
  uStack_f0 = uStack_290;
  uStack_e0 = uStack_280;
  ppppppplStack_118 = ppppppplStack_2b8;
  ppppppplStack_120 = ppppppplStack_2c0;
  lStack_108 = lStack_2a8;
  ppppppplStack_110 = ppppppplStack_2b0;
  pppppplVar11 = (long ******)_malloc(0x80);
  if (pppppplVar11 == (long ******)0x0) {
    func_0x0001087c9084(1,0x80);
LAB_10269ab78:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10269ab7c);
    (*pcVar8)();
  }
  ppppppplStack_c0 = (long *******)0x80;
  ppppppplStack_b0 = (long *******)0x0;
  ppppppplStack_230 = (long *******)&ppppppplStack_c0;
  ppppppplStack_b8 = (long *******)pppppplVar11;
  func_0x000102671a98(&ppppppplStack_120,&ppppppplStack_230);
  if (ppppppplStack_c0 != (long *******)0x8000000000000000) {
    *param_1 = (long)ppppppplStack_c0;
    param_1[1] = (long)ppppppplStack_b8;
    param_1[2] = (long)ppppppplStack_b0;
    goto LAB_10269a61c;
  }
  ppppppplStack_260 = ppppppplStack_b8;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
     (((bRam000000010b628f50 - 1 < 2 ||
       ((bRam000000010b628f50 != 0 &&
        (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b628f40), cVar4 != '\0')))) &&
      (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(lRam000000010b628f40)
      , iVar5 != 0)))) {
    lStack_a8 = lRam000000010b628f40 + 0x30;
    ppppppplStack_168 = (long *******)&ppppppplStack_260;
    ppppppplStack_160 =
         (long *******)
         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
    ;
    ppppppplStack_1c8 = (long *******)&ppppppplStack_168;
    ppppppplStack_1d0 = (long *******)s__Failed_to_serialize_JSONRPCMess_108aec438;
    ppppppplStack_2c0 = (long *******)&ppppppplStack_1d0;
    ppppppplStack_2b8 = (long *******)&UNK_10b280228;
    ppppppplStack_c0 = (long *******)0x1;
    ppppppplStack_b0 = (long *******)0x1;
    ppppppplStack_b8 = (long *******)&ppppppplStack_2c0;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (lRam000000010b628f40,&ppppppplStack_c0);
    lVar9 = lRam000000010b628f40;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      ppppppplStack_228 = *(long ********)(lRam000000010b628f40 + 0x20);
      ppppppplStack_220 = *(long ********)(lRam000000010b628f40 + 0x28);
      ppppppplStack_230 = (long *******)0x1;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppppplStack_230);
      if (iVar5 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar9,puVar3,puVar2,&ppppppplStack_230,&ppppppplStack_c0);
      }
    }
  }
  else {
    lVar9 = lRam000000010b628f40;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      uStack_250 = *(undefined8 *)(lRam000000010b628f40 + 0x20);
      uStack_248 = *(undefined8 *)(lRam000000010b628f40 + 0x28);
      uStack_258 = 1;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_258);
      if (iVar5 != 0) {
        lStack_218 = lRam000000010b628f40 + 0x30;
        ppppppplStack_2c0 = (long *******)&ppppppplStack_260;
        ppppppplStack_2b8 =
             (long *******)
             __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
        ;
        ppppplStack_180 = (long *****)s__Failed_to_serialize_JSONRPCMess_108aec438;
        pppppplStack_240 = &ppppplStack_180;
        puStack_238 = &UNK_10b280228;
        ppppppplStack_228 = &pppppplStack_240;
        ppppppplStack_230 = (long *******)0x1;
        ppppppplStack_220 = (long *******)0x1;
        lStack_a0 = *(long *)(lVar9 + 0x60);
        uStack_98 = *(undefined8 *)(lVar9 + 0x68);
        ppppppplStack_b8 = *(long ********)(lVar9 + 0x50);
        ppppppplStack_b0 = *(long ********)(lVar9 + 0x58);
        ppppppplStack_c0 = (long *******)0x1;
        if (ppppppplStack_b8 == (long *******)0x0) {
          ppppppplStack_c0 = (long *******)0x2;
        }
        uStack_78 = *(ulong *)(lVar9 + 8);
        ppppppplStack_1d0 = (long *******)&ppppppplStack_230;
        ppppppplStack_1c8 = (long *******)CONCAT71(ppppppplStack_1c8._1_7_,1);
        ppppppplStack_168 = (long *******)&ppppppplStack_1d0;
        ppppppplStack_160 = (long *******)&DAT_1061c2098;
        lStack_a8 = 1;
        if (lStack_a0 == 0) {
          lStack_a8 = 2;
        }
        uStack_88 = uStack_250;
        uStack_90 = uStack_258;
        uStack_80 = uStack_248;
        ppppppplStack_68 = (long *******)&ppppppplStack_168;
        ppppppplStack_70 = (long *******)s__108b39f4f;
        ppppppplStack_178 = (long *******)&ppppppplStack_2c0;
        (**(code **)(puVar2 + 0x20))(puVar3,&ppppppplStack_c0);
      }
    }
  }
  ppppppplVar7 = ppppppplStack_260;
  *param_1 = -0x8000000000000000;
  if (*ppppppplStack_260 == (long ******)0x1) {
    ppppplVar13 = (long *****)ppppppplStack_260[1];
    if (((ulong)ppppplVar13 & 3) == 1) {
      ppppplVar12 = (long *****)((long)ppppplVar13 - 1);
      pppplVar14 = *ppppplVar12;
      puVar15 = *(undefined8 **)((long)ppppplVar13 + 7);
      pcVar8 = (code *)*puVar15;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(pppplVar14);
      }
      if (puVar15[1] != 0) {
        _free(pppplVar14);
      }
      goto LAB_10269a5f8;
    }
  }
  else if ((*ppppppplStack_260 == (long ******)0x0) && (ppppppplStack_260[2] != (long ******)0x0)) {
    ppppplVar12 = (long *****)ppppppplStack_260[1];
LAB_10269a5f8:
    _free(ppppplVar12);
  }
  _free(ppppppplVar7);
LAB_10269a61c:
  func_0x0001026a9020(&ppppppplStack_120);
  return;
}

