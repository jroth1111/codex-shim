
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101620884(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *****pppppuVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  undefined8 ******ppppppuVar13;
  long **pplVar14;
  long ***ppplVar15;
  undefined1 uVar16;
  undefined8 ******extraout_x8;
  ulong uVar17;
  long *plVar18;
  code *pcVar19;
  undefined8 ******extraout_x9;
  undefined1 auVar20 [8];
  int unaff_w21;
  uint uVar21;
  long lVar22;
  long lVar23;
  undefined8 *****pppppuVar24;
  undefined8 *****pppppuVar25;
  long **unaff_x23;
  long ******pppppplVar26;
  undefined8 ****ppppuVar27;
  long *unaff_x24;
  undefined8 *puVar28;
  undefined8 ******unaff_x25;
  long **pplVar29;
  long **pplVar30;
  long **pplVar31;
  ulong in_xzr;
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined8 *puStack_870;
  long ***ppplStack_858;
  undefined *puStack_850;
  undefined8 *****pppppuStack_848;
  long **pplStack_840;
  long **pplStack_838;
  long ***ppplStack_830;
  undefined *puStack_828;
  undefined8 *****pppppuStack_820;
  undefined8 *****pppppuStack_818;
  undefined1 auStack_810 [16];
  long lStack_800;
  long lStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  long lStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  long lStack_798;
  long lStack_790;
  long *****ppppplStack_788;
  long ****pppplStack_780;
  undefined8 uStack_778;
  long lStack_770;
  undefined1 auStack_570 [8];
  long **pplStack_568;
  long **pplStack_560;
  long **pplStack_558;
  long **pplStack_550;
  long **pplStack_548;
  undefined8 *****pppppuStack_540;
  long **pplStack_538;
  long **pplStack_530;
  long **pplStack_528;
  long **pplStack_520;
  long *****ppppplStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_500 [424];
  undefined8 *****pppppuStack_358;
  undefined1 auStack_350 [16];
  long **pplStack_340;
  long **pplStack_338;
  long **pplStack_330;
  long **pplStack_328;
  undefined8 *****pppppuStack_320;
  undefined1 uStack_1b8;
  undefined8 *****pppppuStack_1b0;
  undefined1 auStack_1a8 [16];
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 auStack_120 [16];
  long **pplStack_110;
  long **pplStack_108;
  long **pplStack_100;
  long **pplStack_f8;
  undefined8 *****pppppuStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  long **pplStack_d8;
  long **pplStack_d0;
  long *****ppppplStack_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  bVar11 = *(byte *)((long)param_2 + 0x2f9);
  if (bVar11 < 2) {
    if (bVar11 != 0) {
      func_0x000108a07af4(&UNK_10b24fa30);
LAB_101621670:
      func_0x0001087c9084(1,0x80);
      goto LAB_10162173c;
    }
    param_2[0x10] = param_2[3];
    param_2[0xf] = param_2[2];
    param_2[0x12] = param_2[5];
    param_2[0x11] = param_2[4];
    param_2[0x14] = param_2[7];
    param_2[0x13] = param_2[6];
    *(undefined1 *)((long)param_2 + 0x2fb) = 0;
    param_2[0xe] = param_2[1];
    param_2[0xd] = *param_2;
    unaff_x24 = (long *)param_2[9];
    unaff_w21 = *(int *)(param_2 + 10);
    unaff_x25 = (undefined8 ******)param_2[0xb];
    param_2[0x15] = param_2[8];
    param_2[0x16] = param_2[0xc];
    *(undefined1 *)((long)param_2 + 0x2fa) = *(undefined1 *)(param_2 + 0x5f);
    ppppppuVar13 = (undefined8 ******)_malloc(0x80);
    if (ppppppuVar13 == (undefined8 ******)0x0) goto LAB_101621670;
    auStack_570 = (undefined1  [8])0x80;
    pplStack_560 = (long **)0x0;
    ppppplStack_788 = (long *****)auStack_570;
    pplStack_568 = (long **)ppppppuVar13;
    FUN_100683ae4(param_2 + 0xd,&ppppplStack_788);
    ppppppuVar13 = (undefined8 ******)pplStack_568;
    auVar20 = auStack_570;
    if (auStack_570 != (undefined1  [8])0x8000000000000000) goto LAB_1016209bc;
    pppppuStack_358 = (undefined8 *****)pplStack_568;
    ppppplStack_788 = (long *****)&pppppuStack_358;
    pppplStack_780 =
         (long ****)
         __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (auStack_570,s__failed_to_encode_websocket_requ_108ad9817,&ppppplStack_788);
    pppppuVar8 = pppppuStack_358;
    auStack_1a8._0_8_ = pplStack_568;
    pppppuStack_1b0 = (undefined8 *****)auStack_570;
    auStack_1a8._8_8_ = pplStack_560;
    if ((undefined8 *****)*pppppuStack_358 == (undefined8 *****)0x1) {
      pppppuVar25 = (undefined8 *****)pppppuStack_358[1];
      if (((ulong)pppppuVar25 & 3) == 1) {
        pppppuVar24 = (undefined8 *****)((long)pppppuVar25 + -1);
        ppppuVar27 = *pppppuVar24;
        puVar28 = *(undefined8 **)((long)pppppuVar25 + 7);
        pcVar19 = (code *)*puVar28;
        if (pcVar19 != (code *)0x0) {
          (*pcVar19)(ppppuVar27);
        }
        if (puVar28[1] != 0) {
          _free(ppppuVar27);
        }
        goto LAB_10162099c;
      }
    }
    else if (((undefined8 *****)*pppppuStack_358 == (undefined8 *****)0x0) &&
            ((undefined8 *****)pppppuStack_358[2] != (undefined8 *****)0x0)) {
      pppppuVar24 = (undefined8 *****)pppppuStack_358[1];
LAB_10162099c:
      _free(pppppuVar24);
    }
    _free(pppppuVar8);
    lVar22 = 9;
LAB_101621564:
    *(undefined1 *)((long)param_2 + 0x2fb) = 0;
    FUN_100de6690(param_2 + 0xd);
  }
  else {
    if (bVar11 != 3) {
      func_0x000108a07b10(&UNK_10b24fa30);
      ppppppuVar13 = extraout_x8;
      auVar20 = (undefined1  [8])extraout_x9;
LAB_1016209bc:
      pppppplVar26 = (long ******)(param_2 + 0x17);
      *pppppplVar26 = (long *****)auVar20;
      *(undefined1 *)((long)param_2 + 0x2fb) = 1;
      param_2[0x18] = ppppppuVar13;
      param_2[0x19] = pplStack_560;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b626fd0 - 1 < 2 ||
           ((bRam000000010b626fd0 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN9codex_api8endpoint19responses_websocket22send_websocket_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd69fd00671a2a97fE
                                ), cVar10 != '\0')))) &&
          (uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN9codex_api8endpoint19responses_websocket22send_websocket_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd69fd00671a2a97fE
                              ), (uVar17 & 1) != 0)))) {
        lStack_770 = ___ZN9codex_api8endpoint19responses_websocket22send_websocket_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd69fd00671a2a97fE
                     + 0x30;
        auStack_b0._8_8_ = &DAT_10112965c;
        puStack_828 = auStack_b0;
        ppplStack_830 = (long ***)s_websocket_request__108ad9801;
        ppplStack_858 = (long ***)&ppplStack_830;
        puStack_850 = &UNK_10b208fd0;
        pppplStack_780 = &ppplStack_858;
        ppppplStack_788 = (long *****)0x1;
        uStack_778 = 1;
        auStack_b0._0_8_ = pppppplVar26;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN9codex_api8endpoint19responses_websocket22send_websocket_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd69fd00671a2a97fE
                   ,&ppppplStack_788);
        lVar22 = 
        ___ZN9codex_api8endpoint19responses_websocket22send_websocket_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd69fd00671a2a97fE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          auStack_350._0_8_ =
               *(undefined8 *)
                (
                ___ZN9codex_api8endpoint19responses_websocket22send_websocket_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd69fd00671a2a97fE
                + 0x20);
          auStack_350._8_8_ =
               *(ulong *)(
                         ___ZN9codex_api8endpoint19responses_websocket22send_websocket_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd69fd00671a2a97fE
                         + 0x28);
          pppppuStack_358 = (undefined8 ******)0x5;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar3 + 0x18))(puVar4,&pppppuStack_358);
          if (iVar12 != 0) {
            pplStack_550 = *(long ***)(lVar22 + 0x60);
            pplStack_548 = *(long ***)(lVar22 + 0x68);
            pplStack_568 = *(long ***)(lVar22 + 0x50);
            pplStack_560 = *(long ***)(lVar22 + 0x58);
            auStack_570 = (undefined1  [8])0x1;
            if ((undefined8 ******)pplStack_568 == (undefined8 ******)0x0) {
              auStack_570 = (undefined1  [8])0x2;
            }
            pplStack_528 = *(long ***)(lVar22 + 8);
            auStack_120._0_8_ = &ppppplStack_788;
            auStack_120[8] = 1;
            pppppuStack_820 = (undefined8 *****)auStack_120;
            pppppuStack_818 = (undefined8 *****)&DAT_1061c2098;
            pplStack_558 = (long **)0x1;
            if (pplStack_550 == (long **)0x0) {
              pplStack_558 = (long **)0x2;
            }
            pplStack_538 = (long **)auStack_350._0_8_;
            pppppuStack_540 = pppppuStack_358;
            pplStack_530 = (long **)auStack_350._8_8_;
            ppppplStack_518 = (long *****)&pppppuStack_820;
            pplStack_520 = (long **)s__108b39f4f;
            (**(code **)(puVar3 + 0x20))(puVar4,auStack_570);
          }
        }
      }
      else {
        lVar22 = 
        ___ZN9codex_api8endpoint19responses_websocket22send_websocket_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd69fd00671a2a97fE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pplStack_840 = *(long ***)
                          (
                          ___ZN9codex_api8endpoint19responses_websocket22send_websocket_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd69fd00671a2a97fE
                          + 0x20);
          pplStack_838 = *(long ***)
                          (
                          ___ZN9codex_api8endpoint19responses_websocket22send_websocket_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd69fd00671a2a97fE
                          + 0x28);
          pppppuStack_848 = (undefined8 ******)0x5;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar3 + 0x18))(puVar4,&pppppuStack_848);
          if (iVar12 != 0) {
            lStack_770 = ___ZN9codex_api8endpoint19responses_websocket22send_websocket_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd69fd00671a2a97fE
                         + 0x30;
            auStack_120._8_8_ = &DAT_10112965c;
            auStack_b0._8_8_ = auStack_120;
            auStack_b0._0_8_ = s_websocket_request__108ad9801;
            ppplStack_830 = (long ***)auStack_b0;
            puStack_828 = &UNK_10b208fd0;
            pppplStack_780 = &ppplStack_830;
            ppppplStack_788 = (long *****)0x1;
            uStack_778 = 1;
            pplStack_538 = pplStack_840;
            pppppuStack_540 = pppppuStack_848;
            pplStack_530 = pplStack_838;
            pplStack_550 = *(long ***)(lVar22 + 0x60);
            pplStack_548 = *(long ***)(lVar22 + 0x68);
            pplStack_568 = *(long ***)(lVar22 + 0x50);
            pplStack_560 = *(long ***)(lVar22 + 0x58);
            auStack_570 = (undefined1  [8])0x1;
            if ((undefined8 ******)pplStack_568 == (undefined8 ******)0x0) {
              auStack_570 = (undefined1  [8])0x2;
            }
            pplStack_528 = *(long ***)(lVar22 + 8);
            pppppuStack_820 = &ppppplStack_788;
            pppppuStack_818 = (undefined8 *****)CONCAT71(pppppuStack_818._1_7_,1);
            pppppuStack_358 = &pppppuStack_820;
            auStack_350._0_8_ = &DAT_1061c2098;
            pplStack_558 = (long **)0x1;
            if (pplStack_550 == (long **)0x0) {
              pplStack_558 = (long **)0x2;
            }
            ppppplStack_518 = (long *****)&pppppuStack_358;
            pplStack_520 = (long **)s__108b39f4f;
            auStack_120._0_8_ = pppppplVar26;
            (**(code **)(puVar3 + 0x20))(puVar4,auStack_570);
          }
        }
      }
      auVar33 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
      *(undefined1 (*) [12])(param_2 + 0x1a) = auVar33;
      *(undefined1 *)((long)param_2 + 0x2fb) = 0;
      unaff_x23 = (long **)param_2[0x17];
      pplVar30 = (long **)param_2[0x18];
      pplVar29 = (long **)param_2[0x19];
      if (pplVar29 == unaff_x23) {
        if (unaff_x23 == (long **)0x0) {
          pplVar14 = (long **)0x0;
          auStack_350._0_8_ = &UNK_10b205a90;
          pplVar30 = (long **)0x1;
        }
        else if (((ulong)pplVar30 & 1) == 0) {
          auStack_350._0_8_ = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
          pplVar14 = (long **)((ulong)pplVar30 | 1);
        }
        else {
          auStack_350._0_8_ = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
          pplVar14 = pplVar30;
        }
      }
      else {
        pplVar14 = (long **)_malloc(0x18);
        if (pplVar14 == (long **)0x0) {
          func_0x0001087c906c(8,0x18);
          goto LAB_10162173c;
        }
        *pplVar14 = (long *)pplVar30;
        pplVar14[1] = (long *)unaff_x23;
        pplVar14[2] = (long *)0x1;
        auStack_350._0_8_ = &UNK_10b205b08;
      }
      pppppuStack_358 = (undefined8 ******)0x0;
      uStack_1b8 = 0;
      auStack_350._8_8_ = pplVar30;
      pplStack_340 = pplVar29;
      pplStack_338 = pplVar14;
      pppppuStack_320 = unaff_x25;
      auVar33 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
      ppppppuVar13 = (undefined8 ******)(auVar33._0_8_ + (long)unaff_x24);
      if ((long)unaff_x24 < 0 == SCARRY8(auVar33._0_8_,(long)unaff_x24)) {
        unaff_x23 = (long **)0x3b9aca00;
        uVar21 = auVar33._8_4_ + unaff_w21;
        if ((999999999 < uVar21) &&
           ((bVar9 = SCARRY8((long)ppppppuVar13,1),
            ppppppuVar13 = (undefined8 ******)((long)ppppppuVar13 + 1), bVar9 ||
            (uVar21 = uVar21 + 0xc4653600, uVar21 == 1000000000)))) goto LAB_101620de8;
        auVar32 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b24fa18);
        lVar22 = 0x140;
        if ((auVar32._0_8_ & 1) == 0) {
          lVar22 = 0x200;
        }
        auStack_b0 = auVar32;
        if (*(int *)(auVar32._8_8_ + lVar22 + 0xd8) == 1000000000) {
          func_0x000108a079f0(&UNK_109bebb98,0x73,&UNK_10b24fa18);
          goto LAB_10162173c;
        }
        pplStack_110 = (long **)0x0;
        uStack_b8 = 0;
        ppppplStack_c8 = (long *****)ppppppuVar13;
        uStack_c0 = uVar21;
      }
      else {
LAB_101620de8:
        __ZN5tokio4time5sleep5Sleep10far_future17h6fe06e7f826507d5E(auStack_120,0);
        auVar32._8_8_ = auStack_120._8_8_;
        auVar32._0_8_ = auStack_120._0_8_;
      }
      auStack_120 = auVar32;
      _memcpy(auStack_500,&pppppuStack_358,0x1a8);
      pplStack_528 = pplStack_d8;
      pplStack_530 = pplStack_e0;
      ppppplStack_518 = ppppplStack_c8;
      pplStack_520 = pplStack_d0;
      uStack_508 = CONCAT71(uStack_b7,uStack_b8);
      uStack_510 = CONCAT44(uStack_bc,uStack_c0);
      pplStack_558 = pplStack_108;
      pplStack_560 = pplStack_110;
      pplStack_548 = pplStack_f8;
      pplStack_550 = pplStack_100;
      pplStack_538 = pplStack_e8;
      pppppuStack_540 = pppppuStack_f0;
      _auStack_570 = auStack_120;
      _memcpy(&ppppplStack_788,auStack_570,0x218);
      _memcpy(param_2 + 0x1c,&ppppplStack_788,0x218);
    }
    lVar22 = (*
             ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
             )();
    bVar11 = *(byte *)(lVar22 + 0x48);
    pplVar30 = (long **)(ulong)bVar11;
    if (bVar11 == 1) {
LAB_101620ed4:
      pplVar30 = (long **)(ulong)((uint)(*(char *)(lVar22 + 0x45) != '\0') |
                                 (*(byte *)(lVar22 + 0x44) ^ 0xffffffff) & 1);
    }
    else if (bVar11 != 2) {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar22,&DAT_100c35d48);
      *(undefined1 *)(lVar22 + 0x48) = 1;
      goto LAB_101620ed4;
    }
    bVar11 = *(byte *)(param_2 + 0x5e);
    if (bVar11 < 2) {
      if (bVar11 != 0) {
        func_0x000108a07af4(&UNK_10b24fbb8);
        goto LAB_10162173c;
      }
      param_2[0x33] = param_2[0x2b];
      param_2[0x32] = param_2[0x2a];
      param_2[0x35] = param_2[0x2d];
      param_2[0x34] = param_2[0x2c];
      param_2[0x37] = param_2[0x2f];
      param_2[0x36] = param_2[0x2e];
      plVar18 = (long *)param_2[0x31];
      param_2[0x38] = param_2[0x30];
      param_2[0x39] = plVar18;
      *(undefined1 *)(param_2 + 0x3a) = 0;
LAB_101620f78:
      *(undefined2 *)((long)param_2 + 0x1d1) = 0;
      *(undefined1 *)((long)param_2 + 0x1d3) = 1;
      auStack_b0._8_8_ = param_2[0x33];
      auStack_b0._0_8_ = param_2[0x32];
      uStack_98 = param_2[0x35];
      uStack_a0 = param_2[0x34];
      uStack_88 = param_2[0x37];
      uStack_90 = param_2[0x36];
      uStack_80 = param_2[0x38];
      pplStack_568 = (long **)0x1;
      auStack_570 = (undefined1  [8])0x1;
      pplStack_560 = (long **)0x16;
      pplStack_520 = (long **)0x0;
      ppplVar15 = (long ***)_malloc(0x58);
      if (ppplVar15 == (long ***)0x0) {
        func_0x0001087c906c(8,0x58);
        goto LAB_10162173c;
      }
      ppplVar15[5] = pplStack_548;
      ppplVar15[4] = pplStack_550;
      ppplVar15[7] = pplStack_538;
      ppplVar15[6] = (long **)pppppuStack_540;
      ppplVar15[9] = pplStack_528;
      ppplVar15[8] = pplStack_530;
      ppplVar15[10] = pplStack_520;
      ppplVar15[1] = pplStack_568;
      *ppplVar15 = (long **)auStack_570;
      ppplVar15[3] = pplStack_558;
      ppplVar15[2] = pplStack_560;
      pplVar29 = *ppplVar15;
      *ppplVar15 = (long **)((long)pplVar29 + 1);
      if ((long)pplVar29 < 0) goto LAB_10162173c;
      *(undefined1 *)((long)param_2 + 0x1d1) = 1;
      param_2[0x3b] = ppplVar15;
      *(undefined2 *)((long)param_2 + 0x1d2) = 0;
      param_2[0x3d] = param_2[0x33];
      param_2[0x3c] = param_2[0x32];
      param_2[0x3f] = param_2[0x35];
      param_2[0x3e] = param_2[0x34];
      param_2[0x41] = param_2[0x37];
      param_2[0x40] = param_2[0x36];
      param_2[0x42] = param_2[0x38];
      param_2[0x43] = ppplVar15;
      param_2[0x44] = plVar18;
      *(undefined1 *)(param_2 + 0x5d) = 0;
      ppplStack_830 = ppplVar15;
LAB_101621028:
      *(undefined1 *)((long)param_2 + 0x2e9) = 1;
      param_2[0x46] = param_2[0x3d];
      param_2[0x45] = param_2[0x3c];
      param_2[0x48] = param_2[0x3f];
      param_2[0x47] = param_2[0x3e];
      param_2[0x4a] = param_2[0x41];
      param_2[0x49] = param_2[0x40];
      param_2[0x4c] = param_2[0x43];
      param_2[0x4b] = param_2[0x42];
      param_2[0x4d] = plVar18;
      *(undefined1 *)(param_2 + 0x5c) = 0;
LAB_10162105c:
      param_2[0x4e] = plVar18;
      param_2[0x4f] = plVar18;
      uVar17 = 1;
      param_2[0x50] = 1;
      *(undefined1 *)(param_2 + 0x53) = 0;
      param_2[0x51] = plVar18;
      param_2[0x52] = 1;
      lVar22 = *plVar18;
      if (*(long *)(lVar22 + 0x1e8) == 0) {
LAB_101621094:
        *(undefined1 *)(param_2 + 0x53) = 1;
LAB_1016211b4:
        pplVar29 = (long **)(param_2 + 0x53);
        *(undefined1 *)(param_2 + 0x5c) = 1;
        ppppppuVar13 = (undefined8 ******)param_2[0x45];
        auStack_120 = *(undefined1 (*) [16])(param_2 + 0x46);
        pplStack_108 = (long **)param_2[0x49];
        pplStack_110 = (long **)param_2[0x48];
        pplStack_f8 = (long **)param_2[0x4b];
        pplStack_100 = (long **)param_2[0x4a];
        pppppuStack_f0 = (undefined8 *****)param_2[0x4c];
        *(undefined2 *)(param_2 + 0x5d) = 1;
        if (ppppppuVar13 != (undefined8 ******)0x7) {
LAB_10162127c:
          pplVar14 = (long **)(param_2 + 0x3c);
          pplStack_338 = pplStack_108;
          pplStack_340 = pplStack_110;
          pplStack_328 = pplStack_f8;
          pplStack_330 = pplStack_100;
          pppppuStack_320 = pppppuStack_f0;
          pppppuStack_358 = ppppppuVar13;
          auStack_350 = auStack_120;
          FUN_100d48544(pplVar14);
          if (ppppppuVar13 == (undefined8 ******)0x6) {
            *(undefined1 *)((long)param_2 + 0x1d1) = 0;
            unaff_x23 = pplVar14;
            unaff_x24 = (long *)pplVar29;
            goto LAB_1016212b4;
          }
          func_0x000100e2fcd8(&pppppuStack_358);
          FUN_100cf4538(param_2 + 0x3b);
          auVar7 = _auStack_570;
          goto LAB_101621388;
        }
      }
      else {
LAB_10162112c:
        pplStack_568 = (long **)0x0;
        pplStack_560 = (long **)0x0;
        param_2[0x54] = lVar22 + 0x1c0;
        param_2[0x55] = 0;
        param_2[0x58] = 0;
        param_2[0x57] = 0;
        param_2[0x56] = auStack_570;
        param_2[0x59] = uVar17;
        param_2[0x5a] = uVar17;
        *(undefined1 *)(param_2 + 0x5b) = 0;
LAB_101621158:
        puStack_870 = param_2 + 0x5c;
        bVar11 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                           (param_2 + 0x54,param_3);
        if (bVar11 != 2) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_2 + 0x54);
          if (param_2[0x55] != 0) {
            (**(code **)(param_2[0x55] + 0x18))(param_2[0x56]);
          }
          *(undefined1 *)(param_2 + 0x53) = 1;
          if ((bVar11 & 1) != 0) goto LAB_1016211b4;
          pplVar29 = (long **)param_2[0x4e];
          *(undefined1 *)(param_2 + 0x5c) = 1;
          *(undefined1 *)((long)param_2 + 0x2e9) = 0;
          pplStack_568 = (long **)param_2[0x46];
          auStack_570 = (undefined1  [8])param_2[0x45];
          pplStack_558 = (long **)param_2[0x48];
          pplStack_560 = (long **)param_2[0x47];
          pplStack_548 = (long **)param_2[0x4a];
          pplStack_550 = (long **)param_2[0x49];
          pplStack_538 = (long **)param_2[0x4c];
          pppppuStack_540 = (undefined8 *****)param_2[0x4b];
          lVar23 = (long)*pplVar29;
          LOAcquire();
          uVar17 = *(ulong *)(lVar23 + 0x88);
          *(ulong *)(lVar23 + 0x88) = uVar17 + 1;
          lVar22 = FUN_100fca340(lVar23 + 0x80,uVar17);
          puVar28 = (undefined8 *)(lVar22 + (uVar17 & 0x1f) * 0x40);
          puVar28[5] = pplStack_548;
          puVar28[4] = pplStack_550;
          puVar28[7] = pplStack_538;
          puVar28[6] = pppppuStack_540;
          puVar28[1] = pplStack_568;
          *puVar28 = auStack_570;
          puVar28[3] = pplStack_558;
          puVar28[2] = pplStack_560;
          *(ulong *)(lVar22 + 0x810) = *(ulong *)(lVar22 + 0x810) | 1L << (uVar17 & 0x1f);
          LORelease();
          puVar1 = (ulong *)(lVar23 + 0x110);
          LOAcquire();
          uVar17 = *puVar1;
          *puVar1 = uVar17 | 2;
          LORelease();
          if (uVar17 == 0) {
            lVar22 = *(long *)(lVar23 + 0x100);
            *(undefined8 *)(lVar23 + 0x100) = 0;
            *puVar1 = in_xzr;
            LORelease();
            if (lVar22 != 0) {
              (**(code **)(lVar22 + 8))(*(undefined8 *)(lVar23 + 0x108));
            }
          }
          *(undefined2 *)(param_2 + 0x5d) = 1;
          ppppppuVar13 = (undefined8 ******)0x6;
          goto LAB_10162127c;
        }
        *(undefined1 *)(param_2 + 0x53) = 4;
        *(undefined1 *)puStack_870 = 3;
        *(undefined1 *)(param_2 + 0x5d) = 3;
      }
      unaff_x24 = param_2 + 0x53;
      uVar16 = 3;
      pplVar14 = (long **)(param_2 + 0x3c);
