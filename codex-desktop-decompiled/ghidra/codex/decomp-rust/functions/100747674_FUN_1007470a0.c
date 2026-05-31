
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007470a0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined1 uVar16;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *puVar17;
  long *unaff_x23;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  long lVar22;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *puStack0000000000000038;
  undefined *puStack0000000000000040;
  undefined8 uStack0000000000000048;
  long lStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined *puStack0000000000000060;
  long in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  char *pcStack0000000000000080;
  undefined8 *puStack0000000000000088;
  char *in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 *in_stack_000000f0;
  undefined *in_stack_000000f8;
  undefined8 in_stack_00000100;
  byte bStack0000000000000108;
  undefined *in_stack_00000110;
  undefined8 *in_stack_00000118;
  code *in_stack_00000120;
  
code_r0x0001007470a0:
  puStack0000000000000088 = (undefined8 *)&stack0x00000108;
  pcStack0000000000000080 = s_Failed_to_read_config_file___108ac5a39;
  puStack0000000000000058 = (undefined1 *)&stack0x00000080;
  puStack0000000000000060 = &UNK_10b208fd0;
  puStack0000000000000040 = (undefined *)&stack0x00000058;
  puStack0000000000000038 = (undefined8 *)0x1;
  uStack0000000000000048 = 1;
  lStack0000000000000050 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000038);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar20 = *unaff_x23;
    in_stack_000000f8 = *(undefined **)(lVar20 + 0x20);
    in_stack_00000100 = *(undefined8 *)(lVar20 + 0x28);
    in_stack_000000f0 = (undefined8 *)0x4;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar12 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000000f0);
    if (iVar12 != 0) {
      lVar14 = *(long *)(lVar20 + 0x60);
      uVar7 = *(undefined8 *)(lVar20 + 0x68);
      lVar22 = *(long *)(lVar20 + 0x50);
      uVar8 = *(undefined8 *)(lVar20 + 0x58);
      uVar21 = 1;
      if (lVar22 == 0) {
        uVar21 = 2;
      }
      uVar4 = *(undefined4 *)(lVar20 + 8);
      uVar5 = *(undefined4 *)(lVar20 + 0xc);
      *(undefined8 ***)(unaff_x29 + -0x80) = &stack0x00000038;
      *(undefined1 *)(unaff_x29 + -0x78) = 1;
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
      uVar1 = 1;
      if (lVar14 == 0) {
        uVar1 = 2;
      }
      unaff_x27[0x1b] = unaff_x27[0xb];
      unaff_x27[0x1a] = unaff_x27[10];
      *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000100;
      *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x70;
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar21;
      *(long *)(unaff_x29 + -0xd8) = lVar22;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar8;
      *(undefined8 *)(unaff_x29 + -200) = uVar1;
      *(long *)(unaff_x29 + -0xc0) = lVar14;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar7;
      *(undefined4 *)(unaff_x29 + -0x98) = uVar4;
      *(undefined4 *)(unaff_x29 + -0x94) = uVar5;
      (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xe0);
    }
  }
LAB_10074771c:
  if (((ulong)in_stack_00000018 & 3) != 1) goto LAB_1007478dc;
  puVar18 = (undefined8 *)((long)in_stack_00000018 - 1);
  uVar21 = *puVar18;
  puVar17 = *(undefined8 **)((long)in_stack_00000018 + 7);
  if ((code *)*puVar17 != (code *)0x0) {
    (*(code *)*puVar17)(uVar21);
  }
