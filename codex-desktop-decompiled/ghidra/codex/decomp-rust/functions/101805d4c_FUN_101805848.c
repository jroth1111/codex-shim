
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101805848(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *in_stack_00000170;
  undefined1 *in_stack_00000178;
  undefined8 in_stack_00000180;
  long in_stack_00000190;
  long in_stack_000001a8;
  long in_stack_00000360;
  long in_stack_000073a0;
  undefined1 *in_stack_00009900;
  undefined *in_stack_00009908;
  undefined1 *in_stack_00009910;
  undefined8 *in_stack_0000fe68;
  undefined1 *puVar17;
  
code_r0x000101805848:
  puVar17 = (undefined1 *)0x1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00014e20);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar14 = *unaff_x23;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x0000ff80);
    if (iVar6 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar14,puVar2,puVar1,&stack0x0000ff80,&stack0x00014e20);
    }
  }
LAB_10180602c:
  if (((ulong)in_stack_0000fe68 & 3) != 1) goto LAB_1018061a0;
  puVar15 = (undefined8 *)((long)in_stack_0000fe68 - 1);
  uVar14 = *puVar15;
  puVar13 = *(undefined8 **)((long)in_stack_0000fe68 + 7);
  if ((code *)*puVar13 != (code *)0x0) {
    (*(code *)*puVar13)(uVar14);
  }
LAB_10180605c:
  in_stack_0000fe68 = puVar15;
  if (puVar13[1] != 0) {
    _free(uVar14);
  }
