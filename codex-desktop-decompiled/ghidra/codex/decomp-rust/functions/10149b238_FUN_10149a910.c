
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10149a910(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ushort uVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined2 uVar8;
  char *****pppppcVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  long lVar17;
  char *pcVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  char *****pppppcStack_278;
  byte bStack_270;
  undefined7 uStack_26f;
  long *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined2 uStack_23a;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  char *****pppppcStack_220;
  char *****pppppcStack_218;
  char ****ppppcStack_210;
  short sStack_208;
  undefined4 uStack_206;
  undefined2 uStack_202;
  undefined4 uStack_1f8;
  undefined2 uStack_1f4;
  char *****pppppcStack_1f0;
  char *****pppppcStack_1e8;
  char ****ppppcStack_1e0;
  undefined8 uStack_1d8;
  byte bStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined *puStack_1b8;
  char *****pppppcStack_1b0;
  char *****pppppcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  char *****pppppcStack_160;
  char *****pppppcStack_158;
  char ****ppppcStack_150;
  undefined8 uStack_148;
  char *****pppppcStack_140;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  byte bStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  char *****pppppcStack_108;
  byte *pbStack_100;
  char *****pppppcStack_f8;
  undefined *puStack_f0;
  char ***pppcStack_e8;
  char *****pppppcStack_e0;
  char *****pppppcStack_d8;
  byte bStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined6 uStack_be;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  char *****pppppcStack_78;
  
  pppppcStack_278 = (char *****)(param_2 + 0x78);
  __ZN8rama_net4http15request_context31protocol_from_uri_or_extensions17h2b059fc9daf76c66E
            (&bStack_270,param_2 + 0x60);
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bRam000000010b639350 - 1 < 2 ||
       ((bRam000000010b639350 != 0 &&
        (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hf34d68e5d9697aafE
                            ), cVar10 != '\0')))) &&
      (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hf34d68e5d9697aafE
                          ), iVar11 != 0)))) {
    uStack_148 = (undefined *)
                 (
                 ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hf34d68e5d9697aafE
                 + 0x30);
    pppppcStack_220 = (char *****)(char ******)0x0;
    if (*(char *)pppppcStack_278 != '\0') {
      pppppcStack_220 = pppppcStack_278;
    }
    bStack_d0 = (byte)&bStack_270;
    uStack_cf = (undefined7)((ulong)&bStack_270 >> 8);
    uStack_c8 = 0x84;
    uStack_c7 = 0x105ae87;
    uStack_c0 = SUB81(&pppppcStack_220,0);
    uStack_bf = (undefined1)((ulong)&pppppcStack_220 >> 8);
    uStack_be = (undefined6)((ulong)&pppppcStack_220 >> 0x10);
    uStack_b8 = &DAT_1011413a8;
    bStack_1d0 = 0xf3;
    uStack_1cf = 0x108ad84;
    uStack_1c8 = SUB81(&bStack_d0,0);
    uStack_1c7 = (undefined7)((ulong)&bStack_d0 >> 8);
    pppppcStack_1f0 = (char *****)&pppppcStack_278;
    pppppcStack_108 = (char *****)&bStack_1d0;
    pbStack_100 = &UNK_10b208fd0;
    pppppcStack_f8 = (char *****)&pppppcStack_1f0;
    puStack_f0 = &UNK_10b21efe8;
    pppppcStack_158 = (char *****)&pppppcStack_108;
    pppppcStack_160 = (char *****)0x1;
    ppppcStack_150 = (char ****)0x2;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hf34d68e5d9697aafE
               ,&pppppcStack_160);
    lVar12 = 
    ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hf34d68e5d9697aafE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppppcStack_1a8 =
           *(char ******)
            (
            ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hf34d68e5d9697aafE
            + 0x20);
      uStack_1a0 = *(undefined8 *)
                    (
                    ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hf34d68e5d9697aafE
                    + 0x28);
      pppppcStack_1b0 = (char *****)0x5;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppcStack_1b0);
      if (iVar11 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar12,puVar3,puVar2,&pppppcStack_1b0,&pppppcStack_160);
      }
    }
  }
  else {
    lVar12 = 
    ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hf34d68e5d9697aafE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_250 = *(undefined8 *)
                    (
                    ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hf34d68e5d9697aafE
                    + 0x20);
      uStack_248 = *(undefined8 *)
                    (
                    ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hf34d68e5d9697aafE
                    + 0x28);
      uStack_258 = 5;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_258);
      if (iVar11 != 0) {
        uStack_198 = (undefined *)
                     (
                     ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hf34d68e5d9697aafE
                     + 0x30);
        pppppcStack_140 = (char *****)(char ******)0x0;
        if (*(char *)pppppcStack_278 != '\0') {
          pppppcStack_140 = pppppcStack_278;
        }
        pppppcStack_108 = (char *****)&bStack_270;
        pbStack_100 = &
                      __ZN64__LT_rama_net__proto__Protocol_u20_as_u20_core__fmt__Display_GT_3fmt17h2855e650994c993dE
        ;
        pppppcStack_f8 = (char *****)&pppppcStack_140;
        puStack_f0 = &DAT_1011413a8;
        pppppcStack_218 = (char *****)&pppppcStack_108;
        pppppcStack_220 = (char *****)s__request_context__detected_proto_108ad84f3;
        bStack_120 = (byte)&pppppcStack_278;
        uStack_11f = (undefined7)((ulong)&pppppcStack_278 >> 8);
        pppppcStack_160 = (char *****)&pppppcStack_220;
        pppppcStack_158 = (char *****)&UNK_10b208fd0;
        ppppcStack_150 = (char ****)&bStack_120;
        uStack_148 = &UNK_10b21efe8;
        pppppcStack_1a8 = (char *****)&pppppcStack_160;
        pppppcStack_1b0 = (char *****)0x1;
        uStack_1a0 = 2;
        uStack_98 = uStack_250;
        uStack_a0 = uStack_258;
        uStack_90 = uStack_248;
        lStack_b0 = *(long *)(lVar12 + 0x60);
        uStack_a8 = *(undefined8 *)(lVar12 + 0x68);
        lVar17 = *(long *)(lVar12 + 0x50);
        uVar16 = *(undefined8 *)(lVar12 + 0x58);
        bStack_d0 = 1;
        if (lVar17 == 0) {
          bStack_d0 = 2;
        }
        uStack_88 = *(undefined4 *)(lVar12 + 8);
        uStack_84 = *(undefined4 *)(lVar12 + 0xc);
        pppppcStack_1f0 = (char *****)&pppppcStack_1b0;
        pppppcStack_1e8 = (char *****)CONCAT71(pppppcStack_1e8._1_7_,1);
        bStack_1d0 = (byte)&pppppcStack_1f0;
        uStack_1cf = (undefined7)((ulong)&pppppcStack_1f0 >> 8);
        uStack_1c8 = 0x98;
        uStack_1c7 = 0x1061c20;
        uStack_b8 = (undefined *)0x1;
        if (lStack_b0 == 0) {
          uStack_b8 = (undefined *)0x2;
        }
        pppppcStack_78 = (char *****)&bStack_1d0;
        pcStack_80 = s__108b39f4f;
        uStack_cf = 0;
        uStack_c8 = (undefined1)lVar17;
        uStack_c7 = (undefined7)((ulong)lVar17 >> 8);
        uStack_c0 = (undefined1)uVar16;
        uStack_bf = (undefined1)((ulong)uVar16 >> 8);
        uStack_be = (undefined6)((ulong)uVar16 >> 0x10);
        (**(code **)(puVar2 + 0x20))(puVar3,&bStack_d0);
      }
    }
  }
  if (((char *****)pppppcStack_278[4] == (char *****)0x0) ||
     (func_0x0001057974a4(&bStack_d0,pppppcStack_278 + 2), CONCAT71(uStack_cf,bStack_d0) == 0)) {
    bVar7 = bStack_270 - 0x1a;
    if (bStack_270 < 0x1a) {
      bVar7 = 6;
    }
    uStack_23a = *(undefined2 *)(&UNK_108cdb600 + (ulong)bVar7 * 2);
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) goto LAB_10149ac9c;
LAB_10149ade4:
    lVar12 = 
    ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h3bc4ce81c5a0a348E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_230 = *(undefined8 *)
                    (
                    ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h3bc4ce81c5a0a348E
                    + 0x20);
      uStack_228 = *(undefined8 *)
                    (
                    ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h3bc4ce81c5a0a348E
                    + 0x28);
      uStack_238 = 5;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_238);
      if (iVar11 != 0) {
        uStack_148 = (undefined *)
                     (
                     ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h3bc4ce81c5a0a348E
                     + 0x30);
        pppppcStack_1f0 = (char *****)&uStack_23a;
        pppppcStack_1e8 =
             (char *****)
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
        ;
        pppppcStack_218 = (char *****)&pppppcStack_1f0;
        pppppcStack_220 = (char *****)s__request_context__detected_defau_108ad8526;
        bStack_120 = (byte)&pppppcStack_278;
        uStack_11f = (undefined7)((ulong)&pppppcStack_278 >> 8);
        pppppcStack_108 = (char *****)&pppppcStack_220;
        pbStack_100 = &UNK_10b208fd0;
        pppppcStack_f8 = (char *****)&bStack_120;
        puStack_f0 = &UNK_10b21efe8;
        pppppcStack_158 = (char *****)&pppppcStack_108;
        pppppcStack_160 = (char *****)0x1;
        ppppcStack_150 = (char ****)0x2;
        uStack_98 = uStack_230;
        uStack_a0 = uStack_238;
        uStack_90 = uStack_228;
        lStack_b0 = *(long *)(lVar12 + 0x60);
        uStack_a8 = *(undefined8 *)(lVar12 + 0x68);
        lVar17 = *(long *)(lVar12 + 0x50);
        uVar16 = *(undefined8 *)(lVar12 + 0x58);
        bStack_d0 = 1;
        if (lVar17 == 0) {
          bStack_d0 = 2;
        }
        uStack_88 = *(undefined4 *)(lVar12 + 8);
        uStack_84 = *(undefined4 *)(lVar12 + 0xc);
        bStack_1d0 = (byte)&pppppcStack_160;
        uStack_1cf = (undefined7)((ulong)&pppppcStack_160 >> 8);
        uStack_1c8 = 1;
        pppppcStack_1b0 = (char *****)&bStack_1d0;
        pppppcStack_1a8 = (char *****)&DAT_1061c2098;
        uStack_b8 = (undefined *)0x1;
        if (lStack_b0 == 0) {
          uStack_b8 = (undefined *)0x2;
        }
        pppppcStack_78 = (char *****)&pppppcStack_1b0;
        pcStack_80 = s__108b39f4f;
        uStack_cf = 0;
        uStack_c8 = (undefined1)lVar17;
        uStack_c7 = (undefined7)((ulong)lVar17 >> 8);
        uStack_c0 = (undefined1)uVar16;
        uStack_bf = (undefined1)((ulong)uVar16 >> 8);
        uStack_be = (undefined6)((ulong)uVar16 >> 0x10);
        (**(code **)(puVar2 + 0x20))(puVar3,&bStack_d0);
      }
    }
  }
  else {
    uStack_23a = CONCAT11(uStack_bf,uStack_c0);
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E != 0) goto LAB_10149ade4;
LAB_10149ac9c:
    if (((1 < bRam000000010b639308 - 1) &&
        ((bRam000000010b639308 == 0 ||
         (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h3bc4ce81c5a0a348E
                             ), cVar10 == '\0')))) ||
       (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h3bc4ce81c5a0a348E
                           ), iVar11 == 0)) goto LAB_10149ade4;
    puStack_f0 = (undefined *)
                 (
                 ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h3bc4ce81c5a0a348E
                 + 0x30);
    pppppcStack_1b0 = (char *****)&uStack_23a;
    pppppcStack_1a8 =
         (char *****)
         &
         __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
    ;
    bStack_1d0 = 0x26;
    uStack_1cf = 0x108ad85;
    uStack_1c8 = SUB81(&pppppcStack_1b0,0);
    uStack_1c7 = (undefined7)((ulong)&pppppcStack_1b0 >> 8);
    pppppcStack_1f0 = (char *****)&pppppcStack_278;
    bStack_d0 = (byte)&bStack_1d0;
    uStack_cf = (undefined7)((ulong)&bStack_1d0 >> 8);
    uStack_c8 = 0xd0;
    uStack_c7 = 0x10b208f;
    uStack_c0 = SUB81(&pppppcStack_1f0,0);
    uStack_bf = (undefined1)((ulong)&pppppcStack_1f0 >> 8);
    uStack_be = (undefined6)((ulong)&pppppcStack_1f0 >> 0x10);
    uStack_b8 = &UNK_10b21efe8;
    pbStack_100 = &bStack_d0;
    pppppcStack_108 = (char *****)0x1;
    pppppcStack_f8 = (char *****)0x2;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h3bc4ce81c5a0a348E
               ,&pppppcStack_108);
    lVar12 = 
    ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h3bc4ce81c5a0a348E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppppcStack_158 =
           *(char ******)
            (
            ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h3bc4ce81c5a0a348E
            + 0x20);
      ppppcStack_150 =
           *(char *****)
            (
            ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h3bc4ce81c5a0a348E
            + 0x28);
      pppppcStack_160 = (char *****)0x5;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppcStack_160);
      if (iVar11 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar12,puVar3,puVar2,&pppppcStack_160,&pppppcStack_108);
      }
    }
  }
  if (((char *****)pppppcStack_278[4] == (char *****)0x0) ||
     (lVar12 = __ZN4http3uri9authority4host17h55fa409134a3a823E(pppppcStack_278[3]), lVar12 == 0)) {
LAB_10149af94:
    uStack_198 = (undefined *)CONCAT62(uStack_198._2_6_,2);
    lVar17 = *(long *)(param_2 + 0x68) + *(long *)(param_2 + 0x70) * 0x20;
    lVar12 = *(long *)(param_2 + 0x70) * -0x20;
    plVar13 = (long *)(lVar17 + 8);
    do {
      plVar19 = plVar13;
      if (lVar12 == 0) goto LAB_10149b02c;
      plVar1 = (long *)(lVar17 + -0x10);
      plVar4 = (long *)(lVar17 + -8);
      lVar17 = lVar17 + -0x20;
      plVar13 = plVar19 + -4;
      lVar12 = lVar12 + 0x20;
    } while (*plVar4 != -0x27a3ca05a9ca8aee || *plVar1 != -0x5555ba1b3757b9a);
    auVar20 = (**(code **)(*plVar13 + 0x38))(plVar19[-5]);
    pcVar18 = auVar20._0_8_;
    (**(code **)(auVar20._8_8_ + 0x18))(&bStack_d0);
    if (((pcVar18 == (char *)0x0) ||
        (CONCAT71(uStack_c7,uStack_c8) != -0x27a3ca05a9ca8aee ||
         CONCAT71(uStack_cf,bStack_d0) != -0x5555ba1b3757b9a)) || (*pcVar18 == '\x1a')) {
LAB_10149b02c:
      puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,2);
    }
    else {
      if (*pcVar18 == '\x19') {
        __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                  (&bStack_120,pcVar18);
      }
      else {
        uStack_118 = (undefined1)*(undefined8 *)(pcVar18 + 8);
        uStack_117 = (undefined7)((ulong)*(undefined8 *)(pcVar18 + 8) >> 8);
        bStack_120 = (byte)*(undefined8 *)pcVar18;
        uStack_11f = (undefined7)((ulong)*(undefined8 *)pcVar18 >> 8);
        uStack_110 = (undefined1)*(undefined8 *)(pcVar18 + 0x10);
        uStack_10f = (undefined7)((ulong)*(undefined8 *)(pcVar18 + 0x10) >> 8);
      }
      pppppcStack_158 = (char *****)CONCAT71(uStack_117,uStack_118);
      pppppcStack_160 = (char *****)CONCAT71(uStack_11f,bStack_120);
      ppppcStack_150 = (char ****)CONCAT71(uStack_10f,uStack_110);
      uStack_148._0_4_ = CONCAT22(*(undefined2 *)(pcVar18 + 0x18),1);
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b6393b0 - 1 < 2 ||
           ((bRam000000010b6393b0 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                                ), cVar10 != '\0')))))) &&
         (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                             ), iVar11 != 0)) {
        puStack_f0 = (undefined *)
                     (
                     ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                     + 0x30);
        pppppcStack_140 = (char *****)&pppppcStack_160;
        uStack_138 = 0x105af1490;
        uStack_131 = 0;
        pppppcStack_e0 = (char *****)&pppppcStack_140;
        pppcStack_e8 = (char ***)s_0request_context__use_proxy_targ_108ad863f;
        pppppcStack_d8 = (char *****)&pppppcStack_278;
        bStack_d0 = (byte)&pppcStack_e8;
        uStack_cf = (undefined7)((ulong)&pppcStack_e8 >> 8);
        uStack_c8 = 0xd0;
        uStack_c7 = 0x10b208f;
        uStack_c0 = SUB81(&pppppcStack_d8,0);
        uStack_bf = (undefined1)((ulong)&pppppcStack_d8 >> 8);
        uStack_be = (undefined6)((ulong)&pppppcStack_d8 >> 0x10);
        uStack_b8 = &UNK_10b21efe8;
        pbStack_100 = &bStack_d0;
        pppppcStack_108 = (char *****)0x1;
        pppppcStack_f8 = (char *****)0x2;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                   ,&pppppcStack_108);
        lVar12 = 
        ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          bStack_1d0 = 5;
          uStack_1cf = 0;
          uStack_1c8 = (undefined1)
                       *(undefined8 *)
                        (
                        ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                        + 0x20);
          uStack_1c7 = (undefined7)
                       ((ulong)*(undefined8 *)
                                (
                                ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                                + 0x20) >> 8);
          uStack_1c0 = (undefined1)
                       *(undefined8 *)
                        (
                        ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                        + 0x28);
          uStack_1bf = (undefined7)
                       ((ulong)*(undefined8 *)
                                (
                                ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                                + 0x28) >> 8);
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&bStack_1d0);
          if (iVar11 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar12,puVar3,puVar2,&bStack_1d0,&pppppcStack_108);
          }
        }
      }
      else {
        lVar12 = 
        ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppcStack_140 = (char *****)0x5;
          uStack_138 = (undefined7)
                       *(undefined8 *)
                        (
                        ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                        + 0x20);
          uStack_131 = (undefined1)
                       ((ulong)*(undefined8 *)
                                (
                                ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                                + 0x20) >> 0x38);
          uStack_130 = (undefined7)
                       *(undefined8 *)
                        (
                        ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                        + 0x28);
          uStack_129 = (undefined1)
                       ((ulong)*(undefined8 *)
                                (
                                ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                                + 0x28) >> 0x38);
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppcStack_140);
          if (iVar11 != 0) {
            puStack_f0 = (undefined *)
                         (
                         ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hecb74b77b41ad3cfE
                         + 0x30);
            bStack_1d0 = (byte)&pppppcStack_160;
            uStack_1cf = (undefined7)((ulong)&pppppcStack_160 >> 8);
            uStack_1c8 = 0x90;
            uStack_1c7 = 0x105af14;
            pppppcStack_e0 = (char *****)&bStack_1d0;
            pppcStack_e8 = (char ***)s_0request_context__use_proxy_targ_108ad863f;
            pppppcStack_d8 = (char *****)&pppppcStack_278;
            bStack_d0 = (byte)&pppcStack_e8;
            uStack_cf = (undefined7)((ulong)&pppcStack_e8 >> 8);
            uStack_c8 = 0xd0;
            uStack_c7 = 0x10b208f;
            uStack_c0 = SUB81(&pppppcStack_d8,0);
            uStack_bf = (undefined1)((ulong)&pppppcStack_d8 >> 8);
            uStack_be = (undefined6)((ulong)&pppppcStack_d8 >> 0x10);
            uStack_b8 = &UNK_10b21efe8;
            pbStack_100 = &bStack_d0;
            pppppcStack_108 = (char *****)0x1;
            pppppcStack_f8 = (char *****)0x2;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar12,puVar3,puVar2,&pppppcStack_140,&pppppcStack_108);
          }
        }
      }
      uStack_1c8 = SUB81(pppppcStack_158,0);
      uStack_1c7 = (undefined7)((ulong)pppppcStack_158 >> 8);
      bStack_1d0 = (byte)pppppcStack_160;
      uStack_1cf = (undefined7)((ulong)pppppcStack_160 >> 8);
      puStack_1b8 = uStack_148;
      uStack_1c0 = SUB81(ppppcStack_150,0);
      uStack_1bf = (undefined7)((ulong)ppppcStack_150 >> 8);
      if ((((short)uStack_198 != 2) && ((byte)pppppcStack_1b0 != 0x1a)) &&
         (0x18 < (byte)pppppcStack_1b0)) {
        pppppcVar9 = (char *****)*pppppcStack_1a8;
        *pppppcStack_1a8 = (char ****)((long)pppppcVar9 + -1);
        LORelease();
        if (pppppcVar9 == (char *****)0x1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE
                    ((ulong)&pppppcStack_1b0 | 8);
        }
      }
    }
  }
  else {
    __ZN87__LT_rama_net__address__host__Host_u20_as_u20_core__convert__TryFrom_LT__RF_str_GT__GT_8try_from17hf75cc69cf3287d4fE
              (&bStack_d0);
    if (bStack_d0 == 0x1b) {
      uVar16 = CONCAT71(uStack_c7,uStack_c8);
      puVar14 = (undefined8 *)CONCAT62(uStack_be,CONCAT11(uStack_bf,uStack_c0));
      pcVar15 = (code *)*puVar14;
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(uVar16);
      }
      if (puVar14[1] != 0) {
        _free(uVar16);
      }
      goto LAB_10149af94;
    }
    uStack_1c7 = uStack_c7;
    uStack_1cf = uStack_cf;
    uStack_1c8 = uStack_c8;
    uStack_1c0 = uStack_c0;
    uStack_1bf = (undefined7)(CONCAT62(uStack_be,CONCAT11(uStack_bf,uStack_c0)) >> 8);
    bStack_1d0 = bStack_d0;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b639368 - 1 < 2 ||
         ((bRam000000010b639368 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h52f616cd0569f2e7E
                              ), cVar10 != '\0')))) &&
        (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h52f616cd0569f2e7E
                            ), iVar11 != 0)))) {
      puStack_f0 = (undefined *)
                   (
                   ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h52f616cd0569f2e7E
                   + 0x30);
      pppppcStack_1b0 = (char *****)&bStack_1d0;
      pppppcStack_1a8 =
           (char *****)
           __ZN68__LT_rama_net__address__host__Host_u20_as_u20_core__fmt__Display_GT_3fmt17hf68cbe8aa160ccb6E
      ;
      bStack_120 = 0xd6;
      uStack_11f = 0x108ad85;
      uStack_118 = SUB81(&pppppcStack_1b0,0);
      uStack_117 = (undefined7)((ulong)&pppppcStack_1b0 >> 8);
      pppppcStack_140 = (char *****)&pppppcStack_278;
      bStack_d0 = (byte)&bStack_120;
      uStack_cf = (undefined7)((ulong)&bStack_120 >> 8);
      uStack_c8 = 0xd0;
      uStack_c7 = 0x10b208f;
      uStack_c0 = SUB81(&pppppcStack_140,0);
      uStack_bf = (undefined1)((ulong)&pppppcStack_140 >> 8);
      uStack_be = (undefined6)((ulong)&pppppcStack_140 >> 0x10);
      uStack_b8 = &UNK_10b21efe8;
      pbStack_100 = &bStack_d0;
      pppppcStack_108 = (char *****)0x1;
      pppppcStack_f8 = (char *****)0x2;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h52f616cd0569f2e7E
                 ,&pppppcStack_108);
      lVar12 = 
      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h52f616cd0569f2e7E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppcStack_158 =
             *(char ******)
              (
              ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h52f616cd0569f2e7E
              + 0x20);
        ppppcStack_150 =
             *(char *****)
              (
              ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h52f616cd0569f2e7E
              + 0x28);
        pppppcStack_160 = (char *****)0x5;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppcStack_160);
        if (iVar11 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar3,puVar2,&pppppcStack_160,&pppppcStack_108);
        }
      }
    }
    else {
      lVar12 = 
      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h52f616cd0569f2e7E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppcStack_158 =
             *(char ******)
              (
              ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h52f616cd0569f2e7E
              + 0x20);
        ppppcStack_150 =
             *(char *****)
              (
              ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h52f616cd0569f2e7E
              + 0x28);
        pppppcStack_160 = (char *****)0x5;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppcStack_160);
        if (iVar11 != 0) {
          puStack_f0 = (undefined *)
                       (
                       ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h52f616cd0569f2e7E
                       + 0x30);
          pppppcStack_1b0 = (char *****)&bStack_1d0;
          pppppcStack_1a8 =
               (char *****)
               __ZN68__LT_rama_net__address__host__Host_u20_as_u20_core__fmt__Display_GT_3fmt17hf68cbe8aa160ccb6E
          ;
          bStack_120 = 0xd6;
          uStack_11f = 0x108ad85;
          uStack_118 = SUB81(&pppppcStack_1b0,0);
          uStack_117 = (undefined7)((ulong)&pppppcStack_1b0 >> 8);
          pppppcStack_140 = (char *****)&pppppcStack_278;
          bStack_d0 = (byte)&bStack_120;
          uStack_cf = (undefined7)((ulong)&bStack_120 >> 8);
          uStack_c8 = 0xd0;
          uStack_c7 = 0x10b208f;
          uStack_c0 = SUB81(&pppppcStack_140,0);
          uStack_bf = (undefined1)((ulong)&pppppcStack_140 >> 8);
          uStack_be = (undefined6)((ulong)&pppppcStack_140 >> 0x10);
          uStack_b8 = &UNK_10b21efe8;
          pbStack_100 = &bStack_d0;
          pppppcStack_108 = (char *****)0x1;
          pppppcStack_f8 = (char *****)0x2;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar3,puVar2,&pppppcStack_160,&pppppcStack_108);
        }
      }
    }
    uStack_1a0 = CONCAT71(uStack_1bf,uStack_1c0);
    pppppcStack_1a8 = (char *****)CONCAT71(uStack_1c7,uStack_1c8);
    pppppcStack_1b0 = (char *****)CONCAT71(uStack_1cf,bStack_1d0);
    uStack_198._0_4_ = CONCAT22(uStack_23a,1);
    puStack_1b8 = uStack_198;
  }
  if ((short)puStack_1b8 == 2) {
    lVar17 = *(long *)(param_2 + 0x68) + *(long *)(param_2 + 0x70) * 0x20;
    lVar12 = *(long *)(param_2 + 0x70) * -0x20;
    plVar13 = (long *)(lVar17 + 8);
    do {
      plVar19 = plVar13;
      if (lVar12 == 0) goto LAB_10149b6a0;
      plVar1 = (long *)(lVar17 + -0x10);
      plVar4 = (long *)(lVar17 + -8);
      lVar17 = lVar17 + -0x20;
      plVar13 = plVar19 + -4;
      lVar12 = lVar12 + 0x20;
    } while (*plVar4 != 0x7b297d2c5aefa445 || *plVar1 != 0xede09ef6a8bcddd);
    auVar20 = (**(code **)(*plVar13 + 0x38))(plVar19[-5]);
    plVar13 = auVar20._0_8_;
    (**(code **)(auVar20._8_8_ + 0x18))(&bStack_d0);
    if ((((plVar13 != (long *)0x0) &&
         (CONCAT71(uStack_c7,uStack_c8) == 0x7b297d2c5aefa445 &&
          CONCAT71(uStack_cf,bStack_d0) == 0xede09ef6a8bcddd)) && (*plVar13 != -0x8000000000000000))
       && (plVar13[8] != 0)) {
      lVar12 = plVar13[8] << 6;
      plVar19 = (long *)((ulong)&bStack_d0 | 1);
      pcVar18 = (char *)(plVar13[7] + 8);
      do {
        if ((*(long *)(pcVar18 + -8) == -0x7fffffffffffffff) && (*pcVar18 != '\x1a')) {
          if (*pcVar18 == '\x19') {
            __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                      (&bStack_d0,pcVar18);
          }
          else {
            uStack_c8 = (undefined1)*(undefined8 *)(pcVar18 + 8);
            uStack_c7 = (undefined7)((ulong)*(undefined8 *)(pcVar18 + 8) >> 8);
            bStack_d0 = (byte)*(undefined8 *)pcVar18;
            uStack_cf = (undefined7)((ulong)*(undefined8 *)pcVar18 >> 8);
            uVar16 = *(undefined8 *)(pcVar18 + 0x10);
            uStack_c0 = (undefined1)uVar16;
            uStack_bf = (undefined1)((ulong)uVar16 >> 8);
            uStack_be = (undefined6)((ulong)uVar16 >> 0x10);
          }
          pppppcStack_140 = (char *****)*plVar19;
          uStack_138 = (undefined7)plVar19[1];
          uStack_131 = (undefined1)*(undefined8 *)((long)plVar19 + 0xf);
          uStack_130 = (undefined7)((ulong)*(undefined8 *)((long)plVar19 + 0xf) >> 8);
          if (bStack_d0 != 0x1a) {
            bStack_120 = bStack_d0;
            uStack_117 = uStack_138;
            uStack_11f = SUB87(pppppcStack_140,0);
            uStack_118 = (undefined1)((ulong)pppppcStack_140 >> 0x38);
            uStack_110 = uStack_131;
            uStack_10f = uStack_130;
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                ((bRam000000010b639380 - 1 < 2 ||
                 ((bRam000000010b639380 != 0 &&
                  (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76854235cb7ff97bE
                                      ), cVar10 != '\0')))))) &&
               (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76854235cb7ff97bE
                                   ), iVar11 != 0)) {
              puStack_f0 = (undefined *)
                           (
                           ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76854235cb7ff97bE
                           + 0x30);
              pppppcStack_1b0 = (char *****)&bStack_120;
              pppppcStack_1a8 =
                   (char *****)
                   &
                   __ZN72__LT_rama_net__address__domain__Domain_u20_as_u20_core__fmt__Display_GT_3fmt17hf58f7b8af32d5625E
              ;
              pppppcStack_e0 = (char *****)&pppppcStack_1b0;
              pppcStack_e8 = (char ***)s_request_context__detected_host_f_108ad85aa;
              pppppcStack_d8 = (char *****)&pppppcStack_278;
              bStack_d0 = (byte)&pppcStack_e8;
              uStack_cf = (undefined7)((ulong)&pppcStack_e8 >> 8);
              uStack_c8 = 0xd0;
              uStack_c7 = 0x10b208f;
              uStack_c0 = SUB81(&pppppcStack_d8,0);
              uStack_bf = (undefined1)((ulong)&pppppcStack_d8 >> 8);
              uStack_be = (undefined6)((ulong)&pppppcStack_d8 >> 0x10);
              uStack_b8 = &UNK_10b21efe8;
              pbStack_100 = &bStack_d0;
              pppppcStack_108 = (char *****)0x1;
              pppppcStack_f8 = (char *****)0x2;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76854235cb7ff97bE
                         ,&pppppcStack_108);
              lVar12 = 
              ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76854235cb7ff97bE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                pppppcStack_158 =
                     *(char ******)
                      (
                      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76854235cb7ff97bE
                      + 0x20);
                ppppcStack_150 =
                     *(char *****)
                      (
                      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76854235cb7ff97bE
                      + 0x28);
                pppppcStack_160 = (char *****)0x5;
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_10b3c24c8;
                }
                puVar3 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_109adfc03;
                }
                iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppcStack_160);
                if (iVar11 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar12,puVar3,puVar2,&pppppcStack_160,&pppppcStack_108);
                }
              }
            }
            else {
              lVar12 = 
              ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76854235cb7ff97bE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                pppppcStack_1a8 =
                     *(char ******)
                      (
                      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76854235cb7ff97bE
                      + 0x20);
                uStack_1a0 = *(undefined8 *)
                              (
                              ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76854235cb7ff97bE
                              + 0x28);
                pppppcStack_1b0 = (char *****)0x5;
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_10b3c24c8;
                }
                puVar3 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_109adfc03;
                }
                iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppcStack_1b0);
                if (iVar11 != 0) {
                  puStack_f0 = (undefined *)
                               (
                               ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h76854235cb7ff97bE
                               + 0x30);
                  pppppcStack_160 = (char *****)&bStack_120;
                  pppppcStack_158 =
                       (char *****)
                       &
                       __ZN72__LT_rama_net__address__domain__Domain_u20_as_u20_core__fmt__Display_GT_3fmt17hf58f7b8af32d5625E
                  ;
                  pppppcStack_e0 = (char *****)&pppppcStack_160;
                  pppcStack_e8 = (char ***)s_request_context__detected_host_f_108ad85aa;
                  pppppcStack_d8 = (char *****)&pppppcStack_278;
                  bStack_d0 = (byte)&pppcStack_e8;
                  uStack_cf = (undefined7)((ulong)&pppcStack_e8 >> 8);
                  uStack_c8 = 0xd0;
                  uStack_c7 = 0x10b208f;
                  uStack_c0 = SUB81(&pppppcStack_d8,0);
                  uStack_bf = (undefined1)((ulong)&pppppcStack_d8 >> 8);
                  uStack_be = (undefined6)((ulong)&pppppcStack_d8 >> 0x10);
                  uStack_b8 = &UNK_10b21efe8;
                  pbStack_100 = &bStack_d0;
                  pppppcStack_108 = (char *****)0x1;
                  pppppcStack_f8 = (char *****)0x2;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar12,puVar3,puVar2,&pppppcStack_1b0,&pppppcStack_108);
                }
              }
            }
            pppppcStack_158 = (char *****)CONCAT71(uStack_117,uStack_118);
            pppppcStack_160 = (char *****)CONCAT71(uStack_11f,bStack_120);
            ppppcStack_150 = (char ****)CONCAT71(uStack_10f,uStack_110);
            uStack_148._0_4_ = CONCAT22(uStack_23a,1);
            goto joined_r0x00010149c53c;
          }
        }
        pcVar18 = pcVar18 + 0x40;
        lVar12 = lVar12 + -0x40;
      } while (lVar12 != 0);
    }
