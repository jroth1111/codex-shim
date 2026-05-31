
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100769354(void)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  undefined1 uVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  char *pcVar25;
  long in_stack_00000570;
  undefined8 *in_stack_00000578;
  undefined *in_stack_00000580;
  undefined *in_stack_00000588;
  undefined8 *puVar26;
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
  undefined *puVar27;
  undefined8 in_stack_000009d0;
  undefined8 in_stack_000009d8;
  
  FUN_10076ca58(&stack0x00000750);
  unaff_x19[6] = &UNK_108c98240;
  unaff_x19[7] = 8;
  (**(code **)**(undefined8 **)(unaff_x29 + -0x80))();
  if (unaff_x19[0x15] == -0x7fffffffffffffff) {
    *(undefined1 *)((long)unaff_x19 + 0xeb) = 0;
    uVar20 = *unaff_x19;
    uVar21 = unaff_x19[1];
    if (uVar21 != 0) goto LAB_100769d38;
LAB_10076a120:
    lVar12 = 1;
  }
  else {
    *(undefined1 *)((long)unaff_x19 + 0xeb) = 0;
    *(undefined1 *)((long)unaff_x19 + 0xeb) = 0;
    uVar20 = *unaff_x19;
    uVar21 = unaff_x19[1];
    if (uVar21 == 0) goto LAB_10076a120;
LAB_100769d38:
    lVar12 = _malloc(uVar21);
    if (lVar12 == 0) {
      FUN_107c03c64(1,uVar21);
      goto LAB_10076b9c8;
    }
  }
  _memcpy(lVar12,uVar20,uVar21);
  bVar9 = false;
  unaff_x19[0x1f] = uVar21;
  unaff_x19[0x20] = lVar12;
  unaff_x19[0x21] = uVar21;
  *(undefined1 *)((long)unaff_x19 + 0xec) = 1;
  pcVar25 = (char *)unaff_x19[2];
  uVar18 = unaff_x19[3];
  if ((uVar21 != 0) && (pcVar16 = (char *)(lVar12 + uVar21 + -1), pcVar16 != (char *)0x0)) {
    bVar9 = *pcVar16 != '/';
  }
  if ((uVar18 == 0) || (*pcVar25 != '/')) {
    if (bVar9) {
      thunk_FUN_108a85fec(unaff_x19 + 0x1f,uVar21,1,1,1);
      lVar12 = unaff_x19[0x20];
      lVar5 = unaff_x19[0x21];
      *(undefined1 *)(lVar12 + lVar5) = 0x2f;
      uVar19 = lVar5 + 1;
      unaff_x19[0x21] = uVar19;
      uVar7 = unaff_x19[0x1f] - uVar19;
      goto joined_r0x00010076a1c8;
    }
    if (uVar18 != 0) goto LAB_10076ad50;
  }
  else {
    unaff_x19[0x21] = 0;
    uVar19 = 0;
    uVar7 = uVar21;
joined_r0x00010076a1c8:
    uVar21 = uVar19;
    if (uVar7 < uVar18) {
LAB_10076ad50:
      thunk_FUN_108a85fec(unaff_x19 + 0x1f,uVar21,uVar18,1,1);
      lVar12 = unaff_x19[0x20];
      uVar21 = unaff_x19[0x21];
    }
  }
  _memcpy(lVar12 + uVar21,pcVar25,uVar18);
  uVar21 = uVar21 + uVar18;
  unaff_x19[0x21] = uVar21;
  if (uVar21 < 0x180) {
    _memcpy(&stack0x00000750,unaff_x19[0x20],uVar21);
    (&stack0x00000750)[uVar21] = 0;
    __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
              (&stack0x00000930,&stack0x00000750,uVar21 + 1);
    if ((int)&stack0x00000310 == 1) {
      in_stack_00000578 = (undefined8 *)&UNK_10b4add80;
    }
    else {
      iVar11 = _stat(&UNK_10b208fd0,&stack0x00000310);
      if (iVar11 != -1) {
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
        goto LAB_10076a2dc;
      }
      puVar14 = (uint *)___error();
      in_stack_00000578 = (undefined8 *)((ulong)*puVar14 << 0x20 | 2);
    }
LAB_10076a248:
    if (((ulong)in_stack_00000578 & 3) == 1) {
      uVar20 = *(undefined8 *)((long)in_stack_00000578 + -1);
      puVar22 = *(undefined8 **)((long)in_stack_00000578 + 7);
      pcVar8 = (code *)*puVar22;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar20);
      }
      if (puVar22[1] != 0) {
        _free(uVar20);
      }
      _free((undefined8 *)((long)in_stack_00000578 + -1));
      *(undefined1 *)((long)unaff_x19 + 0xed) = 0;
      uVar19 = unaff_x19[0x12];
      uVar18 = unaff_x19[0x13];
      uVar21 = unaff_x19[0x14];
      bVar6 = *(byte *)((long)unaff_x19 + 0xec);
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0xed) = 0;
      uVar19 = unaff_x19[0x12];
      uVar18 = unaff_x19[0x13];
      uVar21 = unaff_x19[0x14];
      bVar6 = *(byte *)((long)unaff_x19 + 0xec);
    }