LAB_1016212d4:
      *(undefined1 *)(param_2 + 0x3a) = uVar16;
      *(undefined1 *)(param_2 + 0x5e) = 3;
      uVar17 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                         ((uint)((uint)pplVar30 == 2) | (uint)pplVar30 & 1,param_2 + 0x1c,param_3);
      if ((uVar17 & 1) != 0) {
        *param_1 = 0x13;
        uVar16 = 3;
        goto LAB_1016215b0;
      }
      if (*(char *)(param_2 + 0x5e) == '\x03') {
        FUN_100da19a4(param_2 + 0x32);
      }
      else if ((*(char *)(param_2 + 0x5e) == '\0') &&
              ((param_2[0x2a] != 4 || (*(short *)(param_2 + 0x2f) != 0x12)))) {
        (**(code **)(param_2[0x2b] + 0x20))(param_2 + 0x2e,param_2[0x2c],param_2[0x2d]);
      }
      auVar6._8_8_ = unaff_x24;
      auVar6._0_8_ = 0x16;
      pplVar31 = pplVar30;
    }
    else {
      if (bVar11 != 3) {
        func_0x000108a07b10(&UNK_10b24fbb8);
        goto LAB_10162173c;
      }
      bVar11 = *(byte *)(param_2 + 0x3a);
      if (bVar11 < 3) {
        if (bVar11 != 0) {
          if (bVar11 == 1) {
            func_0x000108a07af4(&UNK_10b24fbd0);
          }
          else {
            func_0x000108a07b10(&UNK_10b24fbd0);
          }
          goto LAB_10162173c;
        }
        plVar18 = (long *)param_2[0x39];
        goto LAB_101620f78;
      }
      if (bVar11 == 3) {
        bVar11 = *(byte *)(param_2 + 0x5d);
        if (bVar11 < 2) {
          if (bVar11 != 0) {
            func_0x000108a07af4(&UNK_10b23a730);
            goto LAB_10162173c;
          }
          plVar18 = (long *)param_2[0x44];
          goto LAB_101621028;
        }
        if (bVar11 != 3) {
          func_0x000108a07b10(&UNK_10b23a730);
          goto LAB_10162173c;
        }
        bVar11 = *(byte *)(param_2 + 0x5c);
        if (bVar11 < 2) {
          if (bVar11 != 0) {
            func_0x000108a07af4(&UNK_10b23a748);
            goto LAB_10162173c;
          }
          plVar18 = (long *)param_2[0x4d];
          goto LAB_10162105c;
        }
        if (bVar11 != 3) {
          func_0x000108a07b10(&UNK_10b23a748);
          goto LAB_10162173c;
        }
        bVar11 = *(byte *)(param_2 + 0x53);
        if (bVar11 < 3) {
          if (bVar11 != 0) {
            if (bVar11 == 1) {
              func_0x000108a07af4(&UNK_10b23a718);
            }
            else {
              func_0x000108a07b10(&UNK_10b23a718);
            }
            goto LAB_10162173c;
          }
          uVar17 = param_2[0x50];
          param_2[0x51] = (long *)param_2[0x4f];
          param_2[0x52] = uVar17;
          lVar22 = *(long *)param_2[0x4f];
          if (*(ulong *)(lVar22 + 0x1e8) < uVar17) goto LAB_101621094;
          goto LAB_10162112c;
        }
        if (bVar11 == 3) {
          uVar17 = param_2[0x52];
          lVar22 = *(long *)param_2[0x51];
          if (uVar17 <= *(ulong *)(lVar22 + 0x1e8)) goto LAB_10162112c;
          goto LAB_101621094;
        }
        goto LAB_101621158;
      }
LAB_1016212b4:
      FUN_101401fa0(auStack_570,param_2 + 0x3b,param_3);
      pplVar31 = pplStack_558;
      pplVar14 = pplStack_560;
      auVar6 = _auStack_570;
      pplVar29 = pplStack_568;
      auVar20 = auStack_570;
      if (auStack_570 == (undefined1  [8])0x17) {
        uVar16 = 4;
        pplVar14 = unaff_x23;
        goto LAB_1016212d4;
      }
      FUN_100cf4538(param_2 + 0x3b);
      auStack_570 = (undefined1  [8])0x9;
      auVar7._8_8_ = pplStack_568;
      auVar7._0_8_ = 9;
      pplVar30 = pplVar31;
      if (auVar20 == (undefined1  [8])0x16) {
LAB_101621388:
        auVar6._8_8_ = pplVar29;
        auVar6._0_8_ = 9;
        pplVar31 = pplVar30;
      }
      else {
        FUN_100de8b24(auStack_570);
        auVar7._8_8_ = pplStack_568;
        auVar7._0_8_ = auStack_570;
      }
      *(undefined2 *)((long)param_2 + 0x1d1) = 0;
      *(undefined1 *)((long)param_2 + 0x1d3) = 0;
      *(undefined1 *)(param_2 + 0x3a) = 1;
      _auStack_570 = auVar7;
      FUN_100da19a4(param_2 + 0x32);
      *(undefined1 *)(param_2 + 0x5e) = 1;
    }
    FUN_100de8a5c(param_2 + 0x1c);
    if (auVar6._0_8_ == 0x16) {
      puVar28 = (undefined8 *)_malloc(0x26);
      if (puVar28 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x26);
LAB_10162173c:
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x101621740);
        (*pcVar19)();
      }
      puVar28[1] = 0x6e65732074756f65;
      *puVar28 = 0x6d697420656c6469;
      puVar28[3] = 0x722074656b636f73;
      puVar28[2] = 0x62657720676e6964;
      *(undefined8 *)((long)puVar28 + 0x1e) = 0x7473657571657220;
      pppppuStack_818 = (undefined8 ******)0x26;
      auStack_810._8_8_ = 0x26;
      auStack_810._0_8_ = puVar28;
      plVar18 = (long *)param_2[0x16];
