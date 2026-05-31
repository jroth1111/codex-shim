
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ddad8(void)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x19;
  undefined *puVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  long unaff_x27;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 *in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long *in_stack_00000120;
  undefined *in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  long *in_stack_00000160;
  undefined *in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined *in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined *in_stack_000001c0;
  undefined8 in_stack_000001c8;
  long in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  undefined *in_stack_00000210;
  long in_stack_00000218;
  long in_stack_00000220;
  long lVar26;
  undefined8 in_stack_00000228;
  undefined8 uVar27;
  undefined *in_stack_00000230;
  undefined *puVar28;
  undefined8 in_stack_00000238;
  undefined8 uVar29;
  long in_stack_00000240;
  long lVar30;
  undefined8 in_stack_00000248;
  undefined8 uVar31;
  long in_stack_00000250;
  long lVar32;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  long in_stack_000002a0;
  long in_stack_000002b0;
  long *in_stack_00004d10;
  undefined *in_stack_00004d18;
  undefined8 in_stack_00004d20;
  undefined8 in_stack_00004d28;
  undefined8 in_stack_00004d30;
  undefined8 in_stack_00004d38;
  undefined8 in_stack_00004d40;
  undefined8 in_stack_00004d48;
  undefined *in_stack_00004d80;
  long in_stack_00004d88;
  long in_stack_00004d90;
  undefined8 in_stack_00004d98;
  undefined *in_stack_00004da0;
  undefined8 in_stack_00004da8;
  long in_stack_00004db0;
  uint uVar33;
  undefined8 in_stack_00004db8;
  long in_stack_00004dc0;
  long in_stack_00004dc8;
  undefined8 in_stack_00004dd0;
  undefined8 in_stack_00004dd8;
  undefined8 in_stack_00004de0;
  long in_stack_00004de8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00004d80,s_invalid_feature_enablement_____108aca981,&stack0x000002a0);
  puVar25 = in_stack_00004d80;
  lVar14 = in_stack_00004d88;
  lVar15 = in_stack_00004d90;
  if ((*(byte *)(unaff_x19 + 0xd0) & 1) != 0) {
    lVar12 = *(long *)(unaff_x19 + 0xb0);
    if (lVar12 == 0) {
      in_stack_00004dc0 = 0;
    }
    else {
      in_stack_00004d98 = *(undefined8 *)(unaff_x19 + 0xb8);
      in_stack_00004dc0 = *(long *)(unaff_x19 + 0xc0);
      in_stack_00004da8 = 0;
      lVar14 = 0;
      lVar15 = lVar12;
      in_stack_00004db0 = lVar12;
      in_stack_00004db8 = in_stack_00004d98;
    }
    puVar25 = (undefined *)(ulong)(lVar12 != 0);
    while (FUN_100f3a554(&stack0x000002a0,&stack0x00004d80), in_stack_00004da0 = puVar25,
          in_stack_000002a0 != 0) {
      lVar12 = in_stack_000002a0 + in_stack_000002b0 * 0x18;
      if (*(long *)(lVar12 + 8) != 0) {
        _free(*(undefined8 *)(lVar12 + 0x10));
      }
    }
  }
  *(undefined2 *)(unaff_x19 + 0xd0) = 0x100;
  if (in_stack_00004d80 == (undefined *)0x8000000000000001) {
    *in_stack_000000b0 = 0x8000000000000071;
    uVar8 = 3;
    goto LAB_1008de83c;
  }
  in_stack_00000120 = in_stack_00004d10;
  in_stack_00000128 = in_stack_00004d18;
  in_stack_00000160 = in_stack_00004d10;
  in_stack_00000168 = in_stack_00004d18;
  in_stack_00000170 = in_stack_00004d20;
  in_stack_00000178 = in_stack_00004d28;
  in_stack_00000180 = in_stack_00004d30;
  in_stack_00000188 = in_stack_00004d38;
  in_stack_00000190 = in_stack_00004d40;
  in_stack_00000198 = in_stack_00004d48;
  FUN_100d6e3a0();
  puVar22 = (undefined8 *)(unaff_x19 + 0x88);
  uVar9 = *puVar22;
  *puVar22 = in_stack_00004d80;
  *(long *)(unaff_x19 + 0x90) = in_stack_00004d88;
  *(long *)(unaff_x19 + 0x98) = in_stack_00004d90;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0x8000000000000005;
  *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_00000188;
  *(undefined8 *)(unaff_x19 + 200) = in_stack_00000180;
  *(undefined8 *)(unaff_x19 + 0xe0) = in_stack_00000198;
  *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_00000190;
  *(undefined **)(unaff_x19 + 0xb0) = in_stack_00000168;
  *(long **)(unaff_x19 + 0xa8) = in_stack_00000160;
  *(undefined8 *)(unaff_x19 + 0xc0) = in_stack_00000178;
  *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_00000170;
  *(undefined8 *)(unaff_x19 + 0xe8) = 0xffffffffffff80a8;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar9;
  *(undefined1 *)(unaff_x19 + 0x120) = 0;
  puVar19 = *(undefined **)(unaff_x19 + 0x88);
  if (puVar19 == (undefined *)0x8000000000000000) {
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0x98);
    *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x19 + 0xf0);
    *(undefined1 *)(unaff_x19 + 0x118) = 0;
    FUN_1008db168(unaff_x19 + 0x110);
    uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar9 = *(undefined8 *)(unaff_x19 + 0xf8);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x108);
    *(undefined1 *)(unaff_x19 + 0x120) = 1;
    puVar19 = (undefined *)0x8000000000000000;
  }
  else {
    uVar24 = *(undefined8 *)(unaff_x19 + 0x98);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x90);
    uVar10 = *(undefined8 *)(unaff_x19 + 0xa0);
    in_stack_00004d98 = *(undefined8 *)(unaff_x19 + 0xc0);
    lVar15 = *(long *)(unaff_x19 + 0xb8);
    in_stack_00004da8 = *(undefined8 *)(unaff_x19 + 0xd0);
    in_stack_00004da0 = *(undefined **)(unaff_x19 + 200);
    in_stack_00004db8 = *(undefined8 *)(unaff_x19 + 0xe0);
    in_stack_00004db0 = *(long *)(unaff_x19 + 0xd8);
    in_stack_00004dc0 = *(long *)(unaff_x19 + 0xe8);
    lVar14 = *(long *)(unaff_x19 + 0xb0);
    puVar25 = *(undefined **)(unaff_x19 + 0xa8);
    *(undefined1 *)(unaff_x19 + 0x120) = 1;
    if (puVar19 == (undefined *)0x8000000000000001) {
      *in_stack_000000b0 = 0x8000000000000071;
      uVar8 = 4;
      goto LAB_1008de83c;
    }
  }
  in_stack_000001a0 = puVar25;
  in_stack_000001a8 = lVar14;
  in_stack_000001b0 = lVar15;
  in_stack_000001b8 = in_stack_00004d98;
  in_stack_000001c0 = in_stack_00004da0;
  in_stack_000001c8 = in_stack_00004da8;
  in_stack_000001d0 = in_stack_00004db0;
  in_stack_000001d8 = in_stack_00004db8;
  in_stack_000001e0 = in_stack_00004dc0;
  FUN_100db651c(puVar22);
  lVar32 = in_stack_000001e0;
  uVar31 = in_stack_000001d8;
  lVar30 = in_stack_000001d0;
  uVar29 = in_stack_000001c8;
  puVar28 = in_stack_000001c0;
  uVar27 = in_stack_000001b8;
  lVar26 = in_stack_000001b0;
  lVar12 = in_stack_000001a8;
  puVar3 = in_stack_000001a0;
  if (puVar19 == (undefined *)0x8000000000000000) {
    *(undefined1 *)(unaff_x19 + 0x83) = 1;
    lVar12 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x138);
    *(undefined2 *)(unaff_x19 + 0x82) = 0;
    *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0x50);
    *puVar22 = *(undefined8 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x58);
    *(undefined8 *)(unaff_x19 + 0xa8) = 0x8000000000000044;
    *(undefined8 *)(unaff_x19 + 0xb8) = uVar24;
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar9;
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar10;
    *(long *)(unaff_x19 + 0x460) = lVar12 + 0x10;
    *(undefined1 *)(unaff_x19 + 0x4f8) = 0;
    plVar1 = (long *)(unaff_x19 + 0x88);
    iVar5 = FUN_100892e70(plVar1,in_stack_000000b8);
    if (iVar5 != 0) {
      *in_stack_000000b0 = 0x8000000000000071;
      uVar8 = 5;
      goto LAB_1008de83c;
    }
    FUN_100cf6de0(plVar1);
    if ((*(byte *)(unaff_x19 + 0x81) & 1) != 0) {
      puVar23 = (undefined1 *)(unaff_x19 + 0x99);
      *puVar23 = 0;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x40);
      *(undefined8 *)(unaff_x19 + 0x90) = uVar9;
      *(undefined1 *)(unaff_x19 + 0x98) = 0;
      *(undefined8 *)(unaff_x19 + 0x88) = uVar9;
      *(undefined8 *)(unaff_x19 + 0xa0) = 0x8000000000000000;
      *(undefined8 *)(unaff_x19 + 0xb8) = uVar9;
      *(undefined1 *)(unaff_x19 + 0x610) = 0;
      FUN_1008da48c(&stack0x00004d80,unaff_x19 + 0xa0,in_stack_000000b8);
      if (puVar25 == (undefined *)0x3) {
        uVar8 = 3;
LAB_1008de404:
        *puVar23 = uVar8;
        *in_stack_000000b0 = 0x8000000000000071;
        uVar8 = 6;
        goto LAB_1008de83c;
      }
      _memcpy(&stack0x000002a0,&stack0x00004df0,0x24d8);
      FUN_100d227b4(unaff_x19 + 0xa0);
      if (puVar25 == (undefined *)0x2) {
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
          if (((1 < bRam000000010b627840 - 1) &&
              ((puVar25 = &
                          __ZN16codex_app_server18request_processors16config_processor22ConfigRequestProcessor59refresh_apps_list_after_experimental_feature_enablement_set28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h47c1537f4f3a8a5fE
               , bRam000000010b627840 == 0 ||
               (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN16codex_app_server18request_processors16config_processor22ConfigRequestProcessor59refresh_apps_list_after_experimental_feature_enablement_set28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h47c1537f4f3a8a5fE
                                  ),
               puVar25 = &
                         __ZN16codex_app_server18request_processors16config_processor22ConfigRequestProcessor59refresh_apps_list_after_experimental_feature_enablement_set28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h47c1537f4f3a8a5fE
               , cVar4 == '\0')))) ||
             (uVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN16codex_app_server18request_processors16config_processor22ConfigRequestProcessor59refresh_apps_list_after_experimental_feature_enablement_set28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h47c1537f4f3a8a5fE
                                ),
             puVar25 = &
                       __ZN16codex_app_server18request_processors16config_processor22ConfigRequestProcessor59refresh_apps_list_after_experimental_feature_enablement_set28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h47c1537f4f3a8a5fE
             , (uVar6 & 1) == 0)) goto LAB_1008de6a0;
          in_stack_00000120 = (long *)&stack0x00004d80;
          in_stack_00000128 = &DAT_10112965c;
          FUN_1008e17dc(&stack0x000027f0);
        }
        else {
LAB_1008de6a0:
          uVar9 = 
          ___ZN16codex_app_server18request_processors16config_processor22ConfigRequestProcessor59refresh_apps_list_after_experimental_feature_enablement_set28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h47c1537f4f3a8a5fE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar19 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar19 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar5 = (**(code **)(puVar19 + 0x18))(puVar3,&stack0x00004cd0);
            puVar25 = &
                      __ZN16codex_app_server18request_processors16config_processor22ConfigRequestProcessor59refresh_apps_list_after_experimental_feature_enablement_set28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h47c1537f4f3a8a5fE
            ;
            if (iVar5 != 0) {
              in_stack_00000120 = (long *)&stack0x00004d80;
              in_stack_00000128 = &DAT_10112965c;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (uVar9,puVar3,puVar19,&stack0x00004cd0,&stack0x000027f0);
              puVar25 = &
                        __ZN16codex_app_server18request_processors16config_processor22ConfigRequestProcessor59refresh_apps_list_after_experimental_feature_enablement_set28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h47c1537f4f3a8a5fE
              ;
            }
          }
        }
        if (in_stack_00004da0 != (undefined *)0x8000000000000005) {
          FUN_100de6690(&stack0x00004d98);
        }
        puVar19 = puVar25;
        if (lVar14 != 0) {
          _free(lVar15);
        }
      }
      else {
        *(long *)(unaff_x19 + 0xe0) = in_stack_00004dc0;
        *(undefined8 *)(unaff_x19 + 0xd8) = in_stack_00004db8;
        *(undefined8 *)(unaff_x19 + 0xf0) = in_stack_00004dd0;
        *(long *)(unaff_x19 + 0xe8) = in_stack_00004dc8;
        *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00004de0;
        *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_00004dd8;
        *(long *)(unaff_x19 + 0xb0) = lVar15;
        *(long *)(unaff_x19 + 0xa8) = lVar14;
        *(undefined **)(unaff_x19 + 0xc0) = in_stack_00004da0;
        *(undefined8 *)(unaff_x19 + 0xb8) = in_stack_00004d98;
        *(undefined1 *)(unaff_x19 + 0x98) = 1;
        *(undefined **)(unaff_x19 + 0xa0) = puVar25;
        *(long *)(unaff_x19 + 0x108) = in_stack_00004de8;
        *(long *)(unaff_x19 + 0xd0) = in_stack_00004db0;
        *(undefined8 *)(unaff_x19 + 200) = in_stack_00004da8;
        _memcpy(unaff_x19 + 0x110,&stack0x000002a0,0x24d8);
        *(long *)(unaff_x19 + 0x25f0) = *(long *)(*(long *)(unaff_x19 + 0x88) + 0x140) + 0x10;
        *(undefined1 *)(unaff_x27 + 0x5f9) = 0;
        FUN_1006dd9c8(&stack0x00004d80,unaff_x19 + 0x25e8,in_stack_000000b8);
        if (puVar25 == (undefined *)0x8000000000000004) {
          uVar8 = 4;
          goto LAB_1008de404;
        }
        if (*(char *)(unaff_x27 + 0x5f9) == '\x04') {
          FUN_100cab424(unaff_x19 + 0x2698);
          FUN_100e0609c(unaff_x19 + 0x2600);
          *(undefined1 *)(unaff_x27 + 0x5f8) = 0;
          if (puVar25 == (undefined *)0x8000000000000003) goto LAB_1008de498;
LAB_1008de4d4:
          bVar11 = puVar25 < (undefined *)0x8000000000000000 ||
                   puVar25 + 0x7fffffffffffffff < (undefined *)0x3;
          lVar14 = *(long *)(unaff_x19 + 0x2428);
        }
        else {
          if (*(char *)(unaff_x27 + 0x5f9) == '\x03') {
            FUN_100ce72d8(unaff_x19 + 0x2600);
          }
          if (puVar25 != (undefined *)0x8000000000000003) goto LAB_1008de4d4;
LAB_1008de498:
          bVar11 = false;
          lVar14 = *(long *)(unaff_x19 + 0x2428);
        }
        if (lVar14 != 0) {
          lVar15 = *(long *)(unaff_x19 + 0x2430);
LAB_1008de4f8:
          uVar17 = (ulong)*(ushort *)(lVar14 + 10);
          uVar6 = 0xffffffffffffffff;
          pbVar16 = (byte *)(lVar14 + 0xc);
          uVar18 = uVar17;
          do {
            if (uVar18 == 0) goto LAB_1008de53c;
            cVar4 = *pbVar16 < 0x17;
            if (0x17 < *pbVar16) {
              cVar4 = -1;
            }
            uVar18 = uVar18 - 1;
            uVar6 = uVar6 + 1;
            pbVar16 = pbVar16 + 1;
          } while (cVar4 == '\x01');
          uVar17 = uVar6;
          if (cVar4 == '\0') {
            if (bVar11) {
              plVar20 = *(long **)(*plVar1 + 0x138);
              lVar14 = *plVar20;
              *plVar20 = lVar14 + 1;
              if (-1 < lVar14) {
                lVar15 = *(long *)(*(long *)(*plVar1 + 0x148) + 0x28);
                plVar13 = *(long **)(lVar15 + 0xd0);
                lVar14 = *plVar13;
                *plVar13 = lVar14 + 1;
                if (-1 < lVar14) {
                  uVar9 = *(undefined8 *)(lVar15 + 0xd0);
                  *(undefined1 *)(unaff_x19 + 0x98) = 0;
                  _memcpy(&stack0x00004d80,unaff_x19 + 0xa0,0x2548);
                  lVar14 = _malloc(0x6150);
                  if (lVar14 == 0) {
                    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x6150);
                  }
                  else {
                    _memcpy(lVar14,unaff_x19 + 0xa0,0x2548);
                    *(undefined8 *)(lVar14 + 0x2548) = uVar9;
                    *(long **)(lVar14 + 0x2550) = plVar20;
                    *(undefined1 *)(lVar14 + 0x2558) = 0;
                    do {
                      puVar19 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
                      puVar3 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
                      bVar11 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE ==
                               (undefined *)0x0;
                      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = puVar3;
                    } while (bVar11);
                    puVar7 = (ulong *)(*
                                      ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                                      )();
                    if ((char)puVar7[9] == '\x01') {
LAB_1008de9e4:
                      if (0x7ffffffffffffffe < *puVar7) {
                        FUN_107c05c9c(&UNK_10b2435a0);
                        goto LAB_1008deea0;
                      }
                      *puVar7 = *puVar7 + 1;
                      if (puVar7[1] == 2) {
                        FUN_100d9a2b0(lVar14);
                        _free(lVar14);
                        uVar8 = 0;
                        *puVar7 = *puVar7 - 1;
                        goto LAB_1008de640;
                      }
                      uVar33 = (uint)((ulong)in_stack_00004db0 >> 0x20);
                      if ((puVar7[1] & 1) == 0) {
                        plVar20 = (long *)puVar7[2];
                        lVar15 = *plVar20;
                        *plVar20 = lVar15 + 1;
                        if (lVar15 < 0) goto LAB_1008deea0;
                        plVar13 = (long *)plVar20[0x5e];
                        if (plVar13 == (long *)0x0) {
                          lVar15 = 0;
                          lVar12 = 0;
                        }
                        else {
                          lVar15 = *plVar13;
                          *plVar13 = lVar15 + 1;
                          if (lVar15 < 0) goto LAB_1008deea0;
                          lVar12 = plVar20[0x5f];
                          lVar15 = plVar20[0x5e];
                        }
                        in_stack_00000120 = (long *)0x0;
                        iVar5 = _posix_memalign(&stack0x00000120,0x80,0x80);
                        plVar13 = in_stack_00000120;
                        if ((iVar5 != 0) || (in_stack_00000120 == (long *)0x0)) {
                          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x80);
                          goto LAB_1008deea0;
                        }
                        in_stack_00000120[3] = 0;
                        in_stack_00000120[2] = (long)&UNK_10b23da30;
                        in_stack_00000120[5] = (long)puVar19;
                        in_stack_00000120[4] = (long)plVar20;
                        in_stack_00000120[7] = lVar14;
                        in_stack_00000120[6] = (ulong)uVar33 << 0x20;
                        in_stack_00000120[1] = 0;
                        *in_stack_00000120 = 0xcc;
                        in_stack_00000120[0xd] = in_stack_00004de8;
                        in_stack_00000120[0xc] = 0;
                        in_stack_00000120[0xf] = lVar12;
                        in_stack_00000120[0xe] = lVar15;
                        in_stack_00000120[9] = in_stack_00004dc8;
                        in_stack_00000120[8] = in_stack_00004dc0;
                        in_stack_00000120[0xb] = 0;
                        in_stack_00000120[10] = 0;
                        lVar14 = FUN_1010e2658(plVar20 + 0x2d,in_stack_00000120,in_stack_00000120);
                        if (plVar20[0x5c] != 0) {
                          (**(code **)(plVar20[0x5d] + 0x28))
                                    (plVar20[0x5c] +
                                     (*(long *)(plVar20[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) +
                                     0x10,&stack0x00004d80);
                        }
                        if (lVar14 != 0) {
                          __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                                    (puVar7 + 2,lVar14);
                        }
                      }
                      else {
                        plVar20 = (long *)puVar7[2];
                        lVar15 = *plVar20;
                        *plVar20 = lVar15 + 1;
                        if (lVar15 < 0) goto LAB_1008deea0;
                        plVar13 = (long *)plVar20[0x4a];
                        if (plVar13 == (long *)0x0) {
                          lVar15 = 0;
                          lVar12 = 0;
                        }
                        else {
                          lVar15 = *plVar13;
                          *plVar13 = lVar15 + 1;
                          if (lVar15 < 0) goto LAB_1008deea0;
                          lVar12 = plVar20[0x4b];
                          lVar15 = plVar20[0x4a];
                        }
                        in_stack_00000120 = (long *)0x0;
                        iVar5 = _posix_memalign(&stack0x00000120,0x80,0x80);
                        plVar13 = in_stack_00000120;
                        if ((iVar5 != 0) || (in_stack_00000120 == (long *)0x0)) {
                          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x80);
                          goto LAB_1008deea0;
                        }
                        in_stack_00000120[3] = 0;
                        in_stack_00000120[2] = (long)&UNK_10b23b5f0;
                        in_stack_00000120[5] = (long)puVar19;
                        in_stack_00000120[4] = (long)plVar20;
                        in_stack_00000120[7] = lVar14;
                        in_stack_00000120[6] = (ulong)uVar33 << 0x20;
                        in_stack_00000120[1] = 0;
                        *in_stack_00000120 = 0xcc;
                        in_stack_00000120[0xd] = in_stack_00004de8;
                        in_stack_00000120[0xc] = 0;
                        in_stack_00000120[0xf] = lVar12;
                        in_stack_00000120[0xe] = lVar15;
                        in_stack_00000120[9] = in_stack_00004dc8;
                        in_stack_00000120[8] = in_stack_00004dc0;
                        in_stack_00000120[0xb] = 0;
                        in_stack_00000120[10] = 0;
                        lVar14 = FUN_1010e2658(plVar20 + 0x11,in_stack_00000120,in_stack_00000120);
                        if (plVar20[0x48] != 0) {
                          (**(code **)(plVar20[0x49] + 0x28))
                                    (plVar20[0x48] +
                                     (*(long *)(plVar20[0x49] + 0x10) - 1U & 0xfffffffffffffff0) +
                                     0x10,&stack0x00004d80);
                        }
                        if (lVar14 != 0) {
                          FUN_10610fa38(plVar20 + 2,lVar14,0);
                        }
                      }
                      *puVar7 = *puVar7 - 1;
                      if (*plVar13 == 0xcc) {
                        *plVar13 = 0x84;
                      }
                      else {
                        (**(code **)(plVar13[2] + 0x20))(plVar13);
                      }
                      if (puVar25 != (undefined *)0x8000000000000003) {
                        FUN_100e0609c(&stack0x000027f0);
                      }
                      goto LAB_1008de7e0;
                    }
                    if ((char)puVar7[9] != '\x02') {
                      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                                (puVar7,&DAT_100c35d48);
                      *(undefined1 *)(puVar7 + 9) = 1;
                      goto LAB_1008de9e4;
                    }
                    FUN_100d9a2b0(lVar14);
                    _free(lVar14);
                    uVar8 = 1;
LAB_1008de640:
                    in_stack_00000120 = (long *)CONCAT71(in_stack_00000120._1_7_,uVar8);
                    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                              (s__108b1bd74,&stack0x00004d80,&UNK_10b225be0);
                  }
                }
              }
LAB_1008deea0:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1008deea4);
              (*pcVar2)();
            }
          }
          else {
LAB_1008de53c:
            if (lVar15 != 0) goto code_r0x0001008de540;
          }
        }
        if (puVar25 != (undefined *)0x8000000000000003) {
          FUN_100e0609c(&stack0x000027f0);
        }
        FUN_100de93d0(unaff_x19 + 0xa0);
        puVar19 = puVar25;
      }