LAB_101806198:
  do {
    _free(in_stack_0000fe68);
LAB_1018061a0:
    do {
      while( true ) {
        while( true ) {
          if (*(long *)(unaff_x19 + 0x2990) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x2998));
          }
          do {
            puVar13 = *(undefined8 **)(unaff_x19 + 0x2978);
            if (puVar13 == *(undefined8 **)(unaff_x19 + 0x2988)) {
              in_stack_000073a0 = -0x8000000000000000;
              if (*(long *)(unaff_x19 + 0x2980) == 0) goto LAB_1018053d4;
              goto LAB_1018053cc;
            }
            uVar14 = *puVar13;
            *(undefined8 **)(unaff_x19 + 0x2978) = puVar13 + 1;
            __ZN12codex_config11diagnostics21config_path_for_layer17h4a91bf2f44ee6815E
                      (&stack0x00009900,uVar14,*(undefined8 *)(unaff_x19 + 0x2960),
                       *(undefined8 *)(unaff_x19 + 0x2968));
          } while (in_stack_00009900 == (undefined1 *)0x8000000000000000);
          *(undefined **)(unaff_x19 + 0x2998) = in_stack_00009908;
          *(undefined1 **)(unaff_x19 + 0x2990) = in_stack_00009900;
          *(undefined1 **)(unaff_x19 + 0x29a0) = in_stack_00009910;
          *(long *)(unaff_x19 + 0x29a8) = unaff_x19 + 0x2990;
          *(undefined1 *)(unaff_x20 + 0x378) = 0;
          FUN_10199560c(&stack0x00009900,unaff_x19 + 0x29a8,in_stack_00000180);
          lVar16 = *(long *)(unaff_x27 + 0x2560);
          if (lVar16 == -0x7fffffffffffffff) {
            *in_stack_00000178 = 3;
            *in_stack_00000170 = 3;
            *unaff_x28 = 3;
            uVar10 = 4;
            goto LAB_1018051d0;
          }
          in_stack_0000fe68 = *(undefined8 **)(unaff_x27 + 0x2568);
          uVar14 = *(undefined8 *)(unaff_x27 + 0x2570);
          if (*(char *)(unaff_x20 + 0x378) == '\x03') {
            if (*(char *)(unaff_x20 + 0x370) == '\x03') {
              plVar9 = *(long **)(unaff_x19 + 0x29d0);
              if (*plVar9 == 0xcc) {
                *plVar9 = 0x84;
              }
              else {
                (**(code **)(plVar9[2] + 0x20))();
              }
            }
            else if ((*(char *)(unaff_x20 + 0x370) == '\0') && (*(long *)(unaff_x19 + 0x29b8) != 0))
            {
              _free(*(undefined8 *)(unaff_x19 + 0x29c0));
            }
          }
          if (lVar16 != -0x8000000000000000) break;
          cVar5 = FUN_10192b4fc(in_stack_0000fe68);
          if (cVar5 != '\0') {
            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
              unaff_x23 = (undefined8 *)
                          &
                          __ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
              ;
              if (((bRam000000010b629658 - 1 < 2) ||
                  ((bRam000000010b629658 != 0 &&
                   (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
                                      ), cVar5 != '\0')))) &&
                 (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (
                                    ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
                                    ), (uVar7 & 1) != 0)) {
                in_stack_00009900 = &stack0x00016870;
                in_stack_00009908 =
                     &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                ;
                in_stack_00009910 = &stack0x0000fe68;
                param_1 = 
                ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
                ;
                goto code_r0x000101805848;
              }
            }
            lVar16 = 
            ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              puVar1 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_10b3c24c8;
              }
              puVar2 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_109adfc03;
              }
              iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000119b0);
              if (iVar6 != 0) {
                puVar17 = &stack0x0000fec8;
                in_stack_00009908 = *(undefined **)(lVar16 + 0x50);
                in_stack_00009910 = *(undefined1 **)(lVar16 + 0x58);
                in_stack_00009900 = (undefined1 *)0x1;
                if (in_stack_00009908 == (undefined *)0x0) {
                  in_stack_00009900 = (undefined1 *)0x2;
                }
                (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00009900);
              }
            }
            goto LAB_10180602c;
          }
          if (((ulong)in_stack_0000fe68 & 3) == 1) {
            puVar15 = (undefined8 *)((long)in_stack_0000fe68 - 1);
            uVar14 = *puVar15;
            puVar13 = *(undefined8 **)((long)in_stack_0000fe68 + 7);
            if ((code *)*puVar13 != (code *)0x0) {
              (*(code *)*puVar13)(uVar14);
            }
            goto LAB_10180605c;
          }
        }
        uVar11 = *(undefined8 *)(unaff_x19 + 0x29a0);
        *(undefined8 *)(unaff_x27 + 0x2560) = *(undefined8 *)(unaff_x19 + 0x2998);
        *(undefined8 *)(unaff_x27 + 0x2568) = uVar11;
        in_stack_00009910 = (undefined1 *)CONCAT71((int7)((ulong)in_stack_00009910 >> 8),6);
        __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                  (&stack0x00014e20,&stack0x00009900);
        if (((byte)puVar17 - 7 < 3) &&
           (lVar8 = __ZN3std4path10Components7as_path17h6e58b97ab90cc3e2E(&stack0x00009900),
           lVar8 != 0)) break;
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
           (((bRam000000010b629640 - 1 < 2 ||
             ((bRam000000010b629640 != 0 &&
              (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
                                 ), cVar5 != '\0')))) &&
            (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
                               ), (uVar7 & 1) != 0)))) {
          in_stack_00009908 = &stack0x0000fec8;
          in_stack_00009900 = (undefined1 *)0x1;
          in_stack_00009910 = (undefined1 *)0x1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
                     ,&stack0x00009900);
          lVar8 = 
          ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar17 = (undefined1 *)0x4;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00014e20);
            if (iVar6 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar8,puVar2,puVar1,&stack0x00014e20,&stack0x00009900);
            }
          }
        }
        else {
          lVar8 = 
          ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000133b0);
            if (iVar6 != 0) {
              puVar17 = (undefined1 *)0x1;
              in_stack_00009908 = *(undefined **)(lVar8 + 0x50);
              in_stack_00009910 = *(undefined1 **)(lVar8 + 0x58);
              in_stack_00009900 = (undefined1 *)0x1;
              if (in_stack_00009908 == (undefined *)0x0) {
                in_stack_00009900 = (undefined1 *)0x2;
              }
              (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00009900);
            }
          }
        }
        if (lVar16 != 0) goto LAB_101806198;
      }
      __ZN25codex_utils_absolute_path20AbsolutePathBufGuard3new17h7de3fa69cf09380cE();
      FUN_10184fd88(&stack0x000073a0,*(undefined8 *)(unaff_x19 + 0x2998),
                    *(undefined8 *)(unaff_x19 + 0x29a0),in_stack_0000fe68,uVar14);
      plVar9 = (long *)(*
                       ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                       )();
      cVar5 = (char)plVar9[4];
      if (in_stack_000073a0 != -0x8000000000000000) {
        if (cVar5 != '\x01') {
          if (cVar5 == '\x02') goto LAB_101805a24;
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (plVar9,&DAT_1055621b8);
          *(undefined1 *)(plVar9 + 4) = 1;
        }
        if (*plVar9 != 0) {
LAB_1018061b4:
          __ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E(&UNK_10b38f568);
LAB_1018061c0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018061c4);
          (*pcVar3)();
        }
        *plVar9 = -1;
        if ((plVar9[1] & 0x7fffffffffffffffU) == 0) {
          lVar8 = 0;
        }
        else {
          _free(plVar9[2]);
          lVar8 = *plVar9 + 1;
        }
        *plVar9 = lVar8;
        plVar9[1] = -0x8000000000000000;
        if (lVar16 != 0) {
          _free(in_stack_0000fe68);
        }
        if (*(long *)(unaff_x19 + 0x2990) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x2998));
        }
        if (*(long *)(unaff_x19 + 0x2980) != 0) {
LAB_1018053cc:
          _free(*(undefined8 *)(unaff_x19 + 0x2970));
        }