LAB_10149b6a0:
    uStack_148 = (undefined *)CONCAT62(uStack_148._2_6_,2);
joined_r0x00010149c53c:
    if (((short)puStack_1b8 != 2) && (bStack_1d0 != 0x1a && 0x18 < bStack_1d0)) {
      lVar12 = *(long *)CONCAT71(uStack_1c7,uStack_1c8);
      *(long *)CONCAT71(uStack_1c7,uStack_1c8) = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE((ulong)&bStack_1d0 | 8);
      }
    }
  }
  else {
    pppppcStack_158 = (char *****)CONCAT71(uStack_1c7,uStack_1c8);
    pppppcStack_160 = (char *****)CONCAT71(uStack_1cf,bStack_1d0);
    ppppcStack_150 = (char ****)CONCAT71(uStack_1bf,uStack_1c0);
    uStack_148 = puStack_1b8;
  }
  if ((short)uStack_148 == 2) {
    lVar17 = *(long *)(param_2 + 0x68) + *(long *)(param_2 + 0x70) * 0x20;
    lVar12 = *(long *)(param_2 + 0x70) * -0x20;
    plVar13 = (long *)(lVar17 + 8);
    do {
      plVar19 = plVar13;
      if (lVar12 == 0) goto LAB_10149b760;
      plVar1 = (long *)(lVar17 + -0x10);
      plVar4 = (long *)(lVar17 + -8);
      lVar17 = lVar17 + -0x20;
      plVar13 = plVar19 + -4;
      lVar12 = lVar12 + 0x20;
    } while (*plVar4 != -0x3f879874655d08a2 || *plVar1 != 0x3d9b8c60bc16b9f8);
    auVar20 = (**(code **)(*plVar13 + 0x38))(plVar19[-5]);
    lVar12 = auVar20._0_8_;
    (**(code **)(auVar20._8_8_ + 0x18))(&bStack_d0);
    uVar8 = uStack_23a;
    if (((lVar12 == 0) ||
        (CONCAT71(uStack_c7,uStack_c8) != -0x3f879874655d08a2 ||
         CONCAT71(uStack_cf,bStack_d0) != 0x3d9b8c60bc16b9f8)) ||
       (uVar5 = *(ushort *)(lVar12 + 0xd0), uVar5 == 2)) {
LAB_10149b760:
      uStack_1d8 = (undefined *)CONCAT62(uStack_1d8._2_6_,2);
    }
    else {
      cVar10 = *(char *)(lVar12 + 0xb8);
      if ((cVar10 == '\x1a') || (cVar10 != '\x19')) {
        uVar16 = *(undefined8 *)(lVar12 + 0xb8);
        uStack_1c8 = (undefined1)*(undefined8 *)(lVar12 + 0xc0);
        uStack_1c7 = (undefined7)((ulong)*(undefined8 *)(lVar12 + 0xc0) >> 8);
        bStack_1d0 = (byte)uVar16;
        uStack_1cf = (undefined7)((ulong)uVar16 >> 8);
        uStack_1c0 = (undefined1)*(undefined8 *)(lVar12 + 200);
        uStack_1bf = (undefined7)((ulong)*(undefined8 *)(lVar12 + 200) >> 8);
      }
      else {
        __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                  (&bStack_1d0);
        uVar5 = *(ushort *)(lVar12 + 0xd0);
      }
      uVar6 = *(undefined2 *)(lVar12 + 0xd2);
      uStack_118 = uStack_1c8;
      uStack_117 = uStack_1c7;
      bStack_120 = bStack_1d0;
      uStack_11f = uStack_1cf;
      uStack_110 = uStack_1c0;
      uStack_10f = uStack_1bf;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b639398 - 1 < 2 ||
           ((bRam000000010b639398 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35464297b134b9b9E
                                ), cVar10 != '\0')))))) &&
         (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35464297b134b9b9E
                             ), iVar11 != 0)) {
        puStack_f0 = (undefined *)
                     (
                     ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35464297b134b9b9E
                     + 0x30);
        pppppcStack_140 = (char *****)&bStack_120;
        uStack_138 = 0x105ae8c4c;
        uStack_131 = 0;
        pppppcStack_e0 = (char *****)&pppppcStack_140;
        pppcStack_e8 = (char ***)s_request_context__detected_host_f_108ad8608;
        pppppcStack_d8 = (char *****)&pppppcStack_278;
        bStack_d0 = (byte)&pppcStack_e8;
        uStack_cf = (undefined7)((ulong)&pppcStack_e8 >> 8);
        uStack_c8 = 0xd0;
        uStack_c7 = 0x10b208f;
        uStack_c0 = SUB81(&pppppcStack_d8,0);
        uStack_bf = (undefined1)((ulong)&pppppcStack_d8 >> 8);
        uStack_be = (undefined6)((ulong)&pppppcStack_d8 >> 0x10);
        uStack_b8 = &UNK_10b21efe8;
        pbStack_100 = &bStack_d0;
        pppppcStack_108 = (char *****)0x1;
        pppppcStack_f8 = (char *****)0x2;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35464297b134b9b9E
                   ,&pppppcStack_108);
        lVar12 = 
        ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35464297b134b9b9E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppcStack_1a8 =
               *(char ******)
                (
                ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35464297b134b9b9E
                + 0x20);
          uStack_1a0 = *(undefined8 *)
                        (
                        ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35464297b134b9b9E
                        + 0x28);
          pppppcStack_1b0 = (char *****)0x5;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppcStack_1b0);
          if (iVar11 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar12,puVar3,puVar2,&pppppcStack_1b0,&pppppcStack_108);
          }
        }
      }
      else {
        lVar12 = 
        ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35464297b134b9b9E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppcStack_1a8 =
               *(char ******)
                (
                ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35464297b134b9b9E
                + 0x20);
          uStack_1a0 = *(undefined8 *)
                        (
                        ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35464297b134b9b9E
                        + 0x28);
          pppppcStack_1b0 = (char *****)0x5;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppcStack_1b0);
          if (iVar11 != 0) {
            puStack_f0 = (undefined *)
                         (
                         ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35464297b134b9b9E
                         + 0x30);
            pppppcStack_140 = (char *****)&bStack_120;
            uStack_138 = 0x105ae8c4c;
            uStack_131 = 0;
            pppppcStack_e0 = (char *****)&pppppcStack_140;
            pppcStack_e8 = (char ***)s_request_context__detected_host_f_108ad8608;
            pppppcStack_d8 = (char *****)&pppppcStack_278;
            bStack_d0 = (byte)&pppcStack_e8;
            uStack_cf = (undefined7)((ulong)&pppcStack_e8 >> 8);
            uStack_c8 = 0xd0;
            uStack_c7 = 0x10b208f;
            uStack_c0 = SUB81(&pppppcStack_d8,0);
            uStack_bf = (undefined1)((ulong)&pppppcStack_d8 >> 8);
            uStack_be = (undefined6)((ulong)&pppppcStack_d8 >> 0x10);
            uStack_b8 = &UNK_10b21efe8;
            pbStack_100 = &bStack_d0;
            pppppcStack_108 = (char *****)0x1;
            pppppcStack_f8 = (char *****)0x2;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar12,puVar3,puVar2,&pppppcStack_1b0,&pppppcStack_108);
          }
        }
      }
      if ((uVar5 & 1) == 0) {
        uVar6 = uVar8;
      }
      pppppcStack_1e8 = (char *****)CONCAT71(uStack_117,uStack_118);
      pppppcStack_1f0 = (char *****)CONCAT71(uStack_11f,bStack_120);
      ppppcStack_1e0 = (char ****)CONCAT71(uStack_10f,uStack_110);
      uStack_1d8._0_4_ = CONCAT22(uVar6,1);
    }
    if (((short)uStack_148 != 2) && ((byte)pppppcStack_160 != 0x1a && 0x18 < (byte)pppppcStack_160))
    {
      pppppcVar9 = (char *****)*pppppcStack_158;
      *pppppcStack_158 = (char ****)((long)pppppcVar9 + -1);
      LORelease();
      if (pppppcVar9 == (char *****)0x1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE((ulong)&pppppcStack_160 | 8)
        ;
      }
    }
  }
  else {
    pppppcStack_1e8 = pppppcStack_158;
    pppppcStack_1f0 = pppppcStack_160;
    uStack_1d8 = uStack_148;
    ppppcStack_1e0 = ppppcStack_150;
  }
  if ((short)uStack_1d8 == 2) {
    uStack_c8 = 0x26;
    uStack_c7 = 0;
    bStack_d0 = 0;
    uStack_cf = 0;
    uStack_b8 = (undefined *)0x0;
    uStack_c0 = 0;
    uStack_bf = 0;
    uStack_be = 0;
    lVar12 = FUN_100ea2edc(param_2,&bStack_d0);
    if (lVar12 != 0) {
      func_0x0001055bf348(&pppppcStack_108,*(undefined8 *)(lVar12 + 8),
                          *(undefined8 *)(lVar12 + 0x10));
      if ((int)pppppcStack_108 == 1) {
        puVar14 = (undefined8 *)_malloc(0x20);
        if (puVar14 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
          goto LAB_10149c57c;
        }
        *puVar14 = &UNK_109b2012a;
        puVar14[1] = 0x23;
        puVar14[3] = pppppcStack_f8;
        puVar14[2] = pbStack_100;
        bStack_d0 = (byte)puVar14;
        uStack_cf = (undefined7)((ulong)puVar14 >> 8);
        uStack_c8 = 0x70;
        uStack_c7 = 0x10b40be;
      }
      else {
        pppppcStack_108 = (char *****)0x8000000000000000;
        __ZN8rama_net7address18host_with_opt_port27try_from_maybe_borrowed_str17hb186338ba330ac62E
                  (&bStack_d0,&pppppcStack_108);
        if ((short)uStack_b8 != 2) {
          uStack_1f8 = uStack_b8._2_4_;
          ppppcStack_210 = (char ****)CONCAT62(uStack_be,CONCAT11(uStack_bf,uStack_c0));
          pppppcStack_220 = (char *****)CONCAT71(uStack_cf,bStack_d0);
          pppppcStack_218 = (char *****)CONCAT71(uStack_c7,uStack_c8);
          uStack_202 = uStack_b8._6_2_;
          sStack_208 = (short)uStack_b8;
          goto LAB_10149b84c;
        }
      }
      uVar16 = CONCAT71(uStack_cf,bStack_d0);
      puVar14 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
      pcVar15 = (code *)*puVar14;
      if (pcVar15 != (code *)0x0) {
        (*pcVar15)(uVar16);
      }
      if (puVar14[1] != 0) {
        _free(uVar16);
      }
    }
    puVar14 = (undefined8 *)_malloc(0x10);
    if (puVar14 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
LAB_10149c57c:
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10149c580);
      (*pcVar15)();
    }
    *puVar14 = &UNK_108cd5f73;
    puVar14[1] = 0x34;
    *param_1 = puVar14;
    param_1[1] = &UNK_10b209930;
    *(undefined2 *)(param_1 + 6) = 2;
    if ((5 < bStack_270 - 0x1a) && (0x18 < bStack_270)) {
      lVar12 = *plStack_268;
      *plStack_268 = lVar12 + -1;
      LORelease();
      if (lVar12 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&plStack_268);
      }
    }
  }
  else {
    uStack_1f8 = uStack_1d8._2_4_;
    ppppcStack_210 = ppppcStack_1e0;
    pppppcStack_220 = pppppcStack_1f0;
    pppppcStack_218 = pppppcStack_1e8;
    uStack_202 = uStack_1d8._6_2_;
    sStack_208 = (short)uStack_1d8;
LAB_10149b84c:
    uStack_206 = uStack_1f8;
    uStack_1f4 = uStack_202;
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b639338 - 1 < 2 ||
         ((bRam000000010b639338 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hb185558932b36f23E
                              ), cVar10 != '\0')))) &&
        (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hb185558932b36f23E
                            ), iVar11 != 0)))) {
      puStack_f0 = (undefined *)
                   (
                   ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hb185558932b36f23E
                   + 0x30);
      pppppcStack_1b0 = (char *****)&pppppcStack_220;
      pppppcStack_1a8 =
           (char *****)
           __ZN93__LT_rama_net__address__host_with_opt_port__HostWithOptPort_u20_as_u20_core__fmt__Display_GT_3fmt17h1a01c45ad78bf007E
      ;
      bStack_1d0 = 0x51;
      uStack_1cf = 0x108ad85;
      uStack_1c8 = SUB81(&pppppcStack_1b0,0);
      uStack_1c7 = (undefined7)((ulong)&pppppcStack_1b0 >> 8);
      pppppcStack_1f0 = (char *****)&pppppcStack_278;
      bStack_d0 = (byte)&bStack_1d0;
      uStack_cf = (undefined7)((ulong)&bStack_1d0 >> 8);
      uStack_c8 = 0xd0;
      uStack_c7 = 0x10b208f;
      uStack_c0 = SUB81(&pppppcStack_1f0,0);
      uStack_bf = (undefined1)((ulong)&pppppcStack_1f0 >> 8);
      uStack_be = (undefined6)((ulong)&pppppcStack_1f0 >> 0x10);
      uStack_b8 = &UNK_10b21efe8;
      pbStack_100 = &bStack_d0;
      pppppcStack_108 = (char *****)0x1;
      pppppcStack_f8 = (char *****)0x2;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hb185558932b36f23E
                 ,&pppppcStack_108);
      lVar12 = 
      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hb185558932b36f23E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppcStack_158 =
             *(char ******)
              (
              ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hb185558932b36f23E
              + 0x20);
        ppppcStack_150 =
             *(char *****)
              (
              ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hb185558932b36f23E
              + 0x28);
        pppppcStack_160 = (char *****)0x5;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppcStack_160);
        if (iVar11 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar3,puVar2,&pppppcStack_160,&pppppcStack_108);
        }
      }
    }
    else {
      lVar12 = 
      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hb185558932b36f23E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_188 = *(undefined8 *)
                      (
                      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hb185558932b36f23E
                      + 0x20);
        uStack_180 = *(undefined8 *)
                      (
                      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hb185558932b36f23E
                      + 0x28);
        uStack_190 = 5;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_190);
        if (iVar11 != 0) {
          uStack_148 = (undefined *)
                       (
                       ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17hb185558932b36f23E
                       + 0x30);
          pppppcStack_1f0 = (char *****)&pppppcStack_220;
          pppppcStack_1e8 =
               (char *****)
               __ZN93__LT_rama_net__address__host_with_opt_port__HostWithOptPort_u20_as_u20_core__fmt__Display_GT_3fmt17h1a01c45ad78bf007E
          ;
          bStack_120 = 0x51;
          uStack_11f = 0x108ad85;
          uStack_118 = SUB81(&pppppcStack_1f0,0);
          uStack_117 = (undefined7)((ulong)&pppppcStack_1f0 >> 8);
          pppppcStack_140 = (char *****)&pppppcStack_278;
          pppppcStack_108 = (char *****)&bStack_120;
          pbStack_100 = &UNK_10b208fd0;
          pppppcStack_f8 = (char *****)&pppppcStack_140;
          puStack_f0 = &UNK_10b21efe8;
          pppppcStack_158 = (char *****)&pppppcStack_108;
          pppppcStack_160 = (char *****)0x1;
          ppppcStack_150 = (char ****)0x2;
          uStack_98 = uStack_188;
          uStack_a0 = uStack_190;
          uStack_90 = uStack_180;
          lStack_b0 = *(long *)(lVar12 + 0x60);
          uStack_a8 = *(undefined8 *)(lVar12 + 0x68);
          lVar17 = *(long *)(lVar12 + 0x50);
          uVar16 = *(undefined8 *)(lVar12 + 0x58);
          bStack_d0 = 1;
          if (lVar17 == 0) {
            bStack_d0 = 2;
          }
          uStack_88 = *(undefined4 *)(lVar12 + 8);
          uStack_84 = *(undefined4 *)(lVar12 + 0xc);
          bStack_1d0 = (byte)&pppppcStack_160;
          uStack_1cf = (undefined7)((ulong)&pppppcStack_160 >> 8);
          uStack_1c8 = 1;
          pppppcStack_1b0 = (char *****)&bStack_1d0;
          pppppcStack_1a8 = (char *****)&DAT_1061c2098;
          uStack_b8 = (undefined *)0x1;
          if (lStack_b0 == 0) {
            uStack_b8 = (undefined *)0x2;
          }
          pppppcStack_78 = (char *****)&pppppcStack_1b0;
          pcStack_80 = s__108b39f4f;
          uStack_cf = 0;
          uStack_c8 = (undefined1)lVar17;
          uStack_c7 = (undefined7)((ulong)lVar17 >> 8);
          uStack_c0 = (undefined1)uVar16;
          uStack_bf = (undefined1)((ulong)uVar16 >> 8);
          uStack_be = (undefined6)((ulong)uVar16 >> 0x10);
          (**(code **)(puVar2 + 0x20))(puVar3,&bStack_d0);
        }
      }
    }
    lVar17 = *(long *)(param_2 + 0x68) + *(long *)(param_2 + 0x70) * 0x20;
    lVar12 = *(long *)(param_2 + 0x70) * -0x20;
    plVar13 = (long *)(lVar17 + 8);
    do {
      plVar19 = plVar13;
      if (lVar12 == 0) goto LAB_10149bb7c;
      plVar1 = (long *)(lVar17 + -0x10);
      plVar4 = (long *)(lVar17 + -8);
      lVar17 = lVar17 + -0x20;
      plVar13 = plVar19 + -4;
      lVar12 = lVar12 + 0x20;
    } while (*plVar4 != -0x3f879874655d08a2 || *plVar1 != 0x3d9b8c60bc16b9f8);
    auVar20 = (**(code **)(*plVar13 + 0x38))(plVar19[-5]);
    (**(code **)(auVar20._8_8_ + 0x18))(&bStack_d0);
    if (((auVar20._0_8_ == 0) ||
        (CONCAT71(uStack_c7,uStack_c8) != -0x3f879874655d08a2 ||
         CONCAT71(uStack_cf,bStack_d0) != 0x3d9b8c60bc16b9f8)) ||
       (cVar10 = *(char *)(auVar20._0_8_ + 0xd8), cVar10 == '\x05')) {
LAB_10149bb7c:
      cVar10 = *(char *)(param_2 + 0xe8);
    }
    pppcStack_e8 = (char ***)CONCAT71(pppcStack_e8._1_7_,cVar10);
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b639320 - 1 < 2 ||
         ((bRam000000010b639320 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h59a94d5715597114E
                              ), cVar10 != '\0')))))) &&
       (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h59a94d5715597114E
                           ), iVar11 != 0)) {
      puStack_f0 = (undefined *)
                   (
                   ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h59a94d5715597114E
                   + 0x30);
      pppppcStack_1b0 = (char *****)&pppcStack_e8;
      pppppcStack_1a8 =
           (char *****)
           &
           __ZN59__LT_http__version__Version_u20_as_u20_core__fmt__Debug_GT_3fmt17h104d9842f6ce4cfdE
      ;
      bStack_1d0 = 0x79;
      uStack_1cf = 0x108ad85;
      uStack_1c8 = SUB81(&pppppcStack_1b0,0);
      uStack_1c7 = (undefined7)((ulong)&pppppcStack_1b0 >> 8);
      pppppcStack_1f0 = (char *****)&pppppcStack_278;
      bStack_d0 = (byte)&bStack_1d0;
      uStack_cf = (undefined7)((ulong)&bStack_1d0 >> 8);
      uStack_c8 = 0xd0;
      uStack_c7 = 0x10b208f;
      uStack_c0 = SUB81(&pppppcStack_1f0,0);
      uStack_bf = (undefined1)((ulong)&pppppcStack_1f0 >> 8);
      uStack_be = (undefined6)((ulong)&pppppcStack_1f0 >> 0x10);
      uStack_b8 = &UNK_10b21efe8;
      pbStack_100 = &bStack_d0;
      pppppcStack_108 = (char *****)0x1;
      pppppcStack_f8 = (char *****)0x2;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h59a94d5715597114E
                 ,&pppppcStack_108);
      lVar12 = 
      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h59a94d5715597114E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppcStack_158 =
             *(char ******)
              (
              ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h59a94d5715597114E
              + 0x20);
        ppppcStack_150 =
             *(char *****)
              (
              ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h59a94d5715597114E
              + 0x28);
        pppppcStack_160 = (char *****)0x5;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppppcStack_160);
        if (iVar11 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar3,puVar2,&pppppcStack_160,&pppppcStack_108);
        }
      }
    }
    else {
      lVar12 = 
      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h59a94d5715597114E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_170 = *(undefined8 *)
                      (
                      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h59a94d5715597114E
                      + 0x20);
        uStack_168 = *(undefined8 *)
                      (
                      ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h59a94d5715597114E
                      + 0x28);
        uStack_178 = 5;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_178);
        if (iVar11 != 0) {
          uStack_148 = (undefined *)
                       (
                       ___ZN8rama_net4http15request_context31try_request_ctx_from_http_parts10__CALLSITE17h59a94d5715597114E
                       + 0x30);
          pppppcStack_1f0 = (char *****)&pppcStack_e8;
          pppppcStack_1e8 =
               (char *****)
               &
               __ZN59__LT_http__version__Version_u20_as_u20_core__fmt__Debug_GT_3fmt17h104d9842f6ce4cfdE
          ;
          bStack_120 = 0x79;
          uStack_11f = 0x108ad85;
          uStack_118 = SUB81(&pppppcStack_1f0,0);
          uStack_117 = (undefined7)((ulong)&pppppcStack_1f0 >> 8);
          pppppcStack_140 = (char *****)&pppppcStack_278;
          pppppcStack_108 = (char *****)&bStack_120;
          pbStack_100 = &UNK_10b208fd0;
          pppppcStack_f8 = (char *****)&pppppcStack_140;
          puStack_f0 = &UNK_10b21efe8;
          pppppcStack_158 = (char *****)&pppppcStack_108;
          pppppcStack_160 = (char *****)0x1;
          ppppcStack_150 = (char ****)0x2;
          lStack_b0 = *(long *)(lVar12 + 0x60);
          uStack_a8 = *(undefined8 *)(lVar12 + 0x68);
          lVar17 = *(long *)(lVar12 + 0x50);
          uVar16 = *(undefined8 *)(lVar12 + 0x58);
          bStack_d0 = 1;
          if (lVar17 == 0) {
            bStack_d0 = 2;
          }
          uStack_88 = *(undefined4 *)(lVar12 + 8);
          uStack_84 = *(undefined4 *)(lVar12 + 0xc);
          bStack_1d0 = (byte)&pppppcStack_160;
          uStack_1cf = (undefined7)((ulong)&pppppcStack_160 >> 8);
          uStack_1c8 = 1;
          pppppcStack_1b0 = (char *****)&bStack_1d0;
          pppppcStack_1a8 = (char *****)&DAT_1061c2098;
          uStack_b8 = (undefined *)0x1;
          if (lStack_b0 == 0) {
            uStack_b8 = (undefined *)0x2;
          }
          uStack_98 = uStack_170;
          uStack_a0 = uStack_178;
          uStack_90 = uStack_168;
          pppppcStack_78 = (char *****)&pppppcStack_1b0;
          pcStack_80 = s__108b39f4f;
          uStack_cf = 0;
          uStack_c8 = (undefined1)lVar17;
          uStack_c7 = (undefined7)((ulong)lVar17 >> 8);
          uStack_c0 = (undefined1)uVar16;
          uStack_bf = (undefined1)((ulong)uVar16 >> 8);
          uStack_be = (undefined6)((ulong)uVar16 >> 0x10);
          (**(code **)(puVar2 + 0x20))(puVar3,&bStack_d0);
        }
      }
    }
    param_1[1] = plStack_268;
    *param_1 = CONCAT71(uStack_26f,bStack_270);
    param_1[3] = pppppcStack_220;
    param_1[2] = uStack_260;
    param_1[5] = ppppcStack_210;
    param_1[4] = pppppcStack_218;
    param_1[6] = CONCAT26(uStack_202,CONCAT42(uStack_206,sStack_208));
    *(undefined1 *)(param_1 + 7) = pppcStack_e8._0_1_;
  }
  return;
}

