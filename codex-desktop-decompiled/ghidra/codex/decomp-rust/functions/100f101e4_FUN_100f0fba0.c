
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0fba0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong ***pppuVar3;
  ulong ****ppppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  int iVar12;
  ulong *****pppppuVar13;
  ulong ****ppppuVar14;
  undefined1 (*pauVar15) [16];
  undefined8 uVar16;
  long unaff_x19;
  ulong ****ppppuVar17;
  long *unaff_x23;
  ulong *****unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x27;
  ulong *****pppppuVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  long lStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  long lStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined4 uStack_e08;
  undefined4 uStack_e04;
  char *pcStack_e00;
  undefined8 **ppuStack_df8;
  undefined8 uStack_df0;
  undefined1 uStack_de8;
  undefined8 *puStack_de0;
  undefined *puStack_dd8;
  ulong ****ppppuStack_d60;
  ulong ***pppuStack_d58;
  ulong ****ppppuStack_d50;
  ulong ***pppuStack_d48;
  ulong ****ppppuStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  ulong ****ppppuStack_968;
  ulong ***pppuStack_960;
  ulong ****ppppuStack_958;
  ulong ***pppuStack_950;
  ulong ****ppppuStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_638;
  undefined4 uStack_630;
  long *plStack_570;
  ulong ****ppppuStack_568;
  undefined *puStack_560;
  undefined1 auStack_558 [728];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong ****ppppuStack_250;
  ulong ***pppuStack_248;
  ulong ****ppppuStack_240;
  ulong ***pppuStack_238;
  ulong ****ppppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  undefined8 uStack_180;
  ulong ***pppuStack_170;
  ulong ****ppppuStack_168;
  ulong ***pppuStack_160;
  ulong ****ppppuStack_158;
  ulong ***pppuStack_150;
  ulong **ppuStack_148;
  ulong **ppuStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  ulong **ppuStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  ulong **ppuStack_f0;
  ulong **ppuStack_e8;
  ulong **ppuStack_e0;
  ulong **ppuStack_d8;
  ulong **ppuStack_d0;
  ulong **ppuStack_c8;
  ulong **ppuStack_c0;
  ulong **ppuStack_b8;
  ulong **ppuStack_b0;
  ulong **ppuStack_a8;
  ulong **ppuStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  if (*(char *)(param_2 + 2) != '\0') {
    if (*(char *)(param_2 + 2) == '\x01') {
      func_0x000108a07af4(&UNK_10b237138);
    }
    uVar16 = func_0x000108a07b10();
    ppppuVar17 = (ulong ****)*ppppuStack_568;
    *ppppuStack_568 = (ulong ***)((long)ppppuVar17 + -1);
    LORelease();
    if (ppppuVar17 == (ulong ****)0x1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E(&ppppuStack_568);
    }
    FUN_100e28a08(&ppppuStack_968);
    if ((ulong *****)ppppuStack_d60 != (ulong *****)0x8000000000000000) {
      FUN_100e1dd44(&ppppuStack_d60);
    }
    lVar11 = *plStack_570;
    *plStack_570 = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4(&plStack_570);
    }
    if (unaff_x27 != 0) {
      _free();
    }
    *(undefined1 *)(unaff_x19 + 0x10) = 2;
    __Unwind_Resume(uVar16);
    uVar16 = func_0x000108a07bc4();
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN4rmcp9transport4auth20AuthorizationManager43discover_oauth_server_via_resource_metadata28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb4d765c70e9611f2E
               ,uVar16);
    lVar11 = 
    ___ZN4rmcp9transport4auth20AuthorizationManager43discover_oauth_server_via_resource_metadata28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb4d765c70e9611f2E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_e60 = *(undefined8 *)
                    (
                    ___ZN4rmcp9transport4auth20AuthorizationManager43discover_oauth_server_via_resource_metadata28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb4d765c70e9611f2E
                    + 0x20);
      uStack_e58 = *(undefined8 *)
                    (
                    ___ZN4rmcp9transport4auth20AuthorizationManager43discover_oauth_server_via_resource_metadata28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb4d765c70e9611f2E
                    + 0x28);
      uStack_e68 = 4;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar12 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_e68);
      if (iVar12 != 0) {
        lStack_e30 = *(long *)(lVar11 + 0x60);
        uStack_e28 = *(undefined8 *)(lVar11 + 0x68);
        lStack_e48 = *(long *)(lVar11 + 0x50);
        uStack_e40 = *(undefined8 *)(lVar11 + 0x58);
        uStack_e50 = 1;
        if (lStack_e48 == 0) {
          uStack_e50 = 2;
        }
        uStack_e08 = *(undefined4 *)(lVar11 + 8);
        uStack_e04 = *(undefined4 *)(lVar11 + 0xc);
        uStack_de8 = 1;
        puStack_de0 = &uStack_df0;
        puStack_dd8 = &DAT_1061c2098;
        uStack_e38 = 1;
        if (lStack_e30 == 0) {
          uStack_e38 = 2;
        }
        uStack_e18 = uStack_e60;
        uStack_e20 = uStack_e68;
        uStack_e10 = uStack_e58;
        ppuStack_df8 = &puStack_de0;
        pcStack_e00 = s__108b39f4f;
        uStack_df0 = uVar16;
        (**(code **)(puVar1 + 0x20))(puVar2,&uStack_e50);
      }
    }
    return;
  }
  ppuStack_140 = (ulong **)0x0;
  pppuStack_160 = (ulong ***)0x0;
  pppuStack_150 = (ulong ***)0x0;
  __ZN3url12ParseOptions5parse17h966f9c9374804e81E
            (&ppppuStack_d60,&pppuStack_160,*param_2,param_2[1]);
  uVar9 = uStack_d10;
  uVar8 = uStack_d18;
  uVar7 = uStack_d20;
  uVar6 = uStack_d28;
  uVar5 = uStack_d30;
  uVar16 = uStack_d38;
  ppppuVar4 = ppppuStack_d40;
  pppuVar3 = pppuStack_d48;
  pppppuVar13 = (ulong *****)ppppuStack_d50;
  ppppuVar17 = (ulong ****)pppuStack_d58;
  pppppuVar18 = (ulong *****)ppppuStack_d60;
  if ((ulong *****)ppppuStack_d60 == (ulong *****)0x8000000000000000) {
    pppuStack_160 = (ulong ***)((ulong)pppuStack_160 & 0xffffffffffff0000);
    pppppuVar13 = (ulong *****)FUN_105c54208(&pppuStack_160,(ulong)pppuStack_d58 & 0xff);
  }
  else {
    uStack_930 = uStack_d28;
    uStack_938 = uStack_d30;
    uStack_920 = uStack_d18;
    uStack_928 = uStack_d20;
    uStack_918 = uStack_d10;
    pppuStack_950 = pppuStack_d48;
    ppppuStack_958 = ppppuStack_d50;
    uStack_940 = uStack_d38;
    ppppuStack_948 = ppppuStack_d40;
    ppppuStack_968 = ppppuStack_d60;
    pppuStack_960 = pppuStack_d58;
    uStack_928._0_1_ = (char)uStack_d20;
    uStack_928 = uVar7;
    if ((char)uStack_928 != '\0') {
      __ZN7reqwest10async_impl6client13ClientBuilder3new17h08a006e79f8bdad0E(&ppppuStack_968);
      uStack_638 = 0x1e;
      uStack_630 = 0;
      _memcpy(&ppppuStack_d60,&ppppuStack_968,0x3f8);
      auVar19 = __ZN7reqwest10async_impl6client13ClientBuilder5build17h1f65e63a2466ddeeE
                          (&ppppuStack_d60);
      unaff_x23 = auVar19._8_8_;
      if ((auVar19._0_8_ & 1) == 0) {
        ppppuStack_d60 = (ulong ****)0x8000000000000000;
        ppppuStack_968 = (ulong ****)0x8000000000000000;
        ppuStack_148 = (ulong **)0x0;
        pppuStack_150 = (ulong ***)0x0;
        uStack_138 = 0;
        ppuStack_140 = (ulong **)0x0;
        ppuStack_130 = (ulong **)0x3ffffffe;
        ppppuStack_158 = (ulong ****)0x1;
        pppuStack_160 = (ulong ***)0x1;
        uStack_128 = 0x1fffffff;
        uStack_120 = 3;
        uStack_11c = 0;
        plStack_570 = unaff_x23;
        ppppuVar14 = (ulong ****)_malloc(200);
        if (ppppuVar14 == (ulong ****)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,200);
        }
        else {
          ppppuVar14[0x15] = (ulong ***)ppuStack_b8;
          ppppuVar14[0x14] = (ulong ***)ppuStack_c0;
          ppppuVar14[0x17] = (ulong ***)ppuStack_a8;
          ppppuVar14[0x16] = (ulong ***)ppuStack_b0;
          ppppuVar14[0x18] = (ulong ***)ppuStack_a0;
          ppppuVar14[0xd] = (ulong ***)auStack_100._8_8_;
          ppppuVar14[0xc] = (ulong ***)auStack_100._0_8_;
          ppppuVar14[0xf] = (ulong ***)ppuStack_e8;
          ppppuVar14[0xe] = (ulong ***)ppuStack_f0;
          ppppuVar14[0x11] = (ulong ***)ppuStack_d8;
          ppppuVar14[0x10] = (ulong ***)ppuStack_e0;
          ppppuVar14[0x13] = (ulong ***)ppuStack_c8;
          ppppuVar14[0x12] = (ulong ***)ppuStack_d0;
          ppppuVar14[5] = (ulong ***)CONCAT71(uStack_137,uStack_138);
          ppppuVar14[4] = (ulong ***)ppuStack_140;
          ppppuVar14[7] = (ulong ***)CONCAT44(uStack_124,uStack_128);
          ppppuVar14[6] = (ulong ***)ppuStack_130;
          ppppuVar14[9] = (ulong ***)CONCAT44(uStack_114,uStack_118);
          ppppuVar14[8] = (ulong ***)CONCAT44(uStack_11c,uStack_120);
          ppppuVar14[0xb] = (ulong ***)CONCAT44(uStack_104,uStack_108);
          ppppuVar14[10] = (ulong ***)CONCAT44(uStack_10c,uStack_110);
          ppppuVar14[1] = (ulong ***)ppppuStack_158;
          *ppppuVar14 = pppuStack_160;
          ppppuVar14[3] = (ulong ***)ppuStack_148;
          ppppuVar14[2] = pppuStack_150;
          ppppuStack_158 = (ulong ****)0x1;
          pppuStack_160 = (ulong ***)0x1;
          pppuStack_150 = (ulong ***)ppppuVar14;
          unaff_x24 = (ulong *****)_malloc(0x18);
          if (unaff_x24 == (ulong *****)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          }
          else {
            unaff_x24[1] = ppppuStack_158;
            *unaff_x24 = (ulong ****)pppuStack_160;
            unaff_x24[2] = (ulong ****)pppuStack_150;
            puStack_560 = &UNK_10b2370d8;
            ppppuStack_568 = (ulong ****)unaff_x24;
            pauVar15 = (undefined1 (*) [16])
                       (*
                       ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                       )();
            if (pauVar15[1][0] == '\x01') {
              auStack_100 = *pauVar15;
            }
            else {
              auStack_100 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar15 + 8) = auStack_100._8_8_;
              pauVar15[1][0] = 1;
            }
            uStack_8c = 0;
            uStack_88 = 0;
            uStack_94 = 0x9b8b338;
            uStack_90 = 1;
            *(long *)*pauVar15 = auStack_100._0_8_ + 1;
            ppuStack_148 = (ulong **)0x0;
            pppuStack_150 = (ulong ***)0x0;
            uStack_138 = 0;
            ppuStack_140 = (ulong **)0x0;
            uStack_7c = 0;
            uStack_78 = 0;
            uStack_84 = 0;
            uStack_80 = 0;
            ppuStack_130 = (ulong **)0x3ffffffe;
            ppppuStack_158 = (ulong ****)0x1;
            pppuStack_160 = (ulong ***)0x1;
            uStack_11c = 1;
            uStack_118 = 0;
            uStack_124 = uStack_98;
            uStack_120 = 0x9b8b338;
            uStack_10c = 0;
            uStack_108 = 0;
            uStack_114 = 0;
            uStack_110 = 0;
            uStack_128 = 0x1fffffff;
            uStack_104 = 0;
            ppppuVar14 = (ulong ****)_malloc(0x70);
            if (ppppuVar14 == (ulong ****)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x70);
            }
            else {
              ppppuVar14[9] = (ulong ***)CONCAT44(uStack_114,uStack_118);
              ppppuVar14[8] = (ulong ***)CONCAT44(uStack_11c,uStack_120);
              ppppuVar14[0xb] = (ulong ***)CONCAT44(uStack_104,uStack_108);
              ppppuVar14[10] = (ulong ***)CONCAT44(uStack_10c,uStack_110);
              *(undefined1 (*) [16])(ppppuVar14 + 0xc) = auStack_100;
              ppppuVar14[1] = (ulong ***)ppppuStack_158;
              *ppppuVar14 = pppuStack_160;
              ppppuVar14[3] = (ulong ***)ppuStack_148;
              ppppuVar14[2] = pppuStack_150;
              ppppuVar14[5] = (ulong ***)CONCAT71(uStack_137,uStack_138);
              ppppuVar14[4] = (ulong ***)ppuStack_140;
              ppppuVar14[7] = (ulong ***)CONCAT44(uStack_124,uStack_128);
              ppppuVar14[6] = (ulong ***)ppuStack_130;
              ppppuStack_158 = (ulong ****)0x1;
              pppuStack_160 = (ulong ***)0x1;
              pppuStack_150 = (ulong ***)ppppuVar14;
              unaff_x25 = (undefined8 *)_malloc(0x18);
              if (unaff_x25 != (undefined8 *)0x0) {
                unaff_x25[1] = ppppuStack_158;
                *unaff_x25 = pppuStack_160;
                unaff_x25[2] = pppuStack_150;
                ppppuStack_168 = ppppuVar4;
                pppuStack_170 = pppuVar3;
                uStack_278 = uVar5;
                uStack_280 = uVar16;
                uStack_268 = uVar7;
                uStack_270 = uVar6;
                uStack_258 = uVar9;
                uStack_260 = uVar8;
                pppuStack_248 = pppuStack_d58;
                ppppuStack_250 = ppppuStack_d60;
                uStack_208 = uStack_d18;
                uStack_210 = uStack_d20;
                uStack_218 = uStack_d28;
                uStack_220 = uStack_d30;
                pppuStack_238 = pppuStack_d48;
                ppppuStack_240 = ppppuStack_d50;
                uStack_228 = uStack_d38;
                ppppuStack_230 = ppppuStack_d40;
                uStack_1c8 = uStack_cd8;
                uStack_1d0 = uStack_ce0;
                uStack_1d8 = uStack_ce8;
                uStack_1e0 = uStack_cf0;
                uStack_1f8 = uStack_d08;
                uStack_200 = uStack_d10;
                uStack_1e8 = uStack_cf8;
                uStack_1f0 = uStack_d00;
                uStack_180 = uStack_c90;
                uStack_188 = uStack_c98;
                uStack_190 = uStack_ca0;
                uStack_198 = uStack_ca8;
                uStack_1a0 = uStack_cb0;
                uStack_1b8 = uStack_cc8;
                uStack_1c0 = uStack_cd0;
                uStack_1a8 = uStack_cb8;
                uStack_1b0 = uStack_cc0;
                _memcpy(auStack_558,&ppppuStack_968,0x2d8);
                goto LAB_100f0fd30;
              }
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            }
          }
        }
