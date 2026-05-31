
/* WARNING: Removing unreachable block (ram,0x0001009bb7d4) */
/* WARNING: Removing unreachable block (ram,0x0001009bb808) */
/* WARNING: Removing unreachable block (ram,0x0001009bb830) */
/* WARNING: Removing unreachable block (ram,0x0001009bb834) */
/* WARNING: Removing unreachable block (ram,0x0001009bafc8) */
/* WARNING: Removing unreachable block (ram,0x0001009bafcc) */
/* WARNING: Removing unreachable block (ram,0x0001009bb918) */
/* WARNING: Removing unreachable block (ram,0x0001009bb94c) */
/* WARNING: Removing unreachable block (ram,0x0001009bb974) */
/* WARNING: Removing unreachable block (ram,0x0001009bb978) */
/* WARNING: Removing unreachable block (ram,0x0001009bb984) */
/* WARNING: Removing unreachable block (ram,0x0001009bb998) */
/* WARNING: Removing unreachable block (ram,0x0001009bb9a4) */
/* WARNING: Removing unreachable block (ram,0x0001009bb9b4) */
/* WARNING: Removing unreachable block (ram,0x0001009bb9c8) */
/* WARNING: Removing unreachable block (ram,0x0001009bb9d0) */
/* WARNING: Removing unreachable block (ram,0x0001009bb9dc) */
/* WARNING: Removing unreachable block (ram,0x0001009bb9e4) */
/* WARNING: Removing unreachable block (ram,0x0001009bb9f0) */
/* WARNING: Removing unreachable block (ram,0x0001009bb9f8) */
/* WARNING: Removing unreachable block (ram,0x0001009bba00) */
/* WARNING: Removing unreachable block (ram,0x0001009bba08) */
/* WARNING: Removing unreachable block (ram,0x0001009bba10) */
/* WARNING: Removing unreachable block (ram,0x0001009bba20) */
/* WARNING: Removing unreachable block (ram,0x0001009bba2c) */
/* WARNING: Removing unreachable block (ram,0x0001009bba40) */
/* WARNING: Removing unreachable block (ram,0x0001009bba4c) */
/* WARNING: Removing unreachable block (ram,0x0001009bba5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009ba3ec(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined1 uVar12;
  long *plVar13;
  ulong uVar14;
  long unaff_x19;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 unaff_x23;
  undefined8 *puVar19;
  long unaff_x28;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 *in_stack_00000038;
  undefined4 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 *in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  undefined8 in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_000014a0;
  undefined8 in_stack_000014a8;
  undefined8 in_stack_000014b0;
  long in_stack_00002290;
  undefined8 in_stack_00002298;
  long in_stack_00003080;
  long in_stack_00003088;
  undefined8 in_stack_00003090;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000014a0,s_Allow_Codex_to_run_____in______108accceb,&stack0x00003080);
  if ((in_stack_00002290 != -0x8000000000000000) && (in_stack_00002290 != 0)) {
    _free(in_stack_00002298);
  }
  pauVar7 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar7[1][0] == '\x01') {
    auVar22 = *pauVar7;
  }
  else {
    auVar22 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar7 + 8) = auVar22._8_8_;
    pauVar7[1][0] = 1;
  }
  *(long *)*pauVar7 = auVar22._0_8_ + 1;
  puVar8 = (undefined4 *)_malloc(4);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,4);
    goto LAB_1009bdc80;
  }
  *puVar8 = 0x65707974;
  puVar8 = (undefined4 *)_malloc(6);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
    goto LAB_1009bdc80;
  }
  *(undefined2 *)(puVar8 + 1) = 0x7463;
  *puVar8 = 0x656a626f;
  FUN_101497a9c(&stack0x00003080,&stack0x000006b0,&stack0x00000660,&stack0x00002290);
  if (in_stack_00003088 != unaff_x28) {
    FUN_100de6690(&stack0x000014a0);
  }
  puVar9 = (undefined8 *)_malloc(10);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,10);
    goto LAB_1009bdc80;
  }
  *(undefined2 *)(puVar9 + 1) = 0x7365;
  *puVar9 = 0x69747265706f7270;
  if (pauVar7[1][0] == '\x01') {
    lVar17 = *(long *)*pauVar7;
  }
  else {
    auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    lVar17 = auVar21._0_8_;
    *(long *)(*pauVar7 + 8) = auVar21._8_8_;
    pauVar7[1][0] = 1;
  }
  *(long *)*pauVar7 = lVar17 + 1;
  FUN_101497a9c(&stack0x00003080,&stack0x000006b0,&stack0x00000660,&stack0x00002290);
  if (in_stack_00003088 != unaff_x28) {
    FUN_100de6690(&stack0x000014a0);
  }
  puVar9 = (undefined8 *)_malloc(0xd);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0xd);
    goto LAB_1009bdc80;
  }
  *puVar9 = 0x7070612d63657865;
  *(undefined8 *)((long)puVar9 + 5) = 0x6c61766f72707061;
  uVar15 = *(undefined8 *)(unaff_x19 + 0x5e0);
  lVar20 = *(long *)(unaff_x19 + 0x5e8);
  lVar17 = 1;
  if ((lVar20 != 0) && (lVar17 = _malloc(lVar20), lVar17 == 0)) {
    func_0x0001087c9084(1,lVar20);
    goto LAB_1009bdc80;
  }
  _memcpy(lVar17,uVar15,lVar20);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x5f8);
  lVar16 = *(long *)(unaff_x19 + 0x600);
  lVar18 = 1;
  if ((lVar16 != 0) && (lVar18 = _malloc(lVar16), lVar18 == 0)) {
    func_0x0001087c9084(1,lVar16);
    goto LAB_1009bdc80;
  }
  _memcpy(lVar18,uVar15,lVar16);
  *in_stack_00000048 = 0;
  *(undefined8 *)(unaff_x19 + 0x638) = in_stack_000014a0;
  *(undefined8 *)(unaff_x19 + 0x640) = in_stack_000014a8;
  *(undefined8 *)(unaff_x19 + 0x648) = in_stack_000014b0;
  *(undefined8 *)(unaff_x19 + 0x720) = 0;
  *(undefined8 *)(unaff_x19 + 0x718) = 0;
  *(long *)(unaff_x19 + 0x730) = auVar22._0_8_;
  *(undefined8 *)(unaff_x19 + 0x728) = 0;
  *(long *)(unaff_x19 + 0x738) = auVar22._8_8_;
  *(undefined8 *)(unaff_x19 + 0x700) = 8;
  *(undefined8 *)(unaff_x19 + 0x6f8) = 0;
  *(undefined **)(unaff_x19 + 0x710) = &UNK_108c56c70;
  *(undefined8 *)(unaff_x19 + 0x708) = 0;
  *(undefined8 *)(unaff_x19 + 0x748) = in_stack_00000438;
  *(undefined8 *)(unaff_x19 + 0x740) = in_stack_00000430;
  *(undefined8 *)(unaff_x19 + 0x650) = 0xd;
  *(undefined8 **)(unaff_x19 + 0x658) = puVar9;
  *(undefined8 *)(unaff_x19 + 0x660) = 0xd;
  *(long *)(unaff_x19 + 0x668) = lVar20;
  *(long *)(unaff_x19 + 0x670) = lVar17;
  *(long *)(unaff_x19 + 0x678) = lVar20;
  *(long *)(unaff_x19 + 0x680) = lVar16;
  *(long *)(unaff_x19 + 0x688) = lVar18;
  *(long *)(unaff_x19 + 0x690) = lVar16;
  *(undefined8 *)(unaff_x19 + 0x698) = in_stack_00000078;
  *(undefined8 *)(unaff_x19 + 0x6a0) = in_stack_000000d0;
  *(undefined8 *)(unaff_x19 + 0x6a8) = in_stack_00000060;
  uVar15 = *in_stack_00000050;
  *(undefined8 *)(unaff_x19 + 0x6b8) = in_stack_00000050[1];
  *(undefined8 *)(unaff_x19 + 0x6b0) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x6c0) = in_stack_00000050[2];
  uVar15 = *in_stack_00000058;
  *(undefined8 *)(unaff_x19 + 0x6d0) = in_stack_00000058[1];
  *(undefined8 *)(unaff_x19 + 0x6c8) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x6d8) = in_stack_00000058[2];
  *(undefined8 *)(unaff_x19 + 0x6e0) = in_stack_00000070;
  *(undefined8 *)(unaff_x19 + 0x6e8) = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0x6f0) = unaff_x23;
  if (pauVar7[1][0] == '\x01') {
    auVar22 = *pauVar7;
  }
  else {
    auVar22 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar7 + 8) = auVar22._8_8_;
    pauVar7[1][0] = 1;
  }
  *(long *)*pauVar7 = auVar22._0_8_ + 1;
  FUN_105dc99f8(&stack0x00003080,10,auVar22._0_8_,auVar22._8_8_);
  if (in_stack_00003080 == -0x7fffffffffffffff) {
    *(long *)(unaff_x19 + 0x760) = in_stack_00003088;
    *(undefined8 *)(unaff_x19 + 0x758) = 0x8000000000000005;
    lVar17 = in_stack_00003088;
  }
  else {
    if (in_stack_00003080 == -0x8000000000000000) {
LAB_1009ba83c:
      in_stack_00003080 = 10;
      lVar17 = FUN_107c05dbc(&stack0x00003080,0,0);
LAB_1009ba880:
      *(long *)(unaff_x19 + 0x760) = lVar17;
      *(undefined8 *)(unaff_x19 + 0x758) = 0x8000000000000005;
      FUN_100e040f0(&stack0x00002290);
    }
    else {
      lVar17 = FUN_10063fe00(&stack0x00002290,&UNK_108ca1064,7,*(undefined8 *)(unaff_x19 + 0x640),
                             *(undefined8 *)(unaff_x19 + 0x648));
      if (lVar17 != 0) goto LAB_1009ba880;
      if (in_stack_00003080 == -0x8000000000000000) goto LAB_1009ba83c;
      puVar9 = (undefined8 *)_malloc(0xf);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0xf);
        goto LAB_1009bdc80;
      }
      *puVar9 = 0x6574736575716572;
      *(undefined8 *)((long)puVar9 + 7) = 0x616d656863536465;
      lVar17 = func_0x0001013ec844(&stack0x00002290,(undefined8 *)(unaff_x19 + 0x6f8));
      if (lVar17 != 0) goto LAB_1009ba880;
      if (in_stack_00003080 == -0x8000000000000000) goto LAB_1009ba83c;
      lVar17 = func_0x000100635ac4(&stack0x00002290,&UNK_108c982f8,8,unaff_x19 + 0x740);
      if (lVar17 != 0) goto LAB_1009ba880;
      if (in_stack_00003080 == -0x8000000000000000) goto LAB_1009ba83c;
      lVar17 = FUN_10063fe00(&stack0x00002290,&UNK_108cb478d,0x11,*(undefined8 *)(unaff_x19 + 0x658)
                             ,*(undefined8 *)(unaff_x19 + 0x660));
      if (((((lVar17 != 0) ||
            (lVar17 = FUN_10147d444(&stack0x00002290,&UNK_108cb479e,0x16,
                                    *(undefined8 *)(unaff_x19 + 0x670),
                                    *(undefined8 *)(unaff_x19 + 0x678)), lVar17 != 0)) ||
           (lVar17 = FUN_10147d444(&stack0x00002290,&UNK_108cb47b4,0xe,
                                   *(undefined8 *)(unaff_x19 + 0x688),
                                   *(undefined8 *)(unaff_x19 + 0x690)), lVar17 != 0)) ||
          ((lVar17 = FUN_10147d444(&stack0x00002290,&UNK_108cb47c2,0xd,
                                   *(undefined8 *)(unaff_x19 + 0x6a0),
                                   *(undefined8 *)(unaff_x19 + 0x6a8)), lVar17 != 0 ||
           (lVar17 = FUN_10147faf4(&stack0x00002290,&UNK_108cb47cf,0xd,
                                   *(undefined8 *)(unaff_x19 + 0x6b8),
                                   *(undefined8 *)(unaff_x19 + 0x6c0)), lVar17 != 0)))) ||
         ((lVar17 = FUN_1014779cc(&stack0x00002290,*(undefined8 *)(unaff_x19 + 0x6d0),
                                  *(undefined8 *)(unaff_x19 + 0x6d8)), lVar17 != 0 ||
          (lVar17 = FUN_1014734a8(&stack0x00002290,&UNK_108cdce20,0x10,
                                  *(undefined8 *)(unaff_x19 + 0x6e8),
                                  *(undefined8 *)(unaff_x19 + 0x6f0)), lVar17 != 0))))
      goto LAB_1009ba880;
      __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                ((long *)(unaff_x19 + 0x758),&stack0x00003080);
    }
    if (*(long *)(unaff_x19 + 0x758) != -0x7ffffffffffffffb) {
      *(undefined1 *)(unaff_x19 + 0x751) = 0;
      *(long *)(unaff_x19 + 0x7a0) = *(long *)(unaff_x19 + 0x5b8) + 0x10;
      *(undefined **)(unaff_x19 + 0x7a8) = &UNK_108cb4802;
      *(undefined8 *)(unaff_x19 + 0x7b0) = 0x12;
      *(undefined1 *)(unaff_x19 + 0x8c0) = 0;
      uVar10 = FUN_1009b6864(unaff_x19 + 0x758,in_stack_000000e0);
      if ((uVar10 & 1) != 0) {
        *in_stack_00000038 = 4;
        uVar15 = 1;
        uVar12 = 5;
        goto LAB_1009bd3f8;
      }
      FUN_100ceb744(unaff_x19 + 0x758);
      lVar17 = **(long **)(unaff_x19 + 0x5c0);
      **(long **)(unaff_x19 + 0x5c0) = lVar17 + 1;
      if (lVar17 < 0) goto LAB_1009bdc80;
      uVar15 = *(undefined8 *)(unaff_x19 + 0x610);
      lVar17 = 1;
      lVar20 = *(long *)(unaff_x19 + 0x618);
      if ((lVar20 != 0) && (lVar17 = _malloc(lVar20), lVar17 == 0)) {
        func_0x0001087c9084(1,lVar20);
        goto LAB_1009bdc80;
      }
      _memcpy(lVar17,uVar15,lVar20);
      uVar15 = *(undefined8 *)(unaff_x19 + 0x5f8);
      lVar20 = *(long *)(unaff_x19 + 0x600);
      lVar17 = 1;
      if ((lVar20 != 0) && (lVar17 = _malloc(lVar20), lVar17 == 0)) {
        func_0x0001087c9084(1,lVar20);
        goto LAB_1009bdc80;
      }
      _memcpy(lVar17,uVar15,lVar20);
      do {
        lVar17 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar17;
      } while (bVar1);
      puVar11 = (ulong *)(*
                         ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                         )();
      if ((char)puVar11[9] == '\x01') {
LAB_1009bb69c:
        _memcpy(&stack0x000014a0,&stack0x000006b0,0xdf0);
        if (0x7ffffffffffffffe < *puVar11) {
          FUN_107c05c9c(&UNK_10b2435a0);
          goto LAB_1009bdc80;
        }
        *puVar11 = *puVar11 + 1;
        uVar10 = puVar11[1];
        _memcpy(&stack0x00002290,&stack0x000006b0,0xdf0);
        if (uVar10 != 2) {
          if ((uVar10 & 1) == 0) {
            plVar13 = (long *)puVar11[2];
            lVar17 = *plVar13;
            *plVar13 = lVar17 + 1;
            if ((-1 < lVar17) &&
               ((plVar13 = (long *)plVar13[0x5e], plVar13 == (long *)0x0 ||
                (lVar17 = *plVar13, *plVar13 = lVar17 + 1, -1 < lVar17)))) {
              _memcpy(&stack0x00003f14,&stack0x000014b0,0xde0);
              _memcpy((ulong)&stack0x00003080 | 0x34,&stack0x00003f10,0xde4);
              _posix_memalign(&stack0x00000610,0x80,0xe80);
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xe80);
            }
          }
          else {
            plVar13 = (long *)puVar11[2];
            lVar17 = *plVar13;
            *plVar13 = lVar17 + 1;
            if ((-1 < lVar17) &&
               ((plVar13 = (long *)plVar13[0x4a], plVar13 == (long *)0x0 ||
                (lVar17 = *plVar13, *plVar13 = lVar17 + 1, -1 < lVar17)))) {
              _memcpy(&stack0x00003f14,&stack0x000014b0,0xde0);
              _memcpy((ulong)&stack0x00003080 | 0x34,&stack0x00003f10,0xde4);
              _posix_memalign(&stack0x00000610,0x80,0xe80);
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xe80);
            }
          }
          goto LAB_1009bdc80;
        }
        FUN_100d25b64(&stack0x000022a0);
        *puVar11 = *puVar11 - 1;
      }
      else {
        if ((char)puVar11[9] != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (puVar11,&DAT_100c35d48);
          *(undefined1 *)(puVar11 + 9) = 1;
          goto LAB_1009bb69c;
        }
        FUN_100d25b64(&stack0x000006c0);
      }
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__108b1bd74,&stack0x00003080,&UNK_10b2297c8);
      goto LAB_1009bdc80;
    }
    lVar17 = *(long *)(unaff_x19 + 0x760);
  }
  *(long *)(unaff_x19 + 0x7a0) = lVar17;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003080,s_5Failed_to_serialize_ExecApprova_108accd0d,&stack0x00002290);
  *(undefined8 *)(unaff_x19 + 0x7b8) = in_stack_00003090;
  *(long *)(unaff_x19 + 0x7b0) = in_stack_00003088;
  *(long *)(unaff_x19 + 0x7a8) = in_stack_00003080;
  *(undefined1 *)(unaff_x19 + 0x752) = 1;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
     (((bRam000000010b62da30 - 1 < 2 ||
       ((bRam000000010b62da30 != 0 &&
        (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN16codex_mcp_server13exec_approval28handle_exec_approval_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf01bb1532be1c9d4E
                           ), cVar5 != '\0')))) &&
      (uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN16codex_mcp_server13exec_approval28handle_exec_approval_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf01bb1532be1c9d4E
                          ), (uVar10 & 1) != 0)))) {
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN16codex_mcp_server13exec_approval28handle_exec_approval_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf01bb1532be1c9d4E
               ,&stack0x00003080);
    uVar15 = 
    ___ZN16codex_mcp_server13exec_approval28handle_exec_approval_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf01bb1532be1c9d4E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00002290);
      if (iVar6 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar15,puVar3,puVar2,&stack0x00002290,&stack0x00003080);
      }
    }
  }
  else if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
          (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000400);
    if (iVar6 != 0) {
      (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00003080);
    }
  }
  lVar17 = *(long *)(unaff_x19 + 0x5b8) + 0x10;
  plVar13 = *(long **)(unaff_x19 + 0x5c8);
  if ((plVar13 != (long *)0x0) && (lVar20 = *plVar13, *plVar13 = lVar20 + 1, lVar20 < 0))
  goto LAB_1009bdc80;
  *(undefined1 *)(unaff_x19 + 0x752) = 0;
  *(undefined8 *)(unaff_x19 + 0x7c8) = *(undefined8 *)(unaff_x19 + 0x7b0);
  *(long *)(unaff_x19 + 0x7c0) = *(long *)(unaff_x19 + 0x7a8);
  *(undefined8 *)(unaff_x19 + 2000) = *(undefined8 *)(unaff_x19 + 0x7b8);
  *(undefined8 *)(unaff_x19 + 0x7d8) = 0x8000000000000005;
  *(undefined4 *)(unaff_x19 + 0x820) = 0xffff80a6;
  *(long *)(unaff_x19 + 0x828) = lVar17;
  *(long **)(unaff_x19 + 0x830) = plVar13;
  *(undefined8 *)(unaff_x19 + 0x838) = *(undefined8 *)(unaff_x19 + 0x5d0);
  *(undefined1 *)(unaff_x19 + 0x840) = 0;
  lVar20 = *(long *)(unaff_x19 + 0x7c0);
  func_0x000100fd3924(&stack0x00003080,lVar17,&stack0x00002290);
  if (lVar20 != -0x7ffffffffffffffc) {
    FUN_100e30e98(&stack0x00003080);
  }
  *(undefined1 *)(unaff_x19 + 0x840) = 1;
  *(undefined1 *)(unaff_x19 + 0x752) = 0;
  plVar13 = *(long **)(unaff_x19 + 0x7a0);
  if (*plVar13 == 1) {
    uVar10 = plVar13[1];
    if ((uVar10 & 3) == 1) {
      puVar9 = (undefined8 *)(uVar10 - 1);
      uVar15 = *puVar9;
      puVar19 = *(undefined8 **)(uVar10 + 7);
      pcVar4 = (code *)*puVar19;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar15);
      }
      if (puVar19[1] != 0) {
        _free(uVar15);
      }
      goto LAB_1009bad30;
    }
  }
  else if ((*plVar13 == 0) && (plVar13[2] != 0)) {
    puVar9 = (undefined8 *)plVar13[1];
LAB_1009bad30:
    _free(puVar9);
  }
  _free(plVar13);
  *(undefined1 *)(unaff_x19 + 0x751) = 0;
  FUN_100e56c7c(unaff_x19 + 0x638);
  if (*(long *)(unaff_x19 + 0x620) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x628));
  }
  *(undefined1 *)(unaff_x19 + 0x753) = 0;
  if (*(long *)(unaff_x19 + 0x608) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x610));
  }
  *(undefined1 *)(unaff_x19 + 0x754) = 0;
  if (*(long *)(unaff_x19 + 0x5f0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x5f8));
  }
  if (*(long *)(unaff_x19 + 0x5d8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x5e0));
  }
  plVar13 = *(long **)(unaff_x19 + 0x5c8);
  if (plVar13 != (long *)0x0) {
    lVar17 = *plVar13;
    *plVar13 = lVar17 + -1;
    LORelease();
    if (lVar17 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x5c8);
    }
  }
  lVar17 = **(long **)(unaff_x19 + 0x5c0);
  **(long **)(unaff_x19 + 0x5c0) = lVar17 + -1;
  LORelease();
  if (lVar17 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x5c0);
  }
  lVar17 = **(long **)(unaff_x19 + 0x5b8);
  **(long **)(unaff_x19 + 0x5b8) = lVar17 + -1;
  LORelease();
  if (lVar17 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E(unaff_x19 + 0x5b8);
  }
  *(undefined2 *)(unaff_x19 + 0x755) = 0;
  *(undefined1 *)(unaff_x19 + 0x750) = 1;
  FUN_100cc88cc(in_stack_000000c0);
  *(undefined2 *)(unaff_x19 + 0x48c) = 0;
  if (*(long *)(unaff_x19 + 0x498) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x4a0));
  }
  *(undefined1 *)(unaff_x19 + 0x48e) = 0;
  if ((*(long *)(unaff_x19 + 0x940) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x940) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x948));
  }
  if (*(long *)(unaff_x19 + 0x8e0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x8e8));
  }
  if ((*(long *)(unaff_x19 + 0x958) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x958) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x960));
  }
  if ((*(ulong *)(unaff_x19 + 0x970) & 0x7fffffffffffffff) == 0) {
    lVar17 = *(long *)(unaff_x19 + 0x990);
  }
  else {
    _free(*(undefined8 *)(unaff_x19 + 0x978));
    lVar17 = *(long *)(unaff_x19 + 0x990);
  }
  if (lVar17 != -0x8000000000000000) {
    lVar18 = *(long *)(unaff_x19 + 0x998);
    lVar20 = *(long *)(unaff_x19 + 0x9a0);
    if (lVar20 != 0) {
      puVar9 = (undefined8 *)(lVar18 + 8);
      do {
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 3;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    if (lVar17 != 0) {
      _free(lVar18);
    }
  }
  lVar17 = *(long *)(unaff_x19 + 0x9a8);
  if (lVar17 != -0x8000000000000000) {
    lVar18 = *(long *)(unaff_x19 + 0x9b0);
    lVar20 = *(long *)(unaff_x19 + 0x9b8);
    if (lVar20 != 0) {
      puVar9 = (undefined8 *)(lVar18 + 8);
      do {
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    if (lVar17 != 0) {
      _free(lVar18);
    }
  }
  if (-0x7fffffffffffffff < *(long *)(unaff_x19 + 0x9d8)) {
    FUN_100e79780(unaff_x19 + 0x9d8);
  }
  lVar17 = *(long *)(unaff_x19 + 0x9c0);
  if (lVar17 != -0x8000000000000000) {
    lVar20 = *(long *)(unaff_x19 + 0x9c8);
    lVar18 = *(long *)(unaff_x19 + 0x9d0);
    if (lVar18 != 0) {
      lVar16 = 0;
      do {
        puVar11 = (ulong *)(lVar20 + lVar16 * 0x20);
        uVar14 = *puVar11;
        uVar10 = uVar14 ^ 0x8000000000000000;
        if (-1 < (long)uVar14) {
          uVar10 = 3;
        }
        if (uVar10 == 3) {
          if (uVar14 != 0) {
            uVar10 = puVar11[1];
LAB_1009bbbf4:
            _free(uVar10);
          }
        }
        else if (uVar10 == 1) {
          uVar10 = puVar11[2];
          uVar14 = puVar11[3];
          if (uVar14 != 0) {
            puVar9 = (undefined8 *)(uVar10 + 8);
            do {
              if (puVar9[-1] != 0) {
                _free(*puVar9);
              }
              puVar9 = puVar9 + 3;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          if (puVar11[1] != 0) goto LAB_1009bbbf4;
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 != lVar18);
    }
    if (lVar17 != 0) {
      _free(lVar20);
    }
  }
  *(undefined4 *)(in_stack_000000e8 + 0x27) = 0;
  if (*(long *)(unaff_x19 + 0x230) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x238));
  }
  iVar6 = *(int *)(unaff_x19 + 0x248);
  if (iVar6 < 0x23) {
    if ((iVar6 != 0) && (iVar6 != 0xd)) {
LAB_1009bbcd8:
      func_0x000100dfc74c(unaff_x19 + 0x248);
    }
  }
  else if (iVar6 != 0x23) {
    if (iVar6 != 0x29) goto LAB_1009bbcd8;
    if (((*(byte *)(unaff_x19 + 0x481) & 1) != 0) && (*(long *)(unaff_x19 + 0x268) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x270));
    }
    *(undefined1 *)(unaff_x19 + 0x481) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x488) = 0;
  *(undefined8 *)(unaff_x19 + 0x480) = 0;
  *(long *)(unaff_x19 + 0x498) = *(long *)(unaff_x19 + 0x420) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x4c0) = 0;
  func_0x0001004f1478(&stack0x000000f0,(undefined8 *)(unaff_x19 + 0x498),*in_stack_000000e0);
  if (in_stack_000000f0 != -0x7fffffffffffffff) {
    _memcpy(unaff_x19 + 0x40,&stack0x000000f0,0x1f0);
    if (((*(char *)(unaff_x19 + 0x4c0) == '\x03') && (*(char *)(unaff_x19 + 0x4b8) == '\x03')) &&
       (lVar17 = *(long *)(unaff_x19 + 0x4b0), lVar17 != 0)) {
      FUN_100d07adc(lVar17);
      _free(lVar17);
    }
    if (*(long *)(unaff_x19 + 0x40) == -0x8000000000000000) {
      *(undefined8 *)(unaff_x19 + 0x500) = *(undefined8 *)(unaff_x19 + 0xb0);
      *(undefined8 *)(unaff_x19 + 0x4f8) = *(undefined8 *)(unaff_x19 + 0xa8);
      *(undefined8 *)(unaff_x19 + 0x510) = *(undefined8 *)(unaff_x19 + 0xc0);
      *(undefined8 *)(unaff_x19 + 0x508) = *(undefined8 *)(unaff_x19 + 0xb8);
      *(undefined8 *)(unaff_x19 + 0x520) = *(undefined8 *)(unaff_x19 + 0xd0);
      *(undefined8 *)(unaff_x19 + 0x518) = *(undefined8 *)(unaff_x19 + 200);
      *(undefined8 *)(unaff_x19 + 0x528) = *(undefined8 *)(unaff_x19 + 0xd8);
      *(undefined8 *)(unaff_x19 + 0x4c0) = *(undefined8 *)(unaff_x19 + 0x70);
      *(undefined8 *)(unaff_x19 + 0x4b8) = *(undefined8 *)(unaff_x19 + 0x68);
      *(undefined8 *)(unaff_x19 + 0x4d0) = *(undefined8 *)(unaff_x19 + 0x80);
      *(undefined8 *)(unaff_x19 + 0x4c8) = *(undefined8 *)(unaff_x19 + 0x78);
      *(undefined8 *)(unaff_x19 + 0x4e0) = *(undefined8 *)(unaff_x19 + 0x90);
      *(undefined8 *)(unaff_x19 + 0x4d8) = *(undefined8 *)(unaff_x19 + 0x88);
      *(undefined8 *)(unaff_x19 + 0x4f0) = *(undefined8 *)(unaff_x19 + 0xa0);
      *(undefined8 *)(unaff_x19 + 0x4e8) = *(undefined8 *)(unaff_x19 + 0x98);
      *(undefined8 *)(unaff_x19 + 0x4a0) = *(undefined8 *)(unaff_x19 + 0x50);
      *(undefined8 *)(unaff_x19 + 0x498) = *(undefined8 *)(unaff_x19 + 0x48);
      *(undefined8 *)(unaff_x19 + 0x4b0) = *(undefined8 *)(unaff_x19 + 0x60);
      *(undefined8 *)(unaff_x19 + 0x4a8) = *(undefined8 *)(unaff_x19 + 0x58);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00003080,s_Codex_runtime_error__108accf60,&stack0x000014a0);
      __ZN16codex_mcp_server17codex_tool_runner38create_call_tool_result_with_thread_id17h3601e7ab73c1e301E
                (&stack0x00000550,&stack0x000006b0,&stack0x00002290,1);
      *(undefined1 *)(unaff_x19 + 0x489) = 1;
      lVar17 = *(long *)(unaff_x19 + 0x428);
      plVar13 = *(long **)(unaff_x19 + 0x30);
      if ((plVar13 == (long *)0x0) || (lVar20 = *plVar13, *plVar13 = lVar20 + 1, -1 < lVar20)) {
        *(undefined8 *)(unaff_x19 + 0x5a8) = in_stack_000005c8;
        *(undefined8 *)(unaff_x19 + 0x5a0) = in_stack_000005c0;
        *(undefined8 *)(unaff_x19 + 0x5b8) = in_stack_000005d8;
        *(undefined8 *)(unaff_x19 + 0x5b0) = in_stack_000005d0;
        *(undefined8 *)(unaff_x19 + 0x5c8) = in_stack_000005e8;
        *(undefined8 *)(unaff_x19 + 0x5c0) = in_stack_000005e0;
        *(undefined8 *)(unaff_x19 + 0x5d8) = in_stack_000005f8;
        *(undefined8 *)(unaff_x19 + 0x5d0) = in_stack_000005f0;
        *(undefined8 *)(unaff_x19 + 0x568) = in_stack_00000588;
        *(undefined8 *)(unaff_x19 + 0x560) = in_stack_00000580;
        *(undefined8 *)(unaff_x19 + 0x578) = in_stack_00000598;
        *(undefined8 *)(unaff_x19 + 0x570) = in_stack_00000590;
        *(undefined8 *)(unaff_x19 + 0x588) = in_stack_000005a8;
        *(undefined8 *)(unaff_x19 + 0x580) = in_stack_000005a0;
        *(undefined8 *)(unaff_x19 + 0x598) = in_stack_000005b8;
        *(undefined8 *)(unaff_x19 + 0x590) = in_stack_000005b0;
        *(undefined8 *)(unaff_x19 + 0x538) = in_stack_00000558;
        *(undefined8 *)(unaff_x19 + 0x530) = in_stack_00000550;
        *(undefined8 *)(unaff_x19 + 0x548) = in_stack_00000568;
        *(undefined8 *)(unaff_x19 + 0x540) = in_stack_00000560;
        *(undefined1 *)(unaff_x19 + 0x489) = 0;
        *(undefined8 *)(unaff_x19 + 0x558) = in_stack_00000578;
        *(undefined8 *)(unaff_x19 + 0x550) = in_stack_00000570;
        *(long *)(unaff_x19 + 0x5e0) = lVar17 + 0x10;
        *(long **)(unaff_x19 + 0x5e8) = plVar13;
        *(undefined8 *)(unaff_x19 + 0x5f0) = *(undefined8 *)(unaff_x19 + 0x38);
        *(undefined1 *)(unaff_x19 + 0x6d0) = 0;
        func_0x0001009b7030(unaff_x19 + 0x530);
        FUN_100d5ee48(unaff_x19 + 0x530);
        *(undefined1 *)(unaff_x19 + 0x489) = 0;
        FUN_100df5738(unaff_x19 + 0x498);
        if (*(long *)(unaff_x19 + 0x438) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x440));
        }
        lVar17 = **(long **)(unaff_x19 + 0x430);
        **(long **)(unaff_x19 + 0x430) = lVar17 + -1;
        LORelease();
        if (lVar17 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h640cf78324dfaec9E(unaff_x19 + 0x430);
        }
        plVar13 = *(long **)(unaff_x19 + 0x30);
        if (plVar13 != (long *)0x0) {
          lVar17 = *plVar13;
          *plVar13 = lVar17 + -1;
          LORelease();
          if (lVar17 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
          }
        }
        lVar17 = **(long **)(unaff_x19 + 0x428);
        **(long **)(unaff_x19 + 0x428) = lVar17 + -1;
        LORelease();
        if (lVar17 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1bbe1c54e4418fd8E(unaff_x19 + 0x428);
        }
        lVar17 = **(long **)(unaff_x19 + 0x420);
        **(long **)(unaff_x19 + 0x420) = lVar17 + -1;
        LORelease();
        if (lVar17 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x420);
        }
        uVar15 = 0;
        uVar12 = 1;
        goto LAB_1009bd3f8;
      }
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x480) = 0x101010101010101;
      *(undefined1 *)(unaff_x19 + 0x488) = 1;
      _memcpy(unaff_x19 + 0x230,unaff_x19 + 0x40,0x1f0);
      lVar17 = *(long *)(unaff_x19 + 0x428);
      plVar13 = *(long **)(unaff_x19 + 0x30);
      if ((plVar13 == (long *)0x0) || (lVar20 = *plVar13, *plVar13 = lVar20 + 1, -1 < lVar20)) {
        *(undefined8 *)(unaff_x19 + 0x498) = 1;
        *(long **)(unaff_x19 + 0x4a0) = plVar13;
        *(undefined8 *)(unaff_x19 + 0x4a8) = *(undefined8 *)(unaff_x19 + 0x38);
        *(undefined1 *)(unaff_x19 + 0x4b0) = 1;
        *(undefined8 *)(unaff_x19 + 0x4b9) = *(undefined8 *)(unaff_x19 + 0x28);
        *(undefined8 *)(unaff_x19 + 0x4b1) = *(undefined8 *)(unaff_x19 + 0x20);
        *(long *)(unaff_x19 + 0x4c8) = lVar17 + 0x10;
        *(long *)(unaff_x19 + 0x4d0) = unaff_x19 + 0x230;
        *(undefined1 *)(unaff_x19 + 0x5d8) = 0;
        FUN_1009b7bfc(unaff_x19 + 0x498);
        FUN_100d1867c(unaff_x19 + 0x498);
                    /* WARNING: Could not recover jumptable at 0x0001009bd1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar15 = (*(code *)((ulong)*(ushort *)
                                    (&UNK_108c9c1fe + (ulong)*(uint *)(unaff_x19 + 0x248) * 2) * 4 +
                           0x1009bbc7c))();
        return uVar15;
      }
    }
LAB_1009bdc80:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1009bdc84);
    (*pcVar4)();
  }
  uVar15 = 1;
  uVar12 = 3;
LAB_1009bd3f8:
  *(undefined1 *)(unaff_x19 + 0x493) = uVar12;
  return uVar15;
}