LAB_1018053d4:
        *in_stack_00000178 = 1;
        FUN_1019485bc();
        *in_stack_00000170 = 1;
        if (in_stack_000073a0 == -0x8000000000000000) {
          *(undefined1 *)(unaff_x20 + 0x259) = 0;
          uVar14 = __ZN3std2io5error5Error3new17he50bfb1a4bbe8f48E(0x15,&stack0x00009900);
        }
        else {
          *(undefined1 *)(unaff_x20 + 0x259) = 0;
          uVar14 = __ZN3std2io5error5Error3new17h9ad1273ad3f36ec3E(0x15,&stack0x00009900);
        }
        *(undefined1 *)(unaff_x20 + 0x259) = 0;
        *(undefined1 *)(unaff_x20 + 0x255) = 0;
        FUN_10195452c(unaff_x19 + 0x518);
        *(undefined1 *)(unaff_x20 + 0x256) = 0;
        *(undefined1 *)(unaff_x20 + 0x25a) = 0;
        if ((*(byte *)(unaff_x20 + 0x24d) & 1) != 0) {
          FUN_101952554(&stack0x00000440);
        }
        *(undefined1 *)(unaff_x20 + 0x24d) = 0;
        if (((*(byte *)(unaff_x20 + 0x24e) & 1) != 0) &&
           ((((*(long *)(unaff_x19 + 0x360) == -0x8000000000000000 ||
              (*(long *)(unaff_x19 + 0x360) == 0)) ||
             (_free(*(undefined8 *)(unaff_x19 + 0x368)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0))
            && ((*(long *)(unaff_x19 + 0x378) != -0x8000000000000000 &&
                (*(long *)(unaff_x19 + 0x378) != 0)))))) {
          _free(*(undefined8 *)(unaff_x19 + 0x380));
        }
        if ((((*(byte *)(unaff_x20 + 0x24f) & 1) != 0) &&
            (*(long *)(unaff_x19 + 0x390) != -0x8000000000000000)) &&
           (*(long *)(unaff_x19 + 0x390) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x398));
        }
        if ((*(byte *)(unaff_x20 + 0x24e) & 1) == 0) goto LAB_101805be4;
        uVar7 = *(ulong *)(unaff_x19 + 0x4c8);
        if (uVar7 != 0x8000000000000003) {
          bVar4 = uVar7 != 0x8000000000000000;
          if (uVar7 < 0x8000000000000001) {
            uVar7 = 0;
          }
          if (((bVar4) && ((uVar7 & 0x7fffffffffffffff) == 0)) &&
             (FUN_10196b754(unaff_x19 + 0x4c8), (*(byte *)(unaff_x20 + 0x24e) & 1) == 0))
          goto LAB_101805be4;
        }
        if ((((((((*(long *)(unaff_x19 + 0x3a8) == -0x8000000000000000) ||
                 (*(long *)(unaff_x19 + 0x3a8) == 0)) ||
                (_free(*(undefined8 *)(unaff_x19 + 0x3b0)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)
                ) && (((*(long *)(unaff_x19 + 0x3c0) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x3c0) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x3c8)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))) &&
              (((((lVar16 = *(long *)(unaff_x19 + 0x4b0), lVar16 == -0x7fffffffffffffff ||
                  (lVar16 == -0x8000000000000000)) || (lVar16 == 0)) ||
                (_free(*(undefined8 *)(unaff_x19 + 0x4b8)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)
                ) && (((*(long *)(unaff_x19 + 0x3d8) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x3d8) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x3e0)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))))) &&
             (((*(long *)(unaff_x19 + 0x3f0) == -0x8000000000000000 ||
               (*(long *)(unaff_x19 + 0x3f0) == 0)) ||
              (_free(*(undefined8 *)(unaff_x19 + 0x3f8)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))
             ) && ((((((*(long *)(unaff_x19 + 0x408) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x408) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x410)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)) &&
                     (((*(long *)(unaff_x19 + 0x420) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x420) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x428)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))) &&
                    ((((*(long *)(unaff_x19 + 0x438) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x438) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x440)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)) &&
                     (((*(long *)(unaff_x19 + 0x450) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x450) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x458)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))))) &&
                   (((*(long *)(unaff_x19 + 0x468) == -0x8000000000000000 ||
                     (*(long *)(unaff_x19 + 0x468) == 0)) ||
                    (_free(*(undefined8 *)(unaff_x19 + 0x470)),
                    (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))))) &&
           (((*(long *)(unaff_x19 + 0x480) == -0x8000000000000000 ||
             (*(long *)(unaff_x19 + 0x480) == 0)) ||
            (_free(*(undefined8 *)(unaff_x19 + 0x488)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0))))
        {
          lVar8 = *(long *)(unaff_x19 + 0x350);
          lVar16 = *(long *)(unaff_x19 + 0x358);
          if (lVar16 != 0) {
            puVar13 = (undefined8 *)(lVar8 + 8);
            do {
              if (puVar13[-1] != 0) {
                _free(*puVar13);
              }
              puVar13 = puVar13 + 3;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          if (*(long *)(unaff_x19 + 0x348) != 0) {
            _free(lVar8);
          }
        }
LAB_101805be4:
        if (((*(byte *)(unaff_x20 + 0x24e) & 1) != 0) &&
           (lVar16 = *(long *)(unaff_x19 + 0x498), lVar16 != -0x8000000000000000)) {
          lVar12 = *(long *)(unaff_x19 + 0x4a0);
          lVar8 = *(long *)(unaff_x19 + 0x4a8);
          if (lVar8 != 0) {
            puVar13 = (undefined8 *)(lVar12 + 8);
            do {
              if (puVar13[-1] != 0) {
                _free(*puVar13);
              }
              puVar13 = puVar13 + 3;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          if (lVar16 != 0) {
            _free(lVar12);
          }
        }
        *(undefined2 *)(unaff_x20 + 0x24e) = 0;
        FUN_10196adb4(unaff_x19 + 0x330);
        if ((*(char *)(unaff_x20 + 0x250) == '\x01') && (*(long *)(unaff_x19 + 0x318) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 800));
        }
        *(undefined1 *)(unaff_x20 + 0x250) = 0;
        if ((*(long *)(unaff_x19 + 0x300) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x300) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x308));
        }
        plVar9 = *(long **)(unaff_x19 + 0x2f0);
        if (plVar9 != (long *)0x0) {
          lVar16 = *plVar9;
          *plVar9 = lVar16 + -1;
          LORelease();
          if (lVar16 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(unaff_x19 + 0x2f0);
          }
        }
        if ((*(byte *)(unaff_x20 + 0x251) & 1) != 0) {
          FUN_10194c6ac(&stack0x00000410);
        }
        *(undefined1 *)(unaff_x20 + 0x251) = 0;
        if ((*(char *)(unaff_x20 + 0x252) == '\x01') && (in_stack_00000360 != -0x7fffffffffffffff))
        {
          FUN_101952554(&stack0x00000360);
        }
        *(undefined1 *)(unaff_x20 + 0x252) = 0;
        if ((*(char *)(unaff_x20 + 0x253) == '\x01') && (in_stack_000001a8 != -0x8000000000000000))
        {
          FUN_101951e2c(&stack0x000001a8);
        }
        *(undefined1 *)(unaff_x20 + 0x253) = 0;
        if ((*(char *)(unaff_x20 + 0x254) == '\x01') && (in_stack_00000190 != -0x8000000000000000))
        {
          FUN_10196adb4(&stack0x00000190);
        }
        *(undefined1 *)(unaff_x20 + 0x254) = 0;
        *unaff_x28 = 2;
        unaff_x28[1] = uVar14;
        _memcpy(unaff_x28 + 2,&stack0x0000bed8,0x2538);
        uVar10 = 1;
LAB_1018051d0:
        *(undefined1 *)(unaff_x20 + 0x248) = uVar10;
        return;
      }
      if (cVar5 != '\x01') {
        if (cVar5 == '\x02') {
LAB_101805a24:
          func_0x000108a82a50(&UNK_10b38f438);
          goto LAB_1018061c0;
        }
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (plVar9,&DAT_1055621b8);
        *(undefined1 *)(plVar9 + 4) = 1;
      }
      if (*plVar9 != 0) goto LAB_1018061b4;
      *plVar9 = -1;
      lVar8 = 0;
      if ((plVar9[1] & 0x7fffffffffffffffU) != 0) {
        _free(plVar9[2]);
        lVar8 = *plVar9 + 1;
      }
      *plVar9 = lVar8;
      plVar9[1] = -0x8000000000000000;
    } while (lVar16 == 0);
  } while( true );
}

