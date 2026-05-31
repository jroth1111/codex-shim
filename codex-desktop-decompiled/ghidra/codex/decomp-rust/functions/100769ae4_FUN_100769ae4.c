
/* WARNING: Removing unreachable block (ram,0x00010076ad8c) */
/* WARNING: Removing unreachable block (ram,0x00010076a38c) */
/* WARNING: Removing unreachable block (ram,0x00010076ada0) */
/* WARNING: Removing unreachable block (ram,0x00010076a3d4) */
/* WARNING: Removing unreachable block (ram,0x00010076adb0) */
/* WARNING: Removing unreachable block (ram,0x00010076a3ec) */
/* WARNING: Removing unreachable block (ram,0x00010076a428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100769ae4(undefined *param_1)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint *puVar10;
  undefined1 uVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *unaff_x19;
  undefined8 *puVar18;
  undefined8 unaff_x21;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long lVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  char *pcVar26;
  ulong in_stack_00000548;
  undefined8 *puVar27;
  undefined8 in_stack_00000590;
  long in_stack_000005a0;
  undefined2 in_stack_000005a8;
  undefined1 in_stack_000005aa;
  undefined5 in_stack_000005ab;
  long in_stack_000005b8;
  undefined8 in_stack_000005c0;
  long in_stack_000005d0;
  undefined8 in_stack_000005d8;
  long in_stack_000005e8;
  undefined8 in_stack_000005f0;
  long in_stack_00000600;
  undefined8 in_stack_00000608;
  long in_stack_00000618;
  ulong in_stack_00000630;
  undefined8 in_stack_00000638;
  long in_stack_00000648;
  undefined8 in_stack_00000650;
  undefined8 in_stack_00000658;
  long in_stack_00000660;
  undefined8 in_stack_00000668;
  ulong in_stack_00000678;
  long in_stack_00000680;
  undefined8 in_stack_00000688;
  ulong in_stack_00000700;
  undefined8 in_stack_00000708;
  long in_stack_00000718;
  undefined8 in_stack_00000720;
  long in_stack_00000730;
  undefined8 in_stack_00000738;
  undefined *puVar28;
  undefined *puVar29;
  int in_stack_00000930;
  undefined8 in_stack_00000938;
  undefined8 in_stack_000009d0;
  undefined8 in_stack_000009d8;
  
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000002b0;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  puVar17 = (undefined8 *)(unaff_x29 + -0x80);
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar12 = unaff_x19[0x12];
  *(undefined1 *)((long)unaff_x19 + 0xea) = 0;
  uVar16 = unaff_x19[0x19];
  lVar23 = unaff_x19[0x18];
  uVar14 = unaff_x19[0x1a];
  if ((lVar12 != -0x8000000000000000) && (lVar12 != 0)) {
    _free(unaff_x19[0x13]);
  }
  *(undefined1 *)((long)unaff_x19 + 0xed) = 1;
  unaff_x19[0x13] = uVar16;
  unaff_x19[0x12] = lVar23;
  unaff_x19[0x14] = uVar14;
  if ((in_stack_00000548 & 3) == 1) {
    uVar14 = *(undefined8 *)(in_stack_00000548 - 1);
    puVar19 = *(undefined8 **)(in_stack_00000548 + 7);
    pcVar13 = (code *)*puVar19;
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(uVar14);
    }
    if (puVar19[1] != 0) {
      _free(uVar14);
    }
    _free((undefined8 *)(in_stack_00000548 - 1));
  }
  if (((*(byte *)((long)unaff_x19 + 0xea) & 1) == 0) || (unaff_x19[0x18] == 0)) {
    *(undefined1 *)((long)unaff_x19 + 0xea) = 0;
    if (unaff_x19[0x15] == -0x7fffffffffffffff) goto LAB_100769d28;
LAB_10076a10c:
    *(undefined1 *)((long)unaff_x19 + 0xeb) = 0;
    *(undefined1 *)((long)unaff_x19 + 0xeb) = 0;
    uVar14 = *unaff_x19;
    uVar20 = unaff_x19[1];
    if (uVar20 != 0) goto LAB_100769d38;
LAB_10076a120:
    lVar12 = 1;
  }
  else {
    _free(unaff_x19[0x19]);
    *(undefined1 *)((long)unaff_x19 + 0xea) = 0;
    if (unaff_x19[0x15] != -0x7fffffffffffffff) goto LAB_10076a10c;
LAB_100769d28:
    *(undefined1 *)((long)unaff_x19 + 0xeb) = 0;
    uVar14 = *unaff_x19;
    uVar20 = unaff_x19[1];
    if (uVar20 == 0) goto LAB_10076a120;
LAB_100769d38:
    lVar12 = _malloc(uVar20);
    if (lVar12 == 0) {
      FUN_107c03c64(1,uVar20);
      goto LAB_10076b9c8;
    }
  }
  _memcpy(lVar12,uVar14,uVar20);
  bVar7 = false;
  unaff_x19[0x1f] = uVar20;
  unaff_x19[0x20] = lVar12;
  unaff_x19[0x21] = uVar20;
  *(undefined1 *)((long)unaff_x19 + 0xec) = 1;
  pcVar26 = (char *)unaff_x19[2];
  uVar21 = unaff_x19[3];
  if ((uVar20 != 0) && (pcVar15 = (char *)(lVar12 + uVar20 + -1), pcVar15 != (char *)0x0)) {
    bVar7 = *pcVar15 != '/';
  }
  if ((uVar21 == 0) || (*pcVar26 != '/')) {
    if (bVar7) {
      thunk_FUN_108a85fec(unaff_x19 + 0x1f,uVar20,1,1,1);
      lVar12 = unaff_x19[0x20];
      lVar23 = unaff_x19[0x21];
      *(undefined1 *)(lVar12 + lVar23) = 0x2f;
      uVar22 = lVar23 + 1;
      unaff_x19[0x21] = uVar22;
      uVar6 = unaff_x19[0x1f] - uVar22;
      goto joined_r0x00010076a1c8;
    }
    if (uVar21 != 0) goto LAB_10076ad50;
  }
  else {
    unaff_x19[0x21] = 0;
    uVar22 = 0;
    uVar6 = uVar20;
joined_r0x00010076a1c8:
    uVar20 = uVar22;
    if (uVar6 < uVar21) {
LAB_10076ad50:
      thunk_FUN_108a85fec(unaff_x19 + 0x1f,uVar20,uVar21,1,1);
      lVar12 = unaff_x19[0x20];
      uVar20 = unaff_x19[0x21];
    }
  }
  _memcpy(lVar12 + uVar20,pcVar26,uVar21);
  uVar20 = uVar20 + uVar21;
  unaff_x19[0x21] = uVar20;
  if (uVar20 < 0x180) {
    _memcpy(&stack0x00000750,unaff_x19[0x20],uVar20);
    (&stack0x00000750)[uVar20] = 0;
    __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
              (&stack0x00000930,&stack0x00000750,uVar20 + 1);
    if (in_stack_00000930 == 1) {
      puVar17 = (undefined8 *)&UNK_10b4add80;
      goto LAB_10076a248;
    }
    iVar9 = _stat(in_stack_00000938,&stack0x00000310);
    if (iVar9 == -1) {
      puVar10 = (uint *)___error();
      puVar17 = (undefined8 *)((ulong)*puVar10 << 0x20 | 2);
      goto LAB_10076a248;
    }
    *(undefined8 *)(unaff_x28 + 0x60) = 0;
    *(undefined8 *)(unaff_x28 + 0x58) = 0;
    *(undefined8 *)(unaff_x28 + 0x70) = 0;
    *(undefined8 *)(unaff_x28 + 0x68) = 0;
    *(undefined8 *)(unaff_x28 + 0x80) = 0;
    *(undefined8 *)(unaff_x28 + 0x78) = 0;
    *(undefined8 *)(unaff_x28 + 0x90) = 0;
    *(undefined8 *)(unaff_x28 + 0x88) = 0;
    *(undefined8 *)(unaff_x28 + 0x20) = 0;
    *(undefined8 *)(unaff_x28 + 0x18) = 0;
    *(undefined8 *)(unaff_x28 + 0x30) = 0;
    *(undefined8 *)(unaff_x28 + 0x28) = 0;
    *(undefined8 *)(unaff_x28 + 0x40) = 0;
    *(undefined8 *)(unaff_x28 + 0x38) = 0;
    *(undefined8 *)(unaff_x28 + 0x50) = 0;
    *(undefined8 *)(unaff_x28 + 0x48) = 0;
    *(undefined8 *)(unaff_x28 + 0x10) = 0;
    *(undefined8 *)(unaff_x28 + 8) = 0;
    *(undefined1 *)(unaff_x19 + 0x1e) = 1;
    uVar14 = unaff_x19[4];
    uVar16 = unaff_x19[5];
    puVar19 = (undefined8 *)_malloc(0x18);
    if (puVar19 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_10076b9c8:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10076b9cc);
      (*pcVar13)();
    }
    *(undefined1 *)((long)unaff_x19 + 0xec) = 0;
    uVar24 = unaff_x19[0x1f];
    puVar19[1] = unaff_x19[0x20];
    *puVar19 = uVar24;
    puVar19[2] = unaff_x19[0x21];
    pcVar26 = (char *)0x1;
    *(undefined1 *)(unaff_x19 + 0x1e) = 0;
    puVar29 = (undefined *)0x0;
    __ZN17codex_file_search3run17h729d2a977a77ec0aE
              (&stack0x00000570,uVar14,uVar16,&stack0x00000310,&stack0x00000750,0);
    puVar28 = (undefined *)0x1;
    unaff_x19[0x25] = 1;
    unaff_x19[0x26] = puVar17;
    unaff_x19[0x28] = param_1;
    unaff_x19[0x27] = 1;
    *(undefined1 *)((long)unaff_x19 + 0xef) = 0;
    puVar27 = puVar17 + unaff_x19[0x27] * 10;
    puVar18 = puVar17;
    if (unaff_x19[0x27] == 0) {
LAB_10076a5d0:
      unaff_x19[0x22] = 0x8000000000000000;
    }
    else {
      puVar18 = (undefined8 *)(unaff_x29 + -0x30);
      param_1 = *(undefined **)(unaff_x29 + -0x78);
      puVar28 = (undefined *)*puVar17;
      lVar12 = *(long *)(unaff_x29 + -0x68);
      puVar29 = *(undefined **)(unaff_x29 + -0x70);
      uVar14 = *(undefined8 *)(unaff_x29 + -0x60);
      uVar16 = *(undefined8 *)(unaff_x29 + -0x48);
      uVar20 = *(ulong *)(unaff_x29 + -0x50);
      if (puVar28 == (undefined *)0x8000000000000000) goto LAB_10076a5d0;
      __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                (&stack0x00000310,uVar14,*(undefined8 *)(unaff_x29 + -0x58),param_1,puVar29);
      if (puVar28 != (undefined *)0x0) {
        _free(param_1);
      }
      if (lVar12 != 0) {
        _free(uVar14);
      }
      if ((uVar20 & 0x7fffffffffffffff) != 0) {
        _free(uVar16);
      }
      unaff_x19[0x23] = puVar19;
      unaff_x19[0x22] = 1;
      unaff_x19[0x24] = 1;
    }
    *(undefined1 *)((long)unaff_x19 + 0xee) = 1;
    if ((long)puVar27 - (long)puVar18 != 0) {
      uVar20 = (ulong)((long)puVar27 - (long)puVar18) / 0x50;
      puVar18 = puVar18 + 4;
      do {
        if (puVar18[-4] != 0) {
          _free(puVar18[-3]);
        }
        if (puVar18[-1] != 0) {
          _free(*puVar18);
        }
        if ((puVar18[2] & 0x7fffffffffffffff) != 0) {
          _free(puVar18[3]);
        }
        puVar18 = puVar18 + 10;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    _free(puVar17);
    if (unaff_x19[0x22] != -0x8000000000000000) {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
          ((bRam000000010b62fa60 - 1 < 2 ||
           ((bRam000000010b62fa60 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf43715ea365f0969E
                               ), cVar8 != '\0')))))) &&
         (uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf43715ea365f0969E
                             ), (uVar20 & 1) != 0)) {
        param_1 = &stack0x00000930;
        puVar28 = (undefined *)0x1;
        puVar29 = (undefined *)0x1;
        FUN_10076c1ac(&stack0x00000750);
        pcVar26 = s__state_db_missing_rollout_path_f_108ac6c22;
      }
      else {
        uVar14 = 
        ___ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf43715ea365f0969E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar9 = (**(code **)(puVar4 + 0x18))(puVar3,&stack0x000002e0);
          if (iVar9 != 0) {
            *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000930;
            *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
            param_1 = (undefined *)(unaff_x29 + -0x80);
            puVar28 = (undefined *)0x1;
            puVar29 = (undefined *)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar14,puVar3,puVar4,&stack0x00000570,&stack0x00000750);
            pcVar26 = (char *)(unaff_x19 + 4);
          }
        }
      }
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62fa18 - 1 < 2 ||
           ((bRam000000010b62fa18 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h689676196d540c0cE
                               ), cVar8 != '\0')))) &&
          (uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h689676196d540c0cE
                              ), (uVar20 & 1) != 0)))) {
        pcVar26 = &stack0x00000570;
        param_1 = &stack0x00000310;
        puVar28 = (undefined *)0x1;
        puVar29 = (undefined *)0x1;
        FUN_10076c2e8(&stack0x00000750);
      }
      else {
        uVar14 = 
        ___ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h689676196d540c0cE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar9 = (**(code **)(puVar4 + 0x18))(puVar3,&stack0x000002f8);
          if (iVar9 != 0) {
            pcVar26 = 
            "state db discrepancy during find_thread_path_by_id_str_in_subdir: falling_back";
            param_1 = &stack0x00000930;
            puVar28 = (undefined *)0x1;
            puVar29 = (undefined *)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar14,puVar3,puVar4,&stack0x00000570,&stack0x00000750);
          }
        }
      }
      if (unaff_x19[6] != 0) {
        puVar28 = &UNK_108ed3a13;
        param_1 = (undefined *)0x6;
        puVar29 = &UNK_108cdcb10;
        if ((lRam000000010b6302b0 == 0) &&
           (lVar12 = lRam000000010b6302a0 +
                     (*(long *)(lRam000000010b6302a8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
           lVar12 != 0)) {
          (**(code **)(lRam000000010b6302a8 + 0x18))
                    (lVar12,&UNK_108ed3a1f,0x1b,1,&stack0x00000750,2);
        }
      }
      lVar12 = unaff_x19[0x11];
      unaff_x19[0x2b] = unaff_x19[0x23];
      unaff_x19[0x2c] = unaff_x19[0x24];
      unaff_x19[0x2d] = lVar12;
      *(undefined1 *)((long)unaff_x19 + 0x352) = 0;
      *(undefined8 *)((long)unaff_x19 + 0x35c) = *(undefined8 *)((long)unaff_x19 + 0xe1);
      *(undefined8 *)((long)unaff_x19 + 0x354) = *(undefined8 *)((long)unaff_x19 + 0xd9);
      *(undefined1 *)((long)unaff_x19 + 0x364) = *(undefined1 *)((long)unaff_x19 + 0xe9);
      *(undefined1 *)((long)unaff_x19 + 0x353) = *(undefined1 *)(unaff_x19 + 0x1b);
      *(undefined1 *)(unaff_x19 + 0x6a) = *(undefined1 *)(unaff_x19 + 0x1b);
      unaff_x19[0x29] = unaff_x19[0x23];
      unaff_x19[0x2a] = unaff_x19[0x24];
      if (lVar12 != 0) {
        unaff_x19[0x2e] = lVar12;
        *(undefined1 *)((long)unaff_x19 + 0x351) = 0;
        if ((*(byte *)((long)unaff_x19 + 0x354) & 1) == 0) {
LAB_10076b42c:
          if ((*(byte *)((long)unaff_x19 + 0x351) & 1) == 0) {
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                ((bRam000000010b62fec8 - 1 < 2 ||
                 ((bRam000000010b62fec8 != 0 &&
                  (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1a30d47537b1df65E
                                     ), cVar8 != '\0')))))) &&
               (uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1a30d47537b1df65E
                                   ), (uVar20 & 1) != 0)) {
              *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000570;
              *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
              param_1 = (undefined *)(unaff_x29 + -0x80);
              puVar28 = (undefined *)0x1;
              FUN_10077b254(&stack0x00000750);
            }
            else {
              uVar14 = 
              ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1a30d47537b1df65E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puVar29 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar29 = &UNK_10b3c24c8;
                }
                puVar4 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_109adfc03;
                }
                iVar9 = (**(code **)(puVar29 + 0x18))(puVar4,&stack0x00000548);
                if (iVar9 != 0) {
                  *(undefined **)(unaff_x29 + -0x80) = &UNK_108cad392;
                  *(undefined8 *)(unaff_x29 + -0x78) = 0x9f;
                  param_1 = &stack0x00000560;
                  puVar28 = (undefined *)0x1;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (uVar14,puVar4,puVar29,&stack0x00000570,&stack0x00000750);
                }
              }
            }
          }
          unaff_x19[0x6d] = unaff_x19[0x29];
          unaff_x19[0x6e] = unaff_x19[0x2a];
          *(undefined1 *)(unaff_x19 + 0x94) = 0;
          FUN_1007663f0(&stack0x00000750,unaff_x19 + 0x6d,unaff_x21);
          if (puVar28 == (undefined *)0x8000000000000001) {
            uVar11 = 5;
          }
          else {
            _memcpy(&stack0x00000930,&stack0x00000760,0x1c8);
            if (*(char *)(unaff_x19 + 0x94) == '\x03') {
              FUN_100e70bcc(unaff_x19 + 0x71);
            }
            if (puVar28 == (undefined *)0x8000000000000000) {
              if (((ulong)param_1 & 3) == 1) {
                uVar14 = *(undefined8 *)(param_1 + -1);
                puVar17 = *(undefined8 **)(param_1 + 7);
                pcVar13 = (code *)*puVar17;
                if (pcVar13 != (code *)0x0) {
                  (*pcVar13)(uVar14);
                }
                if (puVar17[1] != 0) {
                  _free(uVar14);
                }
                _free(param_1 + -1);
              }
LAB_10076b834:
              uVar14 = 0;
              unaff_x19[0x6d] = 0;
              uVar16 = 1;
              unaff_x19[0x6e] = 1;
              unaff_x19[0x6f] = 0;
            }
            else {
              _memcpy(&stack0x00000580,&stack0x00000930,0x1c8);
              if (puVar28 != (undefined *)0x0) {
                _free(param_1);
              }
              if (puVar27 != (undefined8 *)0x0) {
                _free(in_stack_00000590);
              }
              if (in_stack_000005a0 != 0) {
                _free(CONCAT53(in_stack_000005ab,CONCAT12(in_stack_000005aa,in_stack_000005a8)));
              }
              if (in_stack_000005b8 != 0) {
                _free(in_stack_000005c0);
              }
              lVar12 = in_stack_00000678 + 0x7ffffffffffffffa;
              if (in_stack_00000678 < 0x8000000000000006) {
                lVar12 = 6;
              }
              if (lVar12 == 6) {
                FUN_100e0fca4(&stack0x00000678);
              }
              else if ((lVar12 == 4) && (in_stack_00000680 != 0)) {
                _free(in_stack_00000688);
              }
              if ((in_stack_000005d0 != -0x8000000000000000) && (in_stack_000005d0 != 0)) {
                _free(in_stack_000005d8);
              }
              if ((in_stack_000005e8 != -0x8000000000000000) && (in_stack_000005e8 != 0)) {
                _free(in_stack_000005f0);
              }
              if ((in_stack_00000600 != -0x8000000000000000) && (in_stack_00000600 != 0)) {
                _free(in_stack_00000608);
              }
              if ((in_stack_00000630 & 0x7fffffffffffffff) != 0) {
                _free(in_stack_00000638);
              }
              if ((in_stack_00000648 != -0x8000000000000000) &&
                 (FUN_100e40160(in_stack_00000650,in_stack_00000658), in_stack_00000648 != 0)) {
                _free(in_stack_00000650);
              }
              if ((in_stack_00000660 != -0x8000000000000000) && (in_stack_00000660 != 0)) {
                _free(in_stack_00000668);
              }
              if (in_stack_00000700 != 0x8000000000000001) {
                if ((in_stack_00000700 & 0x7fffffffffffffff) != 0) {
                  _free(in_stack_00000708);
                }
                if ((in_stack_00000718 != -0x8000000000000000) && (in_stack_00000718 != 0)) {
                  _free(in_stack_00000720);
                }
                if ((in_stack_00000730 != -0x8000000000000000) && (in_stack_00000730 != 0)) {
                  _free(in_stack_00000738);
                }
              }
              if (in_stack_00000618 == -0x8000000000000000) goto LAB_10076b834;
              unaff_x19[0x6d] = in_stack_00000618;
              unaff_x19[0x6f] = in_stack_000009d8;
              unaff_x19[0x6e] = in_stack_000009d0;
              uVar16 = unaff_x19[0x6e];
              uVar14 = unaff_x19[0x6f];
            }
            unaff_x19[0x70] = 0;
            unaff_x19[0x74] = unaff_x19[0x29];
            unaff_x19[0x75] = unaff_x19[0x2a];
            unaff_x19[0x76] = uVar16;
            unaff_x19[0x77] = uVar14;
            unaff_x19[0x78] = 8;
            unaff_x19[0x79] = 0;
            unaff_x19[0x7a] = unaff_x19[0x2e];
            unaff_x19[0x7b] = 0;
            *(undefined1 *)((long)unaff_x19 + 0x9b3) = 0;
            *(undefined1 *)((long)unaff_x19 + 0x9b4) = *(undefined1 *)(unaff_x19 + 0x6a);
            uVar20 = FUN_100776744(unaff_x19 + 0x70,unaff_x21);
            if ((uVar20 & 1) == 0) {
              FUN_100e70dc4(unaff_x19 + 0x70);
              if (unaff_x19[0x6d] != 0) {
                _free(unaff_x19[0x6e]);
              }
              goto LAB_10076b8e0;
            }
            uVar11 = 6;
          }
        }
        else {
          unaff_x19[0x6d] = lVar12;
          unaff_x19[0x6f] = *(undefined8 *)((long)unaff_x19 + 0x35d);
          unaff_x19[0x6e] = *(undefined8 *)((long)unaff_x19 + 0x355);
          *(undefined1 *)(unaff_x19 + 0x7c) = 0;
          FUN_1006ed49c(&stack0x00000310,unaff_x19 + 0x6d,unaff_x21);
          if (pcVar26 != (char *)0x8000000000000002) {
            _memcpy(unaff_x19 + 0x2f,&stack0x00000310,0x1d8);
            if (*(char *)(unaff_x19 + 0x7c) == '\x03') {
              if (*(char *)(unaff_x19 + 0x7b) == '\x03') {
                uVar14 = unaff_x19[0x79];
                puVar17 = (undefined8 *)unaff_x19[0x7a];
                pcVar13 = (code *)*puVar17;
                if (pcVar13 != (code *)0x0) {
                  (*pcVar13)(uVar14);
                }
                if (puVar17[1] != 0) {
                  _free(uVar14);
                }
              }
              else if (*(char *)(unaff_x19 + 0x7b) == '\0') {
                FUN_100d99140(unaff_x19 + 0x72);
              }
            }
            lVar12 = unaff_x19[0x2f];
            if (-0x7fffffffffffffff < lVar12) {
              _memcpy(unaff_x19 + 0x6d,unaff_x19 + 0x2f,0x1d8);
              *(undefined1 *)((long)unaff_x19 + 0x351) = 1;
              plVar1 = unaff_x19 + 0xa8;
              FUN_1014a72e4(plVar1,unaff_x19 + 0x6d);
              __ZN3std4path4Path11to_path_buf17hc9bd4cca887f646eE
                        (&stack0x00000750,unaff_x19[0x29],unaff_x19[0x2a]);
              if (*plVar1 != 0) {
                _free(unaff_x19[0xa9]);
              }
              unaff_x19[0xa9] = param_1;
              *plVar1 = (long)puVar28;
              unaff_x19[0xaa] = puVar29;
              __ZN13codex_rollout8state_db26normalize_cwd_for_state_db17ha321891c46d32b7aE
                        (&stack0x00000750,unaff_x19[0xb2],unaff_x19[0xb3]);
              if (unaff_x19[0xb1] != 0) {
                _free(unaff_x19[0xb2]);
              }
              unaff_x19[0xb2] = param_1;
              unaff_x19[0xb1] = puVar28;
              unaff_x19[0xb3] = puVar29;
              if (*(byte *)(unaff_x19 + 0x6a) != 2) {
                piVar2 = (int *)(unaff_x19 + 0xe1);
                if ((*(byte *)(unaff_x19 + 0x6a) & 1) == 0) {
                  *piVar2 = 0;
                }
                else if (*piVar2 == 0) {
                  *(undefined4 *)(unaff_x19 + 0xe2) = *(undefined4 *)((long)unaff_x19 + 0x704);
                  *(undefined8 *)piVar2 = *(undefined8 *)((long)unaff_x19 + 0x6fc);
                }
              }
              if ((unaff_x19[0xdd] == unaff_x19[0xa2]) &&
                 (unaff_x19[0xdc] == unaff_x19[0xa1] && unaff_x19[0xdb] == unaff_x19[0xa0])) {
                puVar28 = (undefined *)unaff_x19[0x6e];
                param_1 = (undefined *)unaff_x19[0x6f];
                if (unaff_x19[0xaa] == 0) {
                  in_stack_000005aa = false;
                }
                else {
                  in_stack_000005aa = *(char *)unaff_x19[0xa9] == '/';
                }
                in_stack_000005a8 = 0x201;
                iVar9 = FUN_10112a6c0(&stack0x00000570,&stack0x00000750);
                if ((((((iVar9 == 0) || (*(int *)(unaff_x19 + 0xde) != *(int *)(unaff_x19 + 0xa3)))
                      || (*(int *)((long)unaff_x19 + 0x6f4) != *(int *)((long)unaff_x19 + 0x51c)))
                     || ((*(int *)(unaff_x19 + 0xdf) != *(int *)(unaff_x19 + 0xa4) ||
                         (*(int *)((long)unaff_x19 + 0x6fc) != *(int *)((long)unaff_x19 + 0x524)))))
                    || (*(int *)(unaff_x19 + 0xe0) != *(int *)(unaff_x19 + 0xa5))) ||
                   (((*(int *)((long)unaff_x19 + 0x704) != *(int *)((long)unaff_x19 + 0x52c) ||
                     (unaff_x19[0xad] != unaff_x19[0x72])) ||
                    (iVar9 = _memcmp(unaff_x19[0xac],unaff_x19[0x71]), iVar9 != 0))))
                goto LAB_10076b010;
                if (*(char *)((long)unaff_x19 + 0x714) == '\x03') {
                  bVar7 = *(char *)((long)unaff_x19 + 0x53c) == '\x03';
                }
                else {
                  bVar7 = *(char *)((long)unaff_x19 + 0x714) == *(char *)((long)unaff_x19 + 0x53c);
                }
                if (!bVar7) goto LAB_10076b010;
                if (unaff_x19[0xc0] != -0x8000000000000000) {
                  if (((unaff_x19[0x85] != -0x8000000000000000) &&
                      (unaff_x19[0xc2] == unaff_x19[0x87])) &&
                     (iVar9 = _memcmp(unaff_x19[0xc1],unaff_x19[0x86]), iVar9 == 0))
                  goto LAB_10076ae98;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x85] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076ae98:
                if (unaff_x19[0xc3] != -0x8000000000000000) {
                  if (((unaff_x19[0x88] != -0x8000000000000000) &&
                      (unaff_x19[0xc5] == unaff_x19[0x8a])) &&
                     (iVar9 = _memcmp(unaff_x19[0xc4],unaff_x19[0x89]), iVar9 == 0))
                  goto LAB_10076aebc;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x88] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076aebc:
                if (unaff_x19[0xc6] != -0x8000000000000000) {
                  if (((unaff_x19[0x8b] != -0x8000000000000000) &&
                      (unaff_x19[200] == unaff_x19[0x8d])) &&
                     (iVar9 = _memcmp(unaff_x19[199],unaff_x19[0x8c]), iVar9 == 0))
                  goto LAB_10076aee0;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x8b] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076aee0:
                if ((unaff_x19[0xb0] != unaff_x19[0x75]) ||
                   (iVar9 = _memcmp(unaff_x19[0xaf],unaff_x19[0x74]), iVar9 != 0))
                goto LAB_10076b010;
                if (unaff_x19[0xc9] != -0x8000000000000000) {
                  if (((unaff_x19[0x8e] != -0x8000000000000000) &&
                      (unaff_x19[0xcb] == unaff_x19[0x90])) &&
                     (iVar9 = _memcmp(unaff_x19[0xca],unaff_x19[0x8f]), iVar9 == 0))
                  goto LAB_10076af24;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x8e] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076af24:
                if (*(char *)((long)unaff_x19 + 0x715) == '\x06') {
                  bVar7 = *(char *)((long)unaff_x19 + 0x53d) == '\x06';
                }
                else {
                  bVar7 = *(char *)((long)unaff_x19 + 0x715) == *(char *)((long)unaff_x19 + 0x53d);
                }
                if ((((!bVar7) ||
                     (iVar9 = FUN_100f31ddc(unaff_x19[0xb2],unaff_x19[0xb3],unaff_x19[0x77],
                                            unaff_x19[0x78]), iVar9 == 0)) ||
                    ((unaff_x19[0xb6] != unaff_x19[0x7b] ||
                     ((iVar9 = _memcmp(unaff_x19[0xb5],unaff_x19[0x7a]), iVar9 != 0 ||
                      (unaff_x19[0xb9] != unaff_x19[0x7e])))))) ||
                   (iVar9 = _memcmp(unaff_x19[0xb8],unaff_x19[0x7d]), iVar9 != 0))
                goto LAB_10076b010;
                if (unaff_x19[0xcc] != -0x8000000000000000) {
                  if (((unaff_x19[0x91] != -0x8000000000000000) &&
                      (unaff_x19[0xce] == unaff_x19[0x93])) &&
                     (iVar9 = _memcmp(unaff_x19[0xcd],unaff_x19[0x92]), iVar9 == 0))
                  goto LAB_10076ba8c;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x91] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076ba8c:
                if (((unaff_x19[0xbc] != unaff_x19[0x81]) ||
                    (iVar9 = _memcmp(unaff_x19[0xbb],unaff_x19[0x80]), iVar9 != 0)) ||
                   ((unaff_x19[0xbf] != unaff_x19[0x84] ||
                    (iVar9 = _memcmp(unaff_x19[0xbe],unaff_x19[0x83]), iVar9 != 0))))
                goto LAB_10076b010;
                if (unaff_x19[0xcf] != -0x8000000000000000) {
                  if (((unaff_x19[0x94] != -0x8000000000000000) &&
                      (unaff_x19[0xd1] == unaff_x19[0x96])) &&
                     (iVar9 = _memcmp(unaff_x19[0xd0],unaff_x19[0x95]), iVar9 == 0))
                  goto LAB_10076baf0;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x94] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076baf0:
                if (*(int *)(unaff_x19 + 0xe1) == 0) {
                  if (*(int *)(unaff_x19 + 0xa6) == 0) goto LAB_10076bba4;
                  goto LAB_10076b010;
                }
                if (((*(int *)(unaff_x19 + 0xe1) != *(int *)(unaff_x19 + 0xa6)) ||
                    (*(int *)((long)unaff_x19 + 0x70c) != *(int *)((long)unaff_x19 + 0x534))) ||
                   (*(int *)(unaff_x19 + 0xe2) != *(int *)(unaff_x19 + 0xa7))) goto LAB_10076b010;
LAB_10076bba4:
                if (unaff_x19[0xd2] != -0x8000000000000000) {
                  if (((unaff_x19[0x97] != -0x8000000000000000) &&
                      (unaff_x19[0xd4] == unaff_x19[0x99])) &&
                     (iVar9 = _memcmp(unaff_x19[0xd3],unaff_x19[0x98]), iVar9 == 0))
                  goto LAB_10076bbc8;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x97] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076bbc8:
                if (unaff_x19[0xd5] != -0x8000000000000000) {
                  if (((unaff_x19[0x9a] != -0x8000000000000000) &&
                      (unaff_x19[0xd7] == unaff_x19[0x9c])) &&
                     (iVar9 = _memcmp(unaff_x19[0xd6],unaff_x19[0x9b]), iVar9 == 0))
                  goto LAB_10076bbec;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x9a] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076bbec:
                if ((unaff_x19[0xd8] == -0x8000000000000000) ||
                   (unaff_x19[0x9d] == -0x8000000000000000)) {
                  if ((unaff_x19[0xd8] != -0x8000000000000000) ||
                     (unaff_x19[0x9d] != -0x8000000000000000)) goto LAB_10076b010;
                }
                else if ((unaff_x19[0xda] != unaff_x19[0x9f]) ||
                        (iVar9 = _memcmp(unaff_x19[0xd9],unaff_x19[0x9e]), iVar9 != 0))
                goto LAB_10076b010;
              }
              else {
LAB_10076b010:
                if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                   (((bRam000000010b62fee0 - 1 < 2 ||
                     ((bRam000000010b62fee0 != 0 &&
                      (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                         (&
                                          __ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3bb90954dacb8502E
                                         ), cVar8 != '\0')))) &&
                    (uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                        (
                                        ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3bb90954dacb8502E
                                        ), (uVar20 & 1) != 0)))) {
                  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000570;
                  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
                  param_1 = (undefined *)(unaff_x29 + -0x80);
                  puVar28 = (undefined *)0x1;
                  FUN_10077b118(&stack0x00000750);
                }
                else {
                  uVar14 = 
                  ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3bb90954dacb8502E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    puVar29 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar29 = &UNK_10b3c24c8;
                    }
                    puVar4 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar4 = &UNK_109adfc03;
                    }
                    iVar9 = (**(code **)(puVar29 + 0x18))(puVar4,&stack0x000004f0);
                    if (iVar9 != 0) {
                      *(undefined **)(unaff_x29 + -0x80) = &UNK_108cad343;
                      *(undefined8 *)(unaff_x29 + -0x78) = 0x9f;
                      param_1 = &stack0x00000560;
                      puVar28 = (undefined *)0x1;
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (uVar14,puVar4,puVar29,&stack0x00000570,&stack0x00000750);
                    }
                  }
                }
                unaff_x19[0xe3] = unaff_x19[0x2e];
                unaff_x19[0xe4] = plVar1;
                *(undefined1 *)(unaff_x19 + 0x106) = 0;
                unaff_x19[0xe5] = unaff_x19[0x2e];
                unaff_x19[0xe6] = plVar1;
                unaff_x19[0xe7] = 0;
                *(undefined1 *)(unaff_x19 + 0xeb) = 0;
                auVar25 = FUN_1006ef314(unaff_x19 + 0xe5,unaff_x21);
                if ((auVar25._0_8_ & 1) != 0) {
                  *(undefined1 *)(unaff_x19 + 0x106) = 3;
                  uVar11 = 4;
                  goto LAB_10076b8b0;
                }
                FUN_100d7b288(unaff_x19 + 0xe5);
                *(undefined1 *)(unaff_x19 + 0x106) = 1;
                if (auVar25._8_8_ != (undefined8 *)0x0) {
                  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                      ((bRam000000010b62fef8 - 1 < 2 ||
                       ((bRam000000010b62fef8 != 0 &&
                        (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                           (&
                                            __ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                           ), cVar8 != '\0')))))) &&
                     (uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                         (
                                         ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                         ), (uVar20 & 1) != 0)) {
                    puVar27 = (undefined8 *)
                              (
                              ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                              + 0x30);
                    uVar14 = unaff_x19[0x2a];
                    *(undefined8 *)(unaff_x29 + -0x80) = unaff_x19[0x29];
                    *(undefined8 *)(unaff_x29 + -0x78) = uVar14;
                    puVar28 = (undefined *)(unaff_x29 + -0x80);
                    param_1 = &
                              __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                    ;
                    FUN_10077afdc(&stack0x00000570);
                  }
                  else {
                    lVar12 = 
                    ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      uVar14 = *(undefined8 *)
                                (
                                ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                + 0x20);
                      uVar16 = *(undefined8 *)
                                (
                                ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                + 0x28);
                      puVar29 = puRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        puVar29 = &UNK_10b3c24c8;
                      }
                      puVar4 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar4 = &UNK_109adfc03;
                      }
                      iVar9 = (**(code **)(puVar29 + 0x18))(puVar4,&stack0x00000510);
                      if (iVar9 != 0) {
                        puVar27 = (undefined8 *)
                                  (
                                  ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                  + 0x30);
                        puVar28 = &stack0x00000560;
                        param_1 = &
                                  __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                        ;
                        *(undefined8 *)(unaff_x29 + -0x78) = uVar14;
                        *(undefined8 *)(unaff_x29 + -0x80) = 2;
                        *(undefined8 *)(unaff_x29 + -0x70) = uVar16;
                        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (lVar12,puVar4,puVar29,unaff_x29 + -0x80,&stack0x00000570);
                      }
                    }
                  }
                  (**(code **)*auVar25._8_8_)();
                  FUN_100e31b20(unaff_x19 + 0xa8);
                  FUN_100e31b20(unaff_x19 + 0x6d);
                  lVar12 = unaff_x19[0x2f];
                  goto LAB_10076b410;
                }
              }
              FUN_100e31b20(unaff_x19 + 0xa8);
              FUN_100e31b20(unaff_x19 + 0x6d);
              if (unaff_x19[0x2f] == -0x7fffffffffffffff) {
                (*(code *)**(undefined8 **)unaff_x19[0x30])();
              }
              goto LAB_10076b8e0;
            }
LAB_10076b410:
            if (lVar12 == -0x7fffffffffffffff) {
              (*(code *)**(undefined8 **)unaff_x19[0x30])();
            }
            goto LAB_10076b42c;
          }
          uVar11 = 3;
        }
LAB_10076b8b0:
        *(undefined1 *)((long)unaff_x19 + 0x352) = uVar11;
        *unaff_x27 = 0x8000000000000002;
        uVar11 = 6;
        goto LAB_10076b940;
      }
LAB_10076b8e0:
      *(undefined1 *)((long)unaff_x19 + 0x352) = 1;
      FUN_100e8c864(unaff_x19 + 0x29);
    }
    uVar20 = unaff_x19[0x22];
    uVar21 = unaff_x19[0x23];
    uVar22 = unaff_x19[0x24];
    *(undefined2 *)((long)unaff_x19 + 0xed) = 0;
    if (uVar20 == 0x8000000000000000) {
      uVar22 = unaff_x19[0x14];
      uVar21 = unaff_x19[0x13];
      uVar20 = unaff_x19[0x12];
    }
    else if ((unaff_x19[0x12] & 0x7fffffffffffffff) != 0) {
      _free(unaff_x19[0x13]);
    }
    *(undefined1 *)(unaff_x19 + 0x1e) = 0;
    *(undefined4 *)((long)unaff_x19 + 0xec) = 0;
  }
  else {
    thunk_FUN_108a820a8(&stack0x00000570,unaff_x19[0x20],uVar20,&DAT_10603cc64);
LAB_10076a248:
    if (((ulong)puVar17 & 3) == 1) {
      uVar14 = *(undefined8 *)((long)puVar17 + -1);
      puVar19 = *(undefined8 **)((long)puVar17 + 7);
      pcVar13 = (code *)*puVar19;
      if (pcVar13 != (code *)0x0) {
        (*pcVar13)(uVar14);
      }
      if (puVar19[1] != 0) {
        _free(uVar14);
      }
      _free((undefined8 *)((long)puVar17 + -1));
      *(undefined1 *)((long)unaff_x19 + 0xed) = 0;
      uVar20 = unaff_x19[0x12];
      uVar21 = unaff_x19[0x13];
      uVar22 = unaff_x19[0x14];
      bVar5 = *(byte *)((long)unaff_x19 + 0xec);
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0xed) = 0;
      uVar20 = unaff_x19[0x12];
      uVar21 = unaff_x19[0x13];
      uVar22 = unaff_x19[0x14];
      bVar5 = *(byte *)((long)unaff_x19 + 0xec);
    }
    if (((bVar5 & 1) != 0) && (unaff_x19[0x1f] != 0)) {
      _free(unaff_x19[0x20]);
    }
    *(undefined1 *)((long)unaff_x19 + 0xec) = 0;
    if ((((*(byte *)((long)unaff_x19 + 0xed) & 1) != 0) && (unaff_x19[0x12] != -0x8000000000000000))
       && (unaff_x19[0x12] != 0)) {
      _free(unaff_x19[0x13]);
    }
    *(undefined1 *)((long)unaff_x19 + 0xed) = 0;
  }
  *unaff_x27 = uVar20;
  unaff_x27[1] = uVar21;
  uVar11 = 1;
  unaff_x27[2] = uVar22;
LAB_10076b940:
  *(undefined1 *)((long)unaff_x19 + 0xf1) = uVar11;
  return;
}

