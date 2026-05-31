
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10171d6c8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint extraout_w1;
  undefined1 uVar10;
  long *unaff_x21;
  long lVar11;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  char *pcStack_270;
  undefined8 **ppuStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  long *plStack_240;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined ***pppuStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  char *pcStack_158;
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 ***pppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  
  bVar3 = *(byte *)(param_1 + 0x164);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      func_0x000108a07af4(&UNK_10b256878);
      *(undefined1 *)(param_1 + 0x164) = 2;
      uVar7 = __Unwind_Resume();
      if (*(char *)(param_1 + 0x163) == '\x03') {
        FUN_101758de4(param_1 + 3);
      }
      *(undefined1 *)(param_1 + 0x164) = 2;
      __Unwind_Resume(uVar7);
      uVar7 = func_0x000108a07bc4();
      plStack_240 = &lStack_1a8;
      uVar8 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN11codex_login4auth7manager29request_chatgpt_token_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h017f6bf9c54897cdE
                         ,uVar7);
      lVar11 = 
      ___ZN11codex_login4auth7manager29request_chatgpt_token_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h017f6bf9c54897cdE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
        uStack_2d0 = *(undefined8 *)
                      (
                      ___ZN11codex_login4auth7manager29request_chatgpt_token_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h017f6bf9c54897cdE
                      + 0x20);
        uStack_2c8 = *(undefined8 *)
                      (
                      ___ZN11codex_login4auth7manager29request_chatgpt_token_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h017f6bf9c54897cdE
                      + 0x28);
        uStack_2d8 = 1;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        uVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_2d8);
        if ((int)uVar8 != 0) {
          lStack_2a0 = *(long *)(lVar11 + 0x60);
          uStack_298 = *(undefined8 *)(lVar11 + 0x68);
          lStack_2b8 = *(long *)(lVar11 + 0x50);
          uStack_2b0 = *(undefined8 *)(lVar11 + 0x58);
          uStack_2c0 = 1;
          if (lStack_2b8 == 0) {
            uStack_2c0 = 2;
          }
          uStack_278 = *(undefined4 *)(lVar11 + 8);
          uStack_274 = *(undefined4 *)(lVar11 + 0xc);
          uStack_258 = 1;
          puStack_250 = &uStack_260;
          puStack_248 = &DAT_1061c2098;
          uStack_2a8 = 1;
          if (lStack_2a0 == 0) {
            uStack_2a8 = 2;
          }
          uStack_288 = uStack_2d0;
          uStack_290 = uStack_2d8;
          uStack_280 = uStack_2c8;
          ppuStack_268 = &puStack_250;
          pcStack_270 = s__108b39f4f;
          uStack_260 = uVar7;
          uVar8 = (**(code **)(puVar1 + 0x20))(puVar2,&uStack_2c0);
        }
      }
      return uVar8;
    }
    param_1[1] = *param_1;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
      unaff_x21 = (long *)&
                          __ZN11codex_login4auth7manager11AuthManager6reload28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c0095ec901d09b9E
      ;
      uVar9 = (uint)bRam000000010b62d5e0;
      if (1 < bRam000000010b62d5e0 - 1) goto LAB_10171d834;
      goto LAB_10171d734;
    }