joined_r0x00010076a424:
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
  else {
    thunk_FUN_108a820a8(&stack0x00000570,unaff_x19[0x20],uVar21,&DAT_10603cc64);
    if (in_stack_00000570 != 0) goto LAB_10076a248;
LAB_10076a2dc:
    *(undefined1 *)(unaff_x19 + 0x1e) = 1;
    uVar20 = unaff_x19[4];
    uVar17 = unaff_x19[5];
    puVar22 = (undefined8 *)_malloc(0x18);
    if (puVar22 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_10076b9c8;
    }
    *(undefined1 *)((long)unaff_x19 + 0xec) = 0;
    uVar23 = unaff_x19[0x1f];
    puVar22[1] = unaff_x19[0x20];
    *puVar22 = uVar23;
    puVar22[2] = unaff_x19[0x21];
    pcVar25 = (char *)0x1;
    *(undefined1 *)(unaff_x19 + 0x1e) = 0;
    puVar27 = (undefined *)0x0;
    __ZN17codex_file_search3run17h729d2a977a77ec0aE
              (&stack0x00000570,uVar20,uVar17,&stack0x00000310,&stack0x00000750,0);
    if (in_stack_00000570 == -0x8000000000000000) {
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000750,s_file_search_failed__108ac6c4e,&stack0x00000310);
      uVar21 = 0;
      puVar22 = (undefined8 *)_malloc(0x18);
      if (puVar22 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_10076b9c8:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10076b9cc);
        (*pcVar8)();
      }
      *puVar22 = 0;
      puVar22[1] = 8;
      puVar22[2] = 0;
      puVar13 = (undefined8 *)_malloc(0x18);
      if (puVar13 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_10076b9c8;
      }
      *puVar13 = puVar22;
      puVar13[1] = &UNK_10b209118;
      *(undefined1 *)(puVar13 + 2) = 0x28;
      (**(code **)*in_stack_00000578)();
      uVar18 = (long)puVar13 + 1;
      *(undefined2 *)((long)unaff_x19 + 0xef) = 0;
      uVar19 = 0x8000000000000001;
      bVar6 = *(byte *)((long)unaff_x19 + 0xec);
      goto joined_r0x00010076a424;
    }
    unaff_x19[0x25] = in_stack_00000570;
    unaff_x19[0x26] = in_stack_00000578;
    unaff_x19[0x28] = in_stack_00000588;
    unaff_x19[0x27] = in_stack_00000580;
    *(undefined1 *)((long)unaff_x19 + 0xef) = 0;
    puVar26 = in_stack_00000578 + unaff_x19[0x27] * 10;
    puVar13 = in_stack_00000578;
    if (unaff_x19[0x27] == 0) {
LAB_10076a5d0:
      unaff_x19[0x22] = 0x8000000000000000;
    }
    else {
      puVar13 = in_stack_00000578 + 10;
      in_stack_00000588 = (undefined *)in_stack_00000578[1];
      in_stack_00000580 = (undefined *)*in_stack_00000578;
      lVar12 = in_stack_00000578[3];
      puVar27 = (undefined *)in_stack_00000578[2];
      uVar20 = in_stack_00000578[4];
      uVar17 = in_stack_00000578[7];
      uVar21 = in_stack_00000578[6];
      if (in_stack_00000580 == (undefined *)0x8000000000000000) goto LAB_10076a5d0;
      __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                (&stack0x00000310,uVar20,in_stack_00000578[5],in_stack_00000588,puVar27);
      if (in_stack_00000580 != (undefined *)0x0) {
        _free(in_stack_00000588);
      }
      if (lVar12 != 0) {
        _free(uVar20);
      }
      if ((uVar21 & 0x7fffffffffffffff) != 0) {
        _free(uVar17);
      }
      unaff_x19[0x23] = puVar22;
      unaff_x19[0x22] = 1;
      unaff_x19[0x24] = 1;
    }
    *(undefined1 *)((long)unaff_x19 + 0xee) = 1;
    if ((long)puVar26 - (long)puVar13 != 0) {
      uVar21 = (ulong)((long)puVar26 - (long)puVar13) / 0x50;
      puVar13 = puVar13 + 4;
      do {
        if (puVar13[-4] != 0) {
          _free(puVar13[-3]);
        }
        if (puVar13[-1] != 0) {
          _free(*puVar13);
        }
        if ((puVar13[2] & 0x7fffffffffffffff) != 0) {
          _free(puVar13[3]);
        }
        puVar13 = puVar13 + 10;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    if (in_stack_00000570 != 0) {
      _free(in_stack_00000578);
    }
    if (unaff_x19[0x22] != -0x8000000000000000) {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
         (((bRam000000010b62fa60 - 1 < 2 ||
           ((bRam000000010b62fa60 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf43715ea365f0969E
                                ), cVar10 != '\0')))) &&
          (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf43715ea365f0969E
                              ), (uVar21 & 1) != 0)))) {
        in_stack_00000588 = &stack0x00000930;
        in_stack_00000580 = (undefined *)0x1;
        puVar27 = (undefined *)0x1;
        FUN_10076c1ac(&stack0x00000750);
        pcVar25 = s__state_db_missing_rollout_path_f_108ac6c22;
      }
      else {
        uVar20 = 
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
          iVar11 = (**(code **)(puVar4 + 0x18))(puVar3,&stack0x000002e0);
          if (iVar11 != 0) {
            *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000930;
            *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
            in_stack_00000588 = (undefined *)(unaff_x29 + -0x80);
            in_stack_00000580 = (undefined *)0x1;
            puVar27 = (undefined *)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar20,puVar3,puVar4,&stack0x00000570,&stack0x00000750);
            pcVar25 = (char *)(unaff_x19 + 4);
          }
        }
      }
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b62fa18 - 1 < 2 ||
           ((bRam000000010b62fa18 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h689676196d540c0cE
                                ), cVar10 != '\0')))))) &&
         (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN13codex_rollout4list36find_thread_path_by_id_str_in_subdir28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h689676196d540c0cE
                             ), (uVar21 & 1) != 0)) {
        pcVar25 = &stack0x00000570;
        in_stack_00000588 = &stack0x00000310;
        in_stack_00000580 = (undefined *)0x1;
        puVar27 = (undefined *)0x1;
        FUN_10076c2e8(&stack0x00000750);
      }
      else {
        uVar20 = 
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
          iVar11 = (**(code **)(puVar4 + 0x18))(puVar3,&stack0x000002f8);
          if (iVar11 != 0) {
            pcVar25 = 
            "state db discrepancy during find_thread_path_by_id_str_in_subdir: falling_back";
            in_stack_00000588 = &stack0x00000930;
            in_stack_00000580 = (undefined *)0x1;
            puVar27 = (undefined *)0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (uVar20,puVar3,puVar4,&stack0x00000570,&stack0x00000750);
          }
        }
      }
      if (unaff_x19[6] != 0) {
        in_stack_00000580 = &UNK_108ed3a13;
        in_stack_00000588 = (undefined *)0x6;
        puVar27 = &UNK_108cdcb10;
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
                  (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1a30d47537b1df65E
                                      ), cVar10 != '\0')))))) &&
               (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1a30d47537b1df65E
                                   ), (uVar21 & 1) != 0)) {
              *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000570;
              *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
              in_stack_00000588 = (undefined *)(unaff_x29 + -0x80);
              in_stack_00000580 = (undefined *)0x1;
              FUN_10077b254(&stack0x00000750);
            }
            else {
              uVar20 = 
              ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1a30d47537b1df65E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puVar27 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar27 = &UNK_10b3c24c8;
                }
                puVar4 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_109adfc03;
                }
                iVar11 = (**(code **)(puVar27 + 0x18))(puVar4,&stack0x00000548);
                if (iVar11 != 0) {
                  *(undefined **)(unaff_x29 + -0x80) = &UNK_108cad392;
                  *(undefined8 *)(unaff_x29 + -0x78) = 0x9f;
                  in_stack_00000588 = &stack0x00000560;
                  in_stack_00000580 = (undefined *)0x1;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (uVar20,puVar4,puVar27,&stack0x00000570,&stack0x00000750);
                }
              }
            }
          }
          unaff_x19[0x6d] = unaff_x19[0x29];
          unaff_x19[0x6e] = unaff_x19[0x2a];
          *(undefined1 *)(unaff_x19 + 0x94) = 0;
          FUN_1007663f0(&stack0x00000750,unaff_x19 + 0x6d,unaff_x21);
          if (in_stack_00000580 == (undefined *)0x8000000000000001) {
            uVar15 = 5;
          }
          else {
            _memcpy(&stack0x00000930,&stack0x00000760,0x1c8);
            if (*(char *)(unaff_x19 + 0x94) == '\x03') {
              FUN_100e70bcc(unaff_x19 + 0x71);
            }
            if (in_stack_00000580 == (undefined *)0x8000000000000000) {
              if (((ulong)in_stack_00000588 & 3) == 1) {
                uVar20 = *(undefined8 *)(in_stack_00000588 + -1);
                puVar22 = *(undefined8 **)(in_stack_00000588 + 7);
                pcVar8 = (code *)*puVar22;
                if (pcVar8 != (code *)0x0) {
                  (*pcVar8)(uVar20);
                }
                if (puVar22[1] != 0) {
                  _free(uVar20);
                }
                _free(in_stack_00000588 + -1);
              }
LAB_10076b834:
              uVar20 = 0;
              unaff_x19[0x6d] = 0;
              uVar17 = 1;
              unaff_x19[0x6e] = 1;
              unaff_x19[0x6f] = 0;
            }
            else {
              _memcpy(&stack0x00000580,&stack0x00000930,0x1c8);
              if (in_stack_00000580 != (undefined *)0x0) {
                _free(in_stack_00000588);
              }
              if (puVar26 != (undefined8 *)0x0) {
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
              uVar17 = unaff_x19[0x6e];
              uVar20 = unaff_x19[0x6f];
            }
            unaff_x19[0x70] = 0;
            unaff_x19[0x74] = unaff_x19[0x29];
            unaff_x19[0x75] = unaff_x19[0x2a];
            unaff_x19[0x76] = uVar17;
            unaff_x19[0x77] = uVar20;
            unaff_x19[0x78] = 8;
            unaff_x19[0x79] = 0;
            unaff_x19[0x7a] = unaff_x19[0x2e];
            unaff_x19[0x7b] = 0;
            *(undefined1 *)((long)unaff_x19 + 0x9b3) = 0;
            *(undefined1 *)((long)unaff_x19 + 0x9b4) = *(undefined1 *)(unaff_x19 + 0x6a);
            uVar21 = FUN_100776744(unaff_x19 + 0x70,unaff_x21);
            if ((uVar21 & 1) == 0) {
              FUN_100e70dc4(unaff_x19 + 0x70);
              if (unaff_x19[0x6d] != 0) {
                _free(unaff_x19[0x6e]);
              }
              goto LAB_10076b8e0;
            }
            uVar15 = 6;
          }
        }
        else {
          unaff_x19[0x6d] = lVar12;
          unaff_x19[0x6f] = *(undefined8 *)((long)unaff_x19 + 0x35d);
          unaff_x19[0x6e] = *(undefined8 *)((long)unaff_x19 + 0x355);
          *(undefined1 *)(unaff_x19 + 0x7c) = 0;
          FUN_1006ed49c(&stack0x00000310,unaff_x19 + 0x6d,unaff_x21);
          if (pcVar25 != (char *)0x8000000000000002) {
            _memcpy(unaff_x19 + 0x2f,&stack0x00000310,0x1d8);
            if (*(char *)(unaff_x19 + 0x7c) == '\x03') {
              if (*(char *)(unaff_x19 + 0x7b) == '\x03') {
                uVar20 = unaff_x19[0x79];
                puVar22 = (undefined8 *)unaff_x19[0x7a];
                pcVar8 = (code *)*puVar22;
                if (pcVar8 != (code *)0x0) {
                  (*pcVar8)(uVar20);
                }
                if (puVar22[1] != 0) {
                  _free(uVar20);
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
              unaff_x19[0xa9] = in_stack_00000588;
              *plVar1 = (long)in_stack_00000580;
              unaff_x19[0xaa] = puVar27;
              __ZN13codex_rollout8state_db26normalize_cwd_for_state_db17ha321891c46d32b7aE
                        (&stack0x00000750,unaff_x19[0xb2],unaff_x19[0xb3]);
              if (unaff_x19[0xb1] != 0) {
                _free(unaff_x19[0xb2]);
              }
              unaff_x19[0xb2] = in_stack_00000588;
              unaff_x19[0xb1] = in_stack_00000580;
              unaff_x19[0xb3] = puVar27;
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
                in_stack_00000580 = (undefined *)unaff_x19[0x6e];
                in_stack_00000588 = (undefined *)unaff_x19[0x6f];
                if (unaff_x19[0xaa] == 0) {
                  in_stack_000005aa = false;
                }
                else {
                  in_stack_000005aa = *(char *)unaff_x19[0xa9] == '/';
                }
                in_stack_000005a8 = 0x201;
                iVar11 = FUN_10112a6c0(&stack0x00000570,&stack0x00000750);
                if (((((iVar11 == 0) || (*(int *)(unaff_x19 + 0xde) != *(int *)(unaff_x19 + 0xa3)))
                     || (*(int *)((long)unaff_x19 + 0x6f4) != *(int *)((long)unaff_x19 + 0x51c))) ||
                    (((*(int *)(unaff_x19 + 0xdf) != *(int *)(unaff_x19 + 0xa4) ||
                      (*(int *)((long)unaff_x19 + 0x6fc) != *(int *)((long)unaff_x19 + 0x524))) ||
                     ((*(int *)(unaff_x19 + 0xe0) != *(int *)(unaff_x19 + 0xa5) ||
                      ((*(int *)((long)unaff_x19 + 0x704) != *(int *)((long)unaff_x19 + 0x52c) ||
                       (unaff_x19[0xad] != unaff_x19[0x72])))))))) ||
                   (iVar11 = _memcmp(unaff_x19[0xac],unaff_x19[0x71]), iVar11 != 0))
                goto LAB_10076b010;
                if (*(char *)((long)unaff_x19 + 0x714) == '\x03') {
                  bVar9 = *(char *)((long)unaff_x19 + 0x53c) == '\x03';
                }
                else {
                  bVar9 = *(char *)((long)unaff_x19 + 0x714) == *(char *)((long)unaff_x19 + 0x53c);
                }
                if (!bVar9) goto LAB_10076b010;
                if (unaff_x19[0xc0] != -0x8000000000000000) {
                  if (((unaff_x19[0x85] != -0x8000000000000000) &&
                      (unaff_x19[0xc2] == unaff_x19[0x87])) &&
                     (iVar11 = _memcmp(unaff_x19[0xc1],unaff_x19[0x86]), iVar11 == 0))
                  goto LAB_10076ae98;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x85] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076ae98:
                if (unaff_x19[0xc3] != -0x8000000000000000) {
                  if (((unaff_x19[0x88] != -0x8000000000000000) &&
                      (unaff_x19[0xc5] == unaff_x19[0x8a])) &&
                     (iVar11 = _memcmp(unaff_x19[0xc4],unaff_x19[0x89]), iVar11 == 0))
                  goto LAB_10076aebc;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x88] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076aebc:
                if (unaff_x19[0xc6] != -0x8000000000000000) {
                  if (((unaff_x19[0x8b] != -0x8000000000000000) &&
                      (unaff_x19[200] == unaff_x19[0x8d])) &&
                     (iVar11 = _memcmp(unaff_x19[199],unaff_x19[0x8c]), iVar11 == 0))
                  goto LAB_10076aee0;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x8b] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076aee0:
                if ((unaff_x19[0xb0] != unaff_x19[0x75]) ||
                   (iVar11 = _memcmp(unaff_x19[0xaf],unaff_x19[0x74]), iVar11 != 0))
                goto LAB_10076b010;
                if (unaff_x19[0xc9] != -0x8000000000000000) {
                  if (((unaff_x19[0x8e] != -0x8000000000000000) &&
                      (unaff_x19[0xcb] == unaff_x19[0x90])) &&
                     (iVar11 = _memcmp(unaff_x19[0xca],unaff_x19[0x8f]), iVar11 == 0))
                  goto LAB_10076af24;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x8e] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076af24:
                if (*(char *)((long)unaff_x19 + 0x715) == '\x06') {
                  bVar9 = *(char *)((long)unaff_x19 + 0x53d) == '\x06';
                }
                else {
                  bVar9 = *(char *)((long)unaff_x19 + 0x715) == *(char *)((long)unaff_x19 + 0x53d);
                }
                if (((!bVar9) ||
                    (iVar11 = FUN_100f31ddc(unaff_x19[0xb2],unaff_x19[0xb3],unaff_x19[0x77],
                                            unaff_x19[0x78]), iVar11 == 0)) ||
                   (((unaff_x19[0xb6] != unaff_x19[0x7b] ||
                     ((iVar11 = _memcmp(unaff_x19[0xb5],unaff_x19[0x7a]), iVar11 != 0 ||
                      (unaff_x19[0xb9] != unaff_x19[0x7e])))) ||
                    (iVar11 = _memcmp(unaff_x19[0xb8],unaff_x19[0x7d]), iVar11 != 0))))
                goto LAB_10076b010;
                if (unaff_x19[0xcc] != -0x8000000000000000) {
                  if (((unaff_x19[0x91] != -0x8000000000000000) &&
                      (unaff_x19[0xce] == unaff_x19[0x93])) &&
                     (iVar11 = _memcmp(unaff_x19[0xcd],unaff_x19[0x92]), iVar11 == 0))
                  goto LAB_10076ba8c;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x91] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076ba8c:
                if (((unaff_x19[0xbc] != unaff_x19[0x81]) ||
                    (iVar11 = _memcmp(unaff_x19[0xbb],unaff_x19[0x80]), iVar11 != 0)) ||
                   ((unaff_x19[0xbf] != unaff_x19[0x84] ||
                    (iVar11 = _memcmp(unaff_x19[0xbe],unaff_x19[0x83]), iVar11 != 0))))
                goto LAB_10076b010;
                if (unaff_x19[0xcf] != -0x8000000000000000) {
                  if (((unaff_x19[0x94] != -0x8000000000000000) &&
                      (unaff_x19[0xd1] == unaff_x19[0x96])) &&
                     (iVar11 = _memcmp(unaff_x19[0xd0],unaff_x19[0x95]), iVar11 == 0))
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
                     (iVar11 = _memcmp(unaff_x19[0xd3],unaff_x19[0x98]), iVar11 == 0))
                  goto LAB_10076bbc8;
                  goto LAB_10076b010;
                }
                if (unaff_x19[0x97] != -0x8000000000000000) goto LAB_10076b010;
LAB_10076bbc8:
                if (unaff_x19[0xd5] != -0x8000000000000000) {
                  if (((unaff_x19[0x9a] != -0x8000000000000000) &&
                      (unaff_x19[0xd7] == unaff_x19[0x9c])) &&
                     (iVar11 = _memcmp(unaff_x19[0xd6],unaff_x19[0x9b]), iVar11 == 0))
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
                        (iVar11 = _memcmp(unaff_x19[0xd9],unaff_x19[0x9e]), iVar11 != 0))
                goto LAB_10076b010;
              }
              else {
LAB_10076b010:
                if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                   (((bRam000000010b62fee0 - 1 < 2 ||
                     ((bRam000000010b62fee0 != 0 &&
                      (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                          (&
                                           __ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3bb90954dacb8502E
                                          ), cVar10 != '\0')))) &&
                    (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                        (
                                        ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3bb90954dacb8502E
                                        ), (uVar21 & 1) != 0)))) {
                  *(undefined1 **)(unaff_x29 + -0x80) = &stack0x00000570;
                  *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
                  in_stack_00000588 = (undefined *)(unaff_x29 + -0x80);
                  in_stack_00000580 = (undefined *)0x1;
                  FUN_10077b118(&stack0x00000750);
                }
                else {
                  uVar20 = 
                  ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3bb90954dacb8502E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    puVar27 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar27 = &UNK_10b3c24c8;
                    }
                    puVar4 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar4 = &UNK_109adfc03;
                    }
                    iVar11 = (**(code **)(puVar27 + 0x18))(puVar4,&stack0x000004f0);
                    if (iVar11 != 0) {
                      *(undefined **)(unaff_x29 + -0x80) = &UNK_108cad343;
                      *(undefined8 *)(unaff_x29 + -0x78) = 0x9f;
                      in_stack_00000588 = &stack0x00000560;
                      in_stack_00000580 = (undefined *)0x1;
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (uVar20,puVar4,puVar27,&stack0x00000570,&stack0x00000750);
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
                auVar24 = FUN_1006ef314(unaff_x19 + 0xe5,unaff_x21);
                if ((auVar24._0_8_ & 1) != 0) {
                  *(undefined1 *)(unaff_x19 + 0x106) = 3;
                  uVar15 = 4;
                  goto LAB_10076b8b0;
                }
                FUN_100d7b288(unaff_x19 + 0xe5);
                *(undefined1 *)(unaff_x19 + 0x106) = 1;
                if (auVar24._8_8_ != (undefined8 *)0x0) {
                  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                      ((bRam000000010b62fef8 - 1 < 2 ||
                       ((bRam000000010b62fef8 != 0 &&
                        (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                            (&
                                             __ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                            ), cVar10 != '\0')))))) &&
                     (uVar21 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                         (
                                         ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                         ), (uVar21 & 1) != 0)) {
                    puVar26 = (undefined8 *)
                              (
                              ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                              + 0x30);
                    uVar20 = unaff_x19[0x2a];
                    *(undefined8 *)(unaff_x29 + -0x80) = unaff_x19[0x29];
                    *(undefined8 *)(unaff_x29 + -0x78) = uVar20;
                    in_stack_00000580 = (undefined *)(unaff_x29 + -0x80);
                    in_stack_00000588 =
                         &
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
                      uVar20 = *(undefined8 *)
                                (
                                ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                + 0x20);
                      uVar17 = *(undefined8 *)
                                (
                                ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                + 0x28);
                      puVar27 = puRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        puVar27 = &UNK_10b3c24c8;
                      }
                      puVar4 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar4 = &UNK_109adfc03;
                      }
                      iVar11 = (**(code **)(puVar27 + 0x18))(puVar4,&stack0x00000510);
                      if (iVar11 != 0) {
                        puVar26 = (undefined8 *)
                                  (
                                  ___ZN13codex_rollout8state_db24read_repair_rollout_path28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha51ab27f47b0ab0bE
                                  + 0x30);
                        in_stack_00000580 = &stack0x00000560;
                        in_stack_00000588 =
                             &
                             __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                        ;
                        *(undefined8 *)(unaff_x29 + -0x78) = uVar20;
                        *(undefined8 *)(unaff_x29 + -0x80) = 2;
                        *(undefined8 *)(unaff_x29 + -0x70) = uVar17;
                        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (lVar12,puVar4,puVar27,unaff_x29 + -0x80,&stack0x00000570);
                      }
                    }
                  }
                  (**(code **)*auVar24._8_8_)();
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
          uVar15 = 3;
        }