LAB_100f1006c:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100f10070);
        (*pcVar10)();
      }
      uStack_98 = auVar19._8_4_;
      uStack_94 = auVar19._12_4_;
      unaff_x24 = &ppppuStack_d60;
      ppppuStack_d60 = (ulong ****)0x0;
      pppuStack_d58 = (ulong ***)0x1;
      ppppuStack_d50 = (ulong ****)0x0;
      ppppuStack_958 = (ulong ****)0x60000020;
      pppuStack_960 = (ulong ***)&UNK_10b209290;
      ppppuStack_968 = (ulong ****)unaff_x24;
      iVar12 = __ZN60__LT_reqwest__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h1453dc0f9d6c5a37E
                         (&uStack_98,&ppppuStack_968);
      pppppuVar13 = (ulong *****)ppppuStack_d60;
      if (iVar12 != 0) {
        func_0x000108a07a3c(&UNK_108cc3daa,0x37,&pppuStack_160,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_100f1006c;
      }
      ppppuStack_158 = ppppuStack_d50;
      pppuStack_160 = pppuStack_d58;
      FUN_100de20f8(unaff_x23);
      _free(unaff_x23);
      ppppuStack_168 = ppppuStack_158;
      pppuStack_170 = pppuStack_160;
      if (pppppuVar18 != (ulong *****)0x0) {
        _free(ppppuVar17);
      }
      pppppuVar18 = (ulong *****)0x8000000000000000;
      ppppuVar17 = (ulong ****)0x9;
      goto LAB_100f0fd30;
    }
    pppppuVar13 = (ulong *****)FUN_105c53b64(&ppppuStack_968);
  }
  pppppuVar18 = (ulong *****)0x8000000000000000;
  ppppuVar17 = (ulong ****)0x4;
LAB_100f0fd30:
  *param_1 = pppppuVar18;
  param_1[1] = ppppuVar17;
  param_1[2] = pppppuVar13;
  param_1[4] = ppppuStack_168;
  param_1[3] = pppuStack_170;
  _memcpy(param_1 + 5,&uStack_280,0x108);
  _memcpy(param_1 + 0x26,auStack_558,0x2d8);
  param_1[0x81] = unaff_x23;
  param_1[0x82] = unaff_x24;
  param_1[0x83] = &UNK_10b2370d8;
  param_1[0x84] = unaff_x25;
  param_1[0x85] = &UNK_10b237108;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}