LAB_10171d838:
    lVar11 = 
    ___ZN11codex_login4auth7manager11AuthManager6reload28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c0095ec901d09b9E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_1f8 = *(undefined8 *)
                    (
                    ___ZN11codex_login4auth7manager11AuthManager6reload28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c0095ec901d09b9E
                    + 0x20);
      uStack_1f0 = *(undefined8 *)
                    (
                    ___ZN11codex_login4auth7manager11AuthManager6reload28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c0095ec901d09b9E
                    + 0x28);
      uStack_200 = 3;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_200);
      if (iVar5 != 0) {
        lStack_1d0 = ___ZN11codex_login4auth7manager11AuthManager6reload28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c0095ec901d09b9E
                     + 0x30;
        puStack_1b8 = &UNK_108ce015d;
        uStack_1b0 = 0x1d;
        ppuStack_1c8 = &puStack_1b8;
        puStack_1c0 = &UNK_10b256738;
        pppuStack_1e0 = &ppuStack_1c8;
        ppuStack_1e8 = (undefined8 ***)0x1;
        uStack_1d8 = 1;
        lStack_188 = *(long *)(lVar11 + 0x60);
        uStack_180 = *(undefined8 *)(lVar11 + 0x68);
        pppuStack_1a0 = *(undefined8 ****)(lVar11 + 0x50);
        uStack_198 = *(undefined8 *)(lVar11 + 0x58);
        lStack_1a8 = 1;
        if ((undefined8 ****)pppuStack_1a0 == (undefined8 ****)0x0) {
          lStack_1a8 = 2;
        }
        uStack_160 = *(undefined4 *)(lVar11 + 8);
        uStack_15c = *(undefined4 *)(lVar11 + 0xc);
        pppuStack_70 = &ppuStack_1e8;
        puStack_68 = (undefined *)CONCAT71(puStack_68._1_7_,1);
        pppuStack_60 = &pppuStack_70;
        puStack_58 = &DAT_1061c2098;
        lStack_190 = 1;
        if (lStack_188 == 0) {
          lStack_190 = 2;
        }
        uStack_170 = uStack_1f8;
        uStack_178 = uStack_200;
        uStack_168 = uStack_1f0;
        pppuStack_150 = &pppuStack_60;
        pcStack_158 = s__108b39f4f;
        (**(code **)(puVar1 + 0x20))(puVar2,&lStack_1a8);
      }
    }
  }
  else {
    if (bVar3 == 3) goto LAB_10171d980;
    func_0x000108a07b10(&UNK_10b256878);
    uVar9 = extraout_w1;
LAB_10171d834:
    if ((uVar9 == 0) ||
       (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                          (&
                           __ZN11codex_login4auth7manager11AuthManager6reload28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9c0095ec901d09b9E
                          ), cVar4 == '\0')) goto LAB_10171d838;
LAB_10171d734:
    uVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(*unaff_x21);
    if ((uVar6 & 1) == 0) goto LAB_10171d838;
    lStack_190 = *unaff_x21 + 0x30;
    pppuStack_60 = (undefined8 ***)&UNK_108ce015d;
    puStack_58 = (undefined *)0x1d;
    pppuStack_70 = &pppuStack_60;
    puStack_68 = &UNK_10b256738;
    pppuStack_1a0 = &pppuStack_70;
    lStack_1a8 = 1;
    uStack_198 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(*unaff_x21,&lStack_1a8);
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      lVar11 = *unaff_x21;
      pppuStack_1e0 = *(undefined ****)(lVar11 + 0x20);
      uStack_1d8 = *(undefined8 *)(lVar11 + 0x28);
      ppuStack_1e8 = (undefined8 ***)0x3;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&ppuStack_1e8);
      if (iVar5 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar11,puVar2,puVar1,&ppuStack_1e8,&lStack_1a8);
      }
    }
  }
  param_1[2] = param_1[1];
  *(undefined1 *)(param_1 + 0x163) = 0;
LAB_10171d980:
  FUN_10171934c(&lStack_1a8,param_1 + 2,param_2);
  if (lStack_1a8 == -0x7ffffffffffffffc) {
    uVar7 = 2;
    uVar10 = 3;
  }
  else {
    uStack_a8 = uStack_140;
    uStack_b0 = uStack_148;
    uStack_98 = uStack_130;
    uStack_a0 = uStack_138;
    uStack_88 = uStack_120;
    uStack_90 = uStack_128;
    uStack_c8 = CONCAT44(uStack_15c,uStack_160);
    uStack_e8 = uStack_180;
    lStack_f0 = lStack_188;
    uStack_d8 = uStack_170;
    uStack_e0 = uStack_178;
    uStack_80 = uStack_118;
    uStack_d0 = uStack_168;
    pppuStack_b8 = pppuStack_150;
    pcStack_c0 = pcStack_158;
    pppuStack_108 = pppuStack_1a0;
    lStack_110 = lStack_1a8;
    lStack_f8 = lStack_190;
    uStack_100 = uStack_198;
    if (*(char *)(param_1 + 0x163) == '\x03') {
      FUN_101758de4(param_1 + 3);
    }
    uVar7 = __ZN11codex_login4auth7manager11AuthManager15set_cached_auth17hc05d8eeaf2b9240eE
                      (param_1[1],&lStack_110);
    uVar10 = 1;
  }
  *(undefined1 *)(param_1 + 0x164) = uVar10;
  return uVar7;
}