LAB_10076b8b0:
        *(undefined1 *)((long)unaff_x19 + 0x352) = uVar15;
        *unaff_x27 = 0x8000000000000002;
        uVar15 = 6;
        goto LAB_10076b940;
      }
LAB_10076b8e0:
      *(undefined1 *)((long)unaff_x19 + 0x352) = 1;
      FUN_100e8c864(unaff_x19 + 0x29);
    }
    uVar19 = unaff_x19[0x22];
    uVar18 = unaff_x19[0x23];
    uVar21 = unaff_x19[0x24];
    *(undefined2 *)((long)unaff_x19 + 0xed) = 0;
    if (uVar19 == 0x8000000000000000) {
      uVar21 = unaff_x19[0x14];
      uVar18 = unaff_x19[0x13];
      uVar19 = unaff_x19[0x12];
    }
    else if ((unaff_x19[0x12] & 0x7fffffffffffffff) != 0) {
      _free(unaff_x19[0x13]);
    }
    *(undefined1 *)(unaff_x19 + 0x1e) = 0;
    *(undefined4 *)((long)unaff_x19 + 0xec) = 0;
  }
  *unaff_x27 = uVar19;
  unaff_x27[1] = uVar18;
  uVar15 = 1;
  unaff_x27[2] = uVar21;
LAB_10076b940:
  *(undefined1 *)((long)unaff_x19 + 0xf1) = uVar15;
  return;
}