LAB_100747744:
  puVar19 = puVar18;
  if (puVar17[1] != 0) {
    _free(uVar21);
  }
  do {
    _free(puVar19);
LAB_1007478dc:
    do {
      if (*(long *)(unaff_x19 + 0x70) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x78));
      }
      do {
        lVar20 = *(long *)(unaff_x19 + 0x60);
        if (lVar20 == *(long *)(unaff_x19 + 0x68)) {
          in_stack_000000a0 = 0x8000000000000000;
          goto LAB_100746f7c;
        }
        *(long *)(unaff_x19 + 0x60) = lVar20 + 0xe8;
        __ZN12codex_config11diagnostics21config_path_for_layer17h4a91bf2f44ee6815E
                  (unaff_x29 + -0xe0,lVar20,*(undefined8 *)(unaff_x19 + 0x50),
                   *(undefined8 *)(unaff_x19 + 0x58));
      } while (*(long *)(unaff_x29 + -0xe0) == -0x8000000000000000);
      lVar20 = unaff_x27[0x14];
      *(long *)(unaff_x19 + 0x78) = unaff_x27[0x15];
      *(long *)(unaff_x19 + 0x70) = lVar20;
      *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x29 + -0xd0);
      *(long *)(unaff_x19 + 0x88) = unaff_x19 + 0x70;
      *(undefined1 *)(unaff_x19 + 0xc0) = 0;
      FUN_100fc00fc(unaff_x29 + -0xe0,unaff_x19 + 0x88,in_stack_00000010);
      lVar20 = *(long *)(unaff_x29 + -0xe0);
      if (lVar20 == -0x7fffffffffffffff) {
        *unaff_x26 = 3;
LAB_100746fac:
        *unaff_x25 = 3;
LAB_1007477b0:
        *unaff_x21 = -0x7fffffffffffffff;
        uVar16 = 3;
LAB_1007477bc:
        *(undefined1 *)(unaff_x19 + 0xd8) = uVar16;
        return;
      }
      puVar19 = *(undefined8 **)(unaff_x29 + -0xd8);
      uVar21 = *(undefined8 *)(unaff_x29 + -0xd0);
      if (*(char *)(unaff_x19 + 0xc0) == '\x03') {
        if (*(char *)(unaff_x19 + 0xb8) == '\x03') {
          plVar15 = *(long **)(unaff_x19 + 0xb0);
          if (*plVar15 == 0xcc) {
            *plVar15 = 0x84;
          }
          else {
            (**(code **)(plVar15[2] + 0x20))();
          }
        }
        else if ((*(char *)(unaff_x19 + 0xb8) == '\0') && (*(long *)(unaff_x19 + 0x98) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0xa0));
        }
      }
      if (lVar20 == -0x8000000000000000) {
        cVar11 = FUN_100c355d4(puVar19);
        if (cVar11 != '\0') {
          in_stack_00000018 = puVar19;
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
            unaff_x23 = (long *)&
                                __ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
            ;
            if (((bRam000000010b629658 - 1 < 2) ||
                ((bRam000000010b629658 != 0 &&
                 (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
                                     ), cVar11 != '\0')))) &&
               (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
                                   ), (uVar13 & 1) != 0)) {
              param_1 = ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
                        + 0x30;
              in_stack_00000090 = *(char **)(unaff_x19 + 0x78);
              in_stack_00000098 = *(undefined8 **)(unaff_x19 + 0x80);
              _bStack0000000000000108 = &stack0x00000090;
              in_stack_00000110 =
                   &
                   __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
              ;
              in_stack_00000118 = &stack0x00000018;
              in_stack_00000120 =
                   __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
              ;
              param_2 = 
              ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
              ;
              goto code_r0x0001007470a0;
            }
          }
          lVar20 = 
          ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            in_stack_00000028 =
                 *(long *)(
                          ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
                          + 0x20);
            in_stack_00000030 =
                 *(undefined8 *)
                  (
                  ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
                  + 0x28);
            in_stack_00000020 = 4;
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar12 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000020);
            if (iVar12 != 0) {
              lStack0000000000000050 =
                   ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he9ce7ec5cfa8ff33E
                   + 0x30;
              uVar21 = *(undefined8 *)(unaff_x19 + 0x80);
              *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x19 + 0x78);
              *(undefined8 *)(unaff_x29 + -0x78) = uVar21;
              _bStack0000000000000108 = (undefined8 *)(unaff_x29 + -0x80);
              in_stack_00000110 =
                   &
                   __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
              ;
              in_stack_00000118 = &stack0x00000018;
              in_stack_00000120 =
                   __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
              ;
              in_stack_00000098 = (undefined8 *)&stack0x00000108;
              in_stack_00000090 = s_Failed_to_read_config_file___108ac5a39;
              pcStack0000000000000080 = (char *)&stack0x00000090;
              puStack0000000000000088 = (undefined8 *)&UNK_10b208fd0;
              puStack0000000000000040 = (undefined *)&stack0x00000080;
              puStack0000000000000038 = (undefined8 *)0x1;
              uStack0000000000000048 = 1;
              unaff_x27[0x1b] = in_stack_00000028;
              unaff_x27[0x1a] = in_stack_00000020;
              *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000030;
              lVar14 = *(long *)(lVar20 + 0x60);
              uVar7 = *(undefined8 *)(lVar20 + 0x68);
              lVar22 = *(long *)(lVar20 + 0x50);
              uVar8 = *(undefined8 *)(lVar20 + 0x58);
              uVar21 = 1;
              if (lVar22 == 0) {
                uVar21 = 2;
              }
              uVar4 = *(undefined4 *)(lVar20 + 8);
              uVar5 = *(undefined4 *)(lVar20 + 0xc);
              *(undefined8 ***)(unaff_x29 + -0x70) = &stack0x00000038;
              *(undefined1 *)(unaff_x29 + -0x68) = 1;
              in_stack_000000f0 = (undefined8 *)(unaff_x29 + -0x70);
              in_stack_000000f8 = &DAT_1061c2098;
              uVar1 = 1;
              if (lVar14 == 0) {
                uVar1 = 2;
              }
              *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
              *(undefined8 ***)(unaff_x29 + -0x88) = &stack0x000000f0;
              *(undefined8 *)(unaff_x29 + -0xe0) = uVar21;
              *(long *)(unaff_x29 + -0xd8) = lVar22;
              *(undefined8 *)(unaff_x29 + -0xd0) = uVar8;
              *(undefined8 *)(unaff_x29 + -200) = uVar1;
              *(long *)(unaff_x29 + -0xc0) = lVar14;
              *(undefined8 *)(unaff_x29 + -0xb8) = uVar7;
              *(undefined4 *)(unaff_x29 + -0x98) = uVar4;
              *(undefined4 *)(unaff_x29 + -0x94) = uVar5;
              (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xe0);
            }
          }
          goto LAB_10074771c;
        }
        if (((ulong)puVar19 & 3) == 1) {
          puVar18 = (undefined8 *)((long)puVar19 - 1);
          uVar21 = *puVar18;
          puVar17 = *(undefined8 **)((long)puVar19 + 7);
          if ((code *)*puVar17 != (code *)0x0) {
            (*(code *)*puVar17)(uVar21);
          }
          goto LAB_100747744;
        }
        goto LAB_1007478dc;
      }
      bVar10 = false;
      lVar14 = *(long *)(unaff_x19 + 0x80);
      if (lVar14 != 0) {
        bVar10 = **(char **)(unaff_x19 + 0x78) == '/';
      }
      *(char **)(unaff_x29 + -0xe0) = *(char **)(unaff_x19 + 0x78);
      *(long *)(unaff_x29 + -0xd8) = lVar14;
      *(undefined1 *)(unaff_x29 + -0xd0) = 6;
      *(bool *)(unaff_x29 + -0xa6) = bVar10;
      *(undefined2 *)(unaff_x29 + -0xa8) = 0x201;
      __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                (&stack0x00000108,unaff_x29 + -0xe0);
      if ((bStack0000000000000108 - 7 < 3) &&
         (lVar14 = __ZN3std4path10Components7as_path17h6e58b97ab90cc3e2E(unaff_x29 + -0xe0),
         lVar14 != 0)) {
        __ZN25codex_utils_absolute_path20AbsolutePathBufGuard3new17h7de3fa69cf09380cE();
        FUN_100734e68(&stack0x000000a0,*(undefined8 *)(unaff_x19 + 0x78),
                      *(undefined8 *)(unaff_x19 + 0x80),puVar19,uVar21);
        plVar15 = (long *)(*
                          ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                          )();
        cVar11 = (char)plVar15[4];
        if (extraout_x9 == -0x8000000000000000) {
          if (cVar11 != '\x01') {
            if (cVar11 == '\x02') {
LAB_100747280:
              FUN_107c05e20(&UNK_10b38f438);
              goto LAB_100746ebc;
            }
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (plVar15,&DAT_1055621b8);
            *(undefined1 *)(plVar15 + 4) = 1;
          }
          if (*plVar15 == 0) {
            *plVar15 = -1;
            lVar14 = 0;
            if ((plVar15[1] & 0x7fffffffffffffffU) != 0) {
              _free(plVar15[2]);
              lVar14 = *plVar15 + 1;
            }
            *plVar15 = lVar14;
            plVar15[1] = -0x8000000000000000;
            if (lVar20 != 0) break;
            goto LAB_1007478dc;
          }
        }
        else {
          if (cVar11 != '\x01') {
            if (cVar11 == '\x02') goto LAB_100747280;
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (plVar15,&DAT_1055621b8);
            *(undefined1 *)(plVar15 + 4) = 1;
          }
          if (*plVar15 == 0) {
            *plVar15 = -1;
            if ((plVar15[1] & 0x7fffffffffffffffU) == 0) {
              lVar14 = 0;
            }
            else {
              _free(plVar15[2]);
              lVar14 = *plVar15 + 1;
            }
            *plVar15 = lVar14;
            plVar15[1] = -0x8000000000000000;
            if (lVar20 != 0) {
              _free(puVar19);
            }
            if (*(long *)(unaff_x19 + 0x70) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x78));
            }
LAB_100746f7c:
            lVar20 = *unaff_x27;
            lVar22 = unaff_x27[3];
            lVar14 = unaff_x27[2];
            unaff_x21[1] = unaff_x27[1];
            *unaff_x21 = lVar20;
            unaff_x21[3] = lVar22;
            unaff_x21[2] = lVar14;
            lVar20 = unaff_x27[4];
            lVar22 = unaff_x27[7];
            lVar14 = unaff_x27[6];
            unaff_x21[5] = unaff_x27[5];
            unaff_x21[4] = lVar20;
            unaff_x21[7] = lVar22;
            unaff_x21[6] = lVar14;
            lVar20 = unaff_x27[8];
            unaff_x21[9] = unaff_x27[9];
            unaff_x21[8] = lVar20;
            lVar20 = *unaff_x21;
            *unaff_x26 = 1;
            if (lVar20 == -0x7fffffffffffffff) goto LAB_100746fac;
            if (*(char *)(unaff_x20 + 0x98) == '\x03') {
              if (*(char *)(unaff_x20 + 0x90) == '\x03') {
                if (*(char *)(unaff_x20 + 0x88) == '\x03') {
                  plVar15 = *(long **)(unaff_x20 + 0x80);
                  if (*plVar15 == 0xcc) {
                    *plVar15 = 0x84;
                  }
                  else {
                    (**(code **)(plVar15[2] + 0x20))();
                  }
                }
                else if ((*(char *)(unaff_x20 + 0x88) == '\0') && (*(long *)(unaff_x20 + 0x68) != 0)
                        ) {
                  _free(*(undefined8 *)(unaff_x20 + 0x70));
                }
              }
              if (*(long *)(unaff_x20 + 0x40) != 0) {
                _free(*(undefined8 *)(unaff_x20 + 0x48));
              }
            }
            lVar20 = *unaff_x21;
            uVar16 = 1;
            *unaff_x25 = 1;
            if (lVar20 != -0x7fffffffffffffff) goto LAB_1007477bc;
            goto LAB_1007477b0;
          }
        }
        __ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E(&UNK_10b38f568);