joined_r0x00010162149c:
      pppppuStack_820 = (long ******)0x9;
      lVar22 = 9;
    }
    else {
      if (auVar6._0_8_ != 0x15) {
        auStack_120._0_8_ = auStack_570;
        auStack_120._8_8_ =
             __ZN64__LT_tungstenite__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h3070f71c62fe5785E
        ;
        pplStack_560 = pplVar14;
        pplStack_558 = pplVar31;
        _auStack_570 = auVar6;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&pppppuStack_358,s__failed_to_send_websocket_reques_108ad983e,auStack_120);
        pppppuStack_818 = pppppuStack_358;
        auStack_810 = auStack_350;
        FUN_100de8b24(auStack_570);
        plVar18 = (long *)param_2[0x16];
        goto joined_r0x00010162149c;
      }
      lVar22 = 0x12;
      pppppuStack_820 = (long ******)0x12;
      plVar18 = (long *)param_2[0x16];
    }
    if (plVar18 != (long *)0x0) {
      lVar23 = *plVar18;
      lVar5 = plVar18[1];
      auVar33 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
      pppppuStack_358 = auVar33._0_8_;
      auStack_350._0_4_ = auVar33._8_4_;
      ppppplStack_788 = (long *****)param_2[0x1a];
      pppplStack_780 = (long ****)CONCAT44(pppplStack_780._4_4_,*(undefined4 *)(param_2 + 0x1b));
      func_0x000106032878(auStack_570,&pppppuStack_358,&ppppplStack_788);
      uVar2 = 0;
      if (auStack_570._0_4_ == 0) {
        uVar2 = pplStack_560._0_4_;
      }
      pplVar30 = (long **)0;
      if (auStack_570._0_4_ == 0) {
        pplVar30 = pplStack_568;
      }
      ppppppuVar13 = (undefined8 ******)0x0;
      if (lVar22 != 0x12) {
        ppppppuVar13 = &pppppuStack_820;
      }
      (**(code **)(lVar5 + 0x18))
                (lVar23 + (*(long *)(lVar5 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,pplVar30,uVar2,
                 ppppppuVar13,*(undefined1 *)((long)param_2 + 0x2fa));
    }
    if (lVar22 != 0x12) {
      lStack_148 = lStack_7b0;
      lStack_150 = lStack_7b8;
      lStack_138 = lStack_7a0;
      lStack_140 = lStack_7a8;
      lStack_128 = lStack_790;
      lStack_130 = lStack_798;
      lStack_188 = lStack_7f0;
      lStack_190 = lStack_7f8;
      lStack_178 = lStack_7e0;
      lStack_180 = lStack_7e8;
      lStack_168 = lStack_7d0;
      lStack_170 = lStack_7d8;
      lStack_158 = lStack_7c0;
      lStack_160 = lStack_7c8;
      pppppuStack_1b0 = pppppuStack_818;
      lStack_198 = lStack_800;
      auStack_1a8 = auStack_810;
      goto LAB_101621564;
    }
    *(undefined1 *)((long)param_2 + 0x2fb) = 0;
    FUN_100de6690(param_2 + 0xd);
    lVar22 = 0x12;
  }
  param_1[0xc] = lStack_158;
  param_1[0xb] = lStack_160;
  param_1[0xe] = lStack_148;
  param_1[0xd] = lStack_150;
  param_1[0x10] = lStack_138;
  param_1[0xf] = lStack_140;
  param_1[0x12] = lStack_128;
  param_1[0x11] = lStack_130;
  param_1[4] = lStack_198;
  param_1[3] = auStack_1a8._8_8_;
  param_1[6] = lStack_188;
  param_1[5] = lStack_190;
  param_1[8] = lStack_178;
  param_1[7] = lStack_180;
  param_1[10] = lStack_168;
  param_1[9] = lStack_170;
  *param_1 = lVar22;
  uVar16 = 1;
  param_1[2] = auStack_1a8._0_8_;
  param_1[1] = (long)pppppuStack_1b0;
LAB_1016215b0:
  *(undefined1 *)((long)param_2 + 0x2f9) = uVar16;
  return;
}

