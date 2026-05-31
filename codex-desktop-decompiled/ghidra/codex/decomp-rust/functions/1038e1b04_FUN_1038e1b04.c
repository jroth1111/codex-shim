
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e1b04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char ****param_4,
                  undefined8 param_5,char ****param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  char *****pppppcVar7;
  char *****pppppcVar8;
  char ****ppppcVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  char ***pppcStack_288;
  undefined8 uStack_280;
  char ***pppcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  char ****ppppcStack_260;
  undefined8 ****ppppuStack_258;
  char ****ppppcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 ****ppppuStack_230;
  char ****ppppcStack_228;
  undefined *puStack_220;
  char ****ppppcStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  char *pcStack_1e8;
  char ****ppppcStack_1d8;
  undefined8 ****ppppuStack_1d0;
  char ****ppppcStack_1c8;
  undefined *puStack_1c0;
  char ****ppppcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  char *pcStack_188;
  undefined8 ****ppppuStack_180;
  char ****ppppcStack_178;
  undefined8 ****ppppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  char ****ppppcStack_150;
  undefined8 ****ppppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  char ****ppppcStack_130;
  char ****ppppcStack_128;
  char ****ppppcStack_120;
  undefined *puStack_118;
  char ****ppppcStack_110;
  undefined *puStack_108;
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  char ****ppppcStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 ****ppppuStack_e0;
  char ****ppppcStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 uStack_c8;
  char ****ppppcStack_c0;
  undefined8 ****ppppuStack_b8;
  char ****ppppcStack_b0;
  undefined *puStack_a8;
  char ****ppppcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 ****ppppuStack_68;
  
  pppcStack_288 = (char ***)param_4;
  uStack_280 = param_5;
  pppcStack_278 = (char ***)param_6;
  uStack_270 = param_7;
  __ZN3std4path4Path5_join17ha8f408dfc5576c3eE(&lStack_268,param_2,param_3,&UNK_108d977a3,0xb);
  __ZN3std2fs14read_to_string5inner17hf9491275bc43618cE
            (&ppppcStack_130,ppppcStack_260,ppppuStack_258);
  pppppcVar8 = (char *****)ppppcStack_128;
  ppppcVar9 = ppppcStack_130;
  if ((undefined8 *****)ppppcStack_130 == (undefined8 *****)0x8000000000000000) {
    cVar4 = FUN_103922950(ppppcStack_128);
    if (cVar4 == '\0') {
      ppppcStack_c0 = (char ****)pppppcVar8;
      pauVar6 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar6[1][0] == '\x01') {
        auVar11 = *pauVar6;
      }
      else {
        auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar6 + 8) = auVar11._8_8_;
        pauVar6[1][0] = 1;
      }
      *(long *)*pauVar6 = auVar11._0_8_ + 1;
      param_1[1] = 0;
      *param_1 = &UNK_108d961a0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined1 (*) [16])(param_1 + 4) = auVar11;
      if (((ulong)pppppcVar8 & 3) != 1) goto LAB_1038e22a4;
      pppppcVar7 = (char *****)((long)pppppcVar8 + -1);
      ppppcVar9 = *pppppcVar7;
      puVar10 = *(undefined8 **)((long)pppppcVar8 + 7);
      if ((code *)*puVar10 != (code *)0x0) {
        (*(code *)*puVar10)(ppppcVar9);
      }
    }
    else {
      ppppcStack_250 = (char ****)pppppcVar8;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b62bc10 - 1 < 2 ||
           ((bRam000000010b62bc10 != 0 &&
            (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (0x10b62bc00), cVar4 != '\0')))))) &&
         (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (lRam000000010b62bc00), iVar5 != 0)) {
        puStack_1c0 = (undefined *)(lRam000000010b62bc00 + 0x30);
        ppppcStack_d8 = &pppcStack_288;
        ppppuStack_d0 = (undefined8 ****)&DAT_103925cd0;
        ppppuStack_e8 = &ppppcStack_d8;
        ppppcStack_f0 = (char ****)s__108af809e;
        ppppcStack_150 = ppppcStack_260;
        ppppuStack_148 = ppppuStack_258;
        ppppuStack_180 = &ppppcStack_150;
        ppppuStack_100 = &ppppcStack_250;
        ppppcStack_c0 = (char ****)&ppppcStack_f0;
        ppppuStack_b8 = (undefined8 ****)&UNK_10b2d6420;
        ppppcStack_b0 = (char ****)&ppppuStack_180;
        puStack_a8 = &UNK_10b2d6c20;
        ppppcStack_a0 = (char ****)&ppppuStack_100;
        puStack_98 = &UNK_10b2d72e8;
        ppppuStack_1d0 = &ppppcStack_c0;
        ppppcStack_1d8 = (char ****)0x1;
        ppppcStack_1c8 = (char ****)0x3;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (lRam000000010b62bc00,&ppppcStack_1d8);
        lVar3 = lRam000000010b62bc00;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          ppppcStack_228 = *(char *****)(lRam000000010b62bc00 + 0x20);
          puStack_220 = *(undefined **)(lRam000000010b62bc00 + 0x28);
          ppppuStack_230 = (char *****)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppuStack_230);
          if (iVar5 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar3,puVar2,puVar1,&ppppuStack_230,&ppppcStack_1d8);
          }
        }
      }
      else {
        lVar3 = lRam000000010b62bc00;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_240 = *(undefined8 *)(lRam000000010b62bc00 + 0x20);
          uStack_238 = *(undefined8 *)(lRam000000010b62bc00 + 0x28);
          uStack_248 = 2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_248);
          if (iVar5 != 0) {
            ppppcStack_218 = (char ****)(lRam000000010b62bc00 + 0x30);
            ppppuStack_100 = (undefined8 ****)&pppcStack_288;
            ppppuStack_f8 = (undefined8 ****)&DAT_103925cd0;
            ppppcStack_178 = (char ****)&ppppuStack_100;
            ppppuStack_180 = (undefined8 ****)s__108af809e;
            ppppcStack_f0 = ppppcStack_260;
            ppppuStack_e8 = ppppuStack_258;
            ppppuStack_170 = &ppppcStack_f0;
            ppppuStack_e0 = &ppppcStack_250;
            ppppcStack_1d8 = (char ****)&ppppuStack_180;
            ppppuStack_1d0 = (undefined8 ****)&UNK_10b2d6420;
            ppppcStack_1c8 = (char ****)&ppppuStack_170;
            puStack_1c0 = &UNK_10b2d6c20;
            ppppcStack_1b8 = (char ****)&ppppuStack_e0;
            puStack_1b0 = &UNK_10b2d72e8;
            ppppcStack_228 = (char ****)&ppppcStack_1d8;
            ppppuStack_230 = (char *****)0x1;
            puStack_220 = (undefined *)0x3;
            ppppcStack_a0 = *(char *****)(lVar3 + 0x60);
            puStack_98 = *(undefined **)(lVar3 + 0x68);
            ppppuStack_b8 = *(undefined8 *****)(lVar3 + 0x50);
            ppppcStack_b0 = *(char *****)(lVar3 + 0x58);
            ppppcStack_c0 = (char ****)0x1;
            if ((char *****)ppppuStack_b8 == (char *****)0x0) {
              ppppcStack_c0 = (char ****)0x2;
            }
            uStack_78 = *(undefined8 *)(lVar3 + 8);
            ppppcStack_d8 = (char ****)&ppppuStack_230;
            ppppuStack_d0 = (undefined8 ****)CONCAT71(ppppuStack_d0._1_7_,1);
            ppppcStack_150 = (char ****)&ppppcStack_d8;
            ppppuStack_148 = (undefined8 ****)&DAT_1061c2098;
            puStack_a8 = (undefined *)0x1;
            if ((undefined8 *****)ppppcStack_a0 == (undefined8 *****)0x0) {
              puStack_a8 = (undefined *)0x2;
            }
            uStack_88 = uStack_240;
            uStack_90 = uStack_248;
            uStack_80 = uStack_238;
            ppppuStack_68 = &ppppcStack_150;
            pcStack_70 = s__108b39f4f;
            (**(code **)(puVar1 + 0x20))(puVar2,&ppppcStack_c0);
          }
        }
      }
      pauVar6 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar6[1][0] == '\x01') {
        auVar11 = *pauVar6;
      }
      else {
        auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar6 + 8) = auVar11._8_8_;
        pauVar6[1][0] = 1;
      }
      *(long *)*pauVar6 = auVar11._0_8_ + 1;
      param_1[1] = 0;
      *param_1 = &UNK_108d961a0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined1 (*) [16])(param_1 + 4) = auVar11;
      if (((ulong)ppppcStack_250 & 3) != 1) goto LAB_1038e22a4;
      pppppcVar7 = (char *****)((long)ppppcStack_250 + -1);
      ppppcVar9 = *pppppcVar7;
      puVar10 = *(undefined8 **)((long)ppppcStack_250 + 7);
      if ((code *)*puVar10 != (code *)0x0) {
        (*(code *)*puVar10)(ppppcVar9);
      }
    }
    pppppcVar8 = pppppcVar7;
    if (puVar10[1] != 0) {
      _free(ppppcVar9);
    }
  }
  else {
    func_0x00010395d4a0(&ppppcStack_1d8,ppppcStack_128,ppppcStack_120);
    if ((char *****)ppppcStack_1d8 == (char *****)0x2) {
      uStack_1f8 = uStack_198;
      uStack_200 = uStack_1a0;
      pcStack_1e8 = pcStack_188;
      uStack_1f0 = uStack_190;
      ppppcStack_218 = ppppcStack_1b8;
      puStack_220 = puStack_1c0;
      uStack_208 = uStack_1a8;
      puStack_210 = puStack_1b0;
      ppppcStack_228 = ppppcStack_1c8;
      ppppuStack_230 = ppppuStack_1d0;
      FUN_1038e34cc(param_1,&ppppuStack_230);
      FUN_103938604(&ppppuStack_230);
    }
    else {
      puStack_98 = puStack_1b0;
      ppppcStack_a0 = ppppcStack_1b8;
      uStack_88 = uStack_1a0;
      uStack_90 = uStack_1a8;
      uStack_78 = uStack_190;
      uStack_80 = uStack_198;
      pcStack_70 = pcStack_188;
      ppppuStack_b8 = ppppuStack_1d0;
      ppppcStack_c0 = ppppcStack_1d8;
      puStack_a8 = puStack_1c0;
      ppppcStack_b0 = ppppcStack_1c8;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62bbf8 - 1 < 2 ||
           ((bRam000000010b62bbf8 != 0 &&
            (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (0x10b62bbe8), cVar4 != '\0')))) &&
          (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (lRam000000010b62bbe8), iVar5 != 0)))) {
        lStack_138 = lRam000000010b62bbe8 + 0x30;
        ppppuStack_100 = (undefined8 ****)&pppcStack_278;
        ppppuStack_f8 = (undefined8 ****)&DAT_103925cd0;
        ppppcStack_178 = (char ****)&ppppuStack_100;
        ppppuStack_180 = (undefined8 ****)s__108af809e;
        ppppcStack_f0 = ppppcStack_260;
        ppppuStack_e8 = ppppuStack_258;
        ppppuStack_170 = &ppppcStack_f0;
        ppppuStack_e0 = &ppppcStack_c0;
        ppppcStack_130 = (char ****)&ppppuStack_180;
        ppppcStack_128 = (char ****)&UNK_10b2d6420;
        ppppcStack_120 = (char ****)&ppppuStack_170;
        puStack_118 = &UNK_10b2d6c20;
        ppppcStack_110 = (char ****)&ppppuStack_e0;
        puStack_108 = &UNK_10b2d8650;
        ppppuStack_148 = &ppppcStack_130;
        ppppcStack_150 = (char ****)0x1;
        uStack_140 = 3;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (lRam000000010b62bbe8,&ppppcStack_150);
        lVar3 = lRam000000010b62bbe8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          ppppuStack_d0 = *(undefined8 *****)(lRam000000010b62bbe8 + 0x20);
          uStack_c8 = *(undefined8 *)(lRam000000010b62bbe8 + 0x28);
          ppppcStack_d8 = (char ****)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppcStack_d8);
          if (iVar5 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar3,puVar2,puVar1,&ppppcStack_d8,&ppppcStack_150);
          }
        }
      }
      else {
        lVar3 = lRam000000010b62bbe8;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_160 = *(undefined8 *)(lRam000000010b62bbe8 + 0x20);
          uStack_158 = *(undefined8 *)(lRam000000010b62bbe8 + 0x28);
          uStack_168 = 2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_168);
          if (iVar5 != 0) {
            lStack_138 = lRam000000010b62bbe8 + 0x30;
            ppppcStack_f0 = &pppcStack_278;
            ppppuStack_e8 = (undefined8 ****)&DAT_103925cd0;
            ppppuStack_f8 = &ppppcStack_f0;
            ppppuStack_100 = (undefined8 ****)s__108af809e;
            ppppcStack_d8 = ppppcStack_260;
            ppppuStack_d0 = ppppuStack_258;
            ppppuStack_e0 = &ppppcStack_d8;
            ppppuStack_180 = &ppppcStack_c0;
            ppppcStack_130 = (char ****)&ppppuStack_100;
            ppppcStack_128 = (char ****)&UNK_10b2d6420;
            ppppcStack_120 = (char ****)&ppppuStack_e0;
            puStack_118 = &UNK_10b2d6c20;
            ppppcStack_110 = (char ****)&ppppuStack_180;
            puStack_108 = &UNK_10b2d8650;
            ppppuStack_148 = &ppppcStack_130;
            ppppcStack_150 = (char ****)0x1;
            uStack_140 = 3;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar3,puVar2,puVar1,&uStack_168,&ppppcStack_150);
          }
        }
      }
      pauVar6 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar6[1][0] == '\x01') {
        auVar11 = *pauVar6;
      }
      else {
        auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar6 + 8) = auVar11._8_8_;
        pauVar6[1][0] = 1;
      }
      *(long *)*pauVar6 = auVar11._0_8_ + 1;
      param_1[1] = 0;
      *param_1 = &UNK_108d961a0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined1 (*) [16])(param_1 + 4) = auVar11;
      func_0x000103938e08(&ppppcStack_c0);
    }
    if ((undefined8 *****)ppppcVar9 == (undefined8 *****)0x0) goto LAB_1038e22a4;
  }
  _free(pppppcVar8);
LAB_1038e22a4:
  if (lStack_268 != 0) {
    _free(ppppcStack_260);
  }
  return;
}