LAB_100746ebc:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100746ec0);
        (*pcVar9)();
      }
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
          ((bRam000000010b629640 - 1 < 2 ||
           ((bRam000000010b629640 != 0 &&
            (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
                                ), cVar11 != '\0')))))) &&
         (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
                             ),
         lVar14 = 
         ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
         , (uVar13 & 1) != 0)) {
        in_stack_00000120 =
             (code *)(
                     ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
                     + 0x30);
        in_stack_00000090 = *(char **)(unaff_x19 + 0x78);
        in_stack_00000098 = *(undefined8 **)(unaff_x19 + 0x80);
        *(char ***)(unaff_x29 + -0x80) = &stack0x00000090;
        *(undefined **)(unaff_x29 + -0x78) =
             &
             __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        puStack0000000000000088 = (undefined8 *)(unaff_x29 + -0x80);
        pcStack0000000000000080 = s_Config_file_has_no_parent_direct_108ac5a11;
        puStack0000000000000058 = (undefined1 *)&stack0x00000080;
        puStack0000000000000060 = &UNK_10b208fd0;
        in_stack_00000110 = (undefined *)&stack0x00000058;
        _bStack0000000000000108 = (undefined8 *)0x1;
        in_stack_00000118 = (undefined8 *)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar14,&stack0x00000108);
        lVar14 = 
        ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puStack0000000000000040 =
               *(undefined **)
                (
                ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
                + 0x20);
          uStack0000000000000048 =
               *(undefined8 *)
                (
                ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
                + 0x28);
          puStack0000000000000038 = (undefined8 *)0x4;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000038);
          if (iVar12 != 0) {
            lVar22 = *(long *)(lVar14 + 0x60);
            uVar7 = *(undefined8 *)(lVar14 + 0x68);
            lVar6 = *(long *)(lVar14 + 0x50);
            uVar8 = *(undefined8 *)(lVar14 + 0x58);
            uVar21 = 1;
            if (lVar6 == 0) {
              uVar21 = 2;
            }
            uVar4 = *(undefined4 *)(lVar14 + 8);
            uVar5 = *(undefined4 *)(lVar14 + 0xc);
            *(byte **)(unaff_x29 + -0x70) = &stack0x00000108;
            *(undefined1 *)(unaff_x29 + -0x68) = 1;
            in_stack_000000f0 = (undefined8 *)(unaff_x29 + -0x70);
            in_stack_000000f8 = &DAT_1061c2098;
            uVar1 = 1;
            if (lVar22 == 0) {
              uVar1 = 2;
            }
            unaff_x27[0x1b] = (long)puStack0000000000000040;
            unaff_x27[0x1a] = (long)puStack0000000000000038;
            *(undefined8 *)(unaff_x29 + -0xa0) = uStack0000000000000048;
            *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
            *(undefined8 ***)(unaff_x29 + -0x88) = &stack0x000000f0;
            *(undefined8 *)(unaff_x29 + -0xe0) = uVar21;
            *(long *)(unaff_x29 + -0xd8) = lVar6;
            *(undefined8 *)(unaff_x29 + -0xd0) = uVar8;
            *(undefined8 *)(unaff_x29 + -200) = uVar1;
            *(long *)(unaff_x29 + -0xc0) = lVar22;
            *(undefined8 *)(unaff_x29 + -0xb8) = uVar7;
            *(undefined4 *)(unaff_x29 + -0x98) = uVar4;
            *(undefined4 *)(unaff_x29 + -0x94) = uVar5;
            (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xe0);
          }
        }
      }
      else {
        lVar14 = 
        ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000070 =
               *(long *)(
                        ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
                        + 0x20);
          in_stack_00000078 =
               *(undefined8 *)
                (
                ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
                + 0x28);
          in_stack_00000068 = 4;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000068);
          if (iVar12 != 0) {
            in_stack_00000120 =
                 (code *)(
                         ___ZN12codex_config11diagnostics36first_layer_config_error_for_entries28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hbc0229fae61f449bE
                         + 0x30);
            uVar21 = *(undefined8 *)(unaff_x19 + 0x80);
            *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x19 + 0x78);
            *(undefined8 *)(unaff_x29 + -0x78) = uVar21;
            *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
            *(undefined **)(unaff_x29 + -0x68) =
                 &
                 __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
            ;
            in_stack_00000098 = (undefined8 *)(unaff_x29 + -0x70);
            in_stack_00000090 = s_Config_file_has_no_parent_direct_108ac5a11;
            pcStack0000000000000080 = (char *)&stack0x00000090;
            puStack0000000000000088 = (undefined8 *)&UNK_10b208fd0;
            in_stack_00000110 = (undefined *)&stack0x00000080;
            _bStack0000000000000108 = (undefined8 *)0x1;
            in_stack_00000118 = (undefined8 *)0x1;
            unaff_x27[0x1b] = in_stack_00000070;
            unaff_x27[0x1a] = in_stack_00000068;
            *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000078;
            lVar22 = *(long *)(lVar14 + 0x60);
            uVar7 = *(undefined8 *)(lVar14 + 0x68);
            lVar6 = *(long *)(lVar14 + 0x50);
            uVar8 = *(undefined8 *)(lVar14 + 0x58);
            uVar21 = 1;
            if (lVar6 == 0) {
              uVar21 = 2;
            }
            uVar4 = *(undefined4 *)(lVar14 + 8);
            uVar5 = *(undefined4 *)(lVar14 + 0xc);
            in_stack_000000f0 = (undefined8 *)&stack0x00000108;
            in_stack_000000f8 = (undefined *)CONCAT71(in_stack_000000f8._1_7_,1);
            puStack0000000000000038 = &stack0x000000f0;
            puStack0000000000000040 = &DAT_1061c2098;
            uVar1 = 1;
            if (lVar22 == 0) {
              uVar1 = 2;
            }
            *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
            *(undefined8 ***)(unaff_x29 + -0x88) = &stack0x00000038;
            *(undefined8 *)(unaff_x29 + -0xe0) = uVar21;
            *(long *)(unaff_x29 + -0xd8) = lVar6;
            *(undefined8 *)(unaff_x29 + -0xd0) = uVar8;
            *(undefined8 *)(unaff_x29 + -200) = uVar1;
            *(long *)(unaff_x29 + -0xc0) = lVar22;
            *(undefined8 *)(unaff_x29 + -0xb8) = uVar7;
            *(undefined4 *)(unaff_x29 + -0x98) = uVar4;
            *(undefined4 *)(unaff_x29 + -0x94) = uVar5;
            (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xe0);
          }
        }
      }
    } while (lVar20 == 0);
  } while( true );
}