LAB_1008de7e0:
      *(undefined1 *)(unaff_x19 + 0x98) = 0;
      *puVar23 = 1;
      FUN_100d895a4(plVar1);
    }
    *(undefined1 *)(unaff_x19 + 0x83) = 0;
    *(undefined1 *)(unaff_x19 + 0x84) = 0;
    uVar21 = 0x800000000000006f;
    puVar3 = in_stack_00000210;
    lVar12 = in_stack_00000218;
    lVar26 = in_stack_00000220;
    uVar27 = in_stack_00000228;
    puVar28 = in_stack_00000230;
    uVar29 = in_stack_00000238;
    lVar30 = in_stack_00000240;
    uVar31 = in_stack_00000248;
    lVar32 = in_stack_00000250;
    uVar9 = in_stack_00000260;
    uVar24 = in_stack_00000268;
    uVar10 = in_stack_00000270;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x83) = 0;
    *(undefined1 *)(unaff_x19 + 0x84) = 0;
    uVar21 = 0x8000000000000070;
    if ((*(ulong *)(unaff_x19 + 0x48) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x50));
      uVar21 = 0x8000000000000070;
    }
  }
  in_stack_000000b0[3] = uVar24;
  in_stack_000000b0[2] = uVar9;
  in_stack_000000b0[8] = uVar27;
  in_stack_000000b0[7] = lVar26;
  in_stack_000000b0[10] = uVar29;
  in_stack_000000b0[9] = puVar28;
  in_stack_000000b0[0xc] = uVar31;
  in_stack_000000b0[0xb] = lVar30;
  *(undefined1 *)(unaff_x19 + 0x82) = 0;
  *in_stack_000000b0 = uVar21;
  in_stack_000000b0[1] = puVar19;
  in_stack_000000b0[4] = uVar10;
  in_stack_000000b0[0xd] = lVar32;
  uVar8 = 1;
  in_stack_000000b0[6] = lVar12;
  in_stack_000000b0[5] = puVar3;
LAB_1008de83c:
  *(undefined1 *)(unaff_x19 + 0x80) = uVar8;
  return;
code_r0x0001008de540:
  lVar14 = *(long *)(lVar14 + uVar17 * 8 + 0x18);
  lVar15 = lVar15 + -1;
  goto LAB_1008de4f8;
}

