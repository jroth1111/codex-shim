
/* WARNING: Removing unreachable block (ram,0x0001005ebbdc) */
/* WARNING: Removing unreachable block (ram,0x0001005ebc10) */
/* WARNING: Removing unreachable block (ram,0x0001005ebc38) */
/* WARNING: Removing unreachable block (ram,0x0001005ebc3c) */
/* WARNING: Removing unreachable block (ram,0x0001005ebd0c) */
/* WARNING: Removing unreachable block (ram,0x0001005ebd40) */
/* WARNING: Removing unreachable block (ram,0x0001005ebd68) */
/* WARNING: Removing unreachable block (ram,0x0001005ebd6c) */
/* WARNING: Removing unreachable block (ram,0x0001005ebd78) */
/* WARNING: Removing unreachable block (ram,0x0001005ebdd4) */
/* WARNING: Removing unreachable block (ram,0x0001005ebdc8) */
/* WARNING: Removing unreachable block (ram,0x0001005ebdec) */
/* WARNING: Removing unreachable block (ram,0x0001005ebe18) */
/* WARNING: Removing unreachable block (ram,0x0001005ebe78) */
/* WARNING: Removing unreachable block (ram,0x0001005ebe80) */
/* WARNING: Removing unreachable block (ram,0x0001005ebea8) */
/* WARNING: Removing unreachable block (ram,0x0001005ebeb4) */
/* WARNING: Removing unreachable block (ram,0x0001005ebed0) */
/* WARNING: Removing unreachable block (ram,0x0001005ebedc) */
/* WARNING: Removing unreachable block (ram,0x0001005ebf14) */
/* WARNING: Removing unreachable block (ram,0x0001005eb308) */
/* WARNING: Removing unreachable block (ram,0x0001005eb320) */
/* WARNING: Removing unreachable block (ram,0x0001005eb33c) */
/* WARNING: Removing unreachable block (ram,0x0001005eb340) */
/* WARNING: Removing unreachable block (ram,0x0001005eb388) */
/* WARNING: Removing unreachable block (ram,0x0001005eb344) */
/* WARNING: Removing unreachable block (ram,0x0001005eb34c) */
/* WARNING: Removing unreachable block (ram,0x0001005eb354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005e71f0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 *unaff_x21;
  undefined8 uVar12;
  undefined1 *unaff_x24;
  ulong uVar13;
  long lVar14;
  undefined1 *unaff_x28;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *in_stack_00000080;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 *in_stack_00000360;
  undefined8 in_stack_00007ba0;
  undefined8 in_stack_00007ba8;
  undefined8 in_stack_00007bb0;
  undefined8 in_stack_00007bb8;
  undefined8 in_stack_00007bc0;
  undefined8 in_stack_00007bc8;
  long in_stack_0000ca70;
  undefined8 in_stack_0000ca78;
  undefined8 in_stack_0000ca80;
  long in_stack_0000ca90;
  undefined8 in_stack_0000ca98;
  undefined8 in_stack_0000caa0;
  
  FUN_10053a4a4(&stack0x00007b80);
  (**(code **)*in_stack_00000360)();
  *(long *)(in_stack_000000a0 + 0x628) = **(long **)(in_stack_000000a0 + 0x548) + 0x6f8;
  *(undefined1 *)(in_stack_000000a0 + 0x6a8) = 0;
  FUN_10057797c(&stack0x0000ca70,in_stack_000000a0 + 0x628,in_stack_00000098);
  if (in_stack_0000ca70 == -0x8000000000000000) {
    uVar6 = 7;
LAB_1005e9c18:
    *in_stack_00000080 = uVar6;
    *unaff_x24 = 5;
    *unaff_x21 = 4;
    *(undefined1 *)(in_stack_000000a0 + 0x480) = 0x15;
    return 2;
  }
  *(undefined1 *)(in_stack_000000a0 + 0x61b) = 1;
  *(undefined8 *)(in_stack_000000a0 + 0x5d8) = in_stack_0000ca80;
  *(undefined8 *)(in_stack_000000a0 + 0x5d0) = in_stack_0000ca78;
  *(long *)(in_stack_000000a0 + 0x5c8) = in_stack_0000ca70;
  if ((((*(char *)(in_stack_000000a0 + 0x6a8) == '\x03') &&
       (*(char *)(in_stack_000000a0 + 0x6a0) == '\x03')) &&
      (*(char *)(in_stack_000000a0 + 0x698) == '\x03')) &&
     (*(char *)(in_stack_000000a0 + 0x650) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (in_stack_000000a0 + 0x658);
    if (*(long *)(in_stack_000000a0 + 0x660) != 0) {
      (**(code **)(*(long *)(in_stack_000000a0 + 0x660) + 0x18))
                (*(undefined8 *)(in_stack_000000a0 + 0x668));
    }
  }
  lVar7 = **(long **)(in_stack_000000a0 + 0x548);
  *(long *)(in_stack_000000a0 + 0x638) = lVar7 + 0x6f8;
  *(long *)(in_stack_000000a0 + 0x640) = lVar7 + 0x1118;
  *(undefined1 *)(in_stack_000000a0 + 0x649) = 0;
  FUN_100576380(&stack0x0000ca90,in_stack_000000a0 + 0x628,in_stack_00000098);
  if (in_stack_0000ca90 == -0x8000000000000000) {
    uVar6 = 8;
    goto LAB_1005e9c18;
  }
  *(undefined1 *)(in_stack_000000a0 + 0x61a) = 1;
  *(undefined8 *)(in_stack_000000a0 + 0x5e8) = in_stack_0000ca98;
  *(long *)(in_stack_000000a0 + 0x5e0) = in_stack_0000ca90;
  *(undefined8 *)(in_stack_000000a0 + 0x5f0) = in_stack_0000caa0;
  FUN_100cce0d0(in_stack_000000a0 + 0x628);
  *(long *)(in_stack_000000a0 + 0x628) = **(long **)(in_stack_000000a0 + 0x548) + 0x1118;
  *(undefined1 *)(in_stack_000000a0 + 0x698) = 0;
  lVar7 = FUN_100fd3e50((undefined8 *)(in_stack_000000a0 + 0x628),in_stack_00000098);
  if (lVar7 == 0) {
    uVar6 = 9;
    goto LAB_1005e9c18;
  }
  if (((*(char *)(in_stack_000000a0 + 0x698) == '\x03') &&
      (*(char *)(in_stack_000000a0 + 0x690) == '\x03')) &&
     (*(char *)(in_stack_000000a0 + 0x648) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (in_stack_000000a0 + 0x650);
    if (*(long *)(in_stack_000000a0 + 0x658) != 0) {
      (**(code **)(*(long *)(in_stack_000000a0 + 0x658) + 0x18))
                (*(undefined8 *)(in_stack_000000a0 + 0x660));
    }
  }
  if (*(long *)(lVar7 + 0x28) == -0x8000000000000000) {
    __ZN78__LT_codex_core__state__turn__ActiveTurn_u20_as_u20_core__default__Default_GT_7default17h4b4fd0cacdb2b899E
              (&stack0x00007b80);
    *(undefined8 *)(lVar7 + 0x40) = param_1;
    *(undefined8 *)(lVar7 + 0x38) = 1;
    *(undefined8 *)(lVar7 + 0x50) = in_stack_00007ba8;
    *(undefined8 *)(lVar7 + 0x48) = in_stack_00007ba0;
    *(undefined8 *)(lVar7 + 0x60) = in_stack_00007bb8;
    *(undefined8 *)(lVar7 + 0x58) = in_stack_00007bb0;
    *(undefined8 *)(lVar7 + 0x70) = in_stack_00007bc8;
    *(undefined8 *)(lVar7 + 0x68) = in_stack_00007bc0;
    *(undefined1 **)(lVar7 + 0x30) = &stack0x000006b0;
    *(long *)(lVar7 + 0x28) = 1;
  }
  plVar8 = *(long **)(lVar7 + 0x70);
  lVar2 = *plVar8;
  *plVar8 = lVar2 + 1;
  if (lVar2 < 0) goto LAB_1005ea894;
  *(long **)(in_stack_000000a0 + 0x5f8) = plVar8;
  __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar7,1);
  *(undefined8 *)(in_stack_000000a0 + 0x630) = *(undefined8 *)(in_stack_000000a0 + 0x598);
  *(undefined8 *)(in_stack_000000a0 + 0x628) = *(undefined8 *)(in_stack_000000a0 + 0x590);
  *(undefined8 *)(in_stack_000000a0 + 0x640) = *(undefined8 *)(in_stack_000000a0 + 0x5a8);
  *(undefined8 *)(in_stack_000000a0 + 0x638) = *(undefined8 *)(in_stack_000000a0 + 0x5a0);
  *(undefined8 *)(in_stack_000000a0 + 0x648) = *(undefined8 *)(in_stack_000000a0 + 0x5b0);
  *(long *)(in_stack_000000a0 + 0x650) = *(long *)(in_stack_000000a0 + 0x5f8) + 0x10;
  *(undefined1 *)(in_stack_000000a0 + 0x6c0) = 0;
  lVar7 = FUN_100fd3e50(in_stack_000000a0 + 0x650,in_stack_00000098);
  if (lVar7 == 0) {
    uVar6 = 10;
    goto LAB_1005e9c18;
  }
  if (((*(char *)(in_stack_000000a0 + 0x6c0) == '\x03') &&
      (*(char *)(in_stack_000000a0 + 0x6b8) == '\x03')) &&
     (*(char *)(in_stack_000000a0 + 0x670) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (in_stack_000000a0 + 0x678);
    if (*(long *)(in_stack_000000a0 + 0x680) != 0) {
      (**(code **)(*(long *)(in_stack_000000a0 + 0x680) + 0x18))
                (*(undefined8 *)(in_stack_000000a0 + 0x688));
    }
  }
  uVar15 = *(undefined8 *)(in_stack_000000a0 + 0x630);
  uVar12 = *(undefined8 *)(in_stack_000000a0 + 0x628);
  uVar17 = *(undefined8 *)(in_stack_000000a0 + 0x640);
  uVar16 = *(undefined8 *)(in_stack_000000a0 + 0x638);
  *(undefined8 *)(lVar7 + 0x180) = *(undefined8 *)(in_stack_000000a0 + 0x648);
  *(undefined8 *)(lVar7 + 0x168) = uVar15;
  *(undefined8 *)(lVar7 + 0x160) = uVar12;
  *(undefined8 *)(lVar7 + 0x178) = uVar17;
  *(undefined8 *)(lVar7 + 0x170) = uVar16;
  __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar7,1);
  *(undefined1 *)(in_stack_000000a0 + 0x61b) = 0;
  puVar11 = (undefined8 *)(in_stack_000000a0 + 0x600);
  FUN_100e8fbb4(puVar11,&stack0x00007b80);
  *(undefined1 *)(in_stack_000000a0 + 0x61d) = 1;
  *(undefined1 *)(in_stack_000000a0 + 0x61a) = 0;
  lVar7 = *(long *)(in_stack_000000a0 + 0x5e0);
  lVar14 = *(long *)(in_stack_000000a0 + 0x5e8);
  uVar13 = *(ulong *)(in_stack_000000a0 + 0x5f0);
  lVar2 = *(long *)(in_stack_000000a0 + 0x610);
  if ((ulong)(*(long *)(in_stack_000000a0 + 0x600) - lVar2) < uVar13) {
    thunk_FUN_108855060(puVar11,lVar2,uVar13,8,200);
    lVar2 = *(long *)(in_stack_000000a0 + 0x610);
  }
  _memcpy(*(long *)(in_stack_000000a0 + 0x608) + lVar2 * 200,lVar14,uVar13 * 200);
  *(ulong *)(in_stack_000000a0 + 0x610) = lVar2 + uVar13;
  if (lVar7 != 0) {
    _free(lVar14);
  }
  lVar2 = **(long **)(in_stack_000000a0 + 0x548);
  *(undefined1 *)(in_stack_000000a0 + 0x61d) = 0;
  *(undefined8 *)(in_stack_000000a0 + 0x630) = *(undefined8 *)(in_stack_000000a0 + 0x608);
  *(undefined8 *)(in_stack_000000a0 + 0x628) = *puVar11;
  *(undefined8 *)(in_stack_000000a0 + 0x638) = *(undefined8 *)(in_stack_000000a0 + 0x610);
  *(long *)(in_stack_000000a0 + 0x640) = lVar2 + 0x6f8;
  *(long *)(in_stack_000000a0 + 0x648) = *(long *)(in_stack_000000a0 + 0x5f8) + 0x10;
  *(undefined1 *)(in_stack_000000a0 + 0x6e0) = 0;
  uVar4 = FUN_100577748(in_stack_000000a0 + 0x628,in_stack_00000098);
  if ((uVar4 & 1) != 0) {
    uVar6 = 0xb;
    goto LAB_1005e9c18;
  }
  FUN_100d098c4(in_stack_000000a0 + 0x628);
  *(long *)(in_stack_000000a0 + 0x628) = **(long **)(in_stack_000000a0 + 0x548) + 0x10;
  *(long *)(in_stack_000000a0 + 0x630) = *(long *)(in_stack_000000a0 + 0x550) + 0x10;
  *(long *)(in_stack_000000a0 + 0x638) = in_stack_000000a0 + 0x590;
  *(undefined1 *)(in_stack_000000a0 + 0x678) = 0;
  uVar4 = FUN_100541264(in_stack_000000a0 + 0x628,in_stack_00000098);
  if ((uVar4 & 1) != 0) {
    uVar6 = 0xc;
    goto LAB_1005e9c18;
  }
  if (*(char *)(in_stack_000000a0 + 0x678) == '\x03') {
    uVar12 = *(undefined8 *)(in_stack_000000a0 + 0x668);
    puVar11 = *(undefined8 **)(in_stack_000000a0 + 0x670);
    pcVar9 = (code *)*puVar11;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar12);
    }
    if (puVar11[1] != 0) {
      _free(uVar12);
    }
  }
  plVar8 = *(long **)(*(long *)(in_stack_000000a0 + 0x550) + 0x7b8);
  lVar2 = *plVar8;
  *plVar8 = lVar2 + 1;
  if (lVar2 < 0) goto LAB_1005ea894;
  *(long **)(in_stack_000000a0 + 0x628) = plVar8;
  *(undefined1 *)(in_stack_000000a0 + 0x61c) = 1;
  *(long *)(in_stack_000000a0 + 0x630) = **(long **)(in_stack_000000a0 + 0x548) + 0x1118;
  *(undefined1 *)(in_stack_000000a0 + 0x6a0) = 0;
  lVar2 = FUN_100fd3e50(in_stack_000000a0 + 0x630,in_stack_00000098);
  if (lVar2 == 0) {
    uVar6 = 0xd;
    goto LAB_1005e9c18;
  }
  if (((*(char *)(in_stack_000000a0 + 0x6a0) == '\x03') &&
      (*(char *)(in_stack_000000a0 + 0x698) == '\x03')) &&
     (*(char *)(in_stack_000000a0 + 0x650) == '\x04')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (in_stack_000000a0 + 0x658);
    if (*(long *)(in_stack_000000a0 + 0x660) != 0) {
      (**(code **)(*(long *)(in_stack_000000a0 + 0x660) + 0x18))
                (*(undefined8 *)(in_stack_000000a0 + 0x668));
    }
  }
  if (*(long *)(lVar2 + 0x28) == -0x8000000000000000) {
    __ZN78__LT_codex_core__state__turn__ActiveTurn_u20_as_u20_core__default__Default_GT_7default17h4b4fd0cacdb2b899E
              (&stack0x00007b80);
    *(ulong *)(lVar2 + 0x40) = lVar14 + uVar13 * 200;
    *(long *)(lVar2 + 0x38) = lVar7;
    *(undefined8 *)(lVar2 + 0x50) = in_stack_00007ba8;
    *(undefined8 *)(lVar2 + 0x48) = in_stack_00007ba0;
    *(undefined8 *)(lVar2 + 0x60) = in_stack_00007bb8;
    *(undefined8 *)(lVar2 + 0x58) = in_stack_00007bb0;
    *(undefined8 *)(lVar2 + 0x70) = in_stack_00007bc8;
    *(undefined8 *)(lVar2 + 0x68) = in_stack_00007bc0;
    *(long *)(lVar2 + 0x30) = lVar14;
    *(long *)(lVar2 + 0x28) = lVar14;
  }
  lVar7 = **(long **)(in_stack_000000a0 + 0x5c0);
  **(long **)(in_stack_000000a0 + 0x5c0) = lVar7 + 1;
  if (lVar7 < 0) goto LAB_1005ea894;
  plVar8 = (long *)**(undefined8 **)(in_stack_000000a0 + 0x548);
  lVar7 = *plVar8;
  *plVar8 = lVar7 + 1;
  if (lVar7 < 0) goto LAB_1005ea894;
  plVar10 = *(long **)(in_stack_000000a0 + 0x628);
  lVar7 = *plVar10;
  *plVar10 = lVar7 + 1;
  if (lVar7 < 0) goto LAB_1005ea894;
  puVar11 = (undefined8 *)_malloc(0x20);
  if (puVar11 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
    goto LAB_1005ea894;
  }
  puVar11[1] = 1;
  *puVar11 = 1;
  puVar11[3] = plVar10;
  puVar11[2] = plVar8;
  lVar7 = **(long **)(in_stack_000000a0 + 0x550);
  **(long **)(in_stack_000000a0 + 0x550) = lVar7 + 1;
  if ((lVar7 < 0) ||
     (lVar7 = **(long **)(in_stack_000000a0 + 0x570),
     **(long **)(in_stack_000000a0 + 0x570) = lVar7 + 1, lVar7 < 0)) goto LAB_1005ea894;
  __ZN10tokio_util4sync18cancellation_token17CancellationToken11child_token17hbb1a1ff9d9cc5a86E
            (in_stack_000000a0 + 0x5b8);
  __ZN10codex_core7session12turn_context11TurnContext38effective_reasoning_effort_for_tracing17h6aff010c206be8cbE
            (&stack0x0000cab0,*(long *)(in_stack_000000a0 + 0x550) + 0x10);
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
     (((bRam000000010b62a4a8 - 1 < 2 ||
       ((bRam000000010b62a4a8 != 0 &&
        (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
                           ), cVar3 != '\0')))) &&
      (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
                          ), (uVar13 & 1) != 0)))) {
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (&stack0x00000600,
               ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08bf4b6359c8116cE
               ,&stack0x00005490);
  }
  else if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
    __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x00005490,&stack0x00002da0);
  }
  *(undefined1 *)(in_stack_000000a0 + 0x621) = 0;
  do {
    lVar7 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar7;
  } while (bVar1);
  puVar5 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar5[9] == '\x01') {
LAB_1005eba70:
    _memcpy(&stack0x00002da0,&stack0x000006b0,0x26e8);
    if (0x7ffffffffffffffe < *puVar5) {
      FUN_107c05c9c(&UNK_10b2435a0);
      goto LAB_1005ea894;
    }
    *puVar5 = *puVar5 + 1;
    uVar13 = puVar5[1];
    _memcpy(&stack0x00005490,&stack0x000006b0,0x26e8);
    if (uVar13 != 2) {
      if ((uVar13 & 1) == 0) {
        plVar8 = (long *)puVar5[2];
        lVar7 = *plVar8;
        *plVar8 = lVar7 + 1;
        if ((-1 < lVar7) &&
           ((plVar8 = (long *)plVar8[0x5e], plVar8 == (long *)0x0 ||
            (lVar7 = *plVar8, *plVar8 = lVar7 + 1, -1 < lVar7)))) {
          _memcpy(&stack0x0000a314,&stack0x00002da0,0x26d8);
          _memcpy((ulong)&stack0x00007b80 | 0x34,&stack0x0000a310,0x26dc);
          _posix_memalign(&stack0x0000c9f8,0x80,0x2780);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x2780);
        }
      }
      else {
        plVar8 = (long *)puVar5[2];
        lVar7 = *plVar8;
        *plVar8 = lVar7 + 1;
        if ((-1 < lVar7) &&
           ((plVar8 = (long *)plVar8[0x4a], plVar8 == (long *)0x0 ||
            (lVar7 = *plVar8, *plVar8 = lVar7 + 1, -1 < lVar7)))) {
          _memcpy(&stack0x0000a314,&stack0x00002da0,0x26d8);
          _memcpy((ulong)&stack0x00007b80 | 0x34,&stack0x0000a310,0x26dc);
          _posix_memalign(&stack0x0000c9f8,0x80,0x2780);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x2780);
        }
      }
      goto LAB_1005ea894;
    }
    FUN_100dacee0(&stack0x00005490);
    uVar6 = 0;
    *puVar5 = *puVar5 - 1;
  }
  else {
    if ((char)puVar5[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar5,&DAT_100c35d48);
      *(undefined1 *)(puVar5 + 9) = 1;
      goto LAB_1005eba70;
    }
    FUN_100dacee0(&stack0x000006b0);
    uVar6 = 1;
  }
  *unaff_x28 = uVar6;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00007b80,&UNK_10b216f68);
LAB_1005ea894:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1005ea898);
  (*pcVar9)();
}

