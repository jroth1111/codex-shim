
/* WARNING: Removing unreachable block (ram,0x00010076ad8c) */
/* WARNING: Removing unreachable block (ram,0x00010076a38c) */
/* WARNING: Removing unreachable block (ram,0x00010076ada0) */
/* WARNING: Removing unreachable block (ram,0x00010076a3d4) */
/* WARNING: Removing unreachable block (ram,0x00010076adb0) */
/* WARNING: Removing unreachable block (ram,0x00010076a3ec) */
/* WARNING: Removing unreachable block (ram,0x00010076a428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007694d4(void)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  undefined1 uVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  char *unaff_x25;
  ulong *unaff_x26;
  ulong *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  char *pcVar26;
  undefined *puVar27;
  undefined8 uVar28;
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
  undefined *puVar29;
  undefined *puVar30;
  int in_stack_00000930;
  undefined *in_stack_00000938;
  undefined8 in_stack_000009d0;
  undefined8 in_stack_000009d8;
  
  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x000002b0;
  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
  FUN_10076c7dc(&stack0x00000310);
  if (((*unaff_x26 < 4) &&
      ((bRam000000010b62fa00 - 1 < 2 ||
       ((bRam000000010b62fa00 != 0 &&
        (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h588d15575871e9c2E
                            ), cVar12 != '\0')))))) &&
     (uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h588d15575871e9c2E
                         ), (uVar15 & 1) != 0)) {
    in_stack_00000930 = (int)&stack0x00000310;
    in_stack_00000938 = &UNK_10b208fd0;
    FUN_10076c424(&stack0x00000570);
  }
  else {
    uVar28 = 
    ___ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h588d15575871e9c2E
    ;
    if ((*unaff_x25 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar27 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar27 = &UNK_10b3c24c8;
      }
      puVar29 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar29 = &UNK_109adfc03;
      }
      iVar13 = (**(code **)(puVar27 + 0x18))(puVar29,&stack0x00000238);
      if (iVar13 != 0) {
        in_stack_00000930 = 0x8cad1e0;
        in_stack_00000938 = (undefined *)0xa9;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar28,puVar29,puVar27,&stack0x00000310,&stack0x00000570);
      }
    }
  }
  puVar27 = (undefined *)0x6;
  uVar28 = 8;
  if ((lRam000000010b6302b0 == 0) &&
     (lVar14 = lRam000000010b6302a0 +
               (*(long *)(lRam000000010b6302a8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
     lVar14 != 0)) {
    (**(code **)(lRam000000010b6302a8 + 0x18))(lVar14,&UNK_108ed3a1f,0x1b,1,&stack0x00000570,2);
  }
  func_0x000100e13d44(&stack0x00000750);
  if (((*(byte *)((long)unaff_x19 + 0xea) & 1) == 0) || (unaff_x19[0x18] == 0)) {
    *(undefined1 *)((long)unaff_x19 + 0xea) = 0;
    if (unaff_x19[0x15] == -0x7fffffffffffffff) goto LAB_100769d28;
LAB_10076a10c:
    *(undefined1 *)((long)unaff_x19 + 0xeb) = 0;
    *(undefined1 *)((long)unaff_x19 + 0xeb) = 0;
    uVar19 = *unaff_x19;
    uVar15 = unaff_x19[1];
    if (uVar15 != 0) goto LAB_100769d38;
LAB_10076a120:
    lVar14 = 1;
  }
  else {
    _free(unaff_x19[0x19]);
    *(undefined1 *)((long)unaff_x19 + 0xea) = 0;
    if (unaff_x19[0x15] != -0x7fffffffffffffff) goto LAB_10076a10c;
LAB_100769d28:
    *(undefined1 *)((long)unaff_x19 + 0xeb) = 0;
    uVar19 = *unaff_x19;
    uVar15 = unaff_x19[1];
    if (uVar15 == 0) goto LAB_10076a120;
LAB_100769d38:
    lVar14 = _malloc(uVar15);
    if (lVar14 == 0) {
      FUN_107c03c64(1,uVar15);
      goto LAB_10076b9c8;
    }
  }
  _memcpy(lVar14,uVar19,uVar15);
  bVar11 = false;
  unaff_x19[0x1f] = uVar15;
  unaff_x19[0x20] = lVar14;
  unaff_x19[0x21] = uVar15;
  *(undefined1 *)((long)unaff_x19 + 0xec) = 1;
  pcVar26 = (char *)unaff_x19[2];
  uVar21 = unaff_x19[3];
  if ((uVar15 != 0) && (pcVar18 = (char *)(lVar14 + uVar15 + -1), pcVar18 != (char *)0x0)) {
    bVar11 = *pcVar18 != '/';
  }
  if ((uVar21 == 0) || (*pcVar26 != '/')) {
    if (bVar11) {
      thunk_FUN_108a85fec(unaff_x19 + 0x1f,uVar15,1,1,1);
      lVar14 = unaff_x19[0x20];
      lVar20 = unaff_x19[0x21];
      *(undefined1 *)(lVar14 + lVar20) = 0x2f;
      uVar22 = lVar20 + 1;
      unaff_x19[0x21] = uVar22;
      uVar7 = unaff_x19[0x1f] - uVar22;
      goto joined_r0x00010076a1c8;
    }
    if (uVar21 != 0) goto LAB_10076ad50;
  }
  else {
    unaff_x19[0x21] = 0;
    uVar22 = 0;
    uVar7 = uVar15;
joined_r0x00010076a1c8:
    uVar15 = uVar22;
    if (uVar7 < uVar21) {
LAB_10076ad50:
      thunk_FUN_108a85fec(unaff_x19 + 0x1f,uVar15,uVar21,1,1);
      lVar14 = unaff_x19[0x20];
      uVar15 = unaff_x19[0x21];
    }
  }
  _memcpy(lVar14 + uVar15,pcVar26,uVar21);
  uVar15 = uVar15 + uVar21;
  unaff_x19[0x21] = uVar15;
  if (uVar15 < 0x180) {
    _memcpy(&stack0x00000750,unaff_x19[0x20],uVar15);
    (&stack0x00000750)[uVar15] = 0;
    __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
              (&stack0x00000930,&stack0x00000750,uVar15 + 1);
    if (in_stack_00000930 == 1) {
      puVar27 = &UNK_10b4add80;
      goto LAB_10076a248;
    }
    iVar13 = _stat(in_stack_00000938,&stack0x00000310);
    if (iVar13 == -1) {
      puVar16 = (uint *)___error();
      puVar27 = (undefined *)((ulong)*puVar16 << 0x20 | 2);
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
    lVar14 = 6;
    *(undefined1 *)(unaff_x19 + 0x1e) = 1;
    uVar19 = unaff_x19[4];
    uVar5 = unaff_x19[5];
    puVar23 = (undefined8 *)_malloc(0x18);
    if (puVar23 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_10076b9c8:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10076b9cc);
      (*pcVar10)();
    }
    *(undefined1 *)((long)unaff_x19 + 0xec) = 0;
    uVar24 = unaff_x19[0x1f];
    puVar23[1] = unaff_x19[0x20];
    *puVar23 = uVar24;
    puVar23[2] = unaff_x19[0x21];
    pcVar26 = (char *)0x1;
    *(undefined1 *)(unaff_x19 + 0x1e) = 0;
    __ZN17codex_file_search3run17h729d2a977a77ec0aE
              (&stack0x00000570,uVar19,uVar5,&stack0x00000310,&stack0x00000750,0);
    unaff_x19[0x25] = &UNK_108ed3a13;
    unaff_x19[0x26] = 6;
    unaff_x19[0x28] = 0x10;
    unaff_x19[0x27] = &UNK_108cdcb10;
    *(undefined1 *)((long)unaff_x19 + 0xef) = 0;
    uVar5 = uRam000000000000003e;
    uVar15 = uRam0000000000000036;
    uVar19 = uRam0000000000000026;
    lVar8 = lRam000000000000001e;
    puVar30 = puRam0000000000000016;
    puVar29 = puRam000000000000000e;
    puVar27 = puRam0000000000000006;
    lVar20 = unaff_x19[0x27] * 0x50 + 6;
    puVar4 = &UNK_108cdcb10;
    puVar3 = (undefined *)0x10;
    puVar9 = (undefined *)0x0;
    if (unaff_x19[0x27] == 0) {
LAB_10076a5d0:
      puVar30 = puVar9;
      puVar29 = puVar3;
      puVar27 = puVar4;
      unaff_x19[0x22] = 0x8000000000000000;
    }
    else {
      lVar14 = 0x56;
      puVar4 = puRam0000000000000006;
      puVar3 = puRam000000000000000e;
      puVar9 = puRam0000000000000016;
      if (puRam0000000000000006 == (undefined *)0x8000000000000000) goto LAB_10076a5d0;
      __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                (&stack0x00000310,uRam0000000000000026,uRam000000000000002e,puRam000000000000000e,
                 puRam0000000000000016);
      if (puVar27 != (undefined *)0x0) {
        _free(puVar29);
      }
      if (lVar8 != 0) {
        _free(uVar19);
      }
      if ((uVar15 & 0x7fffffffffffffff) != 0) {
        _free(uVar5);
      }
      unaff_x19[0x23] = puVar23;
      unaff_x19[0x22] = 1;
      unaff_x19[0x24] = 1;
    }
    *(undefined1 *)((long)unaff_x19 + 0xee) = 1;
    if (lVar20 - lVar14 != 0) {
      uVar15 = (ulong)(lVar20 - lVar14) / 0x50;
      puVar23 = (undefined8 *)(lVar14 + 0x20);
      do {
        if (puVar23[-4] != 0) {
          _free(puVar23[-3]);
        }
        if (puVar23[-1] != 0) {
          _free(*puVar23);
        }
        if ((puVar23[2] & 0x7fffffffffffffff) != 0) {
          _free(puVar23[3]);
        }
        puVar23 = puVar23 + 10;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    _free(6);
    if (unaff_x19[0x22] != -0x8000000000000000) {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
         (((bRam000000010b62fa60 - 1 < 2 ||
           ((bRam000000010b62fa60 != 0 &&
            (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf43715ea365f0969E
                                ), cVar12 != '\0')))) &&
          (uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf43715ea365f0969E
                              ), (uVar15 & 1) != 0)))) {
        puVar29 = &stack0x00000930;
        puVar27 = (undefined *)0x1;
        puVar30 = (undefined *)0x1;
        FUN_10076c1ac(&stack0x00000750);
        pcVar26 = s__state_db_missing_rollout_path_f_108ac6c22;
      }
      else {
        uVar19 = 
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
          iVar13 = (**(code **)(puVar4 + 0x18))(puVar3,&stack0x000002e0);
          if (iVar13 != 0) {
            *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000930;
            *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
            puVar29 = (undefined *)(unaff_x29 + -0x80);
            puVar27 = (undefined *)0x1;
            puVar30 = (undefined *)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar19,puVar3,puVar4,&stack0x00000570,&stack0x00000750);
            pcVar26 = (char *)(unaff_x19 + 4);
          }
        }
      }
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b62fa18 - 1 < 2 ||
           ((bRam000000010b62fa18 != 0 &&
            (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h689676196d540c0cE
                                ), cVar12 != '\0')))))) &&
         (uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h689676196d540c0cE
                             ), (uVar15 & 1) != 0)) {
        pcVar26 = &stack0x00000570;
        puVar29 = &stack0x00000310;
        puVar27 = (undefined *)0x1;
        puVar30 = (undefined *)0x1;
        FUN_10076c2e8(&stack0x00000750);
      }
      else {
        uVar19 = 
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
          iVar13 = (**(code **)(puVar4 + 0x18))(puVar3,&stack0x000002f8);
          if (iVar13 != 0) {
            pcVar26 = 
            "state db discrepancy during find_thread_path_by_id_str_in_subdir: falling_back";
            puVar29 = &stack0x00000930;
            puVar27 = (undefined *)0x1;
            puVar30 = (undefined *)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar19,puVar3,puVar4,&stack0x00000570,&stack0x00000750);
          }
        }
      }
      if (unaff_x19[6] != 0) {
        puVar27 = &UNK_108ed3a13;
        puVar29 = (undefined *)0x6;
        puVar30 = &UNK_108cdcb10;
        if ((lRam000000010b6302b0 == 0) &&
           (lVar14 = lRam000000010b6302a0 +
                     (*(long *)(lRam000000010b6302a8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
           lVar14 != 0)) {
          (**(code **)(lRam000000010b6302a8 + 0x18))
                    (lVar14,&UNK_108ed3a1f,0x1b,1,&stack0x00000750,2);
        }
      }
      lVar14 = unaff_x19[0x11];
      unaff_x19[0x2b] = unaff_x19[0x23];
      unaff_x19[0x2c] = unaff_x19[0x24];
      unaff_x19[0x2d] = lVar14;
      *(undefined1 *)((long)unaff_x19 + 0x352) = 0;
      *(undefined8 *)((long)unaff_x19 + 0x35c) = *(undefined8 *)((long)unaff_x19 + 0xe1);
      *(undefined8 *)((long)unaff_x19 + 0x354) = *(undefined8 *)((long)unaff_x19 + 0xd9);
      *(undefined1 *)((long)unaff_x19 + 0x364) = *(undefined1 *)((long)unaff_x19 + 0xe9);
      *(undefined1 *)((long)unaff_x19 + 0x353) = *(undefined1 *)(unaff_x19 + 0x1b);
      *(undefined1 *)(unaff_x19 + 0x6a) = *(undefined1 *)(unaff_x19 + 0x1b);
      unaff_x19[0x29] = unaff_x19[0x23];
      unaff_x19[0x2a] = unaff_x19[0x24];
      if (lVar14 != 0) {
        unaff_x19[0x2e] = lVar14;
        *(undefined1 *)((long)unaff_x19 + 0x351) = 0;
        if ((*(byte *)((long)unaff_x19 + 0x354) & 1) == 0) {
LAB_10076b42c:
          if ((*(byte *)((long)unaff_x19 + 0x351) & 1) == 0) {
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                ((bRam000000010b62fec8 - 1 < 2 ||
                 ((bRam000000010b62fec8 != 0 &&
                  (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1a30d47537b1df65E
                                      ), cVar12 != '\0')))))) &&
               (uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1a30d47537b1df65E
                                   ), (uVar15 & 1) != 0)) {
              *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000570;
              *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
              puVar29 = (undefined *)(unaff_x29 + -0x80);
              puVar27 = (undefined *)0x1;
              FUN_10077b254(&stack0x00000750);
            }
            else {
              uVar19 = 
              ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1a30d47537b1df65E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puVar30 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar30 = &UNK_10b3c24c8;
                }
                puVar4 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_109adfc03;
                }
                iVar13 = (**(code **)(puVar30 + 0x18))(puVar4,&stack0x00000548);
                if (iVar13 != 0) {
                  *(undefined **)(unaff_x29 + -0x80) = &UNK_108cad392;
                  *(undefined8 *)(unaff_x29 + -0x78) = 0x9f;
                  puVar29 = &stack0x00000560;
                  puVar27 = (undefined *)0x1;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (uVar19,puVar4,puVar30,&stack0x00000570,&stack0x00000750);
                }
              }
            }
          }
          unaff_x19[0x6d] = unaff_x19[0x29];
          unaff_x19[0x6e] = unaff_x19[0x2a];
          *(undefined1 *)(unaff_x19 + 0x94) = 0;
          FUN_1007663f0(&stack0x00000750,unaff_x19 + 0x6d,unaff_x21);
          if (puVar27 == (undefined *)0x8000000000000001) {
            uVar17 = 5;
          }
          else {
            _memcpy(&stack0x00000930,&stack0x00000760,0x1c8);
            if (*(char *)(unaff_x19 + 0x94) == '\x03') {
              FUN_100e70bcc(unaff_x19 + 0x71);
            }
            if (puVar27 == (undefined *)0x8000000000000000) {
              if (((ulong)puVar29 & 3) == 1) {
                uVar28 = *(undefined8 *)(puVar29 + -1);
                puVar23 = *(undefined8 **)(puVar29 + 7);
                pcVar10 = (code *)*puVar23;
                if (pcVar10 != (code *)0x0) {
                  (*pcVar10)(uVar28);
                }
                if (puVar23[1] != 0) {
                  _free(uVar28);
                }
                _free(puVar29 + -1);
              }
LAB_10076b834:
              uVar28 = 0;
              unaff_x19[0x6d] = 0;
              uVar19 = 1;
              unaff_x19[0x6e] = 1;
              unaff_x19[0x6f] = 0;
            }
            else {
              _memcpy(&stack0x00000580,&stack0x00000930,0x1c8);
              if (puVar27 != (undefined *)0x0) {
                _free(puVar29);
              }
              if (lVar20 != 0) {
                _free(&UNK_108ed3a19);
              }
              _free(uVar28);
              if (in_stack_000005b8 != 0) {
                _free(in_stack_000005c0);
              }
              lVar14 = in_stack_00000678 + 0x7ffffffffffffffa;
              if (in_stack_00000678 < 0x8000000000000006) {
                lVar14 = 6;
              }
              if (lVar14 == 6) {
                FUN_100e0fca4(&stack0x00000678);
              }
              else if ((lVar14 == 4) && (in_stack_00000680 != 0)) {
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
              uVar19 = unaff_x19[0x6e];
              uVar28 = unaff_x19[0x6f];
            }
            unaff_x19[0x70] = 0;
            unaff_x19[0x74] = unaff_x19[0x29];
            unaff_x19[0x75] = unaff_x19[0x2a];
            unaff_x19[0x76] = uVar19;
            unaff_x19[0x77] = uVar28;
            unaff_x19[0x78] = 8;
            unaff_x19[0x79] = 0;
            unaff_x19[0x7a] = unaff_x19[0x2e];
            unaff_x19[0x7b] = 0;
            *(undefined1 *)((long)unaff_x19 + 0x9b3) = 0;
            *(undefined1 *)((long)unaff_x19 + 0x9b4) = *(undefined1 *)(unaff_x19 + 0x6a);
            uVar15 = FUN_100776744(unaff_x19 + 0x70,unaff_x21);
            if ((uVar15 & 1) == 0) {
              FUN_100e70dc4(unaff_x19 + 0x70);
              if (unaff_x19[0x6d] != 0) {
                _free(unaff_x19[0x6e]);
              }
              goto LAB_10076b8e0;
            }
            uVar17 = 6;
          }
        }
        else {
          unaff_x19[0x6d] = lVar14;
          unaff_x19[0x6f] = *(undefined8 *)((long)unaff_x19 + 0x35d);
          unaff_x19[0x6e] = *(undefined8 *)((long)unaff_x19 + 0x355);
          *(undefined1 *)(unaff_x19 + 0x7c) = 0;
          FUN_1006ed49c(&stack0x00000310,unaff_x19 + 0x6d,unaff_x21);
          if (pcVar26 != (char *)0x8000000000000002) {
            _memcpy(unaff_x19 + 0x2f,&stack0x00000310,0x1d8);
            if (*(char *)(unaff_x19 + 0x7c) == '\x03') {
              if (*(char *)(unaff_x19 + 0x7b) == '\x03') {
                uVar19 = unaff_x19[0x79];
                puVar23 = (undefined8 *)unaff_x19[0x7a];
                pcVar10 = (code *)*puVar23;
                if (pcVar10 != (code *)0x0) {
                  (*pcVar10)(uVar19);
                }
                if (puVar23[1] != 0) {
                  _free(uVar19);
                }
              }
              else if (*(char *)(unaff_x19 + 0x7b) == '\0') {
                FUN_100d99140(unaff_x19 + 0x72);
              }
            }
            lVar14 = unaff_x19[0x2f];
            if (-0x7fffffffffffffff < lVar14) {
              _memcpy(unaff_x19 + 0x6d,unaff_x19 + 0x2f,0x1d8);
              *(undefined1 *)((long)unaff_x19 + 0x351) = 1;
              plVar1 = unaff_x19 + 0xa8;
              FUN_1014a72e4(plVar1,unaff_x19 + 0x6d);
              __ZN3std4path4Path11to_path_buf17hc9bd4cca887f646eE
                        (&stack0x00000750,unaff_x19[0x29],unaff_x19[0x2a]);
              if (*plVar1 != 0) {
                _free(unaff_x19[0xa9]);
              }
              unaff_x19[0xa9] = puVar29;
              *plVar1 = (long)puVar27;
              unaff_x19[0xaa] = puVar30;
              __ZN13codex_rollout8state_db26normalize_cwd_for_state_db17ha321891c46d32b7aE
                        (&stack0x00000750,unaff_x19[0xb2],unaff_x19[0xb3]);
              if (unaff_x19[0xb1] != 0) {
                _free(unaff_x19[0xb2]);
              }
              unaff_x19[0xb2] = puVar29;
              unaff_x19[0xb1] = puVar27;
              unaff_x19[0xb3] = puVar30;
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
                puVar27 = (undefined *)unaff_x19[0x6e];
                puVar29 = (undefined *)unaff_x19[0x6f];
                if (unaff_x19[0xaa] == 0) {
                  bVar11 = false;
                }
                else {
                  bVar11 = *(char *)unaff_x19[0xa9] == '/';
                }
                uVar28 = CONCAT62((uint6)bVar11,0x201);
                iVar13 = FUN_10112a6c0(&stack0x00000570,&stack0x00000750);
                if ((((((iVar13 == 0) || (*(int *)(unaff_x19 + 0xde) != *(int *)(unaff_x19 + 0xa3)))
                      || (*(int *)((long)unaff_x19 + 0x6f4) != *(int *)((long)unaff_x19 + 0x51c)))
                     || ((*(int *)(unaff_x19 + 0xdf) != *(int *)(unaff_x19 + 0xa4) ||
                         (*(int *)((long)unaff_x19 + 0x6fc) != *(int *)((long)unaff_x19 + 0x524)))))
                    || (*(int *)(unaff_x19 + 0xe0) != *(int *)(unaff_x19 + 0xa5))) ||
                   (((*(int *)((long)unaff_x19 + 0x704) != *(int *)((long)unaff_x19 + 0x52c) ||
                     (unaff_x19[0xad] != unaff_x19[0x72])) ||
                    (iVar13 = _memcmp(unaff_x19[0xac],unaff_x19[0x71]), iVar13 != 0))))
                goto LAB_10076b010;
                if (*(char *)((long)unaff_x19 + 0x714) == '\x03') {
                  bVar11 = *(char *)((long)unaff_x19 + 0x53c) == '\x03';
                }
                else {
                  bVar11 = *(char *)((long)unaff_x19 + 0x714) == *(char *)((long)unaff_x19 + 0x53c);
                }
                if (!bVar11) goto LAB_10076b010;
                if (unaff_x19[0xc0] != -0x8000000000000000) {
                  if (((unaff_x19[0x85] != -0x8000000000000000) &&
                      (unaff_x19[0xc2] == unaff_x19[0x87])) &&
                     (iVar13 = _memcmp(unaff_x19[0xc1],unaff_x19[0x86]), iVar13 == 0))
                  goto LAB_10076ae98;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x85] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076ae98:
                if (unaff_x19[0xc3] != -0x8000000000000000) {
                  if (((unaff_x19[0x88] != -0x8000000000000000) &&
                      (unaff_x19[0xc5] == unaff_x19[0x8a])) &&
                     (iVar13 = _memcmp(unaff_x19[0xc4],unaff_x19[0x89]), iVar13 == 0))
                  goto LAB_10076aebc;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x88] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076aebc:
                if (unaff_x19[0xc6] != -0x8000000000000000) {
                  if (((unaff_x19[0x8b] != -0x8000000000000000) &&
                      (unaff_x19[200] == unaff_x19[0x8d])) &&
                     (iVar13 = _memcmp(unaff_x19[199],unaff_x19[0x8c]), iVar13 == 0))
                  goto LAB_10076aee0;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x8b] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076aee0:
                if ((unaff_x19[0xb0] != unaff_x19[0x75]) ||
                   (iVar13 = _memcmp(unaff_x19[0xaf],unaff_x19[0x74]), iVar13 != 0))
                goto LAB_10076b010;
                if (unaff_x19[0xc9] != -0x8000000000000000) {
                  if (((unaff_x19[0x8e] != -0x8000000000000000) &&
                      (unaff_x19[0xcb] == unaff_x19[0x90])) &&
                     (iVar13 = _memcmp(unaff_x19[0xca],unaff_x19[0x8f]), iVar13 == 0))
                  goto LAB_10076af24;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x8e] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076af24:
                if (*(char *)((long)unaff_x19 + 0x715) == '\x06') {
                  bVar11 = *(char *)((long)unaff_x19 + 0x53d) == '\x06';
                }
                else {
                  bVar11 = *(char *)((long)unaff_x19 + 0x715) == *(char *)((long)unaff_x19 + 0x53d);
                }
                if ((((!bVar11) ||
                     (iVar13 = FUN_100f31ddc(unaff_x19[0xb2],unaff_x19[0xb3],unaff_x19[0x77],
                                             unaff_x19[0x78]), iVar13 == 0)) ||
                    ((unaff_x19[0xb6] != unaff_x19[0x7b] ||
                     ((iVar13 = _memcmp(unaff_x19[0xb5],unaff_x19[0x7a]), iVar13 != 0 ||
                      (unaff_x19[0xb9] != unaff_x19[0x7e])))))) ||
                   (iVar13 = _memcmp(unaff_x19[0xb8],unaff_x19[0x7d]), iVar13 != 0))
                goto LAB_10076b010;
                if (unaff_x19[0xcc] != -0x8000000000000000) {
                  if (((unaff_x19[0x91] != -0x8000000000000000) &&
                      (unaff_x19[0xce] == unaff_x19[0x93])) &&
                     (iVar13 = _memcmp(unaff_x19[0xcd],unaff_x19[0x92]), iVar13 == 0))
                  goto LAB_10076ba8c;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x91] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076ba8c:
                if (((unaff_x19[0xbc] != unaff_x19[0x81]) ||
                    (iVar13 = _memcmp(unaff_x19[0xbb],unaff_x19[0x80]), iVar13 != 0)) ||
                   ((unaff_x19[0xbf] != unaff_x19[0x84] ||
                    (iVar13 = _memcmp(unaff_x19[0xbe],unaff_x19[0x83]), iVar13 != 0))))
                goto LAB_10076b010;
                if (unaff_x19[0xcf] != -0x8000000000000000) {
                  if (((unaff_x19[0x94] != -0x8000000000000000) &&
                      (unaff_x19[0xd1] == unaff_x19[0x96])) &&
                     (iVar13 = _memcmp(unaff_x19[0xd0],unaff_x19[0x95]), iVar13 == 0))
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
                     (iVar13 = _memcmp(unaff_x19[0xd3],unaff_x19[0x98]), iVar13 == 0))
                  goto LAB_10076bbc8;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x97] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076bbc8:
                if (unaff_x19[0xd5] != -0x8000000000000000) {
                  if (((unaff_x19[0x9a] != -0x8000000000000000) &&
                      (unaff_x19[0xd7] == unaff_x19[0x9c])) &&
                     (iVar13 = _memcmp(unaff_x19[0xd6],unaff_x19[0x9b]), iVar13 == 0))
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
                        (iVar13 = _memcmp(unaff_x19[0xd9],unaff_x19[0x9e]), iVar13 != 0))
                goto LAB_10076b010;
              }
              else {
LAB_10076b010:
                if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                   (((bRam000000010b62fee0 - 1 < 2 ||
                     ((bRam000000010b62fee0 != 0 &&
                      (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                          (&
                                           __ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3bb90954dacb8502E
                                          ), cVar12 != '\0')))) &&
                    (uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                        (
                                        ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3bb90954dacb8502E
                                        ), (uVar15 & 1) != 0)))) {
                  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000570;
                  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
                  puVar29 = (undefined *)(unaff_x29 + -0x80);
                  puVar27 = (undefined *)0x1;
                  FUN_10077b118(&stack0x00000750);
                }
                else {
                  uVar19 = 
                  ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3bb90954dacb8502E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    puVar30 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar30 = &UNK_10b3c24c8;
                    }
                    puVar4 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar4 = &UNK_109adfc03;
                    }
                    iVar13 = (**(code **)(puVar30 + 0x18))(puVar4,&stack0x000004f0);
                    if (iVar13 != 0) {
                      *(undefined **)(unaff_x29 + -0x80) = &UNK_108cad343;
                      *(undefined8 *)(unaff_x29 + -0x78) = 0x9f;
                      puVar29 = &stack0x00000560;
                      puVar27 = (undefined *)0x1;
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (uVar19,puVar4,puVar30,&stack0x00000570,&stack0x00000750);
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
                  uVar17 = 4;
                  goto LAB_10076b8b0;
                }
                FUN_100d7b288(unaff_x19 + 0xe5);
                *(undefined1 *)(unaff_x19 + 0x106) = 1;
                if (auVar25._8_8_ != (undefined8 *)0x0) {
                  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                      ((bRam000000010b62fef8 - 1 < 2 ||
                       ((bRam000000010b62fef8 != 0 &&
                        (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                            (&
                                             __ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                            ), cVar12 != '\0')))))) &&
                     (uVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                         (
                                         ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                         ), (uVar15 & 1) != 0)) {
                    lVar20 = ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                             + 0x30;
                    uVar19 = unaff_x19[0x2a];
                    *(undefined8 *)(unaff_x29 + -0x80) = unaff_x19[0x29];
                    *(undefined8 *)(unaff_x29 + -0x78) = uVar19;
                    puVar27 = (undefined *)(unaff_x29 + -0x80);
                    puVar29 = &
                              __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                    ;
                    FUN_10077afdc(&stack0x00000570);
                  }
                  else {
                    lVar14 = 
                    ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      uVar19 = *(undefined8 *)
                                (
                                ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                + 0x20);
                      uVar5 = *(undefined8 *)
                               (
                               ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                               + 0x28);
                      puVar30 = puRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        puVar30 = &UNK_10b3c24c8;
                      }
                      puVar4 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar4 = &UNK_109adfc03;
                      }
                      iVar13 = (**(code **)(puVar30 + 0x18))(puVar4,&stack0x00000510);
                      if (iVar13 != 0) {
                        lVar20 = ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                 + 0x30;
                        puVar27 = &stack0x00000560;
                        puVar29 = &
                                  __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                        ;
                        *(undefined8 *)(unaff_x29 + -0x78) = uVar19;
                        *(undefined8 *)(unaff_x29 + -0x80) = 2;
                        *(undefined8 *)(unaff_x29 + -0x70) = uVar5;
                        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (lVar14,puVar4,puVar30,unaff_x29 + -0x80,&stack0x00000570);
                      }
                    }
                  }
                  (**(code **)*auVar25._8_8_)();
                  FUN_100e31b20(unaff_x19 + 0xa8);
                  FUN_100e31b20(unaff_x19 + 0x6d);
                  lVar14 = unaff_x19[0x2f];
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
            if (lVar14 == -0x7fffffffffffffff) {
              (*(code *)**(undefined8 **)unaff_x19[0x30])();
            }
            goto LAB_10076b42c;
          }
          uVar17 = 3;
        }
LAB_10076b8b0:
        *(undefined1 *)((long)unaff_x19 + 0x352) = uVar17;
        *unaff_x27 = 0x8000000000000002;
        uVar17 = 6;
        goto LAB_10076b940;
      }
LAB_10076b8e0:
      *(undefined1 *)((long)unaff_x19 + 0x352) = 1;
      FUN_100e8c864(unaff_x19 + 0x29);
    }
    uVar15 = unaff_x19[0x22];
    uVar21 = unaff_x19[0x23];
    uVar22 = unaff_x19[0x24];
    *(undefined2 *)((long)unaff_x19 + 0xed) = 0;
    if (uVar15 == 0x8000000000000000) {
      uVar22 = unaff_x19[0x14];
      uVar21 = unaff_x19[0x13];
      uVar15 = unaff_x19[0x12];
    }
    else if ((unaff_x19[0x12] & 0x7fffffffffffffff) != 0) {
      _free(unaff_x19[0x13]);
    }
    *(undefined1 *)(unaff_x19 + 0x1e) = 0;
    *(undefined4 *)((long)unaff_x19 + 0xec) = 0;
  }
  else {
    thunk_FUN_108a820a8(&stack0x00000570,unaff_x19[0x20],uVar15,&DAT_10603cc64);
LAB_10076a248:
    if (((ulong)puVar27 & 3) == 1) {
      uVar28 = *(undefined8 *)(puVar27 + -1);
      puVar23 = *(undefined8 **)(puVar27 + 7);
      pcVar10 = (code *)*puVar23;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(uVar28);
      }
      if (puVar23[1] != 0) {
        _free(uVar28);
      }
      _free(puVar27 + -1);
      *(undefined1 *)((long)unaff_x19 + 0xed) = 0;
      uVar15 = unaff_x19[0x12];
      uVar21 = unaff_x19[0x13];
      uVar22 = unaff_x19[0x14];
      bVar6 = *(byte *)((long)unaff_x19 + 0xec);
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0xed) = 0;
      uVar15 = unaff_x19[0x12];
      uVar21 = unaff_x19[0x13];
      uVar22 = unaff_x19[0x14];
      bVar6 = *(byte *)((long)unaff_x19 + 0xec);
    }
    if (((bVar6 & 1) != 0) && (unaff_x19[0x1f] != 0)) {
      _free(unaff_x19[0x20]);
    }
    *(undefined1 *)((long)unaff_x19 + 0xec) = 0;
    if ((((*(byte *)((long)unaff_x19 + 0xed) & 1) != 0) && (unaff_x19[0x12] != -0x8000000000000000))
       && (unaff_x19[0x12] != 0)) {
      _free(unaff_x19[0x13]);
    }
    *(undefined1 *)((long)unaff_x19 + 0xed) = 0;
  }
  *unaff_x27 = uVar15;
  unaff_x27[1] = uVar21;
  uVar17 = 1;
  unaff_x27[2] = uVar22;
LAB_10076b940:
  *(undefined1 *)((long)unaff_x19 + 0xf1) = uVar17;
  return;
}

